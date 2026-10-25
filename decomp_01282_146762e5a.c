// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146762e5a FUN_146762e5a body=136 status=ok
// SIG undefined FUN_146762e5a(void)

code * FUN_146762e5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9f044;
}



// FUNCTION 146762ee2 FUN_146762ee2 body=136 status=ok
// SIG undefined FUN_146762ee2(void)

code * FUN_146762ee2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"s_LinearClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a00000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b4ee;
}



// FUNCTION 146762f6a FUN_146762f6a body=136 status=ok
// SIG undefined FUN_146762f6a(void)

code * FUN_146762f6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid9";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b68c;
}



// FUNCTION 146762ff2 FUN_146762ff2 body=136 status=ok
// SIG undefined FUN_146762ff2(void)

code * FUN_146762ff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_dilated_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bf2c;
}



// FUNCTION 14676307a FUN_14676307a body=136 status=ok
// SIG undefined FUN_14676307a(void)

code * FUN_14676307a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"fMotionVectorScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d2d0;
}



// FUNCTION 146763102 FUN_146763102 body=136 status=ok
// SIG undefined FUN_146763102(void)

code * FUN_146763102(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"minMaxLuminance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d46e;
}



// FUNCTION 14676318a FUN_14676318a body=136 status=ok
// SIG undefined FUN_14676318a(void)

code * FUN_14676318a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"displaySizeRcp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982dd0e;
}



// FUNCTION 146763212 FUN_146763212 body=136 status=ok
// SIG undefined FUN_146763212(void)

code * FUN_146763212(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"workGroupOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0a406;
}



// FUNCTION 14676329a FUN_14676329a body=136 status=ok
// SIG undefined FUN_14676329a(void)

code * FUN_14676329a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"s_PointClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb80000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982de20;
}



// FUNCTION 146763322 FUN_146763322 body=136 status=ok
// SIG undefined FUN_146763322(void)

code * FUN_146763322(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_scd_previous_histogram";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c9d5ca;
}



// FUNCTION 1467633aa FUN_1467633aa body=136 status=ok
// SIG undefined FUN_1467633aa(void)

code * FUN_1467633aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"minMaxLuminance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0ab46;
}



// FUNCTION 146763432 FUN_146763432 body=136 status=ok
// SIG undefined FUN_146763432(void)

code * FUN_146763432(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"uOpticalFlowPyramidLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982eb34;
}



// FUNCTION 1467634ba FUN_1467634ba body=136 status=ok
// SIG undefined FUN_1467634ba(void)

code * FUN_1467634ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"workGroupOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0a7a6;
}



// FUNCTION 146763542 FUN_146763542 body=29 status=ok
// SIG undefined FUN_146763542(void)

undefined8 FUN_146763542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146763560 FUN_146763560 body=29 status=ok
// SIG undefined FUN_146763560(void)

undefined8 FUN_146763560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676357e FUN_14676357e body=93 status=ok
// SIG undefined FUN_14676357e(void)

void FUN_14676357e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beac8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467635dc FUN_1467635dc body=29 status=ok
// SIG undefined FUN_1467635dc(void)

undefined8 FUN_1467635dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467635fa FUN_1467635fa body=192 status=ok
// SIG undefined FUN_1467635fa(void)

void FUN_1467635fa(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bead780;
  puVar1[3] = &DAT_14cc2cf10;
  puVar1[4] = FUN_145a0aa12;
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



// FUNCTION 1467636bc FUN_1467636bc body=93 status=ok
// SIG undefined FUN_1467636bc(void)

void FUN_1467636bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bead780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676371a FUN_14676371a body=34 status=ok
// SIG undefined FUN_14676371a(void)

undefined8 FUN_14676371a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676373c FUN_14676373c body=49 status=ok
// SIG undefined FUN_14676373c(void)

longlong FUN_14676373c(void)

{
  if (DAT_14cc2d0f0 == 0) {
    FUN_14073dd9a(&DAT_14cc2d0f0,&PTR_LAB_14beae090);
  }
  return DAT_14cc2d0f0;
}



// FUNCTION 14676376d FUN_14676376d body=47 status=ok
// SIG undefined FUN_14676376d(void)

longlong FUN_14676376d(void)

{
  if (DAT_14cc2d0a8 == 0) {
    FUN_14000fc22(&DAT_14cc2d0a8,&PTR_FUN_14bead8b8);
  }
  return DAT_14cc2d0a8;
}



// FUNCTION 14676379c FUN_14676379c body=47 status=ok
// SIG undefined FUN_14676379c(void)

longlong FUN_14676379c(void)

{
  if (DAT_14cc2d0b0 == 0) {
    FUN_14000fc22(&DAT_14cc2d0b0,&PTR_FUN_14bead990);
  }
  return DAT_14cc2d0b0;
}



// FUNCTION 1467637cb FUN_1467637cb body=47 status=ok
// SIG undefined FUN_1467637cb(void)

longlong FUN_1467637cb(void)

{
  if (DAT_14cc2d0b8 == 0) {
    FUN_14000fc22(&DAT_14cc2d0b8,&PTR_FUN_14beada18);
  }
  return DAT_14cc2d0b8;
}



// FUNCTION 1467637fa FUN_1467637fa body=47 status=ok
// SIG undefined FUN_1467637fa(void)

longlong FUN_1467637fa(void)

{
  if (DAT_14cc2d0c0 == 0) {
    FUN_14000fc22(&DAT_14cc2d0c0,&PTR_FUN_14beada68);
  }
  return DAT_14cc2d0c0;
}



// FUNCTION 146763829 FUN_146763829 body=47 status=ok
// SIG undefined FUN_146763829(void)

longlong FUN_146763829(void)

{
  if (DAT_14cc2d0c8 == 0) {
    FUN_14000fc22(&DAT_14cc2d0c8,&PTR_FUN_14beadab8);
  }
  return DAT_14cc2d0c8;
}



// FUNCTION 146763858 FUN_146763858 body=47 status=ok
// SIG undefined FUN_146763858(void)

longlong FUN_146763858(void)

{
  if (DAT_14cc2d0d0 == 0) {
    FUN_14000fc22(&DAT_14cc2d0d0,&PTR_FUN_14beadb58);
  }
  return DAT_14cc2d0d0;
}



// FUNCTION 146763887 FUN_146763887 body=47 status=ok
// SIG undefined FUN_146763887(void)

longlong FUN_146763887(void)

{
  if (DAT_14cc2d0d8 == 0) {
    FUN_14000fc22(&DAT_14cc2d0d8,&PTR_FUN_14beadbf0);
  }
  return DAT_14cc2d0d8;
}



// FUNCTION 1467638b6 FUN_1467638b6 body=47 status=ok
// SIG undefined FUN_1467638b6(void)

longlong FUN_1467638b6(void)

{
  if (DAT_14cc2d0e0 == 0) {
    FUN_14000fc22(&DAT_14cc2d0e0,&PTR_FUN_14beadcd8);
  }
  return DAT_14cc2d0e0;
}



// FUNCTION 1467638e6 FUN_1467638e6 body=34 status=ok
// SIG undefined FUN_1467638e6(void)

void FUN_1467638e6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a97f5c();
  FUN_14069c8d6(uVar1,&PTR_s_JumpEvent_14beadd20,8);
  return;
}



// FUNCTION 146763908 FUN_146763908 body=49 status=ok
// SIG undefined FUN_146763908(void)

longlong FUN_146763908(void)

{
  if (DAT_14cc2d140 == 0) {
    FUN_14073dd9a(&DAT_14cc2d140,&PTR_LAB_14beae7b0);
  }
  return DAT_14cc2d140;
}



// FUNCTION 146763939 FUN_146763939 body=47 status=ok
// SIG undefined FUN_146763939(void)

longlong FUN_146763939(void)

{
  if (DAT_14cc2d118 == 0) {
    FUN_14000fc22(&DAT_14cc2d118,&PTR_FUN_14beae448);
  }
  return DAT_14cc2d118;
}



// FUNCTION 146763968 FUN_146763968 body=47 status=ok
// SIG undefined FUN_146763968(void)

longlong FUN_146763968(void)

{
  if (DAT_14cc2d120 == 0) {
    FUN_14000fc22(&DAT_14cc2d120,&PTR_FUN_14beae520);
  }
  return DAT_14cc2d120;
}



// FUNCTION 146763997 FUN_146763997 body=47 status=ok
// SIG undefined FUN_146763997(void)

longlong FUN_146763997(void)

{
  if (DAT_14cc2d150 == 0) {
    FUN_14086a14e(&DAT_14cc2d150,&PTR_FUN_14beaec60);
  }
  return DAT_14cc2d150;
}



// FUNCTION 1467639c6 FUN_1467639c6 body=47 status=ok
// SIG undefined FUN_1467639c6(void)

longlong FUN_1467639c6(void)

{
  if (DAT_14cc2d128 == 0) {
    FUN_14000fc22(&DAT_14cc2d128,&PTR_FUN_14beae600);
  }
  return DAT_14cc2d128;
}



// FUNCTION 1467639f5 FUN_1467639f5 body=47 status=ok
// SIG undefined FUN_1467639f5(void)

longlong FUN_1467639f5(void)

{
  if (DAT_14cc2d130 == 0) {
    FUN_14000fc22(&DAT_14cc2d130,&PTR_FUN_14beae690);
  }
  return DAT_14cc2d130;
}



// FUNCTION 146763a24 FUN_146763a24 body=34 status=ok
// SIG undefined FUN_146763a24(void)

void FUN_146763a24(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a98048();
  FUN_14069c8d6(uVar1,&PTR_s_IsInitialized_14beae6d0,4);
  return;
}



// FUNCTION 146763a46 FUN_146763a46 body=48 status=ok
// SIG undefined FUN_146763a46(void)

void FUN_146763a46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14beaf120;
  return;
}



// FUNCTION 146763a76 FUN_146763a76 body=231 status=ok
// SIG undefined FUN_146763a76(void)

void FUN_146763a76(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14beaf900;
  local_28[3] = &DAT_14cc2d222;
  local_28[4] = FUN_1459d16d8;
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



// FUNCTION 146763b5e FUN_146763b5e body=40 status=ok
// SIG undefined FUN_146763b5e(void)

undefined8 FUN_146763b5e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146763b86 FUN_146763b86 body=34 status=ok
// SIG undefined FUN_146763b86(void)

undefined8 FUN_146763b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146763ba8 FUN_146763ba8 body=29 status=ok
// SIG undefined FUN_146763ba8(void)

bool FUN_146763ba8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146763bc6 FUN_146763bc6 body=24 status=ok
// SIG undefined FUN_146763bc6(void)

bool FUN_146763bc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763bde FUN_146763bde body=26 status=ok
// SIG undefined FUN_146763bde(void)

bool FUN_146763bde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763bf8 FUN_146763bf8 body=24 status=ok
// SIG undefined FUN_146763bf8(void)

bool FUN_146763bf8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763c10 FUN_146763c10 body=29 status=ok
// SIG undefined FUN_146763c10(void)

bool FUN_146763c10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146763c2e FUN_146763c2e body=26 status=ok
// SIG undefined FUN_146763c2e(void)

bool FUN_146763c2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763c48 FUN_146763c48 body=24 status=ok
// SIG undefined FUN_146763c48(void)

bool FUN_146763c48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763c60 FUN_146763c60 body=24 status=ok
// SIG undefined FUN_146763c60(void)

bool FUN_146763c60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763c78 FUN_146763c78 body=24 status=ok
// SIG undefined FUN_146763c78(void)

bool FUN_146763c78(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763c90 FUN_146763c90 body=29 status=ok
// SIG undefined FUN_146763c90(void)

bool FUN_146763c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146763cae FUN_146763cae body=26 status=ok
// SIG undefined FUN_146763cae(void)

bool FUN_146763cae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763cc8 FUN_146763cc8 body=24 status=ok
// SIG undefined FUN_146763cc8(void)

bool FUN_146763cc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763ce0 FUN_146763ce0 body=26 status=ok
// SIG undefined FUN_146763ce0(void)

bool FUN_146763ce0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763cfa FUN_146763cfa body=24 status=ok
// SIG undefined FUN_146763cfa(void)

bool FUN_146763cfa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763d12 FUN_146763d12 body=26 status=ok
// SIG undefined FUN_146763d12(void)

bool FUN_146763d12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763d2c FUN_146763d2c body=24 status=ok
// SIG undefined FUN_146763d2c(void)

bool FUN_146763d2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763d44 FUN_146763d44 body=26 status=ok
// SIG undefined FUN_146763d44(void)

bool FUN_146763d44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763d5e FUN_146763d5e body=24 status=ok
// SIG undefined FUN_146763d5e(void)

bool FUN_146763d5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763d76 FUN_146763d76 body=26 status=ok
// SIG undefined FUN_146763d76(void)

bool FUN_146763d76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763d90 FUN_146763d90 body=24 status=ok
// SIG undefined FUN_146763d90(void)

bool FUN_146763d90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763da8 FUN_146763da8 body=26 status=ok
// SIG undefined FUN_146763da8(void)

bool FUN_146763da8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146763dc2 FUN_146763dc2 body=24 status=ok
// SIG undefined FUN_146763dc2(void)

bool FUN_146763dc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146763dda FUN_146763dda body=93 status=ok
// SIG undefined FUN_146763dda(void)

void FUN_146763dda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beaf890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146763e38 FUN_146763e38 body=93 status=ok
// SIG undefined FUN_146763e38(void)

void FUN_146763e38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146763e96 FUN_146763e96 body=34 status=ok
// SIG undefined FUN_146763e96(void)

undefined8 FUN_146763e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146763eb8 FUN_146763eb8 body=192 status=ok
// SIG undefined FUN_146763eb8(void)

void FUN_146763eb8(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14beaf9d0;
  puVar1[3] = &DAT_14cc2d2f8;
  puVar1[4] = FUN_1459a6f36;
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



// FUNCTION 146763f7a FUN_146763f7a body=93 status=ok
// SIG undefined FUN_146763f7a(void)

void FUN_146763f7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beaf9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146763fd8 FUN_146763fd8 body=34 status=ok
// SIG undefined FUN_146763fd8(void)

undefined8 FUN_146763fd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146763ffa FUN_146763ffa body=47 status=ok
// SIG undefined FUN_146763ffa(void)

longlong FUN_146763ffa(void)

{
  if (DAT_14cc2d308 == 0) {
    FUN_1409ce572(&DAT_14cc2d308,&PTR_FUN_14beafae0);
  }
  return DAT_14cc2d308;
}



// FUNCTION 146764029 FUN_146764029 body=47 status=ok
// SIG undefined FUN_146764029(void)

longlong FUN_146764029(void)

{
  if (DAT_14cc2d320 == 0) {
    FUN_1409ce572(&DAT_14cc2d320,&PTR_FUN_14beafb40);
  }
  return DAT_14cc2d320;
}



// FUNCTION 146764058 FUN_146764058 body=47 status=ok
// SIG undefined FUN_146764058(void)

longlong FUN_146764058(void)

{
  if (DAT_14cc2d338 == 0) {
    FUN_1409ce572(&DAT_14cc2d338,&PTR_FUN_14beafbf0);
  }
  return DAT_14cc2d338;
}



// FUNCTION 146764088 FUN_146764088 body=192 status=ok
// SIG undefined FUN_146764088(void)

void FUN_146764088(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14beb20c0;
  puVar1[3] = &DAT_14cc2d368;
  puVar1[4] = FUN_1459d1706;
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



// FUNCTION 146764149 FUN_146764149 body=49 status=ok
// SIG undefined FUN_146764149(void)

longlong FUN_146764149(void)

{
  if (DAT_14cc2d370 == 0) {
    FUN_1409ce572(&DAT_14cc2d370,&PTR_FUN_14beafd50);
  }
  return DAT_14cc2d370;
}



// FUNCTION 14676417a FUN_14676417a body=47 status=ok
// SIG undefined FUN_14676417a(void)

longlong FUN_14676417a(void)

{
  if (DAT_14cc2d388 == 0) {
    FUN_1409ce572(&DAT_14cc2d388,&PTR_FUN_14beafdd0);
  }
  return DAT_14cc2d388;
}



// FUNCTION 1467641a9 FUN_1467641a9 body=47 status=ok
// SIG undefined FUN_1467641a9(void)

longlong FUN_1467641a9(void)

{
  if (DAT_14cc2d3b8 == 0) {
    FUN_14073dd9a(&DAT_14cc2d3b8,&PTR_LAB_14beb0490);
  }
  return DAT_14cc2d3b8;
}



// FUNCTION 1467641d8 FUN_1467641d8 body=47 status=ok
// SIG undefined FUN_1467641d8(void)

longlong FUN_1467641d8(void)

{
  if (DAT_14cc2d3a0 == 0) {
    FUN_14000fc22(&DAT_14cc2d3a0,&PTR_FUN_14beaff00);
  }
  return DAT_14cc2d3a0;
}



// FUNCTION 146764207 FUN_146764207 body=47 status=ok
// SIG undefined FUN_146764207(void)

longlong FUN_146764207(void)

{
  if (DAT_14cc2d3a8 == 0) {
    FUN_14000fc22(&DAT_14cc2d3a8,&PTR_FUN_14beb0160);
  }
  return DAT_14cc2d3a8;
}



// FUNCTION 146764236 FUN_146764236 body=34 status=ok
// SIG undefined FUN_146764236(void)

void FUN_146764236(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458cc850();
  FUN_14069c8d6(uVar1,&PTR_s_GetVisualFidelity_14beb01a0,2);
  return;
}



// FUNCTION 14676425e FUN_14676425e body=392 status=ok
// SIG undefined FUN_14676425e(void)

void FUN_14676425e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_1d();
  if (((*(longlong *)(param_1 + 0x110) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x118) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x110);
    local_20 = *(longlong *)(param_1 + 0x118);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar5 = *(longlong **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar7 = 0;
    do {
      puVar4 = *(undefined1 **)(lVar3 + lVar7);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 2;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_14983b3a0(param_1 + 0x100);
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    plVar5 = *(longlong **)(lVar3 + 0x48);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      puVar6 = *(undefined8 **)(lVar3 + 0x48);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      *(undefined8 *)(lVar3 + 0x48) = 0;
    }
    FUN_145c2fee8(param_1 + 0x70);
    FUN_149839a7c(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_145c2fee8(param_1 + 0x70);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467643e7 FUN_1467643e7 body=49 status=ok
// SIG undefined FUN_1467643e7(void)

longlong FUN_1467643e7(void)

{
  if (DAT_14cc2d3e8 == 0) {
    FUN_14073dd9a(&DAT_14cc2d3e8,&PTR_LAB_14beb0c08);
  }
  return DAT_14cc2d3e8;
}



// FUNCTION 146764418 FUN_146764418 body=47 status=ok
// SIG undefined FUN_146764418(void)

longlong FUN_146764418(void)

{
  if (DAT_14cc2d3d0 == 0) {
    FUN_14073dd9a(&DAT_14cc2d3d0,&PTR_LAB_14beb0858);
  }
  return DAT_14cc2d3d0;
}



// FUNCTION 146764447 FUN_146764447 body=35 status=ok
// SIG undefined FUN_146764447(void)

void FUN_146764447(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145807f8a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb0c50;
  return;
}



// FUNCTION 14676446a FUN_14676446a body=35 status=ok
// SIG undefined FUN_14676446a(void)

void FUN_14676446a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145807f8a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb1000;
  return;
}



// FUNCTION 14676448d FUN_14676448d body=47 status=ok
// SIG undefined FUN_14676448d(void)

longlong FUN_14676448d(void)

{
  if (DAT_14cc2d400 == 0) {
    FUN_14073dd9a(&DAT_14cc2d400,&PTR_LAB_14beb0fb8);
  }
  return DAT_14cc2d400;
}



// FUNCTION 1467644bc FUN_1467644bc body=43 status=ok
// SIG undefined FUN_1467644bc(void)

void FUN_1467644bc(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145807f8a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb1400;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1467644e7 FUN_1467644e7 body=47 status=ok
// SIG undefined FUN_1467644e7(void)

longlong FUN_1467644e7(void)

{
  if (DAT_14cc2d418 == 0) {
    FUN_14073dd9a(&DAT_14cc2d418,&PTR_LAB_14beb13b8);
  }
  return DAT_14cc2d418;
}



// FUNCTION 146764516 FUN_146764516 body=35 status=ok
// SIG undefined FUN_146764516(void)

void FUN_146764516(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145807f8a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb17b0;
  return;
}



// FUNCTION 146764539 FUN_146764539 body=47 status=ok
// SIG undefined FUN_146764539(void)

longlong FUN_146764539(void)

{
  if (DAT_14cc2d430 == 0) {
    FUN_14073dd9a(&DAT_14cc2d430,&PTR_LAB_14beb1768);
  }
  return DAT_14cc2d430;
}



// FUNCTION 146764568 FUN_146764568 body=47 status=ok
// SIG undefined FUN_146764568(void)

longlong FUN_146764568(void)

{
  if (DAT_14cc2d448 == 0) {
    FUN_14073dd9a(&DAT_14cc2d448,&PTR_LAB_14beb1b18);
  }
  return DAT_14cc2d448;
}



// FUNCTION 146764598 FUN_146764598 body=40 status=ok
// SIG undefined FUN_146764598(void)

undefined8 FUN_146764598(undefined8 param_1,int param_2)

{
  FUN_1458095c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467645c0 FUN_1467645c0 body=40 status=ok
// SIG undefined FUN_1467645c0(void)

undefined8 FUN_1467645c0(undefined8 param_1,int param_2)

{
  FUN_1458095c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467645e8 FUN_1467645e8 body=40 status=ok
// SIG undefined FUN_1467645e8(void)

undefined8 FUN_1467645e8(undefined8 param_1,int param_2)

{
  FUN_1458095c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146764610 FUN_146764610 body=40 status=ok
// SIG undefined FUN_146764610(void)

undefined8 FUN_146764610(undefined8 param_1,int param_2)

{
  FUN_1458095c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146764638 FUN_146764638 body=93 status=ok
// SIG undefined FUN_146764638(void)

void FUN_146764638(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beb20c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146764696 FUN_146764696 body=192 status=ok
// SIG undefined FUN_146764696(void)

void FUN_146764696(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14beb8760;
  puVar1[3] = &DAT_14cc2d470;
  puVar1[4] = FUN_1459a6f60;
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



// FUNCTION 146764757 FUN_146764757 body=47 status=ok
// SIG undefined FUN_146764757(void)

longlong FUN_146764757(void)

{
  if (DAT_14cc2d478 == 0) {
    FUN_1409ce572(&DAT_14cc2d478,&PTR_FUN_14beb2550);
  }
  return DAT_14cc2d478;
}



// FUNCTION 146764786 FUN_146764786 body=55 status=ok
// SIG undefined FUN_146764786(void)

void FUN_146764786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d498 == 0) {
    uVar1 = FUN_140f1f6b9();
    DAT_14cc2d498 = FUN_140002ddd(FUN_1467647bd,uVar1,L"ControlRigSplineImpl");
  }
  return;
}



// FUNCTION 1467647bd FUN_1467647bd body=47 status=ok
// SIG undefined FUN_1467647bd(void)

longlong FUN_1467647bd(void)

{
  if (DAT_14cc2d490 == 0) {
    FUN_14086a14e(&DAT_14cc2d490,&PTR_FUN_14beb25c0);
  }
  return DAT_14cc2d490;
}



// FUNCTION 1467647ec FUN_1467647ec body=43 status=ok
// SIG undefined FUN_1467647ec(void)

void FUN_1467647ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14beb5e60;
  return;
}



// FUNCTION 146764818 FUN_146764818 body=55 status=ok
// SIG undefined FUN_146764818(void)

void FUN_146764818(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d4b0 == 0) {
    uVar1 = FUN_140f1f6b9();
    DAT_14cc2d4b0 = FUN_140002ddd(FUN_14190e7ad,uVar1,L"ControlRigSpline");
  }
  return;
}



// FUNCTION 146764850 FUN_146764850 body=43 status=ok
// SIG undefined FUN_146764850(void)

void FUN_146764850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14beb5fc0;
  return;
}



// FUNCTION 14676487c FUN_14676487c body=55 status=ok
// SIG undefined FUN_14676487c(void)

void FUN_14676487c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d4d8 == 0) {
    uVar1 = FUN_140f1f6b9();
    DAT_14cc2d4d8 = FUN_140002ddd(FUN_1467648b3,uVar1,L"RigUnit_ControlRigSplineBase");
  }
  return;
}



// FUNCTION 1467648b3 FUN_1467648b3 body=49 status=ok
// SIG undefined FUN_1467648b3(void)

longlong FUN_1467648b3(void)

{
  if (DAT_14cc2d4d0 == 0) {
    FUN_14086a14e(&DAT_14cc2d4d0,&PTR_FUN_14beb27b8);
  }
  return DAT_14cc2d4d0;
}



// FUNCTION 1467648e4 FUN_1467648e4 body=43 status=ok
// SIG undefined FUN_1467648e4(void)

void FUN_1467648e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14beb6120;
  return;
}



// FUNCTION 146764910 FUN_146764910 body=829 status=ok
// SIG undefined FUN_146764910(void)

longlong FUN_146764910(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d4f0 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d4f0 = FUN_140002ddd(FUN_146764c4e,uVar4,L"RigUnit_ControlRigSplineFromPoints");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Points";
    local_58[1] = L"TArray<FVector>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SplineMode";
    local_58[lVar6 * 7 + 1] = L"ESplineType";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bClosed";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SamplesPerSegment";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Compression";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Stretch";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d4f0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ControlRigSplineFromPoints::Execute",FUN_1498535c8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d4f0;
}



// FUNCTION 146764c4e FUN_146764c4e body=47 status=ok
// SIG undefined FUN_146764c4e(void)

longlong FUN_146764c4e(void)

{
  if (DAT_14cc2d4e8 == 0) {
    FUN_14086a14e(&DAT_14cc2d4e8,&PTR_FUN_14beb2c10);
  }
  return DAT_14cc2d4e8;
}



// FUNCTION 146764c7e FUN_146764c7e body=43 status=ok
// SIG undefined FUN_146764c7e(void)

void FUN_146764c7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14beb6310;
  return;
}



// FUNCTION 146764caa FUN_146764caa body=829 status=ok
// SIG undefined FUN_146764caa(void)

longlong FUN_146764caa(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d508 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d508 = FUN_140002ddd(FUN_146764fe8,uVar4,L"RigUnit_ControlRigSplineFromTransforms");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Transforms";
    local_58[1] = L"TArray<FTransform>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SplineMode";
    local_58[lVar6 * 7 + 1] = L"ESplineType";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bClosed";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SamplesPerSegment";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Compression";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Stretch";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d508;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ControlRigSplineFromTransforms::Execute",FUN_1498537d4,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d508;
}



// FUNCTION 146764fe8 FUN_146764fe8 body=47 status=ok
// SIG undefined FUN_146764fe8(void)

longlong FUN_146764fe8(void)

{
  if (DAT_14cc2d500 == 0) {
    FUN_14086a14e(&DAT_14cc2d500,&PTR_FUN_14beb2f90);
  }
  return DAT_14cc2d500;
}



// FUNCTION 146765018 FUN_146765018 body=43 status=ok
// SIG undefined FUN_146765018(void)

void FUN_146765018(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14beb6500;
  return;
}



// FUNCTION 146765044 FUN_146765044 body=406 status=ok
// SIG undefined FUN_146765044(void)

longlong FUN_146765044(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d520 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d520 = FUN_140002ddd(FUN_1467651db,uVar4,L"RigUnit_SetSplinePoints");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Points";
    local_58[1] = L"TArray<FVector>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d520;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetSplinePoints::Execute",FUN_1498539e0,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d520;
}



// FUNCTION 1467651db FUN_1467651db body=47 status=ok
// SIG undefined FUN_1467651db(void)

longlong FUN_1467651db(void)

{
  if (DAT_14cc2d518 == 0) {
    FUN_14086a14e(&DAT_14cc2d518,&PTR_FUN_14beb3130);
  }
  return DAT_14cc2d518;
}



// FUNCTION 14676520a FUN_14676520a body=43 status=ok
// SIG undefined FUN_14676520a(void)

void FUN_14676520a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14beb66f0;
  return;
}



// FUNCTION 146765236 FUN_146765236 body=406 status=ok
// SIG undefined FUN_146765236(void)

longlong FUN_146765236(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d538 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d538 = FUN_140002ddd(FUN_1467653cd,uVar4,L"RigUnit_SetSplineTransforms");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Transforms";
    local_58[1] = L"TArray<FTransform>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d538;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SetSplineTransforms::Execute",FUN_149853a96,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d538;
}



// FUNCTION 1467653cd FUN_1467653cd body=47 status=ok
// SIG undefined FUN_1467653cd(void)

longlong FUN_1467653cd(void)

{
  if (DAT_14cc2d530 == 0) {
    FUN_14086a14e(&DAT_14cc2d530,&PTR_FUN_14beb32e8);
  }
  return DAT_14cc2d530;
}



// FUNCTION 1467653fc FUN_1467653fc body=43 status=ok
// SIG undefined FUN_1467653fc(void)

void FUN_1467653fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14beb68e0;
  return;
}



// FUNCTION 146765428 FUN_146765428 body=495 status=ok
// SIG undefined FUN_146765428(void)

longlong FUN_146765428(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d550 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d550 = FUN_140002ddd(FUN_146765618,uVar4,L"RigUnit_PositionFromControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Position";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d550;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PositionFromControlRigSpline::Execute",FUN_144669928,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d550;
}



// FUNCTION 146765618 FUN_146765618 body=47 status=ok
// SIG undefined FUN_146765618(void)

longlong FUN_146765618(void)

{
  if (DAT_14cc2d548 == 0) {
    FUN_14086a14e(&DAT_14cc2d548,&PTR_FUN_14beb34c0);
  }
  return DAT_14cc2d548;
}



// FUNCTION 146765648 FUN_146765648 body=43 status=ok
// SIG undefined FUN_146765648(void)

void FUN_146765648(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14beb6ad0;
  return;
}



// FUNCTION 146765674 FUN_146765674 body=654 status=ok
// SIG undefined FUN_146765674(void)

longlong FUN_146765674(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d568 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d568 = FUN_140002ddd(FUN_146765903,uVar4,L"RigUnit_TransformFromControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"UpVector";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Roll";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Transform";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d568;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_TransformFromControlRigSpline::Execute",FUN_149853b4c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d568;
}



// FUNCTION 146765903 FUN_146765903 body=47 status=ok
// SIG undefined FUN_146765903(void)

longlong FUN_146765903(void)

{
  if (DAT_14cc2d560 == 0) {
    FUN_14086a14e(&DAT_14cc2d560,&PTR_FUN_14beb3730);
  }
  return DAT_14cc2d560;
}



// FUNCTION 146765932 FUN_146765932 body=43 status=ok
// SIG undefined FUN_146765932(void)

void FUN_146765932(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14beb6cc0;
  return;
}



// FUNCTION 14676595e FUN_14676595e body=654 status=ok
// SIG undefined FUN_14676595e(void)

longlong FUN_14676595e(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d580 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d580 = FUN_140002ddd(FUN_146765bed,uVar4,L"RigUnit_TransformFromControlRigSpline2");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"PrimaryAxis";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SecondaryAxis";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Transform";
    local_58[lVar6 * 7 + 1] = L"FTransform";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d580;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_TransformFromControlRigSpline2::Execute",FUN_149853c06,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d580;
}



// FUNCTION 146765bed FUN_146765bed body=47 status=ok
// SIG undefined FUN_146765bed(void)

longlong FUN_146765bed(void)

{
  if (DAT_14cc2d578 == 0) {
    FUN_14086a14e(&DAT_14cc2d578,&PTR_FUN_14beb39a0);
  }
  return DAT_14cc2d578;
}



// FUNCTION 146765c1c FUN_146765c1c body=43 status=ok
// SIG undefined FUN_146765c1c(void)

void FUN_146765c1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14beb6eb0;
  return;
}



// FUNCTION 146765c48 FUN_146765c48 body=495 status=ok
// SIG undefined FUN_146765c48(void)

longlong FUN_146765c48(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d598 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d598 = FUN_140002ddd(FUN_146765e38,uVar4,L"RigUnit_TangentFromControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Tangent";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d598;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_TangentFromControlRigSpline::Execute",&LAB_149853cba,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d598;
}



// FUNCTION 146765e38 FUN_146765e38 body=47 status=ok
// SIG undefined FUN_146765e38(void)

longlong FUN_146765e38(void)

{
  if (DAT_14cc2d590 == 0) {
    FUN_14086a14e(&DAT_14cc2d590,&PTR_FUN_14beb3b80);
  }
  return DAT_14cc2d590;
}



// FUNCTION 146765e68 FUN_146765e68 body=43 status=ok
// SIG undefined FUN_146765e68(void)

void FUN_146765e68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14beb70a0;
  return;
}



// FUNCTION 146765e94 FUN_146765e94 body=581 status=ok
// SIG undefined FUN_146765e94(void)

longlong FUN_146765e94(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d5b0 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d5b0 = FUN_140002ddd(FUN_1467660da,uVar4,L"RigUnit_DrawControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Color";
    local_58[lVar6 * 7 + 1] = L"FLinearColor";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Thickness";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Detail";
    local_58[lVar6 * 7 + 1] = L"int32";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d5b0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_DrawControlRigSpline::Execute",FUN_149853d46,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d5b0;
}



// FUNCTION 1467660da FUN_1467660da body=47 status=ok
// SIG undefined FUN_1467660da(void)

longlong FUN_1467660da(void)

{
  if (DAT_14cc2d5a8 == 0) {
    FUN_14086a14e(&DAT_14cc2d5a8,&PTR_FUN_14beb3d70);
  }
  return DAT_14cc2d5a8;
}



// FUNCTION 14676610a FUN_14676610a body=43 status=ok
// SIG undefined FUN_14676610a(void)

void FUN_14676610a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14beb7290;
  return;
}



// FUNCTION 146766136 FUN_146766136 body=406 status=ok
// SIG undefined FUN_146766136(void)

longlong FUN_146766136(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d5c8 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d5c8 = FUN_140002ddd(FUN_1467662cd,uVar4,L"RigUnit_GetLengthControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Length";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d5c8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetLengthControlRigSpline::Execute",&LAB_14466a28c,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d5c8;
}



// FUNCTION 1467662cd FUN_1467662cd body=47 status=ok
// SIG undefined FUN_1467662cd(void)

longlong FUN_1467662cd(void)

{
  if (DAT_14cc2d5c0 == 0) {
    FUN_14086a14e(&DAT_14cc2d5c0,&PTR_FUN_14beb3ef8);
  }
  return DAT_14cc2d5c0;
}



// FUNCTION 1467662fc FUN_1467662fc body=43 status=ok
// SIG undefined FUN_1467662fc(void)

void FUN_1467662fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14beb7480;
  return;
}



// FUNCTION 146766328 FUN_146766328 body=488 status=ok
// SIG undefined FUN_146766328(void)

longlong FUN_146766328(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d5e0 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d5e0 = FUN_140002ddd(FUN_146766511,uVar4,L"RigUnit_GetLengthAtParamControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"Length";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d5e0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_GetLengthAtParamControlRigSpline::Execute",FUN_14466a34a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d5e0;
}



// FUNCTION 146766511 FUN_146766511 body=47 status=ok
// SIG undefined FUN_146766511(void)

longlong FUN_146766511(void)

{
  if (DAT_14cc2d5d8 == 0) {
    FUN_14086a14e(&DAT_14cc2d5d8,&PTR_FUN_14beb40e8);
  }
  return DAT_14cc2d5d8;
}



// FUNCTION 146766540 FUN_146766540 body=43 status=ok
// SIG undefined FUN_146766540(void)

void FUN_146766540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14beb7670;
  return;
}



// FUNCTION 14676656c FUN_14676656c body=1512 status=ok
// SIG undefined FUN_14676656c(void)

longlong FUN_14676656c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc2d5f8 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d5f8 = FUN_140002ddd(FUN_146766b55,uVar4,L"RigUnit_FitChainToSplineCurve");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"FRigElementKeyCollection";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar2);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Spline";
    local_68[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Alignment";
    local_68[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Minimum";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Maximum";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"SamplingPrecision";
    local_68[lVar6 * 7 + 1] = L"int32";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PrimaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"SecondaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PoleVectorPosition";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Rotations";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_FitChainToCurve_Rotation>";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"RotationEaseType";
    local_68[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Weight";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bPropagateToChildren";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"DebugSettings";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_DebugSettings";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d5f8;
    local_48 = 0x101;
    local_50 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_50 + 0x3a8) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitChainToSplineCurve::Execute",FUN_149853dc4,lVar6);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d5f8;
}



// FUNCTION 146766b55 FUN_146766b55 body=47 status=ok
// SIG undefined FUN_146766b55(void)

longlong FUN_146766b55(void)

{
  if (DAT_14cc2d5f0 == 0) {
    FUN_14086a14e(&DAT_14cc2d5f0,&PTR_FUN_14beb46c0);
  }
  return DAT_14cc2d5f0;
}



// FUNCTION 146766b84 FUN_146766b84 body=43 status=ok
// SIG undefined FUN_146766b84(void)

void FUN_146766b84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000003c0;
  *puVar1 = &PTR_FUN_14beb7860;
  return;
}



// FUNCTION 146766bb0 FUN_146766bb0 body=1512 status=ok
// SIG undefined FUN_146766bb0(void)

longlong FUN_146766bb0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc2d610 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d610 = FUN_140002ddd(FUN_146767199,uVar4,L"RigUnit_FitChainToSplineCurveItemArray");
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 1;
    uStack_60._4_4_ = 0;
    FUN_140c0351c(&local_68,0);
    iVar2 = (uint)uStack_60;
    *local_68 = L"Items";
    local_68[1] = L"TArray<FRigElementKey>";
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    *(undefined1 *)(local_68 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,iVar2);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Spline";
    local_68[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Alignment";
    local_68[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Minimum";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Maximum";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"SamplingPrecision";
    local_68[lVar6 * 7 + 1] = L"int32";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PrimaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"SecondaryAxis";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"PoleVectorPosition";
    local_68[lVar6 * 7 + 1] = L"FVector";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Rotations";
    local_68[lVar6 * 7 + 1] = L"TArray<FRigUnit_FitChainToCurve_Rotation>";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"RotationEaseType";
    local_68[lVar6 * 7 + 1] = L"ERigVMAnimEasingType";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"Weight";
    local_68[lVar6 * 7 + 1] = L"float";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"bPropagateToChildren";
    local_68[lVar6 * 7 + 1] = L"bool";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    uVar3 = (uint)uStack_60;
    local_68[lVar6 * 7] = L"DebugSettings";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_DebugSettings";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_60;
    uStack_60._0_4_ = (uint)uStack_60 + 1;
    if (uStack_60._4_4_ < (uint)uStack_60) {
      FUN_140c0351c(&local_68,uVar3);
    }
    local_68[lVar6 * 7] = L"WorkData";
    local_68[lVar6 * 7 + 1] = L"FRigUnit_FitChainToCurve_WorkData";
    local_68[lVar6 * 7 + 2] = 0;
    (local_68 + lVar6 * 7 + 2)[1] = 0;
    local_68[lVar6 * 7 + 4] = 0;
    (local_68 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_68 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d610;
    local_48 = 0x101;
    local_50 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_50 + 0x3a8) = (undefined1)local_48;
      UNLOCK();
    }
    local_78 = &local_68;
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitChainToSplineCurveItemArray::Execute",FUN_1498540f8,lVar6);
    FUN_1409be446(&local_50);
    FUN_140e03040(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d610;
}



// FUNCTION 146767199 FUN_146767199 body=47 status=ok
// SIG undefined FUN_146767199(void)

longlong FUN_146767199(void)

{
  if (DAT_14cc2d608 == 0) {
    FUN_14086a14e(&DAT_14cc2d608,&PTR_FUN_14beb4d00);
  }
  return DAT_14cc2d608;
}



// FUNCTION 1467671c8 FUN_1467671c8 body=43 status=ok
// SIG undefined FUN_1467671c8(void)

void FUN_1467671c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000003c0;
  *puVar1 = &PTR_FUN_14beb7a50;
  return;
}



// FUNCTION 1467671f4 FUN_1467671f4 body=55 status=ok
// SIG undefined FUN_1467671f4(void)

void FUN_1467671f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d628 == 0) {
    uVar1 = FUN_140f1f6b9();
    DAT_14cc2d628 = FUN_140002ddd(FUN_14676722b,uVar1,L"RigUnit_SplineConstraint_WorkData");
  }
  return;
}



// FUNCTION 14676722b FUN_14676722b body=47 status=ok
// SIG undefined FUN_14676722b(void)

longlong FUN_14676722b(void)

{
  if (DAT_14cc2d620 == 0) {
    FUN_14086a14e(&DAT_14cc2d620,&PTR_FUN_14beb4f80);
  }
  return DAT_14cc2d620;
}



// FUNCTION 14676725a FUN_14676725a body=43 status=ok
// SIG undefined FUN_14676725a(void)

void FUN_14676725a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14beb7bb0;
  return;
}



// FUNCTION 146767286 FUN_146767286 body=997 status=ok
// SIG undefined FUN_146767286(void)

longlong FUN_146767286(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d640 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d640 = FUN_140002ddd(FUN_14676766c,uVar4,L"RigUnit_SplineConstraint");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Items";
    local_58[1] = L"TArray<FRigElementKey>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Alignment";
    local_58[lVar6 * 7 + 1] = L"EControlRigCurveAlignment";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Minimum";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Maximum";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"PrimaryAxis";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SecondaryAxis";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_SplineConstraint_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d640;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_SplineConstraint::Execute",FUN_14985442e,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d640;
}



// FUNCTION 14676766c FUN_14676766c body=47 status=ok
// SIG undefined FUN_14676766c(void)

longlong FUN_14676766c(void)

{
  if (DAT_14cc2d638 == 0) {
    FUN_14086a14e(&DAT_14cc2d638,&PTR_FUN_14beb5398);
  }
  return DAT_14cc2d638;
}



// FUNCTION 14676769c FUN_14676769c body=43 status=ok
// SIG undefined FUN_14676769c(void)

void FUN_14676769c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000002a0;
  *puVar1 = &PTR_FUN_14beb7d10;
  return;
}



// FUNCTION 1467676c8 FUN_1467676c8 body=406 status=ok
// SIG undefined FUN_1467676c8(void)

longlong FUN_1467676c8(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d658 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d658 = FUN_140002ddd(FUN_14676785f,uVar4,L"RigUnit_FitSplineCurveToChain");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Items";
    local_58[1] = L"FRigElementKeyCollection";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d658;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitSplineCurveToChain::Execute",FUN_149854608,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d658;
}



// FUNCTION 14676785f FUN_14676785f body=47 status=ok
// SIG undefined FUN_14676785f(void)

longlong FUN_14676785f(void)

{
  if (DAT_14cc2d650 == 0) {
    FUN_14086a14e(&DAT_14cc2d650,&PTR_FUN_14beb5510);
  }
  return DAT_14cc2d650;
}



// FUNCTION 14676788e FUN_14676788e body=43 status=ok
// SIG undefined FUN_14676788e(void)

void FUN_14676788e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14beb7f00;
  return;
}



// FUNCTION 1467678ba FUN_1467678ba body=406 status=ok
// SIG undefined FUN_1467678ba(void)

longlong FUN_1467678ba(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d670 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d670 = FUN_140002ddd(FUN_146767a51,uVar4,L"RigUnit_FitSplineCurveToChainItemArray");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (int)uStack_50;
    *local_58 = L"Items";
    local_58[1] = L"TArray<FRigElementKey>";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_140c0351c(&local_58,iVar2);
    }
    local_58[lVar6 * 7] = L"Spline";
    local_58[lVar6 * 7 + 1] = L"FControlRigSpline";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d670;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_FitSplineCurveToChainItemArray::Execute",FUN_1498546cc,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d670;
}



// FUNCTION 146767a51 FUN_146767a51 body=47 status=ok
// SIG undefined FUN_146767a51(void)

longlong FUN_146767a51(void)

{
  if (DAT_14cc2d668 == 0) {
    FUN_14086a14e(&DAT_14cc2d668,&PTR_FUN_14beb56f0);
  }
  return DAT_14cc2d668;
}



// FUNCTION 146767a80 FUN_146767a80 body=43 status=ok
// SIG undefined FUN_146767a80(void)

void FUN_146767a80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14beb80f0;
  return;
}



// FUNCTION 146767aac FUN_146767aac body=495 status=ok
// SIG undefined FUN_146767aac(void)

longlong FUN_146767aac(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d688 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d688 =
         FUN_140002ddd(FUN_146767c9c,uVar4,L"RigUnit_ClosestParameterFromControlRigSpline");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Position";
    local_58[lVar6 * 7 + 1] = L"FVector";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d688;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ClosestParameterFromControlRigSpline::Execute",&LAB_149854792,
                  lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d688;
}



// FUNCTION 146767c9c FUN_146767c9c body=47 status=ok
// SIG undefined FUN_146767c9c(void)

longlong FUN_146767c9c(void)

{
  if (DAT_14cc2d680 == 0) {
    FUN_14086a14e(&DAT_14cc2d680,&PTR_FUN_14beb58f8);
  }
  return DAT_14cc2d680;
}



// FUNCTION 146767ccc FUN_146767ccc body=43 status=ok
// SIG undefined FUN_146767ccc(void)

void FUN_146767ccc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14beb8250;
  return;
}



// FUNCTION 146767cf8 FUN_146767cf8 body=488 status=ok
// SIG undefined FUN_146767cf8(void)

longlong FUN_146767cf8(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d6a0 == 0) {
    uVar4 = FUN_140f1f6b9();
    DAT_14cc2d6a0 = FUN_140002ddd(FUN_146767ee1,uVar4,L"RigUnit_ParameterAtPercentage");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Spline";
    local_58[1] = L"FControlRigSpline";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Percentage";
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = &DAT_149e71d4c;
    local_58[lVar6 * 7 + 1] = L"float";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d6a0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_ParameterAtPercentage::Execute",&LAB_14985481a,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d6a0;
}



// FUNCTION 146767ee1 FUN_146767ee1 body=47 status=ok
// SIG undefined FUN_146767ee1(void)

longlong FUN_146767ee1(void)

{
  if (DAT_14cc2d698 == 0) {
    FUN_14086a14e(&DAT_14cc2d698,&PTR_FUN_14beb5ac8);
  }
  return DAT_14cc2d698;
}



// FUNCTION 146767f10 FUN_146767f10 body=43 status=ok
// SIG undefined FUN_146767f10(void)

void FUN_146767f10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14beb8440;
  return;
}



// FUNCTION 146767f3c FUN_146767f3c body=34 status=ok
// SIG undefined FUN_146767f3c(void)

undefined8 FUN_146767f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146767f5e FUN_146767f5e body=34 status=ok
// SIG undefined FUN_146767f5e(void)

undefined8 FUN_146767f5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146767f80 FUN_146767f80 body=34 status=ok
// SIG undefined FUN_146767f80(void)

undefined8 FUN_146767f80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146767fa2 FUN_146767fa2 body=34 status=ok
// SIG undefined FUN_146767fa2(void)

undefined8 FUN_146767fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146767fc4 FUN_146767fc4 body=34 status=ok
// SIG undefined FUN_146767fc4(void)

undefined8 FUN_146767fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146767fe6 FUN_146767fe6 body=34 status=ok
// SIG undefined FUN_146767fe6(void)

undefined8 FUN_146767fe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768008 FUN_146768008 body=34 status=ok
// SIG undefined FUN_146768008(void)

undefined8 FUN_146768008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676802a FUN_14676802a body=34 status=ok
// SIG undefined FUN_14676802a(void)

undefined8 FUN_14676802a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676804c FUN_14676804c body=34 status=ok
// SIG undefined FUN_14676804c(void)

undefined8 FUN_14676804c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676806e FUN_14676806e body=34 status=ok
// SIG undefined FUN_14676806e(void)

undefined8 FUN_14676806e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768090 FUN_146768090 body=34 status=ok
// SIG undefined FUN_146768090(void)

undefined8 FUN_146768090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467680b2 FUN_1467680b2 body=34 status=ok
// SIG undefined FUN_1467680b2(void)

undefined8 FUN_1467680b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467680d4 FUN_1467680d4 body=34 status=ok
// SIG undefined FUN_1467680d4(void)

undefined8 FUN_1467680d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467680f6 FUN_1467680f6 body=34 status=ok
// SIG undefined FUN_1467680f6(void)

undefined8 FUN_1467680f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768118 FUN_146768118 body=34 status=ok
// SIG undefined FUN_146768118(void)

undefined8 FUN_146768118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676813a FUN_14676813a body=34 status=ok
// SIG undefined FUN_14676813a(void)

undefined8 FUN_14676813a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676815c FUN_14676815c body=34 status=ok
// SIG undefined FUN_14676815c(void)

undefined8 FUN_14676815c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676817e FUN_14676817e body=34 status=ok
// SIG undefined FUN_14676817e(void)

undefined8 FUN_14676817e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467681a0 FUN_1467681a0 body=34 status=ok
// SIG undefined FUN_1467681a0(void)

undefined8 FUN_1467681a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467681c2 FUN_1467681c2 body=34 status=ok
// SIG undefined FUN_1467681c2(void)

undefined8 FUN_1467681c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1467681e4 FUN_1467681e4 body=34 status=ok
// SIG undefined FUN_1467681e4(void)

undefined8 FUN_1467681e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768206 FUN_146768206 body=34 status=ok
// SIG undefined FUN_146768206(void)

undefined8 FUN_146768206(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768228 FUN_146768228 body=93 status=ok
// SIG undefined FUN_146768228(void)

void FUN_146768228(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beb8760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146768286 FUN_146768286 body=34 status=ok
// SIG undefined FUN_146768286(void)

undefined8 FUN_146768286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467682a8 FUN_1467682a8 body=49 status=ok
// SIG undefined FUN_1467682a8(void)

longlong FUN_1467682a8(void)

{
  if (DAT_14cc2d6c8 == 0) {
    FUN_1409ce572(&DAT_14cc2d6c8,&PTR_FUN_14beb88f0);
  }
  return DAT_14cc2d6c8;
}



// FUNCTION 1467682d9 FUN_1467682d9 body=47 status=ok
// SIG undefined FUN_1467682d9(void)

longlong FUN_1467682d9(void)

{
  if (DAT_14cc2d6e0 == 0) {
    FUN_14086a14e(&DAT_14cc2d6e0,&PTR_FUN_14beb8e18);
  }
  return DAT_14cc2d6e0;
}



// FUNCTION 146768308 FUN_146768308 body=48 status=ok
// SIG undefined FUN_146768308(void)

void FUN_146768308(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14beba3e0;
  return;
}



// FUNCTION 146768338 FUN_146768338 body=47 status=ok
// SIG undefined FUN_146768338(void)

longlong FUN_146768338(void)

{
  if (DAT_14cc2d6f8 == 0) {
    FUN_1409ce572(&DAT_14cc2d6f8,&PTR_FUN_14beb8f30);
  }
  return DAT_14cc2d6f8;
}



// FUNCTION 146768368 FUN_146768368 body=55 status=ok
// SIG undefined FUN_146768368(void)

void FUN_146768368(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d718 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d718 = FUN_140002ddd(FUN_14676839f,uVar1,L"RootPrePullSettings");
  }
  return;
}



// FUNCTION 14676839f FUN_14676839f body=49 status=ok
// SIG undefined FUN_14676839f(void)

longlong FUN_14676839f(void)

{
  if (DAT_14cc2d710 == 0) {
    FUN_14086a14e(&DAT_14cc2d710,&PTR_FUN_14beb9228);
  }
  return DAT_14cc2d710;
}



// FUNCTION 1467683d0 FUN_1467683d0 body=48 status=ok
// SIG undefined FUN_1467683d0(void)

void FUN_1467683d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14beba5c0;
  return;
}



// FUNCTION 146768400 FUN_146768400 body=55 status=ok
// SIG undefined FUN_146768400(void)

void FUN_146768400(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d730 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d730 = FUN_140002ddd(FUN_146768437,uVar1,L"PBIKSolverSettings");
  }
  return;
}



// FUNCTION 146768437 FUN_146768437 body=47 status=ok
// SIG undefined FUN_146768437(void)

longlong FUN_146768437(void)

{
  if (DAT_14cc2d728 == 0) {
    FUN_14086a14e(&DAT_14cc2d728,&PTR_FUN_14beb9630);
  }
  return DAT_14cc2d728;
}



// FUNCTION 146768466 FUN_146768466 body=48 status=ok
// SIG undefined FUN_146768466(void)

void FUN_146768466(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000040;
  *puVar1 = &PTR_FUN_14beba720;
  return;
}



// FUNCTION 146768496 FUN_146768496 body=55 status=ok
// SIG undefined FUN_146768496(void)

void FUN_146768496(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d748 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d748 = FUN_140002ddd(FUN_1467684cd,uVar1,L"PBIKSolver");
  }
  return;
}



// FUNCTION 1467684cd FUN_1467684cd body=47 status=ok
// SIG undefined FUN_1467684cd(void)

longlong FUN_1467684cd(void)

{
  if (DAT_14cc2d740 == 0) {
    FUN_14086a14e(&DAT_14cc2d740,&PTR_FUN_14beb9690);
  }
  return DAT_14cc2d740;
}



// FUNCTION 1467684fc FUN_1467684fc body=48 status=ok
// SIG undefined FUN_1467684fc(void)

void FUN_1467684fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14beba880;
  return;
}



// FUNCTION 14676852c FUN_14676852c body=192 status=ok
// SIG undefined FUN_14676852c(void)

void FUN_14676852c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bebb070;
  puVar1[3] = &DAT_14cc2d758;
  puVar1[4] = FUN_1459d1734;
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



// FUNCTION 1467685ee FUN_1467685ee body=55 status=ok
// SIG undefined FUN_1467685ee(void)

void FUN_1467685ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d778 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d778 = FUN_140002ddd(FUN_146768625,uVar1,L"PBIKDebug");
  }
  return;
}



// FUNCTION 146768625 FUN_146768625 body=47 status=ok
// SIG undefined FUN_146768625(void)

longlong FUN_146768625(void)

{
  if (DAT_14cc2d770 == 0) {
    FUN_14086a14e(&DAT_14cc2d770,&PTR_FUN_14beb9830);
  }
  return DAT_14cc2d770;
}



// FUNCTION 146768654 FUN_146768654 body=48 status=ok
// SIG undefined FUN_146768654(void)

void FUN_146768654(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14beba9e0;
  return;
}



// FUNCTION 146768684 FUN_146768684 body=55 status=ok
// SIG undefined FUN_146768684(void)

void FUN_146768684(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d790 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d790 = FUN_140002ddd(FUN_1467686bb,uVar1,L"PBIKEffector");
  }
  return;
}



// FUNCTION 1467686bb FUN_1467686bb body=47 status=ok
// SIG undefined FUN_1467686bb(void)

longlong FUN_1467686bb(void)

{
  if (DAT_14cc2d788 == 0) {
    FUN_14086a14e(&DAT_14cc2d788,&PTR_FUN_14beb9ae0);
  }
  return DAT_14cc2d788;
}



// FUNCTION 1467686ea FUN_1467686ea body=48 status=ok
// SIG undefined FUN_1467686ea(void)

void FUN_1467686ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14bebab40;
  return;
}



// FUNCTION 14676871a FUN_14676871a body=55 status=ok
// SIG undefined FUN_14676871a(void)

void FUN_14676871a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d7a8 == 0) {
    uVar1 = FUN_141235ed7();
    DAT_14cc2d7a8 = FUN_140002ddd(FUN_146768751,uVar1,L"PBIKWorkData");
  }
  return;
}



// FUNCTION 146768751 FUN_146768751 body=47 status=ok
// SIG undefined FUN_146768751(void)

longlong FUN_146768751(void)

{
  if (DAT_14cc2d7a0 == 0) {
    FUN_14086a14e(&DAT_14cc2d7a0,&PTR_FUN_14beb9d78);
  }
  return DAT_14cc2d7a0;
}



// FUNCTION 146768780 FUN_146768780 body=48 status=ok
// SIG undefined FUN_146768780(void)

void FUN_146768780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14bebacb0;
  return;
}



// FUNCTION 1467687b0 FUN_1467687b0 body=922 status=ok
// SIG undefined FUN_1467687b0(void)

longlong FUN_1467687b0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d7c0 == 0) {
    uVar4 = FUN_141235ed7();
    DAT_14cc2d7c0 = FUN_140002ddd(FUN_146768b4b,uVar4,L"RigUnit_PBIK");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Root";
    local_58[1] = L"FName";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Effectors";
    local_58[lVar6 * 7 + 1] = L"TArray<FPBIKEffector>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"EffectorSolverIndices";
    local_58[lVar6 * 7 + 1] = L"TArray<int32>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"BoneSettings";
    local_58[lVar6 * 7 + 1] = L"TArray<FPBIKBoneSetting>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"ExcludedBones";
    local_58[lVar6 * 7 + 1] = L"TArray<FName>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Settings";
    local_58[lVar6 * 7 + 1] = L"FPBIKSolverSettings";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Debug";
    local_58[lVar6 * 7 + 1] = L"FPBIKDebug";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FPBIKWorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2d7c0;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_PBIK::Execute",FUN_149860b90,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2d7c0;
}



// FUNCTION 146768b4b FUN_146768b4b body=47 status=ok
// SIG undefined FUN_146768b4b(void)

longlong FUN_146768b4b(void)

{
  if (DAT_14cc2d7b8 == 0) {
    FUN_14086a14e(&DAT_14cc2d7b8,&PTR_FUN_14beba290);
  }
  return DAT_14cc2d7b8;
}



// FUNCTION 146768b7a FUN_146768b7a body=48 status=ok
// SIG undefined FUN_146768b7a(void)

void FUN_146768b7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000300;
  *puVar1 = &PTR_FUN_14bebae10;
  return;
}



// FUNCTION 146768baa FUN_146768baa body=34 status=ok
// SIG undefined FUN_146768baa(void)

undefined8 FUN_146768baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768bcc FUN_146768bcc body=34 status=ok
// SIG undefined FUN_146768bcc(void)

undefined8 FUN_146768bcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768bee FUN_146768bee body=34 status=ok
// SIG undefined FUN_146768bee(void)

undefined8 FUN_146768bee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768c10 FUN_146768c10 body=34 status=ok
// SIG undefined FUN_146768c10(void)

undefined8 FUN_146768c10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768c32 FUN_146768c32 body=34 status=ok
// SIG undefined FUN_146768c32(void)

undefined8 FUN_146768c32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768c54 FUN_146768c54 body=34 status=ok
// SIG undefined FUN_146768c54(void)

undefined8 FUN_146768c54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768c76 FUN_146768c76 body=34 status=ok
// SIG undefined FUN_146768c76(void)

undefined8 FUN_146768c76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768c98 FUN_146768c98 body=34 status=ok
// SIG undefined FUN_146768c98(void)

undefined8 FUN_146768c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146768cba FUN_146768cba body=93 status=ok
// SIG undefined FUN_146768cba(void)

void FUN_146768cba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bebb070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146768d18 FUN_146768d18 body=34 status=ok
// SIG undefined FUN_146768d18(void)

undefined8 FUN_146768d18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146768d3a FUN_146768d3a body=55 status=ok
// SIG undefined FUN_146768d3a(void)

void FUN_146768d3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d7d8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d7d8 = FUN_140002ddd(FUN_146768d71,uVar1,L"CurveRemapPair");
  }
  return;
}



// FUNCTION 146768d71 FUN_146768d71 body=47 status=ok
// SIG undefined FUN_146768d71(void)

longlong FUN_146768d71(void)

{
  if (DAT_14cc2d7d0 == 0) {
    FUN_14086a14e(&DAT_14cc2d7d0,&PTR_FUN_14bebb230);
  }
  return DAT_14cc2d7d0;
}



// FUNCTION 146768da0 FUN_146768da0 body=48 status=ok
// SIG undefined FUN_146768da0(void)

void FUN_146768da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14becc170;
  return;
}



// FUNCTION 146768dd0 FUN_146768dd0 body=72 status=ok
// SIG undefined FUN_146768dd0(void)

void FUN_146768dd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bebb7e0;
  *(undefined2 *)(puVar1 + 5) = 1;
  FUN_144757f48(puVar1,8);
  *puVar1 = &PTR_FUN_14bebb3f0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  return;
}



// FUNCTION 146768e18 FUN_146768e18 body=49 status=ok
// SIG undefined FUN_146768e18(void)

longlong FUN_146768e18(void)

{
  if (DAT_14cc2d808 == 0) {
    FUN_14073dd9a(&DAT_14cc2d808,&PTR_LAB_14bebb798);
  }
  return DAT_14cc2d808;
}



// FUNCTION 146768e49 FUN_146768e49 body=47 status=ok
// SIG undefined FUN_146768e49(void)

longlong FUN_146768e49(void)

{
  if (DAT_14cc2d7f0 == 0) {
    FUN_14073dd9a(&DAT_14cc2d7f0,&PTR_LAB_14bebb3a8);
  }
  return DAT_14cc2d7f0;
}



// FUNCTION 146768e78 FUN_146768e78 body=50 status=ok
// SIG undefined FUN_146768e78(void)

void FUN_146768e78(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bebb7e0;
  *(undefined2 *)(puVar1 + 5) = 1;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 146768eaf FUN_146768eaf body=42 status=ok
// SIG undefined FUN_146768eaf(void)

void FUN_146768eaf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bebbbb0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146768ede FUN_146768ede body=47 status=ok
// SIG undefined FUN_146768ede(void)

longlong FUN_146768ede(void)

{
  if (DAT_14cc2d820 == 0) {
    FUN_14073dd9a(&DAT_14cc2d820,&PTR_LAB_14bebbb68);
  }
  return DAT_14cc2d820;
}



// FUNCTION 146768f0e FUN_146768f0e body=55 status=ok
// SIG undefined FUN_146768f0e(void)

void FUN_146768f0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d838 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d838 = FUN_140002ddd(FUN_14190e7de,uVar1,L"RetargetProfile");
  }
  return;
}



// FUNCTION 146768f45 FUN_146768f45 body=49 status=ok
// SIG undefined FUN_146768f45(void)

longlong FUN_146768f45(void)

{
  if (DAT_14cc2dbc8 == 0) {
    FUN_14086a14e(&DAT_14cc2dbc8,&PTR_FUN_14bec4590);
  }
  return DAT_14cc2dbc8;
}



// FUNCTION 146768f76 FUN_146768f76 body=49 status=ok
// SIG undefined FUN_146768f76(void)

longlong FUN_146768f76(void)

{
  if (DAT_14cc2dbe0 == 0) {
    FUN_14086a14e(&DAT_14cc2dbe0,&PTR_FUN_14bec48e8);
  }
  return DAT_14cc2dbe0;
}



// FUNCTION 146768fa7 FUN_146768fa7 body=49 status=ok
// SIG undefined FUN_146768fa7(void)

longlong FUN_146768fa7(void)

{
  if (DAT_14cc2dc28 == 0) {
    FUN_14086a14e(&DAT_14cc2dc28,&PTR_FUN_14bec4ea0);
  }
  return DAT_14cc2dc28;
}



// FUNCTION 146768fd8 FUN_146768fd8 body=48 status=ok
// SIG undefined FUN_146768fd8(void)

void FUN_146768fd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000108;
  *puVar1 = &PTR_FUN_14becc2d0;
  return;
}



// FUNCTION 146769008 FUN_146769008 body=49 status=ok
// SIG undefined FUN_146769008(void)

longlong FUN_146769008(void)

{
  if (DAT_14cc2dc70 == 0) {
    FUN_14086a14e(&DAT_14cc2dc70,&PTR_FUN_14bec58b0);
  }
  return DAT_14cc2dc70;
}



// FUNCTION 146769039 FUN_146769039 body=47 status=ok
// SIG undefined FUN_146769039(void)

longlong FUN_146769039(void)

{
  if (DAT_14cc2d878 == 0) {
    FUN_14073dd9a(&DAT_14cc2d878,&PTR_LAB_14bebc570);
  }
  return DAT_14cc2d878;
}



// FUNCTION 146769068 FUN_146769068 body=47 status=ok
// SIG undefined FUN_146769068(void)

longlong FUN_146769068(void)

{
  if (DAT_14cc2d868 == 0) {
    FUN_14000fc22(&DAT_14cc2d868,&PTR_FUN_14bebc4b8);
  }
  return DAT_14cc2d868;
}



// FUNCTION 146769098 FUN_146769098 body=34 status=ok
// SIG undefined FUN_146769098(void)

void FUN_146769098(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459fd712();
  FUN_14069c8d6(uVar1,&PTR_s_AddIKGoals_14bebc500,1);
  return;
}



// FUNCTION 1467690ba FUN_1467690ba body=35 status=ok
// SIG undefined FUN_1467690ba(void)

void FUN_1467690ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bebc5b0;
  return;
}



// FUNCTION 1467690e2 FUN_1467690e2 body=47 status=ok
// SIG undefined FUN_1467690e2(void)

longlong FUN_1467690e2(void)

{
  if (DAT_14cc2d888 == 0) {
    FUN_1409ce572(&DAT_14cc2d888,&PTR_FUN_14bebc8d0);
  }
  return DAT_14cc2d888;
}



// FUNCTION 146769112 FUN_146769112 body=55 status=ok
// SIG undefined FUN_146769112(void)

void FUN_146769112(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d8a8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d8a8 = FUN_140002ddd(FUN_146769149,uVar1,L"PinBoneData");
  }
  return;
}



// FUNCTION 146769149 FUN_146769149 body=47 status=ok
// SIG undefined FUN_146769149(void)

longlong FUN_146769149(void)

{
  if (DAT_14cc2d8a0 == 0) {
    FUN_14086a14e(&DAT_14cc2d8a0,&PTR_FUN_14bebc9d0);
  }
  return DAT_14cc2d8a0;
}



// FUNCTION 146769178 FUN_146769178 body=48 status=ok
// SIG undefined FUN_146769178(void)

void FUN_146769178(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14becc4c0;
  return;
}



// FUNCTION 1467691a8 FUN_1467691a8 body=47 status=ok
// SIG undefined FUN_1467691a8(void)

longlong FUN_1467691a8(void)

{
  if (DAT_14cc2da80 == 0) {
    FUN_1409ce572(&DAT_14cc2da80,&PTR_FUN_14bebfc20);
  }
  return DAT_14cc2da80;
}



// FUNCTION 1467691d7 FUN_1467691d7 body=47 status=ok
// SIG undefined FUN_1467691d7(void)

longlong FUN_1467691d7(void)

{
  if (DAT_14cc2d8c0 == 0) {
    FUN_14073dd9a(&DAT_14cc2d8c0,&PTR_LAB_14bebccf8);
  }
  return DAT_14cc2d8c0;
}



// FUNCTION 146769206 FUN_146769206 body=47 status=ok
// SIG undefined FUN_146769206(void)

longlong FUN_146769206(void)

{
  if (DAT_14cc2d8d0 == 0) {
    FUN_1409ce572(&DAT_14cc2d8d0,&PTR_FUN_14bebd0a0);
  }
  return DAT_14cc2d8d0;
}



// FUNCTION 146769235 FUN_146769235 body=47 status=ok
// SIG undefined FUN_146769235(void)

longlong FUN_146769235(void)

{
  if (DAT_14cc2d8e8 == 0) {
    FUN_1409ce572(&DAT_14cc2d8e8,&PTR_FUN_14bebd110);
  }
  return DAT_14cc2d8e8;
}



// FUNCTION 146769264 FUN_146769264 body=47 status=ok
// SIG undefined FUN_146769264(void)

longlong FUN_146769264(void)

{
  if (DAT_14cc2d908 == 0) {
    FUN_14073dd9a(&DAT_14cc2d908,&PTR_LAB_14bebd548);
  }
  return DAT_14cc2d908;
}


