// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f11a30 FUN_142f11a30 body=445 status=ok
// SIG undefined FUN_142f11a30(void)

void FUN_142f11a30(void)

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
              0x110) < DAT_14ca318f8) {
    FUN_144b3d300(&DAT_14ca318f8);
    if (DAT_14ca318f8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f11bfa;
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
      local_80 = 0x120;
      local_88 = 0x23;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31878,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f11bee);
      _Init_thread_footer(&DAT_14ca318f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f11bfa FUN_142f11bfa body=136 status=ok
// SIG undefined FUN_142f11bfa(void)

code * FUN_142f11bfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputFloat";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f11c82;
}



// FUNCTION 142f11c82 FUN_142f11c82 body=136 status=ok
// SIG undefined FUN_142f11c82(void)

code * FUN_142f11c82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f11d0a;
}



// FUNCTION 142f11d0a FUN_142f11d0a body=142 status=ok
// SIG undefined FUN_142f11d0a(void)

code * FUN_142f11d0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f11d98;
}



// FUNCTION 142f11d98 FUN_142f11d98 body=142 status=ok
// SIG undefined FUN_142f11d98(void)

code * FUN_142f11d98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f11e26;
}



// FUNCTION 142f11e26 FUN_142f11e26 body=136 status=ok
// SIG undefined FUN_142f11e26(void)

undefined1 * FUN_142f11e26(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x24;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142f11eae;
}



// FUNCTION 142f11eb2 FUN_142f11eb2 body=44 status=ok
// SIG undefined FUN_142f11eb2(void)

void FUN_142f11eb2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f11efe FUN_142f11efe body=96 status=ok
// SIG undefined FUN_142f11efe(void)

undefined8 FUN_142f11efe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f11ff4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31a48,1);
  return uVar3;
}



// FUNCTION 142f11f5e FUN_142f11f5e body=138 status=ok
// SIG undefined FUN_142f11f5e(void)

void * FUN_142f11f5e(void)

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



// FUNCTION 142f11ff4 FUN_142f11ff4 body=445 status=ok
// SIG undefined FUN_142f11ff4(void)

void FUN_142f11ff4(void)

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
              0x110) < DAT_14ca31ac8) {
    FUN_144b3d300(&DAT_14ca31ac8);
    if (DAT_14ca31ac8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f121be;
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
      local_80 = 0x1f0;
      local_88 = 0x44;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31a48,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f121b2);
      _Init_thread_footer(&DAT_14ca31ac8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f121be FUN_142f121be body=136 status=ok
// SIG undefined FUN_142f121be(void)

code * FUN_142f121be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12246;
}



// FUNCTION 142f12246 FUN_142f12246 body=136 status=ok
// SIG undefined FUN_142f12246(void)

code * FUN_142f12246(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BlurredLogLum";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f122ce;
}



// FUNCTION 142f122ce FUN_142f122ce body=136 status=ok
// SIG undefined FUN_142f122ce(void)

code * FUN_142f122ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumBilateralGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12356;
}



// FUNCTION 142f12356 FUN_142f12356 body=142 status=ok
// SIG undefined FUN_142f12356(void)

code * FUN_142f12356(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d44362();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalExposure";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalExposureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a00000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f123e4;
}



// FUNCTION 142f123e4 FUN_142f123e4 body=136 status=ok
// SIG undefined FUN_142f123e4(void)

code * FUN_142f123e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f1246c;
}



// FUNCTION 142f1246c FUN_142f1246c body=142 status=ok
// SIG undefined FUN_142f1246c(void)

code * FUN_142f1246c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f124fa;
}



// FUNCTION 142f124fa FUN_142f124fa body=136 status=ok
// SIG undefined FUN_142f124fa(void)

code * FUN_142f124fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputFloat4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf80000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12582;
}



// FUNCTION 142f12582 FUN_142f12582 body=136 status=ok
// SIG undefined FUN_142f12582(void)

code * FUN_142f12582(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f1260a;
}



// FUNCTION 142f1260a FUN_142f1260a body=142 status=ok
// SIG undefined FUN_142f1260a(void)

code * FUN_142f1260a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12698;
}



// FUNCTION 142f12698 FUN_142f12698 body=142 status=ok
// SIG undefined FUN_142f12698(void)

code * FUN_142f12698(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12726;
}



// FUNCTION 142f12726 FUN_142f12726 body=136 status=ok
// SIG undefined FUN_142f12726(void)

undefined1 * FUN_142f12726(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x45;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142f127ae;
}



// FUNCTION 142f127b2 FUN_142f127b2 body=44 status=ok
// SIG undefined FUN_142f127b2(void)

void FUN_142f127b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f127fe FUN_142f127fe body=96 status=ok
// SIG undefined FUN_142f127fe(void)

undefined8 FUN_142f127fe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f128f4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31c18,1);
  return uVar3;
}



// FUNCTION 142f1285e FUN_142f1285e body=138 status=ok
// SIG undefined FUN_142f1285e(void)

void * FUN_142f1285e(void)

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



// FUNCTION 142f128f4 FUN_142f128f4 body=445 status=ok
// SIG undefined FUN_142f128f4(void)

void FUN_142f128f4(void)

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
              0x110) < DAT_14ca31c98) {
    FUN_144b3d300(&DAT_14ca31c98);
    if (DAT_14ca31c98 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f12abe;
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
      local_80 = 0x1f0;
      local_88 = 0x6f;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31c18,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f12ab2);
      _Init_thread_footer(&DAT_14ca31c98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f12abe FUN_142f12abe body=136 status=ok
// SIG undefined FUN_142f12abe(void)

code * FUN_142f12abe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetLuminance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e00000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12b46;
}



// FUNCTION 142f12b46 FUN_142f12b46 body=136 status=ok
// SIG undefined FUN_142f12b46(void)

code * FUN_142f12b46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputFloat4_1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d80000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12bce;
}



// FUNCTION 142f12bce FUN_142f12bce body=136 status=ok
// SIG undefined FUN_142f12bce(void)

code * FUN_142f12bce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputFloat4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12c56;
}



// FUNCTION 142f12c56 FUN_142f12c56 body=142 status=ok
// SIG undefined FUN_142f12c56(void)

code * FUN_142f12c56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1600000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12ce4;
}



// FUNCTION 142f12ce4 FUN_142f12ce4 body=142 status=ok
// SIG undefined FUN_142f12ce4(void)

code * FUN_142f12ce4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d44362();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalExposure";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalExposureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12d72;
}



// FUNCTION 142f12d72 FUN_142f12d72 body=136 status=ok
// SIG undefined FUN_142f12d72(void)

code * FUN_142f12d72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12dfa;
}



// FUNCTION 142f12dfa FUN_142f12dfa body=142 status=ok
// SIG undefined FUN_142f12dfa(void)

code * FUN_142f12dfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12e88;
}



// FUNCTION 142f12e88 FUN_142f12e88 body=136 status=ok
// SIG undefined FUN_142f12e88(void)

code * FUN_142f12e88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f12f10;
}



// FUNCTION 142f12f10 FUN_142f12f10 body=142 status=ok
// SIG undefined FUN_142f12f10(void)

code * FUN_142f12f10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f12f9e;
}



// FUNCTION 142f12f9e FUN_142f12f9e body=136 status=ok
// SIG undefined FUN_142f12f9e(void)

undefined1 * FUN_142f12f9e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142f13026;
}



// FUNCTION 142f1302a FUN_142f1302a body=44 status=ok
// SIG undefined FUN_142f1302a(void)

void FUN_142f1302a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f13076 FUN_142f13076 body=96 status=ok
// SIG undefined FUN_142f13076(void)

undefined8 FUN_142f13076(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f1316c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31de8,1);
  return uVar3;
}



// FUNCTION 142f130d6 FUN_142f130d6 body=138 status=ok
// SIG undefined FUN_142f130d6(void)

void * FUN_142f130d6(void)

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



// FUNCTION 142f1316c FUN_142f1316c body=445 status=ok
// SIG undefined FUN_142f1316c(void)

void FUN_142f1316c(void)

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
              0x110) < DAT_14ca31e68) {
    FUN_144b3d300(&DAT_14ca31e68);
    if (DAT_14ca31e68 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f13336;
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
      local_80 = 0x230;
      local_88 = 0x9d;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31de8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f1332a);
      _Init_thread_footer(&DAT_14ca31e68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f13336 FUN_142f13336 body=136 status=ok
// SIG undefined FUN_142f13336(void)

code * FUN_142f13336(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadToCoarseMipUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f133be;
}



// FUNCTION 142f133be FUN_142f133be body=136 status=ok
// SIG undefined FUN_142f133be(void)

code * FUN_142f133be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x218000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f13446;
}



// FUNCTION 142f13446 FUN_142f13446 body=136 status=ok
// SIG undefined FUN_142f13446(void)

code * FUN_142f13446(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputFloat";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210000000aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f134ce;
}



// FUNCTION 142f134ce FUN_142f134ce body=142 status=ok
// SIG undefined FUN_142f134ce(void)

code * FUN_142f134ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a0000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f1355c;
}



// FUNCTION 142f1355c FUN_142f1355c body=136 status=ok
// SIG undefined FUN_142f1355c(void)

code * FUN_142f1355c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevResultTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x198000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f135e4;
}



// FUNCTION 142f135e4 FUN_142f135e4 body=136 status=ok
// SIG undefined FUN_142f135e4(void)

code * FUN_142f135e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CoarserMipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000000a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f1366c;
}



// FUNCTION 142f1366c FUN_142f1366c body=142 status=ok
// SIG undefined FUN_142f1366c(void)

code * FUN_142f1366c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CoarserMip";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x120000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f136fa;
}



// FUNCTION 142f136fa FUN_142f136fa body=136 status=ok
// SIG undefined FUN_142f136fa(void)

code * FUN_142f136fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeightTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x118000000a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f13782;
}



// FUNCTION 142f13782 FUN_142f13782 body=136 status=ok
// SIG undefined FUN_142f13782(void)

code * FUN_142f13782(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x110000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f1380a;
}



// FUNCTION 142f1380a FUN_142f1380a body=142 status=ok
// SIG undefined FUN_142f1380a(void)

code * FUN_142f1380a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa0000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f13898;
}



// FUNCTION 142f13898 FUN_142f13898 body=142 status=ok
// SIG undefined FUN_142f13898(void)

code * FUN_142f13898(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f13926;
}



// FUNCTION 142f13926 FUN_142f13926 body=136 status=ok
// SIG undefined FUN_142f13926(void)

undefined1 * FUN_142f13926(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142f139ae;
}



// FUNCTION 142f139b2 FUN_142f139b2 body=44 status=ok
// SIG undefined FUN_142f139b2(void)

void FUN_142f139b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f13a0e FUN_142f13a0e body=96 status=ok
// SIG undefined FUN_142f13a0e(void)

undefined8 FUN_142f13a0e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141568366();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31fb8,0);
  return uVar3;
}



// FUNCTION 142f13a6e FUN_142f13a6e body=161 status=ok
// SIG undefined FUN_142f13a6e(void)

void * FUN_142f13a6e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  return _Dst;
}



// FUNCTION 142f13b40 FUN_142f13b40 body=70 status=ok
// SIG undefined FUN_142f13b40(void)

void FUN_142f13b40(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 142f13bfa FUN_142f13bfa body=96 status=ok
// SIG undefined FUN_142f13bfa(void)

undefined8 FUN_142f13bfa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141568366();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31fb8,0);
  return uVar3;
}



// FUNCTION 142f13c5a FUN_142f13c5a body=161 status=ok
// SIG undefined FUN_142f13c5a(void)

void * FUN_142f13c5a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0xf4) = 0;
  return _Dst;
}



// FUNCTION 142f13d08 FUN_142f13d08 body=70 status=ok
// SIG undefined FUN_142f13d08(void)

void FUN_142f13d08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 142f13d51 FUN_142f13d51 body=299 status=ok
// SIG undefined FUN_142f13d51(void)

void FUN_142f13d51(undefined8 param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  char cVar1;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  undefined8 auStack_c0 [12];
  int aiStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_c8,0,0x98);
  FUN_142ef46fa();
  auStack_c0[DAT_14ca31f50] = &DAT_14ca31f08;
  aiStack_60[DAT_14ca31f50] = 0;
  FUN_142ef4936();
  auStack_c0[DAT_14ca321a8] = &DAT_14ca32160;
  aiStack_60[DAT_14ca321a8] = (param_2 & 0xff) + (param_3 & 0xff) * 2;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,local_c8,0);
  if (cVar1 != '\0') {
    if (local_128 != 0) {
      *param_4 = local_128;
      param_4[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_5 = lStack_110;
      param_5[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1414e FUN_142f1414e body=481 status=ok
// SIG undefined FUN_142f1414e(void)

void FUN_142f1414e(longlong param_1,ulonglong *param_2)

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
  FUN_1472a239c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f14330 FUN_142f14330 body=232 status=ok
// SIG undefined FUN_142f14330(void)

void FUN_142f14330(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f14418 FUN_142f14418 body=81 status=ok
// SIG undefined FUN_142f14418(void)

void FUN_142f14418(undefined8 param_1,longlong *param_2)

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
  FUN_1472a243f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1446a FUN_142f1446a body=481 status=ok
// SIG undefined FUN_142f1446a(void)

void FUN_142f1446a(longlong param_1,ulonglong *param_2)

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
  FUN_1472a277c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1464c FUN_142f1464c body=232 status=ok
// SIG undefined FUN_142f1464c(void)

void FUN_142f1464c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f14734 FUN_142f14734 body=81 status=ok
// SIG undefined FUN_142f14734(void)

void FUN_142f14734(undefined8 param_1,longlong *param_2)

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
  FUN_1472a281f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1479e FUN_142f1479e body=29 status=ok
// SIG undefined FUN_142f1479e(void)

undefined8 FUN_142f1479e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f147bc FUN_142f147bc body=38 status=ok
// SIG undefined FUN_142f147bc(void)

undefined8 FUN_142f147bc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f147e2 FUN_142f147e2 body=1551 status=ok
// SIG undefined FUN_142f147e2(void)

void FUN_142f147e2(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_148,0);
    puVar7 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 2;
    }
    memcpy(puVar7,puVar5,(longlong)(int)local_148);
  }
  puVar10[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar10 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_f8,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar10 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x3bc);
  iVar9 = *(int *)(param_1 + 0x3b8);
  iVar2 = *(int *)(param_1 + 0x3b4);
  iVar3 = *(int *)(param_1 + 0x3b0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  lVar6 = 0;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar10 + 2) = (float)iVar3;
  *(float *)((longlong)puVar10 + 0x14) = (float)iVar2;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar9;
  *(float *)(puVar10 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
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
  local_128 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar8,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar8,1);
    }
  }
  local_100 = 0;
  local_148 = lVar6;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar6;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar8,1);
    }
  }
  FUN_142f10356();
  local_168 = param_1 + 0x1e0;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca310b0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar8,1);
    }
  }
  FUN_142f10dfa();
  local_168 = param_1 + 0x390;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca31308);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  iVar1 = *(int *)(param_1 + 0x3c0);
  iVar9 = *(int *)(param_1 + 0x3c4);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 4;
  }
  iVar9 = iVar9 * iVar1;
  iVar1 = iVar9 + 3;
  iVar9 = iVar9 + 6;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fc200;
  puVar10[2] = 0x200000000;
  *(int *)(puVar10 + 3) = iVar9 >> 2;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f14df2 FUN_142f14df2 body=29 status=ok
// SIG undefined FUN_142f14df2(void)

undefined8 FUN_142f14df2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f14e10 FUN_142f14e10 body=38 status=ok
// SIG undefined FUN_142f14e10(void)

undefined8 FUN_142f14e10(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f14e36 FUN_142f14e36 body=1418 status=ok
// SIG undefined FUN_142f14e36(void)

void FUN_142f14e36(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_142f11696();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca316a8);
  uVar6 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb5b0;
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f153c2 FUN_142f153c2 body=29 status=ok
// SIG undefined FUN_142f153c2(void)

undefined8 FUN_142f153c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f153e0 FUN_142f153e0 body=38 status=ok
// SIG undefined FUN_142f153e0(void)

undefined8 FUN_142f153e0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f15406 FUN_142f15406 body=978 status=ok
// SIG undefined FUN_142f15406(void)

void FUN_142f15406(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e0 [64];
  undefined1 *local_a0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,local_f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = local_e8;
  if ((longlong)local_e8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar10 = local_f8;
    if (local_f0 != (undefined1 *)0x0) {
      puVar10 = local_f0;
    }
    FUN_1446fe144(puVar11 + 2,local_e8,0);
    puVar7 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 2;
    }
    memcpy(puVar7,puVar10,(longlong)local_e8);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_98;
  if ((longlong)local_98 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    puVar10 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar10 = local_e0;
    }
    FUN_1446fe1b8(puVar11 + 5,local_98,0);
    puVar7 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 5;
    }
    memcpy(puVar7,puVar10,(longlong)local_98 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_90;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_8c;
  *(undefined4 *)(puVar11 + 0x10) = uStack_88;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_84;
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_a0);
  }
  if (local_f0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1dc);
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1d4);
  iVar4 = *(int *)(param_1 + 0x1d0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,param_1 + 0x208);
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_142f11200();
  local_148 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca314d8);
  local_128 = (float)(*(int *)(param_1 + 500) - *(int *)(param_1 + 0x1ec));
  local_130 = (float)(*(int *)(param_1 + 0x1f0) - *(int *)(param_1 + 0x1e8));
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  local_138 = (float)*(int *)(param_1 + 0x1ec);
  local_140 = (float)*(int *)(param_1 + 0x1e8);
  local_120 = CONCAT44(*(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4),
                       *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0));
  local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x1fc));
  local_100 = 1;
  local_108 = 0;
  local_110 = param_1 + 0x208;
  FUN_140094833(param_2,*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x204),
                *(undefined4 *)(param_1 + 0x1f8));
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f157da FUN_142f157da body=29 status=ok
// SIG undefined FUN_142f157da(void)

undefined8 FUN_142f157da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f157f8 FUN_142f157f8 body=38 status=ok
// SIG undefined FUN_142f157f8(void)

undefined8 FUN_142f157f8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1581e FUN_142f1581e body=1294 status=ok
// SIG undefined FUN_142f1581e(void)

void FUN_142f1581e(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142f15d2e FUN_142f15d2e body=29 status=ok
// SIG undefined FUN_142f15d2e(void)

undefined8 FUN_142f15d2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f15d4c FUN_142f15d4c body=38 status=ok
// SIG undefined FUN_142f15d4c(void)

undefined8 FUN_142f15d4c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f15d72 FUN_142f15d72 body=219 status=ok
// SIG undefined FUN_142f15d72(void)

void FUN_142f15d72(longlong param_1,ulonglong *param_2)

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
  FUN_142f15e74(param_1,param_2);
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



// FUNCTION 142f15e4e FUN_142f15e4e body=38 status=ok
// SIG undefined FUN_142f15e4e(void)

undefined8 FUN_142f15e4e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f15e74 FUN_142f15e74 body=1294 status=ok
// SIG undefined FUN_142f15e74(void)

void FUN_142f15e74(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142f16384 FUN_142f16384 body=29 status=ok
// SIG undefined FUN_142f16384(void)

undefined8 FUN_142f16384(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f163a2 FUN_142f163a2 body=38 status=ok
// SIG undefined FUN_142f163a2(void)

undefined8 FUN_142f163a2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f163c8 FUN_142f163c8 body=1294 status=ok
// SIG undefined FUN_142f163c8(void)

void FUN_142f163c8(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142f168d8 FUN_142f168d8 body=29 status=ok
// SIG undefined FUN_142f168d8(void)

undefined8 FUN_142f168d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f168f6 FUN_142f168f6 body=38 status=ok
// SIG undefined FUN_142f168f6(void)

undefined8 FUN_142f168f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1691c FUN_142f1691c body=1294 status=ok
// SIG undefined FUN_142f1691c(void)

void FUN_142f1691c(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142f16e2c FUN_142f16e2c body=385 status=ok
// SIG undefined FUN_142f16e2c(void)

void FUN_142f16e2c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined1 local_27;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x700;
  local_2c = 1;
  local_2b = 0;
  local_27 = 0;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f16f5e;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f16f5e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f16fae FUN_142f16fae body=368 status=ok
// SIG undefined FUN_142f16fae(void)

void FUN_142f16fae(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x1010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f170cf;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f170cf:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f17120 FUN_142f17120 body=368 status=ok
// SIG undefined FUN_142f17120(void)

void FUN_142f17120(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x2010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f17241;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f17241:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f17292 FUN_142f17292 body=368 status=ok
// SIG undefined FUN_142f17292(void)

void FUN_142f17292(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x3010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f173b3;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f173b3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f17404 FUN_142f17404 body=368 status=ok
// SIG undefined FUN_142f17404(void)

void FUN_142f17404(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f17525;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f17525:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f17576 FUN_142f17576 body=368 status=ok
// SIG undefined FUN_142f17576(void)

void FUN_142f17576(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x5010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f17697;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f17697:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f176e8 FUN_142f176e8 body=368 status=ok
// SIG undefined FUN_142f176e8(void)

void FUN_142f176e8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x6010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f17809;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f17809:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f1785a FUN_142f1785a body=368 status=ok
// SIG undefined FUN_142f1785a(void)

void FUN_142f1785a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x7010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f1797b;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f1797b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f179cc FUN_142f179cc body=233 status=ok
// SIG undefined FUN_142f179cc(void)

undefined8 * FUN_142f179cc(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a2c4400;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a2c4430;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
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



// FUNCTION 142f17ab6 FUN_142f17ab6 body=239 status=ok
// SIG undefined FUN_142f17ab6(void)

void FUN_142f17ab6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0x1100000001;
  local_b0 = 0x2000040000;
  lVar5 = FUN_14486d71a();
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar5) {
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f17ba6 FUN_142f17ba6 body=135 status=ok
// SIG undefined FUN_142f17ba6(void)

void FUN_142f17ba6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  return;
}



// FUNCTION 142f17c2e FUN_142f17c2e body=218 status=ok
// SIG undefined FUN_142f17c2e(void)

undefined8 * FUN_142f17c2e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a2c4430;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
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



// FUNCTION 142f17d08 FUN_142f17d08 body=518 status=ok
// SIG undefined FUN_142f17d08(void)

void FUN_142f17d08(longlong param_1,ulonglong *param_2)

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
  FUN_1472a2fdc(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f17f10 FUN_142f17f10 body=123 status=ok
// SIG undefined FUN_142f17f10(void)

void FUN_142f17f10(undefined8 *param_1)

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
  FUN_145e59cba();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca323d0,uVar1);
  return;
}



// FUNCTION 142f17f8c FUN_142f17f8c body=31 status=ok
// SIG undefined FUN_142f17f8c(void)

undefined8 FUN_142f17f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f17fac FUN_142f17fac body=38 status=ok
// SIG undefined FUN_142f17fac(void)

undefined8 FUN_142f17fac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f17fd2 FUN_142f17fd2 body=1150 status=ok
// SIG undefined FUN_142f17fd2(void)

void FUN_142f17fd2(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  float local_140;
  undefined4 uStack_13c;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  byte local_ee;
  byte local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
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
  undefined4 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_e8);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  *(int *)(puVar13 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    puVar11 = &local_e8;
    if ((undefined4 *)CONCAT44(uStack_dc,uStack_e0) != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)CONCAT44(uStack_dc,uStack_e0);
    }
    FUN_1446fe144(puVar13 + 2,local_d8,0);
    puVar8 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 2;
    }
    memcpy(puVar8,puVar11,(longlong)local_d8);
  }
  puVar13[0xd] = 0;
  *(int *)(puVar13 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    puVar11 = local_90;
    if (local_90 == (undefined4 *)0x0) {
      puVar11 = &uStack_d0;
    }
    FUN_1446fe1b8(puVar13 + 5,local_88,0);
    puVar8 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 5;
    }
    memcpy(puVar8,puVar11,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar13 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar13 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_74;
  if (local_90 != (undefined4 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    FUN_1400020a8();
  }
  local_e8 = *(undefined4 *)(param_1 + 0x238);
  uStack_e4 = *(undefined4 *)(param_1 + 0x23c);
  uStack_e0 = *(undefined4 *)(param_1 + 0x240);
  uStack_dc = *(undefined4 *)(param_1 + 0x244);
  local_d8 = *(undefined4 *)(param_1 + 0x248);
  uStack_d4 = *(undefined4 *)(param_1 + 0x24c);
  uStack_d0 = *(undefined4 *)(param_1 + 0x250);
  uStack_cc = *(undefined4 *)(param_1 + 0x254);
  local_c8 = *(undefined4 *)(param_1 + 600);
  uStack_c4 = *(undefined4 *)(param_1 + 0x25c);
  uStack_c0 = *(undefined4 *)(param_1 + 0x260);
  uStack_bc = *(undefined4 *)(param_1 + 0x264);
  local_b8 = *(undefined4 *)(param_1 + 0x268);
  uStack_b4 = *(undefined4 *)(param_1 + 0x26c);
  uStack_b0 = *(undefined4 *)(param_1 + 0x270);
  uStack_ac = *(undefined4 *)(param_1 + 0x274);
  local_ed = *(byte *)(param_1 + 0x278);
  iVar2 = *(int *)(param_1 + 0x1bc);
  local_ec = *(undefined4 *)(param_1 + 0x1c0);
  local_ee = *(byte *)(param_1 + 0x1c4);
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  lVar1 = param_1 + 0x1f8;
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar13 + 2) = (float)(int)uVar3;
  *(float *)((longlong)puVar13 + 0x14) = (float)(int)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(puVar13 + 3) = 0;
  *(float *)((longlong)puVar13 + 0x1c) = (float)(int)uVar4;
  *(float *)(puVar13 + 4) = (float)(int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  uVar3 = CONCAT44(uStack_e4,local_e8);
  uVar5 = local_b8;
  uVar6 = uStack_b4;
  uVar4 = CONCAT44(uStack_ac,uStack_b0);
  local_148 = &uStack_c0;
  local_140 = (float)uVar5;
  uStack_13c = uVar6;
  FUN_142f18451(param_2,&uStack_e0,uVar4,uVar3);
  local_148 = &uStack_c0;
  local_140 = (float)uVar5;
  uStack_13c = uVar6;
  FUN_142f185e0(param_2,&uStack_d0,uVar4,uVar3);
  iVar10 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar7 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x1e8);
  fVar14 = (float)iVar9;
  iVar12 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_128 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar12);
  local_130 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar9);
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  fVar15 = (float)iVar10;
  local_138 = (float)iVar12;
  local_120 = CONCAT44(iVar10,iVar7);
  if (iVar2 != -1) {
    local_ed = local_ed & 2;
    if ((local_ed != 0) && ((local_ee & 1) != 0)) {
      local_100 = local_ec;
      local_110 = CONCAT44(local_110._4_4_,iVar2);
      _local_140 = CONCAT44(uStack_13c,fVar14);
      local_148 = (undefined4 *)CONCAT44(local_148._4_4_,fVar15);
      local_108 = lVar1;
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar7);
      goto LAB_142f183cc;
    }
  }
  local_100 = local_ec;
  _local_140 = CONCAT44(uStack_13c,fVar14);
  local_148 = (undefined4 *)CONCAT44(local_148._4_4_,fVar15);
  local_108 = CONCAT44(local_108._4_4_,1);
  local_110 = lVar1;
  FUN_140094833(param_2);
LAB_142f183cc:
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f18451 FUN_142f18451 body=399 status=ok
// SIG undefined FUN_142f18451(void)

void FUN_142f18451(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

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
  longlong lVar14;
  
  if (*param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  lVar14 = FUN_144821ef4(param_1);
  FUN_141568366();
  if ((byte)((*(byte *)(*param_2 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c();
  }
  else {
    FUN_1446fe2ba(lVar14,*param_2,&DAT_14ca31fb8,param_3);
  }
  FUN_14303dd62(*param_2,lVar14,*param_5,param_6,*(undefined8 *)(*(longlong *)(param_4 + 8) + 0x40))
  ;
  iVar9 = *(int *)(lVar14 + 0x30) + *(int *)(lVar14 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar14 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar14 + 0x40)) == iVar10 < 0) {
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
    uVar5 = *(undefined8 *)(lVar14 + 0x38);
    uVar1 = *(undefined4 *)(lVar14 + 0x40);
    uVar6 = *(undefined8 *)(lVar14 + 0x28);
    uVar2 = *(undefined4 *)(lVar14 + 0x30);
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    uVar8 = *(undefined8 *)(lVar14 + 8);
    uVar4 = *(undefined4 *)(lVar14 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = lVar11;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined4 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined4 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined4 *)(lVar14 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142f185e0 FUN_142f185e0 body=399 status=ok
// SIG undefined FUN_142f185e0(void)

void FUN_142f185e0(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

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
  longlong lVar14;
  
  if (*param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  lVar14 = FUN_144821ef4(param_1);
  FUN_141568366();
  if ((byte)((*(byte *)(*param_2 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c();
  }
  else {
    FUN_1446fe2ba(lVar14,*param_2,&DAT_14ca31fb8,param_3);
  }
  FUN_14303dd62(*param_2,lVar14,*param_5,param_6,*(undefined8 *)(*(longlong *)(param_4 + 8) + 0x40))
  ;
  iVar9 = *(int *)(lVar14 + 0x30) + *(int *)(lVar14 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar14 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar14 + 0x40)) == iVar10 < 0) {
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
    uVar5 = *(undefined8 *)(lVar14 + 0x38);
    uVar1 = *(undefined4 *)(lVar14 + 0x40);
    uVar6 = *(undefined8 *)(lVar14 + 0x28);
    uVar2 = *(undefined4 *)(lVar14 + 0x30);
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    uVar8 = *(undefined8 *)(lVar14 + 8);
    uVar4 = *(undefined4 *)(lVar14 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = lVar11;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined4 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined4 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined4 *)(lVar14 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142f18770 FUN_142f18770 body=38 status=ok
// SIG undefined FUN_142f18770(void)

undefined8 FUN_142f18770(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f18796 FUN_142f18796 body=1150 status=ok
// SIG undefined FUN_142f18796(void)

void FUN_142f18796(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  float local_140;
  undefined4 uStack_13c;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  byte local_ee;
  byte local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
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
  undefined4 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_e8);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  *(int *)(puVar13 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    puVar11 = &local_e8;
    if ((undefined4 *)CONCAT44(uStack_dc,uStack_e0) != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)CONCAT44(uStack_dc,uStack_e0);
    }
    FUN_1446fe144(puVar13 + 2,local_d8,0);
    puVar8 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 2;
    }
    memcpy(puVar8,puVar11,(longlong)local_d8);
  }
  puVar13[0xd] = 0;
  *(int *)(puVar13 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    puVar11 = local_90;
    if (local_90 == (undefined4 *)0x0) {
      puVar11 = &uStack_d0;
    }
    FUN_1446fe1b8(puVar13 + 5,local_88,0);
    puVar8 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 5;
    }
    memcpy(puVar8,puVar11,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar13 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar13 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_74;
  if (local_90 != (undefined4 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (CONCAT44(uStack_dc,uStack_e0) != 0) {
    FUN_1400020a8();
  }
  local_e8 = *(undefined4 *)(param_1 + 0x238);
  uStack_e4 = *(undefined4 *)(param_1 + 0x23c);
  uStack_e0 = *(undefined4 *)(param_1 + 0x240);
  uStack_dc = *(undefined4 *)(param_1 + 0x244);
  local_d8 = *(undefined4 *)(param_1 + 0x248);
  uStack_d4 = *(undefined4 *)(param_1 + 0x24c);
  uStack_d0 = *(undefined4 *)(param_1 + 0x250);
  uStack_cc = *(undefined4 *)(param_1 + 0x254);
  local_c8 = *(undefined4 *)(param_1 + 600);
  uStack_c4 = *(undefined4 *)(param_1 + 0x25c);
  uStack_c0 = *(undefined4 *)(param_1 + 0x260);
  uStack_bc = *(undefined4 *)(param_1 + 0x264);
  local_b8 = *(undefined4 *)(param_1 + 0x268);
  uStack_b4 = *(undefined4 *)(param_1 + 0x26c);
  uStack_b0 = *(undefined4 *)(param_1 + 0x270);
  uStack_ac = *(undefined4 *)(param_1 + 0x274);
  local_ed = *(byte *)(param_1 + 0x278);
  iVar2 = *(int *)(param_1 + 0x1bc);
  local_ec = *(undefined4 *)(param_1 + 0x1c0);
  local_ee = *(byte *)(param_1 + 0x1c4);
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  lVar1 = param_1 + 0x1f8;
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar13 + 2) = (float)(int)uVar3;
  *(float *)((longlong)puVar13 + 0x14) = (float)(int)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(puVar13 + 3) = 0;
  *(float *)((longlong)puVar13 + 0x1c) = (float)(int)uVar4;
  *(float *)(puVar13 + 4) = (float)(int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  uVar3 = CONCAT44(uStack_e4,local_e8);
  uVar5 = local_b8;
  uVar6 = uStack_b4;
  uVar4 = CONCAT44(uStack_ac,uStack_b0);
  local_148 = &uStack_c0;
  local_140 = (float)uVar5;
  uStack_13c = uVar6;
  FUN_142f18451(param_2,&uStack_e0,uVar4,uVar3);
  local_148 = &uStack_c0;
  local_140 = (float)uVar5;
  uStack_13c = uVar6;
  FUN_142f185e0(param_2,&uStack_d0,uVar4,uVar3);
  iVar10 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar7 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x1e8);
  fVar14 = (float)iVar9;
  iVar12 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_128 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar12);
  local_130 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar9);
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  fVar15 = (float)iVar10;
  local_138 = (float)iVar12;
  local_120 = CONCAT44(iVar10,iVar7);
  if (iVar2 != -1) {
    local_ed = local_ed & 2;
    if ((local_ed != 0) && ((local_ee & 1) != 0)) {
      local_100 = local_ec;
      local_110 = CONCAT44(local_110._4_4_,iVar2);
      _local_140 = CONCAT44(uStack_13c,fVar14);
      local_148 = (undefined4 *)CONCAT44(local_148._4_4_,fVar15);
      local_108 = lVar1;
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar7);
      goto LAB_142f18b90;
    }
  }
  local_100 = local_ec;
  _local_140 = CONCAT44(uStack_13c,fVar14);
  local_148 = (undefined4 *)CONCAT44(local_148._4_4_,fVar15);
  local_108 = CONCAT44(local_108._4_4_,1);
  local_110 = lVar1;
  FUN_140094833(param_2);
LAB_142f18b90:
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f18c16 FUN_142f18c16 body=481 status=ok
// SIG undefined FUN_142f18c16(void)

void FUN_142f18c16(longlong param_1,ulonglong *param_2)

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
  FUN_1472a36ac(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f18df8 FUN_142f18df8 body=232 status=ok
// SIG undefined FUN_142f18df8(void)

void FUN_142f18df8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f18ee0 FUN_142f18ee0 body=81 status=ok
// SIG undefined FUN_142f18ee0(void)

void FUN_142f18ee0(undefined8 param_1,longlong *param_2)

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
  FUN_1472a374f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f18f32 FUN_142f18f32 body=68 status=ok
// SIG undefined FUN_142f18f32(void)

undefined8 * FUN_142f18f32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2c44f0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f18f76 FUN_142f18f76 body=1550 status=ok
// SIG undefined FUN_142f18f76(void)

void FUN_142f18f76(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x244);
  iVar2 = *(int *)(param_1 + 0x240);
  iVar3 = *(int *)(param_1 + 0x23c);
  iVar4 = *(int *)(param_1 + 0x238);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729b34e();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32458);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145eaf3e6();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca324e0);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 600) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_198 = (float)(*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x224));
  local_1a0 = (float)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220));
  local_190 = *(undefined8 *)(param_1 + 0x230);
  local_1a8 = (float)*(int *)(param_1 + 0x224);
  local_1b0 = (float)*(int *)(param_1 + 0x220);
  local_188 = *(undefined8 *)(param_1 + 0x218);
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_178 = 1;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f19586 FUN_142f19586 body=38 status=ok
// SIG undefined FUN_142f19586(void)

undefined8 FUN_142f19586(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f195ac FUN_142f195ac body=1536 status=ok
// SIG undefined FUN_142f195ac(void)

void FUN_142f195ac(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x254);
  iVar2 = *(int *)(param_1 + 0x250);
  iVar3 = *(int *)(param_1 + 0x24c);
  iVar4 = *(int *)(param_1 + 0x248);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x210) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729b86c();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca325f0);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  if (*(longlong *)(param_1 + 0x210) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e90324();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x210),&DAT_14ca32568);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 600) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_198 = (float)(*(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x234));
  local_190 = *(undefined8 *)(param_1 + 0x240);
  local_1a0 = (float)(*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x230));
  local_188 = *(undefined8 *)(param_1 + 0x228);
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_178 = 1;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f19bae FUN_142f19bae body=38 status=ok
// SIG undefined FUN_142f19bae(void)

undefined8 FUN_142f19bae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f19bd4 FUN_142f19bd4 body=1536 status=ok
// SIG undefined FUN_142f19bd4(void)

void FUN_142f19bd4(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x264);
  iVar2 = *(int *)(param_1 + 0x260);
  iVar3 = *(int *)(param_1 + 0x25c);
  iVar4 = *(int *)(param_1 + 600);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x220) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729bd88();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32700);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x220) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e90894();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x220),&DAT_14ca32678);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_198 = (float)(*(int *)(param_1 + 0x24c) - *(int *)(param_1 + 0x244));
  local_190 = *(undefined8 *)(param_1 + 0x250);
  local_1a0 = (float)(*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x240));
  local_188 = *(undefined8 *)(param_1 + 0x238);
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_178 = 1;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1a1d6 FUN_142f1a1d6 body=518 status=ok
// SIG undefined FUN_142f1a1d6(void)

void FUN_142f1a1d6(longlong param_1,ulonglong *param_2)

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
  FUN_1472a3eb8(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1a3de FUN_142f1a3de body=123 status=ok
// SIG undefined FUN_142f1a3de(void)

void FUN_142f1a3de(undefined8 *param_1)

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
  FUN_145e73d46();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca32788,uVar1);
  return;
}



// FUNCTION 142f1a45a FUN_142f1a45a body=38 status=ok
// SIG undefined FUN_142f1a45a(void)

undefined8 FUN_142f1a45a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1a480 FUN_142f1a480 body=1491 status=ok
// SIG undefined FUN_142f1a480(void)

void FUN_142f1a480(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  iVar2 = *(int *)(param_1 + 0x228);
  iVar3 = *(int *)(param_1 + 0x224);
  iVar4 = *(int *)(param_1 + 0x220);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729c332();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32898);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e90e04();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca32810);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_190 = *(undefined8 *)(param_1 + 0x218);
  local_198 = (float)(int)((ulonglong)local_190 >> 0x20);
  local_1a0 = (float)(int)local_190;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1aa54 FUN_142f1aa54 body=38 status=ok
// SIG undefined FUN_142f1aa54(void)

undefined8 FUN_142f1aa54(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1aa7a FUN_142f1aa7a body=1491 status=ok
// SIG undefined FUN_142f1aa7a(void)

void FUN_142f1aa7a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  iVar2 = *(int *)(param_1 + 0x228);
  iVar3 = *(int *)(param_1 + 0x224);
  iVar4 = *(int *)(param_1 + 0x220);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729c6b8();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca329a8);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e91374();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca32920);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_190 = *(undefined8 *)(param_1 + 0x218);
  local_198 = (float)(int)((ulonglong)local_190 >> 0x20);
  local_1a0 = (float)(int)local_190;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1b04e FUN_142f1b04e body=38 status=ok
// SIG undefined FUN_142f1b04e(void)

undefined8 FUN_142f1b04e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1b074 FUN_142f1b074 body=1491 status=ok
// SIG undefined FUN_142f1b074(void)

void FUN_142f1b074(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x24c);
  iVar2 = *(int *)(param_1 + 0x248);
  iVar3 = *(int *)(param_1 + 0x244);
  iVar4 = *(int *)(param_1 + 0x240);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x220) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729cdfe();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32ab8);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x220) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e918e4();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x220),&DAT_14ca32a30);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x250) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_190 = *(undefined8 *)(param_1 + 0x238);
  local_198 = (float)(int)((ulonglong)local_190 >> 0x20);
  local_1a0 = (float)(int)local_190;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1b648 FUN_142f1b648 body=38 status=ok
// SIG undefined FUN_142f1b648(void)

undefined8 FUN_142f1b648(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1b66e FUN_142f1b66e body=1550 status=ok
// SIG undefined FUN_142f1b66e(void)

void FUN_142f1b66e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x244);
  iVar2 = *(int *)(param_1 + 0x240);
  iVar3 = *(int *)(param_1 + 0x23c);
  iVar4 = *(int *)(param_1 + 0x238);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729d20a();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32b40);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145f561e8();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca32bc8);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x248) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_198 = (float)(*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x224));
  local_1a0 = (float)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220));
  local_190 = *(undefined8 *)(param_1 + 0x230);
  local_1a8 = (float)*(int *)(param_1 + 0x224);
  local_1b0 = (float)*(int *)(param_1 + 0x220);
  local_188 = *(undefined8 *)(param_1 + 0x218);
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_178 = 1;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1bc7e FUN_142f1bc7e body=38 status=ok
// SIG undefined FUN_142f1bc7e(void)

undefined8 FUN_142f1bc7e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1bca4 FUN_142f1bca4 body=1491 status=ok
// SIG undefined FUN_142f1bca4(void)

void FUN_142f1bca4(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  iVar2 = *(int *)(param_1 + 0x228);
  iVar3 = *(int *)(param_1 + 0x224);
  iVar4 = *(int *)(param_1 + 0x220);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729d6a8();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32c50);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e91e54();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca32cd8);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_190 = *(undefined8 *)(param_1 + 0x218);
  local_198 = (float)(int)((ulonglong)local_190 >> 0x20);
  local_1a0 = (float)(int)local_190;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1c278 FUN_142f1c278 body=38 status=ok
// SIG undefined FUN_142f1c278(void)

undefined8 FUN_142f1c278(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1c29e FUN_142f1c29e body=1491 status=ok
// SIG undefined FUN_142f1c29e(void)

void FUN_142f1c29e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  iVar2 = *(int *)(param_1 + 0x228);
  iVar3 = *(int *)(param_1 + 0x224);
  iVar4 = *(int *)(param_1 + 0x220);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729dab8();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32de8);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e742b4();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x200),&DAT_14ca32d60);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_190 = *(undefined8 *)(param_1 + 0x218);
  local_198 = (float)(int)((ulonglong)local_190 >> 0x20);
  local_1a0 = (float)(int)local_190;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1c872 FUN_142f1c872 body=38 status=ok
// SIG undefined FUN_142f1c872(void)

undefined8 FUN_142f1c872(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1c898 FUN_142f1c898 body=1529 status=ok
// SIG undefined FUN_142f1c898(void)

void FUN_142f1c898(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x23c);
  iVar2 = *(int *)(param_1 + 0x238);
  iVar3 = *(int *)(param_1 + 0x234);
  iVar4 = *(int *)(param_1 + 0x230);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x210) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_14729df56();
  local_1b8 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca32ef8);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  if (*(longlong *)(param_1 + 0x210) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145f335b6();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x210),&DAT_14ca32e70);
  local_170 = *(undefined4 *)(*(longlong *)(param_1 + 0x240) + 0x3094);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  local_198 = (float)(*(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x234));
  local_190 = *(undefined8 *)(param_1 + 0x228);
  local_1a0 = (float)(*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x230));
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_178 = 1;
  local_188 = local_190;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1ce9e FUN_142f1ce9e body=481 status=ok
// SIG undefined FUN_142f1ce9e(void)

void FUN_142f1ce9e(longlong param_1,ulonglong *param_2)

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
  FUN_1472a4b1e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1d080 FUN_142f1d080 body=232 status=ok
// SIG undefined FUN_142f1d080(void)

void FUN_142f1d080(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1d168 FUN_142f1d168 body=81 status=ok
// SIG undefined FUN_142f1d168(void)

void FUN_142f1d168(undefined8 param_1,longlong *param_2)

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
  FUN_1472a4bc1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1d1ba FUN_142f1d1ba body=481 status=ok
// SIG undefined FUN_142f1d1ba(void)

void FUN_142f1d1ba(longlong param_1,ulonglong *param_2)

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
  FUN_1472a4efe(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1d39c FUN_142f1d39c body=232 status=ok
// SIG undefined FUN_142f1d39c(void)

void FUN_142f1d39c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1d484 FUN_142f1d484 body=81 status=ok
// SIG undefined FUN_142f1d484(void)

void FUN_142f1d484(undefined8 param_1,longlong *param_2)

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
  FUN_1472a4fa1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1d4d6 FUN_142f1d4d6 body=481 status=ok
// SIG undefined FUN_142f1d4d6(void)

void FUN_142f1d4d6(longlong param_1,ulonglong *param_2)

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
  FUN_1472a52c0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1d6b8 FUN_142f1d6b8 body=232 status=ok
// SIG undefined FUN_142f1d6b8(void)

void FUN_142f1d6b8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1d7a0 FUN_142f1d7a0 body=81 status=ok
// SIG undefined FUN_142f1d7a0(void)

void FUN_142f1d7a0(undefined8 param_1,longlong *param_2)

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
  FUN_1472a5363(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1d7f2 FUN_142f1d7f2 body=481 status=ok
// SIG undefined FUN_142f1d7f2(void)

void FUN_142f1d7f2(longlong param_1,ulonglong *param_2)

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
  FUN_1472a56a0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1d9d4 FUN_142f1d9d4 body=232 status=ok
// SIG undefined FUN_142f1d9d4(void)

void FUN_142f1d9d4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1dabc FUN_142f1dabc body=81 status=ok
// SIG undefined FUN_142f1dabc(void)

void FUN_142f1dabc(undefined8 param_1,longlong *param_2)

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
  FUN_1472a5743(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1db0e FUN_142f1db0e body=481 status=ok
// SIG undefined FUN_142f1db0e(void)

void FUN_142f1db0e(longlong param_1,ulonglong *param_2)

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
  FUN_1472a5a80(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1dcf0 FUN_142f1dcf0 body=232 status=ok
// SIG undefined FUN_142f1dcf0(void)

void FUN_142f1dcf0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1ddd8 FUN_142f1ddd8 body=81 status=ok
// SIG undefined FUN_142f1ddd8(void)

void FUN_142f1ddd8(undefined8 param_1,longlong *param_2)

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
  FUN_1472a5b23(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1de2a FUN_142f1de2a body=481 status=ok
// SIG undefined FUN_142f1de2a(void)

void FUN_142f1de2a(longlong param_1,ulonglong *param_2)

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
  FUN_1472a6148(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1e00c FUN_142f1e00c body=232 status=ok
// SIG undefined FUN_142f1e00c(void)

void FUN_142f1e00c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1e0f4 FUN_142f1e0f4 body=81 status=ok
// SIG undefined FUN_142f1e0f4(void)

void FUN_142f1e0f4(undefined8 param_1,longlong *param_2)

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
  FUN_1472a61eb(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1e146 FUN_142f1e146 body=368 status=ok
// SIG undefined FUN_142f1e146(void)

void FUN_142f1e146(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x7000001;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142f1e267;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142f1e267:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f1e2b8 FUN_142f1e2b8 body=38 status=ok
// SIG undefined FUN_142f1e2b8(void)

undefined8 FUN_142f1e2b8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1e2de FUN_142f1e2de body=1433 status=ok
// SIG undefined FUN_142f1e2de(void)

void FUN_142f1e2de(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined5 uStack_b4;
  undefined3 uStack_af;
  undefined5 uStack_ac;
  undefined8 uStack_a7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_144b1c6fa(param_1 + 0x10,&local_148);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_138;
  if ((longlong)(int)local_138 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_148;
    if (uStack_140 != (undefined8 *)0x0) {
      puVar7 = uStack_140;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_138,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar7,(longlong)(int)local_138);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_ec,local_f0);
  *(int *)(puVar11 + 0xe) = iStack_e8;
  if ((longlong)iStack_e8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_130;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_e8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar7,(longlong)iStack_e8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_ec,local_f0);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_e4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_dc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_dc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_d4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_140 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  lVar6 = 0;
  local_f8 = 0;
  uStack_ec = 0;
  iStack_e8 = 0;
  uStack_e4 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  uStack_af = 0;
  uStack_ac = 0;
  uStack_a7 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_148 = DAT_14ca94de0;
  uStack_140 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  local_f0 = 0;
  uStack_110 = DAT_14c9c0db0;
  local_138 = lVar6;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1dc);
  iVar13 = *(int *)(param_1 + 0x1d8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar13;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar12 = 0;
  bVar4 = true;
  do {
    bVar3 = bVar4;
    puVar7 = &DAT_14ca30fc8;
    if (bVar3) {
      puVar7 = &DAT_14c9c0d50;
    }
    local_118 = *puVar7;
    puVar7 = &DAT_14c9d5278;
    if (bVar3) {
      puVar7 = &DAT_14ca30fb0;
    }
    local_108 = *puVar7;
    lVar6 = FUN_140028f18(param_2,&local_148);
    if ((lVar6 != 0) && ((local_80 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_128._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_120._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_138;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_138._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_130;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_130._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_148;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_148._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_140._4_4_;
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
      if ((undefined8 *)param_2[1] < puVar7) {
        FUN_140023dd8(param_2,0x28);
        puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar11 + 4;
      }
      *param_2 = (ulonglong)puVar7;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar11;
      param_2[6] = (ulonglong)(puVar11 + 1);
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_14a37d348;
      puVar11[2] = lVar6;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
    }
    **(undefined4 **)(param_1 + 0x1e0) = uVar12;
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    FUN_145ea1ae4();
    local_158 = uVar2;
    FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca33348);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x30);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 5;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a1fb5a8;
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    uVar2 = DAT_14ca2f250;
    iVar13 = *(int *)(param_1 + 0x1dc) * *(int *)(param_1 + 0x1d8);
    iVar1 = iVar13 + 7;
    iVar13 = iVar13 + 0xe;
    if (-1 < iVar1) {
      iVar13 = iVar1;
    }
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x38);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 6;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_14a1fb5b0;
    puVar11[2] = uVar2;
    puVar11[3] = 0;
    puVar11[4] = 0x20;
    *(undefined4 *)(puVar11 + 5) = 0x10;
    *(int *)((longlong)puVar11 + 0x2c) = iVar13 >> 3;
    uVar12 = 1;
    bVar4 = false;
  } while (bVar3);
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1e878 FUN_142f1e878 body=481 status=ok
// SIG undefined FUN_142f1e878(void)

void FUN_142f1e878(longlong param_1,ulonglong *param_2)

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
  FUN_1472a659e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1ea5a FUN_142f1ea5a body=232 status=ok
// SIG undefined FUN_142f1ea5a(void)

void FUN_142f1ea5a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1eb42 FUN_142f1eb42 body=81 status=ok
// SIG undefined FUN_142f1eb42(void)

void FUN_142f1eb42(undefined8 param_1,longlong *param_2)

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
  FUN_1472a6641(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1eb94 FUN_142f1eb94 body=481 status=ok
// SIG undefined FUN_142f1eb94(void)

void FUN_142f1eb94(longlong param_1,ulonglong *param_2)

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
  FUN_1472a697e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1ed76 FUN_142f1ed76 body=232 status=ok
// SIG undefined FUN_142f1ed76(void)

void FUN_142f1ed76(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1ee5e FUN_142f1ee5e body=81 status=ok
// SIG undefined FUN_142f1ee5e(void)

void FUN_142f1ee5e(undefined8 param_1,longlong *param_2)

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
  FUN_1472a6a21(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1eeb0 FUN_142f1eeb0 body=481 status=ok
// SIG undefined FUN_142f1eeb0(void)

void FUN_142f1eeb0(longlong param_1,ulonglong *param_2)

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
  FUN_1472a6d5e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1f092 FUN_142f1f092 body=232 status=ok
// SIG undefined FUN_142f1f092(void)

void FUN_142f1f092(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1f17a FUN_142f1f17a body=81 status=ok
// SIG undefined FUN_142f1f17a(void)

void FUN_142f1f17a(undefined8 param_1,longlong *param_2)

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
  FUN_1472a6e01(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1f1cc FUN_142f1f1cc body=450 status=ok
// SIG undefined FUN_142f1f1cc(void)

void FUN_142f1f1cc(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472a730e(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1f38f FUN_142f1f38f body=81 status=ok
// SIG undefined FUN_142f1f38f(void)

void FUN_142f1f38f(undefined8 param_1,longlong *param_2)

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
  FUN_1472a7409(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1f3e0 FUN_142f1f3e0 body=229 status=ok
// SIG undefined FUN_142f1f3e0(void)

void FUN_142f1f3e0(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca334e0,param_3);
  return;
}



// FUNCTION 142f1f4c6 FUN_142f1f4c6 body=1418 status=ok
// SIG undefined FUN_142f1f4c6(void)

void FUN_142f1f4c6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e92934();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca33568);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1fa52 FUN_142f1fa52 body=481 status=ok
// SIG undefined FUN_142f1fa52(void)

void FUN_142f1fa52(longlong param_1,ulonglong *param_2)

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
  FUN_1472a79fe(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f1fc34 FUN_142f1fc34 body=232 status=ok
// SIG undefined FUN_142f1fc34(void)

void FUN_142f1fc34(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f1fd1c FUN_142f1fd1c body=81 status=ok
// SIG undefined FUN_142f1fd1c(void)

void FUN_142f1fd1c(undefined8 param_1,longlong *param_2)

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
  FUN_1472a7aa1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f1fd6e FUN_142f1fd6e body=38 status=ok
// SIG undefined FUN_142f1fd6e(void)

undefined8 FUN_142f1fd6e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f1fd94 FUN_142f1fd94 body=1537 status=ok
// SIG undefined FUN_142f1fd94(void)

void FUN_142f1fd94(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 500);
  iVar2 = *(int *)(param_1 + 0x1f0);
  iVar3 = *(int *)(param_1 + 0x1ec);
  iVar4 = *(int *)(param_1 + 0x1e8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
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
  local_158 = DAT_14ca2f618;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 1;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145eddec2();
  local_168 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca33678);
  uVar5 = *(undefined8 *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145e6dd80();
  local_168 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca33700);
  uVar5 = DAT_14ca8c0f8;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar5;
  *(undefined4 *)(puVar11 + 4) = 0;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fc200;
  puVar11[2] = 0x200000000;
  *(undefined4 *)(puVar11 + 3) = 1;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f20396 FUN_142f20396 body=31 status=ok
// SIG undefined FUN_142f20396(void)

undefined8 FUN_142f20396(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f203b6 FUN_142f203b6 body=1324 status=ok
// SIG undefined FUN_142f203b6(void)

void FUN_142f203b6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f208e4 FUN_142f208e4 body=370 status=ok
// SIG undefined FUN_142f208e4(void)

void FUN_142f208e4(longlong param_1)

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
  local_3c = 0x3030302;
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
    if (lVar4 == 0) goto LAB_142f20a07;
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
LAB_142f20a07:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f20a58 FUN_142f20a58 body=370 status=ok
// SIG undefined FUN_142f20a58(void)

void FUN_142f20a58(longlong param_1)

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
  local_3c = 0x3030300;
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
    if (lVar4 == 0) goto LAB_142f20b7b;
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
LAB_142f20b7b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f20bcc FUN_142f20bcc body=31 status=ok
// SIG undefined FUN_142f20bcc(void)

undefined8 FUN_142f20bcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f20bec FUN_142f20bec body=1324 status=ok
// SIG undefined FUN_142f20bec(void)

void FUN_142f20bec(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f2111a FUN_142f2111a body=31 status=ok
// SIG undefined FUN_142f2111a(void)

undefined8 FUN_142f2111a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f2113a FUN_142f2113a body=1324 status=ok
// SIG undefined FUN_142f2113a(void)

void FUN_142f2113a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f21668 FUN_142f21668 body=31 status=ok
// SIG undefined FUN_142f21668(void)

undefined8 FUN_142f21668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f21688 FUN_142f21688 body=1324 status=ok
// SIG undefined FUN_142f21688(void)

void FUN_142f21688(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f21bb6 FUN_142f21bb6 body=31 status=ok
// SIG undefined FUN_142f21bb6(void)

undefined8 FUN_142f21bb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f21bd6 FUN_142f21bd6 body=1324 status=ok
// SIG undefined FUN_142f21bd6(void)

void FUN_142f21bd6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f22104 FUN_142f22104 body=31 status=ok
// SIG undefined FUN_142f22104(void)

undefined8 FUN_142f22104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f22124 FUN_142f22124 body=1561 status=ok
// SIG undefined FUN_142f22124(void)

void FUN_142f22124(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  size_t _Size;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 *_Src_00;
  ulonglong uVar18;
  void *_Dst;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    plVar14 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar14 = &local_c0;
    }
    FUN_1446fe144(puVar16 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar11 = puVar16 + 2;
    }
    memcpy(puVar11,plVar14,(longlong)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar16 + 5;
    }
    memcpy(puVar11,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca33cd0) && (FUN_144b3d300(&DAT_14ca33cd0), DAT_14ca33cd0 == -1)) {
    FUN_141583650(&local_c0);
    local_d0 = 0;
    local_e0 = 0;
    local_100 = "Unknown";
    local_110 = 0;
    uStack_108 = 0;
    local_118 = L"FParameters";
    local_d8 = 0;
    local_f0 = 800;
    local_f8 = 0x239;
    local_e8 = &local_c0;
    FUN_140b49562(&DAT_14ca33c50,0,1);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142f140bd);
    _Init_thread_footer(&DAT_14ca33cd0);
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar17 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar17,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar10;
  local_118 = (wchar_t *)uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca33c50);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fd0;
  puVar16[2] = uVar7;
  *(undefined4 *)(puVar16 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar17 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar17,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar17 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar17 + 0x10);
    uVar18 = lVar17 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar18 = uVar9;
    }
    iVar4 = *(int *)(lVar17 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar17 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar18 + 3 + lVar17);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar18 + 2 + lVar17);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar17 = lVar17 + 4;
      } while ((longlong)iVar4 * 4 != lVar17);
    }
    uVar9 = param_2[0x13];
    lVar17 = (longlong)(int)uVar9;
    if (0 < lVar17) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar16;
        param_2[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar17 * 4);
        _Size = lVar17 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_c8;
        puVar16[3] = _Dst;
        *(int *)(puVar16 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f2273e FUN_142f2273e body=31 status=ok
// SIG undefined FUN_142f2273e(void)

undefined8 FUN_142f2273e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f2275e FUN_142f2275e body=518 status=ok
// SIG undefined FUN_142f2275e(void)

void FUN_142f2275e(longlong param_1,ulonglong *param_2)

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
  FUN_1472a7f86(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f22966 FUN_142f22966 body=123 status=ok
// SIG undefined FUN_142f22966(void)

void FUN_142f22966(undefined8 *param_1)

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
  FUN_14159dc6c();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca33d60,uVar1);
  return;
}



// FUNCTION 142f229e2 FUN_142f229e2 body=1538 status=ok
// SIG undefined FUN_142f229e2(void)

void FUN_142f229e2(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar5 = uStack_130;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_128,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_128);
  }
  puVar10[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar10 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_120;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_d8,0);
    puVar8 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_d8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar10 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_c4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  local_178 = *(undefined8 *)(lVar6 + 0x40);
  uStack_170 = *(undefined8 *)(lVar6 + 0x48);
  local_168 = *(undefined4 *)(lVar6 + 0x50);
  uStack_164 = *(undefined4 *)(lVar6 + 0x54);
  uStack_160 = *(undefined4 *)(lVar6 + 0x58);
  uStack_15c = *(undefined4 *)(lVar6 + 0x5c);
  local_158 = *(undefined4 *)(lVar6 + 0x60);
  uStack_154 = *(undefined4 *)(lVar6 + 100);
  uStack_150 = *(undefined4 *)(lVar6 + 0x68);
  uStack_14c = *(undefined4 *)(lVar6 + 0x6c);
  local_148 = *(undefined4 *)(lVar6 + 0x70);
  uStack_144 = *(undefined4 *)(lVar6 + 0x74);
  uStack_140 = *(undefined4 *)(lVar6 + 0x78);
  uStack_13c = *(undefined4 *)(lVar6 + 0x7c);
  lVar6 = 0;
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
  local_108 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_100 = DAT_14c9c0db0;
  local_f8 = *(undefined8 *)(param_1 + 0x1e0);
  local_138 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  uStack_130 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  local_e0 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x50)) * 5;
  local_128 = lVar6;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_70 & 0x10000000) == 0)) {
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
    puVar5 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar6;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  uVar7 = FUN_14153ccb2();
  local_188 = &local_178;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c0),uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  FUN_14159dc6c();
  local_188 = (undefined8 *)uVar7;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca33d60);
  iVar2 = *(int *)(param_1 + 500);
  iVar3 = *(int *)(param_1 + 0x1f0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar3;
  *(float *)(puVar10 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  bVar1 = *(byte *)(param_1 + 0x208);
  uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x70) + 0x10);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1e78c8;
  puVar10[2] = uVar7;
  *(uint *)(puVar10 + 3) = (uint)bVar1 << 4;
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f22fe6 FUN_142f22fe6 body=31 status=ok
// SIG undefined FUN_142f22fe6(void)

undefined8 FUN_142f22fe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f23006 FUN_142f23006 body=518 status=ok
// SIG undefined FUN_142f23006(void)

void FUN_142f23006(longlong param_1,ulonglong *param_2)

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
  FUN_1472a8266(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2320e FUN_142f2320e body=123 status=ok
// SIG undefined FUN_142f2320e(void)

void FUN_142f2320e(undefined8 *param_1)

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
  FUN_14159de92();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca33de8,uVar1);
  return;
}



// FUNCTION 142f2328a FUN_142f2328a body=1538 status=ok
// SIG undefined FUN_142f2328a(void)

void FUN_142f2328a(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar5 = uStack_130;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_128,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_128);
  }
  puVar10[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar10 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_120;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_d8,0);
    puVar8 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_d8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar10 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_c4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  local_178 = *(undefined8 *)(lVar6 + 0x40);
  uStack_170 = *(undefined8 *)(lVar6 + 0x48);
  local_168 = *(undefined4 *)(lVar6 + 0x50);
  uStack_164 = *(undefined4 *)(lVar6 + 0x54);
  uStack_160 = *(undefined4 *)(lVar6 + 0x58);
  uStack_15c = *(undefined4 *)(lVar6 + 0x5c);
  local_158 = *(undefined4 *)(lVar6 + 0x60);
  uStack_154 = *(undefined4 *)(lVar6 + 100);
  uStack_150 = *(undefined4 *)(lVar6 + 0x68);
  uStack_14c = *(undefined4 *)(lVar6 + 0x6c);
  local_148 = *(undefined4 *)(lVar6 + 0x70);
  uStack_144 = *(undefined4 *)(lVar6 + 0x74);
  uStack_140 = *(undefined4 *)(lVar6 + 0x78);
  uStack_13c = *(undefined4 *)(lVar6 + 0x7c);
  lVar6 = 0;
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
  local_108 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_100 = DAT_14c9c0db0;
  local_f8 = *(undefined8 *)(param_1 + 0x1e0);
  local_138 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  uStack_130 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  local_e0 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x50)) * 5;
  local_128 = lVar6;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_70 & 0x10000000) == 0)) {
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
    puVar5 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar6;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  uVar7 = FUN_14153ccb2();
  local_188 = &local_178;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c0),uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar4,lVar9,1);
    }
  }
  FUN_14159de92();
  local_188 = (undefined8 *)uVar7;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca33de8);
  iVar2 = *(int *)(param_1 + 500);
  iVar3 = *(int *)(param_1 + 0x1f0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar3;
  *(float *)(puVar10 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  bVar1 = *(byte *)(param_1 + 0x208);
  uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x70) + 0x10);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar10 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1e78c8;
  puVar10[2] = uVar7;
  *(uint *)(puVar10 + 3) = (uint)bVar1 << 4;
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2388e FUN_142f2388e body=518 status=ok
// SIG undefined FUN_142f2388e(void)

void FUN_142f2388e(longlong param_1,ulonglong *param_2)

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
  FUN_1472a85fe(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f23a96 FUN_142f23a96 body=123 status=ok
// SIG undefined FUN_142f23a96(void)

void FUN_142f23a96(undefined8 *param_1)

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
  FUN_145c5f04e();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca33810,uVar1);
  return;
}



// FUNCTION 142f23b12 FUN_142f23b12 body=370 status=ok
// SIG undefined FUN_142f23b12(void)

void FUN_142f23b12(longlong param_1)

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
  local_3c = 0x1000001;
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
    if (lVar4 == 0) goto LAB_142f23c35;
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
LAB_142f23c35:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f23c86 FUN_142f23c86 body=136 status=ok
// SIG undefined FUN_142f23c86(void)

ulonglong FUN_142f23c86(void)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (ulonglong)DAT_14c7608e8;
  if (DAT_14c7608e8 == 0xffffffff) {
    local_28 = 0xe7;
    FUN_140002266(local_20,L"%s %s %d",L"FOutputLuminance",
                  L".\\Runtime/Renderer/Private/PostProcess/PostProcessTonemap.cpp");
    uVar1 = FUN_145d12cf0(local_20);
    DAT_14c7608e8 = (uint)uVar1;
    if (local_20[0] != 0) {
      FUN_1400020a8();
      uVar1 = (ulonglong)DAT_14c7608e8;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f23d10 FUN_142f23d10 body=29 status=ok
// SIG undefined FUN_142f23d10(void)

undefined8 FUN_142f23d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f23d2e FUN_142f23d2e body=29 status=ok
// SIG undefined FUN_142f23d2e(void)

undefined8 FUN_142f23d2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f23d4c FUN_142f23d4c body=481 status=ok
// SIG undefined FUN_142f23d4c(void)

void FUN_142f23d4c(longlong param_1,ulonglong *param_2)

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
  FUN_1472a891c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f23f2e FUN_142f23f2e body=232 status=ok
// SIG undefined FUN_142f23f2e(void)

void FUN_142f23f2e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142f24016 FUN_142f24016 body=81 status=ok
// SIG undefined FUN_142f24016(void)

void FUN_142f24016(undefined8 param_1,longlong *param_2)

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
  FUN_1472a89bf(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142f24068 FUN_142f24068 body=31 status=ok
// SIG undefined FUN_142f24068(void)

undefined8 FUN_142f24068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f24088 FUN_142f24088 body=38 status=ok
// SIG undefined FUN_142f24088(void)

undefined8 FUN_142f24088(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f240ae FUN_142f240ae body=1213 status=ok
// SIG undefined FUN_142f240ae(void)

void FUN_142f240ae(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  byte local_112;
  byte local_111;
  undefined4 local_110;
  int local_10c;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar14 = local_100;
    }
    FUN_1446fe144(puVar16 + 2,local_f8,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar14,(longlong)local_f8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar14 = local_f0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_a8,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar14,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = *(longlong *)(param_1 + 0x238);
  lVar10 = *(longlong *)(param_1 + 0x240);
  lVar2 = *(longlong *)(param_1 + 0x248);
  lVar3 = *(longlong *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 600);
  local_111 = *(byte *)(param_1 + 0x260);
  lVar1 = param_1 + 0x1f8;
  local_10c = *(int *)(param_1 + 0x1bc);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
  local_110 = *(undefined4 *)(param_1 + 0x1c0);
  local_112 = *(byte *)(param_1 + 0x1c4);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)(int)uVar5;
  *(float *)((longlong)puVar16 + 0x14) = (float)(int)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)(int)uVar6;
  *(float *)(puVar16 + 4) = (float)(int)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar10 + 8);
    lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (longlong)*(int *)(lVar11 + 0xd4) * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar7,(longlong)*(int *)(lVar11 + 0xd4),1);
    }
  }
  FUN_14155e4d8();
  local_168 = uVar4;
  FUN_1449cc26b(param_2,lVar10,lVar11,&DAT_14ca34008);
  if (lVar2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar3 + 8);
    lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + (longlong)*(int *)(lVar2 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar10,(longlong)*(int *)(lVar2 + 0xd4),1);
    }
  }
  FUN_14155e3d4();
  local_168 = uVar4;
  FUN_1449cc26b(param_2,lVar11,lVar2,&DAT_14ca34118);
  iVar13 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar12 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_160 = (float)iVar12;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_148 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_150 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar12);
  local_138 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar13;
  local_158 = (float)iVar15;
  local_140 = CONCAT44(iVar13,iVar8);
  if (local_10c != -1) {
    local_111 = local_111 & 2;
    if ((local_111 != 0) && ((local_112 & 1) != 0)) {
      local_120 = local_110;
      local_130 = CONCAT44(local_130._4_4_,local_10c);
      local_168 = CONCAT44(local_168._4_4_,fVar17);
      local_128 = lVar1;
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
      goto LAB_142f244d4;
    }
  }
  local_120 = local_110;
  local_168 = CONCAT44(local_168._4_4_,fVar17);
  local_128 = CONCAT44(local_128._4_4_,1);
  local_130 = lVar1;
  FUN_140094833(param_2);
LAB_142f244d4:
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2456c FUN_142f2456c body=38 status=ok
// SIG undefined FUN_142f2456c(void)

undefined8 FUN_142f2456c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f24592 FUN_142f24592 body=457 status=ok
// SIG undefined FUN_142f24592(void)

void FUN_142f24592(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_142f0f7f5(param_2,*(undefined8 *)(param_1 + 0x1b8),0,*(undefined8 *)(param_1 + 0x1c0));
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f24768 FUN_142f24768 body=38 status=ok
// SIG undefined FUN_142f24768(void)

undefined8 FUN_142f24768(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142f2478e FUN_142f2478e body=1718 status=ok
// SIG undefined FUN_142f2478e(void)

void FUN_142f2478e(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  float local_1e0;
  float local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined5 uStack_94;
  undefined3 uStack_8f;
  undefined5 uStack_8c;
  undefined8 uStack_87;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_144b1c6fa(param_1 + 0x10,&local_128);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = (int)local_118;
  if ((longlong)(int)local_118 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar4 = &local_128;
    if (uStack_120 != (undefined8 *)0x0) {
      puVar4 = uStack_120;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_118,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar4,(longlong)(int)local_118);
  }
  puVar10[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
  *(int *)(puVar10 + 0xe) = iStack_c8;
  if ((longlong)iStack_c8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_110;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_c8,0);
    puVar8 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 5;
    }
    memcpy(puVar8,puVar4,(longlong)iStack_c8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_c4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_bc;
  *(undefined4 *)(puVar10 + 0x10) = uStack_bc._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_b4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_120 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  lVar7 = *(longlong *)(param_1 + 0x1c0);
  lVar6 = *(longlong *)(lVar7 + 0x1b8);
  local_180 = (ulonglong)*(uint *)(lVar6 + 0x84);
  local_190 = (ulonglong)*(uint *)(lVar6 + 0x88);
  uVar2 = *(undefined8 *)(lVar1 + 0x13818);
  uVar5 = FUN_1417ed4a6();
  lVar6 = 0;
  FUN_1448e935e(uVar2,&local_128,uVar5,0);
  FUN_1417ed4a6();
  puVar4 = uStack_120;
  local_198 = local_128;
  uVar2 = *(undefined8 *)(lVar1 + 0x13818);
  FUN_145f575f8();
  FUN_1448e935e(uVar2,&local_128,&DAT_14ca30e20,0);
  FUN_145f575f8();
  lVar3 = local_128;
  local_1a0 = uStack_120;
  local_168 = 0;
  local_160 = 1;
  local_158 = 0;
  local_150 = 1;
  local_138 = 0;
  local_130 = 0x3f80000000000000;
  local_188 = lVar1;
  FUN_1448c58dc(lVar1,&local_168);
  local_148 = *(undefined8 *)(lVar7 + 0x1b8);
  local_140 = DAT_14c9c0d80;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = (undefined8 *)0x0;
  uStack_cc = 0;
  iStack_c8 = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  uStack_8f = 0;
  uStack_8c = 0;
  uStack_87 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  FUN_144b0e33a(param_2,&local_128);
  lVar1 = local_198;
  local_f8 = DAT_14c9c0d50;
  uStack_f0 = DAT_14c9c0db0;
  local_e8 = DAT_14c9c0d98;
  local_128 = DAT_14ca94df8;
  if (local_198 != 0) {
    lVar7 = puVar4[1];
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (longlong)*(int *)(local_198 + 0xd4) * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,(longlong)*(int *)(local_198 + 0xd4),1);
    }
  }
  puVar10 = local_1a0;
  uStack_120 = (undefined8 *)lVar6;
  if (lVar3 == 0) {
    local_118 = 0;
    local_d0 = 0;
    lVar7 = FUN_140028f18(param_2);
    if ((lVar7 != 0) && ((local_60 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_108;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_108._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_100._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_118;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_118._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_110._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_128._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_120._4_4_;
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar8 + 4;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x28);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar8 + 4;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a37d348;
      puVar8[2] = lVar7;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x1c) = 1;
    }
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(local_1a0[1] + 0x50) + (longlong)*(int *)(lVar3 + 0xd4) * 8)
    ;
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(local_1a0[1],(longlong)*(int *)(lVar3 + 0xd4),1);
    }
    local_d0 = 0;
    local_118 = lVar7;
    lVar7 = FUN_140028f18(param_2);
    if ((lVar7 != 0) && ((local_60 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_108;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_108._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_100._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_118;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_118._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_110._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_128._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_120._4_4_;
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar9 + 4;
      if ((undefined8 *)param_2[1] < puVar8) {
        FUN_140023dd8(param_2,0x28);
        puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar9 + 4;
      }
      *param_2 = (ulonglong)puVar8;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar9;
      param_2[6] = (ulonglong)(puVar9 + 1);
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_14a37d348;
      puVar9[2] = lVar7;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
    }
    lVar7 = *(longlong *)(*(longlong *)(puVar10[1] + 0x50) + (longlong)*(int *)(lVar3 + 0xd4) * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(puVar10[1],(longlong)*(int *)(lVar3 + 0xd4),1);
    }
  }
  FUN_145f57866();
  local_1f8 = &local_168;
  FUN_1449cc26b(param_2,lVar7,lVar3,&DAT_14ca342b0);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar8 + 5;
  }
  local_1e0 = (float)(int)local_180;
  local_1d8 = (float)(int)local_190;
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = local_1e0;
  *(float *)(puVar8 + 4) = local_1d8;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  local_1b0 = *(undefined4 *)(local_188 + 0x3094);
  local_1c0 = &local_178;
  local_178 = lVar1;
  local_170 = puVar4;
  local_1d0 = local_190 << 0x20 | local_180;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,local_1d8);
  local_1b8 = 1;
  local_1c8 = local_1d0;
  FUN_140094833(param_2,0,0);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f24e51 FUN_142f24e51 body=5408 status=ok
// SIG undefined FUN_142f24e51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f24e51(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca2c5d4);
  if (cVar2 == '\0') {
    _DAT_14ca2c5d4 = 0;
    uRam000000014ca2c5dc = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (char *)CONCAT44(local_58._4_4_,2);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2c5e8,L"r.LensFlareQuality",&local_58,
                L" 0: off but best for performance\n 1: low quality with good performance\n 2: good quality (default)\n 3: very good quality but bad performance"
               );
  atexit(FUN_142eef9d8);
  local_50 = FUN_142eefa1e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c600,&local_58);
  local_50 = FUN_142eefc5e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c610,&local_58);
  local_50 = FUN_142eefe9e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c620,&local_58);
  local_50 = FUN_142ef00de;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c630,&local_58);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x3f000000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca2c640,L"r.LocalExposure.ExposureFusion.TargetLuminance",&local_58,
                L"Target Luminance used to determine the weight of each exposure.");
  atexit(FUN_142ef19f0);
  local_50 = FUN_142ef1a36;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c658,&local_58);
  local_50 = FUN_142ef1c76;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c668,&local_58);
  local_50 = FUN_142ef1eb6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c678,&local_58);
  local_50 = FUN_142ef20f6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c688,&local_58);
  local_58._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca2c698,L"r.PostProcessAllowStencilTest",&local_58,
                L"Enables stencil testing in post process materials.\n0: disable stencil testing\n1: allow stencil testing\n"
               );
  atexit(FUN_142ef45e6);
  local_58._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca2c6b0,L"r.PostProcessAllowBlendModes",&local_58,
                L"Enables blend modes in post process materials.\n0: disable blend modes. Uses replace\n1: allow blend modes\n"
               );
  atexit(FUN_142ef462b);
  local_58 = (char *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2c6c8,L"r.PostProcessing.DisableMaterials",&local_58,
                L" Allows to disable post process materials. \n");
  atexit(FUN_142ef4670);
  local_68 = 4;
  FUN_141471170(&DAT_14ca2c6e0,L"r.PSOPrecache.PostProcessingMaterial",&DAT_14c7608e4,
                L"Precache all possible required PSOs for loaded PostProcessing Materials.");
  atexit(FUN_142ef46b5);
  local_58 = "SceneColor";
  local_50 = (code *)CONCAT35(local_50._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_58,1);
  DAT_14ca2c6f0 = (ulonglong)uVar3;
  local_50 = FUN_142ef46fa;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca2c6f8,&local_58);
  local_50 = FUN_142ef4936;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca2c708,&local_58);
  DAT_14ca2c720 = 0xffffffff;
  _DAT_14ca2c724 = 0x105;
  DAT_14ca2c726 = 0;
  DAT_14ca2c728 = 0;
  DAT_14ca2c718 = &PTR_FUN_14a2c4400;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_142f251e7;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_142f251ec;
      goto LAB_142f25223;
    }
  }
  else {
LAB_142f251e7:
    if (iVar1 != 0x10) {
LAB_142f25223:
      FUN_140308182(&DAT_14ca2c718,0);
      goto LAB_142f25231;
    }
  }
LAB_142f251ec:
  (*(code *)DAT_14ca2c718[3])(&DAT_14ca2c718,&DAT_14ca85100);
LAB_142f25231:
  atexit(FUN_142ef4b71);
  DAT_14ca2c730 = 1;
  uVar6 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca2c734 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(code **)(&DAT_14cafe970 + uVar6 * 0x10) = FUN_141774344;
  (&DAT_14cafe978)[uVar6 * 2] = L"PostProcessMaterialPSOCollector";
  atexit((_func_5014 *)&LAB_142ef8663);
  local_50 = FUN_145f55984;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c850,&local_58);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca2c860,L"r.Mobile.MobileSupportBloomSetupRareCases",&local_58,
                L"0: Don\'t generate permutations for BloomSetup rare cases. (default, like Sun+MetalMSAAHDRDecode, Dof+MetalMSAAHDRDecode, EyeAdaptaion+MetalMSAAHDRDecode, and any of their combinations)\n1: Generate permutations for BloomSetup rare cases. "
               );
  atexit(FUN_142ef8d82);
  local_58 = (char *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2c878,L"r.Mobile.EyeAdaptation",&local_58,
                L"EyeAdaptation for mobile platform.\n 0: Disable\n 1: Enabled (Default)");
  atexit(FUN_142ef8dc7);
  local_50 = FUN_145e59a4c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2c9a8,&local_58);
  local_50 = FUN_14607f960;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2cad0,&local_58);
  local_50 = FUN_145eaf178;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2cbf8,&local_58);
  local_50 = FUN_145e900b6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2cd20,&local_58);
  local_50 = FUN_14607fbc6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2ce48,&local_58);
  local_50 = FUN_145e90626;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2cf70,&local_58);
  local_50 = FUN_14607fe2c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d098,&local_58);
  local_50 = FUN_145e73ad8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d1c0,&local_58);
  local_50 = FUN_145e90b96;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d2e8,&local_58);
  local_50 = FUN_146080092;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d410,&local_58);
  local_50 = FUN_145e91106;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d538,&local_58);
  local_50 = FUN_1460802f8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d660,&local_58);
  local_50 = FUN_145e91676;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d788,&local_58);
  local_50 = FUN_14608055e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d8b0,&local_58);
  local_50 = FUN_1460807c4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2d9d8,&local_58);
  local_50 = FUN_145f55f7a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2db00,&local_58);
  local_50 = FUN_146080a2a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2dc28,&local_58);
  local_50 = FUN_145e91be6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2dd50,&local_58);
  local_50 = FUN_145e74046;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2de78,&local_58);
  local_50 = FUN_146080c90;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2dfa0,&local_58);
  local_50 = FUN_145f33348;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e0c8,&local_58);
  local_50 = FUN_146080ef6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e1f0,&local_58);
  _DAT_14ca2e200 = 0x2000000040;
  local_50 = FUN_145e745b4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e320,&local_58);
  _DAT_14ca2e330 = 0x2000000020;
  _DAT_14ca2e338 = 0x2000000040;
  local_50 = FUN_14608115c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e458,&local_58);
  local_50 = FUN_1460813c2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e580,&local_58);
  local_50 = FUN_145f3393c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e6a8,&local_58);
  local_50 = FUN_145e92156;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2e7d0,&local_58);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x21;
  FUN_140a6b41e(&DAT_14ca2e7e0,L"r.MotionBlur2ndScale",&local_58,&DAT_149dfb77a);
  atexit(FUN_142efed52);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e7f8,L"r.MotionBlurScatter",&local_58,
                L"Forces scatter based max velocity method (slower).");
  atexit(FUN_142efed97);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e810,L"r.MotionBlurSeparable",&local_58,
                L"Adds a second motion blur pass that smooths noise for a higher quality blur.");
  atexit(FUN_142efeddc);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e828,L"r.MotionBlur.Directions",&local_58,
                L"Number of bluring direction (default = 1).");
  atexit(FUN_142efee21);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e840,L"r.MotionBlur.HalfResInput",&local_58,
                L"Whether motion blur also blur with a half resolution input.");
  atexit(FUN_142efee66);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2e858,L"r.MotionBlur.HalfResGather",&local_58,
                L"Whether to do motion blur filter dynamically at half res under heavy motion.");
  atexit(FUN_142efeeab);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e870,L"r.MotionBlur.AllowExternalVelocityFlatten",&local_58,
                L"Whether to allow motion blur\'s velocity flatten into other pass.");
  atexit(FUN_142efeef0);
  local_58 = (char *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca2e888,L"vr.AllowMotionBlurInVR",&local_58,
                L"For projects with motion blur enabled, this allows motion blur to be enabled even while in VR."
               );
  atexit(FUN_142efef35);
  local_58 = (char *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca2e8a0,L"r.MotionBlur.VisualizeDebugInformation",&local_58,
                L"Enables checkerboard and debug text visualization when Visualize Motion Blur show flag is enabled.\n"
               );
  atexit(FUN_142efef7a);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2e8b8,L"r.Ortho.UsePreviousMotionVelocityFlattenPass",&local_58,
                L"Enable/Disable the option for Ortho motion blur pass to use the previous flatten textures (e.g. from TSR). Currently causes shimmering on distance planes if disabled"
               );
  atexit(FUN_142efefbf);
  local_58 = (char *)CONCAT44(local_58._4_4_,1);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca2e8d0,L"r.Translucency.AfterMotionBlur.GbxAllowSplitScreen",&local_58,
                L"Toggle to Enable/Disable SplitScreen for MotionBlur.\n1: Enable splitscreen for motionblur\n0: Default behavier\nNote that MotionBlur does not support SplitScreen Currently."
               );
  atexit(FUN_142eff004);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca2e8e8,L"r.Gbx.MotionBlur.ReducedBlendTransition",&local_58,
                L"Use our improved final compositing to reduce motion blur artifacts. To revisit later."
               );
  atexit(FUN_142eff049);
  local_50 = FUN_145f6c71a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2ea18,&local_58);
  local_50 = FUN_145d0a9a4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2eb40,&local_58);
  local_50 = FUN_145ea1876;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2ec68,&local_58);
  local_50 = FUN_146090f24;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2ed90,&local_58);
  local_50 = FUN_145f33f30;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2eeb8,&local_58);
  local_50 = FUN_145ed4d9a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2efe0,&local_58);
  local_50 = FUN_145f56570;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f108,&local_58);
  local_50 = FUN_145e926c6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f230,&local_58);
  _DAT_14ca2f248 = 0xffffffff;
  _DAT_14ca2f24c = 0x105;
  DAT_14ca2f24e = 0;
  DAT_14ca2f250 = 0;
  _DAT_14ca2f240 = &PTR_FUN_14a2c4720;
  FUN_1462ff84e(&DAT_14ca2f240);
  atexit(FUN_142eff0f1);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca2f258,L"r.Mobile.PlanarReflectionMode",&local_58,
                L"The PlanarReflection will work differently on different mode on mobile platform, choose the proper mode as expect.\n0: The PlanarReflection actor works as usual on all platforms. [default]\n1: The PlanarReflection actor is only used for mobile pixel projection reflection, it will not affect PC/Console. MobileMSAA will be disabled as a side effect.\n2: The PlanarReflection actor still works as usual on PC/Console platform and is used for mobile pixel projected reflection on mobile platform. MobileMSAA will be disabled as a side effect.\n"
               );
  atexit(FUN_142f03b10);
  local_58 = (char *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f270,L"r.Mobile.PixelProjectedReflectionQuality",&local_58,
                L"The quality of pixel projected reflection on mobile platform.\n0: Disabled\n1: Best performance but may have some artifacts in some view angles. [default]\n2: Better quality and reasonable performance and could fix some artifacts.\n3: Best quality but will be much heavier.\n"
               );
  atexit(FUN_142f03b55);
  DAT_14ca2f288 = 8;
  DAT_14ca2f28c = 8;
  local_50 = FUN_145f34524;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f3a8,&local_58);
  local_50 = FUN_145eddc54;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f4d0,&local_58);
  local_50 = FUN_145e6db14;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f5f8,&local_58);
  _DAT_14ca2f610 = 0xffffffff;
  DAT_14ca2f614 = 5;
  DAT_14ca2f615 = 1;
  DAT_14ca2f616 = 0;
  DAT_14ca2f618 = 0;
  DAT_14ca2f608 = &PTR_FUN_14a2c49d0;
  FUN_1462ff8e8();
  atexit(FUN_142f03bbe);
  local_50 = FUN_14159d924;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f738,&local_58);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f748,L"r.SubsurfaceScattering",&local_58,
                L" 0: disabled\n 1: enabled (default)");
  atexit(FUN_142f059fc);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca2f760,L"r.SSS.Scale",&local_58,
                L"Affects the Screen space Separable subsurface scattering pass (use shadingmodel SubsurfaceProfile, get near to the object as the default)\nis human skin which only scatters about 1.2cm)\n 0: off (if there is no object on the screen using this pass it should automatically disable the post process pass)\n<1: scale scatter radius down (for testing)\n 1: use given radius form the Subsurface scattering asset (default)\n>1: scale scatter radius up (for testing)"
               );
  atexit(FUN_142f05a41);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f778,L"r.SSS.HalfRes",&local_58,
                L" 0: full quality (Combined Burley and Separable pass. Separable is not optimized, as reference)\n 1: parts of the algorithm runs in half resolution which is lower quality but faster (default, Separable only)"
               );
  atexit(FUN_142f05a86);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f790,L"r.SSS.Quality",&local_58,
                L"Defines the quality of the recombine pass when using the SubsurfaceScatteringProfile shading model\n 0: low (faster, default)\n 1: high (sharper details but slower)\n-1: auto, 1 if TemporalAA is disabled (without TemporalAA the quality is more noticable)"
               );
  atexit(FUN_142f05acb);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f7a8,L"r.SSS.Filter",&local_58,
                L"Defines the filter method for Screenspace Subsurface Scattering feature.\n 0: point filter (useful for testing, could be cleaner)\n 1: bilinear filter"
               );
  atexit(FUN_142f05b10);
  local_58._0_4_ = 2;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f7c0,L"r.SSS.SampleSet",&local_58,
                L"Defines how many samples we use for Separable Screenspace Subsurface Scattering feature.\n 0: lowest quality (6*2+1)\n 1: medium quality (9*2+1)\n 2: high quality (13*2+1) (default)"
               );
  atexit(FUN_142f05b55);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f7d8,L"r.SSS.Burley.AlwaysUpdateParametersFromSeparable",&local_58,
                L"0: Will not update parameters when the program loads. (default)1: Always update from the separable when the program loads. (Correct only when Subsurface color is 1)."
               );
  atexit(FUN_142f05b9a);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f7f0,L"r.SSS.Checkerboard",&local_58,
                L"Enables or disables checkerboard rendering for subsurface profile rendering.\nThis is necessary if SceneColor does not include a floating point alpha channel (e.g 32-bit formats)\n 0: Disabled (high quality). If the rendertarget format does not have an alpha channel (e.g., PF_FloatR11G11B10), it leads to over-washed SSS. \n 1: Enabled (low quality). Surface lighting will be at reduced resolution.\n 2: Automatic. Non-checkerboard lighting will be applied if we have a suitable rendertarget format\n"
               );
  atexit(FUN_142f05bdf);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f808,L"r.SSS.Checkerboard.NeighborSSSValidation",&local_58,
                L"Enable or disable checkerboard neighbor subsurface scattering validation.\nThis validation can remove border light leakage into subsurface scattering, creating a sharpe border with correct color 0: Disabled (default) 1: Enabled. Add 1 subsurface profile id query/pixel (low quality), 4 id query/pixel (high quality) at recombine pass"
               );
  atexit(FUN_142f05c24);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca2f820,L"r.SSS.Burley.Quality",&local_58,
                L"0: Fallback mode. Burley falls back to run scattering in Separable with transmission in Burley for better performance. Separable parameters are automatically fitted.1: Automatic. The subsurface will only switch to separable in half resolution. (default)"
               );
  atexit(FUN_142f05c69);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f838,L"r.SSS.Burley.NumSamplesOverride",&local_58,
                L"When zero, Burley SSS adaptively determines the number of samples. When non-zero, this value overrides the sample count.\n"
               );
  atexit(FUN_142f05cae);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f850,L"r.SSS.Burley.EnableProfileIdCache",&local_58,
                L"0: Disable profile id cache using in the sampling pass.\n1: Consumes 1 byte per pixel more memory to make Burley pass much faster. (default)\n"
               );
  atexit(FUN_142f05cf3);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f868,L"r.SSS.Burley.BilateralFilterKernelFunctionType",&local_58,
                L"0: Depth Only. It is more performant (x2 faster for close view).1: Depth and normal. It leads to better quality in regions like eyelids. (default)"
               );
  atexit(FUN_142f05d38);
  local_58._0_4_ = 4000;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca2f880,L"r.SSS.Burley.MinGenerateMipsTileCount",&local_58,
                L"4000. (default) The minimal number of tiles to trigger subsurface radiance mip generation. Set to zero to always generate mips (Experimental value)"
               );
  atexit(FUN_142f05d7d);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x3e19999a);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca2f898,L"r.SSS.SubSurfaceColorAsTansmittanceAtDistance",&local_58,
                L"Normalized distance (0..1) at which the surface color is interpreted as transmittance color to compute extinction coefficients."
               );
  atexit(FUN_142f05dc2);
  local_50 = FUN_145c5ede0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2f9d8,&local_58);
  local_50 = FUN_145e59fb6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2fb00,&local_58);
  local_50 = FUN_14156854e;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca2fb98,&local_58);
  local_50 = FUN_1415a5ec4;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2fcc0,&local_58);
  local_50 = FUN_14158f878;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2fde8,&local_58);
  local_50 = FUN_14157819c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca2ff10,&local_58);
  local_50 = FUN_1415a3244;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30038,&local_58);
  local_50 = FUN_147299b04;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30160,&local_58);
  local_50 = FUN_145f1a4f0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30288,&local_58);
  local_50 = FUN_14159db4a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca303b0,&local_58);
  local_50 = FUN_14159dd70;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca304d8,&local_58);
  local_50 = FUN_145e74b22;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30600,&local_58);
  local_58._0_4_ = 0xbf800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca30610,L"r.Tonemapper.Sharpen",&local_58,
                L"Sharpening in the tonemapper (not for mobile), actual implementation is work in progress, clamped at 10\n  <0: inherit from PostProcessVolume settings (default)\n   0: off\n 0.5: half strength\n   1: full strength"
               );
  atexit(FUN_142f0bc46);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca30628,L"r.TonemapperGamma",&local_58,
                L"0: Default behavior\n#: Use fixed gamma # instead of sRGB or Rec709 transform");
  atexit(FUN_142f0bc8b);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca30640,L"r.Gamma",&local_58,L"Gamma on output");
  atexit(FUN_142f0bcd0);
  local_58._0_4_ = 0x61;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca30658,L"r.FilmGrain.SequenceLength",&local_58,
                L"Length of the random sequence for film grain (preferably a prime number, default=97)."
               );
  atexit(FUN_142f0bd15);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca30670,L"r.FilmGrain.CacheTextureConstants",&local_58,
                L"Wether the constants related to the film grain should be cached.");
  atexit(FUN_142f0bd5a);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca30688,L"r.BackbufferQuantizationDitheringOverride",&local_58,
                L"Override the bitdepth in bits of each channel of the backbuffer targeted by the quantization dithering. Disabled by default. Instead is automatically found out by FSceneViewFamily::RenderTarget\'s pixel format of the backbuffer."
               );
  atexit(FUN_142f0bd9f);
  local_58 = (char *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca306a0,L"r.AlphaInvertPass",&local_58,
                L"Whether to run a render pass to un-invert the alpha value from unreal standard to the much more common standard where alpha 0 is fully transparent and alpha 1 is fully opaque."
               );
  atexit(FUN_142f0bde4);
  local_50 = FUN_145e5a866;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca307e0,&local_58);
  local_50 = FUN_145e5add0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30908,&local_58);
  local_50 = FUN_1415d0a54;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30a30,&local_58);
  local_50 = FUN_14155e2b2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30b58,&local_58);
  local_50 = FUN_145ea1de8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30c80,&local_58);
  local_50 = FUN_145f34b18;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30da8,&local_58);
  local_50 = FUN_145f575f8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca30ed0,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f26374 FUN_142f26374 body=69 status=ok
// SIG undefined FUN_142f26374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f26374(void)

{
  _DAT_14ca351a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f263b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca351b0,1);
  return;
}



// FUNCTION 142f263b9 FUN_142f263b9 body=69 status=ok
// SIG undefined FUN_142f263b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f263b9(void)

{
  _DAT_14ca351c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f263fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca351c8,1);
  return;
}



// FUNCTION 142f26416 FUN_142f26416 body=2257 status=ok
// SIG undefined FUN_142f26416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f26416(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  byte param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 **ppuVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  ulonglong local_160;
  undefined4 local_154;
  undefined8 local_150;
  ulonglong *local_148;
  undefined8 *local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong *local_118;
  undefined1 local_109;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined4 local_df;
  undefined3 uStack_db;
  undefined8 *local_d8;
  longlong local_d0;
  undefined *puStack_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar10 = *param_4;
  local_138 = param_3;
  local_118 = param_1;
  if (uVar10 != 0) {
    local_160 = param_4[1];
    uVar16 = param_4[2];
    if (uVar16 != local_160) {
      local_150 = CONCAT71(local_150._1_7_,(char)param_4[3]);
      goto LAB_142f26710;
    }
  }
  puVar13 = (undefined8 *)(DAT_14ca4aec8 | 9);
  local_58 = CONCAT44(local_58._4_4_,DAT_14ca83a40);
  local_68 = _DAT_14ca83a30;
  uStack_60 = _DAT_14ca83a38;
  local_a5 = *(undefined1 *)(param_4[4] + 0x93);
  uVar21 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if ((int)param_4[7] == 0) {
    fVar23 = *(float *)(*(longlong *)(param_3 + 8) + 0x110);
    fVar22 = (float)(*(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc)) * fVar23 *
             *(float *)(param_3 + 0x45c);
    iVar17 = (int)ROUND(-0.5 - (fVar22 + fVar22)) >> 1;
    fVar23 = (float)(*(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8)) * fVar23 *
             *(float *)(param_3 + 0x45c);
    iVar15 = (int)ROUND(-0.5 - (fVar23 + fVar23)) >> 1;
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    puVar14 = (undefined8 *)DAT_14ca97170;
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar10 = 0;
    }
    else if (iVar4 == 1) {
      local_160 = CONCAT71(local_160._1_7_,local_a5);
      local_140 = (undefined8 *)DAT_14ca97170;
      uVar5 = FUN_140ad26c0();
      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,uVar5);
      DVar6 = GetCurrentThreadId();
      uVar10 = (ulonglong)((DWORD)local_148 != DVar6);
      puVar14 = local_140;
      local_a5 = (undefined1)local_160;
    }
    else {
      uVar10 = 1;
    }
    iVar4 = *(int *)((longlong)puVar14 + uVar10 * 4);
    uVar12 = (uint)(iVar4 < 1) << 2 | 0xfffffff8;
    iVar4 = (uint)(0 < iVar4) * 4 + 3;
    uVar10 = CONCAT44(iVar4 - iVar17 & uVar12,iVar4 - iVar15 & uVar12);
    puVar11 = &DAT_14c967818;
    uVar16 = CONCAT44(-iVar17,-iVar15);
  }
  else {
    puVar11 = (ulonglong *)(param_3 + 0x4d8);
    uVar10 = *(ulonglong *)(param_3 + 0x4e0);
    uVar16 = uVar10;
  }
  param_3 = local_138;
  local_160 = *puVar11;
  local_a6 = 0;
  local_a4 = 0xff00;
  local_ac = 0x10001;
  local_a8 = 0x101;
  local_b4 = DAT_14ca84e40;
  if ((int)uVar10 < DAT_14ca84e40) {
    local_b4 = (int)uVar10;
  }
  if (local_b4 < 2) {
    local_b4 = 1;
  }
  iVar4 = (int)(uVar10 >> 0x20);
  local_b0 = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_b0 = iVar4;
  }
  local_c0 = (undefined4)local_58;
  local_d0 = local_68;
  puStack_c8 = (undefined *)uStack_60;
  local_b8 = 0;
  if (local_b0 < 2) {
    local_b0 = 1;
  }
  uVar10 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar7 = uVar10 + 0x120;
  local_d8 = puVar13;
  local_bc = uVar21;
  if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar10 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar7 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar7;
  FUN_1456bbb8c(uVar10,L"Upscale",&local_d8,0);
  iVar4 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar4 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_150 = CONCAT71(local_150._1_7_,2);
LAB_142f26710:
  if ((int)param_4[7] == 2) {
    FUN_142fe3552(param_3,&local_f0);
  }
  else {
    local_f0 = param_4[5];
    local_e8 = param_4[6];
  }
  local_68 = *(undefined8 *)(param_4[4] + 0x84);
  local_108 = *(undefined8 *)(uVar10 + 0x84);
  local_100 = local_160;
  if (*param_6 == 0) {
    local_154 = 0;
  }
  else {
    local_154 = (undefined4)CONCAT71((int7)(local_160 >> 8),param_6[1] != 0);
  }
  puVar11 = (ulonglong *)(param_2 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar14 + 0x48;
  local_f8 = uVar16;
  uStack_60 = local_f0;
  local_58 = local_e8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(puVar11,0x250);
    puVar14 = (undefined8 *)(*puVar11 + 0xf & 0xfffffffffffffff0);
    puVar13 = puVar14 + 0x48;
  }
  *puVar11 = (ulonglong)puVar13;
  *puVar14 = &PTR_FUN_14a2d2668;
  local_140 = puVar14 + 2;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 1;
  *(undefined1 (*) [16])(puVar14 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar14 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar14 + 0x24) = (undefined1  [16])0x0;
  puVar14[0x26] = 0;
  lVar8 = 0x140;
  do {
    *(undefined1 (*) [16])((longlong)puVar14 + lVar8) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar14 + lVar8 + 0x10) = 0xffff0000;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x200);
  *(undefined4 *)((longlong)puVar14 + 0x214) = 0;
  *(undefined1 (*) [16])(puVar14 + 0x40) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar14 + 0x42) = 0;
  *(undefined4 *)(puVar14 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)puVar14 + 0x21c) = 0xffffffff;
  *(undefined4 *)(puVar14 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)puVar14 + 0x224) = 0xffffffff;
  *(undefined4 *)(puVar14 + 0x45) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x22c) = 0;
  puVar14[0x46] = 0;
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  local_148 = puVar11;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar14;
  puVar14[0x28] = uVar10;
  puVar14[0x29] = 0;
  *(undefined1 *)(puVar14 + 0x2a) = (undefined1)local_150;
  *(undefined1 *)((longlong)puVar14 + 0x151) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x152) = 0xffff;
  FUN_144a2c7c2(&local_d8,&local_68);
  ppuVar18 = &local_d8;
  puVar13 = puVar14 + 4;
  for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *ppuVar18;
    ppuVar18 = ppuVar18 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_144a2c7c2(&local_d8,&local_108);
  ppuVar18 = &local_d8;
  puVar13 = puVar14 + 0x12;
  for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *ppuVar18;
    ppuVar18 = ppuVar18 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar14[0x20] = *param_6;
  puVar14[0x21] = DAT_14c9c0de0;
  puVar14[0x22] = param_4[4];
  puVar14[0x23] = DAT_14ca2c398;
  uVar7 = param_4[4];
  puVar14[0x24] = uVar7;
  puVar14[0x25] = uVar7;
  puVar14[0x26] = DAT_14ca34fe0;
  fVar23 = *(float *)(DAT_14ca351b8 + 4);
  if (1.0 <= fVar23) {
    fVar23 = 1.0;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  *(float *)(puVar14 + 0x27) = fVar23;
  lVar8 = FUN_1447e4f80();
  cVar9 = '\x02';
  if (*(char *)(lVar8 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar8 + 0x41);
  }
  puVar14[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar14 + 3) = cVar9;
  plVar2 = DAT_14ca27dc8;
  local_120 = uVar16;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar4 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar4 == 0) {
      pbVar19 = (byte *)(plVar2 + 0xb);
    }
    else {
      pbVar19 = (byte *)plVar2[10];
    }
    bVar3 = *pbVar19;
  }
  else {
    bVar3 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  uVar1 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145f57bee();
  FUN_1448e935e(uVar1,&local_d8,&DAT_14ca35240,(uint)bVar3 + (uint)param_5 * 2);
  FUN_145f57bee();
  uVar7 = local_58;
  lVar8 = local_d0;
  puVar14 = local_d8;
  uVar16 = local_100;
  uVar1 = local_108;
  local_150 = local_68;
  local_128 = uStack_60;
  local_130 = local_f8;
  FUN_145f57e5c();
  FUN_140069376(param_2);
  puVar11 = local_148;
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar20 + 0x42;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(local_148,0x218);
    puVar20 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar20 + 0x42;
  }
  *local_148 = (ulonglong)puVar13;
  local_d8 = local_140;
  local_d0 = DAT_14ca362f8;
  if (DAT_14ca362f8 != 0) {
    LOCK();
    *(int *)(DAT_14ca362f8 + 8) = *(int *)(DAT_14ca362f8 + 8) + 1;
    UNLOCK();
  }
  puStack_c8 = &DAT_14ca362b0;
  local_168 = 2;
  FUN_140068f1a(puVar20,&local_109,&local_d8,1);
  *puVar20 = &PTR_FUN_14a2d2670;
  puVar20[0x37] = local_138;
  *(char *)(puVar20 + 0x38) = (char)local_154;
  *(undefined4 *)((longlong)puVar20 + 0x1c1) = local_df;
  *(uint *)((longlong)puVar20 + 0x1c4) = CONCAT31(uStack_db,local_df._3_1_);
  puVar20[0x39] = puVar14;
  puVar20[0x3a] = lVar8;
  puVar20[0x3b] = local_140;
  puVar20[0x3c] = local_150;
  puVar20[0x3d] = local_128;
  puVar20[0x3e] = uVar7;
  puVar20[0x3f] = uVar1;
  puVar20[0x40] = uVar16;
  puVar20[0x41] = local_130;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar20);
  *local_118 = uVar10;
  local_118[1] = local_160;
  local_118[2] = local_120;
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f26cf4 FUN_142f26cf4 body=3162 status=ok
// SIG undefined FUN_142f26cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142f26cf4(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  size_t sVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined1 auStack_3c8 [32];
  wchar_t *local_3a8;
  wchar_t *local_3a0;
  undefined4 *local_398;
  undefined4 local_390;
  code *local_388;
  code *local_380;
  undefined1 *local_378;
  undefined1 *local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  undefined8 local_350;
  uint local_344;
  ulonglong local_340;
  uint local_334;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong *local_308;
  ulonglong *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 *local_2a0;
  ulonglong local_298;
  undefined1 local_289;
  longlong local_288;
  undefined8 uStack_280;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined1 local_230;
  undefined2 local_228;
  undefined1 local_226;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  wchar_t *local_e8;
  ulonglong uStack_e0;
  wchar_t *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  wchar_t *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar14 = *param_4;
  lVar13 = param_4[1];
  lVar21 = param_4[2];
  local_310 = param_3;
  if (lVar21 == lVar13 || lVar14 == 0) {
    lVar14 = param_4[4];
    lVar13 = param_4[5];
    lVar21 = param_4[6];
  }
  else {
    local_230 = (undefined1)param_4[3];
    local_260 = param_4[4];
    local_258 = param_4[5];
    local_250 = param_4[6];
    local_270 = *(undefined4 *)(param_3 + 0x3090);
    local_26c = *(undefined4 *)(param_3 + 0x1dd4);
    local_268 = *(undefined4 *)(param_3 + 0x3094);
    local_264 = (&DAT_00001de6)[param_3];
    local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,1);
    local_248 = lVar14;
    local_240 = lVar13;
    local_238 = lVar21;
    FUN_14301884d(param_2);
  }
  local_288 = 0;
  uStack_280 = 0;
  iVar2 = (int)param_4[8];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  iVar10 = 0;
  local_2e8 = param_1;
  if (iVar2 != 0) {
    FUN_142f543c6(&local_288);
    iVar10 = (int)param_4[8];
  }
  uVar16 = (int)lVar21 - (int)lVar13;
  local_2f0 = (ulonglong)uVar16;
  uVar22 = uVar16 + 3;
  if (-1 < (int)uVar16) {
    uVar22 = uVar16;
  }
  local_340 = (ulonglong)uVar22;
  uVar16 = (int)((ulonglong)lVar21 >> 0x20) - (int)((ulonglong)lVar13 >> 0x20);
  local_2f8 = (ulonglong)uVar16;
  local_344 = uVar16 + 3;
  if (-1 < (int)uVar16) {
    local_344 = uVar16;
  }
  local_330 = lVar21;
  local_328 = lVar13;
  local_320 = param_2;
  local_318 = lVar14;
  if (0 < iVar10) {
    local_340 = (ulonglong)(uint)((int)uVar22 >> 2);
    local_344 = (int)local_344 >> 2;
    local_2e0 = DAT_14c9c0de0;
    local_300 = (ulonglong *)(param_2 + 0x70);
    local_308 = (longlong *)(param_2 + 0x98);
    uVar18 = 0;
    local_2d8 = param_4;
    do {
      puVar6 = local_300;
      if ((*(longlong *)(param_4[7] + uVar18 * 0x30) != 0) &&
         ((plVar23 = (longlong *)(param_4[7] + uVar18 * 0x30), (int)plVar23[2] != (int)plVar23[1] ||
          (*(int *)((longlong)plVar23 + 0x14) != *(int *)((longlong)plVar23 + 0xc))))) {
        local_334 = (uint)(uVar18 >> 2) & 0x3fffffff;
        local_1a8 = *(double *)(lVar14 + 0x84);
        uVar22 = ((uint)uVar18 & 3) * (int)local_340;
        local_298 = (ulonglong)uVar22;
        local_1a0 = CONCAT44(local_334 * local_344,uVar22);
        uStack_198 = CONCAT44(local_334 * local_344 + local_344,uVar22 + (int)local_340);
        puVar17 = &DAT_149e1e318;
        if ((char)plVar23[5] != '\0') {
          puVar17 = (undefined4 *)&DAT_149e1dd24;
        }
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar25 + 0x34;
        if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
          FUN_140023dd8(local_300,0x1b0);
          puVar25 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar25 + 0x34;
        }
        *local_300 = (ulonglong)puVar12;
        *puVar25 = &PTR_FUN_14a2d2688;
        puVar25[0x10] = 0;
        puVar25[0x11] = 0;
        lVar13 = 0xb2;
        do {
          puVar12 = (undefined8 *)((longlong)puVar25 + lVar13 + -0x12);
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined4 *)((longlong)puVar25 + lVar13 + -2) = 0xffff0000;
          lVar13 = lVar13 + 0x18;
        } while (lVar13 != 0x172);
        *(undefined4 *)((longlong)puVar25 + 0x174) = 0;
        puVar25[0x2c] = 0;
        puVar25[0x2d] = 0;
        *(undefined2 *)(puVar25 + 0x2e) = 0;
        *(undefined4 *)(puVar25 + 0x2f) = 0xffffffff;
        *(undefined4 *)((longlong)puVar25 + 0x17c) = 0xffffffff;
        *(undefined4 *)(puVar25 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)puVar25 + 0x184) = 0xffffffff;
        *(undefined4 *)(puVar25 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar25 + 0x18c) = 0;
        puVar25[0x32] = 0;
        iVar2 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
          FUN_1448cfae8(local_308,iVar2);
        }
        puVar12 = puVar25 + 2;
        *(undefined8 **)(*local_308 + (longlong)iVar2 * 8) = puVar25;
        FUN_144a2c7c2(&local_128,&local_1a8);
        lVar13 = local_310;
        puVar19 = &local_128;
        puVar20 = puVar12;
        for (lVar21 = 0xe; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar20 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        }
        puVar25[0x14] = lVar14;
        puVar25[0x15] = 0;
        *(undefined4 *)(puVar25 + 0x16) = 0xffff0001;
        puVar25[0x10] = *plVar23;
        puVar25[0x11] = local_2e0;
        uVar11 = puVar17[1];
        uVar3 = puVar17[2];
        uVar4 = puVar17[3];
        *(undefined4 *)(puVar25 + 0x12) = *puVar17;
        *(undefined4 *)((longlong)puVar25 + 0x94) = uVar11;
        *(undefined4 *)(puVar25 + 0x13) = uVar3;
        *(undefined4 *)((longlong)puVar25 + 0x9c) = uVar4;
        local_2a8 = plVar23[1];
        local_2b0 = plVar23[2];
        local_2b8 = *(undefined8 *)(*plVar23 + 0x84);
        uVar5 = *(undefined8 *)(local_310 + 0x13818);
        local_2a0 = puVar12;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_360 = &LAB_14712ac08;
          local_368 = &LAB_14712ac0c;
          local_370 = &LAB_1472e3912;
          local_378 = &LAB_1472e3916;
          local_380 = FUN_1472e391a;
          local_388 = FUN_1472e3942;
          local_3a0 = L"ScreenPassVS";
          local_3a8 = L"/Engine/Private/ScreenPass.usf";
          local_350 = 0;
          local_358 = 0xe0;
          local_390 = 1;
          local_398 = (undefined4 *)((ulonglong)local_398 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        FUN_1448e935e(uVar5,&local_128,&DAT_14ca4b6d8,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_360 = &LAB_14712ac08;
          local_368 = &LAB_14712ac0c;
          local_370 = &LAB_1472e3912;
          local_378 = &LAB_1472e3916;
          local_380 = FUN_1472e391a;
          local_388 = FUN_1472e3942;
          local_3a0 = L"ScreenPassVS";
          local_3a8 = L"/Engine/Private/ScreenPass.usf";
          local_350 = 0;
          local_358 = 0xe0;
          local_390 = 1;
          local_398 = (undefined4 *)((ulonglong)local_398 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        uVar7 = uStack_120;
        pwVar8 = local_128;
        uVar5 = *(undefined8 *)(lVar13 + 0x13818);
        FUN_145e92c36();
        FUN_1448e935e(uVar5,&local_128,&DAT_14ca35490,0);
        FUN_145e92c36();
        pwVar9 = local_128;
        local_2c8 = uStack_120;
        local_2c0 = DAT_14ca38470;
        uVar11 = *(undefined4 *)(lVar13 + 0x3090);
        uVar3 = *(undefined4 *)(lVar13 + 0x1dd4);
        uVar4 = *(undefined4 *)(lVar13 + 0x3094);
        uVar1 = (&DAT_00001de6)[lVar13];
        local_2d0 = DAT_14c9c0d98;
        FUN_145e92ea4();
        puVar12 = local_2a0;
        local_128 = (wchar_t *)0x0;
        uStack_120 = 0;
        FUN_1448f70da(pwVar9,&DAT_14ca36338,local_2a0,&local_128);
        local_128 = (wchar_t *)CONCAT44(uVar3,uVar11);
        uStack_120 = CONCAT17(local_226,CONCAT25(local_228,CONCAT14(uVar1,uVar4)));
        local_118 = local_1a8;
        local_110 = (undefined4)local_1a0;
        uStack_10c = local_1a0._4_4_;
        uStack_108 = (undefined4)uStack_198;
        uStack_104 = uStack_198._4_4_;
        local_100 = local_2b8;
        local_f8 = local_2a8;
        local_f0 = local_2b0;
        local_e8 = pwVar8;
        uStack_e0 = uVar7;
        local_d8 = pwVar9;
        local_d0 = local_2c8;
        local_c8 = local_2c0;
        local_c0 = local_2d0;
        local_b8 = DAT_14ca94df8;
        local_b0 = 0;
        local_a8 = pwVar9;
        local_a0 = local_2c8;
        local_98 = puVar12;
        local_90 = 0;
        FUN_145e92ea4();
        param_2 = local_320;
        FUN_1472ad4a0(local_320,&local_289,puVar12,&local_128);
        param_4 = local_2d8;
        local_128 = (wchar_t *)0x0;
        uStack_120 = 0;
        if (&local_128 != plVar23 + 3) {
          uVar22 = *(uint *)(plVar23 + 4);
          _Src = (void *)plVar23[3];
          uStack_120 = (ulonglong)uVar22;
          if ((longlong)(int)uVar22 == 0) {
            uStack_120 = (ulonglong)uVar22;
          }
          else {
            FUN_1446dd670(&local_128,uVar22,0);
            memcpy(local_128,_Src,(longlong)(int)uVar22 * 2);
          }
        }
        uVar7 = uStack_280;
        local_118 = (double)CONCAT44((local_334 + 1) * local_344 + -0x13,(int)local_298 + 8);
        lVar13 = (longlong)(int)uStack_280;
        uVar22 = (int)uStack_280 + 1;
        uStack_280 = CONCAT44(uStack_280._4_4_,uVar22);
        if (uStack_280._4_4_ < uVar22) {
          FUN_142f5478c(&local_288,uVar7 & 0xffffffff);
        }
        pwVar8 = local_128;
        lVar14 = local_318;
        puVar12 = (undefined8 *)(local_288 + lVar13 * 0x18);
        *puVar12 = 0;
        lVar13 = (longlong)(int)uStack_120;
        *(int *)(puVar12 + 1) = (int)uStack_120;
        if (lVar13 == 0) {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar12,uStack_120 & 0xffffffff,0);
          memcpy((void *)*puVar12,pwVar8,lVar13 * 2);
        }
        puVar12[2] = local_118;
        if (local_128 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        iVar10 = (int)param_4[8];
      }
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar10);
  }
  uVar18 = uStack_280;
  lVar13 = local_288;
  lVar21 = (longlong)(int)uStack_280;
  local_288 = 0;
  uStack_280 = 0;
  local_3a0 = (wchar_t *)
              CONCAT44(local_3a0._4_4_,*(undefined4 *)(*(longlong *)(local_310 + 8) + 0xe8));
  local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,*(undefined4 *)(local_310 + 0x3090));
  lVar14 = FUN_147d8dc86(param_2,lVar14,0,*(longlong *)(local_310 + 8) + 0x88);
  *(longlong *)(lVar14 + 0x38) = local_328;
  *(longlong *)(lVar14 + 0x40) = local_330;
  if (*(char *)(lVar14 + 0xa0) == '\0') {
    local_1a8 = (double)*(float *)(lVar14 + 0xb0);
  }
  else {
    local_1a8 = 1.0;
  }
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x3ff0000000000000;
  local_180 = local_1a8;
  local_158 = local_1a8;
  FUN_1401fb128(&local_228,local_2f0,local_2f8);
  FUN_1447fea8d(&local_128,&local_1a8,&local_228);
  FUN_147d8debc(lVar14,&local_128);
  if (lVar21 != 0) {
    lVar24 = 0;
    do {
      fVar26 = 1.0;
      if (*(char *)(lVar14 + 0xa0) == '\0') {
        fVar26 = *(float *)(lVar14 + 0xb0);
      }
      uVar5 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
      if (*(int *)(lVar13 + 8 + lVar24) == 0) {
        local_128 = L"";
LAB_142f27820:
        sVar15 = wcslen(local_128);
        uVar11 = (int)sVar15;
      }
      else {
        local_128 = *(wchar_t **)(lVar13 + lVar24);
        uVar11 = 0;
        if (local_128 != (wchar_t *)0x0) goto LAB_142f27820;
      }
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar11);
      local_398 = &DAT_149e1e308;
      local_3a0 = L"";
      local_3a8 = (wchar_t *)uVar5;
      FUN_147d8e230(lVar14,(double)((float)*(int *)(lVar13 + 0x10 + lVar24) / fVar26),
                    (double)((float)*(int *)(lVar13 + 0x14 + lVar24) / fVar26),&local_128);
      lVar24 = lVar24 + 0x18;
    } while (lVar21 * 0x18 != lVar24);
  }
  FUN_14376dc88(lVar14,local_320,0);
  FUN_142f5439a(lVar13,uVar18 & 0xffffffff);
  if (lVar13 != 0) {
    FUN_1400020a8(lVar13);
  }
  plVar23 = local_2e8;
  *local_2e8 = local_318;
  local_2e8[1] = local_328;
  local_2e8[2] = local_330;
  FUN_142f5439a(local_288,uStack_280 & 0xffffffff);
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar23;
}



// FUNCTION 142f27950 FUN_142f27950 body=1037 status=ok
// SIG undefined FUN_142f27950(void)

undefined8 * FUN_142f27950(undefined8 *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined8 local_84;
  ulonglong local_70;
  int iVar3;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = (**(code **)(*param_3 + 8))(param_3);
  bVar1 = *(byte *)(lVar6 + 0x31);
  *param_4 = *param_4 * (uint)bVar1;
  param_4[2] = (uint)bVar1 * param_4[2];
  lVar6 = (**(code **)(*param_3 + 8))(param_3);
  bVar1 = *(byte *)(lVar6 + 0x33);
  if (bVar1 < 10) {
    if (bVar1 != 1) {
      if (bVar1 != 2) {
LAB_142f27ad9:
        *param_1 = 0;
        goto LAB_142f27ae0;
      }
      goto LAB_142f27b21;
    }
LAB_142f27c27:
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_140a4b95e(&local_b8,(param_4[3] - param_4[1]) * (param_4[2] - *param_4),1);
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 2);
    local_98 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_98,5);
    local_98 = 0x300000006;
    uStack_90._0_4_ = (uint)uStack_90 & 0xffffff00;
    uStack_90 = CONCAT44(0x467a0000,(uint)uStack_90);
    local_88 = 0;
    local_84 = 0;
    local_e8 = &local_98;
    local_a8 = uVar4;
    uStack_a0 = uVar5;
    (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,param_3,&local_a8,&local_b8);
    local_c0 = local_b8;
    local_b8 = 0;
    iVar3 = (int)uStack_b0;
    iVar2 = uStack_b0._4_4_;
    uStack_b0 = 0;
    local_a8 = CONCAT44(param_4[3] - param_4[1],param_4[2] - *param_4);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_98 = 0;
    uStack_90 = 0;
    local_e0 = CONCAT31(local_e0._1_3_,4);
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,0x20);
    local_d8 = &local_98;
    FUN_147129202(puVar7,&local_a8,2,3);
    ppuVar8 = &PTR_FUN_14a1e9240;
LAB_142f27d31:
    *puVar7 = ppuVar8;
    puVar7[5] = local_c0;
    puVar7[6] = (longlong)iVar3;
    puVar7[7] = (longlong)iVar2;
    *param_1 = puVar7;
    lVar6 = local_b8;
  }
  else {
    if (bVar1 == 0x25) {
LAB_142f27b21:
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_1469886f0(&local_b8,(param_4[3] - param_4[1]) * (param_4[2] - *param_4),1);
      uVar4 = *(undefined8 *)param_4;
      uVar5 = *(undefined8 *)(param_4 + 2);
      local_98 = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      FUN_14007658c(&DAT_14ca850c8,&local_98,5);
      local_98 = 6;
      uStack_90._0_4_ = (uint)uStack_90 & 0xffffff00;
      uStack_90 = CONCAT44(0x467a0000,(uint)uStack_90);
      local_88 = 0;
      local_84 = 0;
      local_e8 = &local_98;
      local_a8 = uVar4;
      uStack_a0 = uVar5;
      (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,param_3,&local_a8,&local_b8);
      local_c0 = local_b8;
      local_b8 = 0;
      iVar3 = (int)uStack_b0;
      iVar2 = uStack_b0._4_4_;
      uStack_b0 = 0;
      local_a8 = CONCAT44(param_4[3] - param_4[1],param_4[2] - *param_4);
      puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      local_98 = 0;
      uStack_90 = 0;
      local_e0 = CONCAT31(local_e0._1_3_,4);
      local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,8);
      local_d8 = &local_98;
      FUN_147129202(puVar7,&local_a8,0,1);
      ppuVar8 = &PTR_FUN_14a1e9260;
      goto LAB_142f27d31;
    }
    if (bVar1 == 0x12) goto LAB_142f27c27;
    if (bVar1 != 10) goto LAB_142f27ad9;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1471290d8(&local_a8,(param_4[3] - param_4[1]) * (param_4[2] - *param_4),1);
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(ulonglong *)(param_4 + 2);
    local_d0 = 0;
    local_d8 = (undefined8 *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e0 = 0;
    local_e8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x498))(DAT_14ca83900,param_2,param_3,&local_98);
    local_c0 = local_a8;
    local_a8 = 0;
    lVar9 = (longlong)(int)uStack_a0;
    lVar6 = (longlong)uStack_a0._4_4_;
    uStack_a0 = 0;
    local_b8 = CONCAT44(param_4[3] - param_4[1],param_4[2] - *param_4);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_98 = 0;
    uStack_90 = 0;
    local_e0 = CONCAT31(local_e0._1_3_,4);
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,0x10);
    local_d8 = &local_98;
    FUN_147129202(puVar7,&local_b8,1,3);
    *puVar7 = &PTR_FUN_14a1e9200;
    puVar7[5] = local_c0;
    puVar7[6] = lVar9;
    puVar7[7] = lVar6;
    *param_1 = puVar7;
    lVar6 = local_a8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
LAB_142f27ae0:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f27d5e FUN_142f27d5e body=5202 status=ok
// SIG undefined FUN_142f27d5e(void)

longlong * FUN_142f27d5e(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  ulonglong *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint *puVar13;
  ushort uVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  void *pvVar19;
  undefined8 *puVar20;
  wchar_t *pwVar21;
  int iVar22;
  undefined2 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ushort uVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  undefined1 auStack_498 [32];
  ulonglong local_478;
  undefined1 local_461;
  longlong local_460;
  ulonglong *local_458;
  longlong *local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_438;
  longlong *local_430;
  longlong local_428;
  undefined8 local_420;
  longlong local_418;
  ulonglong *local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined1 local_3fc;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined1 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  void *local_3a0;
  undefined8 uStack_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  undefined2 *local_318;
  uint local_310;
  wchar_t *local_308;
  undefined8 uStack_300;
  wchar_t *local_2f8;
  void *pvStack_2f0;
  longlong local_2e8;
  undefined1 local_2dc [4];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  uint local_2c0;
  undefined4 uStack_2bc;
  uint uStack_2b8;
  int iStack_2b4;
  uint uStack_2b0;
  undefined4 local_2ac;
  undefined8 *local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  wchar_t *local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  wchar_t *local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  wchar_t *local_218;
  void *local_210;
  longlong lStack_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  void *local_1b0;
  longlong lStack_1a8;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  longlong lStack_118;
  longlong local_110;
  undefined8 uStack_108;
  longlong local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 local_b0;
  undefined6 uStack_ae;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined8 local_a0;
  longlong lStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_2f8 = (wchar_t *)0x0;
  pvStack_2f0 = (void *)0x0;
  local_2e8 = 0;
  uVar16 = 10;
  if (*(char *)((longlong)param_4 + 0xca) == '\0') {
    uVar16 = 0;
  }
  local_460 = param_2;
  local_440 = param_1;
  local_461 = FUN_1472a97b8(uVar16);
  local_308 = (wchar_t *)0x0;
  uStack_300 = 0;
  if ((longlong)*(int *)(param_3 + 0x2f38) != 0) {
    puVar29 = *(ulonglong **)(param_3 + 0x2f30);
    local_410 = puVar29 + *(int *)(param_3 + 0x2f38);
    local_418 = param_3 + 0x2fc0;
    local_430 = param_4 + 0x14;
    local_458 = (ulonglong *)(local_460 + 0x70);
    local_450 = (longlong *)(local_460 + 0x98);
    local_438 = local_460 + 0x168;
    local_448 = param_3;
    do {
      uVar28 = uStack_300;
      uVar17 = *puVar29;
      if (uVar17 == 0) {
        lVar24 = (longlong)(int)uStack_300;
        uVar10 = (int)uStack_300 + 1;
        uStack_300 = CONCAT44(uStack_300._4_4_,uVar10);
        if (uStack_300._4_4_ < uVar10) {
          FUN_1472ad7ce(&local_308,uVar28 & 0xffffffff);
        }
        pwVar21 = local_308 + (lVar24 * 6 + 4) * 4;
        pwVar21[0] = L'\0';
        pwVar21[1] = L'\0';
        pwVar21[2] = L'\0';
        pwVar21[3] = L'\0';
        pwVar21[4] = L'\0';
        pwVar21[5] = L'\0';
        pwVar21[6] = L'\0';
        pwVar21[7] = L'\0';
        pwVar21 = local_308 + (lVar24 * 6 + 2) * 4;
        pwVar21[0] = L'\0';
        pwVar21[1] = L'\0';
        pwVar21[2] = L'\0';
        pwVar21[3] = L'\0';
        pwVar21[4] = L'\0';
        pwVar21[5] = L'\0';
        pwVar21[6] = L'\0';
        pwVar21[7] = L'\0';
        pwVar21 = local_308 + lVar24 * 0x18;
        pwVar21[0] = L'\0';
        pwVar21[1] = L'\0';
        pwVar21[2] = L'\0';
        pwVar21[3] = L'\0';
        pwVar21[4] = L'\0';
        pwVar21[5] = L'\0';
        pwVar21[6] = L'\0';
        pwVar21[7] = L'\0';
      }
      else {
        local_238 = *(longlong *)(uVar17 + 0x18);
        FUN_1400021e4(&local_238);
        uStack_228 = 0;
        uStack_227 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        memset(&local_218,0,0xf0);
        lVar24 = local_460;
        local_120 = 0;
        lStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        lStack_f8 = 0;
        local_f0 = 0;
        lStack_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        lStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        uStack_b6 = 0;
        local_b0 = 0;
        uStack_ae = 0;
        local_a8 = 0;
        uStack_a7 = 0;
        local_a0 = 0;
        lStack_98 = 0;
        local_90 = CONCAT31(local_90._1_3_,1);
        local_88 = 0;
        uStack_80 = CONCAT31(uStack_80._1_3_,1);
        local_78 = 0;
        local_70 = 0xffffffff00000001;
        local_128 = 0;
        local_124 = 0;
        local_330 = param_4[4];
        local_328 = param_4[5];
        local_320 = param_4[6];
        FUN_1448a0832(&local_288,local_460,&local_330);
        local_218 = local_288;
        local_210 = uStack_280;
        lStack_208 = uStack_278;
        local_348 = param_4[0xd];
        local_340 = param_4[0xe];
        local_338 = param_4[0xf];
        FUN_1448a0832(&local_288,lVar24,&local_348);
        local_200 = local_288;
        local_1f8 = (undefined4)uStack_280;
        uStack_1f4 = uStack_280._4_4_;
        uStack_1f0 = (undefined4)uStack_278;
        uStack_1ec = uStack_278._4_4_;
        local_360 = param_4[7];
        local_358 = param_4[8];
        local_350 = param_4[9];
        FUN_1448a0832(&local_288,lVar24,&local_360);
        local_1e8 = local_288;
        local_1e0 = (undefined4)uStack_280;
        uStack_1dc = uStack_280._4_4_;
        uStack_1d8 = (undefined4)uStack_278;
        uStack_1d4 = uStack_278._4_4_;
        local_378 = param_4[10];
        local_370 = param_4[0xb];
        local_368 = param_4[0xc];
        FUN_1448a0832(&local_288,lVar24,&local_378);
        local_1d0 = local_288;
        local_1c8 = (undefined4)uStack_280;
        uStack_1c4 = uStack_280._4_4_;
        uStack_1c0 = (undefined4)uStack_278;
        uStack_1bc = uStack_278._4_4_;
        local_390 = param_4[0x10];
        local_388 = param_4[0x11];
        local_380 = param_4[0x12];
        FUN_1448a0832(&local_288,lVar24,&local_390);
        local_1b8 = local_288;
        local_1b0 = uStack_280;
        lStack_1a8 = uStack_278;
        if (((*(byte *)(*(longlong *)(param_3 + 8) + 0x60) & 2) != 0) &&
           (puVar11 = (undefined8 *)param_4[0x18], *(char *)(puVar11 + 5) == '\x01')) {
          lStack_118 = param_4[5];
          local_110 = param_4[6];
          uStack_108 = *puVar11;
          local_f0 = puVar11[2];
          uStack_d8 = puVar11[3];
          local_c0 = puVar11[4];
          uStack_b8 = (undefined2)lStack_118;
          uStack_b6 = (undefined6)((ulonglong)lStack_118 >> 0x10);
          local_b0 = (undefined2)local_110;
          uStack_ae = (undefined6)((ulonglong)local_110 >> 0x10);
          local_120 = puVar11[1];
          local_100 = lStack_118;
          lStack_f8 = local_110;
          lStack_e8 = lStack_118;
          local_e0 = local_110;
          local_d0 = lStack_118;
          lStack_c8 = local_110;
        }
        if (*(int *)(&DAT_00002f90 + param_3) != *(int *)(param_3 + 0x2fbc)) {
          lVar24 = *(longlong *)(uVar17 + 0x18);
          uVar10 = (uint)((ulonglong)lVar24 >> 0x10);
          uVar18 = (uint)lVar24 & 0xffff;
          lVar25 = *(longlong *)(param_3 + 0x2fc8);
          if (*(longlong *)(param_3 + 0x2fc8) == 0) {
            lVar25 = local_418;
          }
          iVar15 = *(int *)(lVar25 + (ulonglong)
                                     (*(int *)(param_3 + 0x2fd0) - 1U &
                                     (int)((ulonglong)lVar24 >> 0x20) +
                                     ((uint)lVar24 << 0x10 | uVar18) +
                                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar18 >> 4)) * 4);
          if (iVar15 != -1) {
            do {
              lVar25 = *(longlong *)(param_3 + 0x2f88) + (longlong)iVar15 * 0x20;
              if (*(longlong *)(*(longlong *)(param_3 + 0x2f88) + (longlong)iVar15 * 0x20) == lVar24
                 ) goto LAB_142f2829c;
              iVar15 = *(int *)(lVar25 + 0x18);
            } while (iVar15 != -1);
          }
        }
        lVar25 = 0;
LAB_142f2829c:
        puVar11 = (undefined8 *)(lVar25 + 8);
        if (lVar25 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        if ((puVar11 == (undefined8 *)0x0) || ((byte *)*puVar11 == (byte *)0x0)) {
          local_a8 = local_461;
          lStack_98 = *local_430;
          local_90 = (undefined4)local_430[1];
          uStack_8c = *(undefined4 *)((longlong)local_430 + 0xc);
          local_88 = local_430[2];
          uStack_80 = (undefined4)local_430[3];
          uStack_7c = *(undefined4 *)((longlong)local_430 + 0x1c);
          bVar8 = *(byte *)(param_4 + 0x19) ^ 1;
          bVar4 = false;
        }
        else {
          local_a8 = local_461;
          if ((*(byte *)*puVar11 & 1) != 0) {
            local_a8 = 1;
          }
          lStack_98 = *local_430;
          local_90 = (undefined4)local_430[1];
          uStack_8c = *(undefined4 *)((longlong)local_430 + 0xc);
          local_88 = local_430[2];
          uStack_80 = (undefined4)local_430[3];
          uStack_7c = *(undefined4 *)((longlong)local_430 + 0x1c);
          bVar4 = true;
          bVar8 = 0;
        }
        local_70 = CONCAT71(local_70._1_7_,bVar8);
        local_478 = uVar17;
        FUN_142ef5063(&local_288,local_460,param_3,&local_238);
        lVar24 = uStack_278;
        pvVar19 = uStack_280;
        pwVar21 = local_288;
        puVar5 = local_458;
        local_2f8 = local_288;
        pvStack_2f0 = uStack_280;
        local_2e8 = uStack_278;
        if (bVar4) {
          local_420 = *puVar11;
          puVar20 = (undefined8 *)(*(longlong *)(local_460 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar11 = puVar20 + 6;
          if (*(undefined8 **)(local_460 + 0x78) < puVar11) {
            FUN_140023dd8(local_458,0x40);
            puVar20 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
            puVar11 = puVar20 + 6;
          }
          *(undefined8 **)(local_460 + 0x70) = puVar11;
          *puVar20 = &PTR_FUN_14a2d3740;
          puVar20[2] = 0;
          puVar20[3] = 0;
          *(undefined4 *)(puVar20 + 4) = 0;
          iVar15 = *(int *)(local_460 + 0xa0);
          *(uint *)(local_460 + 0xa0) = iVar15 + 1U;
          if (*(uint *)(local_460 + 0xa4) < iVar15 + 1U) {
            FUN_1448cfae8(local_450,iVar15);
          }
          *(undefined8 **)(*local_450 + (longlong)iVar15 * 8) = puVar20;
          if (pwVar21 == (wchar_t *)0x0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *(undefined8 *)(pwVar21 + 0x56);
          }
          puVar20[2] = pwVar21;
          puVar20[3] = uVar16;
          *(undefined4 *)(puVar20 + 4) = 0x80;
          local_428 = FUN_14600fd94();
          lVar25 = local_460;
          FUN_140069376(local_460);
          puVar5 = local_458;
          puVar26 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar26 + 0x3b;
          if (*(undefined8 **)(lVar25 + 0x78) < puVar11) {
            FUN_140023dd8(local_458,0x1e0);
            puVar26 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar26 + 0x3b;
          }
          local_288 = (wchar_t *)(puVar20 + 2);
          *local_458 = (ulonglong)puVar11;
          uStack_280 = *(void **)(local_428 + 0x48);
          if (uStack_280 != (void *)0x0) {
            LOCK();
            *(int *)((longlong)uStack_280 + 8) = *(int *)((longlong)uStack_280 + 8) + 1;
            UNLOCK();
          }
          uStack_278 = local_428;
          local_478 = local_478 & 0xffffffffffffff00;
          FUN_140068f1a(puVar26,&local_2d8,&local_288,0x18);
          *puVar26 = &PTR_FUN_14a2d26c0;
          puVar26[0x37] = pwVar21;
          puVar26[0x38] = pvVar19;
          puVar26[0x39] = lVar24;
          puVar26[0x3a] = local_420;
          iVar15 = *(int *)(local_460 + 0x170);
          *(uint *)(local_460 + 0x170) = iVar15 + 1U;
          if (*(uint *)(local_460 + 0x174) < iVar15 + 1U) {
            FUN_14470e57a(local_438,iVar15);
          }
          *(undefined8 **)(*(longlong *)(local_460 + 0x168) + (longlong)iVar15 * 8) = puVar26;
          *(int *)((longlong)puVar26 + 0x2c) = *(int *)(local_460 + 0x170) + -1;
          FUN_140069100(local_460,puVar26);
        }
        puVar23 = local_318;
        lVar24 = local_448;
        param_3 = local_448;
        if ((char)param_4[0x19] == '\x01') {
          uStack_268 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_25e = 0;
          uStack_25d = 0;
          local_288 = (wchar_t *)0x0;
          uStack_280 = (void *)0x0;
          local_25c = 0xffffffff00000080;
          local_254 = 0;
          local_248 = 0;
          local_240 = 0;
          local_3a0 = (void *)0x0;
          lVar25 = (longlong)(int)local_310;
          uStack_398._0_4_ = local_310;
          pvVar19 = (void *)0x0;
          uVar10 = 0;
          uVar9 = 0;
          if (lVar25 != 0) {
            FUN_1446dd670(&local_3a0,local_310,0);
            memcpy(local_3a0,puVar23,lVar25 * 2);
            pvVar19 = local_3a0;
            uVar10 = (uint)uStack_398;
            uVar9 = uStack_398._4_4_;
          }
          local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,3);
          local_3a0 = (void *)0x0;
          uStack_398 = 0;
          uStack_2c8 = pvVar19;
          local_2c0 = uVar10;
          uStack_2bc = uVar9;
          FUN_140056680(&local_3b8,L"material");
          uStack_298 = &local_2d8;
          local_2a0 = &local_3b8;
          FUN_1472ad862(&local_288,local_2dc,&local_2a0,0);
          if (CONCAT44(local_3b8._4_4_,(undefined4)local_3b8) != 0) {
            FUN_1400020a8();
          }
          if (uStack_2c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar23 = &DAT_149dfb77a;
          if (*(int *)(lVar24 + 0x2f80) != 0) {
            puVar23 = *(undefined2 **)(lVar24 + 0x2f78);
          }
          FUN_140230a63();
          FUN_140a69a96(&DAT_14c8731a8,&local_3b8,puVar23,&local_288);
          uVar10 = *(uint *)(lVar24 + 0x2f80);
          if (uStack_3b0 == uVar10) {
            pvVar19 = *(void **)(lVar24 + 0x2f78);
            if (1 < (int)uStack_3b0) {
              lVar24 = 0;
              while( true ) {
                uVar14 = *(ushort *)(CONCAT44(local_3b8._4_4_,(undefined4)local_3b8) + lVar24);
                uVar17 = (ulonglong)uVar14;
                uVar27 = *(ushort *)((longlong)pvVar19 + lVar24);
                if (uVar14 != uVar27) break;
                if (uVar14 == 0) goto LAB_142f289f7;
LAB_142f287c2:
                lVar24 = lVar24 + 2;
              }
              if ((uVar27 | uVar14) < 0x80) {
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                uVar28 = (ulonglong)uVar27;
                uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
                if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar28]) goto LAB_142f287c2;
              }
              if (uVar14 != uVar27) goto LAB_142f28b1b;
            }
LAB_142f289f7:
            local_2a0 = (undefined8 *)0x0;
            uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,uVar10);
            FUN_1446dd670(&local_2a0,(uVar10 == 0) + uVar10 + 1,0);
            if (uVar10 != 0) {
              memcpy(local_2a0,pvVar19,(longlong)(int)uVar10 * 2);
            }
            FUN_1400020e8(&local_2a0,&DAT_149e01f60,1);
            puVar11 = uStack_298;
            puVar23 = local_318;
            iVar15 = (int)uStack_298;
            if ((int)uStack_298 < 2) {
              local_2d8 = (undefined8 *)0x0;
              lVar24 = (longlong)(int)local_310;
              uStack_2d0 = (wchar_t *)CONCAT44(uStack_2d0._4_4_,local_310);
              if (lVar24 == 0) {
                uStack_2d0 = (wchar_t *)(ulonglong)local_310;
              }
              else {
                FUN_1446dd670(&local_2d8,local_310,0);
                memcpy(local_2d8,puVar23,lVar24 * 2);
              }
            }
            else {
              iVar22 = local_310 - 1;
              if (local_310 == 0) {
                iVar22 = 0;
              }
              local_2d8 = local_2a0;
              iVar7 = uStack_298._4_4_;
              local_2a0 = (undefined8 *)0x0;
              uStack_298 = (undefined8 *)0x0;
              uStack_2d0 = (wchar_t *)puVar11;
              iVar1 = iVar22 + iVar15;
              if (iVar1 < iVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4((longlong)iVar22);
              }
              if (iVar7 < iVar1) {
                FUN_1446f8c06(&local_2d8);
              }
              FUN_1400020e8(&local_2d8,local_318,iVar22);
            }
            if (CONCAT44(local_3b8._4_4_,(undefined4)local_3b8) != 0) {
              FUN_1400020a8();
            }
            local_3b8._0_4_ = (undefined4)local_2d8;
            local_3b8._4_4_ = local_2d8._4_4_;
            uStack_3b0 = (uint)uStack_2d0;
            uStack_3ac = uStack_2d0._4_4_;
            local_2d8 = (undefined8 *)0x0;
            uStack_2d0 = (wchar_t *)0x0;
            if (local_2a0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (uStack_3b0 + uVar10 == 1) {
            pvVar19 = *(void **)(local_448 + 0x2f78);
            goto LAB_142f289f7;
          }
LAB_142f28b1b:
          FUN_1400020e8(&local_3b8,&DAT_149eca162,4);
          lVar24 = local_2e8;
          pvVar19 = pvStack_2f0;
          pwVar21 = local_2f8;
          lVar25 = FUN_14034d933();
          param_3 = local_448;
          if (*(longlong *)(lVar25 + 0x70) != 0) {
            if ((DAT_14c867cf1 == '\x01') &&
               (*(int *)(lVar25 + 0x1c) != *(int *)(lVar25 + 0x14) &&
                *(int *)(lVar25 + 0x18) != *(int *)(lVar25 + 0x10))) {
              pvVar19 = *(void **)(lVar25 + 0x10);
              lVar24 = *(longlong *)(lVar25 + 0x18);
            }
            uStack_2d0 = pwVar21;
            local_2c0 = (uint)lVar24;
            uStack_2bc = (undefined4)((ulonglong)lVar24 >> 0x20);
            uStack_2b8 = 0;
            iStack_2b4 = 0;
            lVar24 = (longlong)(int)uStack_3b0;
            _Src = (void *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
            uStack_2b0 = uStack_3b0;
            local_2d8 = (undefined8 *)lVar25;
            uStack_2c8 = pvVar19;
            if (lVar24 == 0) {
              local_2ac = 0;
            }
            else {
              FUN_1446dd670(&uStack_2b8,uStack_3b0,0);
              memcpy((void *)CONCAT44(iStack_2b4,uStack_2b8),_Src,lVar24 * 2);
            }
            puVar5 = local_458;
            puVar20 = (undefined8 *)(*(longlong *)(local_460 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar11 = puVar20 + 6;
            if (*(undefined8 **)(local_460 + 0x78) < puVar11) {
              FUN_140023dd8(local_458,0x40);
              puVar20 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
              puVar11 = puVar20 + 6;
            }
            *(undefined8 **)(local_460 + 0x70) = puVar11;
            *puVar20 = &PTR_FUN_14a2d3740;
            puVar20[2] = 0;
            puVar20[3] = 0;
            *(undefined4 *)(puVar20 + 4) = 0;
            iVar15 = *(int *)(local_460 + 0xa0);
            *(uint *)(local_460 + 0xa0) = iVar15 + 1U;
            if (*(uint *)(local_460 + 0xa4) < iVar15 + 1U) {
              FUN_1448cfae8(local_450,iVar15);
            }
            *(undefined8 **)(*local_450 + (longlong)iVar15 * 8) = puVar20;
            if (pwVar21 == (wchar_t *)0x0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(undefined8 *)(pwVar21 + 0x56);
            }
            puVar20[2] = pwVar21;
            puVar20[3] = uVar16;
            *(undefined4 *)(puVar20 + 4) = 0x80;
            lVar25 = FUN_14600fd94();
            lVar24 = local_460;
            FUN_140069376(local_460);
            puVar5 = local_458;
            puVar26 = (undefined8 *)(*(longlong *)(lVar24 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar26 + 0x3d;
            if (*(undefined8 **)(lVar24 + 0x78) < puVar11) {
              FUN_140023dd8(local_458,0x1f0);
              puVar26 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar26 + 0x3d;
            }
            param_3 = local_448;
            local_2a0 = puVar20 + 2;
            *local_458 = (ulonglong)puVar11;
            uStack_298 = *(undefined8 **)(lVar25 + 0x48);
            if (uStack_298 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(uStack_298 + 1) = *(int *)(uStack_298 + 1) + 1;
              UNLOCK();
            }
            local_478 = local_478 & 0xffffffffffffff00;
            local_290 = lVar25;
            FUN_140068f1a(puVar26,local_2dc,&local_2a0,0x18);
            *puVar26 = &PTR_FUN_14a2d26e0;
            puVar26[0x37] = local_2d8;
            puVar26[0x38] = uStack_2d0;
            puVar26[0x39] = uStack_2c8;
            puVar26[0x3a] = CONCAT44(uStack_2bc,local_2c0);
            puVar26[0x3b] = 0;
            lVar24 = (longlong)(int)uStack_2b0;
            pvVar19 = (void *)CONCAT44(iStack_2b4,uStack_2b8);
            *(uint *)(puVar26 + 0x3c) = uStack_2b0;
            if (lVar24 == 0) {
              *(undefined4 *)((longlong)puVar26 + 0x1e4) = 0;
            }
            else {
              FUN_1446dd670(puVar26 + 0x3b,uStack_2b0,0);
              memcpy((void *)puVar26[0x3b],pvVar19,lVar24 * 2);
            }
            iVar15 = *(int *)(local_460 + 0x170);
            *(uint *)(local_460 + 0x170) = iVar15 + 1U;
            if (*(uint *)(local_460 + 0x174) < iVar15 + 1U) {
              FUN_14470e57a(local_438,iVar15);
            }
            *(undefined8 **)(*(longlong *)(local_460 + 0x168) + (longlong)iVar15 * 8) = puVar26;
            *(int *)((longlong)puVar26 + 0x2c) = *(int *)(local_460 + 0x170) + -1;
            FUN_140069100(local_460,puVar26);
            if (CONCAT44(iStack_2b4,uStack_2b8) != 0) {
              FUN_1400020a8();
            }
          }
          if (CONCAT44(local_3b8._4_4_,(undefined4)local_3b8) != 0) {
            FUN_1400020a8();
          }
          local_240 = 0;
          if (local_248 != 0) {
            FUN_1400020a8();
          }
          FUN_140b40bda(&local_288);
        }
        lVar24 = local_460;
        if (*(char *)((longlong)param_4 + 0xc9) == '\x01') {
          local_270 = (wchar_t *)0x0;
          uStack_268 = 0;
          uStack_280 = (void *)0x0;
          uStack_278 = 0;
          uStack_264 = 0;
          uStack_260 = 0;
          uStack_25e = 0;
          local_288 = L"MaterialHalfSize";
          FUN_1448a0832(&local_2d8,local_460,&local_2f8);
          uStack_278 = (longlong)local_2d8;
          local_270 = uStack_2d0;
          uStack_268 = (undefined4)uStack_2c8;
          uStack_264 = uStack_2c8._4_4_;
          uStack_260 = 0x100;
          FUN_142eb905c(&local_2a0,lVar24,param_3,&local_288);
          local_288 = L"MaterialQuarterSize";
          FUN_1448a0832(&local_2d8,lVar24,&local_2a0);
          uStack_278 = (longlong)local_2d8;
          local_270 = uStack_2d0;
          uStack_268 = (undefined4)uStack_2c8;
          uStack_264 = uStack_2c8._4_4_;
          uStack_2b8 = 0;
          iStack_2b4 = 0;
          uStack_2b0 = uStack_2b0 & 0xffffff00;
          uStack_2c8 = (void *)0x0;
          local_2c0 = 0;
          uStack_2bc = 0;
          local_2d8 = (undefined8 *)0x0;
          uStack_2d0 = (wchar_t *)0x0;
          FUN_142eb905c(&local_3b8,lVar24,param_3,&local_288);
          local_2d8 = (undefined8 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
          uStack_2d0 = (wchar_t *)CONCAT44(uStack_3ac,uStack_3b0);
          uStack_2c8 = (void *)CONCAT44(uStack_3a4,uStack_3a8);
          if (DAT_14cacef48 == '\0') {
            FUN_14620d3c6(&DAT_14cacee68);
          }
          puVar23 = &DAT_149dfb77a;
          if (local_310 != 0) {
            puVar23 = local_318;
          }
          FUN_1446f470e(&local_3c0,puVar23,1);
          FUN_14798bdf6(&DAT_14cacee68,&local_3b8,local_3c0);
          plVar3 = (longlong *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
          plVar12 = plVar3;
          if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
            plVar12 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3);
          }
          FUN_1447a1fc0(plVar12);
          pcVar2 = *(code **)(*plVar3 + 0x28);
          if (pcVar2 == FUN_14482841c) {
            puVar13 = (uint *)(plVar3[5] + 8);
            if (plVar3[5] == 0) {
              puVar13 = (uint *)(plVar3 + 3);
            }
          }
          else if (pcVar2 == (code *)&LAB_14010c34c) {
            puVar13 = (uint *)(plVar3 + 2);
          }
          else {
            puVar13 = (uint *)(*pcVar2)(plVar3);
          }
          if (&local_2c0 != puVar13) {
            uVar10 = puVar13[2];
            pvVar19 = *(void **)puVar13;
            uStack_2b8 = uVar10;
            if (uVar10 == 0 && iStack_2b4 == 0) {
              iStack_2b4 = 0;
            }
            else {
              FUN_1446dd670(&local_2c0,uVar10);
              if (uVar10 != 0) {
                memcpy((void *)CONCAT44(uStack_2bc,local_2c0),pvVar19,(longlong)(int)uVar10 * 2);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
          uVar17 = uStack_300;
          lVar24 = (longlong)(int)uStack_300;
          uVar10 = (int)uStack_300 + 1;
          uStack_300 = CONCAT44(uStack_300._4_4_,uVar10);
          if (uStack_300._4_4_ < uVar10) {
            FUN_1472ad7ce(&local_308,uVar17 & 0xffffffff);
          }
          pwVar6 = local_308;
          *(undefined8 **)(local_308 + lVar24 * 0x18) = local_2d8;
          *(wchar_t **)(local_308 + (lVar24 * 6 + 1) * 4) = uStack_2d0;
          *(void **)(local_308 + (lVar24 * 6 + 2) * 4) = uStack_2c8;
          pwVar21 = local_308 + (lVar24 * 6 + 3) * 4;
          pwVar21[0] = L'\0';
          pwVar21[1] = L'\0';
          pwVar21[2] = L'\0';
          pwVar21[3] = L'\0';
          lVar25 = (longlong)(int)uStack_2b8;
          pvVar19 = (void *)CONCAT44(uStack_2bc,local_2c0);
          *(uint *)(local_308 + (lVar24 * 6 + 4) * 4) = uStack_2b8;
          if (lVar25 == 0) {
            (local_308 + lVar24 * 0x18 + 0x12)[0] = L'\0';
            (local_308 + lVar24 * 0x18 + 0x12)[1] = L'\0';
          }
          else {
            pwVar21 = local_308 + (lVar24 * 6 + 3) * 4;
            FUN_1446dd670(pwVar21,uStack_2b8,0);
            memcpy(*(void **)pwVar21,pvVar19,lVar25 * 2);
          }
          *(undefined1 *)(pwVar6 + (lVar24 * 6 + 5) * 4) = (undefined1)uStack_2b0;
          if (CONCAT44(uStack_2bc,local_2c0) != 0) {
            FUN_1400020a8();
          }
        }
        if (local_318 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar29 = puVar29 + 1;
    } while (puVar29 != local_410);
  }
  plVar3 = local_440;
  if (*(char *)((longlong)param_4 + 0xc9) == '\0') {
    if ((*param_4 != 0) &&
       (((int)param_4[2] != (int)param_4[1] ||
        (*(int *)((longlong)param_4 + 0x14) != *(int *)((longlong)param_4 + 0xc))))) {
      local_3d8 = param_4[1];
      local_3d0 = param_4[2];
      local_3c8 = (undefined1)param_4[3];
      local_3f8 = param_4[4];
      local_3f0 = param_4[5];
      local_3e8 = param_4[6];
      local_408 = *(undefined4 *)(param_3 + 0x3090);
      local_404 = *(undefined4 *)(param_3 + 0x1dd4);
      local_400 = *(undefined4 *)(param_3 + 0x3094);
      local_3fc = (&DAT_00001de6)[param_3];
      local_478 = CONCAT44(local_478._4_4_,1);
      local_3e0 = *param_4;
      FUN_14301884d(local_460);
    }
    *plVar3 = param_4[4];
    plVar3[1] = param_4[5];
    plVar3[2] = param_4[6];
  }
  else {
    local_238 = *param_4;
    uStack_230 = (undefined1)param_4[1];
    uStack_22f = (undefined7)((ulonglong)param_4[1] >> 8);
    uStack_228 = (undefined1)param_4[2];
    uStack_227 = (undefined7)((ulonglong)param_4[2] >> 8);
    uStack_220 = (undefined1)param_4[3];
    local_218 = (wchar_t *)param_4[4];
    local_210 = (void *)param_4[5];
    lStack_208 = param_4[6];
    local_200 = local_308;
    local_1f8 = (int)uStack_300;
    FUN_142f26cf4(local_440,local_460,param_3);
  }
  FUN_1472ad79f(local_308,uStack_300 & 0xffffffff);
  if (local_308 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 142f291b2 FUN_142f291b2 body=58 status=ok
// SIG undefined FUN_142f291b2(void)

undefined8 FUN_142f291b2(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x60);
  uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((((uVar1 & 0x20) == 0) || (*(longlong *)(param_1 + 0x1e24) == 0)) &&
     (((uVar1 & 0x40) == 0 || (*(longlong *)(param_1 + 0x1e2c) == 0)))) {
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x1e34) != 0 && (char)uVar1 < '\0');
  }
  return uVar2;
}



// FUNCTION 142f291f8 FUN_142f291f8 body=3154 status=ok
// SIG undefined FUN_142f291f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f291f8(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  size_t sVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  float fVar21;
  undefined1 auStack_338 [32];
  wchar_t *local_318;
  wchar_t *local_310;
  undefined4 *local_308;
  undefined4 local_300;
  code *local_2f8;
  code *local_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b1;
  longlong local_2b0;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 *local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  longlong lStack_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar14 = *param_4;
  local_278 = param_1;
  if (lVar14 == 0) {
LAB_142f2925c:
    local_240 = param_4[4];
    local_238 = param_4[5];
    local_230 = param_4[6];
    local_318 = L"VisualizeComplexity";
    FUN_143017cc0(&local_228,param_2,&local_240,(&DAT_00001de6)[param_3] * '\x02');
    local_288 = uStack_220;
    local_290 = local_218;
    lVar14 = (longlong)local_228;
    uVar20 = (undefined1)local_210;
  }
  else {
    local_288 = param_4[1];
    local_290 = param_4[2];
    if (local_290 == local_288) goto LAB_142f2925c;
    uVar20 = (undefined1)param_4[3];
  }
  local_250 = param_4[5];
  lStack_248 = param_4[6];
  local_258 = *(undefined8 *)(param_4[4] + 0x84);
  local_270 = *(undefined8 *)(lVar14 + 0x84);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar17 + 0x5c;
  local_268 = local_288;
  local_260 = local_290;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x2f0);
    puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar17 + 0x5c;
  }
  *puVar1 = (ulonglong)puVar11;
  *puVar17 = &PTR_FUN_14a2d26f8;
  *(undefined1 (*) [16])(puVar17 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar17 + 0x20) = (undefined1  [16])0x0;
  lVar12 = 0x1e0;
  do {
    *(undefined1 (*) [16])((longlong)puVar17 + lVar12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar17 + lVar12 + 0x10) = 0xffff0000;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x2a0);
  local_298 = puVar17 + 2;
  *(undefined4 *)((longlong)puVar17 + 0x2b4) = 0;
  *(undefined1 (*) [16])(puVar17 + 0x54) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar17 + 0x56) = 0;
  *(undefined4 *)(puVar17 + 0x57) = 0xffffffff;
  *(undefined4 *)((longlong)puVar17 + 700) = 0xffffffff;
  *(undefined4 *)(puVar17 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)puVar17 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(puVar17 + 0x59) = 0;
  *(undefined2 *)((longlong)puVar17 + 0x2cc) = 0;
  puVar17[0x5a] = 0;
  iVar10 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar10 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar10 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar10);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar10 * 8) = puVar17;
  puVar17[0x3c] = lVar14;
  puVar17[0x3d] = 0;
  *(undefined1 *)(puVar17 + 0x3e) = uVar20;
  *(undefined1 *)((longlong)puVar17 + 0x1f1) = 0;
  *(undefined2 *)((longlong)puVar17 + 0x1f2) = 0xffff;
  FUN_144a2c7c2(&local_228,&local_258);
  puVar11 = &local_228;
  puVar19 = local_298;
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar19 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar19 = puVar19 + 1;
  }
  FUN_144a2c7c2(&local_228,&local_270);
  puVar11 = &local_228;
  puVar19 = puVar17 + 0x10;
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar19 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar19 = puVar19 + 1;
  }
  puVar17[0x1e] = param_4[4];
  puVar17[0x1f] = DAT_14c9c0de0;
  uVar2 = *(uint *)(param_4 + 8);
  uVar9 = 0xb;
  if ((int)uVar2 < 0xb) {
    uVar9 = uVar2;
  }
  if ((int)uVar2 < 1) {
    puVar17[0x22] = 0x3f0000003f000000;
    puVar17[0x23] = 0x3f8000003f000000;
    fVar21 = 1.0;
  }
  else {
    lVar12 = 0;
    do {
      uVar3 = ((undefined8 *)(param_4[7] + lVar12))[1];
      puVar11 = (undefined8 *)((longlong)(puVar17 + 0x22) + lVar12);
      *puVar11 = *(undefined8 *)(param_4[7] + lVar12);
      puVar11[1] = uVar3;
      lVar12 = lVar12 + 0x10;
    } while ((ulonglong)uVar9 << 4 != lVar12);
    fVar21 = (float)(int)uVar9;
  }
  *(float *)(puVar17 + 0x3b) = fVar21;
  lVar12 = DAT_14ca63c28;
  if (DAT_14ca63c28 == 0) {
    lVar12 = DAT_14ca63b20;
  }
  puVar17[0x21] = *(undefined8 *)(lVar12 + 8);
  lVar12 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
  *(undefined4 *)(puVar17 + 0x3a) = 1;
  lVar13 = *(longlong *)(lVar12 + 0x330);
  uVar18 = 0;
  local_2b0 = lVar14;
  local_2a8 = param_2;
  if (lVar13 == 0) goto LAB_142f29585;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_228,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_228);
    if (local_228 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    lVar13 = *(longlong *)(lVar12 + 0x330);
    if (lVar13 != 0) goto LAB_142f29550;
LAB_142f29556:
    lVar14 = local_2b0;
    lVar13 = FUN_14476842e(local_2a8,&DAT_14ca63c00,L"ZeroUIntDummy",2);
  }
  else {
LAB_142f29550:
    lVar14 = local_2b0;
    if ((*(byte *)(lVar13 + 0x24) & 4) == 0) goto LAB_142f29556;
  }
  puVar17[0x20] = lVar13;
  *(undefined4 *)(puVar17 + 0x3a) = 0;
  uVar18 = 1;
LAB_142f29585:
  *(uint *)(puVar17 + 0x39) = (uint)*(byte *)(param_4 + 10);
  *(undefined4 *)((longlong)puVar17 + 0x1cc) = 1;
  *(int *)((longlong)puVar17 + 0x1d4) = (int)param_4[9];
  *(undefined4 *)((longlong)puVar17 + 0x1dc) = *(undefined4 *)((longlong)param_4 + 0x4c);
  iVar10 = *(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8);
  iVar16 = *(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc);
  puVar17[0x38] =
       CONCAT44((iVar16 - (iVar16 + 1 >> 0x1f)) + 1 >> 1,(iVar10 - (iVar10 + 1 >> 0x1f)) + 1 >> 1);
  uVar3 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145f581e4();
  FUN_1448e935e(uVar3,&local_228,&DAT_14ca355d8,uVar18);
  FUN_145f581e4();
  lVar12 = (longlong)local_228;
  local_280 = uStack_220;
  uVar3 = *(undefined8 *)(lVar14 + 0x84);
  iVar10 = *(int *)(param_3 + 0x3090);
  local_29c = *(undefined4 *)(param_3 + 0x1dd4);
  local_2a0 = *(undefined4 *)(param_3 + 0x3094);
  local_2b1 = (&DAT_00001de6)[param_3];
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar10 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_2d0 = &LAB_14712ac08;
    local_2d8 = &LAB_14712ac0c;
    local_2e0 = &LAB_1472e3912;
    local_2e8 = &LAB_1472e3916;
    local_2f0 = FUN_1472e391a;
    local_2f8 = FUN_1472e3942;
    local_310 = L"ScreenPassVS";
    local_318 = L"/Engine/Private/ScreenPass.usf";
    local_2c0 = 0;
    local_2c8 = 0xe0;
    local_300 = 1;
    local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar4,&local_228,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_2d0 = &LAB_14712ac08;
    local_2d8 = &LAB_14712ac0c;
    local_2e0 = &LAB_1472e3912;
    local_2e8 = &LAB_1472e3916;
    local_2f0 = FUN_1472e391a;
    local_2f8 = FUN_1472e3942;
    local_310 = L"ScreenPassVS";
    local_318 = L"/Engine/Private/ScreenPass.usf";
    local_2c0 = 0;
    local_2c8 = 0xe0;
    local_300 = 1;
    local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  lVar8 = uStack_220;
  lVar14 = (longlong)local_228;
  uVar6 = DAT_14c9c0d98;
  uVar4 = DAT_14c9c0d50;
  FUN_145f58452();
  puVar11 = local_298;
  local_228 = (wchar_t *)0x0;
  uStack_220 = 0;
  FUN_1448f70da(lVar12,&DAT_14ca363c0,local_298,&local_228);
  lVar7 = local_288;
  lVar13 = local_290;
  local_228 = (wchar_t *)CONCAT44(local_29c,iVar10);
  uStack_220 = CONCAT17(local_108._2_1_,
                        CONCAT25((undefined2)local_108,CONCAT14(local_2b1,local_2a0)));
  local_210 = local_288;
  local_208 = local_290;
  local_200 = local_258;
  local_1f8 = local_250;
  lStack_1f0 = lStack_248;
  local_1e8 = lVar14;
  lStack_1e0 = lVar8;
  local_1d8 = lVar12;
  local_1d0 = local_280;
  local_1c8 = uVar4;
  local_1c0 = uVar6;
  local_1b8 = DAT_14ca94df8;
  local_1b0 = 0;
  local_1a8 = lVar12;
  local_1a0 = local_280;
  local_198 = puVar11;
  local_190 = 0;
  local_218 = uVar3;
  FUN_145f58452();
  lVar14 = local_2a8;
  FUN_1472ada7a(local_2a8,&local_188,puVar11,&local_228);
  local_310 = (wchar_t *)
              CONCAT44(local_310._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 8) + 0xe8));
  local_318 = (wchar_t *)CONCAT44(local_318._4_4_,*(undefined4 *)(param_3 + 0x3090));
  lVar14 = FUN_147d8dc86(lVar14,local_2b0,0,*(longlong *)(param_3 + 8) + 0x88);
  *(longlong *)(lVar14 + 0x38) = lVar7;
  *(longlong *)(lVar14 + 0x40) = lVar13;
  if (*(char *)(lVar14 + 0xa0) == '\0') {
    fVar21 = *(float *)(lVar14 + 0xb0);
  }
  else {
    fVar21 = 1.0;
  }
  local_108 = (wchar_t *)(double)fVar21;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0x3ff0000000000000;
  iVar10 = (int)((ulonglong)lVar13 >> 0x20) - (int)((ulonglong)lVar7 >> 0x20);
  iVar16 = (int)lVar13 - (int)lVar7;
  local_e0 = (double)local_108;
  local_b8 = (double)local_108;
  FUN_1401fb128(&local_188,iVar16,iVar10);
  FUN_1447fea8d(&local_228,&local_108,&local_188);
  FUN_147d8debc(lVar14,&local_228);
  local_108 = (wchar_t *)0x3f0000003f000000;
  uStack_100 = 0x3f8000003f000000;
  local_318 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_228 = L"Good";
  uStack_220._0_4_ = 4;
  dVar5 = (double)((float)(iVar10 + -0x33) / fVar21);
  local_308 = &DAT_149e1e308;
  local_310 = (wchar_t *)&local_108;
  FUN_147d8e230(lVar14,(double)(63.0 / fVar21),dVar5,&local_228);
  local_108 = (wchar_t *)0x3f0000003f000000;
  uStack_100 = 0x3f8000003f000000;
  local_318 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_228 = (wchar_t *)&DAT_14a2d2718;
  uStack_220._0_4_ = 3;
  local_308 = &DAT_149e1e308;
  local_310 = (wchar_t *)&local_108;
  FUN_147d8e230(lVar14,(double)((float)((int)(((float)iVar16 * 107.0) / 397.0) + 0x3f) / fVar21),
                dVar5,&local_228);
  local_108 = (wchar_t *)0x3f0000003f000000;
  uStack_100 = 0x3f8000003f000000;
  local_318 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_228 = L"Extremely bad";
  uStack_220._0_4_ = 0xd;
  local_308 = &DAT_149e1e308;
  local_310 = (wchar_t *)&local_108;
  FUN_147d8e230(lVar14,(double)((float)(iVar16 + -0xaa) / fVar21),dVar5,&local_228);
  local_108 = (wchar_t *)0x3f0000003f000000;
  uStack_100 = 0x3f8000003f000000;
  local_318 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_228 = &DAT_149e25dfc;
  uStack_220 = CONCAT44(uStack_220._4_4_,1);
  local_308 = &DAT_149e1e308;
  local_310 = (wchar_t *)&local_108;
  FUN_147d8e230(lVar14,(double)(62.0 / fVar21),(double)((float)(iVar10 + -0x57) / fVar21),&local_228
               );
  FUN_140002266(&local_108,L"MaxShaderComplexityCount=%d",
                (int)*(float *)(DAT_14cb0d2b0 + 0x848 +
                               (ulonglong)(*(int *)(param_3 + 0x3090) == 1) * 4));
  lVar12 = local_2b0;
  local_188 = 0x3f0000003f000000;
  uStack_180 = 0x3f8000003f000000;
  local_228 = local_108;
  if ((int)uStack_100 == 0) {
    local_228 = L"";
  }
  uVar3 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  uVar18 = 0;
  if (local_228 != (wchar_t *)0x0) {
    sVar15 = wcslen(local_228);
    uVar18 = (int)sVar15;
  }
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar18);
  local_308 = &DAT_149e1e308;
  local_318 = (wchar_t *)uVar3;
  local_310 = (wchar_t *)&local_188;
  FUN_147d8e230(lVar14,(double)((float)(iVar16 + -0x14a) / fVar21),
                (double)((float)(iVar10 + -0x58) / fVar21));
  if (local_108 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14376dc88(lVar14,local_2a8,0);
  *local_278 = lVar12;
  local_278[1] = local_288;
  local_278[2] = local_290;
  if ((local_80 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f29e4b FUN_142f29e4b body=69 status=ok
// SIG undefined FUN_142f29e4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f29e4b(void)

{
  _DAT_14ca35698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f29e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca356a0,1);
  return;
}



// FUNCTION 142f29e9c FUN_142f29e9c body=7554 status=ok
// SIG undefined FUN_142f29e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f29e9c(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  size_t sVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 uVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 extraout_XMM0_Db;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  wchar_t *local_450;
  undefined4 *local_448;
  undefined4 local_440;
  code *local_438;
  code *local_430;
  undefined1 *local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined8 *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  float local_3d4;
  longlong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  longlong local_3b8;
  float local_3b0;
  float local_3ac;
  ulonglong local_3a8;
  double local_3a0;
  double local_398;
  longlong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  ulonglong uStack_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong lStack_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  wchar_t *local_328;
  undefined4 local_320;
  wchar_t *local_318;
  undefined4 local_310;
  wchar_t *local_308;
  undefined4 local_300;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  wchar_t *local_2e8;
  undefined4 local_2e0;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  wchar_t *local_2c8;
  undefined4 local_2c0;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  wchar_t *local_248;
  undefined4 local_240;
  wchar_t *local_238;
  undefined4 local_230;
  wchar_t *local_228;
  undefined4 local_220;
  wchar_t *local_218;
  undefined4 local_210;
  wchar_t *local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 *puStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  longlong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  undefined1 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_3b8 = *param_4;
  local_3d0 = param_2;
  if (local_3b8 != 0) {
    local_3c8 = param_4[1];
    local_3c0 = param_4[2];
    if (local_3c0 != local_3c8) {
      uVar21 = (undefined1)param_4[3];
      goto LAB_142f29f9a;
    }
  }
  local_340 = param_4[4];
  local_338 = param_4[5];
  local_330 = param_4[6];
  local_458 = L"VisualizeHDR";
  FUN_143017cc0(&local_198,param_2,&local_340,(&DAT_00001de6)[param_3] * '\x02');
  local_3b8 = (longlong)local_198;
  local_3c8 = (ulonglong)puStack_190;
  local_3c0 = local_188;
  uVar21 = (undefined1)uStack_180;
LAB_142f29f9a:
  uVar2 = DAT_14c9c0de0;
  uStack_350 = param_4[5];
  lStack_348 = param_4[6];
  local_358 = *(undefined8 *)(param_4[4] + 0x84);
  local_370 = *(undefined8 *)(local_3b8 + 0x84);
  if ((param_4[10] == 0) ||
     (((int)param_4[0xc] == (int)param_4[0xb] &&
      (*(int *)((longlong)param_4 + 100) == *(int *)((longlong)param_4 + 0x5c))))) {
    local_388 = DAT_14c967818;
    local_380 = 0;
    uStack_37c = 0;
    uStack_378 = 0;
    uStack_374 = 0;
  }
  else {
    local_380 = (undefined4)param_4[0xb];
    uStack_37c = *(undefined4 *)((longlong)param_4 + 0x5c);
    uStack_378 = (undefined4)param_4[0xc];
    uStack_374 = *(undefined4 *)((longlong)param_4 + 100);
    local_388 = *(undefined8 *)(param_4[10] + 0x84);
  }
  local_3e0 = DAT_14c9c0d80;
  plVar14 = (longlong *)(local_3d0 + 0x70);
  puVar23 = (undefined8 *)(*(longlong *)(local_3d0 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar23 + 0x68;
  local_390 = param_1;
  uStack_368 = local_3c8;
  local_360 = local_3c0;
  if (*(undefined8 **)(local_3d0 + 0x78) < puVar12) {
    FUN_140023dd8(plVar14,0x350);
    puVar23 = (undefined8 *)(*plVar14 + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar23 + 0x68;
  }
  lVar11 = local_3d0;
  *(undefined8 **)(local_3d0 + 0x70) = puVar12;
  *puVar23 = &PTR_FUN_14a2d2778;
  local_3f0 = puVar23 + 2;
  local_3e8 = plVar14;
  FUN_1472add5a();
  iVar22 = *(int *)(lVar11 + 0xa0);
  *(uint *)(lVar11 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(lVar11 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8((longlong *)(lVar11 + 0x98),iVar22);
  }
  *(undefined8 **)(*(longlong *)(lVar11 + 0x98) + (longlong)iVar22 * 8) = puVar23;
  puVar23[0x48] = local_3b8;
  puVar23[0x49] = 0;
  *(undefined1 *)(puVar23 + 0x4a) = uVar21;
  *(undefined1 *)((longlong)puVar23 + 0x251) = 0;
  *(undefined2 *)((longlong)puVar23 + 0x252) = 0xffff;
  lVar11 = FUN_1447e4f80();
  cVar9 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar11 + 0x41);
  }
  puVar23[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar23 + 3) = cVar9;
  FUN_144a2c7c2(&local_198,&local_358);
  puVar12 = &local_198;
  puVar20 = puVar23 + 8;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar20 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar20 = puVar20 + 1;
  }
  FUN_144a2c7c2(&local_198,&local_370);
  lVar11 = local_3d0;
  puVar12 = &local_198;
  puVar20 = puVar23 + 0x16;
  for (lVar15 = 0xe; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar20 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar20 = puVar20 + 1;
  }
  puVar23[0x25] = param_4[4];
  puVar23[0x2a] = uVar2;
  puVar23[0x24] = param_4[7];
  puVar23[0x29] = uVar2;
  lVar15 = param_4[10];
  if ((lVar15 == 0) ||
     (((int)param_4[0xc] == (int)param_4[0xb] &&
      (*(int *)((longlong)param_4 + 100) == *(int *)((longlong)param_4 + 0x5c))))) {
    lVar15 = FUN_14476842e(local_3d0,&DAT_14ca63b28,L"BlackDummy",2);
  }
  plVar14 = local_3e8;
  puVar23[0x27] = lVar15;
  puVar23[0x2b] = local_3e0;
  puVar23[0x26] = param_4[0xd];
  lVar15 = param_4[0xe];
  cVar9 = *(char *)(lVar15 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar20 + 9;
  if (*(undefined8 **)(lVar11 + 0x78) < puVar12) {
    FUN_140023dd8(local_3e8,0x50);
    puVar20 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar20 + 9;
  }
  *(undefined8 **)(lVar11 + 0x70) = puVar12;
  puVar20[1] = *(undefined8 *)(lVar15 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar9 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar15;
  iVar22 = *(int *)(lVar11 + 0x1a0);
  *(uint *)(lVar11 + 0x1a0) = iVar22 + 1U;
  if (*(uint *)(lVar11 + 0x1a4) < iVar22 + 1U) {
    FUN_1447568fc(lVar11 + 0x198,iVar22);
  }
  *(undefined8 **)(*(longlong *)(lVar11 + 0x198) + (longlong)iVar22 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar11 + 0x1a0) + -1;
  puVar23[0x28] = puVar20;
  memcpy(puVar23 + 0x2e,(void *)param_4[0xf],0x88);
  FUN_14019a1f8(&local_198,*(undefined8 *)(param_3 + 8));
  puVar23[6] = local_188;
  puVar23[4] = local_198;
  puVar23[5] = puStack_190;
  lVar11 = DAT_14ca63c28;
  if (DAT_14ca63c28 == 0) {
    lVar11 = DAT_14ca63b20;
  }
  puVar23[0x2c] = *(undefined8 *)(lVar11 + 8);
  *(undefined4 *)(puVar23 + 0x40) = *(undefined4 *)(param_3 + 0x27e8);
  *(undefined4 *)((longlong)puVar23 + 0x204) = *(undefined4 *)(param_3 + 0x27ec);
  *(undefined4 *)(puVar23 + 0x41) = *(undefined4 *)(param_3 + 0x27f0);
  *(undefined4 *)((longlong)puVar23 + 0x20c) = *(undefined4 *)(param_3 + 0x27f4);
  *(undefined4 *)(puVar23 + 0x42) = *(undefined4 *)(param_3 + 0x27f8);
  FUN_14177f7dc(&local_198,&local_358,&local_388);
  puVar23[0x44] = local_198;
  puVar23[0x45] = puStack_190;
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  puVar16 = DAT_14ca96af8;
  if (DAT_14ca96af8 == (undefined4 *)0x0) {
    puVar16 = &DAT_14ca96aa8;
  }
  if ((((uint)puVar16[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
     (uVar27 = 0, (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) {
    if ((*(uint *)(*(longlong *)(param_3 + 8) + 0x60) & 2) == 0) {
      uVar27 = 0x3f800000;
    }
    else {
      uVar27 = 0;
    }
  }
  *(undefined4 *)(puVar23 + 0x46) = uVar27;
  cVar9 = FUN_14728b532(param_3);
  if (cVar9 == '\0') {
    uVar27 = 0;
  }
  else {
    uVar27 = 0x3f800000;
  }
  *(undefined4 *)((longlong)puVar23 + 0x234) = uVar27;
  *(undefined4 *)(puVar23 + 0x47) = *(undefined4 *)(DAT_14ca356a8 + 4);
  uVar2 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145f587da();
  FUN_1448e935e(uVar2,&local_198,&DAT_14ca35718,0);
  FUN_145f587da();
  puVar7 = puStack_190;
  lVar11 = (longlong)local_198;
  iVar22 = *(int *)(param_3 + 0x3090);
  local_3e0 = CONCAT44(local_3e0._4_4_,*(undefined4 *)(param_3 + 0x1dd4));
  local_3e8 = (longlong *)CONCAT44(local_3e8._4_4_,*(undefined4 *)(param_3 + 0x3094));
  local_3d4 = (float)CONCAT31(local_3d4._1_3_,(&DAT_00001de6)[param_3]);
  uVar2 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar22 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_410 = &LAB_14712ac08;
    local_418 = &LAB_14712ac0c;
    local_420 = &LAB_1472e3912;
    local_428 = &LAB_1472e3916;
    local_430 = FUN_1472e391a;
    local_438 = FUN_1472e3942;
    local_450 = L"ScreenPassVS";
    local_458 = L"/Engine/Private/ScreenPass.usf";
    local_400 = 0;
    local_408 = 0xe0;
    local_440 = 1;
    local_448 = (undefined4 *)((ulonglong)local_448 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar2,&local_198,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_410 = &LAB_14712ac08;
    local_418 = &LAB_14712ac0c;
    local_420 = &LAB_1472e3912;
    local_428 = &LAB_1472e3916;
    local_430 = FUN_1472e391a;
    local_438 = FUN_1472e3942;
    local_450 = L"ScreenPassVS";
    local_458 = L"/Engine/Private/ScreenPass.usf";
    local_400 = 0;
    local_408 = 0xe0;
    local_440 = 1;
    local_448 = (undefined4 *)((ulonglong)local_448 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  puVar8 = puStack_190;
  lVar15 = (longlong)local_198;
  uVar5 = DAT_14c9c0d98;
  uVar2 = DAT_14c9c0d50;
  FUN_145f58a48();
  puVar12 = local_3f0;
  local_198 = (wchar_t *)0x0;
  puStack_190 = (undefined1 *)0x0;
  FUN_1448f70da(lVar11,&DAT_14ca36448,local_3f0,&local_198);
  local_198 = (wchar_t *)CONCAT44((int)local_3e0,iVar22);
  puStack_190 = (undefined1 *)
                CONCAT17(local_1a8._2_1_,
                         CONCAT25((undefined2)local_1a8,CONCAT14(local_3d4._0_1_,(int)local_3e8)));
  local_188 = local_370;
  uStack_180 = uStack_368;
  local_178 = local_360;
  local_170 = (undefined4)local_358;
  uStack_16c = local_358._4_4_;
  uStack_168 = (undefined4)uStack_350;
  uStack_164 = uStack_350._4_4_;
  local_160 = lStack_348;
  local_158 = lVar15;
  uStack_150 = (ulonglong)puVar8;
  local_148 = lVar11;
  local_140 = (ulonglong)puVar7;
  local_138 = uVar2;
  local_130 = uVar5;
  local_128 = DAT_14ca94df8;
  local_120 = 0;
  local_118 = lVar11;
  local_110 = (ulonglong)puVar7;
  local_108 = puVar12;
  local_100 = 0;
  FUN_145f58a48();
  lVar11 = local_3d0;
  FUN_1472ade16(local_3d0,&local_1b8,puVar12,&local_198);
  uVar6 = local_3c8;
  uVar25 = local_3c8 >> 0x20;
  local_450 = (wchar_t *)
              CONCAT44(local_450._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 8) + 0xe8));
  local_458 = (wchar_t *)CONCAT44(local_458._4_4_,*(undefined4 *)(param_3 + 0x3090));
  puVar12 = (undefined8 *)FUN_147d8dc86(lVar11,local_3b8,0,*(longlong *)(param_3 + 8) + 0x88);
  *(ulonglong *)((longlong)puVar12 + 0x38) = uVar6;
  *(ulonglong *)((longlong)puVar12 + 0x40) = local_3c0;
  if (*(char *)((longlong)puVar12 + 0xa0) == '\0') {
    fVar33 = *(float *)((longlong)puVar12 + 0xb0);
  }
  else {
    fVar33 = 1.0;
  }
  iVar10 = FUN_140347e80(param_3);
  iVar22 = (int)local_3c8;
  local_3f0 = puVar12;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca27188) && (FUN_144b3d300(&DAT_14ca27188), DAT_14ca27188 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange",
                         1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14ca27180 = 0;
    }
    else {
      DAT_14ca27180 = (**(code **)(*plVar14 + 0x68))(plVar14);
    }
    _Init_thread_footer(&DAT_14ca27188);
    iVar22 = (int)local_3c8;
    puVar12 = local_3f0;
  }
  local_3e0 = CONCAT44(local_3e0._4_4_,*(undefined4 *)(DAT_14ca27180 + 4));
  uVar27 = FUN_140347db3();
  local_3e8 = (longlong *)CONCAT44(local_3e8._4_4_,uVar27);
  local_3a8 = uVar25;
  FUN_140002266(&local_198,L"HDR Histogram (EV100, max of RGB)");
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_1a8 = pwVar18;
  if (bVar26) {
    local_1a8 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_1a0 = 0;
  if (local_1a8 != (wchar_t *)0x0) {
    sVar13 = wcslen(local_1a8);
    local_1a0 = (int)sVar13;
  }
  fVar31 = (float)((int)(uVar6 >> 0x20) + 0x1c) + 14.0;
  dVar3 = (double)(iVar22 + 0x1e);
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,SUB84((double)fVar31,0));
  if (iVar10 == 0) {
    pwVar17 = L"Histogram";
  }
  else if (iVar10 == 2) {
    pwVar17 = L"Manual";
  }
  else if (iVar10 == 1) {
    pwVar17 = L"Basic";
  }
  else {
    pwVar17 = L"Unknown";
  }
  FUN_140002266(&local_198,pwVar17);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  iVar10 = (int)puStack_190;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_1b8 = L"Auto Exposure Method:";
  local_1b0 = 0x15;
  fVar31 = fVar31 + 160.0 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_1c8 = pwVar18;
  if (iVar10 == 0) {
    local_1c8 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_1c0 = 0;
  if (local_1c8 != (wchar_t *)0x0) {
    sVar13 = wcslen(local_1c8);
    local_1c0 = (int)sVar13;
  }
  dVar4 = (double)((float)(iVar22 + 0x1e) + 250.0);
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  FUN_140002266(&local_198,L"%g%% .. %g%%",(double)*(float *)(param_3 + 0x29b0),
                (double)*(float *)(param_3 + 0x29b4));
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_1d8 = L"Percent Low/High:";
  local_1d0 = 0x11;
  fVar31 = fVar31 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_1e0 = 0;
  local_1e8 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_1e0 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  if ((int)local_3e0 == 1) {
    fVar29 = *(float *)(param_3 + 0x29bc);
    fVar34 = *(float *)(param_3 + 0x29b8);
  }
  else {
    fVar34 = local_3e8._0_4_;
    fVar29 = logf(*(float *)(param_3 + 0x29bc) / local_3e8._0_4_);
    fVar29 = fVar29 * 1.442695;
    fVar34 = logf(*(float *)(param_3 + 0x29b8) / fVar34);
    fVar34 = fVar34 * 1.442695;
  }
  FUN_140002266(&local_198,L"%.1f .. %.1f",(double)fVar34,(double)fVar29);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  iVar10 = (int)puStack_190;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_1f8 = L"EV100 Min/Max";
  local_1f0 = 0xd;
  fVar31 = fVar31 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)0x3e99999a3e99999a;
  puStack_190 = &DAT_3f8000003f800000;
  local_208 = pwVar18;
  if (iVar10 == 0) {
    local_208 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_200 = 0;
  if (local_208 != (wchar_t *)0x0) {
    sVar13 = wcslen(local_208);
    local_200 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  FUN_140002266(&local_198,L"%g / %g",(double)*(float *)(param_3 + 0x29c0),
                (double)*(float *)(param_3 + 0x29c4));
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_218 = L"Speed Up/Down:";
  local_210 = 0xe;
  fVar31 = fVar31 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_220 = 0;
  local_228 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_220 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  fVar29 = *(float *)(param_3 + 0x298c);
  if (*(longlong *)(param_3 + 0x30d8) == 0) {
    fVar28 = 0.0;
    fVar34 = 0.0;
  }
  else {
    fVar28 = *(float *)(*(longlong *)(param_3 + 0x30d8) + 0x674);
    fVar34 = 0.0;
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = logf(fVar28 / local_3e8._0_4_);
      fVar28 = fVar28 * 1.442695 + 2.473931;
      if (*(longlong *)(param_3 + 0x29a0) != 0) {
        fVar34 = (float)FUN_1449e6cbc(*(longlong *)(param_3 + 0x29a0),
                                      CONCAT44(extraout_XMM0_Db,fVar28));
      }
    }
  }
  FUN_140002266(&local_198,L"%.3g",(double)fVar28);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_238 = L"Average Scene EV100:";
  local_230 = 0x14;
  fVar31 = fVar31 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_240 = 0;
  local_248 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_240 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  FUN_140002266(&local_198,L"%.3g",(double)fVar29);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_258 = L"Exposure Compensation (Settings):";
  local_250 = 0x21;
  fVar31 = fVar31 + 14.0;
  uVar27 = SUB84((double)fVar31,0);
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(local_3f0,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_260 = 0;
  local_268 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_260 = (int)sVar13;
  }
  uVar6 = local_3c0;
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(local_3f0,dVar4,uVar27);
  FUN_140002266(&local_198,L"%.3g",(double)fVar34);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_278 = L"Exposure Compensation (Curve):";
  local_270 = 0x1e;
  fVar31 = fVar31 + 14.0;
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(local_3f0,dVar3,SUB84((double)fVar31,0));
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_280 = 0;
  local_288 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_280 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(local_3f0,dVar4,SUB84((double)fVar31,0));
  puVar12 = local_3f0;
  iVar10 = (int)local_3c0 - iVar22;
  iVar24 = (int)(uVar6 >> 0x20);
  fVar32 = (float)(iVar24 - (int)local_3a8) * 0.5 + (float)(int)local_3a8;
  fVar28 = ((float)iVar10 * 0.5 + (float)iVar22 + -10.0) / fVar33;
  fVar30 = (fVar32 + -140.0) / fVar33;
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  puVar16 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar16 = DAT_14ca96af8;
  }
  local_3d4 = fVar31;
  local_3b0 = fVar34;
  local_3ac = fVar29;
  local_3a0 = dVar4;
  local_398 = dVar3;
  if (((((uint)puVar16[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
      ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) &&
     ((*(byte *)(*(longlong *)(param_3 + 8) + 0x60) & 2) == 0)) {
    local_198 = (wchar_t *)&DAT_3f8000003f800000;
    puStack_190 = &DAT_3f8000003f800000;
    local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
    local_298 = L"Illuminance meter - over the hemisphere of the surface patch";
    local_290 = 0x3c;
    local_448 = &DAT_149e1e308;
    local_450 = (wchar_t *)&local_198;
    FUN_147d8e230(local_3f0,(double)fVar28,SUB84((double)fVar30,0));
    local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
    local_2a8 = L"                    (Forced to be a perfect white diffuse only surface)";
    local_2a0 = 0x47;
    uVar27 = SUB84((double)(fVar30 + 15.0),0);
  }
  else {
    local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
    local_298 = L"Illuminance meter - not available with Forward Shading";
    local_290 = 0x36;
    uVar27 = SUB84((double)fVar30,0);
  }
  puStack_190 = &DAT_3f8000003f800000;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  local_448 = &DAT_149e1e308;
  dVar3 = (double)fVar28;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_2b8 = L"Luminance meter";
  local_2b0 = 0xf;
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,SUB84((double)((fVar32 + -40.0) / fVar33),0));
  iVar19 = 0;
  do {
    fVar31 = (*(float *)(param_3 + 0x29cc) - *(float *)(param_3 + 0x29c8)) * (float)iVar19 * 0.25 +
             *(float *)(param_3 + 0x29c8);
    if ((int)local_3e0 != 1) {
      fVar29 = logf(local_3e8._0_4_);
      fVar31 = fVar31 + fVar29 * -1.442695;
    }
    FUN_140002266(&local_198,L"%.2g",(double)fVar31);
    if (pwVar18 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar18);
    }
    pwVar18 = local_198;
    bVar26 = (int)puStack_190 == 0;
    local_198 = (wchar_t *)0x3e99999a3f800000;
    puStack_190 = (undefined1 *)0x3f8000003e99999a;
    local_2c8 = pwVar18;
    if (bVar26) {
      local_2c8 = L"";
    }
    uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    uVar27 = 0;
    if (local_2c8 != (wchar_t *)0x0) {
      sVar13 = wcslen(local_2c8);
      uVar27 = (int)sVar13;
    }
    local_448 = &DAT_149e1e308;
    local_458 = (wchar_t *)uVar2;
    local_450 = (wchar_t *)&local_198;
    local_2c0 = uVar27;
    FUN_147d8e230(local_3f0,
                  (double)(((float)(int)((float)iVar19 * (float)(iVar10 + -0x94) * 0.25) +
                            (float)(iVar22 + 0x48) + -5.0) / fVar33),
                  SUB84((double)(((float)(iVar24 + -0x44) + 14.0) / fVar33),0),&local_2c8);
    iVar19 = iVar19 + 1;
  } while (iVar19 != 5);
  FUN_140002266(&local_198,L"%.3g",(double)(local_3ac + local_3b0));
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  dVar3 = local_398;
  puVar12 = local_3f0;
  bVar26 = (int)puStack_190 == 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_2d8 = L"Exposure Compensation (All): ";
  local_2d0 = 0x1d;
  fVar33 = local_3d4 + 14.0;
  uVar27 = SUB84((double)fVar33,0);
  pwVar17 = pwVar18;
  if (bVar26) {
    pwVar17 = L"";
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(local_3f0,local_398,uVar27);
  uVar6 = local_3c8;
  local_198 = (wchar_t *)0x3e99999a3f800000;
  puStack_190 = (undefined1 *)0x3f8000003e99999a;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_2e0 = 0;
  local_2e8 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_2e0 = (int)sVar13;
  }
  dVar4 = local_3a0;
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,local_3a0,uVar27);
  if ((int)local_3e0 == 1) {
    FUN_140002266(&local_198,L"%.1f .. %.1f",(double)*(float *)(param_3 + 0x29c8),
                  (double)*(float *)(param_3 + 0x29cc));
    if (pwVar18 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar18);
    }
    pwVar18 = local_198;
    iVar22 = (int)puStack_190;
  }
  else {
    fVar31 = *(float *)(param_3 + 0x29cc);
    fVar34 = local_3e8._0_4_;
    fVar28 = logf(local_3e8._0_4_);
    fVar29 = *(float *)(param_3 + 0x29c8);
    fVar34 = logf(fVar34);
    FUN_140002266(&local_198,L"%.1f .. %.1f",(double)(fVar29 - fVar34 * 1.442695),
                  (double)(fVar31 - fVar28 * 1.442695));
    if (pwVar18 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar18);
    }
    pwVar18 = local_198;
    iVar22 = (int)puStack_190;
  }
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_2f8 = L"Histogram EV100 Min/Max:";
  local_2f0 = 0x18;
  fVar33 = fVar33 + 14.0;
  uVar27 = SUB84((double)fVar33,0);
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  local_198 = (wchar_t *)0x3e99999a3e99999a;
  puStack_190 = &DAT_3f8000003f800000;
  local_308 = pwVar18;
  if (iVar22 == 0) {
    local_308 = L"";
  }
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_300 = 0;
  if (local_308 != (wchar_t *)0x0) {
    sVar13 = wcslen(local_308);
    local_300 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  FUN_140002266(&local_198,L"%.5g",(double)*(float *)(param_3 + 0x13694));
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  pwVar18 = local_198;
  bVar26 = (int)puStack_190 != 0;
  local_198 = (wchar_t *)&DAT_3f8000003f800000;
  puStack_190 = &DAT_3f8000003f800000;
  local_458 = *(wchar_t **)(DAT_14cb0d2b0 + 0x58);
  local_318 = L"PreExposure Value:";
  local_310 = 0x12;
  uVar27 = SUB84((double)(fVar33 + 14.0),0);
  pwVar17 = L"";
  if (bVar26) {
    pwVar17 = pwVar18;
  }
  local_448 = &DAT_149e1e308;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar3,uVar27);
  lVar11 = local_3d0;
  local_198 = (wchar_t *)0x3e99999a3e99999a;
  puStack_190 = &DAT_3f8000003f800000;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_320 = 0;
  local_328 = pwVar17;
  if (pwVar17 != (wchar_t *)0x0) {
    sVar13 = wcslen(pwVar17);
    local_320 = (int)sVar13;
  }
  local_448 = &DAT_149e1e308;
  local_458 = (wchar_t *)uVar2;
  local_450 = (wchar_t *)&local_198;
  FUN_147d8e230(puVar12,dVar4,uVar27);
  if (pwVar18 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar18);
  }
  FUN_14376dc88(puVar12,lVar11,0);
  *local_390 = local_3b8;
  local_390[1] = uVar6;
  local_390[2] = local_3c0;
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f2bc1f FUN_142f2bc1f body=69 status=ok
// SIG undefined FUN_142f2bc1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2bc1f(void)

{
  _DAT_14ca357d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2bc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca357e0,1);
  return;
}



// FUNCTION 142f2bc70 FUN_142f2bc70 body=1987 status=ok
// SIG undefined FUN_142f2bc70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2bc70(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  char cVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  wchar_t *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined1 local_191;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  undefined1 local_151;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined2 local_63;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar16 = *param_4;
  local_160 = param_1;
  if (lVar16 != 0) {
    local_170 = param_4[1];
    local_178 = param_4[2];
    if (local_178 != local_170) {
      uVar20 = (undefined1)param_4[3];
      goto LAB_142f2bd21;
    }
  }
  local_120 = param_4[4];
  local_118 = param_4[5];
  local_110 = param_4[6];
  local_1f8 = L"VisualizeLocalExposure";
  FUN_143017cc0(&local_108,param_2,&local_120,(&DAT_00001de6)[param_3] * '\x02');
  local_170 = uStack_100;
  local_178 = local_f8;
  lVar16 = local_108;
  uVar20 = (undefined1)local_f0;
LAB_142f2bd21:
  local_130 = (undefined4)param_4[5];
  uStack_12c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_128 = (undefined4)param_4[6];
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0x34);
  local_138 = *(undefined8 *)(param_4[4] + 0x84);
  local_150 = *(undefined8 *)(lVar16 + 0x84);
  local_190 = DAT_14c9c0de0;
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar19 + 0x5e;
  local_148 = local_170;
  local_140 = local_178;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(plVar1,0x300);
    puVar19 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar19 + 0x5e;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  *puVar19 = &PTR_FUN_14a2d2bc0;
  local_180 = puVar19 + 2;
  FUN_1472ae0f6();
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar19;
  puVar19[0x3e] = lVar16;
  puVar19[0x3f] = 0;
  *(undefined1 *)(puVar19 + 0x40) = uVar20;
  *(undefined1 *)((longlong)puVar19 + 0x201) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x202) = 0xffff;
  local_168 = lVar16;
  lVar16 = FUN_1447e4f80();
  cVar18 = '\x02';
  if (*(char *)(lVar16 + 0x41) != '\x03') {
    cVar18 = *(char *)(lVar16 + 0x41);
  }
  puVar19[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar19 + 3) = cVar18;
  memcpy(puVar19 + 4,(void *)param_4[0xe],0x88);
  puVar3 = (undefined4 *)param_4[0xd];
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  uVar8 = puVar3[4];
  uVar9 = puVar3[5];
  uVar10 = puVar3[6];
  uVar11 = puVar3[7];
  *(undefined4 *)(puVar19 + 0x16) = *puVar3;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar5;
  *(undefined4 *)(puVar19 + 0x17) = uVar6;
  *(undefined4 *)((longlong)puVar19 + 0xbc) = uVar7;
  *(undefined4 *)(puVar19 + 0x18) = uVar8;
  *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar9;
  *(undefined4 *)(puVar19 + 0x19) = uVar10;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar11;
  puVar19[0x1a] = *(undefined8 *)(puVar3 + 8);
  FUN_144a2c7c2(&local_108,&local_138);
  puVar17 = &local_108;
  puVar21 = puVar19 + 0x1c;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar21 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar21 = puVar21 + 1;
  }
  FUN_144a2c7c2(&local_108,&local_150);
  puVar17 = &local_108;
  puVar21 = puVar19 + 0x2a;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar21 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar21 = puVar21 + 1;
  }
  puVar19[0x38] = param_4[7];
  lVar16 = param_4[10];
  cVar18 = *(char *)(lVar16 + 0x68);
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar21 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(plVar1,0x50);
    puVar21 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar17 = puVar21 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar21[1] = *(undefined8 *)(lVar16 + 8);
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 3;
  *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
  *puVar21 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar21 + 5) = cVar18 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
  puVar21[7] = 0;
  puVar21[8] = lVar16;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar19[0x39] = puVar21;
  puVar19[0x3a] = param_4[0xb];
  puVar19[0x3b] = param_4[0xc];
  puVar19[0x3c] = local_190;
  *(undefined4 *)(puVar19 + 0x3d) = *(undefined4 *)(DAT_14ca357e8 + 4);
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145f58cec();
  FUN_1448e935e(uVar4,&local_108,&DAT_14ca35858,0);
  FUN_145f58cec();
  lVar14 = uStack_100;
  lVar16 = local_108;
  iVar2 = *(int *)(param_3 + 0x3090);
  local_190 = CONCAT44(local_190._4_4_,*(undefined4 *)(param_3 + 0x1dd4));
  local_184 = *(undefined4 *)(param_3 + 0x3094);
  local_191 = (&DAT_00001de6)[param_3];
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar2 * 2) * 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1b0 = &LAB_14712ac08;
      local_1b8 = &LAB_14712ac0c;
      local_1c0 = &LAB_1472e3912;
      local_1c8 = &LAB_1472e3916;
      local_1d0 = FUN_1472e391a;
      local_1d8 = FUN_1472e3942;
      local_1f0 = L"ScreenPassVS";
      local_1f8 = L"/Engine/Private/ScreenPass.usf";
      local_1a0 = 0;
      local_1a8 = 0xe0;
      local_1e0 = 1;
      local_1e8 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  FUN_1448e935e(uVar4,&local_108,&DAT_14ca4b6d8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1b0 = &LAB_14712ac08;
      local_1b8 = &LAB_14712ac0c;
      local_1c0 = &LAB_1472e3912;
      local_1c8 = &LAB_1472e3916;
      local_1d0 = FUN_1472e391a;
      local_1d8 = FUN_1472e3942;
      local_1f0 = L"ScreenPassVS";
      local_1f8 = L"/Engine/Private/ScreenPass.usf";
      local_1a0 = 0;
      local_1a8 = 0xe0;
      local_1e0 = 1;
      local_1e8 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  lVar15 = uStack_100;
  lVar13 = local_108;
  uVar12 = DAT_14c9c0d98;
  uVar4 = DAT_14c9c0d50;
  FUN_145f58f5a();
  puVar17 = local_180;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1448f70da(lVar16,&DAT_14ca364d0,local_180,&local_108);
  local_108 = CONCAT44((undefined4)local_190,iVar2);
  uStack_100 = CONCAT17(local_61,CONCAT25(local_63,CONCAT14(local_191,local_184)));
  local_f8 = local_150;
  local_f0 = local_148;
  local_e8 = local_140;
  local_e0 = local_138;
  local_d8 = CONCAT44(uStack_12c,local_130);
  local_d0 = CONCAT44(uStack_124,uStack_128);
  local_c8 = lVar13;
  lStack_c0 = lVar15;
  local_b8 = lVar16;
  local_b0 = lVar14;
  local_a8 = uVar4;
  local_a0 = uVar12;
  local_98 = DAT_14ca94df8;
  local_90 = 0;
  local_88 = lVar16;
  local_80 = lVar14;
  local_78 = puVar17;
  local_70 = 0;
  FUN_145f58f5a();
  FUN_1472ae1a2(param_2,&local_151,puVar17,&local_108);
  *local_160 = local_168;
  local_160[1] = local_170;
  local_160[2] = local_178;
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2c440 FUN_142f2c440 body=69 status=ok
// SIG undefined FUN_142f2c440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2c440(void)

{
  _DAT_14ca35a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2c482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35a48,1);
  return;
}



// FUNCTION 142f2c485 FUN_142f2c485 body=69 status=ok
// SIG undefined FUN_142f2c485(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2c485(void)

{
  _DAT_14ca35a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2c4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35a60,1);
  return;
}



// FUNCTION 142f2c4ca FUN_142f2c4ca body=69 status=ok
// SIG undefined FUN_142f2c4ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2c4ca(void)

{
  _DAT_14ca35a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35a78,1);
  return;
}



// FUNCTION 142f2c510 FUN_142f2c510 body=576 status=ok
// SIG undefined FUN_142f2c510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142f2c510(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36688) {
    FUN_144b3d300(&DAT_14ca36688);
    if (DAT_14ca36688 == -1) {
      FUN_142f47ec2();
      if ((DAT_14ca36807 & 2) == 0) {
        DAT_14ca36807 = DAT_14ca36807 | 2;
        _DAT_14ca367a8 = L"FFilterVS";
        _DAT_14ca367c0 = FUN_146826540;
        _DAT_14ca367c8 = FUN_146825d77;
        _DAT_14ca367d0 = FUN_146825fd6;
        _DAT_14ca367d8 = FUN_1407e02ea;
        _DAT_14ca367e0 = FUN_146826273;
        _DAT_14ca367b8 = FUN_142f4872e;
        _DAT_14ca367f8 = 0xffffffff000000e0;
        _DAT_14ca36800 = 8;
        DAT_14ca36804 = 0;
        _DAT_14ca367e8 = &LAB_142f4875a;
        _DAT_14ca36808 = L"BASE";
        DAT_14ca36832 = 4;
        _DAT_14ca36810 = FUN_140b35ae4();
        _DAT_14ca36818 = DAT_14ca367b0;
        _DAT_14ca36820 = &LAB_14682652b;
        DAT_14ca367b0 = &DAT_14ca36808;
        DAT_14ca36805 = DAT_14ca36805 + '\x01';
        _DAT_14ca36828 = 0x100000000;
        if (*(char *)(_DAT_14ca36810 + 100) != '\0') {
          DAT_14ca36806 = DAT_14ca36806 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca367a0);
      }
      FUN_140db5666(&DAT_14ca365e0,0,&DAT_14ca367a0,L"FFilterVS",
                    L"/Engine/Private/FilterVertexShader.usf",L"MainVS",0,0x21,FUN_142f47e2c,
                    FUN_142f47dcc,&LAB_142f47d74,&LAB_142f47d70,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36690);
      _DAT_14ca365e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f47eb6);
      _Init_thread_footer(&DAT_14ca36688);
    }
  }
  return &DAT_14ca365e0;
}



// FUNCTION 142f2c750 FUN_142f2c750 body=576 status=ok
// SIG undefined FUN_142f2c750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142f2c750(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca368e0) {
    FUN_144b3d300(&DAT_14ca368e0);
    if (DAT_14ca368e0 == -1) {
      FUN_142f47ec2();
      if ((DAT_14ca3694f & 2) == 0) {
        DAT_14ca3694f = DAT_14ca3694f | 2;
        _DAT_14ca368f0 = L"FFilterPS";
        _DAT_14ca36908 = FUN_146826540;
        _DAT_14ca36910 = FUN_146825d77;
        _DAT_14ca36918 = FUN_146825fd6;
        _DAT_14ca36920 = FUN_1407e02ea;
        _DAT_14ca36928 = FUN_146826273;
        _DAT_14ca36900 = FUN_142f488ac;
        _DAT_14ca36940 = 0xffffffff000000e0;
        _DAT_14ca36948 = 8;
        DAT_14ca3694c = 0;
        _DAT_14ca36930 = &LAB_142f488d8;
        _DAT_14ca36950 = L"BASE";
        DAT_14ca3697a = 4;
        _DAT_14ca36958 = FUN_140b35ae4();
        _DAT_14ca36960 = DAT_14ca368f8;
        _DAT_14ca36968 = &LAB_14682652b;
        DAT_14ca368f8 = &DAT_14ca36950;
        DAT_14ca3694d = DAT_14ca3694d + '\x01';
        _DAT_14ca36970 = 0x100000000;
        if (*(char *)(_DAT_14ca36958 + 100) != '\0') {
          DAT_14ca3694e = DAT_14ca3694e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca368e8);
      }
      FUN_140db5666(&DAT_14ca36838,0,&DAT_14ca368e8,L"FFilterPS",
                    L"/Engine/Private/FilterPixelShader.usf",L"MainPS",3,0x84,FUN_142f48816,
                    FUN_142f487b6,&LAB_142f48762,&LAB_142f4875e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36690);
      _DAT_14ca36838 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f488a0);
      _Init_thread_footer(&DAT_14ca368e0);
    }
  }
  return &DAT_14ca36838;
}



// FUNCTION 142f2c990 FUN_142f2c990 body=576 status=ok
// SIG undefined FUN_142f2c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142f2c990(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36a28) {
    FUN_144b3d300(&DAT_14ca36a28);
    if (DAT_14ca36a28 == -1) {
      FUN_142f489ee();
      if ((DAT_14ca36b1f & 2) == 0) {
        DAT_14ca36b1f = DAT_14ca36b1f | 2;
        _DAT_14ca36ac0 = L"FFilterCS";
        _DAT_14ca36ad8 = FUN_146826540;
        _DAT_14ca36ae0 = FUN_146825d77;
        _DAT_14ca36ae8 = FUN_146825fd6;
        _DAT_14ca36af0 = FUN_1407e02ea;
        _DAT_14ca36af8 = FUN_146826273;
        _DAT_14ca36ad0 = FUN_142f48d5c;
        _DAT_14ca36b10 = 0xffffffff000000e0;
        _DAT_14ca36b18 = 8;
        DAT_14ca36b1c = 0;
        _DAT_14ca36b00 = &LAB_142f48d88;
        _DAT_14ca36b20 = L"BASE";
        DAT_14ca36b4a = 4;
        _DAT_14ca36b28 = FUN_140b35ae4();
        _DAT_14ca36b30 = DAT_14ca36ac8;
        _DAT_14ca36b38 = &LAB_14682652b;
        DAT_14ca36ac8 = &DAT_14ca36b20;
        DAT_14ca36b1d = DAT_14ca36b1d + '\x01';
        _DAT_14ca36b40 = 0x100000000;
        if (*(char *)(_DAT_14ca36b28 + 100) != '\0') {
          DAT_14ca36b1e = DAT_14ca36b1e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca36ab8);
      }
      FUN_140db5666(&DAT_14ca36980,0,&DAT_14ca36ab8,L"FFilterCS",
                    L"/Engine/Private/FilterPixelShader.usf",L"MainCS",5,0x84,FUN_142f48958,
                    FUN_142f488f8,&LAB_142f488e0,&LAB_142f488dc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36a30);
      _DAT_14ca36980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f489e2);
      _Init_thread_footer(&DAT_14ca36a28);
    }
  }
  return &DAT_14ca36980;
}



// FUNCTION 142f2cbd0 FUN_142f2cbd0 body=47 status=ok
// SIG undefined FUN_142f2cbd0(void)

void FUN_142f2cbd0(void)

{
  DAT_14ca35ab8 = &PTR_FUN_14a2d2c90;
  FUN_144725486(&DAT_14ca35ab8);
  FUN_14003f39a(&DAT_14ca35ab8);
  return;
}



// FUNCTION 142f2cc0b FUN_142f2cc0b body=69 status=ok
// SIG undefined FUN_142f2cc0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2cc0b(void)

{
  _DAT_14ca35b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2cc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35b70,1);
  return;
}



// FUNCTION 142f2cc50 FUN_142f2cc50 body=800 status=ok
// SIG undefined FUN_142f2cc50(void)

void FUN_142f2cc50(ulonglong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  longlong *param_13,undefined4 param_14)

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
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  lVar11 = FUN_144821ef4();
  FUN_144a98398(lVar11,*param_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11);
  if (*param_13 == 0) {
    lVar12 = 0;
  }
  else {
    lVar16 = (longlong)*(int *)(*param_13 + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_13[1] + 8) + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(*(longlong *)(param_13[1] + 8),lVar16,1);
    }
  }
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar15) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar15;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = lVar12;
    puVar13[3] = uVar8;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar7;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar6;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar5;
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
  lVar11 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x120))();
  if (lVar11 != 0) {
    plVar14 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x120))();
                    /* WARNING: Could not recover jumptable at 0x000142f2cf0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x128))(plVar14,param_1,param_12,param_14);
    return;
  }
  return;
}



// FUNCTION 142f2cf70 FUN_142f2cf70 body=69 status=ok
// SIG undefined FUN_142f2cf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2cf70(void)

{
  _DAT_14ca35b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2cfb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35b88,1);
  return;
}



// FUNCTION 142f2cfb5 FUN_142f2cfb5 body=69 status=ok
// SIG undefined FUN_142f2cfb5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2cfb5(void)

{
  _DAT_14ca35b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2cff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35ba0,1);
  return;
}



// FUNCTION 142f2cffa FUN_142f2cffa body=69 status=ok
// SIG undefined FUN_142f2cffa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2cffa(void)

{
  _DAT_14ca35bb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35bb8,1);
  return;
}



// FUNCTION 142f2d03f FUN_142f2d03f body=69 status=ok
// SIG undefined FUN_142f2d03f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d03f(void)

{
  _DAT_14ca35bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35bd0,1);
  return;
}



// FUNCTION 142f2d084 FUN_142f2d084 body=69 status=ok
// SIG undefined FUN_142f2d084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d084(void)

{
  _DAT_14ca35be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35be8,1);
  return;
}



// FUNCTION 142f2d0c9 FUN_142f2d0c9 body=69 status=ok
// SIG undefined FUN_142f2d0c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d0c9(void)

{
  _DAT_14ca35bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35c00,1);
  return;
}



// FUNCTION 142f2d10e FUN_142f2d10e body=69 status=ok
// SIG undefined FUN_142f2d10e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d10e(void)

{
  _DAT_14ca35c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35c18,1);
  return;
}



// FUNCTION 142f2d153 FUN_142f2d153 body=69 status=ok
// SIG undefined FUN_142f2d153(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d153(void)

{
  _DAT_14ca35c28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35c30,1);
  return;
}



// FUNCTION 142f2d198 FUN_142f2d198 body=69 status=ok
// SIG undefined FUN_142f2d198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d198(void)

{
  _DAT_14ca35c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35c48,1);
  return;
}



// FUNCTION 142f2d1dd FUN_142f2d1dd body=69 status=ok
// SIG undefined FUN_142f2d1dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2d1dd(void)

{
  _DAT_14ca35c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2d21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35c60,1);
  return;
}



// FUNCTION 142f2d222 FUN_142f2d222 body=576 status=ok
// SIG undefined FUN_142f2d222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142f2d222(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36bf8) {
    FUN_144b3d300(&DAT_14ca36bf8);
    if (DAT_14ca36bf8 == -1) {
      FUN_142f48f2e();
      if ((DAT_14ca36d77 & 2) == 0) {
        DAT_14ca36d77 = DAT_14ca36d77 | 2;
        _DAT_14ca36d18 = L"FTemporalAAPS";
        _DAT_14ca36d30 = FUN_146826540;
        _DAT_14ca36d38 = FUN_146825d77;
        _DAT_14ca36d40 = FUN_146825fd6;
        _DAT_14ca36d48 = FUN_1407e02ea;
        _DAT_14ca36d50 = FUN_146826273;
        _DAT_14ca36d28 = FUN_142f4a6fc;
        _DAT_14ca36d68 = 0xffffffff000000e0;
        _DAT_14ca36d70 = 8;
        DAT_14ca36d74 = 0;
        _DAT_14ca36d58 = &LAB_142f4a728;
        _DAT_14ca36d78 = L"BASE";
        DAT_14ca36da2 = 4;
        _DAT_14ca36d80 = FUN_140b35ae4();
        _DAT_14ca36d88 = DAT_14ca36d20;
        _DAT_14ca36d90 = &LAB_14682652b;
        DAT_14ca36d20 = &DAT_14ca36d78;
        DAT_14ca36d75 = DAT_14ca36d75 + '\x01';
        _DAT_14ca36d98 = 0x100000000;
        if (*(char *)(_DAT_14ca36d80 + 100) != '\0') {
          DAT_14ca36d76 = DAT_14ca36d76 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca36d10);
      }
      FUN_140db5666(&DAT_14ca36b50,0,&DAT_14ca36d10,L"FTemporalAAPS",
                    L"/Engine/Private/TemporalAA.usf",L"MainPS",3,0x100,FUN_142f48e98,FUN_142f48e38,
                    &LAB_142f48d90,&LAB_142f48d8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca36c00)
      ;
      _DAT_14ca36b50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f48f22);
      _Init_thread_footer(&DAT_14ca36bf8);
    }
  }
  return &DAT_14ca36b50;
}



// FUNCTION 142f2d462 FUN_142f2d462 body=576 status=ok
// SIG undefined FUN_142f2d462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142f2d462(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36e50) {
    FUN_144b3d300(&DAT_14ca36e50);
    if (DAT_14ca36e50 == -1) {
      FUN_142f4a996();
      if ((DAT_14ca36f47 & 2) == 0) {
        DAT_14ca36f47 = DAT_14ca36f47 | 2;
        _DAT_14ca36ee8 = L"FTemporalAACS";
        _DAT_14ca36f00 = FUN_146826540;
        _DAT_14ca36f08 = FUN_146825d77;
        _DAT_14ca36f10 = FUN_146825fd6;
        _DAT_14ca36f18 = FUN_1407e02ea;
        _DAT_14ca36f20 = FUN_146826273;
        _DAT_14ca36ef8 = FUN_142f4ad86;
        _DAT_14ca36f38 = 0xffffffff000000e0;
        _DAT_14ca36f40 = 8;
        DAT_14ca36f44 = 0;
        _DAT_14ca36f28 = &LAB_142f4adb2;
        _DAT_14ca36f48 = L"BASE";
        DAT_14ca36f72 = 4;
        _DAT_14ca36f50 = FUN_140b35ae4();
        _DAT_14ca36f58 = DAT_14ca36ef0;
        _DAT_14ca36f60 = &LAB_14682652b;
        DAT_14ca36ef0 = &DAT_14ca36f48;
        DAT_14ca36f45 = DAT_14ca36f45 + '\x01';
        _DAT_14ca36f68 = 0x100000000;
        if (*(char *)(_DAT_14ca36f50 + 100) != '\0') {
          DAT_14ca36f46 = DAT_14ca36f46 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca36ee0);
      }
      FUN_140db5666(&DAT_14ca36da8,0,&DAT_14ca36ee0,L"FTemporalAACS",
                    L"/Engine/Private/TemporalAA.usf",L"MainCS",5,0x200,FUN_142f4a900,FUN_142f4a8a0,
                    FUN_142f4a730,&LAB_142f4a72c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca36e58);
      _DAT_14ca36da8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f4a98a);
      _Init_thread_footer(&DAT_14ca36e50);
    }
  }
  return &DAT_14ca36da8;
}



// FUNCTION 142f2d6a2 FUN_142f2d6a2 body=263 status=ok
// SIG undefined FUN_142f2d6a2(void)

uint * FUN_142f2d6a2(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  lVar5 = DAT_14ca97170;
  uVar12 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x84);
  uVar13 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x88);
  if ((*param_1 == 6) || (*param_1 - 1U < 2)) {
    iVar1 = param_1[10];
    iVar2 = param_1[9];
    iVar3 = param_1[7];
    iVar11 = (iVar1 + -1 + param_1[8]) - param_1[6];
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
      uVar9 = 0;
    }
    else if (iVar4 == 1) {
      DVar6 = FUN_140ad26c0(ThreadLocalStoragePointer,
                            (longlong)iVar11 % (longlong)iVar1 & 0xffffffff);
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    iVar4 = *(int *)(lVar5 + uVar9 * 4);
    uVar10 = (uint)(iVar4 < 1) << 2 | 0xfffffff8;
    uVar8 = iVar11 / iVar1 + (uint)(0 < iVar4) * 4 + 3 & uVar10;
    uVar10 = ((iVar2 + iVar1 + -1) - iVar3) / iVar1 + (uint)(0 < iVar4) * 4 + 3 & uVar10;
    if ((int)uVar13 < (int)uVar10) {
      uVar13 = uVar10;
    }
    if ((int)uVar12 < (int)uVar8) {
      uVar12 = uVar8;
    }
  }
  *param_2 = uVar12;
  param_2[1] = uVar13;
  return param_2;
}



// FUNCTION 142f2d7aa FUN_142f2d7aa body=3551 status=ok
// SIG undefined FUN_142f2d7aa(void)

void FUN_142f2d7aa(longlong *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  int *piVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined2 uVar17;
  bool bVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 **local_110;
  undefined8 *local_108;
  float fStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar10 = (uint *)*param_1;
  if ((6 < *puVar10) || ((0x46U >> (*puVar10 & 0x1f) & 1) == 0)) {
    dVar2 = *(double *)(param_1[1] + 0x125a8);
    dVar3 = *(double *)(param_1[1] + 0x125a0);
    uVar8 = puVar10[10];
    fVar27 = *(float *)(DAT_14ca35b90 + 4);
    iVar21 = *(int *)(DAT_14ca35ba8 + 4);
    fVar30 = 0.0;
    uVar26 = 0;
    do {
      fVar28 = ((float)(&DAT_14a2d05f0)[uVar26 * 2] + -(float)dVar3 * (1.0 / (float)(int)uVar8)) /
               fVar27;
      fVar29 = ((float)(&DAT_14a2d05f4)[uVar26 * 2] + -(float)dVar2 * (1.0 / (float)(int)uVar8)) /
               fVar27;
      if (iVar21 == 0) {
        fVar28 = expf((fVar28 * fVar28 + fVar29 * fVar29) * -2.29);
      }
      else {
        fVar28 = ABS(fVar28);
        if (fVar28 <= 1.0) {
          fVar28 = (fVar28 * 1.5 + -2.5) * fVar28 * fVar28 + 1.0;
        }
        else {
          fVar28 = ((fVar28 * -0.5 + 2.5) * fVar28 + -4.0) * fVar28 + 2.0;
        }
        fVar29 = ABS(fVar29);
        if (fVar29 <= 1.0) {
          fVar29 = (fVar29 * 1.5 + -2.5) * fVar29 * fVar29 + 1.0;
        }
        else {
          fVar29 = ((fVar29 * -0.5 + 2.5) * fVar29 + -4.0) * fVar29 + 2.0;
        }
        fVar28 = fVar28 * fVar29;
      }
      param_2[(uVar26 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar26 & 3) + 0x10] = fVar28;
      fVar30 = fVar30 + fVar28;
      uVar26 = uVar26 + 1;
    } while (uVar26 != 9);
    uVar8 = 0;
    do {
      param_2[(ulonglong)(uVar8 >> 2) * 4 + (ulonglong)(uVar8 & 3) + 0x10] =
           param_2[(ulonglong)(uVar8 >> 2) * 4 + (ulonglong)(uVar8 & 3) + 0x10] / fVar30;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 9);
    fVar27 = param_2[0x11];
    fVar30 = param_2[0x13];
    param_2[0x1c] = fVar27;
    param_2[0x1d] = fVar30;
    fVar28 = param_2[0x14];
    param_2[0x1e] = fVar28;
    fVar29 = param_2[0x15];
    param_2[0x1f] = fVar29;
    fVar1 = param_2[0x17];
    param_2[0x20] = fVar1;
    uVar26 = 0;
    do {
      uVar22 = (ulonglong)((uint)uVar26 & 3);
      param_2[(uVar26 >> 2) * 4 + uVar22 + 0x1c] =
           param_2[(uVar26 >> 2) * 4 + uVar22 + 0x1c] / (fVar27 + fVar30 + fVar28 + fVar29 + fVar1);
      uVar8 = (uint)uVar26 + 1;
      uVar26 = (ulonglong)uVar8;
    } while (uVar8 != 5);
    puVar10 = (uint *)*param_1;
  }
  uVar8 = puVar10[10];
  lVar13 = param_1[1];
  lVar11 = FUN_1447e4f80();
  cVar16 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar16 = *(char *)(lVar11 + 0x41);
  }
  *(undefined8 *)(param_2 + 0x6c) = *(undefined8 *)(lVar13 + 0x18);
  *(char *)(param_2 + 0x6e) = cVar16;
  param_2[0xb] = *(float *)(DAT_14ca35bd8 + 4);
  param_2[0xc] = (float)(uint)*(byte *)param_1[2];
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(*param_1 + 0x30);
  *(undefined8 *)(param_2 + 100) = *(undefined8 *)(*param_1 + 0x38);
  uVar12 = DAT_14c9c0d80;
  *(undefined8 *)(param_2 + 0x62) = DAT_14c9c0d80;
  *(undefined8 *)(param_2 + 0x66) = uVar12;
  lVar13 = param_1[3];
  lVar11 = *(longlong *)(*param_1 + 0x30);
  if ((*(char *)(lVar11 + 0x92) == '\x04') || (*(char *)(lVar11 + 0x92) == '\x01')) {
    uVar17 = *(undefined2 *)(lVar11 + 0x8e);
  }
  else {
    uVar17 = 0;
  }
  uVar4 = *(undefined1 *)(lVar11 + 0x90);
  puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 8;
  if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
    FUN_140023dd8((longlong *)(lVar13 + 0x70),0x48);
    puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 8;
  }
  *(undefined8 **)(lVar13 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(lVar11 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 1;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar20 + 5) = 0x2c;
  *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar4;
  *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar17;
  *(undefined1 *)(puVar20 + 6) = 0;
  *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
  puVar20[7] = lVar11;
  iVar21 = *(int *)(lVar13 + 0x1a0);
  *(uint *)(lVar13 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(lVar13 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(lVar13 + 0x198,iVar21);
  }
  *(undefined8 **)(*(longlong *)(lVar13 + 0x198) + (longlong)iVar21 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar13 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x6a) = puVar20;
  if (*(longlong *)(param_2 + 100) == 0) {
    uVar12 = FUN_14473c272(param_1[3],&DAT_14ca63b28,0);
    *(undefined8 *)(param_2 + 100) = uVar12;
  }
  fVar27 = (float)((int *)param_1[4])[1];
  fVar30 = (float)*(int *)param_1[4];
  param_2[0x24] = fVar30;
  param_2[0x25] = fVar27;
  param_2[0x26] = 1.0 / fVar30;
  param_2[0x27] = 1.0 / fVar27;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)param_1[5];
  *(ulonglong *)(param_2 + 0x2a) =
       ((ulonglong)((int)*(ulonglong *)(param_1[5] + 8) - 1) |
       *(ulonglong *)(param_1[5] + 8) & 0xffffffff00000000) - 0x100000000;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*param_1 + 0x40);
  uVar12 = DAT_14c9c0d80;
  *(undefined8 *)(param_2 + 0x52) = DAT_14c9c0d80;
  *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(*param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x56) = uVar12;
  fVar27 = (float)*(int *)(*param_1 + 0x28);
  dVar2 = *(double *)(param_1[1] + 0x125a8);
  fVar30 = 1.0 / fVar27;
  param_2[0x4a] = (float)*(double *)(param_1[1] + 0x125a0) * fVar30;
  param_2[0x4b] = (float)dVar2 * fVar30;
  param_2[0x4c] =
       (float)(((int *)param_1[6])[2] - *(int *)param_1[6]) /
       (float)(((int *)param_1[7])[2] - *(int *)param_1[7]);
  param_2[0x4d] =
       (float)(((int *)param_1[7])[2] - *(int *)param_1[7]) /
       (float)(((int *)param_1[6])[2] - *(int *)param_1[6]);
  iVar21 = ((int *)param_1[6])[1];
  param_2[0x48] = (float)*(int *)param_1[6] * fVar30;
  param_2[0x49] = (float)iVar21 * fVar30;
  piVar5 = (int *)param_1[6];
  iVar21 = piVar5[3];
  iVar9 = piVar5[1];
  iVar19 = piVar5[2];
  iVar23 = *piVar5;
  param_2[0x44] = fVar30 * (float)(iVar19 - iVar23);
  param_2[0x45] = (float)(iVar21 - iVar9) * fVar30;
  param_2[0x46] = fVar27 / (float)(iVar19 - iVar23);
  param_2[0x47] = fVar27 / (float)(iVar21 - iVar9);
  piVar5 = (int *)param_1[8];
  iVar21 = piVar5[3];
  iVar9 = piVar5[1];
  iVar19 = piVar5[2];
  iVar23 = *piVar5;
  param_2[0x2c] = (float)(iVar19 - iVar23);
  param_2[0x2d] = (float)(iVar21 - iVar9);
  param_2[0x2e] = 1.0 / (float)(iVar19 - iVar23);
  param_2[0x2f] = 1.0 / (float)(iVar21 - iVar9);
  piVar5 = (int *)param_1[8];
  iVar21 = piVar5[3];
  iVar9 = piVar5[2];
  iVar19 = piVar5[1];
  param_2[0x30] = (float)*piVar5;
  param_2[0x31] = (float)iVar19;
  param_2[0x32] = (float)iVar9;
  param_2[0x33] = (float)iVar21;
  FUN_1400d0708(&local_108,
                CONCAT71(0xffffffff000000,*(undefined1 *)(*(longlong *)param_1[9] + 0x93)));
  param_2[0x36] = fStack_100;
  *(undefined8 **)(param_2 + 0x34) = local_108;
  lVar13 = FUN_14473c272(param_1[3],&DAT_14ca63b28,0);
  if (*(char *)param_1[2] == '\x01') {
    *(undefined1 **)(param_2 + 0x40) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_2 + 0x42) = &DAT_3f8000003f800000;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[0x3c] = 0.0;
    param_2[0x3d] = 0.0;
    param_2[0x3e] = 0.0;
    param_2[0x3f] = 0.0;
    *(undefined1 **)(param_2 + 0x38) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_2 + 0x3a) = &DAT_3f8000003f800000;
    *(longlong *)(param_2 + 0x58) = lVar13;
    *(longlong *)(param_2 + 0x5a) = lVar13;
    *(longlong *)(param_2 + 100) = lVar13;
  }
  else {
    lVar11 = param_1[10];
    uVar26 = *(ulonglong *)(lVar11 + 0x10);
    uVar22 = *(ulonglong *)(lVar11 + 0x18);
    iVar9 = (int)uVar22;
    iVar19 = *(int *)(lVar11 + 0x20) - iVar9;
    iVar23 = (int)(uVar22 >> 0x20);
    iVar25 = *(int *)(lVar11 + 0x24) - iVar23;
    fVar27 = 1.0 / (float)(int)uVar26;
    iVar24 = (int)(uVar26 >> 0x20);
    fVar30 = 1.0 / (float)iVar24;
    fVar28 = (float)iVar19 * 0.5;
    param_2[0x40] = fVar28 * fVar27;
    param_2[0x41] = (float)-iVar25 * 0.5 * fVar30;
    param_2[0x42] = ((float)iVar9 + fVar28) * fVar27;
    param_2[0x43] = ((float)iVar25 * 0.5 + (float)iVar23) * fVar30;
    iVar21 = *(int *)(*param_1 + 0x28);
    iVar25 = (iVar21 + iVar25 + -1) / iVar21;
    iVar19 = (iVar21 + iVar19 + -1) / iVar21;
    param_2[8] = 1.0 - 1.0 / (float)iVar19;
    param_2[9] = 1.0 - 1.0 / (float)iVar25;
    fVar30 = (float)(int)((longlong)
                          ((ulonglong)(uint)((int)uVar26 >> 0x1f) << 0x20 | uVar26 & 0xffffffff) /
                         (longlong)iVar21);
    fVar28 = (float)(int)((longlong)((ulonglong)(uint)(iVar24 >> 0x1f) << 0x20 | uVar26 >> 0x20) /
                         (longlong)iVar21);
    fVar27 = 1.0 / fVar30;
    fVar29 = 1.0 / fVar28;
    iVar23 = (int)((longlong)((ulonglong)(uint)(iVar23 >> 0x1f) << 0x20 | uVar22 >> 0x20) /
                  (longlong)iVar21);
    iVar21 = (int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar22 & 0xffffffff) /
                  (longlong)iVar21);
    param_2[0x3c] = ((float)iVar21 + 0.5) * fVar27;
    param_2[0x3d] = ((float)iVar23 + 0.5) * fVar29;
    param_2[0x3e] = ((float)(iVar19 + iVar21) + -0.5) * fVar27;
    param_2[0x3f] = ((float)(iVar25 + iVar23) + -0.5) * fVar29;
    param_2[0x38] = fVar30;
    param_2[0x39] = fVar28;
    param_2[0x3a] = fVar27;
    param_2[0x3b] = fVar29;
    lVar11 = 0;
    bVar7 = true;
    do {
      bVar18 = bVar7;
      lVar14 = lVar13;
      if (*(longlong *)(param_1[10] + lVar11 * 8) != 0) {
        lVar14 = FUN_14473c272(param_1[3],param_1[10] + lVar11 * 8,0);
      }
      *(longlong *)(param_2 + lVar11 * 2 + 0x58) = lVar14;
      lVar11 = 1;
      bVar7 = false;
    } while (bVar18);
    lVar13 = *(longlong *)(param_2 + 100);
  }
  uVar12 = DAT_14c9c0de0;
  *(undefined8 *)(param_2 + 0x5c) = DAT_14c9c0de0;
  *(undefined8 *)(param_2 + 0x5e) = uVar12;
  fVar30 = (float)(int)uVar8;
  piVar5 = (int *)param_1[0xb];
  iVar21 = piVar5[3];
  iVar9 = piVar5[1];
  fVar27 = 1.0 / fVar30;
  iVar19 = piVar5[2];
  iVar23 = *piVar5;
  piVar5 = (int *)param_1[8];
  iVar24 = piVar5[3];
  iVar25 = piVar5[1];
  param_2[4] = (fVar30 * -0.5 + (float)(piVar5[2] - *piVar5)) / (float)(piVar5[2] - *piVar5);
  param_2[5] = (fVar30 * -0.5 + (float)(iVar24 - iVar25)) / (float)(iVar24 - iVar25);
  param_2[6] = fVar30 / (float)(iVar19 - iVar23);
  param_2[7] = fVar30 / (float)(iVar21 - iVar9);
  param_2[10] = *(float *)(param_1[1] + 0x13694) / *(float *)(param_1[1] + 0x13170);
  piVar5 = (int *)param_1[6];
  fVar30 = 1.0 / (float)*(int *)param_1[4];
  fVar28 = 1.0 / (float)((int *)param_1[4])[1];
  iVar21 = *piVar5;
  iVar9 = piVar5[1];
  iVar19 = piVar5[3];
  *param_2 = (float)(piVar5[2] - iVar21) * fVar27 * fVar30;
  param_2[1] = (float)(iVar19 - iVar9) * fVar27 * fVar28;
  param_2[2] = (float)iVar21 * fVar27 * fVar30;
  param_2[3] = (float)iVar9 * fVar27 * fVar28;
  lVar11 = param_1[3];
  if ((*(char *)(lVar13 + 0x92) == '\x04') || (*(char *)(lVar13 + 0x92) == '\x01')) {
    uVar17 = *(undefined2 *)(lVar13 + 0x8e);
  }
  else {
    uVar17 = 0;
  }
  uVar4 = *(undefined1 *)(lVar13 + 0x90);
  puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 8;
  if (*(undefined8 **)(lVar11 + 0x78) < puVar15) {
    FUN_140023dd8((longlong *)(lVar11 + 0x70),0x48);
    puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 8;
  }
  *(undefined8 **)(lVar11 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(lVar13 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 1;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar20 + 5) = 0;
  *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar4;
  *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar17;
  *(undefined1 *)(puVar20 + 6) = 0;
  *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
  puVar20[7] = lVar13;
  iVar21 = *(int *)(lVar11 + 0x1a0);
  *(uint *)(lVar11 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(lVar11 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(lVar11 + 0x198,iVar21);
  }
  *(undefined8 **)(*(longlong *)(lVar11 + 0x198) + (longlong)iVar21 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar11 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x68) = puVar20;
  lVar13 = param_1[3];
  plVar6 = *(longlong **)(param_1[1] + 0x30d8);
  if ((plVar6 == (longlong *)0x0) || ((*(byte *)(plVar6 + 1) & 2) == 0)) {
    local_108 = (undefined8 *)&DAT_3f8000003f800000;
    fStack_100 = 1.0;
    uStack_fc = 0x3f800000;
    local_118 = 1;
    local_110 = &local_108;
    lVar11 = FUN_1449cc94d(lVar13,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar6 + 0x80) == (code *)&LAB_144b15db6) {
      local_108 = (undefined8 *)plVar6[(ulonglong)*(uint *)(plVar6 + 0xcd) + 0xd1];
    }
    else {
      local_108 = (undefined8 *)(**(code **)(*plVar6 + 0x80))();
    }
    if (local_108 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = *(int *)(local_108 + 1) + 1;
      UNLOCK();
    }
    lVar11 = FUN_144735dd8(lVar13,&local_108,1);
    if (local_108 != (undefined8 *)0x0) {
      LOCK();
      piVar5 = (int *)(local_108 + 1);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)*local_108)(local_108,1);
      }
    }
  }
  cVar16 = *(char *)(lVar11 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 9;
  if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
    FUN_140023dd8((longlong *)(lVar13 + 0x70),0x50);
    puVar20 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 9;
  }
  *(undefined8 **)(lVar13 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(lVar11 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar11;
  iVar21 = *(int *)(lVar13 + 0x1a0);
  *(uint *)(lVar13 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(lVar13 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(lVar13 + 0x198,iVar21);
  }
  *(undefined8 **)(*(longlong *)(lVar13 + 0x198) + (longlong)iVar21 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar13 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x4e) = puVar20;
  if ((local_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2e58a FUN_142f2e58a body=209 status=ok
// SIG undefined FUN_142f2e58a(void)

void FUN_142f2e58a(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_78 [24];
  longlong alStack_60 [6];
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  alStack_60[5] = 0;
  uStack_30 = 0;
  alStack_60[3] = 0;
  alStack_60[4] = 0;
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  bVar5 = false;
  lVar3 = 0;
  plVar4 = alStack_60 + 1;
  do {
    if (alStack_60 + 1 != param_1) {
      plVar1 = (longlong *)param_1[lVar3];
      param_1[lVar3] = *plVar4;
      *plVar4 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    lVar3 = 1;
    bVar2 = !bVar5;
    bVar5 = true;
    plVar4 = alStack_60 + 2;
  } while (bVar2);
  param_1[2] = alStack_60[3];
  param_1[3] = alStack_60[4];
  param_1[4] = alStack_60[5];
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
  lVar3 = 0x10;
  do {
    if (*(longlong **)((longlong)alStack_60 + lVar3) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)alStack_60 + lVar3) + 0x38))();
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2e65c FUN_142f2e65c body=1453 status=ok
// SIG undefined FUN_142f2e65c(void)

undefined8 * FUN_142f2e65c(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  char cVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  DWORD local_14c;
  longlong local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [2];
  longlong local_b8;
  uint local_b0;
  char local_ac;
  undefined2 local_ab;
  undefined1 local_a9;
  ulonglong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_ab = 0;
  local_a8 = *(ulonglong *)(param_3 + 0x30f8);
  local_a0 = *(undefined8 *)(param_3 + 0x3100);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  bVar20 = *(int *)(param_3 + 0x3024) == 1;
  local_b0 = (uint)bVar20;
  local_88 = 1;
  if (bVar20) {
    local_98 = 0;
    fVar22 = *(float *)(*(longlong *)(param_3 + 8) + 0x110);
    fVar21 = (float)(*(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc)) * fVar22 *
             *(float *)(param_3 + 0x45c);
    fVar22 = (float)(*(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8)) * fVar22 *
             *(float *)(param_3 + 0x45c);
    iVar15 = 0;
    uVar14 = CONCAT44(-((int)ROUND(-0.5 - (fVar21 + fVar21)) >> 1),
                      -((int)ROUND(-0.5 - (fVar22 + fVar22)) >> 1));
  }
  else {
    iVar15 = (int)(local_a8 >> 0x20);
    uVar14 = local_a0;
    local_98 = local_a8;
  }
  uVar5 = local_98;
  iVar8 = 3;
  if (*(int *)(DAT_14ca35bf0 + 4) < 3) {
    iVar8 = *(int *)(DAT_14ca35bf0 + 4);
  }
  cVar19 = '\0';
  if (0 < iVar8) {
    cVar19 = (char)iVar8;
  }
  local_ac = cVar19;
  local_90 = uVar14;
  fVar22 = (float)FUN_1472a9f48(param_3);
  iVar13 = (int)uVar14;
  iVar17 = (int)uVar5;
  iVar8 = (int)((ulonglong)uVar14 >> 0x20);
  if (1.0 < fVar22) {
    local_b0 = 2;
    local_ac = '\x02';
    local_98 = 0;
    local_90 = CONCAT44((int)((float)(iVar8 - iVar15) * fVar22),
                        (int)((float)(iVar13 - iVar17) * fVar22));
    cVar19 = '\x02';
  }
  local_a9 = *(undefined1 *)(param_4 + 6);
  if ((*(char *)(param_4 + 1) == '\0') && (*(char *)(param_4 + 2) != '\x01')) {
    bVar20 = false;
  }
  else {
    bVar20 = cVar19 != '\x02';
  }
  local_80 = *(undefined8 *)(param_4 + 0x20);
  uStack_78 = *(undefined8 *)(param_4 + 0x50);
  local_70 = *(undefined8 *)(param_4 + 8);
  local_ab = CONCAT11(bVar20,1);
  local_168 = param_3 + 0x131e0;
  local_160 = *(longlong *)(param_3 + 0x3108) + 0x1310;
  FUN_1401f4547(local_c8,param_2,param_3);
  iVar15 = (int)(uVar5 >> 0x20);
  if (1.0 < fVar22) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    lVar16 = DAT_14ca97170;
    local_f0 = local_98;
    local_e8 = local_90;
    local_130 = param_2;
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      local_138 = local_98;
      local_140 = local_90;
      local_148 = DAT_14ca97170;
      local_14c = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar10 = (ulonglong)(local_14c != DVar6);
      lVar16 = local_148;
      local_f0 = local_138;
      local_e8 = local_140;
    }
    else {
      uVar10 = 1;
    }
    param_2 = local_130;
    iVar2 = *(int *)(lVar16 + uVar10 * 4);
    uVar11 = (uint)(iVar2 < 1) << 2 | 0xfffffff8;
    uVar9 = (iVar13 - iVar17) + (uint)(0 < iVar2) * 4 + 3 & uVar11;
    uVar11 = (iVar8 - iVar15) + 3 + (uint)(0 < iVar2) * 4 & uVar11;
    uVar3 = *(uint *)(*(longlong *)(param_4 + 8) + 0x84);
    uVar4 = *(uint *)(*(longlong *)(param_4 + 8) + 0x88);
    if ((int)uVar9 <= (int)uVar3) {
      uVar9 = uVar3;
    }
    if ((int)uVar11 <= (int)uVar4) {
      uVar11 = uVar4;
    }
    local_e0 = CONCAT44(uVar11,uVar9);
    local_f8 = local_c8[0];
    local_d8 = uVar5;
    local_d0 = uVar14;
    local_c8[0] = FUN_142ef8699(local_130,param_3);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x11] = 0;
  local_128 = local_c8[0];
  local_120 = uVar5;
  local_118 = uVar14;
  FUN_1448a0832(&local_110,param_2);
  *param_1 = local_110;
  param_1[1] = local_108;
  param_1[2] = local_100;
  if (local_b8 != 0) {
    if ((*(char *)(local_b8 + 0x92) == '\x04') || (*(char *)(local_b8 + 0x92) == '\x01')) {
      uVar12 = *(undefined2 *)(local_b8 + 0x8e);
    }
    else {
      uVar12 = 0;
    }
    uVar1 = *(undefined1 *)(local_b8 + 0x90);
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar18 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar18 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar7;
    puVar18[1] = *(undefined8 *)(local_b8 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 1;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *puVar18 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar18 + 5) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar1;
    *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar12;
    *(undefined1 *)(puVar18 + 6) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
    puVar18[7] = local_b8;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[3] = puVar18;
    param_1[4] = CONCAT44(iVar15 / 2,(int)(((uint)(uVar5 >> 0x1f) & 1) + iVar17) >> 1);
    param_1[5] = CONCAT44((iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1,
                          (iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f2ec0a FUN_142f2ec0a body=69 status=ok
// SIG undefined FUN_142f2ec0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f2ec0a(void)

{
  _DAT_14ca35c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f2ec4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca35ca0,1);
  return;
}


