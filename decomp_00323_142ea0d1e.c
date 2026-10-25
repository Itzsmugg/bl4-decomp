// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ea0d1e FUN_142ea0d1e body=96 status=ok
// SIG undefined FUN_142ea0d1e(void)

undefined8 FUN_142ea0d1e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ea0e14();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca24540,1);
  return uVar3;
}



// FUNCTION 142ea0d7e FUN_142ea0d7e body=138 status=ok
// SIG undefined FUN_142ea0d7e(void)

void * FUN_142ea0d7e(void)

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



// FUNCTION 142ea0e14 FUN_142ea0e14 body=445 status=ok
// SIG undefined FUN_142ea0e14(void)

void FUN_142ea0e14(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca245c0) {
    FUN_144b3d300(&DAT_14ca245c0);
    if (DAT_14ca245c0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ea0fde;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x160;
      local_88 = 0x524;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca24540,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ea0fd2);
      _Init_thread_footer(&DAT_14ca245c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea0fde FUN_142ea0fde body=136 status=ok
// SIG undefined FUN_142ea0fde(void)

code * FUN_142ea0fde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1066;
}



// FUNCTION 142ea1066 FUN_142ea1066 body=136 status=ok
// SIG undefined FUN_142ea1066(void)

code * FUN_142ea1066(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000543;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea10ee;
}



// FUNCTION 142ea10ee FUN_142ea10ee body=136 status=ok
// SIG undefined FUN_142ea10ee(void)

code * FUN_142ea10ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyTextureLowResExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000541;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1176;
}



// FUNCTION 142ea1176 FUN_142ea1176 body=144 status=ok
// SIG undefined FUN_142ea1176(void)

code * FUN_142ea1176(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9fbc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BackgroundConvolution";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000540;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca24058;
  return FUN_142ea1206;
}



// FUNCTION 142ea1206 FUN_142ea1206 body=144 status=ok
// SIG undefined FUN_142ea1206(void)

code * FUN_142ea1206(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9fbc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SlightOutOfFocusConvolution";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000053f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca24058;
  return FUN_142ea1296;
}



// FUNCTION 142ea1296 FUN_142ea1296 body=144 status=ok
// SIG undefined FUN_142ea1296(void)

code * FUN_142ea1296(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9fbc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ForegroundHoleFillingConvolution";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000053e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca24058;
  return FUN_142ea1326;
}



// FUNCTION 142ea1326 FUN_142ea1326 body=144 status=ok
// SIG undefined FUN_142ea1326(void)

code * FUN_142ea1326(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9fbc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ForegroundConvolution";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000053d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca24058;
  return FUN_142ea13b6;
}



// FUNCTION 142ea13b6 FUN_142ea13b6 body=136 status=ok
// SIG undefined FUN_142ea13b6(void)

code * FUN_142ea13b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000053c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea143e;
}



// FUNCTION 142ea143e FUN_142ea143e body=136 status=ok
// SIG undefined FUN_142ea143e(void)

code * FUN_142ea143e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FullResDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000539;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea14c6;
}



// FUNCTION 142ea14c6 FUN_142ea14c6 body=136 status=ok
// SIG undefined FUN_142ea14c6(void)

code * FUN_142ea14c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LowResDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd800000538;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea154e;
}



// FUNCTION 142ea154e FUN_142ea154e body=136 status=ok
// SIG undefined FUN_142ea154e(void)

code * FUN_142ea154e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneSeparateTranslucencyModulateColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000537;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea15d6;
}



// FUNCTION 142ea15d6 FUN_142ea15d6 body=136 status=ok
// SIG undefined FUN_142ea15d6(void)

code * FUN_142ea15d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneSeparateTranslucency";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000536;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea165e;
}



// FUNCTION 142ea165e FUN_142ea165e body=136 status=ok
// SIG undefined FUN_142ea165e(void)

code * FUN_142ea165e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneSeparateCoc";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000535;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea16e6;
}



// FUNCTION 142ea16e6 FUN_142ea16e6 body=136 status=ok
// SIG undefined FUN_142ea16e6(void)

code * FUN_142ea16e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000534;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea176e;
}



// FUNCTION 142ea176e FUN_142ea176e body=136 status=ok
// SIG undefined FUN_142ea176e(void)

code * FUN_142ea176e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000533;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea17f6;
}



// FUNCTION 142ea17f6 FUN_142ea17f6 body=136 status=ok
// SIG undefined FUN_142ea17f6(void)

code * FUN_142ea17f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BokehLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000530;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea187e;
}



// FUNCTION 142ea187e FUN_142ea187e body=136 status=ok
// SIG undefined FUN_142ea187e(void)

code * FUN_142ea187e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EncodedCocRadiusToRecombineCocRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa40000052e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1906;
}



// FUNCTION 142ea1906 FUN_142ea1906 body=136 status=ok
// SIG undefined FUN_142ea1906(void)

code * FUN_142ea1906(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyUpscaling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000052d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea198e;
}



// FUNCTION 142ea198e FUN_142ea198e body=136 status=ok
// SIG undefined FUN_142ea198e(void)

code * FUN_142ea198e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyBilinearUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000052c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1a16;
}



// FUNCTION 142ea1a16 FUN_142ea1a16 body=136 status=ok
// SIG undefined FUN_142ea1a16(void)

code * FUN_142ea1a16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DOFBufferUVMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000052b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1a9e;
}



// FUNCTION 142ea1a9e FUN_142ea1a9e body=136 status=ok
// SIG undefined FUN_142ea1a9e(void)

code * FUN_142ea1a9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadIdToDOFBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000052a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1b26;
}



// FUNCTION 142ea1b26 FUN_142ea1b26 body=136 status=ok
// SIG undefined FUN_142ea1b26(void)

code * FUN_142ea1b26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000529;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1bae;
}



// FUNCTION 142ea1bae FUN_142ea1bae body=136 status=ok
// SIG undefined FUN_142ea1bae(void)

code * FUN_142ea1bae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000528;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea1c36;
}



// FUNCTION 142ea1c36 FUN_142ea1c36 body=144 status=ok
// SIG undefined FUN_142ea1c36(void)

code * FUN_142ea1c36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99660();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CocModel";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCocModelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000526;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d10;
  return FUN_142ea1cc6;
}



// FUNCTION 142ea1cc6 FUN_142ea1cc6 body=138 status=ok
// SIG undefined FUN_142ea1cc6(void)

undefined1 * FUN_142ea1cc6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x525;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return &LAB_142ea1d50;
}



// FUNCTION 142ea1d54 FUN_142ea1d54 body=44 status=ok
// SIG undefined FUN_142ea1d54(void)

void FUN_142ea1d54(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ea1d84 FUN_142ea1d84 body=29 status=ok
// SIG undefined FUN_142ea1d84(void)

undefined8 FUN_142ea1d84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea1da2 FUN_142ea1da2 body=38 status=ok
// SIG undefined FUN_142ea1da2(void)

undefined8 FUN_142ea1da2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea1dc8 FUN_142ea1dc8 body=1294 status=ok
// SIG undefined FUN_142ea1dc8(void)

void FUN_142ea1dc8(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea22d8 FUN_142ea22d8 body=29 status=ok
// SIG undefined FUN_142ea22d8(void)

undefined8 FUN_142ea22d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea22f6 FUN_142ea22f6 body=38 status=ok
// SIG undefined FUN_142ea22f6(void)

undefined8 FUN_142ea22f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea231c FUN_142ea231c body=1294 status=ok
// SIG undefined FUN_142ea231c(void)

void FUN_142ea231c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea282b FUN_142ea282b body=494 status=ok
// SIG undefined FUN_142ea282b(void)

undefined8 * FUN_142ea282b(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *param_3;
  uVar2 = *(undefined1 *)(lVar4 + 0x94);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar6 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  puVar6[1] = *(undefined8 *)(lVar4 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar6 + 6) = uVar2;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar6 + 0x35) = 0;
  puVar6[8] = lVar4;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar6;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    uVar2 = *(undefined1 *)(lVar4 + 0x94);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
      FUN_140023dd8(plVar1,0x50);
      puVar6 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar5;
    puVar6[1] = *(undefined8 *)(lVar4 + 8);
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar6 + 5) = 0;
    *puVar6 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar6 + 6) = uVar2;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x35) = 0;
    puVar6[8] = lVar4;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[1] = puVar6;
  }
  return param_1;
}



// FUNCTION 142ea2a1a FUN_142ea2a1a body=29 status=ok
// SIG undefined FUN_142ea2a1a(void)

undefined8 FUN_142ea2a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea2a38 FUN_142ea2a38 body=38 status=ok
// SIG undefined FUN_142ea2a38(void)

undefined8 FUN_142ea2a38(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea2a5e FUN_142ea2a5e body=1294 status=ok
// SIG undefined FUN_142ea2a5e(void)

void FUN_142ea2a5e(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea2f6e FUN_142ea2f6e body=29 status=ok
// SIG undefined FUN_142ea2f6e(void)

undefined8 FUN_142ea2f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea2f8c FUN_142ea2f8c body=38 status=ok
// SIG undefined FUN_142ea2f8c(void)

undefined8 FUN_142ea2f8c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea2fb2 FUN_142ea2fb2 body=1294 status=ok
// SIG undefined FUN_142ea2fb2(void)

void FUN_142ea2fb2(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea34c2 FUN_142ea34c2 body=29 status=ok
// SIG undefined FUN_142ea34c2(void)

undefined8 FUN_142ea34c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea34e0 FUN_142ea34e0 body=38 status=ok
// SIG undefined FUN_142ea34e0(void)

undefined8 FUN_142ea34e0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea3506 FUN_142ea3506 body=1607 status=ok
// SIG undefined FUN_142ea3506(void)

void FUN_142ea3506(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = (int)local_128;
  if ((longlong)(int)local_128 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar6 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar6 = uStack_130;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_128,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar6,(longlong)(int)local_128);
  }
  puVar10[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar10 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_120;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_d8,0);
    puVar8 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 5;
    }
    memcpy(puVar8,puVar6,(longlong)iStack_d8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar10 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_c4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar2;
  *(float *)(puVar10 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  lVar7 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = (undefined8 *)0x0;
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  FUN_144b0e33a(param_2,&local_138);
  local_f8 = DAT_14c9c0d98;
  local_108 = DAT_14c9c0ee8;
  uStack_100 = DAT_14c9c0db0;
  local_e0 = (uint)DAT_14ca84e08 * 5;
  local_138 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar3,lVar9,1);
    }
  }
  uStack_130 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar3,lVar9,1);
    }
  }
  local_128 = lVar7;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_70 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_118._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_110._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_128;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_128._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar7;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar3,lVar9,1);
    }
  }
  FUN_142ea029a();
  local_148 = uVar4;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca24228);
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar3,lVar9,1);
    }
  }
  FUN_142ea029a();
  local_148 = uVar4;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca24228);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  uVar5 = DAT_14ca213a8;
  iVar1 = *(int *)(param_1 + 0x1e8);
  uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x58) + 0x10);
  if (DAT_14ca84e08 == 1) {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a1e78c8;
    puVar10[2] = uVar4;
    *(int *)(puVar10 + 3) = iVar1 << 4;
  }
  else {
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a20cb88;
    puVar10[2] = uVar5;
    puVar10[3] = uVar4;
    *(int *)(puVar10 + 4) = iVar1 * 0x14;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea3b4e FUN_142ea3b4e body=243 status=ok
// SIG undefined FUN_142ea3b4e(void)

longlong * FUN_142ea3b4e(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460190e6();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca1d748);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ea3c4e FUN_142ea3c4e body=481 status=ok
// SIG undefined FUN_142ea3c4e(void)

void FUN_142ea3c4e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147283674(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea3e30 FUN_142ea3e30 body=232 status=ok
// SIG undefined FUN_142ea3e30(void)

void FUN_142ea3e30(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea3f18 FUN_142ea3f18 body=81 status=ok
// SIG undefined FUN_142ea3f18(void)

void FUN_142ea3f18(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147283717(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea3f6a FUN_142ea3f6a body=481 status=ok
// SIG undefined FUN_142ea3f6a(void)

void FUN_142ea3f6a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147283a54(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea414c FUN_142ea414c body=232 status=ok
// SIG undefined FUN_142ea414c(void)

void FUN_142ea414c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea4234 FUN_142ea4234 body=81 status=ok
// SIG undefined FUN_142ea4234(void)

void FUN_142ea4234(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147283af7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea4286 FUN_142ea4286 body=481 status=ok
// SIG undefined FUN_142ea4286(void)

void FUN_142ea4286(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147283ef0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea4468 FUN_142ea4468 body=232 status=ok
// SIG undefined FUN_142ea4468(void)

void FUN_142ea4468(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea4550 FUN_142ea4550 body=81 status=ok
// SIG undefined FUN_142ea4550(void)

void FUN_142ea4550(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147283f93(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea45d8 FUN_142ea45d8 body=38 status=ok
// SIG undefined FUN_142ea45d8(void)

undefined8 FUN_142ea45d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea45fe FUN_142ea45fe body=606 status=ok
// SIG undefined FUN_142ea45fe(void)

void FUN_142ea45fe(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar7 = local_b8;
    }
    FUN_1446fe144(puVar8 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 2;
    }
    memcpy(puVar3,puVar7,(longlong)local_b0);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar7 = local_a8;
    }
    FUN_1446fe1b8(puVar8 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 5;
    }
    memcpy(puVar3,puVar7,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar8 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f6bd94();
  FUN_14728412b(uVar4,param_1 + 0x1c0,uVar1);
  local_c8 = *(undefined4 *)(param_1 + 0x1dc);
  local_d0 = *(undefined4 *)(param_1 + 0x1d8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x13ae8);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  local_d8 = uVar4;
  FUN_147412f8e(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x13ae0),lVar5,uVar1);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea485e FUN_142ea485e body=518 status=ok
// SIG undefined FUN_142ea485e(void)

void FUN_142ea485e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_147284350(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea4a66 FUN_142ea4a66 body=123 status=ok
// SIG undefined FUN_142ea4a66(void)

void FUN_142ea4a66(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145e8d7a4();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca21cd8,uVar1);
  return;
}



// FUNCTION 142ea4ae2 FUN_142ea4ae2 body=38 status=ok
// SIG undefined FUN_142ea4ae2(void)

undefined8 FUN_142ea4ae2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea4b08 FUN_142ea4b08 body=595 status=ok
// SIG undefined FUN_142ea4b08(void)

void FUN_142ea4b08(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar7 = local_b0;
    }
    FUN_1446fe144(puVar8 + 2,local_a8,0);
    puVar3 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 2;
    }
    memcpy(puVar3,puVar7,(longlong)local_a8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar7 = local_a0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_58,0);
    puVar3 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar8 + 5;
    }
    memcpy(puVar3,puVar7,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145e8dd14();
  FUN_147284761(uVar4,param_1 + 0x1c0,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x13ae8);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = uVar4;
  FUN_147412f8e(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x13ae0),lVar5,uVar1);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea4d5c FUN_142ea4d5c body=481 status=ok
// SIG undefined FUN_142ea4d5c(void)

void FUN_142ea4d5c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14728494c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea4f3e FUN_142ea4f3e body=232 status=ok
// SIG undefined FUN_142ea4f3e(void)

void FUN_142ea4f3e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea5026 FUN_142ea5026 body=81 status=ok
// SIG undefined FUN_142ea5026(void)

void FUN_142ea5026(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472849ef(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea5078 FUN_142ea5078 body=38 status=ok
// SIG undefined FUN_142ea5078(void)

undefined8 FUN_142ea5078(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea509e FUN_142ea509e body=685 status=ok
// SIG undefined FUN_142ea509e(void)

void FUN_142ea509e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      _Src = local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = (int)local_60;
  if ((longlong)(int)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    puVar1 = puStack_68;
    if (puStack_68 == (undefined8 *)0x0) {
      puVar1 = &local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,(int)local_60,0);
    _Dst = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      _Dst = puVar2 + 5;
    }
    memcpy(_Dst,puVar1,(longlong)(int)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_58._4_4_;
  *(uint *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (puStack_68 != (undefined8 *)0x0) {
    FUN_1400020a8(puStack_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_e8 = *(undefined8 **)(param_1 + 0x1c8);
  local_d0 = DAT_14ca44d40;
  local_c8 = DAT_14ca44d68;
  local_e0 = &local_d0;
  local_d8 = local_c0;
  FUN_147284c26(param_1 + 0x1d8,*(longlong *)(param_1 + 0x1b8),
                *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 8),*(undefined8 *)(param_1 + 0x1c0)
               );
  local_d0 = *(undefined8 *)(param_1 + 0x1e8);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1f0));
  local_e8 = &local_d0;
  FUN_147284b83(param_2,param_1 + 0x1d8,local_c0,*(undefined8 *)(param_1 + 0x1d0));
  if ((0x50 < uStack_50._2_2_) && (local_a0 != 0)) {
    FUN_1400020a8();
  }
  uStack_50 = uStack_50 & 0xffff;
  local_a0 = 0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea534c FUN_142ea534c body=459 status=ok
// SIG undefined FUN_142ea534c(void)

void FUN_142ea534c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar11 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar11 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar11,1);
    }
  }
  lVar11 = FUN_144821ef4(param_1);
  FUN_1448a2d16(param_3,lVar11,0);
  FUN_14727d896();
  FUN_147284e18(lVar11,param_2,param_4);
  uVar12 = FUN_140029432(param_1,uVar10,0);
  param_1[0x37] = uVar10;
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar13 + 3;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x20);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 3;
  }
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a37d340;
  puVar13[2] = uVar12;
  iVar8 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar11 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar11 + 0x40)) == iVar9 < 0) {
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
    uVar12 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar10;
    puVar13[3] = uVar7;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar6;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar5;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar12;
    *(undefined4 *)(puVar13 + 10) = uVar1;
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



// FUNCTION 142ea5517 FUN_142ea5517 body=81 status=ok
// SIG undefined FUN_142ea5517(void)

void FUN_142ea5517(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147284e3c(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea5568 FUN_142ea5568 body=38 status=ok
// SIG undefined FUN_142ea5568(void)

undefined8 FUN_142ea5568(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea558e FUN_142ea558e body=685 status=ok
// SIG undefined FUN_142ea558e(void)

void FUN_142ea558e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      _Src = local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = (int)local_60;
  if ((longlong)(int)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    puVar1 = puStack_68;
    if (puStack_68 == (undefined8 *)0x0) {
      puVar1 = &local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,(int)local_60,0);
    _Dst = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      _Dst = puVar2 + 5;
    }
    memcpy(_Dst,puVar1,(longlong)(int)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_58._4_4_;
  *(uint *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (puStack_68 != (undefined8 *)0x0) {
    FUN_1400020a8(puStack_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_e8 = *(undefined8 **)(param_1 + 0x1c8);
  local_d0 = DAT_14ca44d40;
  local_c8 = DAT_14ca44d68;
  local_e0 = &local_d0;
  local_d8 = local_c0;
  FUN_147285072(param_1 + 0x1d8,*(longlong *)(param_1 + 0x1b8),
                *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 8),*(undefined8 *)(param_1 + 0x1c0)
               );
  local_d0 = *(undefined8 *)(param_1 + 0x1e8);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1f0));
  local_e8 = &local_d0;
  FUN_147284fcf(param_2,param_1 + 0x1d8,local_c0,*(undefined8 *)(param_1 + 0x1d0));
  if ((0x50 < uStack_50._2_2_) && (local_a0 != 0)) {
    FUN_1400020a8();
  }
  uStack_50 = uStack_50 & 0xffff;
  local_a0 = 0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea583c FUN_142ea583c body=459 status=ok
// SIG undefined FUN_142ea583c(void)

void FUN_142ea583c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar11 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar11 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar11,1);
    }
  }
  lVar11 = FUN_144821ef4(param_1);
  FUN_1448a2d16(param_3,lVar11,0);
  FUN_14727d262();
  FUN_147285264(lVar11,param_2,param_4);
  uVar12 = FUN_140029432(param_1,uVar10,0);
  param_1[0x37] = uVar10;
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar13 + 3;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x20);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 3;
  }
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a37d340;
  puVar13[2] = uVar12;
  iVar8 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar11 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar11 + 0x40)) == iVar9 < 0) {
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
    uVar12 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar10;
    puVar13[3] = uVar7;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar6;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar5;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar12;
    *(undefined4 *)(puVar13 + 10) = uVar1;
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



// FUNCTION 142ea5a07 FUN_142ea5a07 body=81 status=ok
// SIG undefined FUN_142ea5a07(void)

void FUN_142ea5a07(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147285288(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea5a58 FUN_142ea5a58 body=481 status=ok
// SIG undefined FUN_142ea5a58(void)

void FUN_142ea5a58(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472855c4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea5c3a FUN_142ea5c3a body=232 status=ok
// SIG undefined FUN_142ea5c3a(void)

void FUN_142ea5c3a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea5d22 FUN_142ea5d22 body=81 status=ok
// SIG undefined FUN_142ea5d22(void)

void FUN_142ea5d22(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147285667(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea5d74 FUN_142ea5d74 body=245 status=ok
// SIG undefined FUN_142ea5d74(void)

longlong * FUN_142ea5d74(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_144a8a5d4();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ea5e6a FUN_142ea5e6a body=38 status=ok
// SIG undefined FUN_142ea5e6a(void)

undefined8 FUN_142ea5e6a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea5e90 FUN_142ea5e90 body=953 status=ok
// SIG undefined FUN_142ea5e90(void)

void FUN_142ea5e90(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *_Dst;
  longlong lVar8;
  undefined1 *_Src;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar4 = &local_c0;
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      _Dst = puVar9 + 2;
    }
    memcpy(_Dst,puVar4,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar9 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar5 = FUN_144821ef4(param_2);
  uVar10 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f53400();
  FUN_1472858bb(uVar5,param_1 + 0x1c0,uVar10);
  local_d8 = uVar5;
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x2e0);
    if (0 < iVar1) {
      uVar10 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x308) + 0x10);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae8);
      if (*(longlong *)(param_1 + 0x1c0) == 0) {
        lVar7 = 0;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
        if (lVar7 == 0) {
          lVar7 = FUN_1400bafc2(lVar6,lVar8,1);
        }
      }
      local_d0 = uVar10;
      local_c8 = iVar1 * 0xc;
      FUN_1474130ae(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae0),lVar7,uVar5);
      goto LAB_142ea61e5;
    }
  }
  if (*(char *)(param_1 + 0x1d9) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x1d4);
    iVar2 = *(int *)(param_1 + 0x1d0);
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae8);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar8 * 8);
      if (lVar6 == 0) {
        lVar6 = FUN_1400bafc2(lVar7,lVar8,1);
      }
    }
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae0);
    local_d0 = CONCAT44(local_d0._4_4_,iVar1 * iVar2);
    local_c8 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1d4);
    uVar3 = *(undefined4 *)(param_1 + 0x1d0);
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae8);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar8 * 8);
      if (lVar6 == 0) {
        lVar6 = FUN_1400bafc2(lVar7,lVar8,1);
      }
    }
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x13ae0);
    local_d0 = CONCAT44(local_d0._4_4_,uVar3);
    local_c8 = iVar1;
  }
  FUN_147412f8e(param_2,uVar5,lVar6,uVar10);
LAB_142ea61e5:
  if ((*(char *)(param_1 + 0x1da) == '\x01') && ((*(byte *)((longlong)param_2 + 0x17b) & 0x20) != 0)
     ) {
    local_c0 = 0;
    local_b8 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_c0,1);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea624a FUN_142ea624a body=68 status=ok
// SIG undefined FUN_142ea624a(void)

undefined8 * FUN_142ea624a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2b2230;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea628e FUN_142ea628e body=646 status=ok
// SIG undefined FUN_142ea628e(void)

void FUN_142ea628e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  void *pvVar4;
  undefined1 *puVar5;
  void *_Dst;
  undefined8 *puVar6;
  size_t _Size;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar5 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar5 = local_b8;
    }
    FUN_1446fe144(puVar6 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 2;
    }
    memcpy(puVar3,puVar5,(longlong)local_b0);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    puVar5 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 5;
    }
    memcpy(puVar3,puVar5,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  _Src = *(void **)(param_1 + 0x1c0);
  iVar2 = *(int *)(param_1 + 0x1c8);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 5;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x30);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 5;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  if (iVar2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
    pvVar4 = (void *)((longlong)_Dst + (longlong)iVar2 * 8);
    _Size = (longlong)iVar2 * 8;
    if ((void *)param_2[1] < pvVar4) {
      FUN_140023dd8(param_2,(int)_Size + 8);
      _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      pvVar4 = (void *)((longlong)_Dst + _Size);
    }
    *param_2 = (ulonglong)pvVar4;
    memcpy(_Dst,_Src,_Size);
  }
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2b2248;
  puVar6[2] = _Dst;
  *(int *)(puVar6 + 3) = iVar2;
  *(undefined4 *)(puVar6 + 4) = uVar1;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea6516 FUN_142ea6516 body=68 status=ok
// SIG undefined FUN_142ea6516(void)

undefined8 * FUN_142ea6516(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2b2230;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea655a FUN_142ea655a body=79 status=ok
// SIG undefined FUN_142ea655a(void)

void FUN_142ea655a(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0xe0))
            (*(longlong **)(param_2 + 0x40),&local_18,*(undefined4 *)(param_1 + 0x20));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea65aa FUN_142ea65aa body=68 status=ok
// SIG undefined FUN_142ea65aa(void)

undefined8 * FUN_142ea65aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2b2260;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea65ee FUN_142ea65ee body=1764 status=ok
// SIG undefined FUN_142ea65ee(void)

void FUN_142ea65ee(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  size_t _Size;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  void **_Src_00;
  undefined1 *_Src_01;
  void *_Dst;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_138 [44];
  int local_10c;
  int local_108;
  int local_104;
  longlong local_100;
  ulonglong *local_f8;
  int local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined1 local_c0 [64];
  undefined1 *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = param_1;
  FUN_144b1c6fa(param_1 + 0x10,&local_d8);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  local_f8 = param_2;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*local_f8 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *local_f8 = (ulonglong)puVar4;
  *(int *)(local_f8 + 0xc) = (int)local_f8[0xc] + 1;
  *(undefined8 **)local_f8[6] = puVar9;
  local_f8[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_c8;
  if ((longlong)local_c8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    _Src_00 = &local_d8;
    if (uStack_d0 != (void **)0x0) {
      _Src_00 = uStack_d0;
    }
    FUN_1446fe144(puVar9 + 2,local_c8,0);
    puVar4 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar4 = puVar9 + 2;
    }
    memcpy(puVar4,_Src_00,(longlong)local_c8);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_78;
  if ((longlong)local_78 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    _Src_01 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      _Src_01 = local_c0;
    }
    FUN_1446fe1b8(puVar9 + 5,local_78,0);
    puVar4 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar9 + 5;
    }
    memcpy(puVar4,_Src_01,(longlong)local_78 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_70;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_6c;
  *(undefined4 *)(puVar9 + 0x10) = uStack_68;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_64;
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8(local_80);
  }
  if (uStack_d0 != (void **)0x0) {
    FUN_1400020a8();
  }
  uVar10 = *(uint *)(local_100 + 0x1d0);
  if (uVar10 == 0) {
    iVar13 = 0x20;
  }
  else {
    iVar13 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
  }
  local_d8 = (void *)0x0;
  uStack_d0 = (void **)0x0;
  iVar14 = *(int *)(local_100 + 0x1c4);
  lVar12 = local_100;
  if (0 < iVar14) {
    uVar6 = (ulonglong)*(uint *)(local_100 + 0x1cc) -
            (ulonglong)(*(uint *)(local_100 + 0x1cc) >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    local_e0 = uVar6 >> 0x38;
    local_e8 = (ulonglong)((byte)(uVar6 >> 0x38) - 1);
    iVar11 = *(int *)(local_100 + 0x1c0);
    iVar15 = *(int *)(local_100 + 0x1c8);
    iVar16 = 0;
    local_10c = iVar13;
    do {
      if (0 < iVar11) {
        iVar14 = 0;
        local_ec = iVar16;
        do {
          uVar10 = *(uint *)(lVar12 + 0x1cc);
          iVar8 = *(int *)(lVar12 + 0x1c4) - iVar16;
          if (iVar15 < iVar8) {
            iVar8 = iVar15;
          }
          iVar7 = ((int)local_e8 + iVar8) / (int)local_e0;
          if (uVar10 != 0) {
            iVar17 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
              }
            }
            local_104 = iVar11 - iVar14;
            if (iVar15 < iVar11 - iVar14) {
              local_104 = iVar15;
            }
            local_104 = local_104 + iVar14;
            local_108 = iVar14;
            iVar11 = local_104;
            do {
              iVar15 = iVar8;
              if (iVar7 < iVar8) {
                iVar15 = iVar7;
              }
              if (iVar17 != iVar13) {
                lVar3 = *(longlong *)(**(longlong **)(lVar12 + 0x1b8) + 0x10);
                lVar18 = (longlong)(int)(uint)uStack_d0;
                uVar2 = (uint)uStack_d0 + 1;
                if (uStack_d0._4_4_ < uVar2) {
                  uVar6 = (ulonglong)uStack_d0 & 0xffffffff;
                  uStack_d0._0_4_ = uVar2;
                  FUN_147203348(&local_d8,uVar6);
                  lVar12 = local_100;
                  iVar13 = local_10c;
                  iVar14 = local_108;
                  iVar11 = local_104;
                  uVar2 = (uint)uStack_d0;
                }
                uStack_d0._0_4_ = uVar2;
                uVar2 = (uint)uStack_d0;
                *(longlong *)((longlong)local_d8 + lVar18 * 0x48) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                iVar15 = iVar15 + iVar16;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 8) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x10) = iVar14;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x14) = iVar16;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x18) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x1c) = iVar11;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x20) = iVar15;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x24) = 1;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x28) = iVar17;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x2c) = iVar13;
                *(undefined2 *)((longlong)local_d8 + lVar18 * 0x48 + 0x30) = 0x101;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x38) = 0;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x40) = 0;
                lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x1b8) + 0x18) + 0x10);
                lVar18 = (longlong)(int)(uint)uStack_d0;
                uStack_d0._0_4_ = (uint)uStack_d0 + 1;
                if (uStack_d0._4_4_ < (uint)uStack_d0) {
                  FUN_147203348(&local_d8,uVar2);
                  lVar12 = local_100;
                  iVar13 = local_10c;
                  iVar14 = local_108;
                  iVar11 = local_104;
                }
                uVar2 = (uint)uStack_d0;
                *(longlong *)((longlong)local_d8 + lVar18 * 0x48) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 8) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x10) = iVar14;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x14) = iVar16;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x18) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x1c) = iVar11;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x20) = iVar15;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x24) = 1;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x28) = iVar17;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x2c) = iVar13;
                *(undefined2 *)((longlong)local_d8 + lVar18 * 0x48 + 0x30) = 0x101;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x38) = 0;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x40) = 0;
                lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x1b8) + 0x30) + 0x10);
                lVar18 = (longlong)(int)(uint)uStack_d0;
                uStack_d0._0_4_ = (uint)uStack_d0 + 1;
                if (uStack_d0._4_4_ < (uint)uStack_d0) {
                  FUN_147203348(&local_d8,uVar2);
                  lVar12 = local_100;
                  iVar13 = local_10c;
                  iVar14 = local_108;
                  iVar11 = local_104;
                }
                uVar2 = (uint)uStack_d0;
                *(longlong *)((longlong)local_d8 + lVar18 * 0x48) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 8) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x10) = iVar14;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x14) = iVar16;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x18) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x1c) = iVar11;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x20) = iVar15;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x24) = 1;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x28) = iVar17;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x2c) = iVar13;
                *(undefined2 *)((longlong)local_d8 + lVar18 * 0x48 + 0x30) = 0x101;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x38) = 0;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x40) = 0;
                lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x1b8) + 0x48) + 0x10);
                lVar18 = (longlong)(int)(uint)uStack_d0;
                uStack_d0._0_4_ = (uint)uStack_d0 + 1;
                if (uStack_d0._4_4_ < (uint)uStack_d0) {
                  FUN_147203348(&local_d8,uVar2);
                  lVar12 = local_100;
                  iVar13 = local_10c;
                  iVar14 = local_108;
                  iVar11 = local_104;
                }
                *(longlong *)((longlong)local_d8 + lVar18 * 0x48) = lVar3;
                if (lVar3 != 0) {
                  LOCK();
                  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                  UNLOCK();
                }
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 8) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x10) = iVar14;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x14) = iVar16;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x18) = 0;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x1c) = iVar11;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x20) = iVar15;
                *(undefined4 *)((longlong)local_d8 + lVar18 * 0x48 + 0x24) = 1;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x28) = iVar17;
                *(int *)((longlong)local_d8 + lVar18 * 0x48 + 0x2c) = iVar13;
                *(undefined2 *)((longlong)local_d8 + lVar18 * 0x48 + 0x30) = 0x101;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x38) = 0;
                *(undefined8 *)((longlong)local_d8 + lVar18 * 0x48 + 0x40) = 0;
              }
              bVar1 = (byte)iVar17 & 0x1f;
              uVar10 = uVar10 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
              if (uVar10 == 0) {
                iVar17 = 0x20;
              }
              else {
                iVar17 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> iVar17 & 1) == 0; iVar17 = iVar17 + 1) {
                  }
                }
              }
              iVar16 = iVar16 + iVar7;
              iVar8 = iVar8 - iVar7;
            } while (uVar10 != 0);
            iVar11 = *(int *)(lVar12 + 0x1c0);
            iVar15 = *(int *)(lVar12 + 0x1c8);
            iVar16 = local_ec;
          }
          iVar14 = iVar14 + iVar15;
        } while (iVar14 < iVar11);
        iVar14 = *(int *)(lVar12 + 0x1c4);
      }
      iVar16 = iVar16 + iVar15;
    } while (iVar16 < iVar14);
  }
  _Src = local_d8;
  if (0 < *(int *)(lVar12 + 0x1e0)) {
    lVar3 = 8;
    lVar18 = 0;
    do {
      *(undefined8 *)((longlong)local_d8 + lVar3 * 8) =
           *(undefined8 *)(*(longlong *)(lVar12 + 0x1d8) + lVar18 * 8);
      lVar18 = lVar18 + 1;
      lVar3 = lVar3 + 9;
    } while (lVar18 < *(int *)(lVar12 + 0x1e0));
  }
  iVar13 = (uint)uStack_d0;
  puVar9 = (undefined8 *)(*local_f8 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 4;
  if ((undefined8 *)local_f8[1] < puVar4) {
    FUN_140023dd8(local_f8,0x28);
    puVar9 = (undefined8 *)(*local_f8 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
  }
  *local_f8 = (ulonglong)puVar4;
  *(int *)(local_f8 + 0xc) = (int)local_f8[0xc] + 1;
  *(undefined8 **)local_f8[6] = puVar9;
  local_f8[6] = (ulonglong)(puVar9 + 1);
  if (iVar13 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Size = (longlong)iVar13 * 0x48;
    _Dst = (void *)(*local_f8 + 7 & 0xfffffffffffffff8);
    pvVar5 = (void *)((longlong)_Dst + _Size);
    if ((void *)local_f8[1] < pvVar5) {
      FUN_140023dd8(local_f8,(int)_Size + 8);
      _Dst = (void *)(*local_f8 + 7 & 0xfffffffffffffff8);
      pvVar5 = (void *)((longlong)_Dst + _Size);
    }
    *local_f8 = (ulonglong)pvVar5;
    memcpy(_Dst,_Src,_Size);
  }
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a2687f0;
  puVar9[2] = _Dst;
  *(int *)(puVar9 + 3) = iVar13;
  FUN_142d62ffc(local_d8,(ulonglong)uStack_d0 & 0xffffffff);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea6ce0 FUN_142ea6ce0 body=481 status=ok
// SIG undefined FUN_142ea6ce0(void)

void FUN_142ea6ce0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147285fa2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea6ec2 FUN_142ea6ec2 body=232 status=ok
// SIG undefined FUN_142ea6ec2(void)

void FUN_142ea6ec2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea6faa FUN_142ea6faa body=81 status=ok
// SIG undefined FUN_142ea6faa(void)

void FUN_142ea6faa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147286045(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea6ffc FUN_142ea6ffc body=481 status=ok
// SIG undefined FUN_142ea6ffc(void)

void FUN_142ea6ffc(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147286382(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea71de FUN_142ea71de body=232 status=ok
// SIG undefined FUN_142ea71de(void)

void FUN_142ea71de(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea72c6 FUN_142ea72c6 body=81 status=ok
// SIG undefined FUN_142ea72c6(void)

void FUN_142ea72c6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147286425(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea7318 FUN_142ea7318 body=518 status=ok
// SIG undefined FUN_142ea7318(void)

void FUN_142ea7318(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_14728679c(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea7520 FUN_142ea7520 body=123 status=ok
// SIG undefined FUN_142ea7520(void)

void FUN_142ea7520(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f31de6();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca22178,uVar1);
  return;
}



// FUNCTION 142ea759c FUN_142ea759c body=481 status=ok
// SIG undefined FUN_142ea759c(void)

void FUN_142ea759c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147286ae6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea777e FUN_142ea777e body=232 status=ok
// SIG undefined FUN_142ea777e(void)

void FUN_142ea777e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea7866 FUN_142ea7866 body=81 status=ok
// SIG undefined FUN_142ea7866(void)

void FUN_142ea7866(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147286b89(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea78b8 FUN_142ea78b8 body=481 status=ok
// SIG undefined FUN_142ea78b8(void)

void FUN_142ea78b8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147286ec6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea7a9a FUN_142ea7a9a body=232 status=ok
// SIG undefined FUN_142ea7a9a(void)

void FUN_142ea7a9a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142ea7b82 FUN_142ea7b82 body=81 status=ok
// SIG undefined FUN_142ea7b82(void)

void FUN_142ea7b82(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147286f69(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ea7bd4 FUN_142ea7bd4 body=518 status=ok
// SIG undefined FUN_142ea7bd4(void)

void FUN_142ea7bd4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_147287362(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea7ddc FUN_142ea7ddc body=123 status=ok
// SIG undefined FUN_142ea7ddc(void)

void FUN_142ea7ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f6c38e();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca22930,uVar1);
  return;
}



// FUNCTION 142ea7e58 FUN_142ea7e58 body=518 status=ok
// SIG undefined FUN_142ea7e58(void)

void FUN_142ea7e58(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_1472876e8(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea8060 FUN_142ea8060 body=123 status=ok
// SIG undefined FUN_142ea8060(void)

void FUN_142ea8060(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f00b1c();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca229b8,uVar1);
  return;
}



// FUNCTION 142ea80f4 FUN_142ea80f4 body=51 status=ok
// SIG undefined FUN_142ea80f4(void)

void FUN_142ea80f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea811d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142ea8132 FUN_142ea8132 body=12 status=ok
// SIG undefined FUN_142ea8132(void)

void FUN_142ea8132(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ea813b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142ea813e FUN_142ea813e body=29 status=ok
// SIG undefined FUN_142ea813e(void)

undefined8 FUN_142ea813e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea815c FUN_142ea815c body=282 status=ok
// SIG undefined FUN_142ea815c(void)

undefined8 * FUN_142ea815c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142ea8276 FUN_142ea8276 body=98 status=ok
// SIG undefined FUN_142ea8276(void)

void FUN_142ea8276(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea82ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142ea82d8 FUN_142ea82d8 body=44 status=ok
// SIG undefined FUN_142ea82d8(void)

void FUN_142ea82d8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
  }
  *(undefined8 *)(param_1[1] + 600) = 0;
  return;
}



// FUNCTION 142ea830e FUN_142ea830e body=12 status=ok
// SIG undefined FUN_142ea830e(void)

void FUN_142ea830e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ea8317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142ea831a FUN_142ea831a body=29 status=ok
// SIG undefined FUN_142ea831a(void)

undefined8 FUN_142ea831a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea8338 FUN_142ea8338 body=282 status=ok
// SIG undefined FUN_142ea8338(void)

undefined8 * FUN_142ea8338(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142ea8452 FUN_142ea8452 body=110 status=ok
// SIG undefined FUN_142ea8452(void)

void FUN_142ea8452(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0x17) == '\0') {
    (**(code **)(*(longlong *)param_1[0x15] + 0x18))((longlong *)param_1[0x15],&DAT_14ca85100);
  }
  *(undefined8 *)(param_1[0x16] + 600) = 0;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea84b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142ea84da FUN_142ea84da body=12 status=ok
// SIG undefined FUN_142ea84da(void)

void FUN_142ea84da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ea84e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142ea84e6 FUN_142ea84e6 body=29 status=ok
// SIG undefined FUN_142ea84e6(void)

undefined8 FUN_142ea84e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea8504 FUN_142ea8504 body=282 status=ok
// SIG undefined FUN_142ea8504(void)

undefined8 * FUN_142ea8504(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142ea866e FUN_142ea866e body=64 status=ok
// SIG undefined FUN_142ea866e(void)

void FUN_142ea866e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined8 *)(param_1[0x11] + (longlong)*(int *)(param_1 + 0x10) * 0x80 + 0x100);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1[0x11] + 0x38) = *(undefined1 *)((longlong)param_1 + 0x84);
  return;
}



// FUNCTION 142ea86b8 FUN_142ea86b8 body=29 status=ok
// SIG undefined FUN_142ea86b8(void)

void FUN_142ea86b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142ea86d6 FUN_142ea86d6 body=29 status=ok
// SIG undefined FUN_142ea86d6(void)

undefined8 FUN_142ea86d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea86f4 FUN_142ea86f4 body=282 status=ok
// SIG undefined FUN_142ea86f4(void)

undefined8 * FUN_142ea86f4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142ea880e FUN_142ea880e body=114 status=ok
// SIG undefined FUN_142ea880e(void)

void FUN_142ea880e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar3 = param_1 + 0x16;
  puVar4 = (undefined8 *)(param_1[0x27] + (longlong)*(int *)(param_1 + 0x26) * 0x80 + 0x100);
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1[0x27] + 0x38) = *(undefined1 *)((longlong)param_1 + 0x134);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea8879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1,*(code **)*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142ea8880 FUN_142ea8880 body=1367 status=ok
// SIG undefined FUN_142ea8880(void)

void FUN_142ea8880(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  int iVar12;
  uint in_R11D;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar1 = (double)param_1[9];
  pdVar14 = (double *)param_1[8];
  lVar2 = *param_1;
  lVar6 = param_1[7];
  FUN_14028f978(lVar2);
  if (0 < (longlong)*(int *)(lVar6 + 0x3f0)) {
    dVar19 = (pdVar14[5] - pdVar14[2]) * 0.5;
    dVar17 = (pdVar14[5] + pdVar14[2]) * 0.5;
    dVar18 = (pdVar14[4] + pdVar14[1]) * 0.5;
    local_188 = (pdVar14[3] + *pdVar14) * 0.5;
    lVar9 = *(longlong *)(lVar6 + 1000);
    local_1a0 = (double)param_1[2];
    local_198 = (double)param_1[3];
    local_190 = (double)param_1[4];
    local_1a8 = (double)param_1[5];
    dVar3 = ABS((pdVar14[3] - *pdVar14) * 0.5);
    dVar20 = ABS((pdVar14[4] - pdVar14[1]) * 0.5);
    lVar13 = 0;
    do {
      lVar10 = lVar13 * 0x13c10;
      dStack_180 = local_188;
      if (local_1a8 <
          *(double *)(lVar9 + 0x1058 + lVar10) * local_190 +
          *(double *)(lVar9 + 0x1048 + lVar10) * local_1a0 +
          *(double *)(lVar9 + 0x1050 + lVar10) * local_198) {
        lVar10 = lVar10 + lVar9;
        if (*(int *)(lVar10 + 0x2130) < 1) {
LAB_142ea8b90:
          if (1 < *(int *)(lVar2 + 0x3f0)) {
            local_108 = (local_190 + local_190) * local_1a8;
            local_110 = (local_198 + local_198) * local_1a8;
            local_118 = (local_1a0 + local_1a0) * local_1a8;
            local_168 = local_190 * -2.0;
            local_128 = local_168 * local_190 + 1.0;
            dVar3 = local_198 * -2.0;
            local_130 = dVar3 * local_190;
            dVar20 = local_1a0 * -2.0;
            local_138 = local_190 * dVar20;
            local_148 = local_198 * local_168;
            local_170 = local_1a0 * dVar3;
            local_150 = dVar3 * local_198 + 1.0;
            local_158 = local_198 * dVar20;
            local_168 = local_168 * local_1a0;
            local_178 = dVar20 * local_1a0 + 1.0;
            lVar13 = 0;
            local_160 = 0;
            local_140 = 0;
            local_120 = 0;
            local_100 = 0x3ff0000000000000;
            lVar9 = 0;
            do {
              FUN_147cf0372(*(longlong *)(lVar2 + 1000) + lVar13,
                            *(longlong *)(lVar6 + 1000) + lVar13,&local_178);
              lVar9 = lVar9 + 1;
              lVar13 = lVar13 + 0x13c10;
            } while (lVar9 < *(int *)(lVar2 + 0x3f0));
          }
          FUN_142fe527e(lVar2,param_2);
          pdVar14[0x4b] = dVar1;
          if (0 < *(int *)(lVar2 + 0x3f0)) {
            pdVar14 = pdVar14 + 0x41;
            lVar6 = 0x3100;
            lVar9 = 0;
            do {
              lVar13 = *(longlong *)(lVar2 + 1000);
              pdVar14[-1] = *(double *)(lVar13 + -8 + lVar6);
              *pdVar14 = *(double *)(lVar13 + lVar6);
              lVar9 = lVar9 + 1;
              pdVar14 = pdVar14 + 2;
              lVar6 = lVar6 + 0x13c10;
            } while (lVar9 < *(int *)(lVar2 + 0x3f0));
          }
          break;
        }
        pdVar11 = (double *)(lVar10 + 0x2020);
        if (*(double **)(lVar10 + 0x2120) != (double *)0x0) {
          pdVar11 = *(double **)(lVar10 + 0x2120);
        }
        iVar12 = 0;
        while( true ) {
          lVar15 = -(ulonglong)
                    (ABS(pdVar11[9] * dVar19) + ABS(pdVar11[5]) * dVar20 + ABS(pdVar11[1]) * dVar3 <
                    (dVar17 * pdVar11[9] + dVar18 * pdVar11[5] + local_188 * pdVar11[1]) -
                    pdVar11[0xd]);
          lVar16 = -(ulonglong)
                    (ABS(pdVar11[0xb] * dVar19) + ABS(pdVar11[7]) * dVar20 + ABS(pdVar11[3]) * dVar3
                    < (dVar17 * pdVar11[0xb] + dVar18 * pdVar11[7] + local_188 * pdVar11[3]) -
                      pdVar11[0xf]);
          auVar4._8_4_ = (int)lVar15;
          auVar4._0_8_ = -(ulonglong)
                          (ABS(pdVar11[8] * dVar19) +
                           ABS(pdVar11[4]) * dVar20 + ABS(*pdVar11) * dVar3 <
                          (dVar17 * pdVar11[8] + dVar18 * pdVar11[4] + local_188 * *pdVar11) -
                          pdVar11[0xc]);
          auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          in_R11D = movmskpd(in_R11D,auVar4);
          auVar5._8_4_ = (int)lVar16;
          auVar5._0_8_ = -(ulonglong)
                          (ABS(pdVar11[10] * dVar19) +
                           ABS(pdVar11[6]) * dVar20 + ABS(pdVar11[2]) * dVar3 <
                          (dVar17 * pdVar11[10] + dVar18 * pdVar11[6] + local_188 * pdVar11[2]) -
                          pdVar11[0xe]);
          auVar5._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
          iVar7 = movmskpd((int)param_1,auVar5);
          uVar8 = iVar7 << 2 | in_R11D;
          param_1 = (longlong *)(ulonglong)uVar8;
          if (uVar8 != 0) break;
          pdVar11 = pdVar11 + 0x10;
          iVar12 = iVar12 + 4;
          if (*(int *)(lVar10 + 0x2130) <= iVar12) goto LAB_142ea8b90;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != *(int *)(lVar6 + 0x3f0));
  }
  FUN_1403a4db8(lVar2,param_2);
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ea8de8 FUN_142ea8de8 body=29 status=ok
// SIG undefined FUN_142ea8de8(void)

void FUN_142ea8de8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142ea8e06 FUN_142ea8e06 body=29 status=ok
// SIG undefined FUN_142ea8e06(void)

undefined8 FUN_142ea8e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ea8e24 FUN_142ea8e24 body=282 status=ok
// SIG undefined FUN_142ea8e24(void)

undefined8 * FUN_142ea8e24(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142ea8f3e FUN_142ea8f3e body=105 status=ok
// SIG undefined FUN_142ea8f3e(void)

void FUN_142ea8f3e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142ea8880(0xb0,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142ea8880(param_1 + 0x16,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ea8f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142ea8fa8 FUN_142ea8fa8 body=5262 status=ok
// SIG undefined FUN_142ea8fa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ea8fa8(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong *puVar13;
  char cVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double dVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  uint unaff_EDI;
  int iVar26;
  longlong lVar27;
  int iVar28;
  uint in_R11D;
  longlong lVar29;
  double dVar30;
  bool bVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  undefined1 auStack_a18 [32];
  wchar_t *local_9f8;
  wchar_t *local_9f0;
  undefined4 local_9e8;
  undefined4 local_9e0;
  code *local_9d8;
  code *local_9d0;
  undefined1 *local_9c8;
  undefined1 *local_9c0;
  undefined1 *local_9b8;
  undefined1 *local_9b0;
  undefined4 local_9a8;
  undefined8 local_9a0;
  undefined4 local_98c;
  double local_988;
  double *local_980;
  int local_974;
  double local_970;
  double local_968;
  double local_960;
  undefined8 *local_958;
  undefined8 local_950;
  undefined8 *local_948;
  undefined8 *puStack_940;
  longlong local_930;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 local_8c8;
  undefined1 local_8c1;
  longlong local_8c0;
  longlong local_8b8 [3];
  ulonglong *local_8a0;
  undefined8 *local_848;
  undefined8 *local_840;
  longlong local_820;
  uint local_818;
  uint local_814;
  longlong *local_248;
  longlong *plStack_240;
  undefined8 local_238;
  longlong *plStack_230;
  undefined8 local_228;
  undefined8 *puStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  plVar5 = (longlong *)*param_1;
  lVar6 = param_1[7];
  dVar30 = local_988;
  if (0 < (longlong)*(int *)(lVar6 + 0x3f0)) {
    local_988 = (double)param_1[9];
    local_980 = (double *)param_1[8];
    dVar8 = (local_980[5] - local_980[2]) * 0.5;
    dVar17 = (local_980[5] + local_980[2]) * 0.5;
    dVar7 = (local_980[4] + local_980[1]) * 0.5;
    local_948 = (undefined8 *)((local_980[3] + *local_980) * 0.5);
    lVar24 = *(longlong *)(lVar6 + 1000);
    local_970 = (double)param_1[3];
    local_960 = (double)param_1[4];
    local_968 = (double)param_1[5];
    dVar9 = ABS((local_980[3] - *local_980) * 0.5);
    dVar10 = ABS((local_980[4] - local_980[1]) * 0.5);
    lVar29 = 0;
    do {
      lVar27 = lVar29 * 0x13c10;
      puStack_940 = local_948;
      if (local_968 <
          *(double *)(lVar24 + 0x1058 + lVar27) * local_960 +
          *(double *)(lVar24 + 0x1048 + lVar27) * (double)param_1[2] +
          *(double *)(lVar24 + 0x1050 + lVar27) * local_970) {
        lVar27 = lVar27 + lVar24;
        if (*(int *)(lVar27 + 0x2130) < 1) {
LAB_142ea9368:
          pdVar15 = local_980 + 0x1d;
          bVar31 = true;
          lVar24 = 0;
          local_950 = param_2;
          goto LAB_142ea938c;
        }
        pdVar15 = (double *)(lVar27 + 0x2020);
        if (*(double **)(lVar27 + 0x2120) != (double *)0x0) {
          pdVar15 = *(double **)(lVar27 + 0x2120);
        }
        iVar28 = 0;
        while( true ) {
          lVar32 = -(ulonglong)
                    (ABS(pdVar15[9] * dVar8) + ABS(pdVar15[5]) * dVar10 + ABS(pdVar15[1]) * dVar9 <
                    (dVar17 * pdVar15[9] + dVar7 * pdVar15[5] + (double)local_948 * pdVar15[1]) -
                    pdVar15[0xd]);
          lVar33 = -(ulonglong)
                    (ABS(pdVar15[0xb] * dVar8) + ABS(pdVar15[7]) * dVar10 + ABS(pdVar15[3]) * dVar9
                    < (dVar17 * pdVar15[0xb] + dVar7 * pdVar15[7] + (double)local_948 * pdVar15[3])
                      - pdVar15[0xf]);
          auVar11._8_4_ = (int)lVar32;
          auVar11._0_8_ =
               -(ulonglong)
                (ABS(pdVar15[8] * dVar8) + ABS(pdVar15[4]) * dVar10 + ABS(*pdVar15) * dVar9 <
                (dVar17 * pdVar15[8] + dVar7 * pdVar15[4] + (double)local_948 * *pdVar15) -
                pdVar15[0xc]);
          auVar11._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
          in_R11D = movmskpd(in_R11D,auVar11);
          auVar12._8_4_ = (int)lVar33;
          auVar12._0_8_ =
               -(ulonglong)
                (ABS(pdVar15[10] * dVar8) + ABS(pdVar15[6]) * dVar10 + ABS(pdVar15[2]) * dVar9 <
                (dVar17 * pdVar15[10] + dVar7 * pdVar15[6] + (double)local_948 * pdVar15[2]) -
                pdVar15[0xe]);
          auVar12._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
          iVar26 = movmskpd(unaff_EDI,auVar12);
          unaff_EDI = iVar26 << 2 | in_R11D;
          if (unaff_EDI != 0) break;
          pdVar15 = pdVar15 + 0x10;
          iVar28 = iVar28 + 4;
          if (*(int *)(lVar27 + 0x2130) <= iVar28) goto LAB_142ea9368;
        }
      }
      lVar29 = lVar29 + 1;
      dVar30 = (double)param_1[2];
    } while (lVar29 != *(int *)(lVar6 + 0x3f0));
  }
  local_988 = dVar30;
  if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_a18);
  }
  goto LAB_142eaa42a;
LAB_142ea938c:
  lVar29 = lVar24 * 0x13c10 + 0x3108;
  do {
    lVar27 = *(longlong *)(*(longlong *)(lVar6 + 1000) + lVar29);
    if (lVar27 != 0) {
      lVar33 = FUN_147287ae4(lVar27 + 0x530,*(undefined4 *)pdVar15,pdVar15);
      iVar28 = FUN_1403fb1aa(*(undefined4 *)((longlong)plVar5 + 0x8a4));
      uVar23 = (longlong)(*(int *)(lVar27 + 0x4c8) + 1) % (longlong)(iVar28 + 1) & 0xffffffff;
      lVar32 = *(longlong *)(lVar33 + uVar23 * 0x10);
      if ((lVar32 != 0) &&
         (*(int *)(lVar33 + 0x40 + uVar23 * 4) == *(int *)(lVar27 + 0x4c8) - iVar28)) {
        local_8b8[0] = 0;
        local_9f8 = (wchar_t *)CONCAT44(local_9f8._4_4_,0xffffffff);
        cVar14 = (**(code **)(*DAT_14ca83900 + 0x2b8))
                           (DAT_14ca83900,lVar32,local_8b8,
                            CONCAT71((uint7)(uint3)((uint)(iVar28 + 1) >> 8),1));
        if (cVar14 != '\0') goto code_r0x000142ea944f;
      }
    }
    lVar24 = lVar24 + 1;
    lVar29 = lVar29 + 0x13c10;
    if (*(int *)(lVar6 + 0x3f0) <= lVar24) {
      if (!bVar31) break;
      goto LAB_142ea9479;
    }
  } while( true );
LAB_142ea94dc:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)*plVar5)(plVar5,1);
  }
  goto LAB_142eaa42a;
code_r0x000142ea944f:
  if (local_8b8[0] == 0) {
    lVar24 = lVar24 + 1;
    bVar31 = false;
    if (*(int *)(lVar6 + 0x3f0) <= lVar24) goto LAB_142ea94dc;
    goto LAB_142ea938c;
  }
LAB_142ea9479:
  uVar21 = local_950;
  FUN_14028f978(plVar5,local_950);
  FUN_143578b70(&local_8c1);
  FUN_143738f54(uVar21);
  FUN_1407779ba(local_8b8,uVar21);
  plVar25 = *(longlong **)(lVar6 + 200);
  if (plVar25 == (longlong *)0x0) {
    local_8c8 = 1;
  }
  else {
    (**(code **)(*plVar25 + 0x78))(plVar25,&local_8c8,uVar21);
  }
  dVar30 = local_988;
  *(undefined4 *)((longlong)local_988 + 0x58) = local_8c8;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  local_980[0x4b] = dVar30;
  if (0 < (int)plVar5[0x7e]) {
    pdVar15 = local_980 + 0x41;
    lVar24 = 0x3100;
    lVar29 = 0;
    do {
      lVar27 = plVar5[0x7d];
      pdVar15[-1] = *(double *)(lVar27 + -8 + lVar24);
      *pdVar15 = *(double *)(lVar27 + lVar24);
      lVar29 = lVar29 + 1;
      pdVar15 = pdVar15 + 2;
      lVar24 = lVar24 + 0x13c10;
    } while (lVar29 < (int)plVar5[0x7e]);
  }
  FUN_1447ec05f(&local_248,*(undefined8 *)((longlong)dVar30 + 0x10),L"ReflectionOutputTexture");
  local_970 = (double)FUN_14473c272(local_8b8,&local_248,0);
  if (local_248 != (longlong *)0x0) {
    (**(code **)(*local_248 + 0x38))();
  }
  *(undefined4 *)((longlong)local_970 + 0x58) = 0x60;
  local_9f8 = (wchar_t *)CONCAT44(local_9f8._4_4_,2);
  FUN_14177f539(&local_8e8,local_8b8,plVar5[0x7c],*(undefined4 *)((longlong)plVar5 + 0x8a4));
  if (0 < (int)plVar5[0x7e]) {
    local_930 = plVar5[0x7c];
    local_948 = local_108;
    dVar30 = 0.0;
    do {
      puVar13 = local_8a0;
      lVar24 = plVar5[0x7d];
      iVar28 = *(int *)(lVar24 + 0x1de0 + (longlong)dVar30 * 0x13c10);
      iVar26 = *(int *)((longlong)local_8a0 + 0x17c);
      if (iVar26 != iVar28) {
        *(int *)((longlong)local_8a0 + 0x17c) = iVar28;
        puVar16 = (undefined8 *)(*local_8a0 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar16 + 3;
        if ((undefined8 *)local_8a0[1] < puVar19) {
          FUN_140023dd8(local_8a0,0x20);
          puVar16 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar16 + 3;
        }
        *puVar13 = (ulonglong)puVar19;
        *(int *)(puVar13 + 0xc) = (int)puVar13[0xc] + 1;
        *(undefined8 **)puVar13[6] = puVar16;
        puVar13[6] = (ulonglong)(puVar16 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x17c);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar16 + 2) = uVar4;
      }
      plVar25 = (longlong *)(lVar24 + (longlong)dVar30 * 0x13c10);
      dVar17 = *(double *)(local_930 + 0x1b8);
      local_968 = (double)CONCAT44(local_968._4_4_,iVar26);
      local_960 = dVar30;
      if (*(int *)(*(longlong *)(lVar6 + 8) + 8) < 3) {
        local_918 = local_8d8;
        uStack_914 = uStack_8d4;
        uStack_910 = uStack_8d0;
        uStack_90c = uStack_8cc;
        local_928 = local_8e8;
        uStack_924 = uStack_8e4;
        uStack_920 = uStack_8e0;
        uStack_91c = uStack_8dc;
        iVar28 = (int)plVar25[0x612];
        if (2 < iVar28) {
          dVar17 = (double)FUN_14728c68a(local_8b8,plVar25);
          iVar28 = (int)plVar25[0x612];
        }
        lVar24 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar28 * 2) * 0x3c;
        if (*(longlong *)(&DAT_14ca814b0 + lVar24) == DAT_14ca81498) {
          local_98c = (undefined4)
                      CONCAT71((int7)((ulonglong)lVar24 >> 8),
                               ((&DAT_14ca814b8)
                                [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar28 * 2) * 0xf
                                ] == 1) * '\x02');
        }
        else {
          local_98c = 0;
        }
        local_974 = (int)plVar25[0x61f];
        lVar24 = plVar25[0x620];
        puVar16 = (undefined8 *)((longlong)local_848 + 0xfU & 0xfffffffffffffff0);
        puVar19 = puVar16 + 0x2e;
        local_988 = dVar17;
        if (local_840 < puVar19) {
          FUN_140023dd8(&local_848,0x180);
          puVar16 = (undefined8 *)((longlong)local_848 + 0xfU & 0xfffffffffffffff0);
          puVar19 = puVar16 + 0x2e;
        }
        *puVar16 = &PTR_FUN_14a2b2628;
        local_958 = puVar16 + 2;
        local_848 = puVar19;
        FUN_147288396();
        uVar2 = local_818;
        lVar29 = (longlong)(int)local_818;
        local_818 = local_818 + 1;
        if (local_814 < local_818) {
          FUN_1448cfae8(&local_820,uVar2);
        }
        *(undefined8 **)(local_820 + lVar29 * 8) = puVar16;
        lVar29 = FUN_1447e4f80();
        cVar14 = *(char *)(lVar29 + 0x41);
        if (cVar14 == '\x03') {
          cVar14 = '\x02';
        }
        puVar16[2] = plVar25[3];
        *(char *)(puVar16 + 3) = cVar14;
        local_248 = (longlong *)0x0;
        plStack_240 = (longlong *)0x3f80000000000000;
        local_238 = 0;
        plStack_230 = (longlong *)0x3f80000000000000;
        local_228 = (longlong *)0x0;
        puStack_220 = (undefined8 *)0x3f80000000000000;
        local_218 = 0;
        uStack_210 = 0x3f80000000000000;
        local_128 = 0;
        uStack_120 = 0x3f80000000000000;
        local_138 = 0;
        uStack_130 = 0x3f80000000000000;
        *local_948 = 0;
        local_948[1] = 0;
        FUN_144b14eb0(plVar25,local_980,&local_248);
        FUN_142eaa4b0(&local_8c0,&local_248,1);
        FUN_145c9e304();
        lVar29 = local_8c0;
        cVar14 = DAT_14ca20d19;
        if (DAT_14ca20d19 == '\x03') {
          cVar14 = '\x02';
        }
        puVar16[4] = local_8c0;
        *(char *)(puVar16 + 5) = cVar14;
        if (local_8c0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_8c0 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_8c0 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_8c0 + 0xd);
              plVar18 = (longlong *)FUN_14001cc68(0x10,8);
              plVar18[1] = lVar29;
              plVar22 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar18 = (longlong)plVar22;
                  LOCK();
                  bVar31 = plVar22 != DAT_14ca843c0;
                  plVar20 = plVar18;
                  if (bVar31) {
                    plVar22 = DAT_14ca843c0;
                    plVar20 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar20;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar18 = (longlong)plVar20;
                  LOCK();
                  bVar31 = plVar20 != DAT_14ca843c8;
                  plVar22 = plVar18;
                  if (bVar31) {
                    plVar20 = DAT_14ca843c8;
                    plVar22 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar22;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        puVar16[8] = CONCAT44(uStack_914,local_918);
        puVar16[9] = CONCAT44(uStack_90c,uStack_910);
        puVar16[6] = CONCAT44(uStack_924,local_928);
        puVar16[7] = CONCAT44(uStack_91c,uStack_920);
        fVar34 = *(float *)((longlong)local_980 + 0xec);
        if (0.04 <= fVar34) {
          fVar34 = 0.04;
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        *(float *)(puVar16 + 10) = fVar34 * 0.5 * (float)((int)lVar24 - local_974);
        fVar34 = *(float *)(local_980 + 0x1e);
        if (fVar34 <= 1e-05) {
          fVar34 = 1e-05;
        }
        *(float *)((longlong)puVar16 + 0x54) = 1.0 / fVar34;
        puVar16[0xb] = local_988;
        puVar16[0xc] = DAT_14c9c0de0;
        puVar16[0xe] = local_970;
        puVar16[0xf] = 0;
        *(char *)(puVar16 + 0x10) = (char)local_98c;
        *(undefined1 *)((longlong)puVar16 + 0x81) = 0;
        *(undefined2 *)((longlong)puVar16 + 0x82) = 0xffff;
        lVar24 = plVar25[0x2703];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e9700) &&
           (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
          uVar21 = FUN_144a8d90e();
          FUN_145d4bb64();
          local_9b0 = &LAB_14712ac08;
          local_9b8 = &LAB_14712ac0c;
          local_9c0 = &LAB_1471d2aa4;
          local_9c8 = &LAB_1471d2aa8;
          local_9d0 = FUN_1471d2ae4;
          local_9d8 = FUN_1471d2b3e;
          local_9f0 = L"VertexMain";
          local_9f8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
          local_9a8 = 0xe0;
          local_9e0 = 2;
          local_9e8 = 0;
          local_9a0 = uVar21;
          FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
          _DAT_14c9e9658 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_142ce867a);
          _Init_thread_footer(&DAT_14c9e9700);
        }
        FUN_1448e935e(lVar24,&local_248,&DAT_14c9e9658,0);
        dVar30 = local_960;
        iVar28 = local_968._0_4_;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e9700) &&
           (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
          uVar21 = FUN_144a8d90e();
          FUN_145d4bb64();
          local_9b0 = &LAB_14712ac08;
          local_9b8 = &LAB_14712ac0c;
          local_9c0 = &LAB_1471d2aa4;
          local_9c8 = &LAB_1471d2aa8;
          local_9d0 = FUN_1471d2ae4;
          local_9d8 = FUN_1471d2b3e;
          local_9f0 = L"VertexMain";
          local_9f8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
          local_9a8 = 0xe0;
          local_9e0 = 2;
          local_9e8 = 0;
          local_9a0 = uVar21;
          FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
          _DAT_14c9e9658 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_142ce867a);
          _Init_thread_footer(&DAT_14c9e9700);
        }
        plVar20 = plStack_240;
        plVar22 = local_248;
        lVar24 = plVar25[0x2703];
        FUN_145e7356a();
        FUN_1448e935e(lVar24,&local_248,&DAT_14ca20dd8,0);
        FUN_145e7356a();
        local_228 = plStack_240;
        puVar19 = local_958;
        local_218 = *(undefined8 *)((longlong)local_988 + 0x84);
        plStack_240 = plVar22;
        local_238 = plVar20;
        plStack_230 = local_248;
        puStack_220 = local_958;
        local_248 = plVar25;
        FUN_145e737d8();
        FUN_147288440(local_8b8,&local_8c0,puVar19);
      }
      else {
        local_8f8 = local_8d8;
        uStack_8f4 = uStack_8d4;
        uStack_8f0 = uStack_8d0;
        uStack_8ec = uStack_8cc;
        local_908 = local_8e8;
        uStack_904 = uStack_8e4;
        uStack_900 = uStack_8e0;
        uStack_8fc = uStack_8dc;
        iVar28 = (int)plVar25[0x612];
        if (2 < iVar28) {
          dVar17 = (double)FUN_14728c68a(local_8b8,plVar25);
          iVar28 = (int)plVar25[0x612];
        }
        lVar24 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar28 * 2) * 0x3c;
        if (*(longlong *)(&DAT_14ca814b0 + lVar24) == DAT_14ca81498) {
          local_98c = (undefined4)
                      CONCAT71((int7)((ulonglong)lVar24 >> 8),
                               ((&DAT_14ca814b8)
                                [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar28 * 2) * 0xf
                                ] == 1) * '\x02');
        }
        else {
          local_98c = 0;
        }
        local_974 = (int)plVar25[0x61f];
        lVar24 = plVar25[0x620];
        puVar16 = (undefined8 *)((longlong)local_848 + 0xfU & 0xfffffffffffffff0);
        puVar19 = puVar16 + 0x2e;
        local_988 = dVar17;
        if (local_840 < puVar19) {
          FUN_140023dd8(&local_848,0x180);
          puVar16 = (undefined8 *)((longlong)local_848 + 0xfU & 0xfffffffffffffff0);
          puVar19 = puVar16 + 0x2e;
        }
        *puVar16 = &PTR_FUN_14a2b2600;
        local_958 = puVar16 + 2;
        local_848 = puVar19;
        FUN_147288178();
        uVar2 = local_818;
        lVar29 = (longlong)(int)local_818;
        local_818 = local_818 + 1;
        if (local_814 < local_818) {
          FUN_1448cfae8(&local_820,uVar2);
        }
        *(undefined8 **)(local_820 + lVar29 * 8) = puVar16;
        lVar29 = FUN_1447e4f80();
        cVar14 = *(char *)(lVar29 + 0x41);
        if (cVar14 == '\x03') {
          cVar14 = '\x02';
        }
        puVar16[2] = plVar25[3];
        *(char *)(puVar16 + 3) = cVar14;
        local_248 = (longlong *)0x0;
        plStack_240 = (longlong *)0x3f80000000000000;
        local_238 = 0;
        plStack_230 = (longlong *)0x3f80000000000000;
        local_228 = (longlong *)0x0;
        puStack_220 = (undefined8 *)0x3f80000000000000;
        local_218 = 0;
        uStack_210 = 0x3f80000000000000;
        local_128 = 0;
        uStack_120 = 0x3f80000000000000;
        local_138 = 0;
        uStack_130 = 0x3f80000000000000;
        *local_948 = 0;
        local_948[1] = 0;
        FUN_144b14eb0(plVar25,local_980,&local_248);
        FUN_142eaa4b0(&local_8c0,&local_248,1);
        FUN_145c9e304();
        lVar29 = local_8c0;
        cVar14 = DAT_14ca20d19;
        if (DAT_14ca20d19 == '\x03') {
          cVar14 = '\x02';
        }
        puVar16[4] = local_8c0;
        *(char *)(puVar16 + 5) = cVar14;
        if (local_8c0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_8c0 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_8c0 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_8c0 + 0xd);
              plVar18 = (longlong *)FUN_14001cc68(0x10,8);
              plVar18[1] = lVar29;
              plVar22 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar18 = (longlong)plVar22;
                  LOCK();
                  bVar31 = plVar22 != DAT_14ca843c0;
                  plVar20 = plVar18;
                  if (bVar31) {
                    plVar22 = DAT_14ca843c0;
                    plVar20 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar20;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar18 = (longlong)plVar20;
                  LOCK();
                  bVar31 = plVar20 != DAT_14ca843c8;
                  plVar22 = plVar18;
                  if (bVar31) {
                    plVar20 = DAT_14ca843c8;
                    plVar22 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar22;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        puVar16[8] = CONCAT44(uStack_8f4,local_8f8);
        puVar16[9] = CONCAT44(uStack_8ec,uStack_8f0);
        puVar16[6] = CONCAT44(uStack_904,local_908);
        puVar16[7] = CONCAT44(uStack_8fc,uStack_900);
        fVar34 = *(float *)((longlong)local_980 + 0xec);
        if (0.04 <= fVar34) {
          fVar34 = 0.04;
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        *(float *)(puVar16 + 10) = fVar34 * 0.5 * (float)((int)lVar24 - local_974);
        fVar34 = *(float *)(local_980 + 0x1e);
        if (fVar34 <= 1e-05) {
          fVar34 = 1e-05;
        }
        *(float *)((longlong)puVar16 + 0x54) = 1.0 / fVar34;
        puVar16[0xb] = local_988;
        puVar16[0xc] = DAT_14c9c0de0;
        puVar16[0xe] = local_970;
        puVar16[0xf] = 0;
        *(char *)(puVar16 + 0x10) = (char)local_98c;
        *(undefined1 *)((longlong)puVar16 + 0x81) = 0;
        *(undefined2 *)((longlong)puVar16 + 0x82) = 0xffff;
        lVar24 = plVar25[0x2703];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e9700) &&
           (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
          uVar21 = FUN_144a8d90e();
          FUN_145d4bb64();
          local_9b0 = &LAB_14712ac08;
          local_9b8 = &LAB_14712ac0c;
          local_9c0 = &LAB_1471d2aa4;
          local_9c8 = &LAB_1471d2aa8;
          local_9d0 = FUN_1471d2ae4;
          local_9d8 = FUN_1471d2b3e;
          local_9f0 = L"VertexMain";
          local_9f8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
          local_9a8 = 0xe0;
          local_9e0 = 2;
          local_9e8 = 0;
          local_9a0 = uVar21;
          FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
          _DAT_14c9e9658 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_142ce867a);
          _Init_thread_footer(&DAT_14c9e9700);
        }
        FUN_1448e935e(lVar24,&local_248,&DAT_14c9e9658,0);
        dVar30 = local_960;
        iVar28 = local_968._0_4_;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e9700) &&
           (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
          uVar21 = FUN_144a8d90e();
          FUN_145d4bb64();
          local_9b0 = &LAB_14712ac08;
          local_9b8 = &LAB_14712ac0c;
          local_9c0 = &LAB_1471d2aa4;
          local_9c8 = &LAB_1471d2aa8;
          local_9d0 = FUN_1471d2ae4;
          local_9d8 = FUN_1471d2b3e;
          local_9f0 = L"VertexMain";
          local_9f8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
          local_9a8 = 0xe0;
          local_9e0 = 2;
          local_9e8 = 0;
          local_9a0 = uVar21;
          FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
          _DAT_14c9e9658 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_142ce867a);
          _Init_thread_footer(&DAT_14c9e9700);
        }
        plVar20 = plStack_240;
        plVar22 = local_248;
        lVar24 = plVar25[0x2703];
        FUN_145f816f2();
        FUN_1448e935e(lVar24,&local_248,&DAT_14ca20f00,0);
        FUN_145f816f2();
        local_228 = plStack_240;
        puVar19 = local_958;
        local_218 = *(undefined8 *)((longlong)local_988 + 0x84);
        plStack_240 = plVar22;
        local_238 = plVar20;
        plStack_230 = local_248;
        puStack_220 = local_958;
        local_248 = plVar25;
        FUN_145f81960();
        FUN_147288222(local_8b8,&local_8c0,puVar19);
      }
      if (*(int *)((longlong)puVar13 + 0x17c) != iVar28) {
        *(int *)((longlong)puVar13 + 0x17c) = iVar28;
        puVar16 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar16 + 3;
        if ((undefined8 *)puVar13[1] < puVar19) {
          FUN_140023dd8(puVar13,0x20);
          puVar16 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar16 + 3;
        }
        *puVar13 = (ulonglong)puVar19;
        *(int *)(puVar13 + 0xc) = (int)puVar13[0xc] + 1;
        *(undefined8 **)puVar13[6] = puVar16;
        puVar13[6] = (ulonglong)(puVar16 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x17c);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar16 + 2) = uVar4;
      }
      dVar30 = (double)((longlong)dVar30 + 1);
    } while ((longlong)dVar30 < (longlong)(int)plVar5[0x7e]);
  }
  FUN_140779360(local_8b8);
  FUN_1403a4db8(plVar5,local_950);
  FUN_140778010(local_8b8);
  FUN_143579012(&local_8c1);
LAB_142eaa42a:
  if ((local_f0 ^ (ulonglong)auStack_a18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eaa4b0 FUN_142eaa4b0 body=245 status=ok
// SIG undefined FUN_142eaa4b0(void)

longlong * FUN_142eaa4b0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c9e304();
  local_30 = 1;
  local_38 = param_3;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca20d20);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142eaa5a6 FUN_142eaa5a6 body=2066 status=ok
// SIG undefined FUN_142eaa5a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eaa5a6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  char *local_240;
  float local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong *local_220;
  undefined8 local_218;
  uint local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  char local_1f0;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar4 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar4 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar7 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar7 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_f8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  iVar8 = *(int *)(lVar5 + 0x3104);
  iVar10 = *(int *)(lVar5 + 0x3100);
  iVar1 = *(int *)(lVar5 + 0x30fc);
  iVar2 = *(int *)(lVar5 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar5 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar8;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar6;
  lVar5 = FUN_140028f18(param_2);
  if ((lVar5 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar5;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  fVar12 = (float)(*(int *)(lVar5 + 0x3104) - *(int *)(lVar5 + 0x30fc));
  fVar13 = (float)(*(int *)(lVar5 + 0x3100) - *(int *)(lVar5 + 0x30f8));
  fVar14 = (float)*(int *)(lVar5 + 0x30fc);
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  fVar15 = (float)*(int *)(lVar5 + 0x30f8);
  lVar6 = FUN_1447e4f80();
  local_1f0 = '\x02';
  if (*(char *)(lVar6 + 0x41) != '\x03') {
    local_1f0 = *(char *)(lVar6 + 0x41);
  }
  local_1f8 = *(undefined8 *)(lVar5 + 0x18);
  local_198 = _DAT_14c846250;
  uStack_190 = DAT_14c846258;
  local_188 = _DAT_14c846260;
  uStack_180 = _DAT_14c846268;
  local_178 = _DAT_14c846270;
  uStack_170 = _DAT_14c846278;
  local_168 = _DAT_14c846280;
  uStack_160 = _DAT_14c846288;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1bc = 1.0 / (float)(int)((ulonglong)uVar3 >> 0x20);
  local_1c0 = 1.0 / (float)(int)uVar3;
  local_1c4 = 1.0 / fVar12;
  local_1c8 = 1.0 / fVar13;
  local_1e0 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
  local_1e8 = fVar13;
  local_1e4 = fVar12;
  local_1d8 = fVar13;
  local_1d4 = fVar12;
  local_1d0 = fVar15;
  local_1cc = fVar14;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  FUN_145f81960();
  local_258 = (wchar_t *)uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca25190);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eba78) {
    FUN_144b3d300(&DAT_14c9eba78);
    if (DAT_14c9eba78 == -1) {
      FUN_145d4bcae(&local_208);
      local_210 = local_210 & 0xffffff00;
      local_220 = (longlong *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_240 = "Unknown";
      local_250 = 0;
      uStack_248 = 0;
      local_258 = L"FParameters";
      local_218 = 0;
      local_230 = CONCAT44(local_230._4_4_,0xa0);
      local_238 = 4.30199e-43;
      local_228 = &local_208;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142eaadb9);
      _Init_thread_footer(&DAT_14c9eba78);
    }
  }
  local_258 = (wchar_t *)&local_1f8;
  FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x1c0),&DAT_14c9eb9f8);
  local_208 = *(longlong *)(param_1 + 0x1c0);
  local_220 = &local_208;
  local_200 = *(undefined8 *)(param_1 + 0x1c8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  iVar10 = *(int *)(lVar5 + 0x3104) - *(int *)(lVar5 + 0x30fc);
  iVar8 = *(int *)(lVar5 + 0x3100) - *(int *)(lVar5 + 0x30f8);
  local_228 = *(longlong **)(param_1 + 0x1e8);
  local_230 = CONCAT44(iVar10,iVar8);
  local_210 = 1;
  local_218 = CONCAT44(local_218._4_4_,1);
  local_240 = (char *)CONCAT44(local_240._4_4_,fVar13);
  uStack_248 = CONCAT44(uStack_248._4_4_,fVar14);
  local_250 = CONCAT44(local_250._4_4_,fVar15);
  local_258 = (wchar_t *)CONCAT44(local_258._4_4_,(float)iVar10);
  local_238 = fVar12;
  FUN_140094833(param_2,0,0,(float)iVar8);
  if ((local_80 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eaadc6 FUN_142eaadc6 body=2066 status=ok
// SIG undefined FUN_142eaadc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eaadc6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  char *local_240;
  float local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong *local_220;
  undefined8 local_218;
  uint local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  char local_1f0;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar4 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar4 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar7 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar7 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_f8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  iVar8 = *(int *)(lVar5 + 0x3104);
  iVar10 = *(int *)(lVar5 + 0x3100);
  iVar1 = *(int *)(lVar5 + 0x30fc);
  iVar2 = *(int *)(lVar5 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar5 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar8;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar6;
  lVar5 = FUN_140028f18(param_2);
  if ((lVar5 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar5;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  fVar12 = (float)(*(int *)(lVar5 + 0x3104) - *(int *)(lVar5 + 0x30fc));
  fVar13 = (float)(*(int *)(lVar5 + 0x3100) - *(int *)(lVar5 + 0x30f8));
  fVar14 = (float)*(int *)(lVar5 + 0x30fc);
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  fVar15 = (float)*(int *)(lVar5 + 0x30f8);
  lVar6 = FUN_1447e4f80();
  local_1f0 = '\x02';
  if (*(char *)(lVar6 + 0x41) != '\x03') {
    local_1f0 = *(char *)(lVar6 + 0x41);
  }
  local_1f8 = *(undefined8 *)(lVar5 + 0x18);
  local_198 = _DAT_14c846250;
  uStack_190 = DAT_14c846258;
  local_188 = _DAT_14c846260;
  uStack_180 = _DAT_14c846268;
  local_178 = _DAT_14c846270;
  uStack_170 = _DAT_14c846278;
  local_168 = _DAT_14c846280;
  uStack_160 = _DAT_14c846288;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1bc = 1.0 / (float)(int)((ulonglong)uVar3 >> 0x20);
  local_1c0 = 1.0 / (float)(int)uVar3;
  local_1c4 = 1.0 / fVar12;
  local_1c8 = 1.0 / fVar13;
  local_1e0 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
  local_1e8 = fVar13;
  local_1e4 = fVar12;
  local_1d8 = fVar13;
  local_1d4 = fVar12;
  local_1d0 = fVar15;
  local_1cc = fVar14;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  FUN_145e737d8();
  local_258 = (wchar_t *)uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca250d8);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eba78) {
    FUN_144b3d300(&DAT_14c9eba78);
    if (DAT_14c9eba78 == -1) {
      FUN_145d4bcae(&local_208);
      local_210 = local_210 & 0xffffff00;
      local_220 = (longlong *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_240 = "Unknown";
      local_250 = 0;
      uStack_248 = 0;
      local_258 = L"FParameters";
      local_218 = 0;
      local_230 = CONCAT44(local_230._4_4_,0xa0);
      local_238 = 4.30199e-43;
      local_228 = &local_208;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142eaadb9);
      _Init_thread_footer(&DAT_14c9eba78);
    }
  }
  local_258 = (wchar_t *)&local_1f8;
  FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x1c0),&DAT_14c9eb9f8);
  local_208 = *(longlong *)(param_1 + 0x1c0);
  local_220 = &local_208;
  local_200 = *(undefined8 *)(param_1 + 0x1c8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  iVar10 = *(int *)(lVar5 + 0x3104) - *(int *)(lVar5 + 0x30fc);
  iVar8 = *(int *)(lVar5 + 0x3100) - *(int *)(lVar5 + 0x30f8);
  local_228 = *(longlong **)(param_1 + 0x1e8);
  local_230 = CONCAT44(iVar10,iVar8);
  local_210 = 1;
  local_218 = CONCAT44(local_218._4_4_,1);
  local_240 = (char *)CONCAT44(local_240._4_4_,fVar13);
  uStack_248 = CONCAT44(uStack_248._4_4_,fVar14);
  local_250 = CONCAT44(local_250._4_4_,fVar15);
  local_258 = (wchar_t *)CONCAT44(local_258._4_4_,(float)iVar10);
  local_238 = fVar12;
  FUN_140094833(param_2,0,0,(float)iVar8);
  if ((local_80 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eab5ea FUN_142eab5ea body=29 status=ok
// SIG undefined FUN_142eab5ea(void)

void FUN_142eab5ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142eab608 FUN_142eab608 body=29 status=ok
// SIG undefined FUN_142eab608(void)

undefined8 FUN_142eab608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eab626 FUN_142eab626 body=282 status=ok
// SIG undefined FUN_142eab626(void)

undefined8 * FUN_142eab626(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142eab740 FUN_142eab740 body=105 status=ok
// SIG undefined FUN_142eab740(void)

void FUN_142eab740(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142ea8fa8(0xb0,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142ea8fa8(param_1 + 0x16,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142eab783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142eab7aa FUN_142eab7aa body=86 status=ok
// SIG undefined FUN_142eab7aa(void)

void FUN_142eab7aa(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1[1] + 0x3738) = 1;
  lVar2 = param_1[1];
  iVar1 = *(int *)(lVar2 + 0x3720);
  *(uint *)(lVar2 + 0x3720) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x3724) < iVar1 + 1U) {
    FUN_14728863a((longlong *)(lVar2 + 0x3718),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x3718) + (longlong)iVar1 * 8) = *param_1;
  return;
}



// FUNCTION 142eab80a FUN_142eab80a body=12 status=ok
// SIG undefined FUN_142eab80a(void)

void FUN_142eab80a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142eab813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142eab816 FUN_142eab816 body=29 status=ok
// SIG undefined FUN_142eab816(void)

undefined8 FUN_142eab816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eab834 FUN_142eab834 body=282 status=ok
// SIG undefined FUN_142eab834(void)

undefined8 * FUN_142eab834(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142eab94e FUN_142eab94e body=147 status=ok
// SIG undefined FUN_142eab94e(void)

void FUN_142eab94e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1[0x16] + 0x3738) = 1;
  lVar3 = param_1[0x16];
  iVar2 = *(int *)(lVar3 + 0x3720);
  *(uint *)(lVar3 + 0x3720) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x3724) < iVar2 + 1U) {
    FUN_14728863a((longlong *)(lVar3 + 0x3718),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x3718) + (longlong)iVar2 * 8) = param_1[0x15];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142eab9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142eab9e2 FUN_142eab9e2 body=82 status=ok
// SIG undefined FUN_142eab9e2(void)

void FUN_142eab9e2(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3738) = 1;
  local_10 = param_1;
  FUN_14728878a(*(longlong *)(param_1 + 8) + 0x3718);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eaba40 FUN_142eaba40 body=12 status=ok
// SIG undefined FUN_142eaba40(void)

void FUN_142eaba40(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142eaba49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142eaba4c FUN_142eaba4c body=29 status=ok
// SIG undefined FUN_142eaba4c(void)

undefined8 FUN_142eaba4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eaba6a FUN_142eaba6a body=282 status=ok
// SIG undefined FUN_142eaba6a(void)

undefined8 * FUN_142eaba6a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142eabb84 FUN_142eabb84 body=144 status=ok
// SIG undefined FUN_142eabb84(void)

void FUN_142eabb84(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1 + 0xa8;
  *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x3738) = 1;
  FUN_14728878a(*(longlong *)(param_1 + 0xb0) + 0x3718);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eabc52 FUN_142eabc52 body=29 status=ok
// SIG undefined FUN_142eabc52(void)

void FUN_142eabc52(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142eabc70 FUN_142eabc70 body=29 status=ok
// SIG undefined FUN_142eabc70(void)

undefined8 FUN_142eabc70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eabc8e FUN_142eabc8e body=282 status=ok
// SIG undefined FUN_142eabc8e(void)

undefined8 * FUN_142eabc8e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ea45b1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142eabda8 FUN_142eabda8 body=135 status=ok
// SIG undefined FUN_142eabda8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eabda8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    *(undefined1 *)(_DAT_00000140 + 0x3738) = 1;
    FUN_147288854(_DAT_000000b0,0xc0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  *(undefined1 *)(param_1[0x28] + 0x3738) = 1;
  FUN_147288854(param_1[0x16],param_1 + 0x18);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142eabe25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142eabe30 FUN_142eabe30 body=38 status=ok
// SIG undefined FUN_142eabe30(void)

undefined8 FUN_142eabe30(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eabe56 FUN_142eabe56 body=3394 status=ok
// SIG undefined FUN_142eabe56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eabe56(longlong param_1,ulonglong *param_2,undefined8 param_3,code *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  double *pdVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  ulonglong in_R10;
  undefined1 *_Src;
  longlong *plVar28;
  bool bVar29;
  longlong lVar30;
  float fVar31;
  double dVar32;
  undefined1 auStack_5e8 [32];
  wchar_t *local_5c8;
  wchar_t *local_5c0;
  ulonglong uStack_5b8;
  char *local_5b0;
  code *local_5a8;
  code *local_5a0;
  longlong *local_598;
  longlong *local_590;
  undefined1 *local_588;
  undefined1 *local_580;
  undefined4 local_578;
  undefined8 local_570;
  ulonglong *local_568;
  undefined8 *local_560;
  longlong *local_558;
  longlong local_550;
  longlong local_548;
  longlong *local_540;
  int local_538;
  undefined1 local_530 [64];
  undefined1 *local_4f0;
  int local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  longlong local_4c8;
  char local_4c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [160];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined5 uStack_134;
  undefined3 uStack_12f;
  undefined5 uStack_12c;
  undefined8 uStack_127;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_548);
  puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar24 + 0x11;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x90);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar24 + 0x11;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar24;
  param_2[6] = (ulonglong)(puVar24 + 1);
  puVar24[1] = 0;
  *puVar24 = &PTR_FUN_14a1fb978;
  puVar24[3] = 0;
  *(int *)(puVar24 + 4) = local_538;
  if ((longlong)local_538 == 0) {
    *(undefined4 *)((longlong)puVar24 + 0x24) = 8;
  }
  else {
    plVar28 = local_540;
    if (local_540 == (longlong *)0x0) {
      plVar28 = &local_548;
    }
    FUN_1446fe144(puVar24 + 2,local_538,0);
    puVar14 = (undefined8 *)puVar24[3];
    if ((undefined8 *)puVar24[3] == (undefined8 *)0x0) {
      puVar14 = puVar24 + 2;
    }
    memcpy(puVar14,plVar28,(longlong)local_538);
  }
  puVar24[0xd] = 0;
  *(int *)(puVar24 + 0xe) = local_4e8;
  if ((longlong)local_4e8 == 0) {
    *(undefined4 *)((longlong)puVar24 + 0x74) = 8;
  }
  else {
    _Src = local_4f0;
    if (local_4f0 == (undefined1 *)0x0) {
      _Src = local_530;
    }
    FUN_1446fe1b8(puVar24 + 5,local_4e8,0);
    puVar14 = (undefined8 *)puVar24[0xd];
    if ((undefined8 *)puVar24[0xd] == (undefined8 *)0x0) {
      puVar14 = puVar24 + 5;
    }
    memcpy(puVar14,_Src,(longlong)local_4e8 << 3);
  }
  *(undefined4 *)(puVar24 + 0xf) = local_4e0;
  *(undefined4 *)((longlong)puVar24 + 0x7c) = uStack_4dc;
  *(undefined4 *)(puVar24 + 0x10) = uStack_4d8;
  *(undefined4 *)((longlong)puVar24 + 0x84) = uStack_4d4;
  if (local_4f0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_4f0);
  }
  if (local_540 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x1c0);
  iVar25 = *(int *)(lVar5 + 0x3104);
  iVar27 = *(int *)(lVar5 + 0x3100);
  iVar3 = *(int *)(lVar5 + 0x30fc);
  iVar4 = *(int *)(lVar5 + 0x30f8);
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar24 + 5;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x30);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar24 + 5;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar24;
  param_2[6] = (ulonglong)(puVar24 + 1);
  puVar24[1] = 0;
  *puVar24 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar24 + 2) = (float)iVar4;
  *(float *)((longlong)puVar24 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar24 + 3) = 0;
  *(float *)((longlong)puVar24 + 0x1c) = (float)iVar27;
  *(float *)(puVar24 + 4) = (float)iVar25;
  *(undefined4 *)((longlong)puVar24 + 0x24) = 0x3f800000;
  local_178 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_16c = 0;
  uStack_164 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  uStack_134 = 0;
  uStack_12f = 0;
  uStack_12c = 0;
  uStack_127 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 1;
  local_f8 = 0;
  FUN_144b0e33a(param_2,&local_1c8);
  local_198 = DAT_14ca214b0;
  uStack_190 = DAT_14c9c0db0;
  local_188 = DAT_14c9c0d98;
  lVar5 = *(longlong *)(lVar5 + 8);
  lVar21 = (longlong)*(int *)(lVar5 + 0x3720);
  if (lVar21 != 0) {
    puVar24 = *(undefined8 **)(lVar5 + 0x3718);
    puVar14 = puVar24 + lVar21;
    local_568 = param_2 + 0x31;
    local_560 = puVar14;
    do {
      pdVar6 = (double *)*puVar24;
      lVar5 = *(longlong *)(param_1 + 0x1c0);
      if (0 < *(int *)(lVar5 + 0x2130)) {
        dVar8 = (pdVar6[5] - pdVar6[2]) * 0.5;
        dVar32 = (pdVar6[5] + pdVar6[2]) * 0.5;
        dVar7 = (pdVar6[4] + pdVar6[1]) * 0.5;
        dVar9 = (pdVar6[3] + *pdVar6) * 0.5;
        dVar11 = ABS((pdVar6[3] - *pdVar6) * 0.5);
        dVar12 = ABS((pdVar6[4] - pdVar6[1]) * 0.5);
        pdVar22 = (double *)(lVar5 + 0x2020);
        if (*(double **)(lVar5 + 0x2120) != (double *)0x0) {
          pdVar22 = *(double **)(lVar5 + 0x2120);
        }
        iVar25 = 0;
        do {
          lVar21 = -(ulonglong)
                    (ABS(pdVar22[9] * dVar8) + ABS(pdVar22[5]) * dVar12 + ABS(pdVar22[1]) * dVar11 <
                    (dVar32 * pdVar22[9] + dVar7 * pdVar22[5] + dVar9 * pdVar22[1]) - pdVar22[0xd]);
          lVar30 = -(ulonglong)
                    (ABS(pdVar22[0xb] * dVar8) + ABS(pdVar22[7]) * dVar12 + ABS(pdVar22[3]) * dVar11
                    < (dVar32 * pdVar22[0xb] + dVar7 * pdVar22[7] + dVar9 * pdVar22[3]) -
                      pdVar22[0xf]);
          auVar10._8_4_ = (int)lVar21;
          auVar10._0_8_ =
               -(ulonglong)
                (ABS(pdVar22[8] * dVar8) + ABS(pdVar22[4]) * dVar12 + ABS(*pdVar22) * dVar11 <
                (dVar32 * pdVar22[8] + dVar7 * pdVar22[4] + dVar9 * *pdVar22) - pdVar22[0xc]);
          auVar10._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
          uVar26 = movmskpd((int)param_4,auVar10);
          param_4 = (code *)(ulonglong)uVar26;
          auVar13._8_4_ = (int)lVar30;
          auVar13._0_8_ =
               -(ulonglong)
                (ABS(pdVar22[10] * dVar8) + ABS(pdVar22[6]) * dVar12 + ABS(pdVar22[2]) * dVar11 <
                (dVar32 * pdVar22[10] + dVar7 * pdVar22[6] + dVar9 * pdVar22[2]) - pdVar22[0xe]);
          auVar13._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
          iVar27 = movmskpd((int)in_R10,auVar13);
          uVar26 = iVar27 << 2 | uVar26;
          in_R10 = (ulonglong)uVar26;
          if (uVar26 != 0) goto LAB_142eac83a;
          pdVar22 = pdVar22 + 0x10;
          iVar25 = iVar25 + 4;
        } while (iVar25 < *(int *)(lVar5 + 0x2130));
      }
      uVar19 = *(undefined8 *)(lVar5 + 0x13818);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar18 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_580 = &LAB_14712ac08;
        local_588 = &LAB_14712ac0c;
        local_590 = (longlong *)&LAB_1471d2aa4;
        local_598 = (longlong *)&LAB_1471d2aa8;
        local_5a0 = FUN_1471d2ae4;
        local_5a8 = FUN_1471d2b3e;
        local_5c0 = L"VertexMain";
        local_5c8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
        local_578 = 0xe0;
        local_5b0 = (char *)CONCAT44(local_5b0._4_4_,2);
        uStack_5b8 = uStack_5b8 & 0xffffffff00000000;
        local_570 = uVar18;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      FUN_1448e935e(uVar19,&local_548,&DAT_14c9e9658,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar19 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_580 = &LAB_14712ac08;
        local_588 = &LAB_14712ac0c;
        local_590 = (longlong *)&LAB_1471d2aa4;
        local_598 = (longlong *)&LAB_1471d2aa8;
        local_5a0 = FUN_1471d2ae4;
        local_5a8 = FUN_1471d2b3e;
        local_5c0 = L"VertexMain";
        local_5c8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
        local_578 = 0xe0;
        local_5b0 = (char *)CONCAT44(local_5b0._4_4_,2);
        uStack_5b8 = uStack_5b8 & 0xffffffff00000000;
        local_570 = uVar19;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      plVar28 = local_540;
      lVar5 = local_548;
      uVar19 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818);
      FUN_145eb9e20();
      FUN_1448e935e(uVar19,&local_548,&DAT_14ca21028,0);
      FUN_145eb9e20();
      lVar21 = local_548;
      local_1c8 = DAT_14ca94df8;
      if (lVar5 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(longlong *)
                  (*(longlong *)(plVar28[1] + 0x50) + (longlong)*(int *)(lVar5 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(plVar28[1],(longlong)*(int *)(lVar5 + 0xd4),1);
        }
      }
      local_558 = local_540;
      uStack_1c0 = lVar30;
      if (lVar21 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(longlong *)
                  (*(longlong *)(local_540[1] + 0x50) + (longlong)*(int *)(lVar21 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(local_540[1],(longlong)*(int *)(lVar21 + 0xd4),1);
        }
      }
      local_170 = 0;
      local_1b8 = lVar30;
      lVar30 = FUN_140028f18(param_2,&local_1c8);
      if ((lVar30 != 0) && ((local_100 & 0x10000000) == 0)) {
        *(undefined4 *)(local_568 + 4) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)local_568 + 0x24) = local_1a8._4_4_;
        *(undefined4 *)(local_568 + 5) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)local_568 + 0x2c) = uStack_1a0._4_4_;
        *(undefined4 *)(local_568 + 2) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_568 + 0x14) = local_1b8._4_4_;
        *(undefined4 *)(local_568 + 3) = (undefined4)uStack_1b0;
        *(undefined4 *)((longlong)local_568 + 0x1c) = uStack_1b0._4_4_;
        *(undefined4 *)local_568 = (undefined4)local_1c8;
        *(undefined4 *)((longlong)local_568 + 4) = local_1c8._4_4_;
        *(undefined4 *)(local_568 + 1) = (undefined4)uStack_1c0;
        *(undefined4 *)((longlong)local_568 + 0xc) = uStack_1c0._4_4_;
        puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar15 + 4;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2,0x28);
          puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar15 + 4;
        }
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar15;
        param_2[6] = (ulonglong)(puVar15 + 1);
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_14a37d348;
        puVar15[2] = lVar30;
        *(undefined4 *)(puVar15 + 3) = 0;
        *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
      }
      FUN_1417660a0(local_268,*(undefined8 *)(param_1 + 0x1c0),1);
      if (lVar5 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(longlong *)
                  (*(longlong *)(plVar28[1] + 0x50) + (longlong)*(int *)(lVar5 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(plVar28[1],(longlong)*(int *)(lVar5 + 0xd4),1);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(&local_548);
        local_580 = (undefined1 *)((ulonglong)local_580 & 0xffffffffffffff00);
        local_590 = (longlong *)((ulonglong)local_590 & 0xffffffffffffff00);
        local_598 = &local_548;
        local_5b0 = "Unknown";
        local_5c0 = (wchar_t *)0x0;
        uStack_5b8 = 0;
        local_5c8 = L"FParameters";
        local_588 = (undefined1 *)0x0;
        local_5a0 = (code *)CONCAT44(local_5a0._4_4_,0xa0);
        local_5a8 = (code *)CONCAT44(local_5a8._4_4_,0x133);
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_548 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142eaadb9);
        _Init_thread_footer(&DAT_14c9eba78);
      }
      local_5c8 = (wchar_t *)local_268;
      FUN_1449cc26b(param_2,lVar30,lVar5,&DAT_14c9eb9f8);
      local_3b8 = 0;
      uStack_3b0 = 0x3f80000000000000;
      local_3a8 = 0;
      uStack_3a0 = 0x3f80000000000000;
      local_398 = 0;
      uStack_390 = 0x3f80000000000000;
      local_388 = 0;
      uStack_380 = 0x3f80000000000000;
      local_298 = 0;
      uStack_290 = 0x3f80000000000000;
      local_2a8 = 0;
      uStack_2a0 = 0x3f80000000000000;
      local_278 = 0;
      uStack_270 = 0;
      FUN_144b14eb0(*(undefined8 *)(param_1 + 0x1c0),pdVar6,&local_3b8);
      memcpy(&local_548,*(void **)(param_1 + 0x1b8),400);
      FUN_142eaa4b0(&local_550,&local_3b8,0);
      FUN_145c9e304();
      lVar30 = local_550;
      local_4c0 = DAT_14ca20d19;
      if (DAT_14ca20d19 == '\x03') {
        local_4c0 = '\x02';
      }
      local_4c8 = local_550;
      if (local_550 != 0) {
        LOCK();
        puVar1 = (uint *)(local_550 + 8);
        uVar26 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar26 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_550 + 8);
          LOCK();
          uVar26 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar26 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_550 + 0xd);
            plVar16 = (longlong *)FUN_14001cc68(0x10,8);
            plVar16[1] = lVar30;
            plVar20 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar16 = (longlong)plVar20;
                LOCK();
                bVar29 = plVar20 != DAT_14ca843c0;
                plVar17 = plVar16;
                if (bVar29) {
                  plVar20 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar16 = (longlong)plVar17;
                LOCK();
                bVar29 = plVar17 != DAT_14ca843c8;
                plVar20 = plVar16;
                if (bVar29) {
                  plVar17 = DAT_14ca843c8;
                  plVar20 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar20;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
      if (lVar21 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(longlong *)
                  (*(longlong *)(local_558[1] + 0x50) + (longlong)*(int *)(lVar21 + 0xd4) * 8);
        if (lVar30 == 0) {
          lVar30 = FUN_1400bafc2(local_558[1],(longlong)*(int *)(lVar21 + 0xd4),1);
        }
      }
      FUN_145eba08e();
      local_5c8 = (wchar_t *)&local_548;
      FUN_1449cc26b(param_2,lVar30,lVar21,&DAT_14ca22ac8);
      lVar21 = *(longlong *)(param_1 + 0x1c0);
      puVar23 = (undefined *)(*(longlong *)(lVar21 + 8) + 0x1b8);
      if (*(char *)(*(longlong *)(lVar21 + 8) + 0xd0) == '\0') {
        puVar23 = &DAT_14cb05410;
      }
      iVar25 = *(int *)(lVar21 + 0x3104) - *(int *)(lVar21 + 0x30fc);
      fVar31 = (float)iVar25;
      iVar27 = *(int *)(lVar21 + 0x3100) - *(int *)(lVar21 + 0x30f8);
      local_598 = *(longlong **)(puVar23 + 0x10);
      param_4 = (code *)CONCAT44(iVar25,iVar27);
      local_580 = (undefined1 *)CONCAT44(local_580._4_4_,1);
      local_588 = (undefined1 *)CONCAT44(local_588._4_4_,1);
      local_5a8 = (code *)CONCAT44(local_5a8._4_4_,fVar31);
      local_5b0 = (char *)CONCAT44(local_5b0._4_4_,(float)iVar27);
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,(float)*(int *)(lVar21 + 0x30fc));
      local_5c0 = (wchar_t *)CONCAT44(local_5c0._4_4_,(float)*(int *)(lVar21 + 0x30f8));
      local_5c8 = (wchar_t *)CONCAT44(local_5c8._4_4_,fVar31);
      local_5a0 = param_4;
      local_590 = &local_548;
      local_548 = lVar5;
      local_540 = plVar28;
      FUN_140094833(param_2,0,0);
      puVar14 = local_560;
LAB_142eac83a:
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar14);
  }
  if ((local_f0 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eacb9a FUN_142eacb9a body=122 status=ok
// SIG undefined FUN_142eacb9a(void)

undefined8 * FUN_142eacb9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2b2830;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a2b2860;
  FUN_14003f39a(param_1 + 2);
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eacc3c FUN_142eacc3c body=107 status=ok
// SIG undefined FUN_142eacc3c(void)

undefined8 * FUN_142eacc3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2b2860;
  FUN_14003f39a(param_1 + 2);
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eacca8 FUN_142eacca8 body=370 status=ok
// SIG undefined FUN_142eacca8(void)

void FUN_142eacca8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1000101;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_142eacdcb;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_142eacdcb:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eace1c FUN_142eace1c body=29 status=ok
// SIG undefined FUN_142eace1c(void)

undefined8 FUN_142eace1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eace3a FUN_142eace3a body=38 status=ok
// SIG undefined FUN_142eace3a(void)

undefined8 FUN_142eace3a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eace60 FUN_142eace60 body=1294 status=ok
// SIG undefined FUN_142eace60(void)

void FUN_142eace60(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ead370 FUN_142ead370 body=29 status=ok
// SIG undefined FUN_142ead370(void)

undefined8 FUN_142ead370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ead38e FUN_142ead38e body=38 status=ok
// SIG undefined FUN_142ead38e(void)

undefined8 FUN_142ead38e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ead3b4 FUN_142ead3b4 body=1294 status=ok
// SIG undefined FUN_142ead3b4(void)

void FUN_142ead3b4(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ead8c4 FUN_142ead8c4 body=29 status=ok
// SIG undefined FUN_142ead8c4(void)

undefined8 FUN_142ead8c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ead8e2 FUN_142ead8e2 body=38 status=ok
// SIG undefined FUN_142ead8e2(void)

undefined8 FUN_142ead8e2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ead908 FUN_142ead908 body=1294 status=ok
// SIG undefined FUN_142ead908(void)

void FUN_142ead908(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eade18 FUN_142eade18 body=29 status=ok
// SIG undefined FUN_142eade18(void)

undefined8 FUN_142eade18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eade36 FUN_142eade36 body=38 status=ok
// SIG undefined FUN_142eade36(void)

undefined8 FUN_142eade36(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eade5c FUN_142eade5c body=1294 status=ok
// SIG undefined FUN_142eade5c(void)

void FUN_142eade5c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eae36c FUN_142eae36c body=29 status=ok
// SIG undefined FUN_142eae36c(void)

undefined8 FUN_142eae36c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eae38a FUN_142eae38a body=38 status=ok
// SIG undefined FUN_142eae38a(void)

undefined8 FUN_142eae38a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eae3b0 FUN_142eae3b0 body=1294 status=ok
// SIG undefined FUN_142eae3b0(void)

void FUN_142eae3b0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eae8c0 FUN_142eae8c0 body=29 status=ok
// SIG undefined FUN_142eae8c0(void)

undefined8 FUN_142eae8c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eae8de FUN_142eae8de body=38 status=ok
// SIG undefined FUN_142eae8de(void)

undefined8 FUN_142eae8de(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eae904 FUN_142eae904 body=1294 status=ok
// SIG undefined FUN_142eae904(void)

void FUN_142eae904(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eaee13 FUN_142eaee13 body=9406 status=ok
// SIG undefined FUN_142eaee13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eaee13(void)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca1c580);
  if (cVar2 == '\0') {
    _DAT_14ca1c580 = 0;
    uRam000000014ca1c588 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58._0_4_ = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca1c590,L"r.OIT.SortedTriangles",&local_58,
                L"Enable per-instance triangle sorting to avoid invalid triangle ordering.");
  atexit(FUN_142e6ca90);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c5a8,L"r.OIT.SortedTriangles.Debug",&local_58,
                L"Enable per-instance triangle sorting debug rendering.");
  atexit(FUN_142e6cad5);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c5c0,L"r.OIT.SortedTriangles.Pool",&local_58,
                L"Enable index buffer pool allocation which reduce creation/deletion time by re-use buffers."
               );
  atexit(FUN_142e6cb1a);
  local_58._0_4_ = 100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c5d8,L"r.OIT.SortedTriangles.Pool.ReleaseFrameThreshold",&local_58,
                L"Number of frame after which unused buffer are released.");
  atexit(FUN_142e6cb5f);
  local_58._0_4_ = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca1c5f0,L"r.OIT.SortedPixels",&local_58,
                L"Enable OIT rendering (project settings, can\'t be changed at runtime)");
  atexit(FUN_142e6cba4);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca1c608,L"r.OIT.SortedPixels.Enable",&local_58,
                L"Enable OIT rendering (runtime setting, selects shader permutation)");
  atexit(FUN_142e6cbe9);
  local_58._0_4_ = 3;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c620,L"r.OIT.SortedPixels.PassType",&local_58,
                L"Enable OIT rendering. 0: disable 1: enable OIT for std. translucency 2: enable OIT for separated translucency 3: enable for both std. and separated translucency (default)"
               );
  atexit(FUN_142e6cc2e);
  local_58._0_4_ = 4;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c638,L"r.OIT.SortedPixels.MaxSampleCount",&local_58,L"Max sample count.");
  atexit(FUN_142e6cc73);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c650,L"r.OIT.SortedPixels.Debug",&local_58,
                L"Enable debug rendering for OIT. 1: Enable debug for std. translucency 2: Enable for separated translucency."
               );
  atexit(FUN_142e6ccb8);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1c668,L"r.OIT.SortedPixels.Method",&local_58,
                L"Toggle OIT methods 0: Regular alpha-blending (i.e., no OIT) 1: MLAB");
  atexit(FUN_142e6ccfd);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3d4ccccd);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1c680,L"r.OIT.SortedPixels.TransmittanceThreshold",&local_58,
                L"Remove translucent rendering surfaces when the accumulated thransmittance is below this threshold"
               );
  atexit(FUN_142e6cd42);
  local_50 = FUN_145f525a6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1c7b0,&local_58);
  local_50 = FUN_145e8c4e6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1c8d8,&local_58);
  local_50 = FUN_14159777c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1ca00,&local_58);
  local_50 = FUN_14158524a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1cb28,&local_58);
  local_50 = FUN_1415924de;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1cc50,&local_58);
  local_50 = FUN_145e8ca56;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1cd78,&local_58);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca1cd98,L"r.PathTracing",&local_58,
                L"Enables the path tracing renderer (to guard the compilation of path tracer specific material permutations)"
               );
  atexit(FUN_142e6f9a5);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x24;
  FUN_140bd5914(&DAT_14ca1cdb0,L"r.PathTracing.Experimental",&local_58,
                L"Enables some experimental features of the path tracing renderer that require compiling additional permutations of the path tracer. (default: false)"
               );
  atexit(FUN_142e6f9ea);
  FUN_140056680(&local_58,&DAT_149dfb77a);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca1cdc8,L"r.PathTracing.DebugVisualize",&local_58,
                L"Enables a debug mode for the path tracer which can visualize payload fields and perform basic lighting without sample accumulation. (default: )"
               );
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142e6fa2f);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cde0,L"r.PathTracing.DebugVisualizeLightSamples",&local_58,
                L"Number of light samples for the path tracing light sampling debug mode (default: 1)"
               );
  atexit(FUN_142e6fa74);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1cdf8,L"r.PathTracing.Compaction",&local_58,
                L"Enables path compaction to improve GPU occupancy for the path tracer. Requires r.PathTracing.Experimental=true to modify.  (default: true (enabled))"
               );
  atexit(FUN_142e6fab9);
  local_58 = (undefined *)((ulonglong)local_58._1_7_ << 8);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1ce10,L"r.PathTracing.IndirectDispatch",&local_58,
                L"Enables indirect dispatch (if supported by the hardware) for compacted path tracing (default: false (disabled))"
               );
  atexit(FUN_142e6fafe);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ce28,L"r.PathTracing.FlushDispatch",&local_58,
                L"Enables flushing of the command list after dispatch to reduce the likelyhood of TDRs on Windows (default: 2)\n0: off\n1: flush after each dispatch\n2: flush after each tile\n"
               );
  atexit(FUN_142e6fb43);
  local_58._0_4_ = 0x800;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ce40,L"r.PathTracing.DispatchSize",&local_58,
                L"Controls the tile size used when rendering the image. Reducing this value may prevent GPU timeouts for heavy renders. (default = 2048)"
               );
  atexit(FUN_142e6fb88);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ce58,L"r.PathTracing.MaxBounces",&local_58,
                L"Sets the maximum number of path tracing bounces (default = -1 (driven by postprocesing volume))"
               );
  atexit(FUN_142e6fbcd);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ce70,L"r.PathTracing.SamplesPerPixel",&local_58,
                L"Sets the maximum number of samples per pixel (default = -1 (driven by postprocesing volume))"
               );
  atexit(FUN_142e6fc12);
  local_58._0_4_ = 0x40400000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1ce88,L"r.PathTracing.FilterWidth",&local_58,
                L"Sets the anti-aliasing filter width (default = 3.0 which corresponds to a gaussian with standard deviation of a 1/2 pixel)"
               );
  atexit(FUN_142e6fc57);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cea0,L"r.PathTracing.MISMode",&local_58,
                L"Selects the sampling technique for light integration (default = 2 (MIS enabled))\n0: Material sampling\n1: Light sampling\n2: MIS betwen material and light sampling (default)\n"
               );
  atexit(FUN_142e6fc9c);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ceb8,L"r.PathTracing.VolumeMISMode",&local_58,
                L"Selects the sampling technique for volumetric integration of local lighting (default = 1)\n0: Density sampling\n1: Light sampling (default)\n"
               );
  atexit(FUN_142e6fce1);
  local_58._0_4_ = 0x300;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1ced0,L"r.PathTracing.MaxRaymarchSteps",&local_58,
                L"Upper limit on the number of ray marching steps in volumes. This limit should not be hit in most cases, but raising it can reduce bias in case it is. (default = 256)."
               );
  atexit(FUN_142e6fd26);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cee8,L"r.PathTracing.MISCompensation",&local_58,
                L"Activates MIS compensation for skylight importance sampling. (default = 1 (enabled))\nThis option only takes effect when r.PathTracing.MISMode = 2\n"
               );
  atexit(FUN_142e6fd6b);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cf00,L"r.PathTracing.SkylightCaching",&local_58,
                L"Attempts to re-use skylight data between frames. (default = 1 (enabled))\nWhen set to 0, the skylight texture and importance samping data will be regenerated every frame. This is mainly intended as a benchmarking and debugging aid\n"
               );
  atexit(FUN_142e6fdb0);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cf18,L"r.PathTracing.VisibleLights",&local_58,
                L"Should light sources be visible to camera rays? (default = 0 (off))\n0: Hide lights from camera rays (default)\n1: Make all lights visible to camera\n2: Make skydome only visible to camera\n"
               );
  atexit(FUN_142e6fdf5);
  local_58._0_4_ = 0x100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cf30,L"r.PathTracing.MaxSSSBounces",&local_58,
                L"Sets the maximum number of bounces inside subsurface materials. Lowering this value can make subsurface scattering render too dim, while setting it too high can cause long render times.  (default = 256)"
               );
  atexit(FUN_142e6fe3a);
  local_58._0_4_ = 0x3f000000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1cf48,L"r.PathTracing.SSSGuidingRatio",&local_58,
                L"Sets the ratio between classical random walks and walks guided towards the surface. A value of 0.0 corresponds to a purely classical random walk, while a value of 1.0 is fully guided towards the surface (at the expense of fireflies in non-flat regions of the model. (default = 0.5)"
               );
  atexit(FUN_142e6fe7f);
  local_58._0_4_ = 0xbf800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1cf60,L"r.PathTracing.MaxPathIntensity",&local_58,
                L"When positive, light paths greater that this amount are clamped to prevent fireflies (default = -1 (driven by postprocesing volume))"
               );
  atexit(FUN_142e6fec4);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cf78,L"r.PathTracing.ApproximateCaustics",&local_58,
                L"When non-zero, the path tracer will approximate caustic paths to reduce noise. This reduces speckles and noise from low-roughness glass and metals. (default = 1 (enabled))"
               );
  atexit(FUN_142e6ff09);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cf90,L"r.PathTracing.EnableEmissive",&local_58,
                L"Indicates if emissive materials should contribute to scene lighting (default = -1 (driven by postprocesing volume)"
               );
  atexit(FUN_142e6ff4e);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cfa8,L"r.PathTracing.EnableCameraBackfaceCulling",&local_58,
                L"When non-zero, the path tracer will skip over backfacing triangles when tracing primary rays from the camera. (default = 1 (enabled))"
               );
  atexit(FUN_142e6ff93);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca1cfc0,L"r.PathTracing.EnableReferenceDOF",&DAT_14c7608d4,
                L"Should the path tracer ray trace the depth-of-field effect instead of the post-processed effect?\n-1: Inherit from PostProcess settings (default)\n 0: Disabled\n 1: Enable\n"
               );
  atexit(FUN_142e6ffd8);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cfd0,L"r.PathTracing.EnableReferenceAtmosphere",&local_58,
                L"Should the path tracer use a volumetric calculation to represent the sky atmosphere?\n-1: Inherit from PostProcess settings (default)\n 0: Disabled\n 1: Enable\n"
               );
  atexit(FUN_142e7001d);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1cfe8,L"r.PathTracing.EnableReferenceClouds",&local_58,
                L"Should the path tracer use a volumetric calculation to represent volumetric clouds? (This requires Reference Atmosphere to be enabled)\n 0: Disabled (default)\n 1: Enable\n"
               );
  atexit(FUN_142e70062);
  local_58._0_4_ = 0x200;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d000,L"r.PathTracing.AtmosphereOpticalDepthLUTResolution",&local_58,
                L"Size of the square lookup texture used for transmittance calculations by the path tracer in reference atmosphere mode.  (default = 512)"
               );
  atexit(FUN_142e700a7);
  local_58._0_4_ = 0x4000;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d018,L"r.PathTracing.AtmosphereOpticalDepthLUTNumSamples",&local_58,
                L"Number of ray marching samples used when building the transmittance lookup texture used for transmittance calculations by the path tracer in reference atmosphere mode.  (default = 16384)"
               );
  atexit(FUN_142e700ec);
  local_58._0_4_ = 0x200;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d030,L"r.PathTracing.CloudAccelerationMapResolution",&local_58,
                L"Size of the square texture used to accelerate cloud ray marching for the path tracer in reference atmosphere mode.  (default = 512)"
               );
  atexit(FUN_142e70131);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x40);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d048,L"r.PathTracing.CloudAccelerationMapNumSamples",&local_58,
                L"Number of ray marching samples used when building the cloud acceleration map for the path tracer in reference atmosphere mode.  (default = 64)"
               );
  atexit(FUN_142e70176);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d060,L"r.PathTracing.CloudAccelerationMapVisualize",&local_58,
                L"If true, replace clouds with a visualization of the acceleration map to help visualize it and fine tune its resolution (default = false)"
               );
  atexit(FUN_142e701bb);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3d4ccccd);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d078,L"r.PathTracing.CloudRoughnessCutoff",&local_58,
                L"Do not evaluate volumetric clouds beyond this roughness level to improve performance (default=0.05)"
               );
  atexit(FUN_142e70200);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d090,L"r.PathTracing.CloudMapEnable",&local_58,
                L"Controls the use of a texture to cache the cloud material.\n true : Clouds will be voxelized into a texture for faster evaluation (default)\n false: Cloud material will be invoked per ray march step via callable shaders (more accurate, but more expensive)\nRequires r.PathTracing.Experimental=true to modify.\n"
               );
  atexit(FUN_142e70245);
  local_58._0_4_ = 0x200;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d0a8,L"r.PathTracing.CloudMapResolution",&local_58,
                L"Size of the texture used to cache volumetric cloud appearance in reference atmosphere mode.  (default = 512)"
               );
  atexit(FUN_142e7028a);
  local_58._0_4_ = 0x40;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d0c0,L"r.PathTracing.CloudMapDepth",&local_58,
                L"Depth of the texture used to cache volumetric cloud appearance in reference atmosphere mode.  (default = 64)"
               );
  atexit(FUN_142e702cf);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d0d8,L"r.PathTracing.FrameIndependentTemporalSeed",&local_58,
                L"Indicates to use different temporal seed for each sample across frames rather than resetting the sequence at the start of each frame\n0: off\n1: on (default)\n"
               );
  atexit(FUN_142e70314);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d0f0,L"r.PathTracing.SamplerType",&local_58,
                L"Controls the way the path tracer generates its random numbers\n0: use a different high quality random sequence per pixel (default)\n1: optimize the random sequence across pixels to reduce visible error at the target sample count\n"
               );
  atexit(FUN_142e70359);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d108,L"r.PathTracing.MultiGPU",&local_58,
                L"Run the path tracer using all available GPUs when enabled (default = 0)\nUsing this functionality in the editor requires -MaxGPUCount=N setting on the command line"
               );
  atexit(FUN_142e7039e);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d120,L"r.PathTracing.AdjustMultiGPUPasses",&local_58,
                L"Run extra passes per frame when multiple GPUs are active, to improve perf scaling as GPUs are added (default = true)\n"
               );
  atexit(FUN_142e703e3);
  local_58._0_1_ = 0;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d138,L"r.PathTracing.WiperMode",&local_58,
                L"Enables wiper mode to render using the path tracer only in a region of the screen for debugging purposes (default = false, wiper mode disabled)"
               );
  atexit(FUN_142e70428);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d150,L"r.PathTracing.ProgressDisplay",&local_58,
                L"Enables an in-frame display of progress towards the defined sample per pixel limit. The indicator dissapears when the maximum is reached and sample accumulation has stopped\n false: off\n true : on (default)\n"
               );
  atexit(FUN_142e7046d);
  local_58._0_4_ = 0x100;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d168,L"r.PathTracing.LightGridResolution",&local_58,
                L"Controls the resolution of the 2D light grid used to cull irrelevant lights from lighting calculations (default = 256)\n"
               );
  atexit(FUN_142e704b2);
  local_58._0_4_ = 0x80;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d180,L"r.PathTracing.LightGridMaxCount",&local_58,
                L"Controls the maximum number of lights per cell in the 2D light grid. The minimum of this value and the number of lights in the scene is used. (default = 128)\n"
               );
  atexit(FUN_142e704f7);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0xffffffff);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d198,L"r.PathTracing.LightGridAxis",&local_58,
                L"Choose the coordinate axis along which to project the light grid (default = -1, automatic)\n"
               );
  atexit(FUN_142e7053c);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d1b0,L"r.PathTracing.UseDBuffer",&local_58,
                L"Whether to support DBuffer functionality (default=true)");
  atexit(FUN_142e70581);
  local_58._0_4_ = 0x3e19999a;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d1c8,L"r.PathTracing.DecalRoughnessCutoff",&local_58,
                L"Do not evaluate decals beyond this roughness level to improve performance (default=0.15)"
               );
  atexit(FUN_142e705c6);
  local_58._0_4_ = 0x3e19999a;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d1e0,L"r.PathTracing.MeshDecalRoughnessCutoff",&local_58,
                L"Do not evaluate mesh decals beyond this roughness level to improve performance (default=0.15)"
               );
  atexit(FUN_142e7060b);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3f800000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d1f8,L"r.PathTracing.MeshDecalBias",&local_58,
                L"Bias applied to mesh decal rays to avoid intersection with geometry (default = 1.0f)"
               );
  atexit(FUN_142e70650);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d210,L"r.PathTracing.LightFunctionColor",&local_58,
                L"Enables light functions to be colored instead of greyscale (default = false)\n0: off (default)\n1: on (light function material output is used directly instead of converting to greyscale)\n"
               );
  atexit(FUN_142e70695);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d228,L"r.PathTracing.HeterogeneousVolumes.RebuildEveryFrame",&local_58,
                L"Rebuilds volumetric acceleration structures every frame (default = true)\n");
  atexit(FUN_142e706da);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d240,L"r.PathTracing.CameraMediumTracking",&local_58,
                L"Enables automatic camera medium tracking to detect when a camera starts inside water or solid glass automatically\n false: off\n true : on (default)\n"
               );
  atexit(FUN_142e7071f);
  local_58._0_1_ = 1;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d258,L"r.PathTracing.OutputPostProcessResources",&local_58,
                L"Output the pathtracing resources to the postprocess passes\n false: off\n true : on (Buffers including, raw/denoised radiance, albedo, normal, and variance)\n"
               );
  atexit(FUN_142e70764);
  local_58._0_1_ = 0;
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d270,L"r.PathTracing.Substrate.UseSimplifiedMaterials",&local_58,
                L"Instead of evaluating all layers, use an optimized material in which all slabs have been merged.\n false: off (default)\n true : on\nRequires r.PathTracing.Substrate.CompileSimplifiedMaterials=true to be set.\n"
               );
  atexit(FUN_142e707a9);
  local_58._0_1_ = 0;
  local_68 = 0x24;
  FUN_140bd5914(&DAT_14ca1d288,L"r.PathTracing.Substrate.CompileSimplifiedMaterials",&local_58,
                L"Compile a simplified representation of Substrate materials which merges all slabs into one. This is mainly intended for debugging purposes. Enabling this double the number of path tracing shader permutations.\n false: off (default)\n true : on\n"
               );
  atexit(FUN_142e707ee);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca1d2a0,L"r.PathTracing.UseAnalyticTransmittance",&local_58,
                L"Determines use of analytical or null-tracking estimation when evaluating transmittance\n false: off (uses null-tracking estimation)\n true : on (uses analytical estimation when possible) (default)\n"
               );
  atexit(FUN_142e70833);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d2b8,L"r.PathTracing.AdaptiveSampling",&local_58,
                L"Determines if adaptive sampling is enabled. When non-zero, the path tracer will try to skip calculation of pixels below the specified error threshold.\n0: off (uniform sampling - default)\n1: on (adaptive sampling)\nRequires r.PathTracing.Experimental=true to modify.\n"
               );
  atexit(FUN_142e70878);
  local_58._0_4_ = 0x3a83126f;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d2d0,L"r.PathTracing.AdaptiveSampling.ErrorThreshold",&local_58,
                L"This is the target perceptual error threshold. Once a pixel\'s error falls below this value, it will not be sampled again (default: 0.001)\n"
               );
  atexit(FUN_142e708bd);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1d2e8,L"r.PathTracing.AdaptiveSampling.Visualize",&local_58,
                L"Select a visualization mode to help understand how adaptive sampling is working.\n0: off\n1: Visualize active pixels with heatmap (converged pixels are displayed as is)\n2: Visualize sample count heatmap (against current max samples)\n3-7: Visualize variance mip levels\n"
               );
  atexit(FUN_142e70902);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1d300,L"r.PathTracing.BackgroundAlpha",&local_58,
                L"Value of the alpha channel for pixels that do hit anything (default 0.0)\nNote that this refers to the normal interpretation of alpha which the path tracer uses internally, so 0 corresponds to a transparent pixel while 1 refers to a solid pixel."
               );
  atexit(FUN_142e70947);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca1d318,L"r.PathTracing.Debug",&local_58,
                L"Enable debug rendering for path tracer. Used for only development and needs to be enabled before starting the engine.\n"
               );
  atexit(FUN_142e7098c);
  local_50 = FUN_145f52b9c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1d4a0,&local_58);
  local_50 = FUN_145e8cfc6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1d5c8,&local_58);
  local_50 = FUN_145dd0dac;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1d6f0,&local_58);
  local_50 = FUN_1460190e6;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca1d788,&local_58);
  _DAT_14ca98638 = FUN_142e70a30;
  _DAT_14ca98724 = 0;
  _DAT_14ca98660 = 0;
  _DAT_14ca98790 = _DAT_14ca98790 | 0x420;
  _DAT_14ca98738 = 0x20;
  local_50 = FUN_145f53192;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1d8b0,&local_58);
  local_50 = FUN_145f6bb26;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1d9d8,&local_58);
  local_50 = FUN_145e8d536;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1db00,&local_58);
  local_50 = FUN_145e8daa6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1dc28,&local_58);
  local_50 = FUN_145e4a28a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1dd50,&local_58);
  local_50 = FUN_145f536a4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1de78,&local_58);
  local_50 = FUN_14608a6da;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1dfa0,&local_58);
  local_50 = FUN_14608a944;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1e0c8,&local_58);
  local_50 = FUN_14612ef64;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca1e1f0,&local_58);
  local_50 = FUN_145e8e016;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1e318,&local_58);
  local_50 = FUN_145f53c9a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1e440,&local_58);
  local_50 = FUN_14607f200;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1e568,&local_58);
  local_50 = FUN_14607f466;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1e690,&local_58);
  local_50 = FUN_145e35ca8;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca1e728,&local_58);
  local_50 = FUN_14612f23a;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca1e850,&local_58);
  local_50 = FUN_14608abae;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1e978,&local_58);
  local_50 = FUN_14608ae18;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1eaa0,&local_58);
  local_50 = FUN_14608b082;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1ebc8,&local_58);
  local_50 = FUN_14608b2ec;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1ecf0,&local_58);
  local_50 = FUN_14608b556;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1ee18,&local_58);
  local_50 = FUN_14608b7c0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1ef40,&local_58);
  local_50 = FUN_14608ba2a;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1f068,&local_58);
  local_50 = FUN_14608bc94;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1f190,&local_58);
  local_50 = FUN_14608befe;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1f2b8,&local_58);
  local_50 = FUN_14608c168;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca1f3e0,&local_58);
  local_50 = FUN_146090574;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1f508,&local_58);
  local_50 = FUN_1460907e0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1f630,&local_58);
  local_50 = FUN_146090a4c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1f758,&local_58);
  local_50 = FUN_146090cb8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1f880,&local_58);
  local_50 = FUN_145f31b78;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1f9a8,&local_58);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1f9b8,L"r.PathTracing.Denoiser",&local_58,
                L"Enable denoising of the path traced output (if a denoiser plugin is active) (default = -1 (driven by postprocesing volume))\n-1: inherit from PostProcessVolume\n0: disable denoiser\n1: enable denoiser (if a denoiser plugin is active)\n"
               );
  atexit(FUN_142e82af0);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1f9d0,L"r.PathTracing.Denoiser.NormalSpace",&local_58,
                L"The space normal is in\n0: World space (default)\n1: Camera space. Some denoisers require camera space normal\n"
               );
  atexit(FUN_142e82b35);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1f9e8,L"r.PathTracing.Denoiser.Prepass.VarianceType",&local_58,
                L"Select the per-pixel variance type:0: Multiple channel (RGB) variance for radiance1: Combined single channel variance for radiance, albedo and normal"
               );
  atexit(FUN_142e82b7a);
  local_58._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca1fa00,L"r.PathTracing.Denoiser.Prepass.OutputVarianceTexture",&local_58,
                L"0: No variance texture will be generated in Prepass1: Output variance texture to denoisers, or the postprocess material usually used by MRQ"
               );
  atexit(FUN_142e82bbf);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fa18,L"r.PathTracing.Denoiser.Prepass.RankedLuminanceVariance",&local_58,
                L"Select the luminance type when calculating the variance:\n0: use default luminance to estimate variance.\n1: Use channel ranked luminance when calculating variance.\n"
               );
  atexit(FUN_142e82c04);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fa30,L"r.PathTracing.SpatialDenoiser",&local_58,
                L"Enable spatial denoising of the path traced output\n-1: inherit from PostProcessVolume\n0: disable denoiser\n1: enable denoiser (if a denoiser plugin is active)\n"
               );
  atexit(FUN_142e82c49);
  FUN_1400b22c2(&local_58,"NNEDenoiser");
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca1fa48,L"r.PathTracing.Denoiser.Name",&local_58,
                L"Set the spatial denoiser name. It is the corresponding name registered by a denoiser plugin\nAny registered denoiser should be able to denoise a single frame spatially.\n"
               );
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142e82c8e);
  FUN_1400b22c2(&local_58,&DAT_14a2aa3e0);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca1fa60,L"r.PathTracing.TemporalDenoiser.Name",&local_58,
                L"Set the temporal denoiser name. It is the corresponding name registered by a denoiser plugin\nThe temporal denoiser usually has better temporal stability when rendering offline.\n"
               );
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142e82cd3);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fa78,L"r.PathTracing.SpatialDenoiser.Type",&local_58,
                L"The type of spatial denoiser\n0: Use spatial denoiser only plugin\n1: Use spatial denoiser plugin that also provides temporal denoising\n"
               );
  atexit(FUN_142e82d18);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fa90,L"r.PathTracing.TemporalDenoiser",&local_58,
                L"Enable temporal denoising of the path traced output\n-1: inherit from PostProcessVolume (TODO when out of experimental phase)\n0: disable denoiser\n1: enable denoiser (if a denoiser plugin is active)\n"
               );
  atexit(FUN_142e82d5d);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1faa8,L"r.PathTracing.TemporalDenoiser.Type",&local_58,
                L"The type of temporal denoiser\n0: Use the built-in temporal denoiser\n1: Use the temporal denoiser from plugin\n"
               );
  atexit(FUN_142e82da2);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fac0,L"r.PathTracing.TemporalDenoiser.MotionVector.Type",&local_58,
                L"The type of motion vecotr estimation algorithm\n0: Built-in motion vector estimator\n1: Motion vector estimator from the plugin\n"
               );
  atexit(FUN_142e82de7);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fad8,L"r.PathTracing.TemporalDenoiser.VisualizeMotionVector",&local_58,
                L"1: visualize the motion vector compared to the raster motion vector\n");
  atexit(FUN_142e82e2c);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1faf0,L"r.PathTracing.TemporalDenoiser.EnableSubPixelOffset",&local_58,
                L"Enable subpixel offset when merging\n-1: inherit from PostProcessVolume\n0: disable denoiser\n1: enable denoiser (if a denoiser plugin is active)\n"
               );
  atexit(FUN_142e82e71);
  local_58._0_4_ = 0xbf800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1fb08,L"r.PathTracing.TemporalDenoiser.kappa",&local_58,
                L"Scaling parameter to determine how fast the history weight falls and the cutting point to zero. Use DeltaE to derive kappa if -1\n"
               );
  atexit(FUN_142e82eb6);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1fb20,L"r.PathTracing.TemporalDenoiser.eta",&local_58,
                L"Eta param. Error distance below this will have max history weight. Use DeltaE to derive Eta if -1\n"
               );
  atexit(FUN_142e82efb);
  local_58._0_4_ = 0x40a00000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1fb38,L"r.PathTracing.TemporalDenoiser.DeltaE",&local_58,
                L"Cut off the history weight to zero at CIE DeltaE for low frequency.\n1.0 :the just noticeable difference (JND),\n2.0 :perceptible for close look\n10.0:Perceptible at a glance This works as an alternative control instead of kappa. 2 as default."
               );
  atexit(FUN_142e82f40);
  local_58._0_4_ = 0x40066666;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1fb50,L"r.PathTracing.TemporalDenoiser.DeltaE.HighFrequency",&local_58,
                L"Cut off the history weight to zero when using high frequency per pixel difference.\nIt should only be enabled when the source image is smooth or denoised."
               );
  atexit(FUN_142e82f85);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca1fb68,L"r.PathTracing.TemporalDenoiser.alpha",&local_58,
                L"The weight of history in the exponential mean average\n");
  atexit(FUN_142e82fca);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fb80,L"r.PathTracing.TemporalDenoiser.mode",&local_58,
                L"0: disabled \n1: offline rendering only\n2: online rendering (for debug)\n");
  atexit(FUN_142e8300f);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fb98,L"r.PathTracing.TemporalDenoiser.source",&local_58,
                L"0: Denoised Radance when possible (Default) \n1: Normal\n2: Albedo\n3: Raw RadianceOtherwise: Feature Fusion (TODO)"
               );
  atexit(FUN_142e83054);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fbb0,L"r.PathTracing.TemporalDenoiser.DenoiseSourceImageFirst",&local_58,
                L"Denoise the source image with IntelImageDenoisier");
  atexit(FUN_142e83099);
  local_58._0_4_ = 8;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fbc8,L"r.PathTracing.TemporalDenoiser.SubPixelOffset.StartMip",&local_58,
                L"From 0 to this mip, we will perform subpixel offset");
  atexit(FUN_142e830de);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fbe0,L"r.PathTracing.TemporalDenoiser.MotionOperation",&local_58,
                L"0: use the motion vector directly estimated1: subtract between the motion");
  atexit(FUN_142e83123);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fbf8,L"r.PathTracing.TemporalDenoiser.VisWarp",&local_58,
                L"0: disable1: visualize warped source by the motion vector2: weights, warped source, and combined"
               );
  atexit(FUN_142e83168);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fc10,L"r.PathTracing.TemporalDenoiser.DistanceMetrics",&local_58,
                L"0: Luminance based metrics for distance estimation. Color with same luminance will create error in motion and history weights estimation.1: Direct color difference2: Visual color difference based on CIELAB2000 color difference."
               );
  atexit(FUN_142e831ad);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fc28,L"r.PathTracing.TemporalDenoiser.TotalVariation",&local_58,
                L"!=0: Use less history if the total variation is large in a local patch");
  atexit(FUN_142e831f2);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca1fc40,L"r.PathTracing.TemporalDenoiser.PatchCount",&local_58,
                L"The number of similar patches found by Non-Local Mean to use for temporal denoising\n1: default. Accumulae the one with the minimal distance exponentially.>1 && < 16: Use bilaterial filtering to accumulate multiple patches."
               );
  atexit(FUN_142e83237);
  local_50 = FUN_145ceee9c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1fd70,&local_58);
  local_50 = FUN_145ea0820;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1fe98,&local_58);
  local_50 = FUN_145e8e586;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca1ffc0,&local_58);
  local_50 = FUN_145ea0d92;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca200e8,&local_58);
  local_50 = FUN_145e8eaf6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20210,&local_58);
  local_50 = FUN_145f3216c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20338,&local_58);
  local_50 = FUN_145e72a8e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20460,&local_58);
  local_50 = FUN_145e8f066;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20588,&local_58);
  local_50 = FUN_145e8f5d6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca206b0,&local_58);
  local_50 = FUN_145e72ffc;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca207d8,&local_58);
  local_50 = FUN_145e8fb46;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20900,&local_58);
  local_50 = FUN_145f6c120;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20a28,&local_58);
  local_50 = FUN_145f008b4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20b50,&local_58);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca20b60,L"r.PhysicsField.Rendering.TargetType",&DAT_14c7608d8,
                L"Physics field target to be used in the viewport show options.\n");
  atexit(FUN_142e84465);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca20b78,L"r.PhysicsField.Rendering.EvalType",&DAT_14ca20b70,
                L"Physics field boolean to check if we are evaluating exactly(0) or sampling(1) the field for visualisation.\n"
               );
  atexit(FUN_142e844aa);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca20b90,L"r.PhysicsField.Rendering.SystemType",&DAT_14ca20b88,
                L"Physics field boolean to check if we want to display the CPU(0) or GPU(1) field.\n"
               );
  atexit(FUN_142e844ef);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14ca20ba0,L"r.PhysicsField.Rendering.TransientLifetime",&DAT_14c7608dc,
                L"Physics field transient commands lifetime for rendering.\n");
  atexit(FUN_142e84534);
  local_50 = FUN_145f54290;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20cc8,&local_58);
  local_50 = FUN_145c9e304;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca20d60,&local_58);
  local_50 = FUN_145e7356a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20e88,&local_58);
  local_50 = FUN_145f816f2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca20fb0,&local_58);
  local_50 = FUN_145eb9e20;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca210d8,&local_58);
  local_50 = FUN_145f547a2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21200,&local_58);
  local_58._0_4_ = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21210,L"r.DOF.Gather.ResolutionDivisor",&local_58,
                L"Selects the resolution divisor of the gather pass.\n 1: Do gathering pass at full resolution;\n 2: Do gathering pass at half resolution (default)."
               );
  atexit(FUN_142e8874c);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21228,L"r.DOF.Gather.AccumulatorQuality",&local_58,
                L"Controles the quality of the gathering accumulator.\n");
  atexit(FUN_142e88791);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21240,L"r.DOF.Gather.EnableBokehSettings",&local_58,
                L"Whether to applies bokeh settings on foreground and background gathering.\n 0: Disable;\n 1: Enable (default)."
               );
  atexit(FUN_142e887d6);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21258,L"r.DOF.Gather.PostfilterMethod",&local_58,
                L"Method to use to post filter a gather pass.\n 0: None;\n 1: Per RGB channel median 3x3 (default);\n 2: Per RGB channel max 3x3."
               );
  atexit(FUN_142e8881b);
  local_58._0_4_ = 5;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21270,L"r.DOF.Gather.RingCount",&local_58,
                L"Number of rings for gathering kernels [[3; 5]]. Default to 5.\n");
  atexit(FUN_142e88860);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21288,L"r.DOF.Scatter.ForegroundCompositing",&local_58,
                L"Compositing mode of the foreground hybrid scattering.\n 0: Disabled;\n 1: Additive (default)."
               );
  atexit(FUN_142e888a5);
  local_58._0_4_ = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca212a0,L"r.DOF.Scatter.BackgroundCompositing",&local_58,
                L"Compositing mode of the background hybrid scattering.\n 0: Disabled;\n 1: Additive;\n 2: Gather occlusion (default)."
               );
  atexit(FUN_142e888ea);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca212b8,L"r.DOF.Scatter.EnableBokehSettings",&local_58,
                L"Whether to enable bokeh settings on scattering.\n 0: Disable;\n 1: Enable (default)."
               );
  atexit(FUN_142e8892f);
  local_58._0_4_ = 0x40400000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca212d0,L"r.DOF.Scatter.MinCocRadius",&local_58,
                L"Minimal Coc radius required to be scattered (default = 3).");
  atexit(FUN_142e88974);
  local_58._0_4_ = 0x3dcccccd;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca212e8,L"r.DOF.Scatter.MaxSpriteRatio",&local_58,
                L"Maximum ratio of scattered pixel quad as sprite, usefull to control DOF\'s scattering upperbound.  1 will allow to scatter 100% pixel quads, whereas 0.2 will only allow 20% (default = 0.1)."
               );
  atexit(FUN_142e889b9);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21300,L"r.DOF.Recombine.EnableBokehSettings",&local_58,
                L"Whether to applies bokeh settings on slight out of focus done in recombine pass.\n 0: Disable;\n 1: Enable (default)."
               );
  atexit(FUN_142e889fe);
  local_58._0_4_ = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21318,L"r.DOF.Recombine.Quality",&local_58,
                L"Configures the quality of the recombine pass.\n 0: No slight out of focus;\n 1: Slight out of focus 24spp;\n 2: Slight out of focus 32spp (default)."
               );
  atexit(FUN_142e88a43);
  local_58._0_4_ = 0x3dcccccd;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca21330,L"r.DOF.Recombine.MinFullresBlurRadius",&local_58,
                L"Minimal blurring radius used in full resolution pixel width to actually do DOF  when slight out of focus is enabled (default = 0.1)."
               );
  atexit(FUN_142e88a88);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca21348,L"r.DOF.TemporalAAQuality",&local_58,
                L"Quality of temporal AA pass done in DOF.\n 0: Faster but lower quality; 1: Higher quality pass (default)."
               );
  atexit(FUN_142e88acd);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x41200000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca21360,L"r.DOF.Scatter.NeighborCompareMaxColor",&local_58,
                L"Controles the linear color clamping upperbound applied before color of pixel and neighbors are compared. To low, and you may not scatter enough; to high you may scatter unnecessarily too much in highlights (Default: 10)."
               );
  atexit(FUN_142e88b12);
  DAT_14ca21378._0_4_ = 0;
  DAT_14ca21378._4_4_ = 0x3f800000;
  _DAT_14ca21380 = 0;
  _DAT_14ca21384 = 0;
  DAT_14ca21390 = 0xffffffff;
  DAT_14ca21394 = 5;
  DAT_14ca21396 = 0;
  _DAT_14ca213a0 = 0xffffffff;
  DAT_14ca213a4 = 5;
  DAT_14ca213a5 = 1;
  DAT_14ca213a6 = 0;
  DAT_14ca213a8 = 0;
  _DAT_14ca21398 = &PTR_FUN_14a2b2890;
  DAT_14ca21388 = &PTR_FUN_14a2b2830;
  DAT_14ca21395 = 1;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_142eb10bf;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142eb10c4;
      goto LAB_142eb10fb;
    }
  }
  else {
LAB_142eb10bf:
    if (iVar1 != 0x10) {
LAB_142eb10fb:
      FUN_140308182(&DAT_14ca21388,0);
      goto LAB_142eb1109;
    }
  }
LAB_142eb10c4:
  (*(code *)DAT_14ca21388[3])(&DAT_14ca21388,&DAT_14ca85100);
LAB_142eb1109:
  atexit(FUN_142e88b57);
  local_50 = FUN_142e88bd6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca213b0,&local_58);
  local_50 = FUN_142e88e16;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca213c0,&local_58);
  local_50 = FUN_142e89056;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca213d0,&local_58);
  local_50 = FUN_142e89296;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca213e0,&local_58);
  local_50 = FUN_142e894d6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca213f0,&local_58);
  local_50 = FUN_142e89716;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21400,&local_58);
  local_50 = FUN_142e89956;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21410,&local_58);
  local_50 = FUN_142e89b96;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21420,&local_58);
  local_50 = FUN_142e89dd6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21430,&local_58);
  local_50 = FUN_142e8a016;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21440,&local_58);
  local_50 = FUN_142e8a256;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21450,&local_58);
  local_50 = FUN_142e8a496;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca21460,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eb12d4 FUN_142eb12d4 body=69 status=ok
// SIG undefined FUN_142eb12d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb12d4(void)

{
  _DAT_14ca25330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb1316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25338,1);
  return;
}



// FUNCTION 142eb1319 FUN_142eb1319 body=69 status=ok
// SIG undefined FUN_142eb1319(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb1319(void)

{
  _DAT_14ca25348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb135b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25350,1);
  return;
}



// FUNCTION 142eb135e FUN_142eb135e body=1014 status=ok
// SIG undefined FUN_142eb135e(void)

void FUN_142eb135e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  
  iVar3 = 0x10;
  if (*(int *)(param_2 + 0x2988) < 0x10) {
    iVar3 = *(int *)(param_2 + 0x2988);
  }
  iVar1 = 4;
  if (4 < iVar3) {
    iVar1 = iVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  fVar13 = *(float *)(param_2 + 0x2980);
  fVar5 = *(float *)(param_2 + 0x2984);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar13 <= fVar5) {
    *param_1 = 0x3f80000000000000;
    param_1[1] = 0x3f800000;
  }
  else {
    fVar11 = 3.1415927 / (float)iVar1;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      *(undefined4 *)param_1 = 2;
      fVar13 = fVar13 / fVar5;
      fVar4 = sinf(fVar11);
      fVar4 = fVar4 * (1.0 / fVar13);
      fVar5 = fVar4;
      if (1.0 <= fVar4) {
        fVar5 = 1.0;
      }
      fVar5 = asinf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 |
                           ~-(uint)(fVar4 < -1.0) & (uint)fVar5));
      fVar4 = cosf(fVar5);
      fVar6 = cosf(fVar11);
      fVar7 = cosf(fVar11);
      fVar11 = sinf(fVar11);
      fVar8 = cosf(fVar5);
      fVar9 = sinf(fVar5);
      fVar5 = 3.1415927 /
              ((float)*(int *)((longlong)param_1 + 0xc) *
              (((fVar5 / 3.1415927) * fVar13 * 3.1415927 * fVar13 - fVar8 * fVar13 * fVar13 * fVar9)
              + fVar11 * fVar7));
      if (fVar5 < 0.0) {
        fVar5 = sqrtf(fVar5);
      }
      else {
        fVar5 = SQRT(fVar5);
      }
      fVar7 = (fVar13 + -1.0) * 0.5;
      fVar11 = fVar13 * fVar13 - fVar7 * fVar7;
      uVar12 = 0;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar6 = fVar4 * fVar13 - fVar6;
      fVar8 = ABS(fVar11);
      fVar9 = ABS(fVar7);
      fVar4 = fVar9;
      if (fVar9 <= fVar8) {
        fVar4 = fVar8;
      }
      if ((fVar4 != 0.0) || (NAN(fVar4))) {
        fVar10 = fVar8;
        if (fVar9 <= fVar8) {
          fVar10 = fVar9;
        }
        fVar10 = fVar10 / fVar4;
        fVar4 = fVar10 * fVar10;
        fVar10 = ((((((fVar4 * 0.007212885 + -0.03505968) * fVar4 + 0.08167588) * fVar4 +
                    -0.13374658) * fVar4 + 0.19856563) * fVar4 + -0.33325) * fVar4 + 1.0) * fVar10;
        fVar4 = (float)(-(uint)(fVar8 < fVar9) & (uint)(1.5707964 - fVar10) |
                       ~-(uint)(fVar8 < fVar9) & (uint)fVar10);
        uVar12 = -(uint)(fVar11 < 0.0) & (uint)(3.1415927 - fVar4) |
                 ~-(uint)(fVar11 < 0.0) & (uint)fVar4;
        uVar12 = -(uint)(fVar7 < 0.0) & (uVar12 ^ 0x80000000) | ~-(uint)(fVar7 < 0.0) & uVar12;
      }
      *(uint *)(param_1 + 2) = uVar12;
      *(float *)((longlong)param_1 + 0x14) = fVar13 * fVar5;
      *(float *)(param_1 + 3) = fVar6 * fVar5;
      *(float *)((longlong)param_1 + 4) = fVar5;
      fVar5 = (fVar13 - fVar6) * fVar5;
      lVar2 = 8;
      goto LAB_142eb1675;
    }
    *(undefined4 *)param_1 = 1;
    fVar13 = cosf(fVar11);
    fVar5 = sinf(fVar11);
    fVar13 = ((float)*(int *)((longlong)param_1 + 0xc) * fVar5 * fVar13) / 3.1415927;
    if (fVar13 < 0.0) {
      fVar13 = sqrtf(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    *(float *)((longlong)param_1 + 4) = 1.0 / fVar13;
    fVar5 = cosf(3.1415927 / (float)*(int *)((longlong)param_1 + 0xc));
    *(float *)(param_1 + 1) = fVar5 * (1.0 / fVar13);
  }
  fVar5 = 0.0;
  lVar2 = 0x10;
LAB_142eb1675:
  *(float *)((longlong)param_1 + lVar2) = fVar5;
  return;
}



// FUNCTION 142eb176c FUN_142eb176c body=2498 status=ok
// SIG undefined FUN_142eb176c(void)

void FUN_142eb176c(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1c1;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined1 local_163;
  undefined4 local_162;
  undefined3 uStack_15e;
  undefined2 local_15b;
  undefined1 local_159;
  undefined8 *local_158;
  longlong local_150;
  undefined *local_148;
  undefined4 auStack_f0 [14];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar3 = *(undefined4 *)(param_2 + 0x3090);
  local_1c0 = param_3;
  plVar8 = (longlong *)(**(code **)(*param_4 + 0x2f0))(param_4);
  local_98._8_8_ = 0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_198 = param_2;
  if (plVar8 == (longlong *)0x0) {
    uVar16 = 0;
    lVar10 = 0;
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    do {
      plVar9 = (longlong *)(**(code **)(*plVar8 + 0x30))(plVar8);
      if (plVar9 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar9 + 0x1b0))(plVar9);
        if (cVar7 != '\0') {
          memset(&local_158,0,0x98);
          FUN_1415d132c();
          (&local_150)[DAT_14ca25420] = (longlong)&DAT_14ca253d8;
          auStack_f0[DAT_14ca25420] = 0;
          FUN_1415d1448();
          (&local_150)[DAT_14ca25548] = (longlong)&DAT_14ca25500;
          auStack_f0[DAT_14ca25548] = 0;
          cVar7 = FUN_14007744c(plVar9,&local_158,0,local_b8);
          if (cVar7 != '\0') goto LAB_142eb18bd;
        }
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8,uVar3);
    } while (plVar8 != (longlong *)0x0);
    plVar8 = (longlong *)0x0;
LAB_142eb18bd:
    uVar16 = local_b8._0_8_;
    lVar10 = local_a8._0_8_;
  }
  lVar5 = local_198;
  uVar17 = uVar16;
  if (lVar10 == 0) {
    uVar17 = 0;
  }
  if (local_98._8_8_ == 0) {
    uVar16 = 0;
  }
  if (local_98._8_8_ != 0 && lVar10 != 0) {
    local_b8._8_8_ = *(undefined8 *)(local_198 + 0x30f8);
    local_b8._0_8_ = *(undefined8 *)(*(longlong *)(local_1c0 + 0x2a8) + 0x84);
    local_a8._0_8_ = *(undefined8 *)(local_198 + 0x3100);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar15 + 0x38;
    local_188 = uVar17;
    local_180 = lVar10;
    local_178 = uVar16;
    local_170 = local_98._8_8_;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar15 + 0x38;
    }
    *puVar1 = (ulonglong)puVar11;
    *puVar15 = &PTR_FUN_14a2ba6b0;
    local_1a0 = puVar15 + 2;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    *(undefined1 (*) [16])(puVar15 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar15 + 6) = (undefined1  [16])0x0;
    puVar15[8] = 0;
    lVar10 = 0xc0;
    do {
      *(undefined1 (*) [16])((longlong)puVar15 + lVar10) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar15 + lVar10 + 0x10) = 0xffff0000;
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != 0x180);
    *(undefined4 *)((longlong)puVar15 + 0x194) = 0;
    *(undefined1 (*) [16])(puVar15 + 0x30) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar15 + 0x32) = 0;
    *(undefined4 *)(puVar15 + 0x33) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 0x19c) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 0x1a4) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x35) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x1ac) = 0;
    puVar15[0x36] = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    local_1b0 = puVar1;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar15;
    lVar10 = FUN_1447e4f80();
    puVar1 = local_1b0;
    cVar7 = '\x02';
    if (*(char *)(lVar10 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar10 + 0x41);
    }
    puVar15[2] = *(undefined8 *)(lVar5 + 0x18);
    *(char *)(puVar15 + 3) = cVar7;
    lVar10 = *(longlong *)(local_1c0 + 0x2a8);
    uVar2 = *(undefined1 *)(lVar10 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_1b0,0x50);
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 9;
    }
    lVar12 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar13[1] = *(undefined8 *)(lVar10 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar10;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(lVar12,iVar4);
    }
    puVar1 = local_1b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar15[5] = puVar13;
    lVar10 = *(longlong *)(local_1c0 + 0x2b0);
    uVar2 = *(undefined1 *)(lVar10 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      local_1b8 = lVar12;
      FUN_140023dd8(local_1b0,0x50);
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 9;
      lVar12 = local_1b8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar13[1] = *(undefined8 *)(lVar10 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar10;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      local_1b8 = lVar12;
      FUN_1447568fc(lVar12,iVar4);
      lVar12 = local_1b8;
    }
    puVar1 = local_1b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar15[6] = puVar13;
    lVar10 = *(longlong *)(local_1c0 + 0x2b8);
    uVar2 = *(undefined1 *)(lVar10 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      local_1b8 = lVar12;
      FUN_140023dd8(local_1b0,0x50);
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 9;
      lVar12 = local_1b8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar13[1] = *(undefined8 *)(lVar10 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar10;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      local_1b8 = lVar12;
      FUN_1447568fc(lVar12,iVar4);
      lVar12 = local_1b8;
    }
    puVar1 = local_1b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar15[7] = puVar13;
    lVar10 = *(longlong *)(local_1c0 + 0x2d8);
    uVar2 = *(undefined1 *)(lVar10 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      local_1b8 = lVar12;
      FUN_140023dd8(local_1b0,0x50);
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 9;
      lVar12 = local_1b8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    puVar13[1] = *(undefined8 *)(lVar10 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar10;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(lVar12,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar15[8] = puVar13;
    puVar15[4] = *(undefined8 *)(local_1c0 + 0x1c8);
    FUN_144a2c7c2(&local_158,local_b8);
    ppuVar14 = &local_158;
    puVar11 = puVar15 + 10;
    for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *ppuVar14;
      ppuVar14 = ppuVar14 + 1;
      puVar11 = puVar11 + 1;
    }
    local_1c0 = DAT_14c9c0d50;
    local_1b8 = DAT_14c9c0d98;
    local_190 = DAT_14ca94df8;
    uVar3 = *(undefined4 *)(lVar5 + 0x3090);
    local_1a4 = *(undefined4 *)(lVar5 + 0x1dd4);
    local_1a8 = *(undefined4 *)(lVar5 + 0x3094);
    local_1c1 = (&DAT_00001de6)[lVar5];
    uVar16 = local_b8._0_8_;
    uVar17 = local_b8._8_8_;
    uVar6 = local_a8._0_8_;
    FUN_14156b92a();
    FUN_140069376(param_1);
    puVar1 = local_1b0;
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 0x50;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_1b0,0x288);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 0x50;
    }
    *local_1b0 = (ulonglong)puVar11;
    local_158 = local_1a0;
    local_150 = DAT_14ca27fc8;
    if (DAT_14ca27fc8 != 0) {
      LOCK();
      *(int *)(DAT_14ca27fc8 + 8) = *(int *)(DAT_14ca27fc8 + 8) + 1;
      UNLOCK();
    }
    local_148 = &DAT_14ca27f80;
    local_1d8 = 2;
    FUN_140068f1a(puVar15,&local_163,&local_158,1);
    *puVar15 = &PTR_FUN_14a2ba6c0;
    *(undefined4 *)(puVar15 + 0x37) = uVar3;
    *(undefined4 *)((longlong)puVar15 + 0x1bc) = local_1a4;
    *(undefined4 *)(puVar15 + 0x38) = local_1a8;
    *(undefined1 *)((longlong)puVar15 + 0x1c4) = local_1c1;
    *(undefined2 *)((longlong)puVar15 + 0x1c5) = local_15b;
    *(undefined1 *)((longlong)puVar15 + 0x1c7) = local_159;
    puVar15[0x39] = uVar16;
    puVar15[0x3a] = uVar17;
    puVar15[0x3b] = uVar6;
    puVar15[0x3c] = uVar16;
    puVar15[0x3d] = uVar17;
    puVar15[0x3e] = uVar6;
    puVar15[0x3f] = local_180;
    puVar15[0x40] = local_188;
    puVar15[0x41] = local_170;
    puVar15[0x42] = local_178;
    puVar15[0x43] = local_1c0;
    puVar15[0x44] = local_1b8;
    puVar15[0x45] = local_190;
    *(undefined1 *)(puVar15 + 0x46) = 0;
    *(uint *)((longlong)puVar15 + 0x234) = CONCAT31(uStack_15e,local_162._3_1_);
    *(undefined4 *)((longlong)puVar15 + 0x231) = local_162;
    puVar15[0x47] = local_198;
    puVar15[0x48] = local_180;
    puVar15[0x49] = local_188;
    puVar15[0x4a] = local_170;
    puVar15[0x4b] = local_178;
    puVar15[0x4c] = plVar8;
    puVar15[0x4d] = plVar9;
    puVar15[0x4e] = local_1a0;
    *(undefined1 *)(puVar15 + 0x4f) = 0;
    iVar4 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eb212f FUN_142eb212f body=69 status=ok
// SIG undefined FUN_142eb212f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb212f(void)

{
  _DAT_14ca255c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb2171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca255c8,1);
  return;
}



// FUNCTION 142eb2174 FUN_142eb2174 body=69 status=ok
// SIG undefined FUN_142eb2174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb2174(void)

{
  _DAT_14ca255d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb21b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca255e0,1);
  return;
}



// FUNCTION 142eb21b9 FUN_142eb21b9 body=69 status=ok
// SIG undefined FUN_142eb21b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb21b9(void)

{
  _DAT_14ca255f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb21fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca255f8,1);
  return;
}



// FUNCTION 142eb220a FUN_142eb220a body=2792 status=ok
// SIG undefined FUN_142eb220a(void)

ulonglong * FUN_142eb220a(float *param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  longlong *local_198;
  ulonglong local_190;
  float local_184;
  float local_180;
  float local_17c;
  ulonglong *local_178;
  longlong local_170;
  undefined1 local_168 [16];
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined4 local_f6;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  fVar21 = *(float *)(DAT_14ca255d0 + 4) / 100.0;
  if (100.0 <= fVar21) {
    fVar21 = 100.0;
  }
  if (fVar21 <= 0.25) {
    fVar21 = 0.25;
  }
  fVar16 = *(float *)(*(longlong *)(param_4 + 8) + 0x110);
  fVar15 = (float)(*(int *)(param_4 + 0x4e4) - *(int *)(param_4 + 0x4dc)) * fVar16 *
           *(float *)(param_4 + 0x45c);
  fVar16 = (float)(*(int *)(param_4 + 0x4e0) - *(int *)(param_4 + 0x4d8)) * fVar16 *
           *(float *)(param_4 + 0x45c);
  fVar18 = (float)-((int)ROUND(-0.5 - (fVar15 + fVar15)) >> 1);
  fVar20 = (float)-((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
  fVar15 = fVar21 * fVar18;
  fVar21 = fVar21 * fVar20;
  local_178 = param_2;
  local_170 = param_4;
  FUN_144a132c8(param_4 + 0x500,&local_128);
  fVar16 = tanf((float)(double)CONCAT44(uStack_11c,uStack_120));
  local_190 = CONCAT44(local_190._4_4_,fVar16);
  local_17c = tanf((float)(double)local_128);
  fVar16 = *param_1;
  fVar22 = (1.0 / SQRT(local_17c * local_17c + 1.0)) * local_17c;
  fVar17 = 1.0 - fVar22 * fVar22;
  if (fVar17 < 0.0) {
    fVar17 = sqrtf(fVar17);
  }
  else {
    fVar17 = SQRT(fVar17);
  }
  puVar4 = local_178;
  fVar15 = fVar15 + fVar15;
  local_180 = local_17c / (fVar22 * ((fVar16 + 1.0) / (fVar17 + fVar16)));
  fVar18 = 10.0 / fVar18;
  fVar20 = 10.0 / fVar20;
  fVar23 = 1.0 / local_180;
  fVar24 = fVar20 * local_17c * fVar23;
  local_184 = *param_1;
  fVar19 = local_184 + 1.0;
  fVar16 = local_184 * fVar24;
  fVar22 = fVar19 * fVar19;
  fVar25 = (fVar24 * fVar24) / fVar22 + 1.0;
  fVar17 = (-fVar24 * fVar16 + -fVar24 * fVar16) / fVar22;
  fVar22 = fVar17 * fVar17 + fVar25 * -4.0 * ((fVar16 * fVar16) / fVar22 + -1.0);
  local_198 = (longlong *)CONCAT44(local_198._4_4_,fVar18);
  fVar18 = fVar18 * (float)local_190;
  fVar16 = param_1[1];
  if (fVar22 < 0.0) {
    local_168 = ZEXT416((uint)fVar15);
    fVar22 = sqrtf(fVar22);
    fVar15 = (float)local_168._0_4_;
  }
  else {
    fVar22 = SQRT(fVar22);
  }
  fVar22 = (-fVar17 - fVar22) / (fVar25 + fVar25);
  fVar17 = 1.0 - fVar22 * fVar22;
  if (fVar17 < 0.0) {
    fVar17 = sqrtf(fVar17);
  }
  else {
    fVar17 = SQRT(fVar17);
  }
  fVar25 = local_17c;
  fVar17 = (float)(~-(uint)(fVar24 < 0.0) & (uint)fVar17 | (uint)-fVar17 & -(uint)(fVar24 < 0.0)) /
           -fVar22;
  fVar16 = local_198._0_4_ /
           ((((fVar18 * fVar23) /
             ((fVar16 * (-1.0 / fVar22 + -1.0) + 1.0) * (fVar19 / (local_184 - fVar22)))) /
            (1.0 / SQRT(fVar17 * fVar17 + 1.0))) / (float)local_190);
  fVar20 = fVar20 / (fVar17 / local_17c);
  if (fVar20 <= fVar16) {
    fVar20 = fVar16;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  *(float *)(puVar4 + 2) = fVar20;
  plVar1 = (longlong *)(param_3 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 10;
  if (*(undefined8 **)(param_3 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x60);
    puVar8 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 10;
  }
  uVar12 = (int)ROUND(fVar15 + 0.5) >> 1;
  uVar11 = (int)ROUND(fVar21 + fVar21 + 0.5) >> 1;
  *(undefined8 **)(param_3 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14a2ba6d8;
  puVar8[8] = 0;
  puVar8[9] = 0;
  iVar5 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar5 + 1U;
  local_198 = plVar1;
  if (*(uint *)(param_3 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_3 + 0x98,iVar5);
  }
  plVar1 = local_198;
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar5 * 8) = puVar8;
  *(float *)(puVar8 + 2) = fVar25;
  *(float *)((longlong)puVar8 + 0x14) = (float)local_190;
  *(float *)(puVar8 + 3) = 1.0 / fVar25;
  *(float *)((longlong)puVar8 + 0x1c) = 1.0 / (float)local_190;
  fVar21 = DAT_14ca4ca80 + 0.5;
  fVar20 = DAT_14ca4ca7c + 0.5;
  fVar16 = 1.0 / (float)(int)(uVar12 - (int)((ulonglong)DAT_14c967818 >> 0x20));
  fVar17 = 1.0 / (float)(int)(uVar11 - (int)DAT_14c967818);
  fVar15 = fVar16 * DAT_14ca4ca78;
  *(float *)(puVar8 + 4) = fVar17 * DAT_14ca4ca74;
  *(float *)((longlong)puVar8 + 0x24) = fVar15;
  *(float *)(puVar8 + 5) = fVar20 * fVar17;
  *(float *)((longlong)puVar8 + 0x2c) = fVar21 * fVar16;
  *(float *)(puVar8 + 6) = *param_1;
  *(float *)((longlong)puVar8 + 0x34) = param_1[1];
  *(float *)(puVar8 + 7) = local_180;
  local_138 = DAT_14ca85098;
  local_148 = DAT_14ca85088;
  uStack_144 = DAT_14ca8508c;
  uStack_140 = DAT_14ca85090;
  uStack_13c = DAT_14ca85094;
  uVar9 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_f6 = 0xff001100;
  local_128 = &DAT_00020008;
  local_fc = 0x10001;
  local_f8 = 0x101;
  uStack_120 = DAT_14ca85088;
  uStack_11c = DAT_14ca8508c;
  uStack_118 = DAT_14ca85090;
  uStack_114 = DAT_14ca85094;
  local_110 = DAT_14ca85098;
  local_104 = DAT_14ca84e40;
  if ((int)uVar11 < (int)DAT_14ca84e40) {
    local_104 = uVar11;
  }
  if ((int)local_104 < 2) {
    local_104 = 1;
  }
  local_108 = 0;
  local_100 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    local_100 = uVar12;
  }
  if ((int)local_100 < 2) {
    local_100 = 1;
  }
  uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar14 + 0x120;
  local_190 = (ulonglong)uVar12;
  local_10c = uVar9;
  if (*(ulonglong *)(param_3 + 0x78) < uVar6) {
    FUN_140023dd8(local_198,0x128);
    uVar14 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar6 = uVar14 + 0x120;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar14,L"Panini.DistortingDisplacement",&local_128,0);
  iVar5 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_3 + 0x178,iVar5);
  }
  plVar1 = local_198;
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar5 * 8) = uVar14;
  *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  local_f6 = 0xff001100;
  local_128 = &DAT_00020008;
  local_fc = 0x10001;
  local_f8 = 0x101;
  uStack_120 = local_148;
  uStack_11c = uStack_144;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  local_110 = local_138;
  local_108 = 0;
  local_104 = DAT_14ca84e40;
  if ((int)uVar11 < (int)DAT_14ca84e40) {
    local_104 = uVar11;
  }
  if ((int)local_104 < 2) {
    local_104 = 1;
  }
  local_100 = DAT_14ca84e40;
  if ((int)(uint)local_190 < (int)DAT_14ca84e40) {
    local_100 = (uint)local_190;
  }
  *puVar4 = uVar14;
  if ((int)local_100 < 2) {
    local_100 = 1;
  }
  uVar10 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar10 + 0x120;
  local_10c = uVar9;
  if (*(ulonglong *)(param_3 + 0x78) < uVar6) {
    FUN_140023dd8(local_198,0x128);
    uVar10 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar6 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar10,L"Panini.UndistortingDisplacement",&local_128,0);
  iVar5 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_3 + 0x178,iVar5);
  }
  plVar1 = local_198;
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar5 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  puVar4[1] = uVar10;
  uVar2 = *(undefined1 *)(uVar14 + 0x94);
  puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar13 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar7) {
    FUN_140023dd8(local_198,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar13 + 9;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar7;
  puVar13[1] = *(undefined8 *)(uVar14 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar13 + 6) = uVar2;
  *(undefined1 *)(puVar13 + 7) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
  puVar13[8] = uVar14;
  iVar5 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_3 + 0x198,iVar5);
  }
  plVar1 = local_198;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar5 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar8[8] = puVar13;
  uVar2 = *(undefined1 *)(uVar10 + 0x94);
  puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar13 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar7) {
    FUN_140023dd8(local_198,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar13 + 9;
  }
  puVar4 = local_178;
  *(undefined8 **)(param_3 + 0x70) = puVar7;
  puVar13[1] = *(undefined8 *)(uVar10 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar13 + 6) = uVar2;
  *(undefined1 *)(puVar13 + 7) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
  puVar13[8] = uVar10;
  iVar5 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_3 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar5 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar8[9] = puVar13;
  uVar3 = *(undefined8 *)(local_170 + 0x13818);
  FUN_145f19f00();
  FUN_1448e935e(uVar3,&local_128,&DAT_14ca25670,0);
  FUN_145f19f00();
  iVar5 = (int)local_190 + 7;
  local_150 = (int)local_190 + 0xe;
  if (-1 < iVar5) {
    local_150 = iVar5;
  }
  local_150 = local_150 >> 3;
  local_154 = uVar11 + 0xe;
  if (-1 < (int)(uVar11 + 7)) {
    local_154 = uVar11 + 7;
  }
  local_154 = local_154 >> 3;
  local_1a8 = &local_154;
  local_14c = 2;
  FUN_14728971e(param_3,&local_148,&local_128,puVar8 + 2);
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eb2d0e FUN_142eb2d0e body=69 status=ok
// SIG undefined FUN_142eb2d0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb2d0e(void)

{
  _DAT_14ca25738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25740,1);
  return;
}



// FUNCTION 142eb2d63 FUN_142eb2d63 body=1700 status=ok
// SIG undefined FUN_142eb2d63(void)

void FUN_142eb2d63(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined1 local_179;
  longlong local_178;
  longlong local_170;
  ulonglong *local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  undefined1 local_139;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *puStack_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar13 = *param_4;
  local_158 = param_3;
  local_148 = param_1;
  if (lVar13 != 0) {
    local_170 = param_4[1];
    local_178 = param_4[2];
    if (local_178 != local_170) {
      uStack_f0._0_1_ = (undefined1)param_4[3];
      goto LAB_142eb2e3c;
    }
  }
  local_138 = param_4[4];
  local_130 = param_4[5];
  local_128 = param_4[6];
  local_188 = L"FXAA";
  FUN_143017cc0(&local_108,param_2,&local_138,(&DAT_00001de6)[param_3] * '\x02');
  local_170 = CONCAT44(uStack_fc,uStack_100);
  local_178 = CONCAT44(uStack_f4,uStack_f8);
  lVar13 = local_108;
LAB_142eb2e3c:
  iVar12 = *(int *)(lVar13 + 0x84);
  iVar4 = *(int *)(lVar13 + 0x88);
  local_160 = DAT_14c9c0de0;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar16 + 0x3c;
  local_179 = (undefined1)uStack_f0;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar16 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar11;
  *puVar16 = &PTR_FUN_14a2ba6f8;
  puVar16[0x14] = 0;
  *(undefined4 *)(puVar16 + 0x15) = 0;
  *(undefined1 (*) [16])(puVar16 + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)puVar16 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)puVar16 + 0xb4) = 0;
  *(undefined4 *)((longlong)puVar16 + 0xbc) = 0x3f800000;
  lVar10 = 0xe0;
  do {
    *(undefined1 (*) [16])((longlong)puVar16 + lVar10) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar16 + lVar10 + 0x10) = 0xffff0000;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x1a0);
  plVar2 = puVar16 + 2;
  *(undefined4 *)((longlong)puVar16 + 0x1b4) = 0;
  puVar16[0x34] = 0;
  puVar16[0x35] = 0;
  *(undefined2 *)(puVar16 + 0x36) = 0;
  *(undefined4 *)(puVar16 + 0x37) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x39) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x1cc) = 0;
  puVar16[0x3a] = 0;
  iVar5 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
  local_168 = puVar1;
  if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar5);
  }
  fVar18 = 1.0 / (float)iVar12;
  fVar19 = 1.0 / (float)iVar4;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar16;
  puVar16[0x1c] = lVar13;
  puVar16[0x1d] = 0;
  *(undefined1 *)(puVar16 + 0x1e) = local_179;
  *(undefined1 *)((longlong)puVar16 + 0xf1) = 0;
  *(undefined2 *)((longlong)puVar16 + 0xf2) = 0xffff;
  lVar10 = param_4[4];
  local_118 = param_4[5];
  puStack_110 = (undefined *)param_4[6];
  local_120 = *(longlong **)(lVar10 + 0x84);
  local_150 = lVar13;
  FUN_144a2c7c2(&local_108);
  plVar14 = &local_108;
  plVar15 = plVar2;
  for (lVar13 = 0xe; lVar13 != 0; lVar13 = lVar13 + -1) {
    *plVar15 = *plVar14;
    plVar14 = plVar14 + 1;
    plVar15 = plVar15 + 1;
  }
  puVar16[0x10] = lVar10;
  puVar16[0x11] = local_160;
  local_108 = *(longlong *)(param_4[4] + 0x84);
  uStack_100 = (undefined4)param_4[5];
  uStack_fc = (undefined4)((ulonglong)param_4[5] >> 0x20);
  uStack_f8 = (undefined4)param_4[6];
  uStack_f4 = (undefined4)((ulonglong)param_4[6] >> 0x20);
  local_188 = (wchar_t *)CONCAT44(local_188._4_4_,3);
  FUN_14473d930(&local_120,&local_108,&uStack_100,1);
  fVar17 = 1.0 / (float)((int)local_178 - (int)local_170);
  iVar12 = (int)((ulonglong)local_170 >> 0x20);
  fVar20 = 1.0 / (float)((int)((ulonglong)local_178 >> 0x20) - iVar12);
  *(float *)(puVar16 + 0x12) = fVar17 * (float)local_120;
  *(float *)((longlong)puVar16 + 0x94) = fVar20 * local_120._4_4_;
  *(float *)(puVar16 + 0x13) = (float)local_118 - (float)(int)local_170 * fVar17 * (float)local_120;
  *(float *)((longlong)puVar16 + 0x9c) = local_118._4_4_ - (float)iVar12 * fVar20 * local_120._4_4_;
  *(float *)(puVar16 + 0x14) = fVar18 * -0.5;
  *(float *)((longlong)puVar16 + 0xa4) = fVar19 * -0.5;
  *(float *)(puVar16 + 0x15) = fVar18 * 0.5;
  *(float *)((longlong)puVar16 + 0xac) = fVar19 * 0.5;
  *(float *)(puVar16 + 0x16) = fVar18 * -2.0;
  *(float *)((longlong)puVar16 + 0xb4) = fVar19 * -2.0;
  *(float *)(puVar16 + 0x17) = fVar18 + fVar18;
  *(float *)((longlong)puVar16 + 0xbc) = fVar19 + fVar19;
  puVar16[0x18] = 0x3e29fbe73f400000;
  puVar16[0x19] = 0x410000003daa9931;
  puVar16[0x1a] = 0x3d4ccccd3e000000;
  bVar9 = (**(code **)(*DAT_14ca27dc8 + 0xa8))();
  lVar10 = local_158;
  bVar3 = *(byte *)((longlong)param_4 + 0x3c);
  uVar6 = *(undefined8 *)(local_158 + 0x13818);
  lVar13 = param_4[7];
  FUN_141592704();
  FUN_1448e935e(uVar6,&local_108,&DAT_14ca257b8,
                (uint)bVar9 + (((uint)bVar3 + (uint)bVar3 * 2) * 2 + (int)lVar13) * 2);
  FUN_141592704();
  lVar13 = local_108;
  uVar7 = CONCAT44(uStack_fc,uStack_100);
  uVar6 = *(undefined8 *)(lVar10 + 0x13818);
  FUN_141592826();
  local_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  FUN_1448f70da(lVar13,&DAT_14ca28090,plVar2,&local_108);
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  FUN_141592826();
  FUN_140069376(param_2);
  puVar1 = local_168;
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar16 + 0x41;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_168,0x210);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 0x41;
  }
  *local_168 = (ulonglong)puVar11;
  local_118 = DAT_14ca280d8;
  if (DAT_14ca280d8 != 0) {
    LOCK();
    *(int *)(DAT_14ca280d8 + 8) = *(int *)(DAT_14ca280d8 + 8) + 1;
    UNLOCK();
  }
  puStack_110 = &DAT_14ca28090;
  local_188 = (wchar_t *)CONCAT71(local_188._1_7_,2);
  local_120 = plVar2;
  FUN_140068f1a(puVar16,&local_139,&local_120,1);
  lVar8 = local_170;
  lVar10 = local_178;
  *puVar16 = &PTR_FUN_14a2ba700;
  puVar16[0x37] = plVar2;
  puVar16[0x38] = uVar6;
  puVar16[0x39] = lVar13;
  puVar16[0x3a] = uVar7;
  puVar16[0x3b] = local_170;
  puVar16[0x3c] = local_178;
  puVar16[0x3d] = local_108;
  puVar16[0x3e] = CONCAT44(uStack_fc,uStack_100);
  *(ulonglong *)((longlong)puVar16 + 500) = CONCAT44(uStack_f8,uStack_fc);
  *(ulonglong *)((longlong)puVar16 + 0x1fc) = CONCAT44(uStack_f0,uStack_f4);
  iVar12 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar12 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar12 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar12 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar16);
  *local_148 = local_150;
  local_148[1] = lVar8;
  local_148[2] = lVar10;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eb3408 FUN_142eb3408 body=69 status=ok
// SIG undefined FUN_142eb3408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb3408(void)

{
  _DAT_14ca25878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25880,1);
  return;
}



// FUNCTION 142eb344d FUN_142eb344d body=69 status=ok
// SIG undefined FUN_142eb344d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb344d(void)

{
  _DAT_14ca25890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb348f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25898,1);
  return;
}



// FUNCTION 142eb3492 FUN_142eb3492 body=69 status=ok
// SIG undefined FUN_142eb3492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb3492(void)

{
  _DAT_14ca258a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb34d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca258b0,1);
  return;
}



// FUNCTION 142eb34d7 FUN_142eb34d7 body=69 status=ok
// SIG undefined FUN_142eb34d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb34d7(void)

{
  _DAT_14ca258c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb3519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca258c8,1);
  return;
}



// FUNCTION 142eb351c FUN_142eb351c body=69 status=ok
// SIG undefined FUN_142eb351c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb351c(void)

{
  _DAT_14ca258d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb355e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca258e0,1);
  return;
}



// FUNCTION 142eb3561 FUN_142eb3561 body=69 status=ok
// SIG undefined FUN_142eb3561(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb3561(void)

{
  _DAT_14ca258f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb35a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca258f8,1);
  return;
}



// FUNCTION 142eb35a6 FUN_142eb35a6 body=69 status=ok
// SIG undefined FUN_142eb35a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb35a6(void)

{
  _DAT_14ca25908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb35e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca25910,1);
  return;
}



// FUNCTION 142eb3640 FUN_142eb3640 body=10262 status=ok
// SIG undefined FUN_142eb3640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb3640(ulonglong *param_1,longlong param_2,char *param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  char *pcVar15;
  byte bVar16;
  char cVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined7 uVar22;
  longlong *plVar21;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  uint uVar31;
  char *pcVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_2f8 [32];
  wchar_t *local_2d8;
  wchar_t *local_2d0;
  undefined8 *puStack_2c8;
  char *local_2c0;
  code *local_2b8;
  code *local_2b0;
  undefined8 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined4 local_288;
  undefined8 local_280;
  ulonglong *local_270;
  char *local_268;
  ulonglong local_260;
  undefined8 *local_258;
  ulonglong *local_250;
  longlong *local_248;
  undefined8 *local_240;
  ulonglong local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  longlong local_220;
  undefined8 *local_218;
  longlong local_210;
  undefined8 *local_208;
  char *local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  char *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1bd;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  ulonglong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  uVar20 = local_f8;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (*(int *)(DAT_14ca258a0 + 4) != 0) {
    if (*(int *)(DAT_14ca258a0 + 4) == 1) {
      iVar28 = *(int *)(DAT_14ca25918 + 4);
      iVar26 = 3;
      if (iVar28 < 3) {
        iVar26 = iVar28;
      }
      iVar23 = 1;
      if (1 < iVar26) {
        iVar23 = iVar26;
      }
      local_270 = (ulonglong *)CONCAT44(local_270._4_4_,iVar23);
      if (iVar28 < 1) {
        uVar35 = 0;
      }
      else {
        bVar16 = 0x25;
        if (iVar28 < 2) {
          bVar16 = *(byte *)(param_4 + 0x93);
        }
        iVar26 = (int)*(undefined8 *)(param_4 + 0x84);
        iVar23 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x84) >> 0x20);
        uVar31 = (iVar23 - (iVar23 + 1 >> 0x1f)) + 1 >> 1;
        uVar24 = (iVar26 - (iVar26 + 1 >> 0x1f)) + 1 >> 1;
        if ((int)uVar24 < 2) {
          uVar24 = 1;
        }
        if ((int)uVar31 < 2) {
          uVar31 = 1;
        }
        uStack_120 = (undefined8 *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
        uStack_118 = (undefined8 *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
        local_128 = (undefined8 *)&DAT_00000009;
        local_f8._6_2_ = SUB82(uVar20,6);
        local_f8._0_6_ = CONCAT24(0xff00,(uint)bVar16 << 0x18);
        if ((int)DAT_14ca84e40 <= (int)uVar24) {
          uVar24 = DAT_14ca84e40;
        }
        local_f8 = CONCAT62(local_f8._2_6_,0x101);
        if ((int)uVar24 < 2) {
          uVar24 = 1;
        }
        if ((int)DAT_14ca84e40 <= (int)uVar31) {
          uVar31 = DAT_14ca84e40;
        }
        local_110 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if ((int)uVar31 < 2) {
          uVar31 = 1;
        }
        local_108 = (ulonglong)uVar24 << 0x20;
        local_100 = CONCAT44(0x10001,uVar31);
        uVar35 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar34 = uVar35 + 0x120;
        if (*(ulonglong *)(param_2 + 0x78) < uVar34) {
          FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
          uVar35 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar34 = uVar35 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar34;
        FUN_1456bbb8c(uVar35,L"HalfResolutionScreenSpaceAO",&local_128);
        iVar26 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar26 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar26 + 1U) {
          FUN_14472c0f6(param_2 + 0x178,iVar26);
        }
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar26 * 8) = uVar35;
        *(int *)(uVar35 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      }
      if (*(char *)(*(longlong *)(param_1[0x7d] + 8) + 0xd0) == '\x01') {
        lVar5 = *(longlong *)(*(longlong *)(param_1[0x7d] + 8) + 0x348);
        lVar19 = 0;
        if (*(char *)(lVar5 + 8) != '\0') {
          lVar19 = lVar5;
        }
      }
      else {
        lVar19 = 0;
      }
      puVar18 = (undefined8 *)FUN_1472e1757(param_2,lVar19,2);
      if ((longlong)(int)param_1[0x7e] != 0) {
        local_270 = (ulonglong *)CONCAT44(local_270._4_4_,(int)local_270 + -1);
        uVar34 = param_1[0x7d];
        uVar30 = (longlong)(int)param_1[0x7e] * 0x13c10 + uVar34;
        local_250 = (ulonglong *)(param_2 + 0x70);
        local_248 = (longlong *)(param_2 + 0x98);
        local_218 = (undefined8 *)(param_2 + 0x168);
        local_220 = param_4;
        local_200 = param_3;
        do {
          uStack_118 = *(undefined8 **)(uVar34 + 0x30f8);
          local_110 = *(ulonglong *)(uVar34 + 0x3100);
          uStack_120 = *(undefined8 **)(param_3 + 0x84);
          local_108 = *(longlong *)(uVar34 + 0x136f0);
          if (local_108 == 0) {
            local_f8 = 0;
          }
          else {
            local_f8 = *(undefined8 *)(local_108 + 0x84);
          }
          local_e0 = uStack_120;
          if (param_3 == (char *)0x0) {
            local_e0 = (undefined8 *)0x0;
          }
          local_100 = 0;
          local_e8 = 0;
          local_128 = puVar18;
          local_f0 = param_3;
          if (uVar35 == 0) {
            local_180 = 0;
            local_2d0 = (wchar_t *)&local_198;
            local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1 < iVar28);
            local_198 = param_4;
            local_190 = uStack_118;
            local_188 = local_110;
            FUN_142ed80fb(param_2,uVar34,&local_128);
          }
          else {
            local_160 = 0;
            local_2d0 = (wchar_t *)&local_178;
            local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1 < iVar28);
            local_178 = uVar35;
            local_170 = uStack_118;
            local_168 = local_110;
            FUN_142ed80fb(param_2,uVar34,&local_128,
                          CONCAT71((int7)((ulonglong)local_f8 >> 8),0 < iVar28));
            puVar1 = local_250;
            local_268 = local_f0;
            if ((*(int *)(DAT_14ca25900 + 4) == 0) || (DAT_14ca84e1e != '\x01')) {
LAB_142eb511f:
              local_228 = uStack_120;
              local_230 = uStack_118;
              local_238 = local_110;
              local_260 = local_260 & 0xffffffff00000000;
              fVar39 = 0.0;
              local_240 = (undefined8 *)((ulonglong)local_240 & 0xffffffff00000000);
            }
            else {
              if (local_f0 == (char *)0x0) {
                local_268 = (char *)0x0;
                goto LAB_142eb511f;
              }
              if ((int)local_e0 == (int)local_e8) {
                if (local_e0._4_4_ == local_e8._4_4_) goto LAB_142eb511f;
              }
              local_228 = uStack_120;
              local_230 = uStack_118;
              local_238 = local_110;
              if (local_f0[0x91] != '\x01') goto LAB_142eb511f;
              fVar39 = *(float *)(uVar34 + 0x2b00);
              dVar6 = *(double *)(uVar34 + 0x840);
              dVar7 = *(double *)(uVar34 + 0x848);
              dVar8 = *(double *)(uVar34 + 0x860);
              dVar9 = *(double *)(uVar34 + 0x868);
              dVar10 = *(double *)(uVar34 + 0x880);
              dVar11 = *(double *)(uVar34 + 0x888);
              dVar12 = *(double *)(uVar34 + 0x8a0);
              dVar13 = *(double *)(uVar34 + 0x8a8);
              puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar29 = puVar27 + 0x22;
              if (*(undefined8 **)(param_2 + 0x78) < puVar29) {
                FUN_140023dd8(local_250,0x120);
                puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                puVar29 = puVar27 + 0x22;
              }
              fVar38 = (float)(dVar12 + dVar8 * 0.0 + dVar6 * 0.0 + (double)fVar39 * dVar10) /
                       (float)(dVar13 + dVar9 * 0.0 + dVar7 * 0.0 + (double)fVar39 * dVar11);
              fVar39 = 1.0;
              if (fVar38 <= 1.0) {
                fVar39 = fVar38;
              }
              *local_250 = (ulonglong)puVar29;
              *puVar27 = &PTR_FUN_14a1fbd30;
              local_258 = puVar27 + 2;
              lVar19 = 0x22;
              do {
                puVar29 = (undefined8 *)((longlong)puVar27 + lVar19 + -0x12);
                *puVar29 = 0;
                puVar29[1] = 0;
                *(undefined4 *)((longlong)puVar27 + lVar19 + -2) = 0xffff0000;
                lVar19 = lVar19 + 0x18;
              } while (lVar19 != 0xe2);
              *(undefined4 *)((longlong)puVar27 + 0xe4) = 0;
              puVar27[0x1a] = 0;
              puVar27[0x1b] = 0;
              *(undefined2 *)(puVar27 + 0x1c) = 0;
              *(undefined4 *)(puVar27 + 0x1d) = 0xffffffff;
              *(undefined4 *)((longlong)puVar27 + 0xec) = 0xffffffff;
              *(undefined4 *)(puVar27 + 0x1e) = 0xffffffff;
              *(undefined4 *)((longlong)puVar27 + 0xf4) = 0xffffffff;
              *(undefined4 *)(puVar27 + 0x1f) = 0;
              *(undefined2 *)((longlong)puVar27 + 0xfc) = 0;
              puVar27[0x20] = 0;
              iVar26 = *(int *)(param_2 + 0xa0);
              *(uint *)(param_2 + 0xa0) = iVar26 + 1U;
              if (*(uint *)(param_2 + 0xa4) < iVar26 + 1U) {
                FUN_1448cfae8(local_248,iVar26);
              }
              *(undefined8 **)(*local_248 + (longlong)iVar26 * 8) = puVar27;
              puVar27[2] = local_220;
              puVar27[3] = 0;
              *(undefined4 *)(puVar27 + 4) = 0xffff0000;
              puVar27[0x1a] = local_268;
              puVar27[0x1b] = 0;
              *(undefined2 *)(puVar27 + 0x1c) = 0x101;
              *(undefined4 *)((longlong)puVar27 + 0xe4) = 0x21;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c9c1080) &&
                 (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
                FUN_145fddb1e(&local_158);
                local_290 = (undefined1 *)((ulonglong)local_290 & 0xffffffffffffff00);
                local_2a0 = (undefined1 *)((ulonglong)local_2a0 & 0xffffffffffffff00);
                local_2c0 = "Unknown";
                local_2d0 = (wchar_t *)0x0;
                puStack_2c8 = (undefined8 *)0x0;
                local_2d8 = L"FRenderTargetParameters";
                local_298 = (undefined1 *)0x0;
                local_2b0 = (code *)CONCAT44(local_2b0._4_4_,0x100);
                local_2b8 = (code *)CONCAT44(local_2b8._4_4_,0x7af);
                local_2a8 = &local_158;
                FUN_140b49562(&DAT_14c9c1000,0,1);
                if (local_158 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                atexit((_func_5014 *)&LAB_142ed996f);
                _Init_thread_footer(&DAT_14c9c1080);
              }
              FUN_140069376(param_2);
              puVar1 = local_250;
              puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar29 = puVar27 + 0x3b;
              if (*(undefined8 **)(param_2 + 0x78) < puVar29) {
                FUN_140023dd8(local_250,0x1e0);
                puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar29 = puVar27 + 0x3b;
              }
              *local_250 = (ulonglong)puVar29;
              local_158 = local_258;
              uStack_150 = DAT_14c9c1048;
              if (DAT_14c9c1048 != 0) {
                LOCK();
                *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
                UNLOCK();
              }
              local_148 = &DAT_14c9c1000;
              local_2d8 = (wchar_t *)((ulonglong)local_2d8 & 0xffffffffffffff00);
              FUN_140068f1a(puVar27,&local_138,&local_158,1);
              *puVar27 = &PTR_FUN_14a2b8900;
              puVar27[0x37] = local_228;
              puVar27[0x38] = local_230;
              puVar27[0x39] = local_238;
              *(float *)(puVar27 + 0x3a) = fVar39;
              iVar26 = *(int *)(param_2 + 0x170);
              *(uint *)(param_2 + 0x170) = iVar26 + 1U;
              if (*(uint *)(param_2 + 0x174) < iVar26 + 1U) {
                FUN_14470e57a(local_218,iVar26);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar26 * 8) = puVar27;
              *(int *)((longlong)puVar27 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
              uVar20 = FUN_140069100(param_2,puVar27);
              uVar22 = (undefined7)((ulonglong)uVar20 >> 8);
              local_260 = CONCAT44(local_260._4_4_,(int)CONCAT71(uVar22,1));
              local_240 = (undefined8 *)CONCAT44(local_240._4_4_,(int)CONCAT71(uVar22,1));
            }
            puVar1 = local_250;
            puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar29 = puVar27 + 0x28;
            if (*(undefined8 **)(param_2 + 0x78) < puVar29) {
              FUN_140023dd8(local_250,0x150);
              puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar29 = puVar27 + 0x28;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar29;
            *puVar27 = &PTR_FUN_14a2b8960;
            local_258 = puVar27 + 2;
            FUN_14728e86a();
            iVar26 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar26 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar26 + 1U) {
              FUN_1448cfae8(local_248,iVar26);
            }
            puVar29 = local_128;
            *(undefined8 **)(*local_248 + (longlong)iVar26 * 8) = puVar27;
            puVar27[8] = local_220;
            puVar27[9] = 0;
            *(char *)(puVar27 + 10) = (char)local_240;
            *(undefined1 *)((longlong)puVar27 + 0x51) = 0;
            *(undefined2 *)((longlong)puVar27 + 0x52) = 0xffff;
            if ((char)local_260 != '\0') {
              puVar27[0x20] = local_268;
              puVar27[0x21] = 0;
              *(undefined2 *)(puVar27 + 0x22) = 0x101;
              *(undefined4 *)((longlong)puVar27 + 0x114) = 0x21;
            }
            puVar27[4] = *(undefined8 *)(uVar34 + 0x18);
            *(undefined1 *)(puVar27 + 5) = 1;
            lVar19 = FUN_144a890ae();
            cVar17 = *(char *)(lVar19 + 0x41);
            if (cVar17 == '\x03') {
              cVar17 = '\x02';
            }
            puVar27[2] = puVar29;
            *(char *)(puVar27 + 3) = cVar17;
            puVar27[6] = uVar35;
            puVar27[7] = DAT_14c9c0de0;
            uVar20 = *(undefined8 *)(uVar34 + 0x13818);
            FUN_145e6b0c0();
            FUN_1448e935e(uVar20,&local_158,&DAT_14ca260a0,(ulonglong)local_270 & 0xffffffff);
            FUN_145e6b0c0();
            local_240 = local_158;
            local_268 = (char *)uStack_150;
            uVar20 = *(undefined8 *)(uVar34 + 0x13818);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_290 = &LAB_14712ac08;
              local_298 = &LAB_14712ac0c;
              local_2a0 = &LAB_1472e3912;
              local_2a8 = (undefined8 *)&LAB_1472e3916;
              local_2b0 = FUN_1472e391a;
              local_2b8 = FUN_1472e3942;
              local_2d0 = L"ScreenPassVS";
              local_2d8 = L"/Engine/Private/ScreenPass.usf";
              local_280 = 0;
              local_288 = 0xe0;
              local_2c0 = (char *)CONCAT44(local_2c0._4_4_,1);
              puStack_2c8 = (undefined8 *)((ulonglong)puStack_2c8 & 0xffffffff00000000);
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            FUN_1448e935e(uVar20,&local_158,&DAT_14ca4b6d8,0);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_290 = &LAB_14712ac08;
              local_298 = &LAB_14712ac0c;
              local_2a0 = &LAB_1472e3912;
              local_2a8 = (undefined8 *)&LAB_1472e3916;
              local_2b0 = FUN_1472e391a;
              local_2b8 = FUN_1472e3942;
              local_2d0 = L"ScreenPassVS";
              local_2d8 = L"/Engine/Private/ScreenPass.usf";
              local_280 = 0;
              local_288 = 0xe0;
              local_2c0 = (char *)CONCAT44(local_2c0._4_4_,1);
              puStack_2c8 = (undefined8 *)((ulonglong)puStack_2c8 & 0xffffffff00000000);
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            lVar19 = uStack_150;
            local_208 = local_158;
            FUN_145e6b32c();
            local_158 = (undefined8 *)0x0;
            uStack_150 = 0;
            FUN_1448f70da(local_240,&DAT_14ca28668,local_258,&local_158);
            FUN_145e6b32c();
            FUN_140069376(param_2);
            puVar1 = local_250;
            puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar29 = puVar27 + 0x41;
            if (*(undefined8 **)(param_2 + 0x78) < puVar29) {
              FUN_140023dd8(local_250,0x210);
              puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar29 = puVar27 + 0x41;
            }
            *local_250 = (ulonglong)puVar29;
            local_158 = local_258;
            uStack_150 = DAT_14ca286b0;
            if (DAT_14ca286b0 != 0) {
              LOCK();
              *(int *)(DAT_14ca286b0 + 8) = *(int *)(DAT_14ca286b0 + 8) + 1;
              UNLOCK();
            }
            local_148 = &DAT_14ca28668;
            local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1);
            FUN_140068f1a(puVar27,&local_1a4,&local_158);
            *puVar27 = &PTR_FUN_14a2b8970;
            puVar27[0x37] = local_258;
            puVar27[0x38] = uVar34;
            puVar27[0x39] = local_228;
            puVar27[0x3a] = local_230;
            puVar27[0x3b] = local_238;
            puVar27[0x3c] = local_208;
            puVar27[0x3d] = lVar19;
            puVar27[0x3e] = local_240;
            puVar27[0x3f] = local_268;
            *(char *)(puVar27 + 0x40) = (char)local_260;
            *(undefined2 *)((longlong)puVar27 + 0x201) = (undefined2)local_138;
            *(undefined1 *)((longlong)puVar27 + 0x203) = local_138._2_1_;
            *(float *)((longlong)puVar27 + 0x204) = fVar39;
            iVar26 = *(int *)(param_2 + 0x170);
            *(uint *)(param_2 + 0x170) = iVar26 + 1U;
            if (*(uint *)(param_2 + 0x174) < iVar26 + 1U) {
              FUN_14470e57a(local_218,iVar26);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar26 * 8) = puVar27;
            *(int *)((longlong)puVar27 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
            FUN_140069100(param_2,puVar27);
            param_4 = local_220;
            param_3 = local_200;
          }
          uVar34 = uVar34 + 0x13c10;
        } while (uVar34 != uVar30);
      }
    }
    goto LAB_142eb5b20;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca286f8) && (FUN_144b3d300(&DAT_14ca286f8), DAT_14ca286f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GTAO.ThicknessBlend",1);
    if (plVar21 == (longlong *)0x0) {
      DAT_14ca286f0 = 0;
    }
    else {
      DAT_14ca286f0 = (**(code **)(*plVar21 + 0x70))(plVar21);
    }
    _Init_thread_footer(&DAT_14ca286f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca28708) && (FUN_144b3d300(&DAT_14ca28708), DAT_14ca28708 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GTAO.FalloffStartRatio",1);
    if (plVar21 == (longlong *)0x0) {
      DAT_14ca28700 = 0;
    }
    else {
      DAT_14ca28700 = (**(code **)(*plVar21 + 0x70))(plVar21);
    }
    _Init_thread_footer(&DAT_14ca28708);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca28718) && (FUN_144b3d300(&DAT_14ca28718), DAT_14ca28718 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GTAO.FalloffEnd",1);
    if (plVar21 == (longlong *)0x0) {
      DAT_14ca28710 = 0;
    }
    else {
      DAT_14ca28710 = (**(code **)(*plVar21 + 0x70))(plVar21);
    }
    _Init_thread_footer(&DAT_14ca28718);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca28728) && (FUN_144b3d300(&DAT_14ca28728), DAT_14ca28728 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GTAO.NumAngles",1);
    if (plVar21 == (longlong *)0x0) {
      DAT_14ca28720 = 0;
    }
    else {
      DAT_14ca28720 = (**(code **)(*plVar21 + 0x70))(plVar21);
    }
    _Init_thread_footer(&DAT_14ca28728);
  }
  iVar28 = 2;
  if (*(int *)(DAT_14ca258b8 + 4) < 2) {
    iVar28 = *(int *)(DAT_14ca258b8 + 4);
  }
  iVar26 = 3;
  if (*(int *)(DAT_14ca258d0 + 4) < 3) {
    iVar26 = *(int *)(DAT_14ca258d0 + 4);
  }
  uVar3 = *(undefined1 *)(param_4 + 0x94);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  local_230 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = local_230 + 9;
  local_270 = puVar1;
  local_250 = param_1;
  local_200 = param_3;
  if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
    FUN_140023dd8(puVar1,0x50);
    local_230 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = local_230 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar18;
  local_230[1] = *(undefined8 *)(param_4 + 8);
  local_230[2] = 0;
  *(undefined1 *)(local_230 + 3) = 0;
  *(undefined8 *)((longlong)local_230 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_230 + 5) = 0;
  *local_230 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(local_230 + 6) = uVar3;
  *(undefined1 *)(local_230 + 7) = 0;
  *(undefined4 *)((longlong)local_230 + 0x31) = 0;
  *(undefined2 *)((longlong)local_230 + 0x35) = 0;
  local_230[8] = param_4;
  iVar23 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar23);
  }
  puVar1 = local_270;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = local_230;
  *(int *)((longlong)local_230 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  if (DAT_14ca28710 == 0) {
    fVar39 = 200.0;
  }
  else {
    fVar39 = *(float *)(DAT_14ca28710 + 4);
  }
  fVar41 = 0.5;
  fVar38 = 0.5;
  if (DAT_14ca28700 != 0) {
    fVar38 = *(float *)(DAT_14ca28700 + 4);
    if (0.999 <= fVar38) {
      fVar38 = 0.999;
    }
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
  }
  fVar38 = fVar38 * fVar39;
  fVar40 = 1.0 / (fVar39 * fVar39 - fVar38 * fVar38);
  local_178 = CONCAT44(fVar39,fVar38);
  local_170 = (undefined8 *)CONCAT44(-(fVar38 * fVar38) * fVar40,fVar40);
  if (DAT_14ca286f0 != 0) {
    fVar41 = *(float *)(DAT_14ca286f0 + 4);
  }
  local_248 = (longlong *)&DAT_00000084;
  if (DAT_14ca28720 == 0) {
    fVar39 = 2.0;
  }
  else {
    fVar39 = *(float *)(DAT_14ca28720 + 4);
    if (16.0 <= fVar39) {
      fVar39 = 16.0;
    }
    if (fVar39 <= 1.0) {
      fVar39 = 1.0;
    }
  }
  fVar38 = 3.1415927;
  local_258 = (undefined8 *)(param_4 + 0x84);
  fVar39 = (float)(longlong)((3.1415927 / fVar39) * 0.15915494 + 0.5) * -6.2831855 +
           3.1415927 / fVar39;
  if (1.5707964 < fVar39) {
LAB_142eb3b4c:
    fVar39 = fVar38 - fVar39;
    fVar38 = -1.0;
  }
  else {
    if (fVar39 < -1.5707964) {
      fVar38 = -3.1415927;
      goto LAB_142eb3b4c;
    }
    fVar38 = 1.0;
  }
  uStack_120 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_118 = (undefined8 *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar24 = (uint)*local_258;
  uVar31 = DAT_14ca84e40;
  if ((int)uVar24 < (int)DAT_14ca84e40) {
    uVar31 = uVar24;
  }
  if ((int)uVar31 < 2) {
    uVar31 = 1;
  }
  uVar25 = (uint)((ulonglong)*local_258 >> 0x20);
  uVar24 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar24 = uVar25;
  }
  local_128 = (undefined8 *)0x20009;
  local_f8 = CONCAT26(local_f8._6_2_,0xff0025000101);
  local_110 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar24 < 2) {
    uVar24 = 1;
  }
  local_108 = (ulonglong)uVar31 << 0x20;
  local_100 = CONCAT44(0x10001,uVar24);
  uVar34 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar35 = uVar34 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar35) {
    FUN_140023dd8(local_270,0x128);
    uVar34 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar35 = uVar34 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar35;
  local_220 = param_4;
  FUN_1456bbb8c(uVar34,L"HorizonSearchIntegralTexture",&local_128,0);
  iVar23 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar23 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar23 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar23);
  }
  puVar1 = local_270;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar23 * 8) = uVar34;
  *(int *)(uVar34 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar3 = *(undefined1 *)(uVar34 + 0x94);
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar29 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
    FUN_140023dd8(local_270,0x50);
    puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar29 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar18;
  puVar29[1] = *(undefined8 *)(uVar34 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 0;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 0;
  *puVar29 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar29 + 6) = uVar3;
  *(undefined1 *)(puVar29 + 7) = 0;
  *(undefined4 *)((longlong)puVar29 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar29 + 0x35) = 0;
  puVar29[8] = uVar34;
  iVar23 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
  local_238 = uVar34;
  if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar23);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  if (0 < (int)local_250[0x7e]) {
    fVar40 = fVar39 * fVar39;
    fVar41 = 1.0 - fVar41 * fVar41;
    if (0.99 <= fVar41) {
      fVar41 = 0.99;
    }
    if (fVar41 <= 0.0) {
      fVar41 = 0.0;
    }
    local_248 = (longlong *)((longlong)local_248 + (longlong)local_200);
    local_268 = (char *)(param_2 + 0x98);
    local_228 = (undefined8 *)CONCAT44(local_228._4_4_,iVar28 + -3 + iVar26 * 3);
    local_1e8 = param_2 + 0x168;
    local_1d0 = (longlong *)(param_2 + 0x1b8);
    local_1e0 = (char *)(param_2 + 0x4a8);
    local_1d8 = (longlong *)(param_2 + 0x4b0);
    lVar19 = 0;
    puVar18 = (undefined8 *)0x0;
    pcVar32 = local_200;
    do {
      puVar1 = local_270;
      uVar35 = local_250[0x7d];
      uVar34 = *(ulonglong *)(uVar35 + 0x30f8 + lVar19);
      uVar20 = *(undefined8 *)(uVar35 + 0x3100 + lVar19);
      iVar28 = (int)uVar20;
      iVar26 = (int)((ulonglong)uVar20 >> 0x20);
      local_198 = CONCAT44((int)(uVar34 >> 0x20) / 2,
                           (int)(((uint)(uVar34 >> 0x1f) & 1) + (int)uVar34) >> 1);
      local_190 = (undefined8 *)
                  CONCAT44((iVar26 - (iVar26 + 1 >> 0x1f)) + 1 >> 1,
                           (iVar28 - (iVar28 + 1 >> 0x1f)) + 1 >> 1);
      local_260 = uVar35 + lVar19;
      local_158 = (undefined8 *)
                  CONCAT44((((((fVar40 * -2.3889859e-08 + 2.7525562e-06) * fVar40 + -0.00019840874)
                              * fVar40 + 0.008333331) * fVar40 + -0.16666667) * fVar40 + 1.0) *
                           fVar39,(float)((double)((float)*(int *)(pcVar32 + 0x88) * local_178._4_4_
                                                  ) * *(double *)(uVar35 + 0x830 + lVar19)));
      uStack_150 = CONCAT44(fVar41,fVar38 * (((((fVar40 * -2.6051615e-07 + 2.4760495e-05) * fVar40 +
                                               -0.0013888378) * fVar40 + 0.041666638) * fVar40 +
                                             -0.5) * fVar40 + 1.0));
      local_240 = puVar18;
      if (*(int *)(DAT_14ca258e8 + 4) == 0 && 0x3ff < DAT_14ca84e74) {
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x1c;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_270,0xf0);
          puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar27 + 0x1c;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar27 = &PTR_FUN_14a2b8798;
        puVar18 = puVar27 + 2;
        FUN_14728da94(puVar18);
        puVar27[0x18] = 0;
        puVar27[0x19] = 0x3f80000000000000;
        puVar27[0x1a] = 0;
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_268,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar27;
        puStack_2c8 = &local_158;
        local_2d0 = (wchar_t *)&local_178;
        local_2d8 = (wchar_t *)local_258;
        local_2c0 = pcVar32;
        FUN_14728d5a8(puVar18,local_260,&local_198,local_248);
        uVar2 = *(undefined4 *)(uVar35 + 0x2af0 + lVar19);
        *(float *)(puVar27 + 0x18) = *(float *)(uVar35 + 0x2b0c + lVar19) * 0.5;
        *(undefined4 *)((longlong)puVar27 + 0xc4) = uVar2;
        puVar27[0x19] = 0;
        puVar27[0x1a] = local_230;
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        FUN_145d9fca8();
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca259a0,(ulonglong)local_228 & 0xffffffff);
        FUN_145d9fca8();
        local_1a0 = (int)(~local_198._4_4_ + local_190._4_4_ + DAT_14ca25930) / DAT_14ca25930;
        local_1a4 = (int)(~(uint)local_198 + (int)local_190 + DAT_14ca2592c) / DAT_14ca2592c;
        local_19c = 1;
        local_2d8 = (wchar_t *)&local_1a4;
        FUN_14728d793(param_2,&local_138,&local_128,puVar18);
      }
      else if (*(int *)(DAT_14ca258e8 + 4) == 1) {
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x1a;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_270,0xe0);
          puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar27 + 0x1a;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar27 = &PTR_FUN_14a2b87f8;
        puVar18 = puVar27 + 2;
        FUN_14728da94(puVar18);
        puVar27[0x18] = 0;
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_268,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar27;
        puStack_2c8 = &local_158;
        local_2d0 = (wchar_t *)&local_178;
        local_2d8 = (wchar_t *)local_258;
        local_2c0 = pcVar32;
        FUN_14728d5a8(puVar18,local_260,&local_198,local_248);
        puVar27[0x18] = puVar29;
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        FUN_145ee1cb0();
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca25ad0,(ulonglong)local_228 & 0xffffffff);
        FUN_145ee1cb0();
        local_138 = (undefined4)local_128;
        uStack_134 = local_128._4_4_;
        uStack_130 = (undefined4)uStack_120;
        uStack_12c = uStack_120._4_4_;
        local_1ac = (int)(~local_198._4_4_ + local_190._4_4_ + DAT_14ca25a64) / DAT_14ca25a64;
        local_1b0 = (int)(~(uint)local_198 + (int)local_190 + DAT_14ca25a60) / DAT_14ca25a60;
        local_1a8 = 1;
        local_2d8 = (wchar_t *)&local_1b0;
        FUN_14728d911(param_2,&local_128,&local_138,puVar18);
        puVar1 = local_270;
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0xe;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_270,0x80);
          puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar27 + 0xe;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar27 = &PTR_FUN_14a2b8818;
        puVar27[2] = 0;
        puVar27[3] = 0x3f80000000000000;
        puVar27[4] = 0;
        puVar27[5] = 0x3f80000000000000;
        puVar27[6] = 0;
        puVar27[7] = 0x3f80000000000000;
        puVar27[8] = 0;
        puVar27[9] = 0x3f80000000000000;
        puVar27[10] = 0;
        puVar27[0xb] = 0;
        puVar27[0xc] = 0;
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_268,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar27;
        local_2d8 = (wchar_t *)local_238;
        FUN_14728d846(puVar27 + 2,local_260,&local_198,local_258);
        puVar27[0xc] = local_230;
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        FUN_145db50e8();
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca25c00,0);
        FUN_145db50e8();
        local_1b8 = (int)(~local_198._4_4_ + local_190._4_4_ + DAT_14ca25b94) / DAT_14ca25b94;
        local_1bc = (int)(~(uint)local_198 + (int)local_190 + DAT_14ca25b90) / DAT_14ca25b90;
        local_1b4 = 1;
        local_2d8 = (wchar_t *)&local_1bc;
        FUN_14728d9c3(param_2,&local_1bd,&local_128,puVar27 + 2);
      }
      else {
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_290 = &LAB_14712ac08;
          local_298 = &LAB_14712ac0c;
          local_2a0 = &LAB_1472e3912;
          local_2a8 = (undefined8 *)&LAB_1472e3916;
          local_2b0 = FUN_1472e391a;
          local_2b8 = FUN_1472e3942;
          local_2d0 = L"ScreenPassVS";
          local_2d8 = L"/Engine/Private/ScreenPass.usf";
          local_280 = 0;
          local_288 = 0xe0;
          local_2c0 = (char *)CONCAT44(local_2c0._4_4_,1);
          puStack_2c8 = (undefined8 *)((ulonglong)puStack_2c8 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca4b6d8,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_290 = &LAB_14712ac08;
          local_298 = &LAB_14712ac0c;
          local_2a0 = &LAB_1472e3912;
          local_2a8 = (undefined8 *)&LAB_1472e3916;
          local_2b0 = FUN_1472e391a;
          local_2b8 = FUN_1472e3942;
          local_2d0 = L"ScreenPassVS";
          local_2d8 = L"/Engine/Private/ScreenPass.usf";
          local_280 = 0;
          local_288 = 0xe0;
          local_2c0 = (char *)CONCAT44(local_2c0._4_4_,1);
          puStack_2c8 = (undefined8 *)((ulonglong)puStack_2c8 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        puVar1 = local_270;
        local_218 = local_128;
        local_208 = uStack_120;
        local_210 = CONCAT44(local_210._4_4_,(uint)(byte)((local_240 == (undefined8 *)0x0) + 1));
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x38;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_270,0x1d0);
          puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar27 + 0x38;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar27 = &PTR_FUN_14a2b87b8;
        puVar18 = puVar27 + 2;
        FUN_14728de9e(puVar18);
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_268,iVar28);
        }
        puVar36 = local_258;
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar27;
        puStack_2c8 = &local_158;
        local_2d0 = (wchar_t *)&local_178;
        local_2d8 = (wchar_t *)local_258;
        local_2c0 = pcVar32;
        FUN_14728d5a8(puVar18,local_260,&local_198,local_248);
        puVar27[0x18] = local_238;
        puVar27[0x19] = 0;
        *(char *)(puVar27 + 0x1a) = (char)local_210;
        *(undefined1 *)((longlong)puVar27 + 0xd1) = 0;
        *(undefined2 *)((longlong)puVar27 + 0xd2) = 0xffff;
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        FUN_145ee2198();
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca25d28,(ulonglong)local_228 & 0xffffffff);
        FUN_145ee2198();
        puVar33 = local_128;
        local_1f0 = uStack_120;
        FUN_145ee2406();
        local_128 = (undefined8 *)0x0;
        uStack_120 = (undefined8 *)0x0;
        FUN_1448f70da(puVar33,&DAT_14ca283c0,puVar18,&local_128);
        local_1f8 = local_198;
        local_1c8 = local_190;
        uVar20 = *puVar36;
        FUN_145ee2406();
        FUN_140069376(param_2);
        puVar1 = local_270;
        puVar36 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar27 = puVar36 + 0x3f;
        if (*(undefined8 **)(param_2 + 0x78) < puVar27) {
          FUN_140023dd8(local_270,0x200);
          puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar27 = puVar36 + 0x3f;
        }
        *local_270 = (ulonglong)puVar27;
        uStack_120 = (undefined8 *)DAT_14ca28408;
        if (DAT_14ca28408 != 0) {
          LOCK();
          *(int *)(DAT_14ca28408 + 8) = *(int *)(DAT_14ca28408 + 8) + 1;
          UNLOCK();
        }
        uStack_118 = (undefined8 *)&DAT_14ca283c0;
        local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1);
        local_128 = puVar18;
        FUN_140068f1a(puVar36,&local_138,&local_128,0x11);
        *puVar36 = &PTR_FUN_14a2b87c0;
        puVar36[0x37] = local_218;
        puVar36[0x38] = local_208;
        puVar36[0x39] = puVar33;
        puVar36[0x3a] = local_1f0;
        puVar36[0x3b] = puVar18;
        puVar36[0x3c] = local_1f8;
        puVar36[0x3d] = local_1c8;
        puVar36[0x3e] = uVar20;
        iVar28 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar28 + 1U) {
          FUN_14470e57a(local_1e8,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar28 * 8) = puVar36;
        *(int *)((longlong)puVar36 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar36);
        puVar1 = local_270;
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x2c;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_270,0x170);
          puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar27 + 0x2c;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar27 = &PTR_FUN_14a2b87d8;
        puVar18 = puVar27 + 2;
        FUN_14728df34(puVar18);
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_268,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar27;
        local_2d8 = (wchar_t *)local_238;
        FUN_14728d846(puVar18,local_260,&local_198,local_258);
        lVar5 = local_220;
        puVar27[0xc] = local_220;
        puVar27[0xd] = 0;
        *(char *)(puVar27 + 0xe) = (char)local_210;
        *(undefined1 *)((longlong)puVar27 + 0x71) = 0;
        *(undefined2 *)((longlong)puVar27 + 0x72) = 0xffff;
        uVar20 = *(undefined8 *)(uVar35 + 0x13818 + lVar19);
        FUN_145ee2680();
        FUN_1448e935e(uVar20,&local_128,&DAT_14ca25e50,0);
        FUN_145ee2680();
        puVar36 = local_128;
        local_260 = (ulonglong)uStack_120;
        FUN_145ee28ee();
        local_128 = (undefined8 *)0x0;
        uStack_120 = (undefined8 *)0x0;
        FUN_1448f70da(puVar36,&DAT_14ca28448,puVar18,&local_128);
        local_210 = local_198;
        local_1f0 = local_190;
        local_1f8 = *(undefined8 *)(lVar5 + 0x84);
        FUN_145ee28ee();
        FUN_140069376(param_2);
        puVar1 = local_270;
        puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar27 = puVar33 + 0x3f;
        if (*(undefined8 **)(param_2 + 0x78) < puVar27) {
          FUN_140023dd8(local_270,0x200);
          puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar27 = puVar33 + 0x3f;
        }
        pcVar32 = local_200;
        *local_270 = (ulonglong)puVar27;
        uStack_120 = DAT_14ca28490;
        if (DAT_14ca28490 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(DAT_14ca28490 + 1) = *(int *)(DAT_14ca28490 + 1) + 1;
          UNLOCK();
        }
        uStack_118 = (undefined8 *)&DAT_14ca28448;
        local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1);
        local_128 = puVar18;
        FUN_140068f1a(puVar33,&local_138,&local_128,0x11);
        *puVar33 = &PTR_FUN_14a2b87e0;
        puVar33[0x37] = local_218;
        puVar33[0x38] = local_208;
        puVar33[0x39] = puVar36;
        puVar33[0x3a] = local_260;
        puVar33[0x3b] = puVar18;
        puVar33[0x3c] = local_210;
        puVar33[0x3d] = local_1f0;
        puVar33[0x3e] = local_1f8;
        iVar28 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar28 + 1U) {
          FUN_14470e57a(local_1e8,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar28 * 8) = puVar33;
        *(int *)((longlong)puVar33 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar33);
      }
      lVar5 = *(longlong *)(uVar35 + 0x3108 + lVar19);
      if ((lVar5 != 0) && ((*(byte *)(uVar35 + 0x125b0 + lVar19) & 1) == 0)) {
        plVar21 = *(longlong **)(lVar5 + 0x1790);
        if (plVar21 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 0x1790) = 0;
          (**(code **)(*plVar21 + 0x38))();
        }
        lVar14 = local_220;
        bVar16 = *(byte *)(local_220 + 0x24);
        *(byte *)(local_220 + 0x24) = bVar16 | 2;
        *(undefined1 *)(local_220 + 0x26) = 1;
        iVar28 = *(int *)(param_2 + 0x1c0);
        *(uint *)(param_2 + 0x1c0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0x1c4) < iVar28 + 1U) {
          FUN_14017e38e(local_1d0,iVar28);
        }
        pcVar15 = local_1e0;
        lVar4 = *local_1d0;
        *(longlong *)(lVar4 + (longlong)iVar28 * 0x10) = lVar14;
        *(undefined8 **)(lVar4 + 8 + (longlong)iVar28 * 0x10) = (undefined8 *)(lVar5 + 0x1790);
        if ((bVar16 & 2) == 0) {
          LOCK();
          cVar17 = *local_1e0;
          if (cVar17 == '\0') {
            *local_1e0 = '\x01';
          }
          UNLOCK();
          if (cVar17 != '\0') {
            FUN_1447d2058(local_1e0);
          }
          iVar28 = *(int *)(param_2 + 0x4b8);
          *(uint *)(param_2 + 0x4b8) = iVar28 + 1U;
          if (*(uint *)(param_2 + 0x4bc) < iVar28 + 1U) {
            FUN_1447f2dbc(local_1d8,iVar28);
          }
          lVar5 = *local_1d8;
          *(undefined8 *)(lVar5 + (longlong)iVar28 * 0x10) = 2;
          *(longlong *)(lVar5 + 8 + (longlong)iVar28 * 0x10) = local_220;
          LOCK();
          bVar37 = *pcVar15 == '\x01';
          if (bVar37) {
            *pcVar15 = '\0';
          }
          UNLOCK();
          if (!bVar37) {
            FUN_14008cdb0(local_1e0);
          }
        }
      }
      puVar18 = (undefined8 *)((longlong)local_240 + 1);
      lVar19 = lVar19 + 0x13c10;
    } while ((longlong)puVar18 < (longlong)(int)local_250[0x7e]);
  }
LAB_142eb5b20:
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eb5e57 FUN_142eb5e57 body=69 status=ok
// SIG undefined FUN_142eb5e57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb5e57(void)

{
  _DAT_14ca26160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb5e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26168,1);
  return;
}



// FUNCTION 142eb5e9c FUN_142eb5e9c body=576 status=ok
// SIG undefined FUN_142eb5e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eb5e9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca287d8) {
    FUN_144b3d300(&DAT_14ca287d8);
    if (DAT_14ca287d8 == -1) {
      FUN_142edaf40();
      if ((DAT_14ca28957 & 2) == 0) {
        DAT_14ca28957 = DAT_14ca28957 | 2;
        _DAT_14ca288f8 = L"FBloomSetupPS";
        _DAT_14ca28910 = FUN_146826540;
        _DAT_14ca28918 = FUN_146825d77;
        _DAT_14ca28920 = FUN_146825fd6;
        _DAT_14ca28928 = FUN_1407e02ea;
        _DAT_14ca28930 = FUN_146826273;
        _DAT_14ca28908 = FUN_142edbb00;
        _DAT_14ca28948 = 0xffffffff000000e0;
        _DAT_14ca28950 = 8;
        DAT_14ca28954 = 0;
        _DAT_14ca28938 = &LAB_142edbb2c;
        _DAT_14ca28958 = L"BASE";
        DAT_14ca28982 = 4;
        _DAT_14ca28960 = FUN_140b35ae4();
        _DAT_14ca28968 = DAT_14ca28900;
        _DAT_14ca28970 = &LAB_14682652b;
        DAT_14ca28900 = &DAT_14ca28958;
        DAT_14ca28955 = DAT_14ca28955 + '\x01';
        _DAT_14ca28978 = 0x100000000;
        if (*(char *)(_DAT_14ca28960 + 100) != '\0') {
          DAT_14ca28956 = DAT_14ca28956 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca288f0);
      }
      FUN_140db5666(&DAT_14ca28730,0,&DAT_14ca288f0,L"FBloomSetupPS",
                    L"/Engine/Private/PostProcessBloom.usf",L"BloomSetupPS",3,4,FUN_142edaeaa,
                    FUN_142edae4a,&LAB_142edae32,&LAB_142edae2e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca287e0);
      _DAT_14ca28730 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edaf34);
      _Init_thread_footer(&DAT_14ca287d8);
    }
  }
  return &DAT_14ca28730;
}



// FUNCTION 142eb60dc FUN_142eb60dc body=576 status=ok
// SIG undefined FUN_142eb60dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eb60dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca28a30) {
    FUN_144b3d300(&DAT_14ca28a30);
    if (DAT_14ca28a30 == -1) {
      FUN_142edbc42();
      if ((DAT_14ca28b27 & 2) == 0) {
        DAT_14ca28b27 = DAT_14ca28b27 | 2;
        _DAT_14ca28ac8 = L"FBloomSetupCS";
        _DAT_14ca28ae0 = FUN_146826540;
        _DAT_14ca28ae8 = FUN_146825d77;
        _DAT_14ca28af0 = FUN_146825fd6;
        _DAT_14ca28af8 = FUN_1407e02ea;
        _DAT_14ca28b00 = FUN_146826273;
        _DAT_14ca28ad8 = FUN_142edbf22;
        _DAT_14ca28b18 = 0xffffffff000000e0;
        _DAT_14ca28b20 = 8;
        DAT_14ca28b24 = 0;
        _DAT_14ca28b08 = &LAB_142edbf4e;
        _DAT_14ca28b28 = L"BASE";
        DAT_14ca28b52 = 4;
        _DAT_14ca28b30 = FUN_140b35ae4();
        _DAT_14ca28b38 = DAT_14ca28ad0;
        _DAT_14ca28b40 = &LAB_14682652b;
        DAT_14ca28ad0 = &DAT_14ca28b28;
        DAT_14ca28b25 = DAT_14ca28b25 + '\x01';
        _DAT_14ca28b48 = 0x100000000;
        if (*(char *)(_DAT_14ca28b30 + 100) != '\0') {
          DAT_14ca28b26 = DAT_14ca28b26 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca28ac0);
      }
      FUN_140db5666(&DAT_14ca28988,0,&DAT_14ca28ac0,L"FBloomSetupCS",
                    L"/Engine/Private/PostProcessBloom.usf",L"BloomSetupCS",5,4,FUN_142edbbac,
                    FUN_142edbb4c,&LAB_142edbb34,&LAB_142edbb30,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca28a38);
      _DAT_14ca28988 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edbc36);
      _Init_thread_footer(&DAT_14ca28a30);
    }
  }
  return &DAT_14ca28988;
}



// FUNCTION 142eb631c FUN_142eb631c body=485 status=ok
// SIG undefined FUN_142eb631c(void)

undefined8 *
FUN_142eb631c(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined8 *puVar14;
  
  param_1[0x1c] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar11 = FUN_1447e4f80();
  cVar13 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar11 + 0x41);
  }
  *param_1 = *(undefined8 *)(param_3 + 0x18);
  *(char *)(param_1 + 1) = cVar13;
  FUN_144a2c7c2(param_1 + 2,param_4);
  param_1[0x10] = *param_5;
  uVar10 = DAT_14c9c0de0;
  param_1[0x11] = DAT_14c9c0de0;
  param_1[0x12] = param_5[7];
  param_1[0x13] = uVar10;
  param_1[0x14] = param_5[8];
  param_1[0x15] = uVar10;
  puVar2 = (undefined4 *)param_5[6];
  param_1[0x1a] = *(undefined8 *)(puVar2 + 8);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  *(undefined4 *)(param_1 + 0x18) = puVar2[4];
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 0x19) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar9;
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0x17) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar6;
  lVar11 = param_5[3];
  cVar13 = *(char *)(lVar11 + 0x68);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar14 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar14 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar14[1] = *(undefined8 *)(lVar11 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 3;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *puVar14 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar14 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar14 + 0x2c) = 0xffffffff00000000;
  puVar14[7] = 0;
  puVar14[8] = lVar11;
  iVar1 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar1 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar1 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[0x1c] = puVar14;
  memcpy(param_1 + 0x1e,(void *)param_5[5],0x88);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_5 + 4);
  return param_1;
}



// FUNCTION 142eb6519 FUN_142eb6519 body=69 status=ok
// SIG undefined FUN_142eb6519(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb6519(void)

{
  _DAT_14ca263f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb655b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26400,1);
  return;
}



// FUNCTION 142eb655e FUN_142eb655e body=69 status=ok
// SIG undefined FUN_142eb655e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb655e(void)

{
  _DAT_14ca26410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb65a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26418,1);
  return;
}



// FUNCTION 142eb65a3 FUN_142eb65a3 body=69 status=ok
// SIG undefined FUN_142eb65a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb65a3(void)

{
  _DAT_14ca26428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb65e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26430,1);
  return;
}



// FUNCTION 142eb65e8 FUN_142eb65e8 body=69 status=ok
// SIG undefined FUN_142eb65e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb65e8(void)

{
  _DAT_14ca26440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb662a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26448,1);
  return;
}



// FUNCTION 142eb662d FUN_142eb662d body=69 status=ok
// SIG undefined FUN_142eb662d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb662d(void)

{
  _DAT_14ca26458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb666f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26460,1);
  return;
}



// FUNCTION 142eb6672 FUN_142eb6672 body=69 status=ok
// SIG undefined FUN_142eb6672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb6672(void)

{
  _DAT_14ca26470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb66b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26478,1);
  return;
}



// FUNCTION 142eb66b7 FUN_142eb66b7 body=69 status=ok
// SIG undefined FUN_142eb66b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb66b7(void)

{
  _DAT_14ca26488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb66f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca26490,1);
  return;
}



// FUNCTION 142eb66fc FUN_142eb66fc body=69 status=ok
// SIG undefined FUN_142eb66fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb66fc(void)

{
  _DAT_14ca264a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb673e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca264a8,1);
  return;
}



// FUNCTION 142eb6741 FUN_142eb6741 body=69 status=ok
// SIG undefined FUN_142eb6741(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eb6741(void)

{
  _DAT_14ca264b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb6783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca264c0,1);
  return;
}



// FUNCTION 142eb67bd FUN_142eb67bd body=9198 status=ok
// SIG undefined FUN_142eb67bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142eb67bd(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 uVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 *puVar21;
  bool bVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_178 [32];
  int *local_158;
  undefined1 local_150;
  undefined4 local_148;
  int local_144;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  undefined1 local_119;
  int local_118;
  int local_114;
  int local_110;
  undefined2 local_10b;
  undefined1 local_109;
  float local_108 [8];
  longlong local_e8 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined2 local_8c;
  undefined4 local_8a;
  char local_86;
  undefined1 local_85;
  undefined2 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca26b40) && (FUN_144b3d300(), DAT_14ca26b40 == -1)) {
    DAT_14ca26720 = 0;
    DAT_14ca26724 = DAT_14ca85550;
    FUN_142edbfb2(&DAT_14ca26730);
    DAT_14ca26b30 = '\0';
    _Init_thread_footer();
  }
  lVar18 = *(longlong *)(param_2 + 8);
  local_e8[0] = 0;
  local_108[0] = 0.0;
  lVar19 = param_2 + 0x2ea0;
  if (0 < (longlong)*(int *)(param_2 + 0x2f28)) {
    lVar23 = *(longlong *)(param_2 + 0x2f20);
    if (*(longlong *)(param_2 + 0x2f20) == 0) {
      lVar23 = lVar19;
    }
    lVar15 = 0;
    do {
      if (*(longlong *)(lVar23 + 8 + lVar15) == 0) {
        local_108[0] = *(float *)(lVar23 + lVar15);
        break;
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)*(int *)(param_2 + 0x2f28) * 0x10 != lVar15);
  }
  puVar29 = (undefined *)(param_2 + 0x2510);
  uVar16 = 1;
  fVar33 = local_108[0];
  local_138 = param_1;
  do {
    if (*(int *)(param_2 + 0x2f28) < 1) goto LAB_142eb698b;
    iVar7 = -1;
    lVar23 = 0;
    do {
      lVar15 = *(longlong *)(param_2 + 0x2f20);
      if (*(longlong *)(param_2 + 0x2f20) == 0) {
        lVar15 = lVar19;
      }
      if (*(longlong *)(lVar15 + 8 + lVar23 * 0x10) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = FUN_1447b4020();
      }
      uVar13 = 0;
      do {
        if (lVar15 == local_e8[uVar13]) goto LAB_142eb6912;
        uVar13 = uVar13 + 1;
      } while (uVar16 != uVar13);
      if (iVar7 == -1) {
LAB_142eb690f:
        iVar7 = (int)lVar23;
      }
      else {
        lVar15 = *(longlong *)(param_2 + 0x2f20);
        if (*(longlong *)(param_2 + 0x2f20) == 0) {
          lVar15 = lVar19;
        }
        if (*(float *)(lVar15 + (longlong)iVar7 * 0x10) <= *(float *)(lVar15 + lVar23 * 0x10))
        goto LAB_142eb690f;
      }
LAB_142eb6912:
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(param_2 + 0x2f28));
    if (iVar7 == -1) goto LAB_142eb698b;
    lVar23 = *(longlong *)(param_2 + 0x2f20);
    if (*(longlong *)(param_2 + 0x2f20) == 0) {
      lVar23 = lVar19;
    }
    fVar30 = *(float *)(lVar23 + (longlong)iVar7 * 0x10);
    if (fVar30 < 0.001953125) goto LAB_142eb698b;
    if (*(longlong *)(lVar23 + (longlong)iVar7 * 0x10 + 8) == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_1447b4020();
    }
    local_e8[uVar16] = lVar23;
    local_108[uVar16] = fVar30;
    fVar33 = fVar33 + fVar30;
    uVar16 = uVar16 + 1;
  } while (uVar16 != 5);
  uVar16 = 5;
LAB_142eb698b:
  lVar23 = local_138;
  if (fVar33 <= 0.001) {
    local_108[0] = 1.0;
    uVar16 = 1;
  }
  else {
    uVar13 = 0;
    do {
      local_108[uVar13] = local_108[uVar13] * (1.0 / fVar33);
      uVar13 = uVar13 + 1;
    } while ((uVar16 & 0xffffffff) != uVar13);
  }
  uVar13 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2);
  lVar15 = uVar13 * 0x3c;
  if ((int)(&DAT_14ca814b8)[uVar13 * 0xf] < 3) {
LAB_142eb8ba4:
    uVar27 = 0;
  }
  else if (*(longlong *)(&DAT_14ca814b0 + lVar15) == DAT_14ca838f8) {
    if ((*(byte *)((longlong)&DAT_14ca814d0 + lVar15 + 7) & 4) == 0) goto LAB_142eb8ba4;
    lVar19 = 0;
    uVar27 = 0;
    if (DAT_14ca838f8 != DAT_14ca81490) goto LAB_142eb8b8d;
  }
  else {
    if (*(longlong *)(&DAT_14ca814b0 + lVar15) == DAT_14ca81490) goto LAB_142eb8ba4;
    if (*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) != 0x30) {
      lVar19 = CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
      uVar27 = (undefined4)lVar19;
      if (((*(byte *)(&DAT_14ca814d8 + uVar13 * 0xf) & 0x80) == 0) ||
         ((*(byte *)((longlong)&DAT_14ca814d0 + lVar15 + 3) & 2) == 0)) goto LAB_142eb6a2a;
    }
LAB_142eb8b8d:
    uVar13 = CONCAT71((int7)((ulonglong)lVar19 >> 8),
                      *(undefined1 *)((longlong)&DAT_14ca814d0 + lVar15 + 7)) & 0xffffffffffffff04;
    uVar27 = (undefined4)CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 2);
  }
LAB_142eb6a2a:
  uVar11 = *(undefined1 *)(param_2 + 0x13820);
  uVar24 = *(uint *)(lVar18 + 0xd4) & 0xfffffffe;
  local_144 = (**(code **)(*DAT_14ca26448 + 0xb0))();
  if (*(longlong *)(param_2 + 0x30d8) == 0) {
    local_140 = 0;
  }
  else {
    local_150 = uVar24 == 8;
    local_158 = (int *)CONCAT71(local_158._1_7_,uVar11);
    local_b8 = (longlong *)
               FUN_1402b6d8a(*(longlong *)(param_2 + 0x30d8),*(undefined8 *)(lVar23 + 0x18),
                             local_144);
    if (local_b8 == (longlong *)0x0) {
      local_140 = 0;
    }
    else {
      (**(code **)(*local_b8 + 0x30))(local_b8);
      local_140 = FUN_14473c272(lVar23,&local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x38))();
      }
    }
    if (*(longlong *)(param_2 + 0x30d8) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0x30d8) + 0x6b8) = 1;
    }
  }
  local_128 = (undefined8 *)CONCAT71(local_128._1_7_,uVar11);
  local_148 = uVar27;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca29750) && (FUN_144b3d300(&DAT_14ca29750), DAT_14ca29750 == -1)) {
    FUN_144894d4c(&DAT_14ca28e90);
    atexit(FUN_142edc096);
    _Init_thread_footer(&DAT_14ca29750);
  }
  uVar4 = DAT_14c9c0de0;
  local_130 = *(ulonglong *)(param_2 + 8);
  iVar7 = *(int *)(DAT_14ca26468 + 4);
  bVar22 = false;
  uVar13 = 0;
  do {
    if (uVar13 != 0) {
      if (*(longlong *)(local_e8[uVar13] + 0x10) != (&DAT_14ca26730)[uVar13]) {
        (&DAT_14ca26730)[uVar13] = *(longlong *)(local_e8[uVar13] + 0x10);
        bVar22 = true;
      }
      (&DAT_14ca26758)[uVar13] = uVar4;
    }
    lVar19 = (uVar13 >> 2 & 0x3fffffff) * 0x10;
    uVar20 = (uint)uVar13 & 3;
    fVar33 = *(float *)(lVar19 + 0x14ca26780 + (ulonglong)uVar20 * 4);
    fVar30 = local_108[uVar13];
    if ((fVar33 != fVar30) || (NAN(fVar33) || NAN(fVar30))) {
      *(float *)(lVar19 + 0x14ca26780 + (ulonglong)uVar20 * 4) = fVar30;
      bVar22 = true;
    }
    uVar13 = uVar13 + 1;
  } while ((uVar16 & 0xffffffff) != uVar13);
  if (iVar7 == 0) {
    puVar29 = &DAT_14ca28e90;
  }
  lVar19 = FUN_14155e106();
  fVar33 = DAT_14ca26960;
  DAT_14ca267a8 = '\x02';
  if (*(char *)(lVar19 + 0x41) != '\x03') {
    DAT_14ca267a8 = *(char *)(lVar19 + 0x41);
  }
  _DAT_14ca267a0 = DAT_14cb05388;
  if (((((DAT_14ca267b0 != DAT_14ca952b0) || (NAN(DAT_14ca267b0) || NAN(DAT_14ca952b0))) ||
       (DAT_14ca267b4 != DAT_14ca952b4)) ||
      ((NAN(DAT_14ca267b4) || NAN(DAT_14ca952b4) || (DAT_14ca267b8 != DAT_14ca952b8)))) ||
     (NAN(DAT_14ca267b8) || NAN(DAT_14ca952b8))) {
LAB_142eb6c35:
    DAT_14ca267b0 = DAT_14ca952b0;
    DAT_14ca267b4 = DAT_14ca952b4;
    DAT_14ca267b8 = DAT_14ca952b8;
    DAT_14ca267bc = DAT_14ca952bc;
    bVar22 = true;
  }
  else if ((DAT_14ca267bc != DAT_14ca952bc) || (NAN(DAT_14ca267bc) || NAN(DAT_14ca952bc)))
  goto LAB_142eb6c35;
  if ((((DAT_14ca267c0 != DAT_14ca952c0) || (NAN(DAT_14ca267c0) || NAN(DAT_14ca952c0))) ||
      (DAT_14ca267c4 != DAT_14ca952c4)) ||
     (((NAN(DAT_14ca267c4) || NAN(DAT_14ca952c4) || (DAT_14ca267c8 != DAT_14ca952c8)) ||
      (NAN(DAT_14ca267c8) || NAN(DAT_14ca952c8))))) {
LAB_142eb6cb4:
    DAT_14ca267c0 = DAT_14ca952c0;
    DAT_14ca267c4 = DAT_14ca952c4;
    DAT_14ca267c8 = DAT_14ca952c8;
    DAT_14ca267cc = DAT_14ca952cc;
    bVar22 = true;
  }
  else if ((DAT_14ca267cc != DAT_14ca952cc) || (NAN(DAT_14ca267cc) || NAN(DAT_14ca952cc)))
  goto LAB_142eb6cb4;
  if ((((DAT_14ca267d0 != DAT_14ca952d0) || (NAN(DAT_14ca267d0) || NAN(DAT_14ca952d0))) ||
      (DAT_14ca267d4 != DAT_14ca952d4)) ||
     (((NAN(DAT_14ca267d4) || NAN(DAT_14ca952d4) || (DAT_14ca267d8 != DAT_14ca952d8)) ||
      (NAN(DAT_14ca267d8) || NAN(DAT_14ca952d8))))) {
LAB_142eb6d33:
    DAT_14ca267d0 = DAT_14ca952d0;
    DAT_14ca267d4 = DAT_14ca952d4;
    DAT_14ca267d8 = DAT_14ca952d8;
    DAT_14ca267dc = DAT_14ca952dc;
    bVar22 = true;
  }
  else if ((DAT_14ca267dc != DAT_14ca952dc) || (NAN(DAT_14ca267dc) || NAN(DAT_14ca952dc)))
  goto LAB_142eb6d33;
  if (((((DAT_14ca267e0 != DAT_14ca952e0) || (NAN(DAT_14ca267e0) || NAN(DAT_14ca952e0))) ||
       (DAT_14ca267e4 != DAT_14ca952e4)) ||
      ((NAN(DAT_14ca267e4) || NAN(DAT_14ca952e4) || (DAT_14ca267e8 != DAT_14ca952e8)))) ||
     (NAN(DAT_14ca267e8) || NAN(DAT_14ca952e8))) {
LAB_142eb6db2:
    DAT_14ca267e0 = DAT_14ca952e0;
    DAT_14ca267e4 = DAT_14ca952e4;
    DAT_14ca267e8 = DAT_14ca952e8;
    DAT_14ca267ec = DAT_14ca952ec;
    bVar22 = true;
  }
  else if ((DAT_14ca267ec != DAT_14ca952ec) || (NAN(DAT_14ca267ec) || NAN(DAT_14ca952ec)))
  goto LAB_142eb6db2;
  if ((DAT_14ca267f0 != DAT_14ca952f0) || (NAN(DAT_14ca267f0) || NAN(DAT_14ca952f0))) {
    DAT_14ca267f0 = DAT_14ca952f0;
    bVar22 = true;
  }
  fVar30 = DAT_14ca952fc;
  if (1.0 <= DAT_14ca952fc) {
    fVar30 = 1.0;
  }
  if ((DAT_14ca267f4 != DAT_14ca952f4) || (NAN(DAT_14ca267f4) || NAN(DAT_14ca952f4))) {
    DAT_14ca267f4 = DAT_14ca952f4;
    bVar22 = true;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if ((DAT_14ca267f8 != DAT_14ca952f8) || (NAN(DAT_14ca267f8) || NAN(DAT_14ca952f8))) {
    DAT_14ca267f8 = DAT_14ca952f8;
    bVar22 = true;
  }
  if ((DAT_14ca267fc != fVar30) || (NAN(DAT_14ca267fc) || NAN(fVar30))) {
    bVar22 = true;
    DAT_14ca267fc = fVar30;
  }
  fVar30 = *(float *)(param_2 + 0x1dc0);
  fVar31 = *(float *)(param_2 + 0x1dc4);
  fVar32 = *(float *)(param_2 + 0x1dc8);
  if ((((DAT_14ca26810 != fVar30) || (NAN(DAT_14ca26810) || NAN(fVar30))) ||
      (DAT_14ca26814 != fVar31)) || (NAN(DAT_14ca26814) || NAN(fVar31))) {
LAB_142eb6ea9:
    bVar22 = true;
    DAT_14ca26810 = fVar30;
    DAT_14ca26814 = fVar31;
    DAT_14ca26818 = fVar32;
  }
  else if ((DAT_14ca26818 != fVar32) || (NAN(DAT_14ca26818) || NAN(fVar32))) goto LAB_142eb6ea9;
  fVar30 = *(float *)(param_2 + 0x1db0);
  fVar31 = *(float *)(param_2 + 0x1db4);
  fVar32 = *(float *)(param_2 + 0x1db8);
  fVar3 = *(float *)(param_2 + 0x1dbc);
  if (((DAT_14ca26800 != fVar30) || (NAN(DAT_14ca26800) || NAN(fVar30))) ||
     ((DAT_14ca26804 != fVar31 ||
      (((NAN(DAT_14ca26804) || NAN(fVar31) || (DAT_14ca26808 != fVar32)) ||
       (NAN(DAT_14ca26808) || NAN(fVar32))))))) {
LAB_142eb6f20:
    bVar22 = true;
    DAT_14ca26800 = fVar30;
    DAT_14ca26804 = fVar31;
    DAT_14ca26808 = fVar32;
    DAT_14ca2680c = fVar3;
  }
  else if ((DAT_14ca2680c != fVar3) || (NAN(DAT_14ca2680c) || NAN(fVar3))) goto LAB_142eb6f20;
  fVar30 = *(float *)(DAT_14ca26408 + 4);
  if (10.0 <= fVar30) {
    fVar30 = 10.0;
  }
  if (fVar30 <= -10.0) {
    fVar30 = -10.0;
  }
  fVar31 = *(float *)(DAT_14ca26420 + 4);
  if (10.0 <= fVar31) {
    fVar31 = 10.0;
  }
  if (fVar31 <= -10.0) {
    fVar31 = -10.0;
  }
  fVar32 = *(float *)(DAT_14ca26438 + 4);
  if (10.0 <= fVar32) {
    fVar32 = 10.0;
  }
  if (fVar32 <= -10.0) {
    fVar32 = -10.0;
  }
  fVar31 = (fVar31 * 4.0 + fVar30 * -3.0) - fVar32;
  fVar32 = (fVar32 - fVar30) - fVar31;
  if (((DAT_14ca269b0 != fVar32) || (NAN(DAT_14ca269b0) || NAN(fVar32))) ||
     ((DAT_14ca269b4 != fVar31 || (NAN(DAT_14ca269b4) || NAN(fVar31))))) {
LAB_142eb6fe0:
    bVar22 = true;
    DAT_14ca269b0 = fVar32;
    DAT_14ca269b4 = fVar31;
    DAT_14ca269b8 = fVar30;
  }
  else if ((DAT_14ca269b8 != fVar30) || (NAN(DAT_14ca269b8) || NAN(fVar30))) goto LAB_142eb6fe0;
  if (DAT_14ca2699c != (puVar29[0x37] == '\0')) {
    bVar22 = true;
    DAT_14ca2699c = (uint)(puVar29[0x37] == '\0');
  }
  iVar7 = (**(code **)(*DAT_14ca26448 + 0xb0))();
  if ((fVar33 != (float)iVar7) || (NAN(fVar33) || NAN((float)iVar7))) {
    iVar7 = (**(code **)(*DAT_14ca26448 + 0xb0))();
    DAT_14ca26960 = (float)iVar7;
    bVar22 = true;
  }
  uVar13 = local_140;
  fVar33 = *(float *)(puVar29 + 0x38);
  if ((DAT_14ca26964 != fVar33) || (NAN(DAT_14ca26964) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26964 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x3c);
  if ((DAT_14ca26968 != fVar33) || (NAN(DAT_14ca26968) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26968 = fVar33;
  }
  fVar33 = (float)*(double *)(puVar29 + 0x58);
  fVar30 = (float)*(double *)(puVar29 + 0x50);
  fVar31 = (float)*(double *)(puVar29 + 0x40);
  fVar32 = (float)*(double *)(puVar29 + 0x48);
  if (((((DAT_14ca26820 != fVar31) || (NAN(DAT_14ca26820) || NAN(fVar31))) ||
       (DAT_14ca26824 != fVar32)) ||
      ((NAN(DAT_14ca26824) || NAN(fVar32) || (DAT_14ca26828 != fVar30)))) ||
     (NAN(DAT_14ca26828) || NAN(fVar30))) {
LAB_142eb70fe:
    bVar22 = true;
    DAT_14ca26820 = fVar31;
    DAT_14ca26824 = fVar32;
    DAT_14ca26828 = fVar30;
    DAT_14ca2682c = fVar33;
  }
  else if ((DAT_14ca2682c != fVar33) || (NAN(DAT_14ca2682c) || NAN(fVar33))) goto LAB_142eb70fe;
  fVar33 = (float)*(double *)(puVar29 + 0x78);
  fVar30 = (float)*(double *)(puVar29 + 0x70);
  fVar31 = (float)*(double *)(puVar29 + 0x60);
  fVar32 = (float)*(double *)(puVar29 + 0x68);
  if ((((DAT_14ca26830 != fVar31) || (NAN(DAT_14ca26830) || NAN(fVar31))) ||
      (DAT_14ca26834 != fVar32)) ||
     (((NAN(DAT_14ca26834) || NAN(fVar32) || (DAT_14ca26838 != fVar30)) ||
      (NAN(DAT_14ca26838) || NAN(fVar30))))) {
LAB_142eb7181:
    bVar22 = true;
    DAT_14ca26830 = fVar31;
    DAT_14ca26834 = fVar32;
    DAT_14ca26838 = fVar30;
    DAT_14ca2683c = fVar33;
  }
  else if ((DAT_14ca2683c != fVar33) || (NAN(DAT_14ca2683c) || NAN(fVar33))) goto LAB_142eb7181;
  fVar33 = (float)*(double *)(puVar29 + 0x98);
  fVar30 = (float)*(double *)(puVar29 + 0x90);
  fVar31 = (float)*(double *)(puVar29 + 0x80);
  fVar32 = (float)*(double *)(puVar29 + 0x88);
  if ((((DAT_14ca26840 != fVar31) || (NAN(DAT_14ca26840) || NAN(fVar31))) ||
      (DAT_14ca26844 != fVar32)) ||
     (((NAN(DAT_14ca26844) || NAN(fVar32) || (DAT_14ca26848 != fVar30)) ||
      (NAN(DAT_14ca26848) || NAN(fVar30))))) {
LAB_142eb7210:
    bVar22 = true;
    DAT_14ca26840 = fVar31;
    DAT_14ca26844 = fVar32;
    DAT_14ca26848 = fVar30;
    DAT_14ca2684c = fVar33;
  }
  else if ((DAT_14ca2684c != fVar33) || (NAN(DAT_14ca2684c) || NAN(fVar33))) goto LAB_142eb7210;
  fVar33 = (float)*(double *)(puVar29 + 0xb8);
  fVar30 = (float)*(double *)(puVar29 + 0xb0);
  fVar31 = (float)*(double *)(puVar29 + 0xa0);
  fVar32 = (float)*(double *)(puVar29 + 0xa8);
  if (((((DAT_14ca26850 != fVar31) || (NAN(DAT_14ca26850) || NAN(fVar31))) ||
       (DAT_14ca26854 != fVar32)) ||
      ((NAN(DAT_14ca26854) || NAN(fVar32) || (DAT_14ca26858 != fVar30)))) ||
     (NAN(DAT_14ca26858) || NAN(fVar30))) {
LAB_142eb729f:
    bVar22 = true;
    DAT_14ca26850 = fVar31;
    DAT_14ca26854 = fVar32;
    DAT_14ca26858 = fVar30;
    DAT_14ca2685c = fVar33;
  }
  else if ((DAT_14ca2685c != fVar33) || (NAN(DAT_14ca2685c) || NAN(fVar33))) goto LAB_142eb729f;
  fVar33 = (float)*(double *)(puVar29 + 0xd8);
  fVar30 = (float)*(double *)(puVar29 + 0xd0);
  fVar31 = (float)*(double *)(puVar29 + 0xc0);
  fVar32 = (float)*(double *)(puVar29 + 200);
  if ((((DAT_14ca26860 != fVar31) || (NAN(DAT_14ca26860) || NAN(fVar31))) ||
      (DAT_14ca26864 != fVar32)) ||
     (((NAN(DAT_14ca26864) || NAN(fVar32) || (DAT_14ca26868 != fVar30)) ||
      (NAN(DAT_14ca26868) || NAN(fVar30))))) {
LAB_142eb732e:
    bVar22 = true;
    DAT_14ca26860 = fVar31;
    DAT_14ca26864 = fVar32;
    DAT_14ca26868 = fVar30;
    DAT_14ca2686c = fVar33;
  }
  else if ((DAT_14ca2686c != fVar33) || (NAN(DAT_14ca2686c) || NAN(fVar33))) goto LAB_142eb732e;
  fVar33 = (float)*(double *)(puVar29 + 0xf8);
  fVar30 = (float)*(double *)(puVar29 + 0xf0);
  fVar31 = (float)*(double *)(puVar29 + 0xe0);
  fVar32 = (float)*(double *)(puVar29 + 0xe8);
  if ((((DAT_14ca26870 != fVar31) || (NAN(DAT_14ca26870) || NAN(fVar31))) ||
      (DAT_14ca26874 != fVar32)) ||
     (((NAN(DAT_14ca26874) || NAN(fVar32) || (DAT_14ca26878 != fVar30)) ||
      (NAN(DAT_14ca26878) || NAN(fVar30))))) {
LAB_142eb73bd:
    bVar22 = true;
    DAT_14ca26870 = fVar31;
    DAT_14ca26874 = fVar32;
    DAT_14ca26878 = fVar30;
    DAT_14ca2687c = fVar33;
  }
  else if ((DAT_14ca2687c != fVar33) || (NAN(DAT_14ca2687c) || NAN(fVar33))) goto LAB_142eb73bd;
  fVar33 = (float)*(double *)(puVar29 + 0x118);
  fVar30 = (float)*(double *)(puVar29 + 0x110);
  fVar31 = (float)*(double *)(puVar29 + 0x100);
  fVar32 = (float)*(double *)(puVar29 + 0x108);
  if (((((DAT_14ca26880 != fVar31) || (NAN(DAT_14ca26880) || NAN(fVar31))) ||
       (DAT_14ca26884 != fVar32)) ||
      ((NAN(DAT_14ca26884) || NAN(fVar32) || (DAT_14ca26888 != fVar30)))) ||
     (NAN(DAT_14ca26888) || NAN(fVar30))) {
LAB_142eb744c:
    bVar22 = true;
    DAT_14ca26880 = fVar31;
    DAT_14ca26884 = fVar32;
    DAT_14ca26888 = fVar30;
    DAT_14ca2688c = fVar33;
  }
  else if ((DAT_14ca2688c != fVar33) || (NAN(DAT_14ca2688c) || NAN(fVar33))) goto LAB_142eb744c;
  fVar33 = (float)*(double *)(puVar29 + 0x138);
  fVar30 = (float)*(double *)(puVar29 + 0x130);
  fVar31 = (float)*(double *)(puVar29 + 0x120);
  fVar32 = (float)*(double *)(puVar29 + 0x128);
  if ((((DAT_14ca26890 != fVar31) || (NAN(DAT_14ca26890) || NAN(fVar31))) ||
      (DAT_14ca26894 != fVar32)) ||
     (((NAN(DAT_14ca26894) || NAN(fVar32) || (DAT_14ca26898 != fVar30)) ||
      (NAN(DAT_14ca26898) || NAN(fVar30))))) {
LAB_142eb74db:
    bVar22 = true;
    DAT_14ca26890 = fVar31;
    DAT_14ca26894 = fVar32;
    DAT_14ca26898 = fVar30;
    DAT_14ca2689c = fVar33;
  }
  else if ((DAT_14ca2689c != fVar33) || (NAN(DAT_14ca2689c) || NAN(fVar33))) goto LAB_142eb74db;
  fVar33 = (float)*(double *)(puVar29 + 0x158);
  fVar30 = (float)*(double *)(puVar29 + 0x150);
  fVar31 = (float)*(double *)(puVar29 + 0x140);
  fVar32 = (float)*(double *)(puVar29 + 0x148);
  if ((((DAT_14ca268a0 != fVar31) || (NAN(DAT_14ca268a0) || NAN(fVar31))) ||
      (DAT_14ca268a4 != fVar32)) ||
     (((NAN(DAT_14ca268a4) || NAN(fVar32) || (DAT_14ca268a8 != fVar30)) ||
      (NAN(DAT_14ca268a8) || NAN(fVar30))))) {
LAB_142eb756a:
    bVar22 = true;
    DAT_14ca268a0 = fVar31;
    DAT_14ca268a4 = fVar32;
    DAT_14ca268a8 = fVar30;
    DAT_14ca268ac = fVar33;
  }
  else if ((DAT_14ca268ac != fVar33) || (NAN(DAT_14ca268ac) || NAN(fVar33))) goto LAB_142eb756a;
  fVar33 = (float)*(double *)(puVar29 + 0x178);
  fVar30 = (float)*(double *)(puVar29 + 0x170);
  fVar31 = (float)*(double *)(puVar29 + 0x160);
  fVar32 = (float)*(double *)(puVar29 + 0x168);
  if (((((DAT_14ca268b0 != fVar31) || (NAN(DAT_14ca268b0) || NAN(fVar31))) ||
       (DAT_14ca268b4 != fVar32)) ||
      ((NAN(DAT_14ca268b4) || NAN(fVar32) || (DAT_14ca268b8 != fVar30)))) ||
     (NAN(DAT_14ca268b8) || NAN(fVar30))) {
LAB_142eb75f9:
    bVar22 = true;
    DAT_14ca268b0 = fVar31;
    DAT_14ca268b4 = fVar32;
    DAT_14ca268b8 = fVar30;
    DAT_14ca268bc = fVar33;
  }
  else if ((DAT_14ca268bc != fVar33) || (NAN(DAT_14ca268bc) || NAN(fVar33))) goto LAB_142eb75f9;
  fVar33 = (float)*(double *)(puVar29 + 0x198);
  fVar30 = (float)*(double *)(puVar29 + 400);
  fVar31 = (float)*(double *)(puVar29 + 0x180);
  fVar32 = (float)*(double *)(puVar29 + 0x188);
  if ((((DAT_14ca268c0 != fVar31) || (NAN(DAT_14ca268c0) || NAN(fVar31))) ||
      (DAT_14ca268c4 != fVar32)) ||
     (((NAN(DAT_14ca268c4) || NAN(fVar32) || (DAT_14ca268c8 != fVar30)) ||
      (NAN(DAT_14ca268c8) || NAN(fVar30))))) {
LAB_142eb7688:
    bVar22 = true;
    DAT_14ca268c0 = fVar31;
    DAT_14ca268c4 = fVar32;
    DAT_14ca268c8 = fVar30;
    DAT_14ca268cc = fVar33;
  }
  else if ((DAT_14ca268cc != fVar33) || (NAN(DAT_14ca268cc) || NAN(fVar33))) goto LAB_142eb7688;
  fVar33 = (float)*(double *)(puVar29 + 0x1b8);
  fVar30 = (float)*(double *)(puVar29 + 0x1b0);
  fVar31 = (float)*(double *)(puVar29 + 0x1a0);
  fVar32 = (float)*(double *)(puVar29 + 0x1a8);
  if ((((DAT_14ca268d0 != fVar31) || (NAN(DAT_14ca268d0) || NAN(fVar31))) ||
      (DAT_14ca268d4 != fVar32)) ||
     (((NAN(DAT_14ca268d4) || NAN(fVar32) || (DAT_14ca268d8 != fVar30)) ||
      (NAN(DAT_14ca268d8) || NAN(fVar30))))) {
LAB_142eb7717:
    bVar22 = true;
    DAT_14ca268d0 = fVar31;
    DAT_14ca268d4 = fVar32;
    DAT_14ca268d8 = fVar30;
    DAT_14ca268dc = fVar33;
  }
  else if ((DAT_14ca268dc != fVar33) || (NAN(DAT_14ca268dc) || NAN(fVar33))) goto LAB_142eb7717;
  fVar33 = (float)*(double *)(puVar29 + 0x1d8);
  fVar30 = (float)*(double *)(puVar29 + 0x1d0);
  fVar31 = (float)*(double *)(puVar29 + 0x1c0);
  fVar32 = (float)*(double *)(puVar29 + 0x1c8);
  if (((((DAT_14ca268e0 != fVar31) || (NAN(DAT_14ca268e0) || NAN(fVar31))) ||
       (DAT_14ca268e4 != fVar32)) ||
      ((NAN(DAT_14ca268e4) || NAN(fVar32) || (DAT_14ca268e8 != fVar30)))) ||
     (NAN(DAT_14ca268e8) || NAN(fVar30))) {
LAB_142eb77a6:
    bVar22 = true;
    DAT_14ca268e0 = fVar31;
    DAT_14ca268e4 = fVar32;
    DAT_14ca268e8 = fVar30;
    DAT_14ca268ec = fVar33;
  }
  else if ((DAT_14ca268ec != fVar33) || (NAN(DAT_14ca268ec) || NAN(fVar33))) goto LAB_142eb77a6;
  fVar33 = (float)*(double *)(puVar29 + 0x1f8);
  fVar30 = (float)*(double *)(puVar29 + 0x1f0);
  fVar31 = (float)*(double *)(puVar29 + 0x1e0);
  fVar32 = (float)*(double *)(puVar29 + 0x1e8);
  if ((((DAT_14ca268f0 != fVar31) || (NAN(DAT_14ca268f0) || NAN(fVar31))) ||
      (DAT_14ca268f4 != fVar32)) ||
     (((NAN(DAT_14ca268f4) || NAN(fVar32) || (DAT_14ca268f8 != fVar30)) ||
      (NAN(DAT_14ca268f8) || NAN(fVar30))))) {
LAB_142eb7835:
    bVar22 = true;
    DAT_14ca268f0 = fVar31;
    DAT_14ca268f4 = fVar32;
    DAT_14ca268f8 = fVar30;
    DAT_14ca268fc = fVar33;
  }
  else if ((DAT_14ca268fc != fVar33) || (NAN(DAT_14ca268fc) || NAN(fVar33))) goto LAB_142eb7835;
  fVar33 = (float)*(double *)(puVar29 + 0x218);
  fVar30 = (float)*(double *)(puVar29 + 0x210);
  fVar31 = (float)*(double *)(puVar29 + 0x200);
  fVar32 = (float)*(double *)(puVar29 + 0x208);
  if ((((DAT_14ca26900 != fVar31) || (NAN(DAT_14ca26900) || NAN(fVar31))) ||
      (DAT_14ca26904 != fVar32)) ||
     (((NAN(DAT_14ca26904) || NAN(fVar32) || (DAT_14ca26908 != fVar30)) ||
      (NAN(DAT_14ca26908) || NAN(fVar30))))) {
LAB_142eb78c4:
    bVar22 = true;
    DAT_14ca26900 = fVar31;
    DAT_14ca26904 = fVar32;
    DAT_14ca26908 = fVar30;
    DAT_14ca2690c = fVar33;
  }
  else if ((DAT_14ca2690c != fVar33) || (NAN(DAT_14ca2690c) || NAN(fVar33))) goto LAB_142eb78c4;
  fVar33 = (float)*(double *)(puVar29 + 0x238);
  fVar30 = (float)*(double *)(puVar29 + 0x230);
  fVar31 = (float)*(double *)(puVar29 + 0x220);
  fVar32 = (float)*(double *)(puVar29 + 0x228);
  if (((((DAT_14ca26910 != fVar31) || (NAN(DAT_14ca26910) || NAN(fVar31))) ||
       (DAT_14ca26914 != fVar32)) ||
      ((NAN(DAT_14ca26914) || NAN(fVar32) || (DAT_14ca26918 != fVar30)))) ||
     (NAN(DAT_14ca26918) || NAN(fVar30))) {
LAB_142eb7953:
    bVar22 = true;
    DAT_14ca26910 = fVar31;
    DAT_14ca26914 = fVar32;
    DAT_14ca26918 = fVar30;
    DAT_14ca2691c = fVar33;
  }
  else if ((DAT_14ca2691c != fVar33) || (NAN(DAT_14ca2691c) || NAN(fVar33))) goto LAB_142eb7953;
  fVar33 = (float)*(double *)(puVar29 + 600);
  fVar30 = (float)*(double *)(puVar29 + 0x250);
  fVar31 = (float)*(double *)(puVar29 + 0x240);
  fVar32 = (float)*(double *)(puVar29 + 0x248);
  if ((((DAT_14ca26920 != fVar31) || (NAN(DAT_14ca26920) || NAN(fVar31))) ||
      (DAT_14ca26924 != fVar32)) ||
     (((NAN(DAT_14ca26924) || NAN(fVar32) || (DAT_14ca26928 != fVar30)) ||
      (NAN(DAT_14ca26928) || NAN(fVar30))))) {
LAB_142eb79e2:
    bVar22 = true;
    DAT_14ca26920 = fVar31;
    DAT_14ca26924 = fVar32;
    DAT_14ca26928 = fVar30;
    DAT_14ca2692c = fVar33;
  }
  else if ((DAT_14ca2692c != fVar33) || (NAN(DAT_14ca2692c) || NAN(fVar33))) goto LAB_142eb79e2;
  fVar33 = (float)*(double *)(puVar29 + 0x278);
  fVar30 = (float)*(double *)(puVar29 + 0x270);
  fVar31 = (float)*(double *)(puVar29 + 0x260);
  fVar32 = (float)*(double *)(puVar29 + 0x268);
  if ((((DAT_14ca26930 != fVar31) || (NAN(DAT_14ca26930) || NAN(fVar31))) ||
      (DAT_14ca26934 != fVar32)) ||
     (((NAN(DAT_14ca26934) || NAN(fVar32) || (DAT_14ca26938 != fVar30)) ||
      (NAN(DAT_14ca26938) || NAN(fVar30))))) {
LAB_142eb7a71:
    bVar22 = true;
    DAT_14ca26930 = fVar31;
    DAT_14ca26934 = fVar32;
    DAT_14ca26938 = fVar30;
    DAT_14ca2693c = fVar33;
  }
  else if ((DAT_14ca2693c != fVar33) || (NAN(DAT_14ca2693c) || NAN(fVar33))) goto LAB_142eb7a71;
  fVar33 = (float)*(double *)(puVar29 + 0x298);
  fVar30 = (float)*(double *)(puVar29 + 0x290);
  fVar31 = (float)*(double *)(puVar29 + 0x280);
  fVar32 = (float)*(double *)(puVar29 + 0x288);
  if (((((DAT_14ca26940 != fVar31) || (NAN(DAT_14ca26940) || NAN(fVar31))) ||
       (DAT_14ca26944 != fVar32)) ||
      ((NAN(DAT_14ca26944) || NAN(fVar32) || (DAT_14ca26948 != fVar30)))) ||
     (NAN(DAT_14ca26948) || NAN(fVar30))) {
LAB_142eb7b00:
    bVar22 = true;
    DAT_14ca26940 = fVar31;
    DAT_14ca26944 = fVar32;
    DAT_14ca26948 = fVar30;
    DAT_14ca2694c = fVar33;
  }
  else if ((DAT_14ca2694c != fVar33) || (NAN(DAT_14ca2694c) || NAN(fVar33))) goto LAB_142eb7b00;
  fVar33 = (float)*(double *)(puVar29 + 0x2b8);
  fVar30 = (float)*(double *)(puVar29 + 0x2b0);
  fVar31 = (float)*(double *)(puVar29 + 0x2a0);
  fVar32 = (float)*(double *)(puVar29 + 0x2a8);
  if ((((DAT_14ca26950 != fVar31) || (NAN(DAT_14ca26950) || NAN(fVar31))) ||
      (DAT_14ca26954 != fVar32)) ||
     (((NAN(DAT_14ca26954) || NAN(fVar32) || (DAT_14ca26958 != fVar30)) ||
      (NAN(DAT_14ca26958) || NAN(fVar30))))) {
LAB_142eb7b8f:
    bVar22 = true;
    DAT_14ca26950 = fVar31;
    DAT_14ca26954 = fVar32;
    DAT_14ca26958 = fVar30;
    DAT_14ca2695c = fVar33;
  }
  else if ((DAT_14ca2695c != fVar33) || (NAN(DAT_14ca2695c) || NAN(fVar33))) goto LAB_142eb7b8f;
  fVar33 = *(float *)(puVar29 + 0x2c8);
  if ((DAT_14ca2696c != fVar33) || (NAN(DAT_14ca2696c) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca2696c = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2c0);
  if ((DAT_14ca26970 != fVar33) || (NAN(DAT_14ca26970) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26970 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2c4);
  if ((DAT_14ca26974 != fVar33) || (NAN(DAT_14ca26974) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26974 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2cc);
  if ((DAT_14ca26978 != fVar33) || (NAN(DAT_14ca26978) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26978 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2d0);
  if ((DAT_14ca2697c != fVar33) || (NAN(DAT_14ca2697c) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca2697c = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2d4);
  if ((DAT_14ca26980 != fVar33) || (NAN(DAT_14ca26980) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26980 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2d8);
  if ((DAT_14ca26984 != fVar33) || (NAN(DAT_14ca26984) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26984 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2dc);
  if ((DAT_14ca26988 != fVar33) || (NAN(DAT_14ca26988) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26988 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2e0);
  if ((DAT_14ca2698c != fVar33) || (NAN(DAT_14ca2698c) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca2698c = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2e4);
  if ((DAT_14ca26990 != fVar33) || (NAN(DAT_14ca26990) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26990 = fVar33;
  }
  fVar33 = *(float *)(puVar29 + 0x2e8);
  if ((DAT_14ca26994 != fVar33) || (NAN(DAT_14ca26994) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca26994 = fVar33;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca29760) && (FUN_144b3d300(&DAT_14ca29760), DAT_14ca29760 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.MaxGameNits",1);
    if (plVar10 == (longlong *)0x0) {
      DAT_14ca29758 = 0;
    }
    else {
      DAT_14ca29758 = (**(code **)(*plVar10 + 0x70))(plVar10);
    }
    _Init_thread_footer(&DAT_14ca29760);
    lVar23 = local_138;
    uVar13 = local_140;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca29770) && (FUN_144b3d300(&DAT_14ca29770), DAT_14ca29770 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.MaxTvNits",1);
    if (plVar10 == (longlong *)0x0) {
      DAT_14ca29768 = 0;
    }
    else {
      DAT_14ca29768 = (**(code **)(*plVar10 + 0x70))(plVar10);
    }
    _Init_thread_footer(&DAT_14ca29770);
    lVar23 = local_138;
    uVar13 = local_140;
  }
  fVar33 = *(float *)(DAT_14ca29758 + 4);
  if ((DAT_14ca269a0 != fVar33) || (NAN(DAT_14ca269a0) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca269a0 = fVar33;
  }
  fVar33 = *(float *)(DAT_14ca29768 + 4);
  if ((DAT_14ca269a4 != fVar33) || (NAN(DAT_14ca269a4) || NAN(fVar33))) {
    bVar22 = true;
    DAT_14ca269a4 = fVar33;
  }
  if (DAT_14ca269a8 != *(byte *)(param_2 + 0x23ff)) {
    bVar22 = true;
    DAT_14ca269a8 = (uint)*(byte *)(param_2 + 0x23ff);
  }
  FUN_14019a1f8(&local_b8);
  iVar7 = DAT_14ca26720;
  if ((DAT_14ca269c0 != (float)local_b8) || (NAN(DAT_14ca269c0) || NAN((float)local_b8))) {
LAB_142eb7e32:
    DAT_14ca269c8 = (float)uStack_b0;
    _DAT_14ca269c0 = local_b8;
    bVar22 = true;
  }
  else {
    if ((DAT_14ca269c4 != local_b8._4_4_) || (NAN(DAT_14ca269c4) || NAN(local_b8._4_4_)))
    goto LAB_142eb7e32;
    if ((DAT_14ca269c8 != (float)uStack_b0) || (NAN(DAT_14ca269c8) || NAN((float)uStack_b0)))
    goto LAB_142eb7e32;
  }
  if (DAT_14ca269cc != uStack_b0._4_4_) {
    DAT_14ca269cc = uStack_b0._4_4_;
    bVar22 = true;
  }
  if (DAT_14ca269d0 != (int)uStack_a8) {
    DAT_14ca269d0 = (int)uStack_a8;
    bVar22 = true;
  }
  if ((DAT_14ca269d4 != uStack_a8._4_4_) || (NAN(DAT_14ca269d4) || NAN(uStack_a8._4_4_))) {
    DAT_14ca269d4 = uStack_a8._4_4_;
    bVar22 = true;
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x58))();
  }
  if (iVar7 != iVar8) {
    iVar7 = 0;
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      iVar7 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x58))();
    }
    bVar22 = true;
    DAT_14ca26720 = iVar7;
  }
  if (DAT_14ca26724 != *(short *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2)) {
    bVar22 = true;
    DAT_14ca26724 = *(short *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2);
  }
  if (DAT_14ca26b30 != *(char *)(param_2 + 0x13820)) {
    bVar22 = true;
    DAT_14ca26b30 = *(char *)(param_2 + 0x13820);
  }
  bVar26 = (byte)local_148;
  if (DAT_14cb05390 == (undefined8 *)0x0) {
LAB_142eb8079:
    iVar7 = DAT_14ca26b20;
    if ((uVar13 == 0) || (bVar22)) goto LAB_142eb81e0;
    if (*(int *)(DAT_14ca26480 + 4) == 0) goto LAB_142eb8680;
  }
  else {
    puVar14 = &DAT_14ca269e0;
    lVar19 = 0;
    puVar17 = DAT_14cb05390;
    do {
      lVar18 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar17 + lVar18 * 4);
        if (((float)puVar14[lVar18] != *pfVar2) || (NAN((float)puVar14[lVar18]) || NAN(*pfVar2))) {
          _DAT_14ca269e0 = *DAT_14cb05390;
          uRam000000014ca269e8 = DAT_14cb05390[1];
          _DAT_14ca269f0 = DAT_14cb05390[2];
          uRam000000014ca269f8 = DAT_14cb05390[3];
          _DAT_14ca26a00 = DAT_14cb05390[4];
          uRam000000014ca26a08 = DAT_14cb05390[5];
          _DAT_14ca26a10 = DAT_14cb05390[6];
          uRam000000014ca26a18 = DAT_14cb05390[7];
          bVar22 = true;
          goto LAB_142eb7f4a;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
      lVar19 = lVar19 + 1;
      puVar17 = puVar17 + 2;
      puVar14 = puVar14 + 4;
    } while (lVar19 != 4);
LAB_142eb7f4a:
    puVar14 = &DAT_14ca26a20;
    lVar19 = 0;
    puVar17 = DAT_14cb05390 + 8;
    do {
      lVar18 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar17 + lVar18 * 4);
        if (((float)puVar14[lVar18] != *pfVar2) || (NAN((float)puVar14[lVar18]) || NAN(*pfVar2))) {
          _DAT_14ca26a20 = DAT_14cb05390[8];
          uRam000000014ca26a28 = DAT_14cb05390[9];
          _DAT_14ca26a30 = DAT_14cb05390[10];
          uRam000000014ca26a38 = DAT_14cb05390[0xb];
          _DAT_14ca26a40 = DAT_14cb05390[0xc];
          uRam000000014ca26a48 = DAT_14cb05390[0xd];
          _DAT_14ca26a50 = DAT_14cb05390[0xe];
          uRam000000014ca26a58 = DAT_14cb05390[0xf];
          bVar22 = true;
          goto LAB_142eb7f8f;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
      lVar19 = lVar19 + 1;
      puVar17 = puVar17 + 2;
      puVar14 = puVar14 + 4;
    } while (lVar19 != 4);
LAB_142eb7f8f:
    puVar14 = &DAT_14ca26a60;
    lVar19 = 0;
    puVar17 = DAT_14cb05390 + 0x10;
    do {
      lVar18 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar17 + lVar18 * 4);
        if (((float)puVar14[lVar18] != *pfVar2) || (NAN((float)puVar14[lVar18]) || NAN(*pfVar2))) {
          _DAT_14ca26a60 = DAT_14cb05390[0x10];
          uRam000000014ca26a68 = DAT_14cb05390[0x11];
          _DAT_14ca26a70 = DAT_14cb05390[0x12];
          uRam000000014ca26a78 = DAT_14cb05390[0x13];
          _DAT_14ca26a80 = DAT_14cb05390[0x14];
          uRam000000014ca26a88 = DAT_14cb05390[0x15];
          _DAT_14ca26a90 = DAT_14cb05390[0x16];
          uRam000000014ca26a98 = DAT_14cb05390[0x17];
          bVar22 = true;
          goto LAB_142eb7fd7;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
      lVar19 = lVar19 + 1;
      puVar17 = puVar17 + 2;
      puVar14 = puVar14 + 4;
    } while (lVar19 != 4);
LAB_142eb7fd7:
    puVar14 = &DAT_14ca26aa0;
    lVar19 = 0;
    puVar17 = DAT_14cb05390 + 0x18;
    do {
      lVar18 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar17 + lVar18 * 4);
        if (((float)puVar14[lVar18] != *pfVar2) || (NAN((float)puVar14[lVar18]) || NAN(*pfVar2))) {
          _DAT_14ca26aa0 = DAT_14cb05390[0x18];
          uRam000000014ca26aa8 = DAT_14cb05390[0x19];
          _DAT_14ca26ab0 = DAT_14cb05390[0x1a];
          uRam000000014ca26ab8 = DAT_14cb05390[0x1b];
          _DAT_14ca26ac0 = DAT_14cb05390[0x1c];
          uRam000000014ca26ac8 = DAT_14cb05390[0x1d];
          _DAT_14ca26ad0 = DAT_14cb05390[0x1e];
          uRam000000014ca26ad8 = DAT_14cb05390[0x1f];
          bVar22 = true;
          goto LAB_142eb801f;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
      lVar19 = lVar19 + 1;
      puVar17 = puVar17 + 2;
      puVar14 = puVar14 + 4;
    } while (lVar19 != 4);
LAB_142eb801f:
    puVar14 = &DAT_14ca26ae0;
    lVar19 = 0;
    puVar17 = DAT_14cb05390 + 0x20;
    do {
      lVar18 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar17 + lVar18 * 4);
        if (((float)puVar14[lVar18] != *pfVar2) || (NAN((float)puVar14[lVar18]) || NAN(*pfVar2))) {
          DAT_14ca26ae0 = *(undefined4 *)(DAT_14cb05390 + 0x20);
          DAT_14ca26ae4 = *(undefined4 *)((longlong)DAT_14cb05390 + 0x104);
          uRam000000014ca26ae8 = *(undefined4 *)(DAT_14cb05390 + 0x21);
          uRam000000014ca26aec = *(undefined4 *)((longlong)DAT_14cb05390 + 0x10c);
          _DAT_14ca26af0 = DAT_14cb05390[0x22];
          uRam000000014ca26af8 = DAT_14cb05390[0x23];
          _DAT_14ca26b00 = DAT_14cb05390[0x24];
          uRam000000014ca26b08 = DAT_14cb05390[0x25];
          _DAT_14ca26b10 = DAT_14cb05390[0x26];
          uRam000000014ca26b18 = DAT_14cb05390[0x27];
          bVar22 = true;
          goto LAB_142eb8067;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
      lVar19 = lVar19 + 1;
      puVar17 = puVar17 + 2;
      puVar14 = puVar14 + 4;
    } while (lVar19 != 4);
LAB_142eb8067:
    iVar7 = *(int *)(DAT_14cb05390 + 0x28);
    if (DAT_14ca26b20 == *(int *)(DAT_14cb05390 + 0x28)) goto LAB_142eb8079;
LAB_142eb81e0:
    DAT_14ca26b20 = iVar7;
    if (uVar13 == 0) {
      uVar11 = 0x12;
      if ((DAT_14c873798 & 1) == 0) {
        uVar11 = 0x25;
      }
      local_85 = 10;
      if (uVar24 != 8) {
        local_85 = uVar11;
      }
      puVar21 = (undefined1 *)0x9;
      if ((char)local_128 != '\0') {
        puVar21 = &DAT_00020008;
      }
      iVar7 = local_144;
      if (bVar26 != 0) {
        iVar7 = 1;
      }
      local_b8 = (longlong *)((ulonglong)puVar21 | DAT_14ca4ae80);
      local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      bVar12 = (short)local_144 != 0 & bVar26;
      iVar8 = 1;
      if (bVar12 != 0) {
        iVar8 = local_144;
      }
      local_86 = bVar12 * '\x02';
      local_84 = 0xff00;
      local_8c = (undefined2)iVar8;
      local_8a = 0x1010001;
      local_94 = iVar7 * local_144;
      if (DAT_14ca84e40 <= iVar7 * local_144) {
        local_94 = DAT_14ca84e40;
      }
      uStack_b0 = CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
      uStack_a8 = (undefined *)CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
      uStack_a0 = DAT_14ca83a68;
      if (local_94 < 2) {
        local_94 = 1;
      }
      local_98 = 0;
      local_90 = DAT_14ca84e40;
      if (local_144 < DAT_14ca84e40) {
        local_90 = local_144;
      }
      if (local_90 < 2) {
        local_90 = 1;
      }
      uVar13 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar9 = uVar13 + 0x120;
      if (*(ulonglong *)(lVar23 + 0x78) < uVar9) {
        FUN_140023dd8((longlong *)(lVar23 + 0x70),0x128);
        uVar13 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar9 = uVar13 + 0x120;
      }
      *(ulonglong *)(lVar23 + 0x70) = uVar9;
      FUN_1456bbb8c(uVar13,L"CombineLUT",&local_b8,0);
      iVar7 = *(int *)(lVar23 + 0x180);
      *(uint *)(lVar23 + 0x180) = iVar7 + 1U;
      if (*(uint *)(lVar23 + 0x184) < iVar7 + 1U) {
        FUN_14472c0f6(lVar23 + 0x178,iVar7);
      }
      *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar7 * 8) = uVar13;
      *(int *)(uVar13 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
    }
  }
  iVar7 = 1;
  if (bVar26 == 0) {
    iVar7 = local_144;
  }
  puVar1 = (ulonglong *)(lVar23 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  local_140 = uVar13;
  local_130 = uVar16;
  if ((char)local_128 == '\0') {
    puVar25 = puVar17 + 0x78;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
      FUN_140023dd8(puVar1,0x3d0);
      puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar25 = puVar17 + 0x78;
    }
    *puVar1 = (ulonglong)puVar25;
    *puVar17 = &PTR_FUN_14a2bab38;
    plVar10 = puVar17 + 2;
    FUN_142edbfb2(plVar10);
    lVar19 = 0x2c0;
    do {
      *(undefined8 *)((longlong)puVar17 + lVar19) = 0;
      ((undefined8 *)((longlong)puVar17 + lVar19))[1] = 0;
      *(undefined4 *)((longlong)puVar17 + lVar19 + 0x10) = 0xffff0000;
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0x380);
    uVar24 = 0;
    *(undefined4 *)((longlong)puVar17 + 0x394) = 0;
    puVar17[0x70] = 0;
    puVar17[0x71] = 0;
    *(undefined2 *)(puVar17 + 0x72) = 0;
    *(undefined4 *)(puVar17 + 0x73) = 0xffffffff;
    *(undefined4 *)((longlong)puVar17 + 0x39c) = 0xffffffff;
    *(undefined4 *)(puVar17 + 0x74) = 0xffffffff;
    *(undefined4 *)((longlong)puVar17 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(puVar17 + 0x75) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x3ac) = 0;
    puVar17[0x76] = 0;
    iVar7 = *(int *)(lVar23 + 0xa0);
    *(uint *)(lVar23 + 0xa0) = iVar7 + 1U;
    if (*(uint *)(lVar23 + 0xa4) < iVar7 + 1U) {
      FUN_1448cfae8((longlong *)(lVar23 + 0x98),iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar7 * 8) = puVar17;
    memcpy(plVar10,&DAT_14ca26730,0x2b0);
    puVar17[0x58] = local_140;
    puVar17[0x59] = 0;
    *(undefined4 *)(puVar17 + 0x5a) = 0xffff0000;
    if (ABS(*(float *)((longlong)puVar17 + 0x244) + -6500.0) <= 1e-08) {
      uVar24 = (uint)(ABS(*(float *)(puVar17 + 0x49)) <= 1e-08);
    }
    iVar7 = *(int *)((longlong)puVar17 + 0x2ac);
    uVar4 = *(undefined8 *)(param_2 + 0x13818);
    iVar8 = (int)local_130;
    FUN_14155e80e();
    FUN_1448e935e(uVar4,&local_b8,&DAT_14ca26538,iVar8 + (uVar24 + (uint)(iVar7 == 0) * 2) * 5 + -1)
    ;
    FUN_14155e80e();
    lVar19 = uStack_b0;
    plVar6 = local_b8;
    FUN_14155e930();
    FUN_140069376(lVar23);
    puVar25 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar25 + 0x3c;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar17) {
      FUN_140023dd8(puVar1,0x1e8);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar25 + 0x3c;
    }
    *puVar1 = (ulonglong)puVar17;
    uStack_b0 = DAT_14ca28cb0;
    if (DAT_14ca28cb0 != 0) {
      LOCK();
      *(int *)(DAT_14ca28cb0 + 8) = *(int *)(DAT_14ca28cb0 + 8) + 1;
      UNLOCK();
    }
    uStack_a8 = &DAT_14ca28c68;
    local_158 = (int *)CONCAT71(local_158._1_7_,2);
    local_b8 = plVar10;
    FUN_140068f1a(puVar25,&local_119,&local_b8,1);
    uVar13 = local_140;
    *puVar25 = &PTR_FUN_14a2bab40;
    puVar25[0x37] = param_2;
    puVar25[0x38] = plVar6;
    puVar25[0x39] = lVar19;
    puVar25[0x3a] = plVar10;
    *(char *)(puVar25 + 0x3b) = (char)local_148;
    *(undefined2 *)((longlong)puVar25 + 0x1d9) = local_10b;
    *(undefined1 *)((longlong)puVar25 + 0x1db) = local_109;
    *(int *)((longlong)puVar25 + 0x1dc) = local_144;
    iVar7 = *(int *)(lVar23 + 0x170);
    *(uint *)(lVar23 + 0x170) = iVar7 + 1U;
    if (*(uint *)(lVar23 + 0x174) < iVar7 + 1U) {
      FUN_14470e57a(lVar23 + 0x168,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar7 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
    FUN_140069100(lVar23,puVar25);
  }
  else {
    puVar25 = puVar17 + 0x5a;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
      FUN_140023dd8(puVar1,0x2e0);
      puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar25 = puVar17 + 0x5a;
    }
    iVar7 = iVar7 * local_144;
    *(undefined8 **)(lVar23 + 0x70) = puVar25;
    *puVar17 = &PTR_FUN_14a2bab18;
    puVar25 = puVar17 + 2;
    FUN_142edbfb2(puVar25);
    puVar17[0x59] = 0;
    iVar8 = *(int *)(lVar23 + 0xa0);
    *(uint *)(lVar23 + 0xa0) = iVar8 + 1U;
    if (*(uint *)(lVar23 + 0xa4) < iVar8 + 1U) {
      FUN_1448cfae8(lVar23 + 0x98,iVar8);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar8 * 8) = puVar17;
    local_128 = puVar25;
    memcpy(puVar25,&DAT_14ca26730,0x2b0);
    uVar16 = local_140;
    *(float *)(puVar17 + 0x58) = 1.0 / (float)iVar7;
    *(float *)((longlong)puVar17 + 0x2c4) = 1.0 / (float)local_144;
    uVar11 = *(undefined1 *)(local_140 + 0x94);
    puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar28 + 9;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar25) {
      FUN_140023dd8(puVar1,0x50);
      puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar25 = puVar28 + 9;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar25;
    puVar28[1] = *(undefined8 *)(uVar16 + 8);
    puVar28[2] = 0;
    uVar24 = 0;
    *(undefined1 *)(puVar28 + 3) = 0;
    *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar28 + 5) = 0;
    *puVar28 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar28 + 6) = uVar11;
    *(undefined1 *)(puVar28 + 7) = 0;
    *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
    puVar28[8] = uVar16;
    iVar8 = *(int *)(lVar23 + 0x1a0);
    *(uint *)(lVar23 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(lVar23 + 0x1a4) < iVar8 + 1U) {
      FUN_1447568fc(lVar23 + 0x198,iVar8);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar8 * 8) = puVar28;
    *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
    puVar17[0x59] = puVar28;
    if (ABS(*(float *)((longlong)puVar17 + 0x244) + -6500.0) <= 1e-08) {
      uVar24 = (uint)(ABS(*(float *)(puVar17 + 0x49)) <= 1e-08);
    }
    iVar8 = *(int *)((longlong)puVar17 + 0x2ac);
    uVar4 = *(undefined8 *)(param_2 + 0x13818);
    iVar5 = (int)local_130;
    FUN_145ea1304();
    FUN_1448e935e(uVar4,&local_b8,&DAT_14ca26660,iVar5 + (uVar24 + (uint)(iVar8 == 0) * 2) * 5 + -1)
    ;
    FUN_145ea1304();
    local_118 = iVar7 + 0xe;
    if (-1 < iVar7 + 7) {
      local_118 = iVar7 + 7;
    }
    local_118 = local_118 >> 3;
    local_110 = 1;
    if ((char)local_148 != '\0') {
      local_110 = local_118;
    }
    local_158 = &local_118;
    local_114 = local_118;
    FUN_14728ad12(lVar23,&local_10b,&local_b8,local_128);
    uVar13 = local_140;
  }
LAB_142eb8680:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 142eb8bdc FUN_142eb8bdc body=576 status=ok
// SIG undefined FUN_142eb8bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eb8bdc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29bd8) {
    FUN_144b3d300(&DAT_14ca29bd8);
    if (DAT_14ca29bd8 == -1) {
      FUN_142edc218();
      if ((DAT_14ca29d57 & 2) == 0) {
        DAT_14ca29d57 = DAT_14ca29d57 | 2;
        _DAT_14ca29cf8 = L"FDownsamplePS";
        _DAT_14ca29d10 = FUN_146826540;
        _DAT_14ca29d18 = FUN_146825d77;
        _DAT_14ca29d20 = FUN_146825fd6;
        _DAT_14ca29d28 = FUN_1407e02ea;
        _DAT_14ca29d30 = FUN_146826273;
        _DAT_14ca29d08 = FUN_142edc97a;
        _DAT_14ca29d48 = 0xffffffff000000e0;
        _DAT_14ca29d50 = 8;
        DAT_14ca29d54 = 0;
        _DAT_14ca29d38 = &LAB_142edc9a6;
        _DAT_14ca29d58 = L"BASE";
        DAT_14ca29d82 = 4;
        _DAT_14ca29d60 = FUN_140b35ae4();
        _DAT_14ca29d68 = DAT_14ca29d00;
        _DAT_14ca29d70 = &LAB_14682652b;
        DAT_14ca29d00 = &DAT_14ca29d58;
        DAT_14ca29d55 = DAT_14ca29d55 + '\x01';
        _DAT_14ca29d78 = 0x100000000;
        if (*(char *)(_DAT_14ca29d60 + 100) != '\0') {
          DAT_14ca29d56 = DAT_14ca29d56 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca29cf0);
      }
      FUN_140db5666(&DAT_14ca29b30,0,&DAT_14ca29cf0,L"FDownsamplePS",
                    L"/Engine/Private/PostProcessDownsample.usf",L"MainPS",3,2,FUN_142edc182,
                    FUN_142edc122,&LAB_142edc11e,&LAB_142edc11a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca29be0);
      _DAT_14ca29b30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edc20c);
      _Init_thread_footer(&DAT_14ca29bd8);
    }
  }
  return &DAT_14ca29b30;
}



// FUNCTION 142eb8e1c FUN_142eb8e1c body=576 status=ok
// SIG undefined FUN_142eb8e1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eb8e1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29e30) {
    FUN_144b3d300(&DAT_14ca29e30);
    if (DAT_14ca29e30 == -1) {
      FUN_142edcabc();
      if ((DAT_14ca29f27 & 2) == 0) {
        DAT_14ca29f27 = DAT_14ca29f27 | 2;
        _DAT_14ca29ec8 = L"FDownsampleCS";
        _DAT_14ca29ee0 = FUN_146826540;
        _DAT_14ca29ee8 = FUN_146825d77;
        _DAT_14ca29ef0 = FUN_146825fd6;
        _DAT_14ca29ef8 = FUN_1407e02ea;
        _DAT_14ca29f00 = FUN_146826273;
        _DAT_14ca29ed8 = FUN_142edce24;
        _DAT_14ca29f18 = 0xffffffff000000e0;
        _DAT_14ca29f20 = 8;
        DAT_14ca29f24 = 0;
        _DAT_14ca29f08 = &LAB_142edce50;
        _DAT_14ca29f28 = L"BASE";
        DAT_14ca29f52 = 4;
        _DAT_14ca29f30 = FUN_140b35ae4();
        _DAT_14ca29f38 = DAT_14ca29ed0;
        _DAT_14ca29f40 = &LAB_14682652b;
        DAT_14ca29ed0 = &DAT_14ca29f28;
        DAT_14ca29f25 = DAT_14ca29f25 + '\x01';
        _DAT_14ca29f48 = 0x100000000;
        if (*(char *)(_DAT_14ca29f30 + 100) != '\0') {
          DAT_14ca29f26 = DAT_14ca29f26 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca29ec0);
      }
      FUN_140db5666(&DAT_14ca29d88,0,&DAT_14ca29ec0,L"FDownsampleCS",
                    L"/Engine/Private/PostProcessDownsample.usf",L"MainCS",5,2,FUN_142edca26,
                    FUN_142edc9c6,&LAB_142edc9ae,&LAB_142edc9aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca29e38);
      _DAT_14ca29d88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edcab0);
      _Init_thread_footer(&DAT_14ca29e30);
    }
  }
  return &DAT_14ca29d88;
}



// FUNCTION 142eb905c FUN_142eb905c body=2168 status=ok
// SIG undefined FUN_142eb905c(void)

void FUN_142eb905c(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_258 [32];
  byte local_238;
  undefined2 local_230;
  longlong *local_220;
  longlong local_218;
  ulonglong local_210;
  ulonglong *local_208;
  ulonglong *local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong lStack_190;
  undefined *puStack_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined8 local_174;
  short local_16c;
  undefined2 local_16a;
  undefined1 local_168;
  undefined1 local_167;
  char local_166;
  char local_165;
  undefined1 local_164;
  undefined1 local_163;
  longlong *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int iStack_70;
  undefined4 local_6c;
  undefined2 local_68;
  char local_66;
  char local_65;
  undefined2 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  bVar14 = (*(byte *)((longlong)param_4 + 0x29) & 1) == 0 & *(byte *)(param_3 + 0x13820);
  puVar7 = (undefined1 *)0x4000009;
  if (bVar14 != 0) {
    puVar7 = &DAT_00020008;
  }
  local_98 = (longlong *)((ulonglong)puVar7 | DAT_14ca4ae88);
  local_65 = *(char *)((longlong)param_4 + 0x2a);
  if (local_65 == '\0') {
    local_65 = *(char *)(*(longlong *)(param_4[2] + 0x38) + 0x93);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_4[2] + 0x38) + 0x84);
  iVar13 = (int)uVar3;
  iVar12 = (int)((ulonglong)uVar3 >> 0x20);
  iStack_70 = (iVar12 - (iVar12 + 1 >> 0x1f)) + 1 >> 1;
  local_74 = (iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1;
  local_90 = 1;
  uStack_8c = 0;
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0;
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_66 = '\0';
  if (local_74 < 2) {
    local_74 = 1;
  }
  local_64 = 0xff00;
  if (iStack_70 < 2) {
    iStack_70 = 1;
  }
  local_218 = param_3;
  local_200 = param_1;
  if ((longlong *)param_4[1] == (longlong *)0x0) {
    local_6c._2_2_ = 1;
    local_68._1_1_ = 1;
    local_64._1_1_ = 0xff;
    local_68._0_1_ = 1;
    local_6c._0_2_ = 1;
    local_64._0_1_ = 0;
  }
  else {
    lVar8 = (**(code **)(*(longlong *)param_4[1] + 0x10))();
    local_17c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_178 = 0;
    local_16c = 1;
    local_166 = '\0';
    lStack_190 = *(longlong *)(lVar8 + 8);
    puStack_188 = *(undefined **)(lVar8 + 0x10);
    local_180 = *(undefined4 *)(lVar8 + 0x18);
    local_165 = *(char *)(lVar8 + 0x28);
    local_164 = *(undefined1 *)(lVar8 + 0x29);
    local_174 = *(undefined8 *)(lVar8 + 0x2c);
    local_16a = *(undefined2 *)(lVar8 + 0x36);
    local_168 = *(undefined1 *)(lVar8 + 0x38);
    local_167 = *(undefined1 *)(lVar8 + 0x39);
    if (*(short *)(lVar8 + 0x34) == 0) {
      bVar2 = *(byte *)(lVar8 + 0x3b);
      if ((bVar2 & 2) == 0) {
        if ((bVar2 & 1) != 0) {
          local_166 = '\x01';
        }
      }
      else {
        local_166 = (bVar2 & 1) + 3;
      }
    }
    else {
      local_166 = '\x02';
      local_16c = *(short *)(lVar8 + 0x34);
    }
    local_198 = *(longlong **)(lVar8 + 0x20);
    local_163 = *(undefined1 *)(lVar8 + 0x3a);
    cVar6 = FUN_14024386e(&local_198,&local_98);
    if (cVar6 != '\0') {
      uVar3 = *param_4;
      local_198 = (longlong *)param_4[1];
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 0x30))();
      }
      uVar9 = FUN_14476842e(param_2,&local_198,uVar3,0);
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 0x38))();
      }
      goto LAB_142eb9484;
    }
  }
  local_220 = (longlong *)CONCAT71(local_220._1_7_,bVar14);
  uVar3 = *param_4;
  local_165 = local_65;
  lStack_190 = CONCAT44(uStack_8c,local_90);
  puStack_188 = puStack_88;
  local_180 = uStack_80;
  iVar13 = DAT_14ca84e40;
  if (local_74 < DAT_14ca84e40) {
    iVar13 = local_74;
  }
  if (iVar13 < 2) {
    iVar13 = 1;
  }
  iVar12 = DAT_14ca84e40;
  if (iStack_70 < DAT_14ca84e40) {
    iVar12 = iStack_70;
  }
  local_17c = local_7c;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  local_174 = CONCAT44(iVar12,iVar13);
  uVar9 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar10 = uVar9 + 0x120;
  local_198 = local_98;
  local_178 = local_78;
  local_16c = (short)local_6c;
  local_16a = local_6c._2_2_;
  local_168 = (undefined1)local_68;
  local_167 = local_68._1_1_;
  local_166 = local_66;
  local_164 = (undefined1)local_64;
  local_163 = local_64._1_1_;
  if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar9 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar10 = uVar9 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar10;
  FUN_1456bbb8c(uVar9,uVar3,&local_198,0);
  iVar13 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar13 + 1U;
  bVar14 = (byte)local_220;
  if (*(uint *)(param_2 + 0x184) < iVar13 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar13);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar13 * 8) = uVar9;
  *(int *)(uVar9 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
LAB_142eb9484:
  uVar10 = param_4[3];
  uVar3 = param_4[4];
  iVar13 = (int)((ulonglong)uVar3 >> 0x20);
  uVar17 = CONCAT44((int)(uVar10 >> 0x20) / 2,(int)(((uint)(uVar10 >> 0x1f) & 1) + (int)uVar10) >> 1
                   );
  uVar16 = CONCAT44((iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1,
                    ((int)uVar3 - ((int)uVar3 + 1 >> 0x1f)) + 1 >> 1);
  local_238 = *(byte *)(param_4 + 5);
  if (bVar14 == 0) {
    local_210 = CONCAT44(local_210._4_4_,(uint)local_238);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar15 + 0x42;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x220);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar15 + 0x42;
    }
    *puVar1 = (ulonglong)puVar11;
    *puVar15 = &PTR_FUN_14a2babd8;
    local_220 = puVar15 + 2;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    *(undefined1 (*) [16])(puVar15 + 0x20) = (undefined1  [16])0x0;
    lVar8 = 0x110;
    do {
      *(undefined1 (*) [16])((longlong)puVar15 + lVar8) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar15 + lVar8 + 0x10) = 0xffff0000;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0x1d0);
    *(undefined4 *)((longlong)puVar15 + 0x1e4) = 0;
    puVar15[0x3a] = 0;
    puVar15[0x3b] = 0;
    *(undefined2 *)(puVar15 + 0x3c) = 0;
    *(undefined4 *)(puVar15 + 0x3d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 500) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x1fc) = 0;
    puVar15[0x40] = 0;
    iVar13 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
    local_208 = puVar1;
    if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar13);
    }
    lVar8 = local_218;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar15;
    local_1e0 = param_4[2];
    local_1d8 = param_4[3];
    local_1d0 = param_4[4];
    local_1f8 = uVar9;
    local_1f0 = uVar17;
    local_1e8 = uVar16;
    FUN_142eb9f7a(&local_198,local_218);
    plVar4 = local_220;
    memcpy(local_220,&local_198,0x100);
    puVar15[0x22] = uVar9;
    puVar15[0x23] = 0;
    *(undefined4 *)(puVar15 + 0x24) = 0xffff0000;
    uVar3 = *(undefined8 *)(lVar8 + 0x13818);
    FUN_142eb8bdc();
    FUN_1448e935e(uVar3,&local_198,&DAT_14ca29b30,local_210 & 0xffffffff);
    FUN_142eb8bdc();
    plVar5 = local_198;
    local_210 = lStack_190;
    local_218 = *(longlong *)(lVar8 + 0x13818);
    FUN_142edc218();
    local_198 = (longlong *)0x0;
    lStack_190 = 0;
    FUN_1448f70da(plVar5,&DAT_14ca29be0,plVar4,&local_198);
    FUN_142edc218();
    FUN_140069376(param_2);
    puVar1 = local_208;
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 0x41;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_208,0x210);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 0x41;
    }
    *puVar1 = (ulonglong)puVar11;
    local_198 = local_220;
    lStack_190 = DAT_14ca29c28;
    if (DAT_14ca29c28 != 0) {
      LOCK();
      *(int *)(DAT_14ca29c28 + 8) = *(int *)(DAT_14ca29c28 + 8) + 1;
      UNLOCK();
    }
    puStack_188 = &DAT_14ca29be0;
    local_238 = 2;
    FUN_140068f1a(puVar15,&local_98,&local_198,1);
    *puVar15 = &PTR_FUN_14a2babe0;
    puVar15[0x37] = local_220;
    puVar15[0x38] = local_218;
    puVar15[0x39] = plVar5;
    puVar15[0x3a] = local_210;
    puVar15[0x3b] = uVar17;
    puVar15[0x3c] = uVar16;
    *(undefined1 (*) [16])(puVar15 + 0x3d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar15 + 500) = (undefined1  [16])0x0;
    iVar13 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar13 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar13 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar15);
  }
  else {
    local_1c8 = param_4[2];
    local_230 = 2;
    local_1c0 = uVar10;
    local_1b8 = uVar3;
    local_1b0 = uVar9;
    local_1a8 = uVar17;
    local_1a0 = uVar16;
    FUN_142eb98d5(param_2,local_218);
  }
  *local_200 = uVar9;
  local_200[1] = uVar17;
  local_200[2] = uVar16;
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eb98d5 FUN_142eb98d5 body=1700 status=ok
// SIG undefined FUN_142eb98d5(void)

void FUN_142eb98d5(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,ushort param_6)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  undefined8 *local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  longlong lStack_140;
  undefined *puStack_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar9 + 0x26;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x140);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar9 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar9 = &PTR_FUN_14a2babf8;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 1;
  puVar9[0x24] = 0;
  puVar9[0x20] = 0;
  puVar9[0x21] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  local_198 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
  local_160 = *param_3;
  local_158 = param_3[1];
  local_150 = param_3[2];
  local_178 = *param_4;
  local_170 = param_4[1];
  local_168 = param_4[2];
  FUN_142eb9f7a(&local_148,param_2);
  local_190 = puVar9 + 2;
  memcpy(puVar9 + 2,&local_148,0x100);
  lStack_140 = param_3[1];
  puStack_138 = (undefined *)param_3[2];
  local_148 = *(undefined8 **)(*(longlong *)(*param_3 + 0x38) + 0x84);
  local_1a8 = 3;
  FUN_14473d930(&local_188,&local_148,&lStack_140,1);
  puVar1 = local_198;
  fVar13 = DAT_14ca4ca80 + 0.5;
  fVar14 = DAT_14ca4ca7c + 0.5;
  fVar16 = 1.0 / (float)(*(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc));
  fVar15 = 1.0 / (float)((int)param_4[2] - (int)param_4[1]);
  fVar17 = fVar16 * DAT_14ca4ca78;
  *(float *)(puVar9 + 0x22) = fVar15 * DAT_14ca4ca74 * local_188;
  *(float *)((longlong)puVar9 + 0x114) = fVar17 * local_184;
  *(float *)(puVar9 + 0x23) = fVar14 * fVar15 * local_188 + local_180;
  *(float *)((longlong)puVar9 + 0x11c) = fVar13 * fVar16 * local_184 + local_17c;
  lVar5 = *param_4;
  uVar2 = *(undefined1 *)(lVar5 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_198,0x50);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar12[1] = *(undefined8 *)(lVar5 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar2;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar9[0x24] = puVar12;
  uVar6 = *(undefined8 *)(param_2 + 0x13818);
  FUN_142eb8e1c();
  FUN_1448e935e(uVar6,&local_148,&DAT_14ca29d88,param_5);
  FUN_142eb8e1c();
  puVar7 = local_148;
  local_1a0 = lStack_140;
  iVar11 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  iVar3 = iVar11 + 7;
  iVar11 = iVar11 + 0xe;
  if (-1 < iVar3) {
    iVar11 = iVar3;
  }
  iVar8 = (int)param_4[2] - (int)param_4[1];
  iVar3 = iVar8 + 7;
  iVar8 = iVar8 + 0xe;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  FUN_142edcabc();
  puVar9 = local_190;
  local_148 = (undefined8 *)0x0;
  lStack_140 = 0;
  FUN_1448f70da(puVar7,&DAT_14ca29e38,local_190,&local_148);
  FUN_140069376(param_1);
  puVar1 = local_198;
  if ((param_6 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_6 & 2) != 0)))))) {
      param_6 = param_6 & 0xfff9 | 4;
    }
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar10 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
      FUN_140023dd8(local_198,0x1f0);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar10 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar12;
    local_148 = puVar9;
    lStack_140 = DAT_14ca29e80;
    if (DAT_14ca29e80 != 0) {
      LOCK();
      *(int *)(DAT_14ca29e80 + 8) = *(int *)(DAT_14ca29e80 + 8) + 1;
      UNLOCK();
    }
    puStack_138 = &DAT_14ca29e38;
    local_1a8 = CONCAT31(local_1a8._1_3_,2);
    FUN_140068f1a(puVar10,&local_188,&local_148,param_6);
    *puVar10 = &PTR_FUN_14a2bac20;
    puVar10[0x37] = &DAT_14ca29e38;
    puVar10[0x38] = puVar9;
    puVar10[0x39] = puVar7;
    puVar10[0x3a] = local_1a0;
    *(int *)(puVar10 + 0x3b) = iVar8 >> 3;
    *(int *)((longlong)puVar10 + 0x1dc) = iVar11 >> 3;
    *(undefined4 *)(puVar10 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      param_6 = param_6 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (param_6 & 2) != 0) {
      param_6 = param_6 & 0xfffd;
    }
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar10 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
      FUN_140023dd8(local_198,0x1f8);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar10 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar12;
    uVar4 = *(undefined4 *)(param_1 + 0x660);
    local_148 = puVar9;
    lStack_140 = DAT_14ca29e80;
    if (DAT_14ca29e80 != 0) {
      LOCK();
      *(int *)(DAT_14ca29e80 + 8) = *(int *)(DAT_14ca29e80 + 8) + 1;
      UNLOCK();
    }
    puStack_138 = &DAT_14ca29e38;
    local_1a8 = CONCAT31(local_1a8._1_3_,2);
    FUN_140068f1a(puVar10,&local_188,&local_148,param_6);
    puVar10[0x37] = &DAT_14ca29e38;
    puVar10[0x38] = puVar9;
    puVar10[0x39] = puVar7;
    puVar10[0x3a] = local_1a0;
    *(int *)(puVar10 + 0x3b) = iVar8 >> 3;
    *(int *)((longlong)puVar10 + 0x1dc) = iVar11 >> 3;
    *(undefined4 *)(puVar10 + 0x3c) = 1;
    *puVar10 = &PTR_FUN_14a2bac00;
    *(undefined4 *)(puVar10 + 0x3d) = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar10);
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eb9f7a FUN_142eb9f7a body=263 status=ok
// SIG undefined FUN_142eb9f7a(void)

undefined8 * FUN_142eb9f7a(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_a8 [14];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = (undefined4)param_4[1];
  uStack_10c = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_108 = (undefined4)param_4[2];
  uStack_104 = *(undefined4 *)((longlong)param_4 + 0x14);
  local_118 = *(undefined8 *)(*(longlong *)(*param_4 + 0x38) + 0x84);
  FUN_144a2c7c2(local_a8);
  local_128 = (undefined4)param_3[1];
  uStack_124 = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_120 = (undefined4)param_3[2];
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0x14);
  local_130 = *(undefined8 *)(*param_3 + 0x84);
  FUN_144a2c7c2(&local_118);
  lVar1 = FUN_1447e4f80();
  cVar2 = '\x02';
  if (*(char *)(lVar1 + 0x41) != '\x03') {
    cVar2 = *(char *)(lVar1 + 0x41);
  }
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  *(char *)(param_1 + 1) = cVar2;
  puVar3 = local_a8;
  puVar4 = param_1 + 2;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &local_118;
  puVar4 = param_1 + 0x10;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x1e] = *param_4;
  param_1[0x1f] = DAT_14c9c0de0;
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eba082 FUN_142eba082 body=458 status=ok
// SIG undefined FUN_142eba082(void)

void FUN_142eba082(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined1 param_6,byte param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined2 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *param_5;
  *param_1 = lVar2;
  lVar1 = param_5[1];
  param_1[1] = lVar1;
  lVar5 = param_5[2];
  param_1[2] = lVar5;
  plVar3 = param_1 + 5;
  lVar4 = 1;
  local_e8 = param_1;
  local_e0 = param_4;
  do {
    local_88 = 0;
    uStack_67 = 0;
    local_90 = *(undefined8 *)(&DAT_14a2b5ad0 + lVar4 * 8);
    uStack_70 = (undefined7)lVar5;
    uStack_69 = (undefined1)((ulonglong)lVar5 >> 0x38);
    uStack_68 = param_6;
    lStack_80 = lVar2;
    local_78 = lVar1;
    FUN_142eb905c(local_c0,param_2,param_3,&local_90);
    FUN_1448a0832(&local_a8,param_2,local_c0);
    plVar3[-2] = local_a8;
    plVar3[-1] = local_a0;
    *plVar3 = local_98;
    if ((param_7 & 1) != 0) {
      if (local_a8 == 0) {
        local_d8 = 0;
      }
      else {
        local_d8 = *(undefined8 *)(local_a8 + 0x38);
      }
      local_d0 = local_a0;
      local_c8 = local_98;
      local_f8 = &local_d8;
      FUN_142eba24d(local_c0,param_2,param_3,local_e0);
      FUN_1448a0832(&local_a8,param_2,local_c0);
      plVar3[-2] = local_a8;
      plVar3[-1] = local_a0;
      *plVar3 = local_98;
    }
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 3;
    param_7 = 0;
    lVar1 = local_a0;
    lVar2 = local_a8;
    lVar5 = local_98;
  } while (lVar4 != 6);
  *(undefined1 *)(local_e8 + 0x12) = 1;
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eba24d FUN_142eba24d body=1811 status=ok
// SIG undefined FUN_142eba24d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eba24d(ulonglong *param_1,longlong param_2,longlong param_3,void *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_141;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  ulonglong *local_118;
  undefined1 local_10c;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  uVar2 = local_d8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar13 = *param_5;
  uStack_100 = *(undefined8 *)(lVar13 + 0x68);
  uStack_f8 = *(undefined8 *)(lVar13 + 0x70);
  uStack_f0 = *(undefined4 *)(lVar13 + 0x78);
  local_108 = *(ulonglong *)(lVar13 + 0x60) & 0xfffffffff7fdeffc | DAT_14ca4ae90 | 1;
  local_d8._6_2_ = SUB82(uVar2,6);
  local_d8._0_6_ =
       CONCAT24(*(undefined2 *)(lVar13 + 0x94),CONCAT13(10,(uint3)*(byte *)(lVar13 + 0x92) << 0x10))
  ;
  local_d8._0_2_ = CONCAT11(1,*(undefined1 *)(lVar13 + 0x90));
  uStack_ec = (undefined4)*(undefined8 *)(lVar13 + 0x7c);
  uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x7c) >> 0x20);
  iVar9 = (int)*(undefined8 *)(lVar13 + 0x84);
  local_e4 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    local_e4 = iVar9;
  }
  if (local_e4 < 2) {
    local_e4 = 1;
  }
  iVar10 = (int)((ulonglong)*(undefined8 *)(lVar13 + 0x84) >> 0x20);
  iVar9 = DAT_14ca84e40;
  if (iVar10 < DAT_14ca84e40) {
    iVar9 = iVar10;
  }
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  local_e0 = CONCAT44(*(undefined4 *)(lVar13 + 0x8c),iVar9);
  plVar1 = (longlong *)(param_2 + 0x70);
  uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar15 + 0x120;
  local_118 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
    FUN_140023dd8(plVar1,0x128);
    uVar15 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar11 = uVar15 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar15,L"BasicEyeAdaptationSetup",&local_108,0);
  iVar9 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar9);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar15;
  *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_120 = param_5[1];
  local_128 = param_5[2];
  local_130 = *(undefined8 *)(*param_5 + 0x84);
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar16 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(plVar1,0x1d0);
    puVar16 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar16 + 0x38;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  *puVar16 = &PTR_FUN_14a2bacb8;
  puVar12 = puVar16 + 2;
  FUN_14729423e(puVar12);
  iVar9 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar16;
  lVar13 = FUN_1447e4f80();
  cVar14 = '\x02';
  if (*(char *)(lVar13 + 0x41) != '\x03') {
    cVar14 = *(char *)(lVar13 + 0x41);
  }
  puVar16[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar16 + 3) = cVar14;
  memcpy(puVar16 + 4,param_4,0x88);
  puVar16[0x16] = *param_5;
  puVar16[0x17] = DAT_14c9c0d80;
  cVar14 = (&DAT_00001de6)[param_3];
  puVar16[0x18] = uVar15;
  puVar16[0x19] = 0;
  *(char *)(puVar16 + 0x1a) = cVar14 * '\x02';
  *(undefined1 *)((longlong)puVar16 + 0xd1) = 0;
  *(undefined2 *)((longlong)puVar16 + 0xd2) = 0xffff;
  uVar2 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145eae116();
  FUN_1448e935e(uVar2,&local_108,&DAT_14ca27698,0);
  FUN_145eae116();
  uVar11 = local_108;
  local_138 = uStack_100;
  iVar9 = *(int *)(param_3 + 0x3090);
  local_13c = *(undefined4 *)(param_3 + 0x1dd4);
  local_140 = *(undefined4 *)(param_3 + 0x3094);
  local_141 = (&DAT_00001de6)[param_3];
  uVar2 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar9 * 2) * 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_160 = &LAB_14712ac08;
      local_168 = &LAB_14712ac0c;
      local_170 = &LAB_1472e3912;
      local_178 = &LAB_1472e3916;
      local_180 = FUN_1472e391a;
      local_188 = FUN_1472e3942;
      local_1a0 = L"ScreenPassVS";
      local_1a8 = L"/Engine/Private/ScreenPass.usf";
      local_150 = 0;
      local_158 = 0xe0;
      local_190 = 1;
      local_198 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  FUN_1448e935e(uVar2,&local_108,&DAT_14ca4b6d8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_160 = &LAB_14712ac08;
      local_168 = &LAB_14712ac0c;
      local_170 = &LAB_1472e3912;
      local_178 = &LAB_1472e3916;
      local_180 = FUN_1472e391a;
      local_188 = FUN_1472e3942;
      local_1a0 = L"ScreenPassVS";
      local_1a8 = L"/Engine/Private/ScreenPass.usf";
      local_150 = 0;
      local_158 = 0xe0;
      local_190 = 1;
      local_198 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  uVar8 = uStack_100;
  uVar7 = local_108;
  uVar6 = DAT_14c9c0d98;
  uVar2 = DAT_14c9c0d50;
  FUN_145eae384();
  local_108 = 0;
  uStack_100 = 0;
  FUN_1448f70da(uVar11,&DAT_14ca2a188,puVar12,&local_108);
  local_108 = CONCAT44(local_13c,iVar9);
  uStack_100 = CONCAT17(local_109,CONCAT25(local_10b,CONCAT14(local_141,local_140)));
  uStack_f8 = local_130;
  uStack_f0 = (undefined4)local_120;
  uStack_ec = (undefined4)((ulonglong)local_120 >> 0x20);
  uStack_e8 = (undefined4)local_128;
  local_e4 = (int)((ulonglong)local_128 >> 0x20);
  local_e0 = local_130;
  local_d8 = local_120;
  local_d0 = local_128;
  local_c8 = uVar7;
  uStack_c0 = uVar8;
  local_b8 = uVar11;
  local_b0 = local_138;
  local_a8 = uVar2;
  local_a0 = uVar6;
  local_98 = DAT_14ca94df8;
  local_90 = 0;
  local_88 = uVar11;
  local_80 = local_138;
  local_70 = 2;
  local_78 = puVar12;
  FUN_145eae384();
  FUN_1472942de(param_2,&local_10c,puVar12,&local_108);
  lVar13 = param_5[1];
  uVar3 = *(undefined4 *)((longlong)param_5 + 0xc);
  lVar5 = param_5[2];
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x14);
  *local_118 = uVar15;
  *(int *)(local_118 + 1) = (int)lVar13;
  *(undefined4 *)((longlong)local_118 + 0xc) = uVar3;
  *(int *)(local_118 + 2) = (int)lVar5;
  *(undefined4 *)((longlong)local_118 + 0x14) = uVar4;
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eba961 FUN_142eba961 body=69 status=ok
// SIG undefined FUN_142eba961(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eba961(void)

{
  _DAT_14ca27018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eba9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27020,1);
  return;
}



// FUNCTION 142eba9a6 FUN_142eba9a6 body=69 status=ok
// SIG undefined FUN_142eba9a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eba9a6(void)

{
  _DAT_14ca27030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eba9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27038,1);
  return;
}



// FUNCTION 142eba9eb FUN_142eba9eb body=69 status=ok
// SIG undefined FUN_142eba9eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eba9eb(void)

{
  _DAT_14ca27048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebaa2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27050,1);
  return;
}



// FUNCTION 142ebaa30 FUN_142ebaa30 body=69 status=ok
// SIG undefined FUN_142ebaa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebaa30(void)

{
  _DAT_14ca27060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebaa72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27068,1);
  return;
}



// FUNCTION 142ebaa75 FUN_142ebaa75 body=69 status=ok
// SIG undefined FUN_142ebaa75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebaa75(void)

{
  _DAT_14ca27078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebaab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27080,1);
  return;
}



// FUNCTION 142ebaaba FUN_142ebaaba body=69 status=ok
// SIG undefined FUN_142ebaaba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebaaba(void)

{
  _DAT_14ca27090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebaafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27098,1);
  return;
}



// FUNCTION 142ebaaff FUN_142ebaaff body=69 status=ok
// SIG undefined FUN_142ebaaff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebaaff(void)

{
  _DAT_14ca270a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebab41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca270b0,1);
  return;
}



// FUNCTION 142ebab44 FUN_142ebab44 body=69 status=ok
// SIG undefined FUN_142ebab44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebab44(void)

{
  _DAT_14ca270c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebab86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca270c8,1);
  return;
}



// FUNCTION 142ebab89 FUN_142ebab89 body=69 status=ok
// SIG undefined FUN_142ebab89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebab89(void)

{
  _DAT_14ca270d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebabcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca270e0,1);
  return;
}



// FUNCTION 142ebabce FUN_142ebabce body=69 status=ok
// SIG undefined FUN_142ebabce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebabce(void)

{
  _DAT_14ca270f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca270f8,1);
  return;
}



// FUNCTION 142ebac13 FUN_142ebac13 body=69 status=ok
// SIG undefined FUN_142ebac13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebac13(void)

{
  _DAT_14ca27108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebac55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27110,1);
  return;
}



// FUNCTION 142ebac58 FUN_142ebac58 body=69 status=ok
// SIG undefined FUN_142ebac58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebac58(void)

{
  _DAT_14ca27120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebac9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27128,1);
  return;
}



// FUNCTION 142ebac9d FUN_142ebac9d body=69 status=ok
// SIG undefined FUN_142ebac9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebac9d(void)

{
  _DAT_14ca27138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebacdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27140,1);
  return;
}



// FUNCTION 142ebace2 FUN_142ebace2 body=69 status=ok
// SIG undefined FUN_142ebace2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebace2(void)

{
  _DAT_14ca27150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebad24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27158,1);
  return;
}



// FUNCTION 142ebad27 FUN_142ebad27 body=69 status=ok
// SIG undefined FUN_142ebad27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebad27(void)

{
  _DAT_14ca27168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebad69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27170,1);
  return;
}



// FUNCTION 142ebad78 FUN_142ebad78 body=1108 status=ok
// SIG undefined FUN_142ebad78(void)

void FUN_142ebad78(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  undefined6 uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar9 + 4;
  local_78 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x30);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar9 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar9 = &PTR_FUN_14a2bac38;
  puVar9[2] = 0;
  puVar9[3] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar9;
  cVar3 = *(char *)(param_3 + 0x68);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x50);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  puVar2 = puVar9 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(param_3 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar11 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = param_3;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *puVar2 = puVar11;
  uVar4 = *(undefined1 *)(param_4 + 0x94);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x50);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(param_4 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar11 + 6) = uVar4;
  *(undefined1 *)(puVar11 + 7) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
  puVar11[8] = param_4;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar9[3] = puVar11;
  FUN_141585470();
  FUN_141585470();
  FUN_1448e935e(local_78,&local_68,&DAT_14ca271f8,0);
  FUN_141585470();
  lVar6 = lStack_60;
  puVar7 = local_68;
  FUN_141585592();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar7,&DAT_14ca29f68,puVar2,&local_68);
  FUN_140069376(param_1);
  uVar10 = (undefined6)((ulonglong)puVar9 >> 0x10);
  uVar8 = (undefined4)CONCAT62(uVar10,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar8 = (undefined4)CONCAT62(uVar10,4);
  }
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar9;
  lStack_60 = DAT_14ca29fb0;
  if (DAT_14ca29fb0 != 0) {
    LOCK();
    *(int *)(DAT_14ca29fb0 + 8) = *(int *)(DAT_14ca29fb0 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca29f68;
  local_88 = 2;
  local_68 = puVar2;
  FUN_140068f1a(puVar11,&local_69,&local_68,uVar8);
  *puVar11 = &PTR_FUN_14a2bac40;
  puVar11[0x37] = &DAT_14ca29f68;
  puVar11[0x38] = puVar2;
  puVar11[0x39] = puVar7;
  puVar11[0x3a] = lVar6;
  puVar11[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar11 + 0x3c) = 1;
  iVar5 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar5 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar11);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ebb1d9 FUN_142ebb1d9 body=1928 status=ok
// SIG undefined FUN_142ebb1d9(void)

ulonglong FUN_142ebb1d9(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 **ppuVar11;
  byte bVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1a8 [32];
  int *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  undefined1 local_12d;
  int local_12c;
  int local_128;
  undefined4 local_124;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined2 local_d5;
  undefined1 local_d3;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar2 = *(uint *)(param_2 + 1);
  uVar16 = 0;
  if (uVar2 != 0) {
    bVar12 = 0;
    lVar7 = DAT_14ca270b8;
    do {
      if (*(char *)(lVar7 + 1) == '\x01') {
        lVar10 = (longlong)(int)uVar16 * 0x13c10 + *param_2;
        iVar5 = FUN_140347e80(lVar10);
        lVar7 = DAT_14ca270b8;
        if ((iVar5 != 0) || ((*(byte *)(*(longlong *)(lVar10 + 8) + 0x60) & 2) != 0))
        goto LAB_142ebb26c;
        bVar3 = *(byte *)(DAT_14ca27148 + 1);
      }
      else {
LAB_142ebb26c:
        bVar3 = 0;
      }
      bVar12 = bVar12 | bVar3;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while (uVar2 != uVar15);
    if ((bVar12 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      local_e4 = 0x10;
      if (*(int *)(DAT_14ca27160 + 4) < 0x10) {
        local_e4 = *(int *)(DAT_14ca27160 + 4);
      }
      if (local_e4 < 2) {
        local_e4 = 1;
      }
      local_e0 = ((int)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20) + local_e4 + -1) /
                 local_e4;
      local_e4 = (local_e4 + (int)*(undefined8 *)(param_3 + 0x20) + -1) / local_e4;
      if (local_e4 < 2) {
        local_e4 = 1;
      }
      if (local_e0 < 2) {
        local_e0 = 1;
      }
      local_f0 = DAT_14ca83a40;
      local_100 = DAT_14ca83a30;
      uStack_fc = DAT_14ca83a34;
      uStack_f8 = DAT_14ca83a38;
      uStack_f4 = DAT_14ca83a3c;
      local_ec = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_d6 = 0;
      local_108 = &DAT_00020008;
      local_d5 = 0x15;
      local_dc = 0x10001;
      local_d8 = 0x101;
      local_e8 = 0;
      if (DAT_14ca84e40 <= local_e4) {
        local_e4 = DAT_14ca84e40;
      }
      local_d3 = 0xff;
      if (local_e4 < 2) {
        local_e4 = 1;
      }
      if (DAT_14ca84e40 <= local_e0) {
        local_e0 = DAT_14ca84e40;
      }
      if (local_e0 < 2) {
        local_e0 = 1;
      }
      plVar13 = (longlong *)(param_1 + 0x70);
      uVar16 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar6 = uVar16 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
        FUN_140023dd8(plVar13,0x128);
        uVar16 = *plVar13 + 7U & 0xfffffffffffffff8;
        uVar6 = uVar16 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar6;
      local_170 = param_3;
      FUN_1456bbb8c(uVar16,L"EyeAdaptation_Illuminance",&local_108,0);
      iVar5 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar5);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar16;
      *(int *)(uVar16 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      lVar7 = param_1 + 0x98;
      local_138 = param_1 + 0x198;
      uVar15 = 0;
      do {
        if (*(char *)(DAT_14ca270b8 + 1) == '\x01') {
          lVar10 = (longlong)(int)uVar15 * 0x13c10 + *param_2;
          iVar5 = FUN_140347e80(lVar10);
          if (((iVar5 == 0) && ((*(byte *)(*(longlong *)(lVar10 + 8) + 0x60) & 2) == 0)) &&
             (*(char *)(DAT_14ca27148 + 1) == '\x01')) {
            local_140 = *(ulonglong *)(lVar10 + 0x30f8);
            local_148 = *(ulonglong *)(lVar10 + 0x3100);
            iVar5 = *(int *)(DAT_14ca27160 + 4);
            if (0xf < iVar5) {
              iVar5 = 0x10;
            }
            if (iVar5 < 2) {
              iVar5 = 1;
            }
            local_150 = local_140 >> 0x20;
            local_158 = local_148 >> 0x20;
            uVar6 = (longlong)((int)(local_148 >> 0x20) + iVar5 + -1) / (longlong)iVar5;
            uVar14 = (longlong)(iVar5 + (int)local_148 + -1) / (longlong)iVar5;
            local_110 = uVar14 & 0xffffffff;
            if ((int)uVar14 < 2) {
              local_110 = 1;
            }
            uVar14 = uVar6 & 0xffffffff;
            if ((int)uVar6 < 2) {
              uVar14 = 1;
            }
            local_110 = local_110 | uVar14 << 0x20;
            local_118 = (longlong)
                        ((ulonglong)(uint)((int)local_140 >> 0x1f) << 0x20 | local_140 & 0xffffffff)
                        / (longlong)iVar5 & 0xffffffffU |
                        (longlong)
                        ((ulonglong)(uint)((longlong)local_140 >> 0x3f) << 0x20 | local_150) /
                        (longlong)iVar5 << 0x20;
            uVar6 = (longlong)
                    (iVar5 + (int)((ulonglong)*(undefined8 *)(local_170 + 0x20) >> 0x20) + -1) /
                    (longlong)iVar5;
            uVar14 = (longlong)(iVar5 + (int)*(undefined8 *)(local_170 + 0x20) + -1) /
                     (longlong)iVar5;
            local_120 = uVar14 & 0xffffffff;
            if ((int)uVar14 < 2) {
              local_120 = 1;
            }
            uVar14 = uVar6 & 0xffffffff;
            if ((int)uVar6 < 2) {
              uVar14 = 1;
            }
            local_120 = local_120 | uVar14 << 0x20;
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar8 = puVar9 + 0x34;
            local_160 = lVar7;
            if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
              FUN_140023dd8(plVar13,0x1b0);
              puVar9 = (undefined8 *)(*plVar13 + 0xfU & 0xfffffffffffffff0);
              puVar8 = puVar9 + 0x34;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar8;
            *puVar9 = &PTR_FUN_14a2bac58;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 1;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar9[6] = 0;
            puVar9[7] = 0;
            puVar9[8] = 0;
            puVar9[9] = 0;
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0;
            puVar9[0xd] = 0;
            puVar9[0xe] = 0;
            puVar9[0xf] = 0;
            puVar9[0x10] = 0;
            puVar9[0x11] = 0;
            puVar9[0x2f] = 0;
            puVar9[0x30] = 0;
            iVar5 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
            local_180 = puVar9;
            local_168 = plVar13;
            if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
              FUN_1448cfae8(local_160,iVar5);
            }
            puVar8 = local_180;
            local_178 = local_180 + 4;
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = local_180;
            lVar7 = FUN_1447e4f80();
            cVar4 = *(char *)(lVar7 + 0x41);
            if (*(char *)(lVar7 + 0x41) == '\x03') {
              cVar4 = '\x02';
            }
            puVar8[2] = *(undefined8 *)(lVar10 + 0x18);
            *(char *)(puVar8 + 3) = cVar4;
            FUN_14494b062(&local_108,param_1,local_170);
            plVar13 = local_168;
            ppuVar11 = &local_108;
            puVar8 = local_178;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = *ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              puVar8 = puVar8 + 1;
            }
            local_180[0x10] = *(undefined8 *)(local_170 + 0x1b8);
            uVar1 = *(undefined1 *)(uVar16 + 0x94);
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar8 = puVar9 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
              FUN_140023dd8(local_168,0x50);
              puVar9 = (undefined8 *)(*plVar13 + 7U & 0xfffffffffffffff8);
              puVar8 = puVar9 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar8;
            puVar9[1] = *(undefined8 *)(uVar16 + 8);
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
            *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar9 + 5) = 0;
            *puVar9 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar9 + 6) = uVar1;
            *(undefined1 *)(puVar9 + 7) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar9 + 0x35) = 0;
            puVar9[8] = uVar16;
            iVar5 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
              FUN_1447568fc(local_138,iVar5);
            }
            puVar8 = local_180;
            local_178 = local_180 + 2;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar9;
            *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            local_180[0x11] = puVar9;
            FUN_144a2c7c2(&local_108,&local_120);
            ppuVar11 = &local_108;
            puVar8 = puVar8 + 0x12;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = *ppuVar11;
              ppuVar11 = ppuVar11 + 1;
              puVar8 = puVar8 + 1;
            }
            FUN_1414998c8(&local_108,lVar10);
            puVar8 = local_180;
            memcpy(local_180 + 0x20,&local_108,0x88);
            fVar17 = (float)((int)local_148 - (int)local_140) /
                     (float)((int)local_110 - (int)local_118);
            fVar18 = (float)((int)local_158 - (int)local_150) /
                     (float)(local_110._4_4_ - local_118._4_4_);
            *(float *)(puVar8 + 0x32) = fVar17;
            *(float *)((longlong)puVar8 + 0x194) = fVar18;
            *(float *)(puVar8 + 0x33) = (float)(int)local_140 - (float)(int)local_118 * fVar17;
            *(float *)((longlong)puVar8 + 0x19c) =
                 (float)(int)local_150 - (float)local_118._4_4_ * fVar18;
            FUN_14728b7be(*(undefined8 *)(lVar10 + 0x13818),&local_108);
            iVar5 = (local_110._4_4_ - local_118._4_4_) + 7;
            local_128 = (local_110._4_4_ - local_118._4_4_) + 0xe;
            if (-1 < iVar5) {
              local_128 = iVar5;
            }
            local_128 = local_128 >> 3;
            iVar5 = ((int)local_110 - (int)local_118) + 7;
            local_12c = ((int)local_110 - (int)local_118) + 0xe;
            if (-1 < iVar5) {
              local_12c = iVar5;
            }
            local_12c = local_12c >> 3;
            local_124 = 1;
            local_188 = &local_12c;
            FUN_14728b82b(param_1,&local_12d,&local_108,local_178);
            lVar7 = local_160;
            plVar13 = local_168;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar2 != uVar15);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 142ebb96e FUN_142ebb96e body=2297 status=ok
// SIG undefined FUN_142ebb96e(void)

longlong FUN_142ebb96e(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_338 [32];
  int *local_318;
  longlong local_308;
  ulonglong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  int local_294;
  int local_290;
  undefined4 local_28c;
  ulonglong local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 *local_268 [63];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((param_5 != 0) && (lVar3 = param_2[1], (int)lVar3 != 0)) {
    local_300 = (ulonglong *)(param_1 + 0x70);
    local_2f0 = (longlong *)(param_1 + 0x98);
    local_2b8 = param_1 + 0x198;
    local_2a0 = param_1 + 0x1a8;
    local_2a8 = param_4 + 0x48;
    local_2b0 = param_4 + 0x20;
    iVar22 = 0;
    do {
      if (*(char *)(DAT_14ca270b8 + 1) == '\x01') {
        lVar15 = (longlong)iVar22 * 0x13c10 + *param_2;
        iVar6 = FUN_140347e80(lVar15);
        puVar4 = local_300;
        if ((iVar6 == 0) && ((*(byte *)(*(longlong *)(lVar15 + 8) + 0x60) & 2) == 0)) {
          local_2c8 = *(ulonglong *)(lVar15 + 0x30f8);
          local_2d0 = *(ulonglong *)(lVar15 + 0x3100);
          iVar6 = *(int *)(DAT_14ca27160 + 4);
          if (0xf < iVar6) {
            iVar6 = 0x10;
          }
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          local_2d8 = local_2c8 >> 0x20;
          local_2e0 = local_2d0 >> 0x20;
          uVar2 = (longlong)((int)(local_2d0 >> 0x20) + iVar6 + -1) / (longlong)iVar6;
          uVar19 = (longlong)(iVar6 + (int)local_2d0 + -1) / (longlong)iVar6;
          local_278 = uVar19 & 0xffffffff;
          if ((int)uVar19 < 2) {
            local_278 = 1;
          }
          uVar19 = uVar2 & 0xffffffff;
          if ((int)uVar2 < 2) {
            uVar19 = 1;
          }
          local_278 = local_278 | uVar19 << 0x20;
          local_280 = (longlong)
                      ((ulonglong)(uint)((int)local_2c8 >> 0x1f) << 0x20 | local_2c8 & 0xffffffff) /
                      (longlong)iVar6 & 0xffffffffU |
                      (longlong)((ulonglong)(uint)((longlong)local_2c8 >> 0x3f) << 0x20 | local_2d8)
                      / (longlong)iVar6 << 0x20;
          uVar2 = (longlong)(iVar6 + (int)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20) + -1)
                  / (longlong)iVar6;
          uVar19 = (longlong)(iVar6 + (int)*(undefined8 *)(param_3 + 0x20) + -1) / (longlong)iVar6;
          local_288 = uVar19 & 0xffffffff;
          if ((int)uVar19 < 2) {
            local_288 = 1;
          }
          uVar19 = uVar2 & 0xffffffff;
          if ((int)uVar2 < 2) {
            uVar19 = 1;
          }
          local_288 = local_288 | uVar19 << 0x20;
          puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar21 + 0x3e;
          local_308 = param_1;
          if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
            FUN_140023dd8(local_300,0x200);
            puVar21 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
            puVar9 = puVar21 + 0x3e;
          }
          *(undefined8 **)(local_308 + 0x70) = puVar9;
          *puVar21 = &PTR_FUN_14a2bac78;
          puVar21[2] = 0;
          *(undefined1 *)(puVar21 + 3) = 1;
          puVar21[4] = 0;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          puVar21[8] = 0;
          puVar21[9] = 0;
          puVar21[10] = 0;
          puVar21[0xb] = 0;
          puVar21[0xc] = 0;
          puVar21[0xd] = 0;
          puVar21[0xe] = 0;
          puVar21[0xf] = 0;
          puVar21[0x10] = 0;
          puVar21[0x11] = 0;
          puVar21[0x31] = 0;
          puVar21[0x32] = 0;
          puVar21[0x34] = 0;
          puVar21[0x35] = 0;
          puVar21[0x36] = 0;
          puVar21[0x37] = 0;
          puVar21[0x38] = 0;
          puVar21[0x39] = 0;
          puVar21[0x3a] = 0;
          *(undefined1 *)(puVar21 + 0x3b) = 1;
          puVar21[0x3c] = 0;
          *(undefined1 *)(puVar21 + 0x3d) = 1;
          iVar6 = *(int *)(local_308 + 0xa0);
          *(uint *)(local_308 + 0xa0) = iVar6 + 1U;
          local_2f8 = param_2;
          local_2e8 = param_4;
          if (*(uint *)(local_308 + 0xa4) < iVar6 + 1U) {
            FUN_1448cfae8(local_2f0,iVar6);
          }
          lVar11 = local_308;
          *(undefined8 **)(*(longlong *)(local_308 + 0x98) + (longlong)iVar6 * 8) = puVar21;
          lVar7 = FUN_1447e4f80();
          cVar5 = *(char *)(lVar7 + 0x41);
          if (*(char *)(lVar7 + 0x41) == '\x03') {
            cVar5 = '\x02';
          }
          puVar21[2] = *(undefined8 *)(lVar15 + 0x18);
          *(char *)(puVar21 + 3) = cVar5;
          FUN_14494b062(local_268,lVar11,param_3);
          puVar4 = local_300;
          ppuVar16 = local_268;
          puVar9 = puVar21 + 4;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = *ppuVar16;
            ppuVar16 = ppuVar16 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar21[0x10] = *(undefined8 *)(param_3 + 0x1b8);
          uVar1 = *(undefined1 *)(param_5 + 0x94);
          puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar17 + 9;
          local_2c0 = param_3;
          if (*(undefined8 **)(lVar11 + 0x78) < puVar9) {
            FUN_140023dd8(local_300,0x50);
            puVar17 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar17 + 9;
          }
          *(undefined8 **)(lVar11 + 0x70) = puVar9;
          puVar17[1] = *(undefined8 *)(param_5 + 8);
          puVar17[2] = 0;
          *(undefined1 *)(puVar17 + 3) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar17 + 5) = 0;
          *puVar17 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar17 + 6) = uVar1;
          *(undefined1 *)(puVar17 + 7) = 0;
          *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
          puVar17[8] = param_5;
          iVar6 = *(int *)(lVar11 + 0x1a0);
          *(uint *)(lVar11 + 0x1a0) = iVar6 + 1U;
          if (*(uint *)(lVar11 + 0x1a4) < iVar6 + 1U) {
            FUN_1447568fc(local_2b8,iVar6);
          }
          *(undefined8 **)(*(longlong *)(lVar11 + 0x198) + (longlong)iVar6 * 8) = puVar17;
          *(int *)((longlong)puVar17 + 0x1c) = *(int *)(lVar11 + 0x1a0) + -1;
          puVar21[0x11] = puVar17;
          FUN_144a2c7c2(local_268,&local_288);
          ppuVar16 = local_268;
          puVar9 = puVar21 + 0x12;
          for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar9 = *ppuVar16;
            ppuVar16 = ppuVar16 + 1;
            puVar9 = puVar9 + 1;
          }
          fVar23 = (float)((int)local_2d0 - (int)local_2c8) /
                   (float)((int)local_278 - (int)local_280);
          fVar24 = (float)((int)local_2e0 - (int)local_2d8) /
                   (float)(local_278._4_4_ - local_280._4_4_);
          *(float *)(puVar21 + 0x20) = fVar23;
          *(float *)((longlong)puVar21 + 0x104) = fVar24;
          *(float *)(puVar21 + 0x21) = (float)(int)local_2c8 - (float)(int)local_280 * fVar23;
          *(float *)((longlong)puVar21 + 0x10c) =
               (float)(int)local_2d8 - (float)local_280._4_4_ * fVar24;
          FUN_1414998c8(local_268,lVar15);
          memcpy(puVar21 + 0x22,local_268,0x88);
          puVar21[0x34] = *(undefined8 *)(DAT_14ca63b68 + 8);
          puVar21[0x35] = DAT_14c9c0de0;
          if (*(int *)(local_2e8 + 0x40) == 0) {
            iVar6 = FUN_144a84100();
            if ((iVar6 < *(int *)(local_308 + 0x130)) &&
               (lVar11 = *(longlong *)(*(longlong *)(local_308 + 0x128) + (longlong)iVar6 * 8),
               lVar11 != 0)) {
              lVar11 = lVar11 + 8;
            }
            else {
              lVar11 = 0;
            }
            uVar10 = *(undefined8 *)(lVar11 + 0x58);
            uVar12 = uVar10;
            uVar14 = uVar10;
            uVar18 = uVar10;
          }
          else {
            lVar11 = *(longlong *)(local_2e8 + 0x50);
            if (*(longlong *)(local_2e8 + 0x50) == 0) {
              lVar11 = local_2a8;
            }
            piVar8 = (int *)(lVar11 + (longlong)*(int *)(lVar15 + 0x1dd8) * 4);
            if (*(int *)(local_2e8 + 0x38) == 2) {
              piVar8 = (int *)(lVar15 + 0x1dd8);
            }
            lVar11 = *(longlong *)(local_2e8 + 0x10);
            if (*(longlong *)(local_2e8 + 0x10) == 0) {
              lVar11 = local_2e8;
            }
            lVar13 = (longlong)*piVar8 * 0x10;
            uVar10 = *(undefined8 *)(lVar11 + lVar13);
            lVar20 = (longlong)(*piVar8 * 2 + 1);
            lVar7 = *(longlong *)(local_2e8 + 0x30);
            if (*(longlong *)(local_2e8 + 0x30) == 0) {
              lVar7 = local_2b0;
            }
            uVar12 = *(undefined8 *)(lVar11 + lVar20 * 8);
            uVar14 = *(undefined8 *)(lVar7 + lVar13);
            uVar18 = *(undefined8 *)(lVar7 + lVar20 * 8);
          }
          param_2 = local_2f8;
          puVar4 = local_300;
          puVar21[0x36] = uVar10;
          puVar21[0x37] = uVar12;
          puVar21[0x38] = uVar14;
          puVar21[0x39] = uVar18;
          puVar17 = (undefined8 *)(*(longlong *)(local_308 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar17 + 0x40;
          if (*(undefined8 **)(local_308 + 0x78) < puVar9) {
            FUN_140023dd8(local_300,0x210);
            puVar17 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
            puVar9 = puVar17 + 0x40;
          }
          local_2f8 = puVar21 + 2;
          *local_300 = (ulonglong)puVar9;
          *puVar17 = &PTR_FUN_14a236e80;
          puVar17[0xc] = 0;
          puVar17[0xd] = 0;
          puVar17[0xe] = 0;
          puVar17[0xf] = 0;
          puVar17[0x10] = 0;
          puVar17[0x11] = 0;
          lVar11 = 0x9c;
          do {
            puVar9 = (undefined8 *)((longlong)puVar17 + lVar11 + -0xc);
            *puVar9 = 0;
            puVar9[1] = 0x3f80000000000000;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0xfc);
          lVar11 = 0xfc;
          do {
            puVar9 = (undefined8 *)((longlong)puVar17 + lVar11 + -0xc);
            *puVar9 = 0;
            puVar9[1] = 0x3f80000000000000;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x15c);
          puVar17[0x30] = 0;
          puVar17[0x31] = 0;
          puVar17[0x32] = 0;
          puVar17[0x36] = 0;
          puVar17[0x37] = 0;
          puVar17[0x38] = 0;
          puVar17[0x39] = 0;
          puVar17[0x3a] = 0;
          iVar6 = *(int *)(local_308 + 0xa0);
          *(uint *)(local_308 + 0xa0) = iVar6 + 1U;
          if (*(uint *)(local_308 + 0xa4) < iVar6 + 1U) {
            FUN_1448cfae8(local_2f0,iVar6);
          }
          param_1 = local_308;
          *(undefined8 **)(*local_2f0 + (longlong)iVar6 * 8) = puVar17;
          lVar11 = lVar15;
          if ((((*(char *)(lVar15 + 0x23f2) == '\x01') && (DAT_14c7604d0 != 0)) &&
              (*(int *)(lVar15 + 0x1dd0) == 2)) && (lVar7 = *(longlong *)(lVar15 + 8), lVar7 != 0))
          {
            iVar6 = *(int *)(lVar15 + 0x1dd8);
            if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar7 + 0x10))) {
              lVar11 = *(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 8);
            }
          }
          FUN_144ab197e(local_268,local_308,lVar11 + 0x138f0,lVar15 + 0x13ab8);
          memcpy(puVar17 + 2,local_268,0x1f0);
          local_268[0] = puVar17 + 2;
          lVar11 = FUN_1404d38b4();
          local_270 = *(undefined8 *)(lVar11 + 0x18);
          uVar10 = FUN_1404d37cc(local_2a0,local_300,local_268,&local_270);
          lVar11 = FUN_1404d38b4();
          cVar5 = *(char *)(lVar11 + 0x41);
          if (*(char *)(lVar11 + 0x41) == '\x03') {
            cVar5 = '\x02';
          }
          puVar21[0x3a] = uVar10;
          *(char *)(puVar21 + 0x3b) = cVar5;
          uVar10 = *(undefined8 *)(lVar15 + 0x118d0);
          lVar11 = FUN_144a2c9be();
          cVar5 = *(char *)(lVar11 + 0x41);
          if (cVar5 == '\x03') {
            cVar5 = '\x02';
          }
          puVar21[0x3c] = uVar10;
          *(char *)(puVar21 + 0x3d) = cVar5;
          FUN_14728ba14(*(undefined8 *)(lVar15 + 0x13818),local_268);
          iVar6 = (local_278._4_4_ - local_280._4_4_) + 7;
          local_290 = (local_278._4_4_ - local_280._4_4_) + 0xe;
          if (-1 < iVar6) {
            local_290 = iVar6;
          }
          local_290 = local_290 >> 3;
          iVar6 = ((int)local_278 - (int)local_280) + 7;
          local_294 = ((int)local_278 - (int)local_280) + 0xe;
          if (-1 < iVar6) {
            local_294 = iVar6;
          }
          local_294 = local_294 >> 3;
          local_28c = 1;
          local_318 = &local_294;
          FUN_14728ba81(param_1,&local_270,local_268,local_2f8);
          param_3 = local_2c0;
          param_4 = local_2e8;
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 != (int)lVar3);
  }
  if ((local_70 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 142ebc28c FUN_142ebc28c body=99 status=ok
// SIG undefined FUN_142ebc28c(void)

undefined8 FUN_142ebc28c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar7 = 0;
    do {
      uVar6 = (ulonglong)(*(int *)(param_1 + 0x40) - iVar4 & 3);
      lVar1 = *(longlong *)(lVar5 + uVar6 * 8);
      lVar2 = *(longlong *)(lVar1 + 8);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x10) != 0) {
          return uVar7;
        }
        cVar3 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))();
        if (cVar3 == '\0') {
          return uVar7;
        }
        iVar4 = *(int *)(param_1 + 0x44);
        lVar5 = *(longlong *)(param_1 + 0x30);
      }
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 0x44) = iVar4;
      uVar7 = *(undefined8 *)(lVar5 + uVar6 * 8);
    } while (iVar4 != 0);
  }
  return uVar7;
}



// FUNCTION 142ebc2f0 FUN_142ebc2f0 body=611 status=ok
// SIG undefined FUN_142ebc2f0(void)

void FUN_142ebc2f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x30c8) == '\0') {
    if (*(int *)(param_1 + 0x3090) < 3) {
      bVar7 = DAT_14c760e14;
      if ((*(uint *)(lVar5 + 0x48) & 1) == 0) goto LAB_142ebc341;
    }
    else {
      bVar7 = (byte)*(uint *)(lVar5 + 0x48) & 1;
    }
  }
  else {
LAB_142ebc341:
    bVar7 = 0;
  }
  iVar1 = (&DAT_14ca814b8)
          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) * 0xf];
  fVar10 = *(float *)(DAT_14ca27028 + 4);
  iVar4 = FUN_140347e80(param_1);
  FUN_1414998c8(local_108,param_1);
  bVar3 = DAT_14c760e14;
  fVar9 = (local_100 + local_fc) * 0.5;
  fVar12 = 0.0001;
  if (0.0001 <= fVar9) {
    fVar12 = fVar9;
  }
  if (((*(byte *)(lVar5 + 0x49) & 0x10) == 0) ||
     (bVar7 != 1 || (*(byte *)(lVar5 + 0x55) & 0x80) == 0)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = *(char *)(lVar5 + 0xcb);
  }
  fVar12 = (0.18 / fVar12) * local_f8;
  *(undefined4 *)(param_1 + 0x13694) = 0x3f800000;
  lVar5 = *(longlong *)(param_1 + 0x3108);
  if (lVar5 == 0) goto LAB_142ebc4f7;
  fVar9 = fVar12;
  if (iVar1 == 1 && (bVar3 & 1) == 0) {
LAB_142ebc4ae:
    *(float *)(param_1 + 0x13694) = fVar9;
LAB_142ebc4c0:
    bVar8 = false;
  }
  else {
    if (cVar6 == '\0') {
      fVar9 = 1.0;
      goto LAB_142ebc4c0;
    }
    fVar9 = fVar10;
    if (0.0 < fVar10) goto LAB_142ebc4ae;
    fVar10 = (float)FUN_14064fe5c(param_1 + 0x27fc);
    plVar2 = *(longlong **)(param_1 + 0x30d8);
    if (plVar2 == (longlong *)0x0) {
      fVar11 = 0.0;
      fVar9 = 1.0;
      if (iVar4 != 2) goto LAB_142ebc470;
    }
    else {
      fVar9 = *(float *)(plVar2 + 0xce);
      if (iVar4 != 2) {
        fVar11 = (float)(**(code **)(*plVar2 + 0x88))();
LAB_142ebc470:
        fVar12 = (float)(~-(uint)(0.0 < fVar11) & 0x3f800000 | (uint)fVar11 & -(uint)(0.0 < fVar11))
        ;
      }
    }
    fVar9 = fVar10 * fVar12 * fVar9;
    *(float *)(param_1 + 0x13694) = fVar9;
    lVar5 = *(longlong *)(param_1 + 0x3108);
    bVar8 = lVar5 != 0;
    if (!bVar8) goto LAB_142ebc4f7;
  }
  *(float *)(lVar5 + 0x660) = fVar9;
  *(bool *)(*(longlong *)(param_1 + 0x3108) + 0x664) = bVar8;
  if ((*(byte *)(param_1 + 0x125b0) & 1) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x3108) + 0x12a0) = *(undefined4 *)(param_1 + 0x13694);
  }
LAB_142ebc4f7:
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ebc554 FUN_142ebc554 body=69 status=ok
// SIG undefined FUN_142ebc554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebc554(void)

{
  _DAT_14ca27890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebc596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27898,1);
  return;
}



// FUNCTION 142ebc599 FUN_142ebc599 body=69 status=ok
// SIG undefined FUN_142ebc599(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebc599(void)

{
  _DAT_14ca278a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebc5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca278b0,1);
  return;
}



// FUNCTION 142ebc5de FUN_142ebc5de body=69 status=ok
// SIG undefined FUN_142ebc5de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebc5de(void)

{
  _DAT_14ca278c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebc620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca278c8,1);
  return;
}



// FUNCTION 142ebc623 FUN_142ebc623 body=69 status=ok
// SIG undefined FUN_142ebc623(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ebc623(void)

{
  _DAT_14ca278d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ebc665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca278e0,1);
  return;
}



// FUNCTION 142ebc668 FUN_142ebc668 body=576 status=ok
// SIG undefined FUN_142ebc668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebc668(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a340) {
    FUN_144b3d300(&DAT_14ca2a340);
    if (DAT_14ca2a340 == -1) {
      FUN_142edcfac();
      if ((DAT_14ca2a437 & 2) == 0) {
        DAT_14ca2a437 = DAT_14ca2a437 | 2;
        _DAT_14ca2a3d8 = L"FBloomFindKernelCenterCS";
        _DAT_14ca2a3f0 = FUN_146826540;
        _DAT_14ca2a3f8 = FUN_146825d77;
        _DAT_14ca2a400 = FUN_146825fd6;
        _DAT_14ca2a408 = FUN_1407e02ea;
        _DAT_14ca2a410 = FUN_146826273;
        _DAT_14ca2a3e8 = FUN_142edd30c;
        _DAT_14ca2a428 = 0xffffffff000000e0;
        _DAT_14ca2a430 = 8;
        DAT_14ca2a434 = 0;
        _DAT_14ca2a418 = &LAB_142edd338;
        _DAT_14ca2a438 = L"BASE";
        DAT_14ca2a462 = 4;
        _DAT_14ca2a440 = FUN_140b35ae4();
        _DAT_14ca2a448 = DAT_14ca2a3e0;
        _DAT_14ca2a450 = &LAB_14682652b;
        DAT_14ca2a3e0 = &DAT_14ca2a438;
        DAT_14ca2a435 = DAT_14ca2a435 + '\x01';
        _DAT_14ca2a458 = 0x100000000;
        if (*(char *)(_DAT_14ca2a440 + 100) != '\0') {
          DAT_14ca2a436 = DAT_14ca2a436 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2a3d0);
      }
      FUN_140db5666(&DAT_14ca2a298,0,&DAT_14ca2a3d0,L"FBloomFindKernelCenterCS",
                    L"/Engine/Private/Bloom/BloomFindKernelCenter.usf",L"MainCS",5,1,FUN_142edcf16,
                    FUN_142edceb6,&LAB_142edcea0,&LAB_142edce9c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2a348);
      _DAT_14ca2a298 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edcfa0);
      _Init_thread_footer(&DAT_14ca2a340);
    }
  }
  return &DAT_14ca2a298;
}



// FUNCTION 142ebc8a8 FUN_142ebc8a8 body=576 status=ok
// SIG undefined FUN_142ebc8a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebc8a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a510) {
    FUN_144b3d300(&DAT_14ca2a510);
    if (DAT_14ca2a510 == -1) {
      FUN_142edd44c();
      if ((DAT_14ca2a607 & 2) == 0) {
        DAT_14ca2a607 = DAT_14ca2a607 | 2;
        _DAT_14ca2a5a8 = L"FBloomSurveyMaxScatterDispersionCS";
        _DAT_14ca2a5c0 = FUN_146826540;
        _DAT_14ca2a5c8 = FUN_146825d77;
        _DAT_14ca2a5d0 = FUN_146825fd6;
        _DAT_14ca2a5d8 = FUN_1407e02ea;
        _DAT_14ca2a5e0 = FUN_146826273;
        _DAT_14ca2a5b8 = FUN_142edd9cc;
        _DAT_14ca2a5f8 = 0xffffffff000000e0;
        _DAT_14ca2a600 = 8;
        DAT_14ca2a604 = 0;
        _DAT_14ca2a5e8 = &LAB_142edd9f8;
        _DAT_14ca2a608 = L"BASE";
        DAT_14ca2a632 = 4;
        _DAT_14ca2a610 = FUN_140b35ae4();
        _DAT_14ca2a618 = DAT_14ca2a5b0;
        _DAT_14ca2a620 = &LAB_14682652b;
        DAT_14ca2a5b0 = &DAT_14ca2a608;
        DAT_14ca2a605 = DAT_14ca2a605 + '\x01';
        _DAT_14ca2a628 = 0x100000000;
        if (*(char *)(_DAT_14ca2a610 + 100) != '\0') {
          DAT_14ca2a606 = DAT_14ca2a606 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2a5a0);
      }
      FUN_140db5666(&DAT_14ca2a468,0,&DAT_14ca2a5a0,L"FBloomSurveyMaxScatterDispersionCS",
                    L"/Engine/Private/Bloom/BloomSurveyMaxScatterDispersion.usf",L"MainCS",5,1,
                    FUN_142edd3b6,FUN_142edd356,&LAB_142edd340,&LAB_142edd33c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a518);
      _DAT_14ca2a468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edd440);
      _Init_thread_footer(&DAT_14ca2a510);
    }
  }
  return &DAT_14ca2a468;
}



// FUNCTION 142ebcae8 FUN_142ebcae8 body=576 status=ok
// SIG undefined FUN_142ebcae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebcae8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a6e0) {
    FUN_144b3d300(&DAT_14ca2a6e0);
    if (DAT_14ca2a6e0 == -1) {
      FUN_142eddb0c();
      if ((DAT_14ca2a7d7 & 2) == 0) {
        DAT_14ca2a7d7 = DAT_14ca2a7d7 | 2;
        _DAT_14ca2a778 = L"FBloomSurveyKernelCenterEnergyCS";
        _DAT_14ca2a790 = FUN_146826540;
        _DAT_14ca2a798 = FUN_146825d77;
        _DAT_14ca2a7a0 = FUN_146825fd6;
        _DAT_14ca2a7a8 = FUN_1407e02ea;
        _DAT_14ca2a7b0 = FUN_146826273;
        _DAT_14ca2a788 = FUN_142ede114;
        _DAT_14ca2a7c8 = 0xffffffff000000e0;
        _DAT_14ca2a7d0 = 8;
        DAT_14ca2a7d4 = 0;
        _DAT_14ca2a7b8 = &LAB_142ede140;
        _DAT_14ca2a7d8 = L"BASE";
        DAT_14ca2a802 = 4;
        _DAT_14ca2a7e0 = FUN_140b35ae4();
        _DAT_14ca2a7e8 = DAT_14ca2a780;
        _DAT_14ca2a7f0 = &LAB_14682652b;
        DAT_14ca2a780 = &DAT_14ca2a7d8;
        DAT_14ca2a7d5 = DAT_14ca2a7d5 + '\x01';
        _DAT_14ca2a7f8 = 0x100000000;
        if (*(char *)(_DAT_14ca2a7e0 + 100) != '\0') {
          DAT_14ca2a7d6 = DAT_14ca2a7d6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2a770);
      }
      FUN_140db5666(&DAT_14ca2a638,0,&DAT_14ca2a770,L"FBloomSurveyKernelCenterEnergyCS",
                    L"/Engine/Private/Bloom/BloomSurveyKernelCenterEnergy.usf",L"MainCS",5,1,
                    FUN_142edda76,FUN_142edda16,&LAB_142edda00,&LAB_142edd9fc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a6e8);
      _DAT_14ca2a638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eddb00);
      _Init_thread_footer(&DAT_14ca2a6e0);
    }
  }
  return &DAT_14ca2a638;
}



// FUNCTION 142ebcd28 FUN_142ebcd28 body=576 status=ok
// SIG undefined FUN_142ebcd28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebcd28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a8b0) {
    FUN_144b3d300(&DAT_14ca2a8b0);
    if (DAT_14ca2a8b0 == -1) {
      FUN_142ede254();
      if ((DAT_14ca2a9a7 & 2) == 0) {
        DAT_14ca2a9a7 = DAT_14ca2a9a7 | 2;
        _DAT_14ca2a948 = L"FBloomReduceKernelSurveyCS";
        _DAT_14ca2a960 = FUN_146826540;
        _DAT_14ca2a968 = FUN_146825d77;
        _DAT_14ca2a970 = FUN_146825fd6;
        _DAT_14ca2a978 = FUN_1407e02ea;
        _DAT_14ca2a980 = FUN_146826273;
        _DAT_14ca2a958 = FUN_142ede5b4;
        _DAT_14ca2a998 = 0xffffffff000000e0;
        _DAT_14ca2a9a0 = 8;
        DAT_14ca2a9a4 = 0;
        _DAT_14ca2a988 = &LAB_142ede5e0;
        _DAT_14ca2a9a8 = L"BASE";
        DAT_14ca2a9d2 = 4;
        _DAT_14ca2a9b0 = FUN_140b35ae4();
        _DAT_14ca2a9b8 = DAT_14ca2a950;
        _DAT_14ca2a9c0 = &LAB_14682652b;
        DAT_14ca2a950 = &DAT_14ca2a9a8;
        DAT_14ca2a9a5 = DAT_14ca2a9a5 + '\x01';
        _DAT_14ca2a9c8 = 0x100000000;
        if (*(char *)(_DAT_14ca2a9b0 + 100) != '\0') {
          DAT_14ca2a9a6 = DAT_14ca2a9a6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2a940);
      }
      FUN_140db5666(&DAT_14ca2a808,0,&DAT_14ca2a940,L"FBloomReduceKernelSurveyCS",
                    L"/Engine/Private/Bloom/BloomReduceKernelSurvey.usf",L"MainCS",5,1,FUN_142ede1be
                    ,FUN_142ede15e,&LAB_142ede148,&LAB_142ede144,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2a8b8);
      _DAT_14ca2a808 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ede248);
      _Init_thread_footer(&DAT_14ca2a8b0);
    }
  }
  return &DAT_14ca2a808;
}



// FUNCTION 142ebcf68 FUN_142ebcf68 body=576 status=ok
// SIG undefined FUN_142ebcf68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebcf68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2aa80) {
    FUN_144b3d300(&DAT_14ca2aa80);
    if (DAT_14ca2aa80 == -1) {
      FUN_142ede6f4();
      if ((DAT_14ca2ab77 & 2) == 0) {
        DAT_14ca2ab77 = DAT_14ca2ab77 | 2;
        _DAT_14ca2ab18 = L"FBloomSumScatterDispersionEnergyCS";
        _DAT_14ca2ab30 = FUN_146826540;
        _DAT_14ca2ab38 = FUN_146825d77;
        _DAT_14ca2ab40 = FUN_146825fd6;
        _DAT_14ca2ab48 = FUN_1407e02ea;
        _DAT_14ca2ab50 = FUN_146826273;
        _DAT_14ca2ab28 = FUN_142edeb64;
        _DAT_14ca2ab68 = 0xffffffff000000e0;
        _DAT_14ca2ab70 = 8;
        DAT_14ca2ab74 = 0;
        _DAT_14ca2ab58 = &LAB_142edeb90;
        _DAT_14ca2ab78 = L"BASE";
        DAT_14ca2aba2 = 4;
        _DAT_14ca2ab80 = FUN_140b35ae4();
        _DAT_14ca2ab88 = DAT_14ca2ab20;
        _DAT_14ca2ab90 = &LAB_14682652b;
        DAT_14ca2ab20 = &DAT_14ca2ab78;
        DAT_14ca2ab75 = DAT_14ca2ab75 + '\x01';
        _DAT_14ca2ab98 = 0x100000000;
        if (*(char *)(_DAT_14ca2ab80 + 100) != '\0') {
          DAT_14ca2ab76 = DAT_14ca2ab76 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2ab10);
      }
      FUN_140db5666(&DAT_14ca2a9d8,0,&DAT_14ca2ab10,L"FBloomSumScatterDispersionEnergyCS",
                    L"/Engine/Private/Bloom/BloomSumScatterDispersionEnergy.usf",L"MainCS",5,1,
                    FUN_142ede65e,FUN_142ede5fe,&LAB_142ede5e8,&LAB_142ede5e4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2aa88);
      _DAT_14ca2a9d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ede6e8);
      _Init_thread_footer(&DAT_14ca2aa80);
    }
  }
  return &DAT_14ca2a9d8;
}



// FUNCTION 142ebd1a8 FUN_142ebd1a8 body=576 status=ok
// SIG undefined FUN_142ebd1a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebd1a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ac50) {
    FUN_144b3d300(&DAT_14ca2ac50);
    if (DAT_14ca2ac50 == -1) {
      FUN_142edeca4();
      if ((DAT_14ca2ad47 & 2) == 0) {
        DAT_14ca2ad47 = DAT_14ca2ad47 | 2;
        _DAT_14ca2ace8 = L"FBloomPackKernelConstantsCS";
        _DAT_14ca2ad00 = FUN_146826540;
        _DAT_14ca2ad08 = FUN_146825d77;
        _DAT_14ca2ad10 = FUN_146825fd6;
        _DAT_14ca2ad18 = FUN_1407e02ea;
        _DAT_14ca2ad20 = FUN_146826273;
        _DAT_14ca2acf8 = FUN_142edf114;
        _DAT_14ca2ad38 = 0xffffffff000000e0;
        _DAT_14ca2ad40 = 8;
        DAT_14ca2ad44 = 0;
        _DAT_14ca2ad28 = &LAB_142edf140;
        _DAT_14ca2ad48 = L"BASE";
        DAT_14ca2ad72 = 4;
        _DAT_14ca2ad50 = FUN_140b35ae4();
        _DAT_14ca2ad58 = DAT_14ca2acf0;
        _DAT_14ca2ad60 = &LAB_14682652b;
        DAT_14ca2acf0 = &DAT_14ca2ad48;
        DAT_14ca2ad45 = DAT_14ca2ad45 + '\x01';
        _DAT_14ca2ad68 = 0x100000000;
        if (*(char *)(_DAT_14ca2ad50 + 100) != '\0') {
          DAT_14ca2ad46 = DAT_14ca2ad46 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2ace0);
      }
      FUN_140db5666(&DAT_14ca2aba8,0,&DAT_14ca2ace0,L"FBloomPackKernelConstantsCS",
                    L"/Engine/Private/Bloom/BloomPackKernelConstants.usf",L"MainCS",5,1,
                    FUN_142edec0e,FUN_142edebae,&LAB_142edeb98,&LAB_142edeb94,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2ac58);
      _DAT_14ca2aba8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edec98);
      _Init_thread_footer(&DAT_14ca2ac50);
    }
  }
  return &DAT_14ca2aba8;
}



// FUNCTION 142ebd3e8 FUN_142ebd3e8 body=576 status=ok
// SIG undefined FUN_142ebd3e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebd3e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ae20) {
    FUN_144b3d300(&DAT_14ca2ae20);
    if (DAT_14ca2ae20 == -1) {
      FUN_142edf254();
      if ((DAT_14ca2af17 & 2) == 0) {
        DAT_14ca2af17 = DAT_14ca2af17 | 2;
        _DAT_14ca2aeb8 = L"FBloomClampKernelCS";
        _DAT_14ca2aed0 = FUN_146826540;
        _DAT_14ca2aed8 = FUN_146825d77;
        _DAT_14ca2aee0 = FUN_146825fd6;
        _DAT_14ca2aee8 = FUN_1407e02ea;
        _DAT_14ca2aef0 = FUN_146826273;
        _DAT_14ca2aec8 = FUN_142edf63c;
        _DAT_14ca2af08 = 0xffffffff000000e0;
        _DAT_14ca2af10 = 8;
        DAT_14ca2af14 = 0;
        _DAT_14ca2aef8 = &LAB_142edf668;
        _DAT_14ca2af18 = L"BASE";
        DAT_14ca2af42 = 4;
        _DAT_14ca2af20 = FUN_140b35ae4();
        _DAT_14ca2af28 = DAT_14ca2aec0;
        _DAT_14ca2af30 = &LAB_14682652b;
        DAT_14ca2aec0 = &DAT_14ca2af18;
        DAT_14ca2af15 = DAT_14ca2af15 + '\x01';
        _DAT_14ca2af38 = 0x100000000;
        if (*(char *)(_DAT_14ca2af20 + 100) != '\0') {
          DAT_14ca2af16 = DAT_14ca2af16 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2aeb0);
      }
      FUN_140db5666(&DAT_14ca2ad78,0,&DAT_14ca2aeb0,L"FBloomClampKernelCS",
                    L"/Engine/Private/Bloom/BloomClampKernel.usf",L"MainCS",5,1,FUN_142edf1be,
                    FUN_142edf15e,&LAB_142edf148,&LAB_142edf144,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2ae28);
      _DAT_14ca2ad78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edf248);
      _Init_thread_footer(&DAT_14ca2ae20);
    }
  }
  return &DAT_14ca2ad78;
}



// FUNCTION 142ebd628 FUN_142ebd628 body=576 status=ok
// SIG undefined FUN_142ebd628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebd628(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2aff0) {
    FUN_144b3d300(&DAT_14ca2aff0);
    if (DAT_14ca2aff0 == -1) {
      FUN_142edf77c();
      if ((DAT_14ca2b0e7 & 2) == 0) {
        DAT_14ca2b0e7 = DAT_14ca2b0e7 | 2;
        _DAT_14ca2b088 = L"FBloomDownsampleKernelCS";
        _DAT_14ca2b0a0 = FUN_146826540;
        _DAT_14ca2b0a8 = FUN_146825d77;
        _DAT_14ca2b0b0 = FUN_146825fd6;
        _DAT_14ca2b0b8 = FUN_1407e02ea;
        _DAT_14ca2b0c0 = FUN_146826273;
        _DAT_14ca2b098 = FUN_142edfb64;
        _DAT_14ca2b0d8 = 0xffffffff000000e0;
        _DAT_14ca2b0e0 = 8;
        DAT_14ca2b0e4 = 0;
        _DAT_14ca2b0c8 = &LAB_142edfb90;
        _DAT_14ca2b0e8 = L"BASE";
        DAT_14ca2b112 = 4;
        _DAT_14ca2b0f0 = FUN_140b35ae4();
        _DAT_14ca2b0f8 = DAT_14ca2b090;
        _DAT_14ca2b100 = &LAB_14682652b;
        DAT_14ca2b090 = &DAT_14ca2b0e8;
        DAT_14ca2b0e5 = DAT_14ca2b0e5 + '\x01';
        _DAT_14ca2b108 = 0x100000000;
        if (*(char *)(_DAT_14ca2b0f0 + 100) != '\0') {
          DAT_14ca2b0e6 = DAT_14ca2b0e6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2b080);
      }
      FUN_140db5666(&DAT_14ca2af48,0,&DAT_14ca2b080,L"FBloomDownsampleKernelCS",
                    L"/Engine/Private/Bloom/BloomDownsampleKernel.usf",L"MainCS",5,1,FUN_142edf6e6,
                    FUN_142edf686,&LAB_142edf670,&LAB_142edf66c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2aff8);
      _DAT_14ca2af48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edf770);
      _Init_thread_footer(&DAT_14ca2aff0);
    }
  }
  return &DAT_14ca2af48;
}



// FUNCTION 142ebd868 FUN_142ebd868 body=576 status=ok
// SIG undefined FUN_142ebd868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebd868(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b1c0) {
    FUN_144b3d300(&DAT_14ca2b1c0);
    if (DAT_14ca2b1c0 == -1) {
      FUN_142edfca4();
      if ((DAT_14ca2b2b7 & 2) == 0) {
        DAT_14ca2b2b7 = DAT_14ca2b2b7 | 2;
        _DAT_14ca2b258 = L"FBloomResizeKernelCS";
        _DAT_14ca2b270 = FUN_146826540;
        _DAT_14ca2b278 = FUN_146825d77;
        _DAT_14ca2b280 = FUN_146825fd6;
        _DAT_14ca2b288 = FUN_1407e02ea;
        _DAT_14ca2b290 = FUN_146826273;
        _DAT_14ca2b268 = FUN_142ee0334;
        _DAT_14ca2b2a8 = 0xffffffff000000e0;
        _DAT_14ca2b2b0 = 8;
        DAT_14ca2b2b4 = 0;
        _DAT_14ca2b298 = &LAB_142ee0360;
        _DAT_14ca2b2b8 = L"BASE";
        DAT_14ca2b2e2 = 4;
        _DAT_14ca2b2c0 = FUN_140b35ae4();
        _DAT_14ca2b2c8 = DAT_14ca2b260;
        _DAT_14ca2b2d0 = &LAB_14682652b;
        DAT_14ca2b260 = &DAT_14ca2b2b8;
        DAT_14ca2b2b5 = DAT_14ca2b2b5 + '\x01';
        _DAT_14ca2b2d8 = 0x100000000;
        if (*(char *)(_DAT_14ca2b2c0 + 100) != '\0') {
          DAT_14ca2b2b6 = DAT_14ca2b2b6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2b250);
      }
      FUN_140db5666(&DAT_14ca2b118,0,&DAT_14ca2b250,L"FBloomResizeKernelCS",
                    L"/Engine/Private/Bloom/BloomResizeKernel.usf",L"MainCS",5,1,FUN_142edfc0e,
                    FUN_142edfbae,&LAB_142edfb98,&LAB_142edfb94,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2b1c8);
      _DAT_14ca2b118 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142edfc98);
      _Init_thread_footer(&DAT_14ca2b1c0);
    }
  }
  return &DAT_14ca2b118;
}



// FUNCTION 142ebdaa8 FUN_142ebdaa8 body=576 status=ok
// SIG undefined FUN_142ebdaa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ebdaa8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b390) {
    FUN_144b3d300(&DAT_14ca2b390);
    if (DAT_14ca2b390 == -1) {
      FUN_142ee0474();
      if ((DAT_14ca2b487 & 2) == 0) {
        DAT_14ca2b487 = DAT_14ca2b487 | 2;
        _DAT_14ca2b428 = L"FBloomFinalizeApplyConstantsCS";
        _DAT_14ca2b440 = FUN_146826540;
        _DAT_14ca2b448 = FUN_146825d77;
        _DAT_14ca2b450 = FUN_146825fd6;
        _DAT_14ca2b458 = FUN_1407e02ea;
        _DAT_14ca2b460 = FUN_146826273;
        _DAT_14ca2b438 = FUN_142ee085c;
        _DAT_14ca2b478 = 0xffffffff000000e0;
        _DAT_14ca2b480 = 8;
        DAT_14ca2b484 = 0;
        _DAT_14ca2b468 = &LAB_142ee0888;
        _DAT_14ca2b488 = L"BASE";
        DAT_14ca2b4b2 = 4;
        _DAT_14ca2b490 = FUN_140b35ae4();
        _DAT_14ca2b498 = DAT_14ca2b430;
        _DAT_14ca2b4a0 = &LAB_14682652b;
        DAT_14ca2b430 = &DAT_14ca2b488;
        DAT_14ca2b485 = DAT_14ca2b485 + '\x01';
        _DAT_14ca2b4a8 = 0x100000000;
        if (*(char *)(_DAT_14ca2b490 + 100) != '\0') {
          DAT_14ca2b486 = DAT_14ca2b486 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2b420);
      }
      FUN_140db5666(&DAT_14ca2b2e8,0,&DAT_14ca2b420,L"FBloomFinalizeApplyConstantsCS",
                    L"/Engine/Private/Bloom/BloomFinalizeApplyConstants.usf",L"MainCS",5,1,
                    FUN_142ee03de,FUN_142ee037e,&LAB_142ee0368,&LAB_142ee0364,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2b398);
      _DAT_14ca2b2e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ee0468);
      _Init_thread_footer(&DAT_14ca2b390);
    }
  }
  return &DAT_14ca2b2e8;
}



// FUNCTION 142ebdce8 FUN_142ebdce8 body=18336 status=ok
// SIG undefined FUN_142ebdce8(void)

void FUN_142ebdce8(longlong param_1,longlong param_2,int *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ushort uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ushort uVar30;
  int *piVar31;
  ushort uVar32;
  ulonglong uVar33;
  int *piVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  longlong *plVar38;
  ulonglong *puVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  bool bVar43;
  bool bVar44;
  float fVar45;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  ulonglong *local_238;
  longlong local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  ulonglong local_210;
  int *local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  int *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  uint local_1a4;
  longlong local_1a0;
  ulonglong *local_198;
  longlong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [2];
  uint local_148;
  undefined4 uStack_144;
  undefined8 local_138;
  longlong lStack_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined2 local_f4;
  undefined4 uStack_f2;
  undefined1 uStack_ee;
  char cStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b5;
  undefined1 local_b3;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar23 = *(longlong *)(param_2 + 0x3108);
  lVar22 = *(longlong *)(param_2 + 0x13830);
  fVar3 = *(float *)(param_2 + 0x289c);
  local_180 = *(longlong *)(param_3 + 2) + (ulonglong)*(byte *)(param_3 + 9) * 2;
  local_188 = (ulonglong)
              ((int)((ulonglong)*(longlong *)(param_3 + 2) >> 0x20) +
              (uint)(*(byte *)(param_3 + 9) ^ 1) * 2);
  local_108 = DAT_14ca85098;
  local_118 = DAT_14ca85088;
  uStack_114 = DAT_14ca8508c;
  uStack_110 = DAT_14ca85090;
  uStack_10c = DAT_14ca85094;
  local_fc = local_180 & 0xffffffff | local_188 << 0x20;
  local_120 = &DAT_00020008;
  local_104 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_100 = 0;
  local_f4 = 1;
  uStack_f2 = 0x1010001;
  uStack_ee = 0;
  cStack_ed = '\x01';
  uStack_ec = 0;
  uStack_eb = 0xff;
  local_230 = param_1;
  local_218 = param_2;
  local_208 = param_3;
  if (((lVar23 != 0) && (*(longlong *)(lVar23 + 0x1d08) != 0)) && (*(int *)(DAT_14ca278b8 + 4) != 0)
     ) {
    bVar43 = false;
    lVar17 = FUN_14473c272(param_1,lVar23 + 0x1d08,0);
    lVar18 = *(longlong *)(lVar23 + 0x1d20);
    lVar40 = *(longlong *)(lVar22 + 0x10);
    cVar13 = FUN_140243908(&local_118,lVar17 + 0x68);
    if (cVar13 != '\0') {
      if (((local_120 == *(undefined1 **)(lVar17 + 0x60)) && (cStack_ed == *(char *)(lVar17 + 0x93))
          ) && ((int)local_fc == *(int *)(lVar17 + 0x84))) {
        bVar43 = local_fc._4_4_ == *(int *)(lVar17 + 0x88);
      }
      else {
        bVar43 = false;
      }
    }
    if (*local_208 == *(int *)(lVar23 + 0x1d2c)) {
      bVar44 = local_208[1] == *(int *)(lVar23 + 0x1d30);
    }
    else {
      bVar44 = false;
    }
    if (lVar40 == lVar18) {
      fVar45 = *(float *)(lVar23 + 0x1d28);
      uVar24 = *(uint *)(lVar23 + 0x1d34);
      if (*(longlong **)(lVar22 + 0x10) == (longlong *)0x0) {
        uVar15 = 0;
      }
      else {
        lVar18 = (**(code **)(**(longlong **)(lVar22 + 0x10) + 8))();
        uVar15 = (uint)*(byte *)(lVar18 + 0x30);
      }
      if (((ABS(fVar45 - fVar3) <= 1e-06) && ((bool)(bVar43 & bVar44))) && (uVar24 == uVar15)) {
        *param_4 = lVar17;
        uVar19 = FUN_144735dd8(local_230,lVar23 + 0x1d10,0);
        *param_5 = uVar19;
        goto LAB_142ebdf54;
      }
    }
  }
  puVar39 = *(ulonglong **)(local_230 + 0x18);
  uVar24 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_1a4 = *(uint *)((longlong)puVar39 + 0x17c);
  if (local_1a4 != uVar24) {
    *(uint *)((longlong)puVar39 + 0x17c) = uVar24;
    puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar20 + 3;
    if ((undefined8 *)puVar39[1] < puVar21) {
      FUN_140023dd8(puVar39,0x20);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 3;
    }
    *puVar39 = (ulonglong)puVar21;
    *(int *)(puVar39 + 0xc) = (int)puVar39[0xc] + 1;
    *(undefined8 **)puVar39[6] = puVar20;
    puVar39[6] = (ulonglong)(puVar20 + 1);
    uVar42 = *(undefined4 *)((longlong)puVar39 + 0x17c);
    puVar20[1] = 0;
    *puVar20 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar20 + 2) = uVar42;
  }
  uVar19 = *(ulonglong *)(lVar22 + 0x10);
  uVar24 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  uVar15 = uVar24 & 0x7fffffff ^ uVar24 >> 0x10;
  uVar24 = *(uint *)(local_230 + 0x248);
  uVar36 = uVar15 & uVar24;
  lVar18 = local_230 + 0x230;
  if (*(longlong *)(local_230 + 0x238) != 0) {
    lVar18 = *(longlong *)(local_230 + 0x238);
  }
  lVar40 = local_230 + 0x218;
  if (*(longlong *)(local_230 + 0x220) != 0) {
    lVar40 = *(longlong *)(local_230 + 0x220);
  }
  do {
    local_1d8 = lVar23;
    local_198 = puVar39;
    if (*(uint *)(lVar18 + (longlong)(int)uVar36 * 4) == uVar15) {
      iVar25 = *(int *)(lVar40 + (longlong)(int)uVar36 * 4);
      lVar17 = (longlong)iVar25 * 0x10;
      if (*(ulonglong *)(*(longlong *)(local_230 + 0x1d8) + lVar17) == uVar19) {
        if (((iVar25 != -1) &&
            (puVar39 = (ulonglong *)(*(longlong *)(local_230 + 0x1d8) + lVar17 + 8),
            puVar39 != (ulonglong *)0x0)) && (local_200 = *puVar39, local_200 != 0))
        goto LAB_142ebe15d;
        break;
      }
    }
    uVar36 = uVar36 + 1 & uVar24;
  } while (uVar36 != (*(int *)(local_230 + 0x24c) + uVar15 + 1 & uVar24));
  FUN_1447ec05f(&local_e8,uVar19,L"Bloom.FFT.OriginalKernel");
  local_200 = FUN_14473c272(local_230,&local_e8,0);
  if ((longlong *)CONCAT44(local_e8._4_4_,(int)local_e8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_e8._4_4_,(int)local_e8) + 0x38))();
  }
LAB_142ebe15d:
  lVar23 = local_230;
  uStack_e0._0_4_ = 0x10109;
  local_d8 = (undefined *)0x0;
  uVar24 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar24 = DAT_14ca84e48;
  }
  local_e8._0_4_ = uVar24 + (uVar24 == 0);
  puVar39 = (ulonglong *)(local_230 + 0x70);
  uVar41 = *(longlong *)(local_230 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar41 + 0x150;
  local_238 = puVar39;
  local_e8._4_4_ = (int)local_e8;
  if (*(ulonglong *)(local_230 + 0x78) < uVar19) {
    FUN_140023dd8(puVar39,0x160);
    uVar41 = *puVar39 + 0xf & 0xfffffffffffffff0;
    uVar19 = uVar41 + 0x150;
  }
  local_1c0 = lVar23 + 0x188;
  *(ulonglong *)(lVar23 + 0x70) = uVar19;
  FUN_1456bd266(uVar41,L"Bloom.FFT.KernelCenterCoord",&local_e8,0);
  iVar25 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar25 + 1U) {
    FUN_144737178(local_1c0,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar25 * 8) = uVar41;
  *(int *)(uVar41 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar20 + 6;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x40);
    puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar20 + 6;
  }
  *(undefined8 **)(local_230 + 0x70) = puVar21;
  *puVar20 = &PTR_FUN_14a2bacf8;
  local_1e8 = local_230 + 0x98;
  puVar20[3] = 0;
  puVar20[4] = 0;
  iVar25 = *(int *)(local_230 + 0xa0);
  *(uint *)(local_230 + 0xa0) = iVar25 + 1U;
  local_1a0 = lVar22;
  if (*(uint *)(local_230 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  lVar23 = local_230;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(local_230 + 0x98) + (longlong)iVar25 * 8) = puVar20;
  puVar20[2] = *(undefined8 *)(local_200 + 0x84);
  puVar20[3] = local_200;
  cVar13 = *(char *)(uVar41 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 8;
  if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x48);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 8;
  }
  puVar29 = puVar20 + 2;
  local_220 = lVar23 + 0x198;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar41 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 2;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar28 + 5) = 0;
  *puVar28 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar28 + 6) = cVar13 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar28 + 0x31) = 0;
  puVar28[7] = uVar41;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  local_1b0 = uVar41;
  local_190 = param_4;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[4] = puVar28;
  FUN_1405bfba3(lVar23,puVar28,0,2);
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebc668();
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2a298,0);
  FUN_142ebc668();
  uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
  uVar9 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  iVar25 = *(int *)(local_200 + 0x88) + 7;
  iVar27 = *(int *)(local_200 + 0x88) + 0xe;
  if (-1 < iVar25) {
    iVar27 = iVar25;
  }
  iVar25 = *(int *)(local_200 + 0x84) + 7;
  iVar16 = *(int *)(local_200 + 0x84) + 0xe;
  if (-1 < iVar25) {
    iVar16 = iVar25;
  }
  uVar30 = *(ushort *)((longlong)local_208 + 0x26);
  FUN_142edcfac();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FUN_1448f70da(uVar6,&DAT_14ca2a348,puVar29,&local_e8);
  FUN_140069376(lVar23);
  puVar39 = local_238;
  local_e8 = puVar29;
  if ((uVar30 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    uStack_e0._0_4_ = (undefined4)DAT_14ca2a390;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2a390 >> 0x20);
    if (DAT_14ca2a390 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a390 + 8) = *(int *)(DAT_14ca2a390 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2a348;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    *puVar20 = &PTR_FUN_14a2bad20;
    puVar20[0x37] = &DAT_14ca2a348;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = uVar9;
    *(int *)(puVar20 + 0x3b) = iVar16 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar27 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    local_228 = (undefined8 *)uVar9;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(local_230 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(local_230 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14ca2a390;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2a390 >> 0x20);
    if (DAT_14ca2a390 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a390 + 8) = *(int *)(DAT_14ca2a390 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2a348;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    puVar20[0x37] = &DAT_14ca2a348;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = local_228;
    *(int *)(puVar20 + 0x3b) = iVar16 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar27 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2bad00;
    *(undefined4 *)(puVar20 + 0x3d) = uVar42;
  }
  piVar31 = local_208;
  lVar23 = local_230;
  local_1d0 = (int *)(local_200 + 0x84);
  local_1e0 = local_230 + 0x168;
  iVar25 = *(int *)(local_230 + 0x170);
  *(uint *)(local_230 + 0x170) = iVar25 + 1U;
  if (*(uint *)(local_230 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar20);
  puVar39 = local_238;
  fVar45 = (float)*piVar31 * (float)piVar31[7];
  if (fVar45 <= 1.0) {
    fVar45 = 1.0;
  }
  fVar45 = (float)*local_1d0 / fVar45;
  if (fVar45 <= 1.0) {
    fVar45 = 1.0;
  }
  fVar45 = fVar45 * 0.5;
  iVar25 = (int)ROUND(-0.5 - (fVar45 + fVar45)) >> 1;
  iVar27 = 0xb - iVar25;
  iVar25 = 0x12 - iVar25;
  if (-1 < iVar27) {
    iVar25 = iVar27;
  }
  iVar27 = (iVar25 >> 3) * 2;
  local_148 = iVar27 * iVar27;
  uStack_e0._0_4_ = DAT_14ca85088;
  uStack_e0._4_4_ = DAT_14ca8508c;
  local_d8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  iVar25 = (iVar25 >> 3) * 0x10;
  local_b6 = 0;
  local_e8._0_4_ = 0x20008;
  local_e8._4_4_ = 0;
  local_b5 = 10;
  local_bc = 1;
  uStack_ba = 1;
  local_b8 = 0x101;
  local_c8 = 0;
  local_b3 = 0xff;
  local_d0 = (int *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  if (DAT_14ca84e40 <= iVar25) {
    iVar25 = DAT_14ca84e40;
  }
  local_c4 = 1;
  if (1 < iVar25) {
    local_c4 = iVar25;
  }
  uVar41 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar19 = uVar41 + 0x120;
  local_c0 = local_c4;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar19) {
    FUN_140023dd8(local_238,0x128);
    uVar41 = *puVar39 + 7 & 0xfffffffffffffff8;
    uVar19 = uVar41 + 0x120;
  }
  local_1c8 = lVar23 + 0x178;
  *(ulonglong *)(lVar23 + 0x70) = uVar19;
  FUN_1456bbb8c(uVar41,L"Debug.Bloom.Survey",&local_e8,0);
  iVar25 = *(int *)(lVar23 + 0x180);
  *(uint *)(lVar23 + 0x180) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x184) < iVar25 + 1U) {
    FUN_14472c0f6(local_1c8,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar25 * 8) = uVar41;
  *(int *)(uVar41 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
  uVar4 = *(undefined1 *)(uVar41 + 0x94);
  puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar20 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar20 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar20[1] = *(undefined8 *)(uVar41 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 0;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar20 + 6) = uVar4;
  *(undefined1 *)(puVar20 + 7) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
  puVar20[8] = uVar41;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  local_e8._0_4_ = (int)lVar23;
  local_e8._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uStack_e0 = &local_148;
  local_d8 = (undefined *)local_218;
  local_d0 = piVar31;
  uVar24 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar24 = DAT_14ca84e48;
  }
  lStack_130 = CONCAT44(lStack_130._4_4_,0x10109);
  uVar15 = DAT_14ca84e48;
  if (local_148 < DAT_14ca84e48) {
    uVar15 = local_148;
  }
  local_128 = (undefined *)0x0;
  local_138 = (undefined8 *)CONCAT44(uVar15 + (uVar15 == 0),uVar24 + (uVar24 == 0));
  uVar41 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar41 + 0x150;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar19) {
    FUN_140023dd8(local_238,0x160);
    uVar41 = *puVar39 + 0xf & 0xfffffffffffffff0;
    uVar19 = uVar41 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar19;
  FUN_1456bd266(uVar41,L"Bloom.FFT.MaxScatterDispersion",&local_138,0);
  iVar25 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar25 + 1U) {
    FUN_144737178(local_1c0,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar25 * 8) = uVar41;
  *(int *)(uVar41 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar28 + 8;
  local_210 = uVar41;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar28 + 8;
  }
  uVar19 = local_1b0;
  *(undefined8 **)(local_230 + 0x70) = puVar21;
  *puVar28 = &PTR_FUN_14a2bad38;
  puVar28[4] = 0;
  puVar28[5] = 0;
  puVar28[6] = 0;
  puVar28[7] = 0;
  iVar25 = *(int *)(local_230 + 0xa0);
  *(uint *)(local_230 + 0xa0) = iVar25 + 1U;
  if (*(uint *)(local_230 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  lVar23 = local_230;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(local_230 + 0x98) + (longlong)iVar25 * 8) = puVar28;
  *(float *)(puVar28 + 2) = fVar45;
  *(int *)((longlong)puVar28 + 0x14) = iVar27;
  puVar28[3] = *(undefined8 *)(local_200 + 0x84);
  puVar28[4] = local_200;
  cVar13 = *(char *)(uVar19 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar29 + 9;
  if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar29 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar29 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar29[1] = *(undefined8 *)(uVar19 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar29 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = uVar19;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar28[5] = puVar29;
  cVar13 = *(char *)(local_210 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar29 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x48);
    puVar29 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar29 + 8;
  }
  local_228 = (undefined8 *)CONCAT44(local_228._4_4_,iVar27);
  puVar1 = puVar28 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar29[1] = *(undefined8 *)(local_210 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 2;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 0;
  *puVar29 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar29 + 6) = cVar13 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
  puVar29[7] = local_210;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar28[6] = puVar29;
  puVar28[7] = puVar20;
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebc8a8();
  FUN_1448e935e(uVar6,&local_138,&DAT_14ca2a468,0);
  FUN_142ebc8a8();
  lVar22 = lStack_130;
  uVar6 = local_138;
  uVar30 = *(ushort *)((longlong)piVar31 + 0x26);
  FUN_142edd44c();
  local_138 = (undefined8 *)0x0;
  lStack_130 = 0;
  FUN_1448f70da(uVar6,&DAT_14ca2a518,puVar1,&local_138);
  FUN_140069376(lVar23);
  puVar39 = local_238;
  if ((uVar30 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar28 + 0x3d;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar28 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    lStack_130 = DAT_14ca2a560;
    if (DAT_14ca2a560 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a560 + 8) = *(int *)(DAT_14ca2a560 + 8) + 1;
      UNLOCK();
    }
    local_128 = &DAT_14ca2a518;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_138 = puVar1;
    FUN_140068f1a(puVar28,local_158,&local_138,uVar30);
    *puVar28 = &PTR_FUN_14a2bad60;
    puVar28[0x37] = &DAT_14ca2a518;
    puVar28[0x38] = puVar1;
    puVar28[0x39] = uVar6;
    puVar28[0x3a] = lVar22;
    *(undefined4 *)(puVar28 + 0x3b) = local_228._0_4_;
    *(undefined4 *)((longlong)puVar28 + 0x1dc) = local_228._0_4_;
    *(undefined4 *)(puVar28 + 0x3c) = 1;
    uVar42 = local_228._0_4_;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar28 + 0x3e;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar28 + 0x3e;
    }
    *(undefined8 **)(local_230 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(local_230 + 0x660);
    lStack_130 = DAT_14ca2a560;
    if (DAT_14ca2a560 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a560 + 8) = *(int *)(DAT_14ca2a560 + 8) + 1;
      UNLOCK();
    }
    local_128 = &DAT_14ca2a518;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_138 = puVar1;
    FUN_140068f1a(puVar28,local_158,&local_138,uVar30);
    puVar28[0x37] = &DAT_14ca2a518;
    puVar28[0x38] = puVar1;
    puVar28[0x39] = uVar6;
    puVar28[0x3a] = lVar22;
    *(undefined4 *)(puVar28 + 0x3b) = local_228._0_4_;
    *(undefined4 *)((longlong)puVar28 + 0x1dc) = local_228._0_4_;
    *(undefined4 *)(puVar28 + 0x3c) = 1;
    *puVar28 = &PTR_FUN_14a2bad40;
    *(undefined4 *)(puVar28 + 0x3d) = uVar42;
    piVar31 = local_208;
    uVar42 = local_228._0_4_;
  }
  iVar25 = *(int *)(local_230 + 0x170);
  *(uint *)(local_230 + 0x170) = iVar25 + 1U;
  if (*(uint *)(local_230 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  lVar23 = local_230;
  *(undefined8 **)(*(longlong *)(local_230 + 0x168) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x2c) = *(int *)(local_230 + 0x170) + -1;
  FUN_140069100(local_230,puVar28);
  FUN_142ec248a(&local_e8,local_210,0);
  puVar39 = local_238;
  uVar24 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar24 = DAT_14ca84e48;
  }
  lStack_130 = CONCAT44(lStack_130._4_4_,0x10109);
  uVar15 = DAT_14ca84e48;
  if (local_148 < DAT_14ca84e48) {
    uVar15 = local_148;
  }
  local_128 = (undefined *)0x0;
  local_138 = (undefined8 *)CONCAT44(uVar15 + (uVar15 == 0),uVar24 + (uVar24 == 0));
  uVar41 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar41 + 0x150;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar19) {
    FUN_140023dd8(local_238,0x160);
    uVar41 = *puVar39 + 0xf & 0xfffffffffffffff0;
    uVar19 = uVar41 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar19;
  FUN_1456bd266(uVar41,L"Bloom.FFT.KernelCenterEnergy",&local_138,0);
  iVar25 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar25 + 1U) {
    FUN_144737178(local_1c0,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar25 * 8) = uVar41;
  *(int *)(uVar41 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar28 + 10;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x60);
    puVar28 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar28 + 10;
  }
  *(undefined8 **)(local_230 + 0x70) = puVar21;
  *puVar28 = &PTR_FUN_14a2bad78;
  puVar28[4] = 0;
  puVar28[5] = 0;
  puVar28[6] = 0;
  puVar28[7] = 0;
  puVar28[8] = 0;
  iVar25 = *(int *)(local_230 + 0xa0);
  *(uint *)(local_230 + 0xa0) = iVar25 + 1U;
  local_1b8 = uVar41;
  if (*(uint *)(local_230 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  uVar19 = local_1b0;
  lVar23 = local_230;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(local_230 + 0x98) + (longlong)iVar25 * 8) = puVar28;
  *(float *)(puVar28 + 2) = fVar45;
  *(undefined4 *)((longlong)puVar28 + 0x14) = uVar42;
  puVar28[3] = *(undefined8 *)(local_200 + 0x84);
  puVar28[4] = local_200;
  cVar13 = *(char *)(local_1b0 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar29 + 9;
  if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar29 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar29 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar29[1] = *(undefined8 *)(uVar19 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar29 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = uVar19;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  uVar19 = local_1b8;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar28[5] = puVar29;
  cVar13 = *(char *)(local_210 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar29 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar29 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar29 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar29[1] = *(undefined8 *)(local_210 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar29 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = local_210;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar28[6] = puVar29;
  cVar13 = *(char *)(uVar19 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar29 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x48);
    puVar29 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar29 + 8;
  }
  puVar1 = puVar28 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar29[1] = *(undefined8 *)(uVar19 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 2;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 0;
  *puVar29 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar29 + 6) = cVar13 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
  puVar29[7] = uVar19;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar28[7] = puVar29;
  puVar28[8] = puVar20;
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebcae8();
  FUN_1448e935e(uVar6,&local_138,&DAT_14ca2a638,0);
  FUN_142ebcae8();
  lVar22 = lStack_130;
  uVar6 = local_138;
  uVar30 = *(ushort *)((longlong)piVar31 + 0x26);
  FUN_142eddb0c();
  local_138 = (undefined8 *)0x0;
  lStack_130 = 0;
  FUN_1448f70da(uVar6,&DAT_14ca2a6e8,puVar1,&local_138);
  FUN_140069376(lVar23);
  puVar39 = local_238;
  if ((uVar30 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    lStack_130 = DAT_14ca2a730;
    if (DAT_14ca2a730 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a730 + 8) = *(int *)(DAT_14ca2a730 + 8) + 1;
      UNLOCK();
    }
    local_128 = &DAT_14ca2a6e8;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_138 = puVar1;
    FUN_140068f1a(puVar20,local_158,&local_138,uVar30);
    *puVar20 = &PTR_FUN_14a2bada0;
    puVar20[0x37] = &DAT_14ca2a6e8;
    puVar20[0x38] = puVar1;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = lVar22;
    *(undefined4 *)(puVar20 + 0x3b) = local_228._0_4_;
    *(undefined4 *)((longlong)puVar20 + 0x1dc) = local_228._0_4_;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(lVar23 + 0x660);
    lStack_130 = DAT_14ca2a730;
    if (DAT_14ca2a730 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a730 + 8) = *(int *)(DAT_14ca2a730 + 8) + 1;
      UNLOCK();
    }
    local_128 = &DAT_14ca2a6e8;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_138 = puVar1;
    FUN_140068f1a(puVar20,local_158,&local_138,uVar30);
    puVar20[0x37] = &DAT_14ca2a6e8;
    puVar20[0x38] = puVar1;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = lVar22;
    *(undefined4 *)(puVar20 + 0x3b) = local_228._0_4_;
    *(undefined4 *)((longlong)puVar20 + 0x1dc) = local_228._0_4_;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2bad80;
    *(undefined4 *)(puVar20 + 0x3d) = uVar42;
    piVar31 = local_208;
  }
  uVar19 = local_1b8;
  iVar25 = *(int *)(lVar23 + 0x170);
  *(uint *)(lVar23 + 0x170) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar20);
  FUN_142ec248a(&local_e8,uVar19,1);
  uVar19 = local_200;
  if (1 < *local_1d0) {
    iVar25 = 0;
    piVar34 = local_1d0;
    uVar41 = local_200;
    do {
      puVar39 = local_238;
      uVar19 = uVar41;
      if (*(int *)(uVar41 + 0x88) < 2) break;
      uStack_e0._0_4_ = DAT_14ca85088;
      uStack_e0._4_4_ = DAT_14ca8508c;
      local_d8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
      iVar27 = (int)*(undefined8 *)piVar34;
      iVar26 = iVar27 + 7;
      iVar16 = (int)((ulonglong)*(undefined8 *)piVar34 >> 0x20);
      iVar37 = iVar16 + 7;
      iVar16 = iVar16 + 0xe;
      if (-1 < iVar37) {
        iVar16 = iVar37;
      }
      iVar27 = iVar27 + 0xe;
      if (-1 < iVar26) {
        iVar27 = iVar26;
      }
      local_c4 = iVar27 >> 3;
      if (DAT_14ca84e40 <= iVar27 >> 3) {
        local_c4 = DAT_14ca84e40;
      }
      if (local_c4 < 2) {
        local_c4 = 1;
      }
      local_c0 = iVar16 >> 3;
      if (DAT_14ca84e40 <= iVar16 >> 3) {
        local_c0 = DAT_14ca84e40;
      }
      local_b6 = 0;
      local_e8._0_4_ = 0x20008;
      local_e8._4_4_ = 0;
      local_b5 = 1;
      local_bc = 1;
      uStack_ba = 1;
      local_b8 = 0x101;
      local_c8 = 0;
      local_b3 = 0xff;
      local_d0 = (int *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
      if (local_c0 < 2) {
        local_c0 = 1;
      }
      uVar19 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar35 = uVar19 + 0x120;
      if (*(ulonglong *)(lVar23 + 0x78) < uVar35) {
        FUN_140023dd8(local_238,0x128);
        uVar19 = *puVar39 + 7 & 0xfffffffffffffff8;
        uVar35 = uVar19 + 0x120;
      }
      *(ulonglong *)(lVar23 + 0x70) = uVar35;
      FUN_1456bbb8c(uVar19,L"Bloom.FFT.KernelIntensity",&local_e8,0);
      iVar27 = *(int *)(lVar23 + 0x180);
      uVar24 = iVar27 + 1;
      *(uint *)(lVar23 + 0x180) = uVar24;
      if (*(uint *)(lVar23 + 0x184) < uVar24) {
        FUN_14472c0f6(local_1c8);
      }
      puVar39 = local_238;
      *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar27 * 8) = uVar19;
      *(int *)(uVar19 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
      puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar20 + 8;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
        FUN_140023dd8(local_238);
        puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar20 + 8;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar21;
      *puVar20 = &PTR_FUN_14a2badb8;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar20[6] = 0;
      iVar27 = *(int *)(lVar23 + 0xa0);
      uVar24 = iVar27 + 1;
      *(uint *)(lVar23 + 0xa0) = uVar24;
      if (*(uint *)(lVar23 + 0xa4) < uVar24) {
        FUN_1448cfae8(local_1e8);
      }
      puVar39 = local_238;
      *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar27 * 8) = puVar20;
      *(int *)(puVar20 + 2) = iVar25;
      puVar20[3] = *(undefined8 *)piVar34;
      puVar20[4] = uVar41;
      cVar13 = *(char *)(local_210 + 0x68);
      puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar28 + 9;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
        FUN_140023dd8(local_238);
        puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar28 + 9;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar21;
      puVar28[1] = *(undefined8 *)(local_210 + 8);
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 3;
      *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
      *puVar28 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
      puVar28[7] = 0;
      puVar28[8] = local_210;
      iVar27 = *(int *)(lVar23 + 0x1a0);
      *(uint *)(lVar23 + 0x1a0) = iVar27 + 1U;
      if (*(uint *)(lVar23 + 0x1a4) < iVar27 + 1U) {
        FUN_1447568fc(local_220,iVar27);
      }
      puVar39 = local_238;
      *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar27 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
      puVar20[5] = puVar28;
      uVar4 = *(undefined1 *)(uVar19 + 0x94);
      puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar28 + 9;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
        FUN_140023dd8(local_238,0x50);
        puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar28 + 9;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar21;
      puVar28[1] = *(undefined8 *)(uVar19 + 8);
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 0;
      *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar28 + 5) = 0;
      *puVar28 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar28 + 6) = uVar4;
      *(undefined1 *)(puVar28 + 7) = 0;
      *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
      puVar28[8] = uVar19;
      iVar27 = *(int *)(lVar23 + 0x1a0);
      *(uint *)(lVar23 + 0x1a0) = iVar27 + 1U;
      if (*(uint *)(lVar23 + 0x1a4) < iVar27 + 1U) {
        FUN_1447568fc(local_220,iVar27);
      }
      *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar27 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
      puVar20[6] = puVar28;
      puVar20 = puVar20 + 2;
      uVar6 = *(undefined8 *)(local_218 + 0x13818);
      FUN_142ebcf68();
      FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2a9d8,0);
      FUN_142ebcf68();
      uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
      local_1f8 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
      local_228 = (undefined8 *)CONCAT44(local_228._4_4_,*(undefined4 *)(uVar19 + 0x84));
      uVar42 = *(undefined4 *)(uVar19 + 0x88);
      uVar30 = *(ushort *)((longlong)piVar31 + 0x26);
      FUN_142ede6f4();
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      uStack_e0._0_4_ = 0;
      uStack_e0._4_4_ = 0;
      FUN_1448f70da(uVar6,&DAT_14ca2aa88,puVar20,&local_e8);
      FUN_140069376(lVar23);
      puVar39 = local_238;
      local_e8 = puVar20;
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        if ((uVar30 & 4) == 0) {
          puVar21 = *(undefined8 **)(local_230 + 0x78);
          puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
          goto LAB_142ebfa9c;
        }
        uVar32 = uVar30 & 0xfff9 | 2;
        puVar21 = *(undefined8 **)(local_230 + 0x78);
        puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
LAB_142ebfc67:
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar25);
        puVar29 = puVar28 + 0x3e;
        if (puVar21 < puVar29) {
          FUN_140023dd8(local_238,0x1f8);
          puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar28 + 0x3e;
        }
        *(undefined8 **)(local_230 + 0x70) = puVar29;
        uVar5 = *(undefined4 *)(local_230 + 0x660);
        uStack_e0._0_4_ = (undefined4)DAT_14ca2aad0;
        uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2aad0 >> 0x20);
        if (DAT_14ca2aad0 != 0) {
          LOCK();
          *(int *)(DAT_14ca2aad0 + 8) = *(int *)(DAT_14ca2aad0 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14ca2aa88;
        local_248 = CONCAT71(local_248._1_7_,2);
        FUN_140068f1a(puVar28,&local_138,&local_e8,uVar32);
        puVar28[0x37] = &DAT_14ca2aa88;
        puVar28[0x38] = puVar20;
        puVar28[0x39] = uVar6;
        puVar28[0x3a] = local_1f8;
        *(undefined4 *)(puVar28 + 0x3b) = local_228._0_4_;
        *(undefined4 *)((longlong)puVar28 + 0x1dc) = uVar42;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
        *puVar28 = &PTR_FUN_14a2badc0;
        *(undefined4 *)(puVar28 + 0x3d) = uVar5;
        iVar25 = (int)local_1f0;
      }
      else {
        uVar32 = uVar30;
        if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
          uVar32 = uVar30 & 0xfff9 | 4;
        }
        puVar21 = *(undefined8 **)(local_230 + 0x78);
        puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
        uVar8 = uVar30 & 4;
        uVar30 = uVar32;
        if (uVar8 != 0) goto LAB_142ebfc67;
LAB_142ebfa9c:
        puVar29 = puVar28 + 0x3d;
        if (puVar21 < puVar29) {
          FUN_140023dd8(local_238,0x1f0);
          puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar28 + 0x3d;
        }
        *local_238 = (ulonglong)puVar29;
        uStack_e0._0_4_ = (undefined4)DAT_14ca2aad0;
        uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2aad0 >> 0x20);
        if (DAT_14ca2aad0 != 0) {
          LOCK();
          *(int *)(DAT_14ca2aad0 + 8) = *(int *)(DAT_14ca2aad0 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14ca2aa88;
        local_248 = CONCAT71(local_248._1_7_,2);
        FUN_140068f1a(puVar28,&local_138,&local_e8,uVar30);
        *puVar28 = &PTR_FUN_14a2bade0;
        puVar28[0x37] = &DAT_14ca2aa88;
        puVar28[0x38] = puVar20;
        puVar28[0x39] = uVar6;
        puVar28[0x3a] = local_1f8;
        *(undefined4 *)(puVar28 + 0x3b) = local_228._0_4_;
        *(undefined4 *)((longlong)puVar28 + 0x1dc) = uVar42;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
      }
      piVar31 = local_208;
      lVar23 = local_230;
      iVar27 = *(int *)(local_230 + 0x170);
      *(uint *)(local_230 + 0x170) = iVar27 + 1U;
      if (*(uint *)(local_230 + 0x174) < iVar27 + 1U) {
        FUN_14470e57a(local_1e0,iVar27);
      }
      piVar34 = (int *)(uVar19 + 0x84);
      *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar27 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
      FUN_140069100(lVar23,puVar28);
      iVar25 = iVar25 + 1;
      uVar41 = uVar19;
    } while (1 < *piVar34);
  }
  puVar39 = local_238;
  local_d8 = (undefined *)0x0;
  uVar24 = 0x40;
  if (DAT_14ca84e48 < 0x40) {
    uVar24 = DAT_14ca84e48;
  }
  local_e8._0_4_ = uVar24 + (uVar24 == 0);
  local_e8._4_4_ = 1;
  uStack_e0._0_4_ = 0x10109;
  uVar35 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar41 = uVar35 + 0x150;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar41) {
    FUN_140023dd8(local_238,0x160);
    uVar35 = *puVar39 + 0xf & 0xfffffffffffffff0;
    uVar41 = uVar35 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar41;
  FUN_1456bd266(uVar35,L"Bloom.FFT.KernelConstants",&local_e8,0);
  iVar25 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar25 + 1U) {
    FUN_144737178(local_1c0,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar25 * 8) = uVar35;
  *(int *)(uVar35 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar20 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar20 + 8;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  *puVar20 = &PTR_FUN_14a2badf8;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[6] = 0;
  iVar25 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  uVar41 = local_1b0;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar25 * 8) = puVar20;
  cVar13 = *(char *)(local_1b0 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  local_1f0 = uVar35;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  puVar29 = puVar20 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar41 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = uVar41;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  uVar41 = local_1b8;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  *puVar29 = puVar28;
  cVar13 = *(char *)(local_1b8 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  local_228 = puVar29;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  uVar35 = local_1f0;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar41 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = uVar41;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar29 = local_228;
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[3] = puVar28;
  cVar13 = *(char *)(local_210 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(local_210 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = local_210;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[4] = puVar28;
  puVar20[5] = uVar19;
  cVar13 = *(char *)(uVar35 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x48);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 8;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar35 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 2;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar28 + 5) = 0;
  *puVar28 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar28 + 6) = cVar13 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar28 + 0x31) = 0;
  puVar28[7] = uVar35;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[6] = puVar28;
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebd1a8();
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2aba8,0);
  FUN_142ebd1a8();
  uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
  uVar9 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  uVar30 = *(ushort *)((longlong)piVar31 + 0x26);
  FUN_142edeca4();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FUN_1448f70da(uVar6,&DAT_14ca2ac58,puVar29,&local_e8);
  FUN_140069376(lVar23);
  uVar11 = local_e8._4_4_;
  uVar42 = (int)local_e8;
  puVar39 = local_238;
  local_e8._0_4_ = (int)puVar29;
  uVar5 = (int)local_e8;
  local_e8._4_4_ = (int)((ulonglong)puVar29 >> 0x20);
  uVar12 = local_e8._4_4_;
  local_e8._0_4_ = uVar42;
  local_e8._4_4_ = uVar11;
  if ((uVar30 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    uStack_e0._0_4_ = (undefined4)DAT_14ca2aca0;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2aca0 >> 0x20);
    if (DAT_14ca2aca0 != 0) {
      LOCK();
      *(int *)(DAT_14ca2aca0 + 8) = *(int *)(DAT_14ca2aca0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2ac58;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_e8._0_4_ = uVar5;
    local_e8._4_4_ = uVar12;
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    *puVar20 = &PTR_FUN_14a2bae20;
    puVar20[0x37] = &DAT_14ca2ac58;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = uVar9;
    puVar20[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(lVar23 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14ca2aca0;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2aca0 >> 0x20);
    if (DAT_14ca2aca0 != 0) {
      LOCK();
      *(int *)(DAT_14ca2aca0 + 8) = *(int *)(DAT_14ca2aca0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2ac58;
    local_248 = CONCAT71(local_248._1_7_,2);
    local_e8._0_4_ = uVar5;
    local_e8._4_4_ = uVar12;
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    puVar20[0x37] = &DAT_14ca2ac58;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = uVar6;
    puVar20[0x3a] = uVar9;
    puVar20[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2bae00;
    *(undefined4 *)(puVar20 + 0x3d) = uVar42;
    lVar23 = local_230;
  }
  piVar31 = local_208;
  iVar25 = *(int *)(lVar23 + 0x170);
  *(uint *)(lVar23 + 0x170) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar20);
  puVar39 = local_238;
  uStack_e0._0_4_ = DAT_14ca85088;
  uStack_e0._4_4_ = DAT_14ca8508c;
  local_d8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  iVar25 = (int)*(undefined8 *)local_1d0;
  local_c4 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_c4 = iVar25;
  }
  if (local_c4 < 2) {
    local_c4 = 1;
  }
  iVar25 = (int)((ulonglong)*(undefined8 *)local_1d0 >> 0x20);
  local_c0 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_c0 = iVar25;
  }
  local_b6 = 0;
  local_e8._0_4_ = 0x20008;
  local_e8._4_4_ = 0;
  local_b5 = 10;
  local_bc = 1;
  uStack_ba = 1;
  local_b8 = 0x101;
  local_c8 = 0;
  local_b3 = 0xff;
  local_d0 = (int *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  if (local_c0 < 2) {
    local_c0 = 1;
  }
  uVar41 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar19 = uVar41 + 0x120;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar19) {
    FUN_140023dd8(local_238,0x128);
    uVar41 = *puVar39 + 7 & 0xfffffffffffffff8;
    uVar19 = uVar41 + 0x120;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar19;
  FUN_1456bbb8c(uVar41,L"Bloom.FFT.ClampedKernel",&local_e8,0);
  iVar25 = *(int *)(lVar23 + 0x180);
  *(uint *)(lVar23 + 0x180) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x184) < iVar25 + 1U) {
    FUN_14472c0f6(local_1c8,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar25 * 8) = uVar41;
  *(int *)(uVar41 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
  puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar20 + 6;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x40);
    puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar20 + 6;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  *puVar20 = &PTR_FUN_14a2bae38;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  iVar25 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar25 * 8) = puVar20;
  bVar14 = (**(code **)(*DAT_14ca27dc8 + 0xa8))();
  uVar19 = local_1f0;
  puVar39 = local_238;
  *(uint *)(puVar20 + 2) = (uint)bVar14;
  puVar20[3] = local_200;
  cVar13 = *(char *)(local_1f0 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar19 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = uVar19;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[4] = puVar28;
  uVar4 = *(undefined1 *)(uVar41 + 0x94);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  puVar29 = puVar20 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar41 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 0;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar28 + 5) = 0;
  *puVar28 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar28 + 6) = uVar4;
  *(undefined1 *)(puVar28 + 7) = 0;
  *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
  puVar28[8] = uVar41;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[5] = puVar28;
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebd3e8();
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2ad78,0);
  FUN_142ebd3e8();
  uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
  local_228 = (undefined8 *)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  iVar25 = *(int *)(local_200 + 0x88) + 7;
  iVar27 = *(int *)(local_200 + 0x88) + 0xe;
  if (-1 < iVar25) {
    iVar27 = iVar25;
  }
  iVar25 = *(int *)(local_200 + 0x84) + 7;
  iVar16 = *(int *)(local_200 + 0x84) + 0xe;
  if (-1 < iVar25) {
    iVar16 = iVar25;
  }
  uVar30 = *(ushort *)((longlong)piVar31 + 0x26);
  FUN_142edf254();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  local_1f8 = uVar6;
  FUN_1448f70da(uVar6,&DAT_14ca2ae28,puVar29,&local_e8);
  FUN_140069376(lVar23);
  puVar39 = local_238;
  local_e8 = puVar29;
  if ((uVar30 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    uStack_e0._0_4_ = (undefined4)DAT_14ca2ae70;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2ae70 >> 0x20);
    if (DAT_14ca2ae70 != 0) {
      LOCK();
      *(int *)(DAT_14ca2ae70 + 8) = *(int *)(DAT_14ca2ae70 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2ae28;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    *puVar20 = &PTR_FUN_14a2bae60;
    puVar20[0x37] = &DAT_14ca2ae28;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = local_1f8;
    puVar20[0x3a] = local_228;
    *(int *)(puVar20 + 0x3b) = iVar16 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar27 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(local_230 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(local_230 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14ca2ae70;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2ae70 >> 0x20);
    if (DAT_14ca2ae70 != 0) {
      LOCK();
      *(int *)(DAT_14ca2ae70 + 8) = *(int *)(DAT_14ca2ae70 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2ae28;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    puVar20[0x37] = &DAT_14ca2ae28;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = local_1f8;
    puVar20[0x3a] = local_228;
    *(int *)(puVar20 + 0x3b) = iVar16 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar27 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2bae40;
    *(undefined4 *)(puVar20 + 0x3d) = uVar42;
  }
  piVar31 = local_208;
  lVar23 = local_230;
  iVar25 = *(int *)(local_230 + 0x170);
  *(uint *)(local_230 + 0x170) = iVar25 + 1U;
  if (*(uint *)(local_230 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar20);
  iVar25 = *piVar31;
  if (*piVar31 < piVar31[1]) {
    iVar25 = piVar31[1];
  }
  fVar45 = (float)iVar25 * (float)piVar31[7];
  if (fVar45 <= 1.0) {
    fVar45 = 1.0;
  }
  fVar45 = (float)*local_1d0 / fVar45;
  uVar19 = local_1f0;
  if (2.0 < fVar45) {
    do {
      puVar39 = local_238;
      uStack_e0._0_4_ = DAT_14ca85088;
      uStack_e0._4_4_ = DAT_14ca8508c;
      local_d8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
      uVar19 = *(ulonglong *)(uVar41 + 0x84);
      local_c4 = (int)(((uint)(uVar19 >> 0x1f) & 1) + (int)uVar19) >> 1;
      local_c0 = (int)(uVar19 >> 0x20) / 2;
      if (DAT_14ca84e40 <= local_c4) {
        local_c4 = DAT_14ca84e40;
      }
      if (local_c4 < 2) {
        local_c4 = 1;
      }
      if (DAT_14ca84e40 <= local_c0) {
        local_c0 = DAT_14ca84e40;
      }
      local_b6 = 0;
      local_e8._0_4_ = 0x20008;
      local_e8._4_4_ = 0;
      local_b5 = 10;
      local_bc = 1;
      uStack_ba = 1;
      local_b8 = 0x101;
      local_c8 = 0;
      local_b3 = 0xff;
      local_d0 = (int *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
      if (local_c0 < 2) {
        local_c0 = 1;
      }
      uVar35 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar19 = uVar35 + 0x120;
      if (*(ulonglong *)(lVar23 + 0x78) < uVar19) {
        FUN_140023dd8(local_238,0x128);
        uVar35 = *puVar39 + 7 & 0xfffffffffffffff8;
        uVar19 = uVar35 + 0x120;
      }
      *(ulonglong *)(lVar23 + 0x70) = uVar19;
      FUN_1456bbb8c(uVar35,L"Bloom.FFT.DownsampleKernel",&local_e8,0);
      iVar25 = *(int *)(lVar23 + 0x180);
      *(uint *)(lVar23 + 0x180) = iVar25 + 1U;
      if (*(uint *)(lVar23 + 0x184) < iVar25 + 1U) {
        FUN_14472c0f6(local_1c8,iVar25);
      }
      puVar39 = local_238;
      *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar25 * 8) = uVar35;
      *(int *)(uVar35 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
      puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar20 + 6;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
        FUN_140023dd8(local_238,0x40);
        puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar20 + 6;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar21;
      *puVar20 = &PTR_FUN_14a2bae78;
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      iVar25 = *(int *)(lVar23 + 0xa0);
      *(uint *)(lVar23 + 0xa0) = iVar25 + 1U;
      if (*(uint *)(lVar23 + 0xa4) < iVar25 + 1U) {
        FUN_1448cfae8(local_1e8,iVar25);
      }
      puVar39 = local_238;
      *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar25 * 8) = puVar20;
      puVar20[2] = *(undefined8 *)(uVar41 + 0x84);
      puVar20[3] = uVar41;
      puVar20[4] = DAT_14c9c0de0;
      uVar4 = *(undefined1 *)(uVar35 + 0x94);
      puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar28 + 9;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
        FUN_140023dd8(local_238,0x50);
        puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar28 + 9;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar21;
      puVar28[1] = *(undefined8 *)(uVar35 + 8);
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 0;
      *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar28 + 5) = 0;
      *puVar28 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar28 + 6) = uVar4;
      *(undefined1 *)(puVar28 + 7) = 0;
      *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
      puVar28[8] = uVar35;
      iVar25 = *(int *)(lVar23 + 0x1a0);
      *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
      if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
        FUN_1447568fc(local_220,iVar25);
      }
      *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
      puVar20[5] = puVar28;
      puVar20 = puVar20 + 2;
      uVar6 = *(undefined8 *)(local_218 + 0x13818);
      FUN_142ebd628();
      FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2af48,0);
      FUN_142ebd628();
      uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
      local_1f8 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
      iVar25 = *(int *)(uVar35 + 0x88) + 7;
      iVar27 = *(int *)(uVar35 + 0x88) + 0xe;
      if (-1 < iVar25) {
        iVar27 = iVar25;
      }
      iVar25 = *(int *)(uVar35 + 0x84) + 7;
      iVar16 = *(int *)(uVar35 + 0x84) + 0xe;
      if (-1 < iVar25) {
        iVar16 = iVar25;
      }
      uVar30 = *(ushort *)((longlong)local_208 + 0x26);
      FUN_142edf77c();
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      uStack_e0._0_4_ = 0;
      uStack_e0._4_4_ = 0;
      local_228 = (undefined8 *)uVar6;
      FUN_1448f70da(uVar6,&DAT_14ca2aff8,puVar20,&local_e8);
      FUN_140069376(lVar23);
      uVar6 = local_1f8;
      puVar39 = local_238;
      local_e8 = puVar20;
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        if ((uVar30 & 4) == 0) {
          puVar21 = *(undefined8 **)(local_230 + 0x78);
          puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
          goto LAB_142ec0f37;
        }
        uVar32 = uVar30 & 0xfff9 | 2;
        puVar21 = *(undefined8 **)(local_230 + 0x78);
        puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
LAB_142ec10ca:
        puVar29 = puVar28 + 0x3e;
        local_210 = uVar35;
        if (puVar21 < puVar29) {
          FUN_140023dd8(local_238,0x1f8);
          puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar28 + 0x3e;
        }
        *(undefined8 **)(local_230 + 0x70) = puVar29;
        uVar42 = *(undefined4 *)(local_230 + 0x660);
        uStack_e0._0_4_ = (undefined4)DAT_14ca2b040;
        uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2b040 >> 0x20);
        if (DAT_14ca2b040 != 0) {
          LOCK();
          *(int *)(DAT_14ca2b040 + 8) = *(int *)(DAT_14ca2b040 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14ca2aff8;
        local_248 = CONCAT71(local_248._1_7_,2);
        FUN_140068f1a(puVar28,&local_138,&local_e8,uVar32);
        puVar28[0x37] = &DAT_14ca2aff8;
        puVar28[0x38] = puVar20;
        puVar28[0x39] = local_228;
        puVar28[0x3a] = uVar6;
        *(int *)(puVar28 + 0x3b) = iVar16 >> 3;
        *(int *)((longlong)puVar28 + 0x1dc) = iVar27 >> 3;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
        *puVar28 = &PTR_FUN_14a2bae80;
        *(undefined4 *)(puVar28 + 0x3d) = uVar42;
        uVar41 = local_210;
      }
      else {
        uVar32 = uVar30;
        if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
          uVar32 = uVar30 & 0xfff9 | 4;
        }
        puVar21 = *(undefined8 **)(local_230 + 0x78);
        puVar28 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
        uVar8 = uVar30 & 4;
        uVar30 = uVar32;
        if (uVar8 != 0) goto LAB_142ec10ca;
LAB_142ec0f37:
        puVar29 = puVar28 + 0x3d;
        if (puVar21 < puVar29) {
          FUN_140023dd8(local_238,0x1f0);
          puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar28 + 0x3d;
        }
        *local_238 = (ulonglong)puVar29;
        uStack_e0._0_4_ = (undefined4)DAT_14ca2b040;
        uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2b040 >> 0x20);
        if (DAT_14ca2b040 != 0) {
          LOCK();
          *(int *)(DAT_14ca2b040 + 8) = *(int *)(DAT_14ca2b040 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14ca2aff8;
        local_248 = CONCAT71(local_248._1_7_,2);
        FUN_140068f1a(puVar28,&local_138,&local_e8,uVar30);
        *puVar28 = &PTR_FUN_14a2baea0;
        puVar28[0x37] = &DAT_14ca2aff8;
        puVar28[0x38] = puVar20;
        puVar28[0x39] = local_228;
        puVar28[0x3a] = uVar6;
        *(int *)(puVar28 + 0x3b) = iVar16 >> 3;
        *(int *)((longlong)puVar28 + 0x1dc) = iVar27 >> 3;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
        uVar41 = uVar35;
      }
      lVar23 = local_230;
      iVar25 = *(int *)(local_230 + 0x170);
      *(uint *)(local_230 + 0x170) = iVar25 + 1U;
      if (*(uint *)(local_230 + 0x174) < iVar25 + 1U) {
        FUN_14470e57a(local_1e0,iVar25);
      }
      *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
      FUN_140069100(lVar23,puVar28);
      uVar19 = local_1f0;
      fVar45 = fVar45 * 0.5;
    } while (2.0 < fVar45);
    if ((1 < *(int *)(DAT_14ca278e8 + 4)) ||
       ((*(int *)(DAT_14ca278e8 + 4) == 1 &&
        ((*(byte *)(&DAT_14ca814c8 +
                   (ulonglong)
                   *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_218 + 0x3090) * 2) * 0xf) &
         8) != 0)))) {
      FUN_1400b22c2(&local_e8,&DAT_149e02088);
      if (*(longlong *)(local_218 + 0x28a0) != 0) {
        FUN_1400b22c2(&local_148,&DAT_149dfbe79);
        if (*(longlong *)(local_218 + 0x28a0) == 0) {
          FUN_140056680(local_168,&DAT_149e01fe8);
        }
        else {
          FUN_14010318a(*(longlong *)(local_218 + 0x28a0),local_168,0);
        }
        FUN_1400b22c2(local_178,&DAT_149eb775e);
        FUN_1401c7f3e(local_158,local_178,local_168);
        FUN_1401c7f3e(&local_138,local_158,&local_148);
        if (local_e8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_e8._0_4_ = (int)local_138;
        local_e8._4_4_ = (int)((ulonglong)local_138 >> 0x20);
        uStack_e0._0_4_ = (undefined4)lStack_130;
        uStack_e0._4_4_ = (undefined4)((ulonglong)lStack_130 >> 0x20);
        local_138 = (undefined8 *)0x0;
        lStack_130 = 0;
        if (local_158[0] != 0) {
          FUN_1400020a8();
        }
        if (local_178[0] != 0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_144,local_148) != 0) {
          FUN_1400020a8();
        }
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  puVar39 = local_238;
  local_b6 = uStack_ee;
  local_e8._0_4_ = (int)local_120;
  local_e8._4_4_ = (int)((ulonglong)local_120 >> 0x20);
  local_b5 = CONCAT11(uStack_ec,cStack_ed);
  local_bc = local_f4;
  uStack_ba = (undefined2)uStack_f2;
  local_b8 = (undefined2)((uint)uStack_f2 >> 0x10);
  uStack_e0._0_4_ = local_118;
  uStack_e0._4_4_ = uStack_114;
  local_d8 = (undefined *)CONCAT44(uStack_10c,uStack_110);
  local_c8 = local_100;
  local_b3 = uStack_eb;
  local_c4 = DAT_14ca84e40;
  if ((int)local_fc < DAT_14ca84e40) {
    local_c4 = (int)local_fc;
  }
  if (local_c4 < 2) {
    local_c4 = 1;
  }
  iVar25 = (int)(local_fc >> 0x20);
  local_c0 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_c0 = iVar25;
  }
  local_d0 = (int *)CONCAT44(local_104,local_108);
  if (local_c0 < 2) {
    local_c0 = 1;
  }
  uVar33 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar35 = uVar33 + 0x120;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar35) {
    FUN_140023dd8(local_238,0x128);
    uVar33 = *puVar39 + 7 & 0xfffffffffffffff8;
    uVar35 = uVar33 + 0x120;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar35;
  FUN_1456bbb8c(uVar33,L"Bloom.FFT.ResizedKernel",&local_e8,0);
  iVar25 = *(int *)(lVar23 + 0x180);
  *(uint *)(lVar23 + 0x180) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x184) < iVar25 + 1U) {
    FUN_14472c0f6(local_1c8,iVar25);
  }
  puVar39 = local_238;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar25 * 8) = uVar33;
  *(int *)(uVar33 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
  puVar20 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar20 + 0xc;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x70);
    puVar20 = (undefined8 *)(*puVar39 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar20 + 0xc;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  *puVar20 = &PTR_FUN_14a2baeb8;
  puVar20[7] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[10] = 0;
  iVar25 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_1e8,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar25 * 8) = puVar20;
  puVar20[2] = *(undefined8 *)(local_208 + 2);
  puVar20[3] = *(undefined8 *)local_208;
  *(float *)(puVar20 + 4) = 1.0 / (float)*(int *)(local_200 + 0x84);
  *(float *)((longlong)puVar20 + 0x24) = 1.0 / (float)*(int *)(local_200 + 0x88);
  puVar20[5] = *(undefined8 *)(local_208 + 2);
  *(int *)(puVar20 + 6) = local_208[7];
  cVar13 = *(char *)(uVar19 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar19 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar13 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = uVar19;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  puVar39 = local_238;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[7] = puVar28;
  puVar20[8] = uVar41;
  puVar20[9] = DAT_14c9c9d38;
  uVar4 = *(undefined1 *)(uVar33 + 0x94);
  puVar28 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar28 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar21) {
    FUN_140023dd8(local_238,0x50);
    puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar28 + 9;
  }
  puVar29 = puVar20 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar21;
  puVar28[1] = *(undefined8 *)(uVar33 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 0;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar28 + 5) = 0;
  *puVar28 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar28 + 6) = uVar4;
  *(undefined1 *)(puVar28 + 7) = 0;
  *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
  puVar28[8] = uVar33;
  iVar25 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(local_220,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar25 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar20[10] = puVar28;
  uVar6 = *(undefined8 *)(local_218 + 0x13818);
  FUN_142ebd868();
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca2b118,0);
  FUN_142ebd868();
  uVar6 = CONCAT44(local_e8._4_4_,(int)local_e8);
  local_1f8 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  iVar27 = (int)local_188 + 7;
  iVar25 = (int)local_188 + 0xe;
  if (-1 < iVar27) {
    iVar25 = iVar27;
  }
  iVar16 = (int)local_180 + 7;
  iVar27 = (int)local_180 + 0xe;
  if (-1 < iVar16) {
    iVar27 = iVar16;
  }
  uVar30 = *(ushort *)((longlong)local_208 + 0x26);
  FUN_142edfca4();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  local_228 = (undefined8 *)uVar6;
  FUN_1448f70da(uVar6,&DAT_14ca2b1c8,puVar29,&local_e8);
  FUN_140069376(lVar23);
  puVar39 = local_238;
  local_e8 = puVar29;
  if ((uVar30 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar30 & 2) != 0)))) {
      uVar30 = uVar30 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f0);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_238 = (ulonglong)puVar21;
    uStack_e0._0_4_ = (undefined4)DAT_14ca2b210;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2b210 >> 0x20);
    if (DAT_14ca2b210 != 0) {
      LOCK();
      *(int *)(DAT_14ca2b210 + 8) = *(int *)(DAT_14ca2b210 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2b1c8;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    *puVar20 = &PTR_FUN_14a2baee0;
    puVar20[0x37] = &DAT_14ca2b1c8;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = local_228;
    puVar20[0x3a] = local_1f8;
    *(int *)(puVar20 + 0x3b) = iVar27 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar25 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
      uVar30 = uVar30 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar30 & 2) != 0) {
      uVar30 = uVar30 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(local_230 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    if (*(undefined8 **)(local_230 + 0x78) < puVar21) {
      FUN_140023dd8(local_238,0x1f8);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(local_230 + 0x70) = puVar21;
    uVar42 = *(undefined4 *)(local_230 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14ca2b210;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14ca2b210 >> 0x20);
    if (DAT_14ca2b210 != 0) {
      LOCK();
      *(int *)(DAT_14ca2b210 + 8) = *(int *)(DAT_14ca2b210 + 8) + 1;
      UNLOCK();
    }
    local_d8 = &DAT_14ca2b1c8;
    local_248 = CONCAT71(local_248._1_7_,2);
    FUN_140068f1a(puVar20,&local_138,&local_e8,uVar30);
    puVar20[0x37] = &DAT_14ca2b1c8;
    puVar20[0x38] = puVar29;
    puVar20[0x39] = local_228;
    puVar20[0x3a] = local_1f8;
    *(int *)(puVar20 + 0x3b) = iVar27 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar25 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2baec0;
    *(undefined4 *)(puVar20 + 0x3d) = uVar42;
  }
  plVar10 = local_190;
  lVar23 = local_1a0;
  piVar31 = local_208;
  iVar25 = *(int *)(local_230 + 0x170);
  *(uint *)(local_230 + 0x170) = iVar25 + 1U;
  if (*(uint *)(local_230 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_1e0,iVar25);
  }
  lVar22 = local_230;
  *(undefined8 **)(*(longlong *)(local_230 + 0x168) + (longlong)iVar25 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(local_230 + 0x170) + -1;
  FUN_140069100(local_230,puVar20);
  local_248 = *(undefined8 *)(piVar31 + 2);
  lVar22 = FUN_14728bfa3(lVar22,local_218,uVar33,(char)piVar31[9]);
  if ((local_1d8 != 0) && (*(int *)(DAT_14ca278b8 + 4) != 0)) {
    *(float *)(local_1d8 + 0x1d28) = fVar3;
    *(undefined8 *)(local_1d8 + 0x1d2c) = *(undefined8 *)piVar31;
    lVar18 = *(longlong *)(local_218 + 0x28a0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar18 == 0) {
        lVar18 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar18 = *(longlong *)(local_218 + 0x28a0);
      }
    }
    *(longlong *)(local_1d8 + 0x1d18) = lVar18;
    plVar38 = *(longlong **)(lVar23 + 0x10);
    *(longlong **)(local_1d8 + 0x1d20) = plVar38;
    if (plVar38 == (longlong *)0x0) {
      uVar24 = 0;
    }
    else {
      lVar23 = (**(code **)(*plVar38 + 8))();
      uVar24 = (uint)*(byte *)(lVar23 + 0x30);
    }
    plVar38 = (longlong *)(local_1d8 + 0x1d08);
    *(uint *)(local_1d8 + 0x1d34) = uVar24;
    plVar7 = *(longlong **)(local_1d8 + 0x1d08);
    if (plVar7 != (longlong *)0x0) {
      *plVar38 = 0;
      (**(code **)(*plVar7 + 0x38))();
      plVar7 = (longlong *)*plVar38;
      if (plVar7 != (longlong *)0x0) {
        *plVar38 = 0;
        (**(code **)(*plVar7 + 0x38))();
      }
    }
    bVar14 = *(byte *)(lVar22 + 0x24);
    *(byte *)(lVar22 + 0x24) = bVar14 | 2;
    *(undefined1 *)(lVar22 + 0x26) = 1;
    plVar7 = (longlong *)(local_230 + 0x1b8);
    iVar25 = *(int *)(local_230 + 0x1c0);
    *(uint *)(local_230 + 0x1c0) = iVar25 + 1U;
    if (*(uint *)(local_230 + 0x1c4) < iVar25 + 1U) {
      FUN_14017e38e(plVar7,iVar25);
    }
    lVar18 = local_230;
    lVar23 = *plVar7;
    *(longlong *)(lVar23 + (longlong)iVar25 * 0x10) = lVar22;
    *(longlong **)(lVar23 + 8 + (longlong)iVar25 * 0x10) = plVar38;
    if ((bVar14 & 2) == 0) {
      pcVar2 = (char *)(local_230 + 0x4a8);
      LOCK();
      bVar43 = *(char *)(local_230 + 0x4a8) == '\0';
      if (bVar43) {
        *(char *)(local_230 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar43) {
        FUN_1447d2058();
      }
      iVar25 = *(int *)(lVar18 + 0x4b8);
      *(uint *)(lVar18 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(lVar18 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(lVar18 + 0x4b0),iVar25);
      }
      lVar23 = *(longlong *)(lVar18 + 0x4b0);
      *(undefined8 *)(lVar23 + (longlong)iVar25 * 0x10) = 2;
      *(longlong *)(lVar23 + 8 + (longlong)iVar25 * 0x10) = lVar22;
      LOCK();
      cVar13 = *pcVar2;
      if (cVar13 == '\x01') {
        *pcVar2 = '\0';
      }
      UNLOCK();
      if (cVar13 != '\x01') {
        FUN_14008cdb0(pcVar2);
      }
    }
    puVar21 = *(undefined8 **)(local_1d8 + 0x1d10);
    plVar38 = (longlong *)(local_1d8 + 0x1d10);
    if (puVar21 != (undefined8 *)0x0) {
      *plVar38 = 0;
      LOCK();
      piVar31 = (int *)(puVar21 + 1);
      *piVar31 = *piVar31 + -1;
      UNLOCK();
      if (*piVar31 == 0) {
        (**(code **)*puVar21)(puVar21,1);
      }
      puVar21 = (undefined8 *)*plVar38;
      if (puVar21 != (undefined8 *)0x0) {
        *plVar38 = 0;
        LOCK();
        piVar31 = (int *)(puVar21 + 1);
        *piVar31 = *piVar31 + -1;
        UNLOCK();
        if (*piVar31 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    uVar19 = local_1f0;
    bVar14 = *(byte *)(local_1f0 + 0x24);
    *(byte *)(local_1f0 + 0x24) = bVar14 | 0x12;
    plVar7 = (longlong *)(local_230 + 0x1c8);
    iVar25 = *(int *)(local_230 + 0x1d0);
    *(uint *)(local_230 + 0x1d0) = iVar25 + 1U;
    if (*(uint *)(local_230 + 0x1d4) < iVar25 + 1U) {
      FUN_14010a38e(plVar7,iVar25);
    }
    lVar18 = local_230;
    lVar23 = *plVar7;
    *(ulonglong *)(lVar23 + (longlong)iVar25 * 0x10) = uVar19;
    *(longlong **)(lVar23 + 8 + (longlong)iVar25 * 0x10) = plVar38;
    if ((bVar14 & 2) == 0) {
      pcVar2 = (char *)(local_230 + 0x4a8);
      LOCK();
      bVar43 = *(char *)(local_230 + 0x4a8) == '\0';
      if (bVar43) {
        *(char *)(local_230 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar43) {
        FUN_1447d2058(pcVar2);
      }
      iVar25 = *(int *)(lVar18 + 0x4b8);
      *(uint *)(lVar18 + 0x4b8) = iVar25 + 1U;
      if (*(uint *)(lVar18 + 0x4bc) < iVar25 + 1U) {
        FUN_1447f2dbc((longlong *)(lVar18 + 0x4b0),iVar25);
      }
      lVar23 = *(longlong *)(lVar18 + 0x4b0);
      *(undefined8 *)(lVar23 + (longlong)iVar25 * 0x10) = 1;
      *(ulonglong *)(lVar23 + 8 + (longlong)iVar25 * 0x10) = local_1f0;
      LOCK();
      cVar13 = *pcVar2;
      if (cVar13 == '\x01') {
        *pcVar2 = '\0';
      }
      UNLOCK();
      if (cVar13 != '\x01') {
        FUN_14008cdb0(pcVar2);
      }
    }
  }
  puVar39 = local_198;
  *plVar10 = lVar22;
  *param_5 = local_1f0;
  if (*(uint *)((longlong)local_198 + 0x17c) != local_1a4) {
    *(uint *)((longlong)local_198 + 0x17c) = local_1a4;
    puVar20 = (undefined8 *)(*local_198 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar20 + 3;
    if ((undefined8 *)local_198[1] < puVar21) {
      FUN_140023dd8(local_198,0x20);
      puVar20 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 3;
    }
    *puVar39 = (ulonglong)puVar21;
    *(int *)(puVar39 + 0xc) = (int)puVar39[0xc] + 1;
    *(undefined8 **)puVar39[6] = puVar20;
    puVar39[6] = (ulonglong)(puVar20 + 1);
    uVar42 = *(undefined4 *)((longlong)puVar39 + 0x17c);
    puVar20[1] = 0;
    *puVar20 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar20 + 2) = uVar42;
  }
LAB_142ebdf54:
  if ((local_b0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ec248a FUN_142ec248a body=1250 status=ok
// SIG undefined FUN_142ec248a(void)

void FUN_142ec248a(longlong *param_1,longlong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *param_1;
  puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 4;
  if (*(undefined8 **)(lVar6 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar6 + 0x70),0x30);
    puVar11 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar11 + 4;
  }
  *(undefined8 **)(lVar6 + 0x70) = puVar9;
  *puVar11 = &PTR_FUN_14a2ba0c0;
  puVar11[3] = 0;
  iVar4 = *(int *)(lVar6 + 0xa0);
  *(uint *)(lVar6 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(lVar6 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar6 + 0x98) + (longlong)iVar4 * 8) = puVar11;
  *(undefined4 *)(puVar11 + 2) = param_3;
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)param_1[1];
  lVar6 = *param_1;
  cVar3 = *(char *)(param_2 + 0x68);
  puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 8;
  if (*(undefined8 **)(lVar6 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar6 + 0x70),0x48);
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 8;
  }
  puVar2 = puVar11 + 2;
  *(undefined8 **)(lVar6 + 0x70) = puVar9;
  puVar12[1] = *(undefined8 *)(param_2 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 2;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar12 + 6) = cVar3 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar12 + 0x31) = 0;
  puVar12[7] = param_2;
  iVar4 = *(int *)(lVar6 + 0x1a0);
  *(uint *)(lVar6 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar6 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar6 + 0x198) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(lVar6 + 0x1a0) + -1;
  puVar11[3] = puVar12;
  uVar7 = *(undefined8 *)(param_1[2] + 0x13818);
  FUN_142ebcd28();
  FUN_1448e935e(uVar7,&local_68,&DAT_14ca2a808,0);
  FUN_142ebcd28();
  local_78 = lStack_60;
  puVar9 = local_68;
  iVar4 = *(int *)param_1[1] + 0x3f;
  iVar8 = *(int *)param_1[1] + 0x7e;
  if (-1 < iVar4) {
    iVar8 = iVar4;
  }
  uVar10 = *(ushort *)(param_1[3] + 0x26);
  lVar6 = *param_1;
  FUN_142ede254();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar9,&DAT_14ca2a8b8,puVar2,&local_68);
  FUN_140069376(lVar6);
  puVar1 = (ulonglong *)(lVar6 + 0x70);
  if ((uVar10 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar10 & 2) != 0)))))) {
      uVar10 = uVar10 & 0xfff9 | 4;
    }
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 0x3d;
    if (*(undefined8 **)(lVar6 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar12 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar11;
    lStack_60 = DAT_14ca2a900;
    if (DAT_14ca2a900 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a900 + 8) = *(int *)(DAT_14ca2a900 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca2a8b8;
    local_88 = 2;
    local_68 = puVar2;
    FUN_140068f1a(puVar12,&local_69,&local_68,uVar10);
    *puVar12 = &PTR_FUN_14a2ba0f0;
    puVar12[0x37] = &DAT_14ca2a8b8;
    puVar12[0x38] = puVar2;
    puVar12[0x39] = puVar9;
    puVar12[0x3a] = local_78;
    *(int *)(puVar12 + 0x3b) = iVar8 >> 6;
    *(undefined1 **)((longlong)puVar12 + 0x1dc) = &DAT_100000001;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar10 = uVar10 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar10 & 2) != 0) {
      uVar10 = uVar10 & 0xfffd;
    }
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar12 + 0x3e;
    if (*(undefined8 **)(lVar6 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar12 + 0x3e;
    }
    *(undefined8 **)(lVar6 + 0x70) = puVar11;
    uVar5 = *(undefined4 *)(lVar6 + 0x660);
    lStack_60 = DAT_14ca2a900;
    if (DAT_14ca2a900 != 0) {
      LOCK();
      *(int *)(DAT_14ca2a900 + 8) = *(int *)(DAT_14ca2a900 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca2a8b8;
    local_88 = 2;
    local_68 = puVar2;
    FUN_140068f1a(puVar12,&local_69,&local_68,uVar10);
    puVar12[0x37] = &DAT_14ca2a8b8;
    puVar12[0x38] = puVar2;
    puVar12[0x39] = puVar9;
    puVar12[0x3a] = local_78;
    *(int *)(puVar12 + 0x3b) = iVar8 >> 6;
    *(undefined1 **)((longlong)puVar12 + 0x1dc) = &DAT_100000001;
    *puVar12 = &PTR_FUN_14a2ba0d0;
    *(undefined4 *)(puVar12 + 0x3d) = uVar5;
  }
  iVar4 = *(int *)(lVar6 + 0x170);
  *(uint *)(lVar6 + 0x170) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(lVar6 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(lVar6 + 0x168) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(lVar6 + 0x170) + -1;
  FUN_140069100(lVar6,puVar12);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ec2979 FUN_142ec2979 body=69 status=ok
// SIG undefined FUN_142ec2979(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec2979(void)

{
  _DAT_14ca27ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec29bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27ac0,1);
  return;
}



// FUNCTION 142ec29be FUN_142ec29be body=576 status=ok
// SIG undefined FUN_142ec29be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ec29be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b5e8) {
    FUN_144b3d300(&DAT_14ca2b5e8);
    if (DAT_14ca2b5e8 == -1) {
      FUN_142ee108a();
      if ((DAT_14ca2b6df & 2) == 0) {
        DAT_14ca2b6df = DAT_14ca2b6df | 2;
        _DAT_14ca2b680 = L"FHistogramCS";
        _DAT_14ca2b698 = FUN_146826540;
        _DAT_14ca2b6a0 = FUN_146825d77;
        _DAT_14ca2b6a8 = FUN_146825fd6;
        _DAT_14ca2b6b0 = FUN_1407e02ea;
        _DAT_14ca2b6b8 = FUN_146826273;
        _DAT_14ca2b690 = FUN_142ee172c;
        _DAT_14ca2b6d0 = 0xffffffff000000e0;
        _DAT_14ca2b6d8 = 8;
        DAT_14ca2b6dc = 0;
        _DAT_14ca2b6c0 = &LAB_142ee1758;
        _DAT_14ca2b6e0 = L"BASE";
        DAT_14ca2b70a = 4;
        _DAT_14ca2b6e8 = FUN_140b35ae4();
        _DAT_14ca2b6f0 = DAT_14ca2b688;
        _DAT_14ca2b6f8 = &LAB_14682652b;
        DAT_14ca2b688 = &DAT_14ca2b6e0;
        DAT_14ca2b6dd = DAT_14ca2b6dd + '\x01';
        _DAT_14ca2b700 = 0x100000000;
        if (*(char *)(_DAT_14ca2b6e8 + 100) != '\0') {
          DAT_14ca2b6de = DAT_14ca2b6de + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2b678);
      }
      FUN_140db5666(&DAT_14ca2b540,0,&DAT_14ca2b678,L"FHistogramCS",
                    L"/Engine/Private/PostProcessHistogram.usf",L"MainCS",5,0x10,FUN_142ee0ff4,
                    FUN_142ee0f94,&LAB_142ee0ef2,&LAB_142ee0eee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2b5f0);
      _DAT_14ca2b540 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ee107e);
      _Init_thread_footer(&DAT_14ca2b5e8);
    }
  }
  return &DAT_14ca2b540;
}



// FUNCTION 142ec2bfe FUN_142ec2bfe body=576 status=ok
// SIG undefined FUN_142ec2bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ec2bfe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b7b8) {
    FUN_144b3d300(&DAT_14ca2b7b8);
    if (DAT_14ca2b7b8 == -1) {
      FUN_142ee186e();
      if ((DAT_14ca2b8af & 2) == 0) {
        DAT_14ca2b8af = DAT_14ca2b8af | 2;
        _DAT_14ca2b850 = L"FHistogramReducePS";
        _DAT_14ca2b868 = FUN_146826540;
        _DAT_14ca2b870 = FUN_146825d77;
        _DAT_14ca2b878 = FUN_146825fd6;
        _DAT_14ca2b880 = FUN_1407e02ea;
        _DAT_14ca2b888 = FUN_146826273;
        _DAT_14ca2b860 = FUN_142ee1d6c;
        _DAT_14ca2b8a0 = 0xffffffff000000e0;
        _DAT_14ca2b8a8 = 8;
        DAT_14ca2b8ac = 0;
        _DAT_14ca2b890 = &LAB_142ee1d98;
        _DAT_14ca2b8b0 = L"BASE";
        DAT_14ca2b8da = 4;
        _DAT_14ca2b8b8 = FUN_140b35ae4();
        _DAT_14ca2b8c0 = DAT_14ca2b858;
        _DAT_14ca2b8c8 = &LAB_14682652b;
        DAT_14ca2b858 = &DAT_14ca2b8b0;
        DAT_14ca2b8ad = DAT_14ca2b8ad + '\x01';
        _DAT_14ca2b8d0 = 0x100000000;
        if (*(char *)(_DAT_14ca2b8b8 + 100) != '\0') {
          DAT_14ca2b8ae = DAT_14ca2b8ae + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2b848);
      }
      FUN_140db5666(&DAT_14ca2b710,0,&DAT_14ca2b848,L"FHistogramReducePS",
                    L"/Engine/Private/PostProcessHistogramReduce.usf",L"MainPS",3,1,FUN_142ee17d8,
                    FUN_142ee1778,&LAB_142ee1760,&LAB_142ee175c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2b7c0);
      _DAT_14ca2b710 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ee1862);
      _Init_thread_footer(&DAT_14ca2b7b8);
    }
  }
  return &DAT_14ca2b710;
}



// FUNCTION 142ec2e3e FUN_142ec2e3e body=576 status=ok
// SIG undefined FUN_142ec2e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ec2e3e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b988) {
    FUN_144b3d300(&DAT_14ca2b988);
    if (DAT_14ca2b988 == -1) {
      FUN_142ee1ee0();
      if ((DAT_14ca2ba7f & 2) == 0) {
        DAT_14ca2ba7f = DAT_14ca2ba7f | 2;
        _DAT_14ca2ba20 = L"FHistogramAtomicCS";
        _DAT_14ca2ba38 = FUN_146826540;
        _DAT_14ca2ba40 = FUN_146825d77;
        _DAT_14ca2ba48 = FUN_146825fd6;
        _DAT_14ca2ba50 = FUN_1407e02ea;
        _DAT_14ca2ba58 = FUN_146826273;
        _DAT_14ca2ba30 = FUN_142ee2720;
        _DAT_14ca2ba70 = 0xffffffff000000e0;
        _DAT_14ca2ba78 = 8;
        DAT_14ca2ba7c = 0;
        _DAT_14ca2ba60 = &LAB_142ee274c;
        _DAT_14ca2ba80 = L"BASE";
        DAT_14ca2baaa = 4;
        _DAT_14ca2ba88 = FUN_140b35ae4();
        _DAT_14ca2ba90 = DAT_14ca2ba28;
        _DAT_14ca2ba98 = &LAB_14682652b;
        DAT_14ca2ba28 = &DAT_14ca2ba80;
        DAT_14ca2ba7d = DAT_14ca2ba7d + '\x01';
        _DAT_14ca2baa0 = 0x100000000;
        if (*(char *)(_DAT_14ca2ba88 + 100) != '\0') {
          DAT_14ca2ba7e = DAT_14ca2ba7e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2ba18);
      }
      FUN_140db5666(&DAT_14ca2b8e0,0,&DAT_14ca2ba18,L"FHistogramAtomicCS",
                    L"/Engine/Private/Histogram.usf",L"MainAtomicCS",5,8,FUN_142ee1e4a,FUN_142ee1dea
                    ,&LAB_142ee1da0,&LAB_142ee1d9c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca2b990
                   );
      _DAT_14ca2b8e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ee1ed4);
      _Init_thread_footer(&DAT_14ca2b988);
    }
  }
  return &DAT_14ca2b8e0;
}


