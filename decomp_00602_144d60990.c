// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d60990 NVSDK_NGX_D3D11_GetParameters body=69 status=ok
// SIG undefined NVSDK_NGX_D3D11_GetParameters(void)

undefined8 NVSDK_NGX_D3D11_GetParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d60990  385  NVSDK_NGX_D3D11_GetParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791750;
  if (DAT_14c791750 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791750);
                    /* WARNING: Could not recover jumptable at 0x000144d609d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d609e0 NVSDK_NGX_D3D11_AllocateParameters body=91 status=ok
// SIG undefined NVSDK_NGX_D3D11_AllocateParameters(void)

undefined8 NVSDK_NGX_D3D11_AllocateParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d609e0  378  NVSDK_NGX_D3D11_AllocateParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791778;
  if (DAT_14c791720 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791778 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791778);
                    /* WARNING: Could not recover jumptable at 0x000144d60a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d60a40 NVSDK_NGX_D3D11_GetCapabilityParameters body=91 status=ok
// SIG undefined NVSDK_NGX_D3D11_GetCapabilityParameters(void)

undefined8 NVSDK_NGX_D3D11_GetCapabilityParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d60a40  383  NVSDK_NGX_D3D11_GetCapabilityParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791780;
  if (DAT_14c791720 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791780 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791780);
                    /* WARNING: Could not recover jumptable at 0x000144d60a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d60aa0 NVSDK_NGX_D3D11_DestroyParameters body=91 status=ok
// SIG undefined NVSDK_NGX_D3D11_DestroyParameters(void)

undefined8 NVSDK_NGX_D3D11_DestroyParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d60aa0  380  NVSDK_NGX_D3D11_DestroyParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791788;
  if (DAT_14c791720 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791788 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791788);
                    /* WARNING: Could not recover jumptable at 0x000144d60af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d60b00 NVSDK_NGX_D3D11_GetScratchBufferSize body=87 status=ok
// SIG undefined NVSDK_NGX_D3D11_GetScratchBufferSize(void)

undefined8
NVSDK_NGX_D3D11_GetScratchBufferSize(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d60b00  386  NVSDK_NGX_D3D11_GetScratchBufferSize */
  pcVar1 = DAT_14c791748;
  if (DAT_14c791748 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c791748);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}



// FUNCTION 144d60b60 NVSDK_NGX_D3D11_CreateFeature body=118 status=ok
// SIG undefined NVSDK_NGX_D3D11_CreateFeature(void)

undefined8
NVSDK_NGX_D3D11_CreateFeature
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d60b60  379  NVSDK_NGX_D3D11_CreateFeature */
  if (DAT_14c791758 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    FUN_144d60dc0(param_3);
    pcVar1 = DAT_14c791758;
    _guard_check_icall(DAT_14c791758);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d60be0 NVSDK_NGX_D3D11_ReleaseFeature body=69 status=ok
// SIG undefined NVSDK_NGX_D3D11_ReleaseFeature(void)

undefined8 NVSDK_NGX_D3D11_ReleaseFeature(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d60be0  387  NVSDK_NGX_D3D11_ReleaseFeature */
  UNRECOVERED_JUMPTABLE = DAT_14c791768;
  if (DAT_14c791768 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791768);
                    /* WARNING: Could not recover jumptable at 0x000144d60c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d60c30 NVSDK_NGX_D3D11_GetFeatureRequirements body=201 status=ok
// SIG undefined NVSDK_NGX_D3D11_GetFeatureRequirements(void)

void NVSDK_NGX_D3D11_GetFeatureRequirements(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  FARPROC pFVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158 [296];
  undefined8 local_30;
  ulonglong local_28;
  
                    /* 0x4d60c30  384  NVSDK_NGX_D3D11_GetFeatureRequirements */
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pFVar3 = DAT_14c791770;
  if (DAT_14c7916f0 == (HMODULE)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall(pcVar1);
    iVar2 = (*pcVar1)(param_1,local_158);
    if ((iVar2 != 0) ||
       (DAT_14c7916f0 = (HMODULE)FUN_144d62bd0(local_30), DAT_14c7916f0 == (HMODULE)0x0))
    goto LAB_144d60ce9;
    pFVar3 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_GetFeatureRequirements");
  }
  if (pFVar3 != (FARPROC)0x0) {
    DAT_14c791770 = pFVar3;
    _guard_check_icall(pFVar3);
    (*pFVar3)(param_1,param_2,param_3);
  }
LAB_144d60ce9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_178);
}



// FUNCTION 144d60d10 NVSDK_NGX_D3D11_EvaluateFeature body=107 status=ok
// SIG undefined NVSDK_NGX_D3D11_EvaluateFeature(void)

undefined8
NVSDK_NGX_D3D11_EvaluateFeature
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d60d10  381  NVSDK_NGX_D3D11_EvaluateFeature */
  pcVar1 = DAT_14c791760;
  if (DAT_14c791760 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c791760);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d60d80 NVSDK_NGX_D3D11_EvaluateFeature_C body=53 status=ok
// SIG undefined NVSDK_NGX_D3D11_EvaluateFeature_C(void)

undefined8
NVSDK_NGX_D3D11_EvaluateFeature_C
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
                    /* 0x4d60d80  382  NVSDK_NGX_D3D11_EvaluateFeature_C */
  if (DAT_14c791760 == 0) {
    return 0xbad00007;
  }
  uVar1 = FUN_144d616d0(DAT_14c791760,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 144d60dc0 FUN_144d60dc0 body=643 status=ok
// SIG undefined FUN_144d60dc0(void)

void FUN_144d60dc0(undefined8 param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Quality",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Performance",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",local_res10)
  ;
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Quality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Balanced",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Performance",0x80000002)
    ;
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",0x80000002);
  }
  return;
}



// FUNCTION 144d61050 FUN_144d61050 body=87 status=ok
// SIG undefined FUN_144d61050(void)

void FUN_144d61050(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x108);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(pcVar1);
    (*pcVar1)(param_1,param_2);
  }
  return;
}



// FUNCTION 144d610b0 FUN_144d610b0 body=429 status=ok
// SIG undefined FUN_144d610b0(void)

void FUN_144d610b0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  undefined1 local_158 [296];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pcVar1 = *(code **)*param_1;
  _guard_check_icall(pcVar1);
  iVar3 = (*pcVar1)(param_1,&DAT_14a345190,&local_168);
  plVar2 = local_168;
  if (iVar3 < 0) {
    FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                  ,0x5e,"GetLUIDFromD3D11Device","error: unable to query DXGI Device");
  }
  else {
    pcVar1 = *(code **)(*local_168 + 0x38);
    _guard_check_icall(pcVar1);
    iVar3 = (*pcVar1)(plVar2,&local_160);
    plVar2 = local_160;
    if (iVar3 < 0) {
      pcVar1 = *(code **)(*local_168 + 0x10);
      _guard_check_icall(pcVar1);
      (*pcVar1)(local_168);
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                    ,0x67,"GetLUIDFromD3D11Device","error: unable to get DXGI adapter");
    }
    else {
      pcVar1 = *(code **)(*local_160 + 0x40);
      _guard_check_icall(pcVar1);
      iVar3 = (*pcVar1)(plVar2,local_158);
      if (iVar3 < 0) {
        pcVar1 = *(code **)(*local_160 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(local_160);
        pcVar1 = *(code **)(*local_168 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(local_168);
        FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_d3d11_lib.cpp"
                      ,0x71,"GetLUIDFromD3D11Device",
                      "error: unable to get descriptor for DXGI Adapter");
      }
      else {
        *param_2 = local_30;
        pcVar1 = *(code **)(*local_160 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(local_160);
        pcVar1 = *(code **)(*local_168 + 0x10);
        _guard_check_icall(pcVar1);
        (*pcVar1)(local_168);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_188);
}



// FUNCTION 144d61270 FUN_144d61270 body=1118 status=ok
// SIG undefined FUN_144d61270(void)

undefined8 FUN_144d61270(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_res18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined *local_20;
  
  local_28 = 0xfffffffffffffffe;
  local_20 = &DAT_14c7916f8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7916f8);
  if ((param_3 == 0) || (param_4 < 0x14)) {
    cVar1 = '\0';
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    cVar1 = *(char *)(param_3 + 0x24);
    if (((cVar1 != '\0') && (*(longlong *)(param_3 + 0x18) == 0)) ||
       (uVar4 = *(uint *)(param_3 + 0x20), 2 < uVar4)) {
      uVar3 = 0xbad00005;
      goto LAB_144d616a6;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x18);
  }
  cVar1 = FUN_145140ae0(param_1,L"/nvsdk_ngx.log",uVar4,uVar3,cVar1);
  if (cVar1 == '\0') {
    uVar3 = 0xbad0000f;
    goto LAB_144d616a6;
  }
  if (((((DAT_14c791720 == (FARPROC)0x0) && (DAT_14c791728 == (FARPROC)0x0)) ||
       ((DAT_14c791738 == (FARPROC)0x0 && (DAT_14c791740 == (FARPROC)0x0)))) ||
      ((DAT_14c791750 == (FARPROC)0x0 && (DAT_14c791780 == (FARPROC)0x0)))) ||
     ((DAT_14c791758 == (FARPROC)0x0 ||
      ((DAT_14c791760 == (FARPROC)0x0 || (DAT_14c791768 == (FARPROC)0x0)))))) {
    memset(&local_98,0,0x70);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    DAT_14c791720 = (FARPROC)0x0;
    DAT_14c791728 = (FARPROC)0x0;
    DAT_14c791730 = (FARPROC)0x0;
    DAT_14c791738 = (FARPROC)0x0;
    DAT_14c791740 = (FARPROC)0x0;
    DAT_14c791748 = (FARPROC)0x0;
    DAT_14c791750 = (FARPROC)0x0;
    DAT_14c791758 = (FARPROC)0x0;
    DAT_14c791760 = (FARPROC)0x0;
    DAT_14c791768 = (FARPROC)0x0;
    DAT_14c791770 = (FARPROC)0x0;
    DAT_14c791778 = (FARPROC)0x0;
    DAT_14c791780 = (FARPROC)0x0;
    DAT_14c791788 = (FARPROC)0x0;
    iVar2 = FUN_144d610b0(param_2);
    if (iVar2 < 0) {
      uVar3 = 0xbad00002;
      goto LAB_144d616a6;
    }
    if (DAT_14c7916f0 == (HMODULE)0x0) {
      DAT_14c7916f0 = (HMODULE)FUN_144d62bd0(local_res18);
      if (DAT_14c7916f0 != (HMODULE)0x0) goto LAB_144d61450;
    }
    else {
LAB_144d61450:
      DAT_14c791720 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_Init");
      DAT_14c791728 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_Init_Ext");
      DAT_14c791730 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_Init_ProjectID");
      DAT_14c791738 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_Shutdown");
      DAT_14c791740 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_Shutdown1");
      DAT_14c791750 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_GetParameters");
      DAT_14c791748 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_GetScratchBufferSize");
      DAT_14c791758 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_CreateFeature");
      DAT_14c791760 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_EvaluateFeature");
      DAT_14c791768 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_ReleaseFeature");
      DAT_14c791770 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_GetFeatureRequirements");
      DAT_14c791778 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_AllocateParameters");
      DAT_14c791780 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_GetCapabilityParameters");
      DAT_14c791788 = GetProcAddress(DAT_14c7916f0,"NVSDK_NGX_D3D11_DestroyParameters");
    }
    if ((((DAT_14c791720 == (FARPROC)0x0) && (DAT_14c791728 == (FARPROC)0x0)) ||
        ((DAT_14c791738 == (FARPROC)0x0 && (DAT_14c791740 == (FARPROC)0x0)))) ||
       ((((DAT_14c791750 == (FARPROC)0x0 && (DAT_14c791780 == (FARPROC)0x0)) ||
         (DAT_14c791758 == (FARPROC)0x0)) ||
        ((DAT_14c791760 == (FARPROC)0x0 || (DAT_14c791768 == (FARPROC)0x0)))))) {
      memset(&local_98,0,0x70);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      DAT_14c791720 = (FARPROC)0x0;
      DAT_14c791728 = (FARPROC)0x0;
      DAT_14c791730 = (FARPROC)0x0;
      DAT_14c791738 = (FARPROC)0x0;
      DAT_14c791740 = (FARPROC)0x0;
      DAT_14c791748 = (FARPROC)0x0;
      DAT_14c791750 = (FARPROC)0x0;
      DAT_14c791758 = (FARPROC)0x0;
      DAT_14c791760 = (FARPROC)0x0;
      DAT_14c791768 = (FARPROC)0x0;
      DAT_14c791770 = (FARPROC)0x0;
      DAT_14c791778 = (FARPROC)0x0;
      DAT_14c791780 = (FARPROC)0x0;
      DAT_14c791788 = (FARPROC)0x0;
      uVar3 = 0xbad00001;
      goto LAB_144d616a6;
    }
  }
  uVar3 = 1;
LAB_144d616a6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7916f8);
  return uVar3;
}



// FUNCTION 144d616d0 FUN_144d616d0 body=144 status=ok
// SIG undefined FUN_144d616d0(void)

void FUN_144d616d0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  code *pcVar1;
  longlong *plVar2;
  
  pcVar1 = (code *)0x0;
  plVar2 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x108);
  if (param_5 != 0) {
    pcVar1 = FUN_144d61050;
  }
  *plVar2 = param_5;
  _guard_check_icall(param_1);
  (*param_1)(param_2,param_3,param_4,pcVar1);
  *plVar2 = 0;
  return;
}



// FUNCTION 144d61760 FUN_144d61760 body=284 status=ok
// SIG undefined FUN_144d61760(void)

undefined8
FUN_144d61760(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined2 local_38 [4];
  longlong local_30;
  undefined8 uStack_28;
  undefined2 *local_20;
  longlong lStack_18;
  ulonglong local_10;
  
  uVar3 = FUN_144d62190(param_2,param_3,param_4,param_5);
  pcVar2 = DAT_14c7917d8;
  pcVar1 = DAT_14c7917d0;
  if ((int)uVar3 == 1) {
    if (DAT_14c7917d8 == (code *)0x0) {
      if (((param_4 == (longlong *)0x0) || (*param_4 == 0)) || ((int)param_4[1] == 0)) {
        _guard_check_icall(DAT_14c7917d0);
        uVar3 = (*pcVar1)(param_1,param_2,param_3,param_5);
      }
      else {
        uVar3 = 0xbad0000c;
      }
    }
    else {
      local_38[0] = 0;
      if (param_4 == (longlong *)0x0) {
        local_30 = 0;
        uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
        lStack_18 = 0;
        local_10 = local_10 & 0xffffff0000000000;
      }
      else {
        local_30 = *param_4;
        uStack_28 = param_4[1];
        lStack_18 = param_4[3];
        local_10 = param_4[4];
      }
      local_20 = local_38;
      _guard_check_icall(DAT_14c7917d8);
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_5,&local_30);
    }
  }
  return uVar3;
}



// FUNCTION 144d61880 FUN_144d61880 body=263 status=ok
// SIG undefined FUN_144d61880(void)

undefined8
FUN_144d61880(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined2 local_58 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  uVar2 = FUN_144d62190(param_4,param_5,param_6,param_7);
  pcVar1 = DAT_14c7917e0;
  if ((int)uVar2 == 1) {
    if (DAT_14c7917e0 == (code *)0x0) {
      uVar2 = 0xbad0000c;
    }
    else {
      local_58[0] = 0;
      if (param_6 == (undefined8 *)0x0) {
        local_50 = 0;
        uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
        uStack_38 = 0;
        local_30 = local_30 & 0xffffff0000000000;
      }
      else {
        local_50 = *param_6;
        uStack_48 = param_6[1];
        uStack_38 = param_6[3];
        local_30 = param_6[4];
      }
      local_40 = local_58;
      _guard_check_icall(DAT_14c7917e0);
      uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_7,&local_50);
    }
  }
  return uVar2;
}



// FUNCTION 144d61990 NVSDK_NGX_D3D12_Shutdown body=7 status=ok
// SIG undefined NVSDK_NGX_D3D12_Shutdown(void)

void NVSDK_NGX_D3D12_Shutdown(void)

{
                    /* 0x4d61990  400  NVSDK_NGX_D3D12_Shutdown */
  NVSDK_NGX_D3D12_Shutdown1(0);
  return;
}



// FUNCTION 144d619a0 NVSDK_NGX_D3D12_Shutdown1 body=362 status=ok
// SIG undefined NVSDK_NGX_D3D12_Shutdown1(void)

int NVSDK_NGX_D3D12_Shutdown1(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* 0x4d619a0  401  NVSDK_NGX_D3D12_Shutdown1 */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7917a0);
  pcVar2 = DAT_14c7917f0;
  pcVar1 = DAT_14c7917e8;
  if (param_1 == 0) {
    if (DAT_14c7917e8 == (code *)0x0) {
      if (DAT_14c7917f0 == (code *)0x0) goto LAB_144d61add;
      _guard_check_icall(DAT_14c7917f0);
      param_1 = 0;
      goto LAB_144d61a28;
    }
    _guard_check_icall(DAT_14c7917e8);
    iVar3 = (*pcVar1)();
  }
  else {
    if (DAT_14c7917f0 == (code *)0x0) {
LAB_144d61add:
      iVar3 = -0x452ffff9;
      goto LAB_144d61ae2;
    }
    _guard_check_icall(DAT_14c7917f0);
LAB_144d61a28:
    iVar3 = (*pcVar2)(param_1);
  }
  if (iVar3 == 1) {
    FUN_145140ad0();
    memset(&local_78,0,0x70);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    DAT_14c7917d0 = 0;
    DAT_14c7917d8 = 0;
    DAT_14c7917e0 = 0;
    DAT_14c7917e8 = (code *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    DAT_14c7917f0 = (code *)0x0;
    DAT_14c7917f8 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    DAT_14c791810 = 0;
    DAT_14c791818 = 0;
    local_18 = 0;
    uStack_10 = 0;
    DAT_14c791800 = 0;
    DAT_14c791808 = 0;
    DAT_14c791830._0_4_ = 0;
    DAT_14c791830._4_4_ = 0;
    DAT_14c791838._0_4_ = 0;
    DAT_14c791838._4_4_ = 0;
    DAT_14c791820 = 0;
    DAT_14c791828 = 0;
  }
LAB_144d61ae2:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7917a0);
  return iVar3;
}



// FUNCTION 144d61b10 NVSDK_NGX_D3D12_GetParameters body=69 status=ok
// SIG undefined NVSDK_NGX_D3D12_GetParameters(void)

undefined8 NVSDK_NGX_D3D12_GetParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d61b10  397  NVSDK_NGX_D3D12_GetParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791800;
  if (DAT_14c791800 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791800);
                    /* WARNING: Could not recover jumptable at 0x000144d61b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d61b60 NVSDK_NGX_D3D12_AllocateParameters body=91 status=ok
// SIG undefined NVSDK_NGX_D3D12_AllocateParameters(void)

undefined8 NVSDK_NGX_D3D12_AllocateParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d61b60  390  NVSDK_NGX_D3D12_AllocateParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791828;
  if (DAT_14c7917d0 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791828 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791828);
                    /* WARNING: Could not recover jumptable at 0x000144d61bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d61bc0 NVSDK_NGX_D3D12_GetCapabilityParameters body=170 status=ok
// SIG undefined NVSDK_NGX_D3D12_GetCapabilityParameters(void)

undefined8 NVSDK_NGX_D3D12_GetCapabilityParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d61bc0  395  NVSDK_NGX_D3D12_GetCapabilityParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791830;
  if ((((DAT_14c7917d0 != 0) || (DAT_14c7917d8 != 0)) &&
      ((DAT_14c7917e8 != 0 || (DAT_14c7917f0 != 0)))) &&
     ((((DAT_14c791800 != 0 || (DAT_14c791830 != (code *)0x0)) && (DAT_14c791808 != 0)) &&
      ((DAT_14c791810 != 0 && (DAT_14c791818 != 0)))))) {
    if (DAT_14c791830 == (code *)0x0) {
      return 0xbad0000c;
    }
    _guard_check_icall(DAT_14c791830);
                    /* WARNING: Could not recover jumptable at 0x000144d61c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 0xbad00007;
}



// FUNCTION 144d61c70 NVSDK_NGX_D3D12_GetScratchBufferSize body=87 status=ok
// SIG undefined NVSDK_NGX_D3D12_GetScratchBufferSize(void)

undefined8
NVSDK_NGX_D3D12_GetScratchBufferSize(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d61c70  398  NVSDK_NGX_D3D12_GetScratchBufferSize */
  pcVar1 = DAT_14c7917f8;
  if (DAT_14c7917f8 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c7917f8);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}



// FUNCTION 144d61cd0 NVSDK_NGX_D3D12_CreateFeature body=118 status=ok
// SIG undefined NVSDK_NGX_D3D12_CreateFeature(void)

undefined8
NVSDK_NGX_D3D12_CreateFeature
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d61cd0  391  NVSDK_NGX_D3D12_CreateFeature */
  if (DAT_14c791808 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    FUN_144d61f00(param_3);
    pcVar1 = DAT_14c791808;
    _guard_check_icall(DAT_14c791808);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d61d50 NVSDK_NGX_D3D12_GetFeatureRequirements body=234 status=ok
// SIG undefined NVSDK_NGX_D3D12_GetFeatureRequirements(void)

void NVSDK_NGX_D3D12_GetFeatureRequirements(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  FARPROC pFVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158 [296];
  undefined8 local_30;
  ulonglong local_28;
  
                    /* 0x4d61d50  396  NVSDK_NGX_D3D12_GetFeatureRequirements */
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (DAT_14c791798 == '\0') {
    pFVar3 = DAT_14c791820;
    if (DAT_14c791790 == (HMODULE)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x40);
      _guard_check_icall(pcVar1);
      iVar2 = (*pcVar1)(param_1,local_158);
      if ((iVar2 != 0) ||
         (DAT_14c791790 = (HMODULE)FUN_144d62bd0(local_30), DAT_14c791790 == (HMODULE)0x0))
      goto LAB_144d61e17;
      pFVar3 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_GetFeatureRequirements");
    }
    if (pFVar3 != (FARPROC)0x0) {
      DAT_14c791820 = pFVar3;
      _guard_check_icall(pFVar3);
      (*pFVar3)(param_1,param_2,param_3);
    }
  }
LAB_144d61e17:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_178);
}



// FUNCTION 144d61e50 NVSDK_NGX_D3D12_EvaluateFeature body=107 status=ok
// SIG undefined NVSDK_NGX_D3D12_EvaluateFeature(void)

undefined8
NVSDK_NGX_D3D12_EvaluateFeature
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d61e50  393  NVSDK_NGX_D3D12_EvaluateFeature */
  pcVar1 = DAT_14c791810;
  if (DAT_14c791810 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c791810);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d61ec0 NVSDK_NGX_D3D12_EvaluateFeature_C body=53 status=ok
// SIG undefined NVSDK_NGX_D3D12_EvaluateFeature_C(void)

undefined8
NVSDK_NGX_D3D12_EvaluateFeature_C
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
                    /* 0x4d61ec0  394  NVSDK_NGX_D3D12_EvaluateFeature_C */
  if (DAT_14c791810 == 0) {
    return 0xbad00007;
  }
  uVar1 = FUN_144d62600(DAT_14c791810,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 144d61f00 FUN_144d61f00 body=643 status=ok
// SIG undefined FUN_144d61f00(void)

void FUN_144d61f00(undefined8 param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Quality",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Performance",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",local_res10)
  ;
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Quality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Balanced",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Performance",0x80000002)
    ;
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",0x80000002);
  }
  return;
}



// FUNCTION 144d62190 FUN_144d62190 body=1121 status=ok
// SIG undefined FUN_144d62190(void)

undefined8 FUN_144d62190(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_res18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined *local_20;
  
  local_28 = 0xfffffffffffffffe;
  local_20 = &DAT_14c7917a0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7917a0);
  if ((param_3 == 0) || (param_4 < 0x14)) {
    cVar2 = '\0';
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    cVar2 = *(char *)(param_3 + 0x24);
    if (((cVar2 != '\0') && (*(longlong *)(param_3 + 0x18) == 0)) ||
       (uVar4 = *(uint *)(param_3 + 0x20), 2 < uVar4)) {
      uVar3 = 0xbad00005;
      goto LAB_144d625c9;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x18);
  }
  cVar2 = FUN_145140ae0(param_1,L"/nvsdk_ngx.log",uVar4,uVar3,cVar2);
  if (cVar2 == '\0') {
    uVar3 = 0xbad0000f;
    goto LAB_144d625c9;
  }
  if (((((DAT_14c7917d0 == (FARPROC)0x0) && (DAT_14c7917d8 == (FARPROC)0x0)) ||
       ((DAT_14c7917e8 == (FARPROC)0x0 && (DAT_14c7917f0 == (FARPROC)0x0)))) ||
      ((DAT_14c791800 == (FARPROC)0x0 && (DAT_14c791830 == (FARPROC)0x0)))) ||
     ((DAT_14c791808 == (FARPROC)0x0 ||
      ((DAT_14c791810 == (FARPROC)0x0 || (DAT_14c791818 == (FARPROC)0x0)))))) {
    memset(&local_98,0,0x70);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    DAT_14c7917d0 = (FARPROC)0x0;
    DAT_14c7917d8 = (FARPROC)0x0;
    DAT_14c7917e0 = (FARPROC)0x0;
    DAT_14c7917e8 = (FARPROC)0x0;
    DAT_14c7917f0 = (FARPROC)0x0;
    DAT_14c7917f8 = (FARPROC)0x0;
    DAT_14c791800 = (FARPROC)0x0;
    DAT_14c791808 = (FARPROC)0x0;
    DAT_14c791810 = (FARPROC)0x0;
    DAT_14c791818 = (FARPROC)0x0;
    DAT_14c791820 = (FARPROC)0x0;
    DAT_14c791828 = (FARPROC)0x0;
    DAT_14c791830 = (FARPROC)0x0;
    DAT_14c791838 = (FARPROC)0x0;
    pcVar1 = *(code **)(*param_2 + 0x158);
    _guard_check_icall(pcVar1);
    (*pcVar1)(param_2);
    if (DAT_14c791790 == (HMODULE)0x0) {
      DAT_14c791790 = (HMODULE)FUN_144d62bd0(local_res18);
      if (DAT_14c791790 != (HMODULE)0x0) goto LAB_144d62373;
    }
    else {
LAB_144d62373:
      DAT_14c7917d0 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_Init");
      DAT_14c7917d8 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_Init_Ext");
      DAT_14c7917e0 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_Init_ProjectID");
      DAT_14c7917e8 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_Shutdown");
      DAT_14c7917f0 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_Shutdown1");
      DAT_14c791800 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_GetParameters");
      DAT_14c7917f8 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_GetScratchBufferSize");
      DAT_14c791808 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_CreateFeature");
      DAT_14c791810 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_EvaluateFeature");
      DAT_14c791818 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_ReleaseFeature");
      DAT_14c791820 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_GetFeatureRequirements");
      DAT_14c791828 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_AllocateParameters");
      DAT_14c791830 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_GetCapabilityParameters");
      DAT_14c791838 = GetProcAddress(DAT_14c791790,"NVSDK_NGX_D3D12_DestroyParameters");
    }
    if ((((DAT_14c7917d0 == (FARPROC)0x0) && (DAT_14c7917d8 == (FARPROC)0x0)) ||
        ((DAT_14c7917e8 == (FARPROC)0x0 && (DAT_14c7917f0 == (FARPROC)0x0)))) ||
       ((((DAT_14c791800 == (FARPROC)0x0 && (DAT_14c791830 == (FARPROC)0x0)) ||
         (DAT_14c791808 == (FARPROC)0x0)) ||
        ((DAT_14c791810 == (FARPROC)0x0 || (DAT_14c791818 == (FARPROC)0x0)))))) {
      memset(&local_98,0,0x70);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      DAT_14c7917d0 = (FARPROC)0x0;
      DAT_14c7917d8 = (FARPROC)0x0;
      DAT_14c7917e0 = (FARPROC)0x0;
      DAT_14c7917e8 = (FARPROC)0x0;
      DAT_14c7917f0 = (FARPROC)0x0;
      DAT_14c7917f8 = (FARPROC)0x0;
      DAT_14c791800 = (FARPROC)0x0;
      DAT_14c791808 = (FARPROC)0x0;
      DAT_14c791810 = (FARPROC)0x0;
      DAT_14c791818 = (FARPROC)0x0;
      DAT_14c791820 = (FARPROC)0x0;
      DAT_14c791828 = (FARPROC)0x0;
      DAT_14c791830 = (FARPROC)0x0;
      DAT_14c791838 = (FARPROC)0x0;
      uVar3 = 0xbad00001;
      goto LAB_144d625c9;
    }
  }
  uVar3 = 1;
LAB_144d625c9:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7917a0);
  return uVar3;
}



// FUNCTION 144d62600 FUN_144d62600 body=144 status=ok
// SIG undefined FUN_144d62600(void)

void FUN_144d62600(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  code *pcVar1;
  longlong *plVar2;
  
  pcVar1 = (code *)0x0;
  plVar2 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x108);
  if (param_5 != 0) {
    pcVar1 = FUN_144d61050;
  }
  *plVar2 = param_5;
  _guard_check_icall(param_1);
  (*param_1)(param_2,param_3,param_4,pcVar1);
  *plVar2 = 0;
  return;
}



// FUNCTION 144d62690 NVSDK_NGX_Parameter_SetULL body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetULL(void)

void NVSDK_NGX_Parameter_SetULL(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62690  416  NVSDK_NGX_Parameter_SetULL */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d626df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d626f0 NVSDK_NGX_Parameter_SetF body=80 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetF(void)

void NVSDK_NGX_Parameter_SetF(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d626f0  413  NVSDK_NGX_Parameter_SetF */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d6273d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62740 NVSDK_NGX_Parameter_SetD body=80 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetD(void)

void NVSDK_NGX_Parameter_SetD(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62740  410  NVSDK_NGX_Parameter_SetD */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d6278d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62790 NVSDK_NGX_Parameter_SetD3d11Resource body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetD3d11Resource(void)

void NVSDK_NGX_Parameter_SetD3d11Resource(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62790  411  NVSDK_NGX_Parameter_SetD3d11Resource */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d627df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d627f0 NVSDK_NGX_Parameter_SetD3d12Resource body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetD3d12Resource(void)

void NVSDK_NGX_Parameter_SetD3d12Resource(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d627f0  412  NVSDK_NGX_Parameter_SetD3d12Resource */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d6283f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62850 NVSDK_NGX_Parameter_SetVoidPointer body=81 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetVoidPointer(void)

void NVSDK_NGX_Parameter_SetVoidPointer(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62850  417  NVSDK_NGX_Parameter_SetVoidPointer */
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d6289e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d628b0 NVSDK_NGX_Parameter_GetULL body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetULL(void)

void NVSDK_NGX_Parameter_GetULL(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d628b0  408  NVSDK_NGX_Parameter_GetULL */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d628ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62910 NVSDK_NGX_Parameter_GetF body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetF(void)

void NVSDK_NGX_Parameter_GetF(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62910  405  NVSDK_NGX_Parameter_GetF */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d6295f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62970 NVSDK_NGX_Parameter_GetD body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetD(void)

void NVSDK_NGX_Parameter_GetD(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62970  402  NVSDK_NGX_Parameter_GetD */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d629bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d629d0 NVSDK_NGX_Parameter_GetUI body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetUI(void)

void NVSDK_NGX_Parameter_GetUI(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d629d0  407  NVSDK_NGX_Parameter_GetUI */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x60);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d62a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62a30 NVSDK_NGX_Parameter_GetI body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetI(void)

void NVSDK_NGX_Parameter_GetI(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62a30  406  NVSDK_NGX_Parameter_GetI */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d62a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62a90 NVSDK_NGX_Parameter_GetD3d11Resource body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetD3d11Resource(void)

void NVSDK_NGX_Parameter_GetD3d11Resource(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62a90  403  NVSDK_NGX_Parameter_GetD3d11Resource */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d62adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62af0 NVSDK_NGX_Parameter_GetD3d12Resource body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetD3d12Resource(void)

void NVSDK_NGX_Parameter_GetD3d12Resource(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62af0  404  NVSDK_NGX_Parameter_GetD3d12Resource */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d62b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62b50 NVSDK_NGX_Parameter_GetVoidPointer body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_GetVoidPointer(void)

void NVSDK_NGX_Parameter_GetVoidPointer(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4d62b50  409  NVSDK_NGX_Parameter_GetVoidPointer */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144d62b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144d62bd0 FUN_144d62bd0 body=1727 status=ok
// SIG undefined FUN_144d62bd0(void)

void FUN_144d62bd0(undefined8 param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  LSTATUS LVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t **ppwVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_2a8 [32];
  wchar_t **local_278;
  wchar_t **ppwStack_270;
  wchar_t **local_268;
  wchar_t *local_260;
  HKEY local_258;
  undefined8 local_250;
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_250 = 0xfffffffffffffffe;
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_2a8;
  uVar7 = 0;
  local_278 = (wchar_t **)0x0;
  ppwStack_270 = (wchar_t **)0x0;
  local_268 = (wchar_t **)0x0;
  FUN_144d66240(&local_278,1);
  if (ppwStack_270 != (wchar_t **)0x0) {
    *ppwStack_270 = L"\\_nvngx.dll";
  }
  ppwStack_270 = ppwStack_270 + 1;
  local_260 = L"\\nvngx.dll";
  if ((&local_260 < ppwStack_270) && (local_278 <= &local_260)) {
    lVar6 = (longlong)&local_260 - (longlong)local_278;
    if ((ppwStack_270 == local_268) && ((longlong)local_268 - (longlong)ppwStack_270 >> 3 == 0)) {
      lVar8 = (longlong)ppwStack_270 - (longlong)local_278 >> 3;
      if (lVar8 == 0x1fffffffffffffff) {
        FUN_144d662d0(&local_278);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = lVar8 + 1;
      uVar12 = (longlong)local_268 - (longlong)local_278 >> 3;
      uVar11 = uVar7;
      if (uVar12 <= 0x1fffffffffffffff - (uVar12 >> 1)) {
        uVar11 = (uVar12 >> 1) + uVar12;
      }
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      FUN_144d66240(&local_278,uVar10);
    }
    if (ppwStack_270 != (wchar_t **)0x0) {
      *ppwStack_270 = local_278[lVar6 >> 3];
    }
  }
  else {
    if ((ppwStack_270 == local_268) && ((longlong)local_268 - (longlong)ppwStack_270 >> 3 == 0)) {
      lVar6 = (longlong)ppwStack_270 - (longlong)local_278 >> 3;
      if (lVar6 == 0x1fffffffffffffff) {
        FUN_144d662d0(&local_278);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = lVar6 + 1;
      uVar12 = (longlong)local_268 - (longlong)local_278 >> 3;
      uVar11 = uVar7;
      if (uVar12 <= 0x1fffffffffffffff - (uVar12 >> 1)) {
        uVar11 = (uVar12 >> 1) + uVar12;
      }
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      FUN_144d66240(&local_278,uVar10);
    }
    if (ppwStack_270 != (wchar_t **)0x0) {
      *ppwStack_270 = L"\\nvngx.dll";
    }
  }
  ppwStack_270 = ppwStack_270 + 1;
  DVar2 = GetModuleFileNameW((HMODULE)0x0,local_248,0x104);
  uVar10 = uVar7;
  if (DVar2 == 0) {
    FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                  ,0xce,"NGXLoadCoreLibrary","warning: unable to find filename for the application")
    ;
  }
  else {
    while (uVar10 < (ulonglong)((longlong)ppwStack_270 - (longlong)local_278 >> 3)) {
      pwVar5 = wcsrchr(local_248,L'\\');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      wcscat_s(local_248,0x104,local_278[uVar10]);
      lVar6 = FUN_144d63510(local_248,0,1);
      if (lVar6 != 0) {
        FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                      ,0x11b,"NGXLoadLibrary","Loaded NGXCore from path (%ls)");
        goto LAB_144d6320f;
      }
      GetLastError();
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                    ,0x11f,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)");
      uVar10 = uVar10 + 1;
    }
  }
  FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                ,0xd4,"NGXLoadCoreLibrary","NGXCore not found next to the application");
  iVar3 = FUN_144d65e10(param_1,local_248);
  if (iVar3 < 0) {
    FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                  ,0x24,"NGXGetPathFromRegistry","Trying registry key %ls in %ls");
    LVar4 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                          L"System\\CurrentControlSet\\Services\\nvlddmkm\\NGXCore",0,0x20019,
                          &local_258);
    if (LVar4 == 0) {
      local_260 = (wchar_t *)CONCAT44(local_260._4_4_,0x104);
      LVar4 = RegQueryValueExW(local_258,L"NGXPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_248,
                               (LPDWORD)&local_260);
      if (LVar4 == 0) {
        FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                      ,0x2b,"NGXGetPathFromRegistry","Found registry key %ls in %ls");
      }
      RegCloseKey(local_258);
    }
    if (LVar4 != 0) {
      FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                    ,0x24,"NGXGetPathFromRegistry","Trying registry key %ls in %ls");
      LVar4 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                            L"SOFTWARE\\NVIDIA Corporation\\Global\\NGXCore",0,0x20019,&local_258);
      if (LVar4 == 0) {
        local_260 = (wchar_t *)CONCAT44(local_260._4_4_,0x104);
        LVar4 = RegQueryValueExW(local_258,L"FullPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_248,
                                 (LPDWORD)&local_260);
        if (LVar4 == 0) {
          FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                        ,0x2b,"NGXGetPathFromRegistry","Found registry key %ls in %ls");
        }
        RegCloseKey(local_258);
      }
      if (LVar4 != 0) {
        FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                      ,0x105,"NGXLoadCoreLibrary",
                      "error: failed to locate NGX core path via registry key - error %ld");
        goto LAB_144d6320f;
      }
    }
  }
  if ((longlong)ppwStack_270 - (longlong)local_278 >> 3 != 0) {
    do {
      wcscat_s(local_248,0x104,local_278[uVar7]);
      lVar6 = FUN_144d63510(local_248,0,0);
      if (lVar6 != 0) {
        FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                      ,0x11b,"NGXLoadLibrary","Loaded NGXCore from path (%ls)");
        FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                      ,0xf0,"NGXLoadCoreLibrary","Loading %ls succeeded");
        goto LAB_144d6320f;
      }
      GetLastError();
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                    ,0x11f,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)");
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                    ,0xf5,"NGXLoadCoreLibrary","warning: failed to load %ls");
      pwVar5 = wcsrchr(local_248,L'\\');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)((longlong)ppwStack_270 - (longlong)local_278 >> 3));
  }
  FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                ,0x100,"NGXLoadCoreLibrary","error: failed to load nvngx");
LAB_144d6320f:
  if (local_278 != (wchar_t **)0x0) {
    uVar7 = (longlong)local_268 - (longlong)local_278 >> 3;
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    ppwVar9 = local_278;
    if (0xfff < uVar7 * 8) {
      if (((ulonglong)local_278 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      ppwVar9 = (wchar_t **)local_278[-1];
      if (local_278 <= ppwVar9) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)local_278 - (longlong)ppwVar9) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)local_278 - (longlong)ppwVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(ppwVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStackY_2a8);
}



// FUNCTION 144d632b0 FUN_144d632b0 body=161 status=ok
// SIG undefined FUN_144d632b0(void)

HMODULE FUN_144d632b0(LPCWSTR param_1,uint param_2)

{
  DWORD DVar1;
  HMODULE pHVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  if ((param_2 >> 0x13 & 1) == 0) {
    pHVar2 = LoadLibraryW(param_1);
  }
  else {
    pHVar2 = (HMODULE)FUN_144d63510(param_1,0,param_2 >> 0x12 & 1);
  }
  if (pHVar2 != (HMODULE)0x0) {
    FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                  ,0x11b,"NGXLoadLibrary","Loaded NGXCore from path (%ls)",param_1);
    return pHVar2;
  }
  DVar1 = GetLastError();
  FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                ,0x11f,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)",
                CONCAT44(uVar3,DVar1),param_1);
  return (HMODULE)0x0;
}



// FUNCTION 144d63360 FUN_144d63360 body=21 status=ok
// SIG undefined FUN_144d63360(void)

bool FUN_144d63360(HMODULE param_1)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary(param_1);
  return BVar1 == 1;
}



// FUNCTION 144d63380 GetProcAddress body=7 status=ok
// SIG FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144d63380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



// FUNCTION 144d63390 FUN_144d63390 body=150 status=ok
// SIG undefined FUN_144d63390(void)

int FUN_144d63390(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0x7ffffffe < param_2 - 1U) {
    iVar4 = -0x7ff8ffa9;
  }
  if (-1 < iVar4) {
    iVar4 = 0;
    if (param_2 != 0) {
      lVar3 = 0x7ffffffe - param_2;
      param_3 = param_3 - (longlong)param_1;
      psVar2 = param_1;
      while ((param_1 = psVar2, lVar3 + param_2 != 0 &&
             (sVar1 = *(short *)(param_3 + (longlong)param_1), sVar1 != 0))) {
        *param_1 = sVar1;
        param_2 = param_2 + -1;
        psVar2 = param_1 + 1;
        if (param_2 == 0) {
          *param_1 = 0;
          return -0x7ff8ff86;
        }
      }
      if (param_2 != 0) goto LAB_144d6341a;
    }
    param_1[-1] = 0;
    return -0x7ff8ff86;
  }
  if (param_2 == 0) {
    return iVar4;
  }
LAB_144d6341a:
  *param_1 = 0;
  return iVar4;
}



// FUNCTION 144d63430 FUN_144d63430 body=209 status=ok
// SIG undefined FUN_144d63430(void)

longlong FUN_144d63430(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar5 = lVar6;
  if (0x7ffffffe < param_2 - 1U) {
    lVar5 = 0x80070057;
  }
  lVar3 = lVar6;
  lVar4 = param_2;
  psVar2 = param_1;
  if (-1 < (int)lVar5) {
    for (; (lVar4 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      lVar4 = lVar4 + -1;
    }
    lVar5 = 0x80070057;
    if (lVar4 != 0) {
      lVar3 = param_2 - lVar4;
      lVar5 = lVar6;
    }
  }
  if (-1 < (int)lVar5) {
    param_1 = param_1 + lVar3;
    lVar5 = param_2 - lVar3;
    if (lVar5 != 0) {
      lVar4 = lVar3 + 0x7ffffffe + (lVar5 - param_2);
      param_3 = param_3 - (longlong)param_1;
      do {
        if ((lVar4 == 0) || (sVar1 = *(short *)(param_3 + (longlong)param_1), sVar1 == 0)) {
          if (lVar5 != 0) goto LAB_144d634f0;
          break;
        }
        *param_1 = sVar1;
        lVar4 = lVar4 + -1;
        param_1 = param_1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    param_1 = param_1 + -1;
    lVar6 = 0x8007007a;
LAB_144d634f0:
    *param_1 = 0;
    lVar5 = lVar6;
  }
  return lVar5;
}



// FUNCTION 144d63510 FUN_144d63510 body=389 status=ok
// SIG undefined FUN_144d63510(void)

HMODULE FUN_144d63510(LPCWSTR param_1,uint param_2,int param_3)

{
  WCHAR WVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hObject;
  HMODULE pHVar4;
  HMODULE pHVar5;
  HINSTANCE__ local_res8 [2];
  
  pHVar4 = (HMODULE)0x0;
  SetLastError(0);
  if ((param_1 == (LPCWSTR)0x0) ||
     (((WVar1 = *param_1, WVar1 != L'\\' && (WVar1 != L'/')) &&
      (((iVar2 = isalpha((uint)(ushort)WVar1), iVar2 == 0 || (param_1[1] != L':')) ||
       ((param_1[2] != L'/' && (param_1[2] != L'\\')))))))) {
    SetLastError(0xa0);
    return (HMODULE)0x0;
  }
  DVar3 = GetFileAttributesW(param_1);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x50) != 0)) {
    SetLastError(0x7e);
    return (HMODULE)0x0;
  }
  hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    DVar3 = 0x20;
  }
  else {
    local_res8[0].unused = 0;
    pHVar5 = local_res8;
    if (param_3 == 0) {
      pHVar5 = pHVar4;
    }
    iVar2 = FUN_144d636a0(param_1,pHVar5);
    if (iVar2 != 0) {
      if ((param_3 == 0) || (local_res8[0].unused != 0)) {
        pHVar4 = LoadLibraryExW(param_1,(HANDLE)0x0,param_2 & 0xffffe8f7);
      }
      else {
        SetLastError(0x80092009);
      }
    }
    if (hObject != (HANDLE)0x0) {
      DVar3 = GetLastError();
      CloseHandle(hObject);
      SetLastError(DVar3);
    }
    if (pHVar4 == (HMODULE)0x0) {
      return (HMODULE)0x0;
    }
    DVar3 = 0;
  }
  SetLastError(DVar3);
  return pHVar4;
}



// FUNCTION 144d636a0 FUN_144d636a0 body=689 status=ok
// SIG undefined FUN_144d636a0(void)

int FUN_144d636a0(LPCWSTR param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  DWORD dwErrCode;
  uint uVar6;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  LPCWSTR local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88 [6];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  uint local_40;
  undefined8 *local_38;
  
  dwErrCode = 0;
  iVar5 = 0;
  local_d8[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  DVar3 = GetFileAttributesW(param_1);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x50) != 0)) {
    dwErrCode = 2;
  }
  else {
    iVar4 = FUN_144d658c0();
    if (iVar4 == 1) {
      iVar5 = FUN_144d63d70(0x23f0);
      if (((iVar5 == 0) && (iVar5 = FUN_144d63b90(param_1), iVar5 != 0)) &&
         (iVar5 = FUN_144d654d0(), iVar5 == 0)) {
        iVar5 = 1;
        dwErrCode = 0;
      }
      else {
        pcVar1 = DAT_14c7919e0;
        _guard_check_icall(DAT_14c7919e0);
        iVar5 = (*pcVar1)(1,param_1,0x400,2,0,local_d8,local_res20,local_res18,&local_e8,&local_e0,0
                         );
        if (iVar5 == 0) {
          dwErrCode = GetLastError();
          iVar5 = 0;
        }
        else {
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0;
          memset(local_88,0,0x58);
          local_40 = local_40 | 0x1000;
          local_60 = &local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,0x20);
          local_88[0] = 0x58;
          local_58 = 1;
          local_70 = 2;
          local_6c = 1;
          local_68 = 1;
          local_a8 = param_1;
          iVar5 = FUN_144d63d70(0x23f0);
          if (iVar5 == 0) {
            iVar5 = FUN_144d656d0(local_88,local_e8,local_e0,param_2);
            if (iVar5 == 0) {
              dwErrCode = GetLastError();
            }
          }
          else {
            local_d0 = 0x20;
            local_c0 = 0;
            local_b8 = 0;
            local_38 = &local_d0;
            local_c8 = 3;
            iVar5 = FUN_144d656d0(local_88,local_e8,local_e0,param_2);
            if (iVar5 == 0) {
              dwErrCode = GetLastError();
              uVar6 = 1;
              if (*(int *)((longlong)local_38 + 0xc) != 0) {
                do {
                  local_50 = 0;
                  local_58 = 1;
                  *(uint *)((longlong)local_38 + 4) = uVar6;
                  iVar5 = FUN_144d656d0(local_88,local_e8,local_e0,param_2);
                  if (iVar5 != 0) break;
                  dwErrCode = GetLastError();
                  uVar6 = uVar6 + 1;
                } while (uVar6 <= *(uint *)((longlong)local_38 + 0xc));
              }
            }
          }
        }
      }
    }
    else {
      dwErrCode = 0x7e;
    }
  }
  lVar2 = local_e8;
  pcVar1 = DAT_14c7919c0;
  if (local_e8 != 0) {
    _guard_check_icall(DAT_14c7919c0);
    (*pcVar1)(lVar2,0);
  }
  lVar2 = local_e0;
  pcVar1 = DAT_14c7919b8;
  if (local_e0 != 0) {
    _guard_check_icall(DAT_14c7919b8);
    (*pcVar1)(lVar2);
  }
  if (iVar5 != 0) {
    dwErrCode = 0;
  }
  SetLastError(dwErrCode);
  return iVar5;
}



// FUNCTION 144d63960 FUN_144d63960 body=219 status=ok
// SIG undefined FUN_144d63960(void)

LPWSTR FUN_144d63960(longlong param_1)

{
  int iVar1;
  UINT UVar2;
  LPWSTR lpBuffer;
  LPWSTR pWVar3;
  longlong lVar4;
  LPWSTR pWVar5;
  
  pWVar5 = (LPWSTR)0x0;
  lpBuffer = pWVar5;
  if (param_1 != 0) {
    UVar2 = GetSystemDirectoryW((LPWSTR)0x0,0);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(short *)(param_1 + lVar4 * 2) != 0);
    lpBuffer = LocalAlloc(0x40,(lVar4 + (ulonglong)(UVar2 + 1)) * 2);
    if (lpBuffer != (LPWSTR)0x0) {
      UVar2 = GetSystemDirectoryW(lpBuffer,UVar2);
      if (lpBuffer[UVar2 - 1] != L'\\') {
        lpBuffer[UVar2] = L'\\';
        UVar2 = UVar2 + 1;
      }
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(short *)(param_1 + lVar4 * 2) != 0);
      if (lVar4 != 0) {
        do {
          lVar4 = (longlong)pWVar5 * 2;
          iVar1 = (int)pWVar5;
          pWVar5 = (LPWSTR)(ulonglong)(iVar1 + 1);
          lpBuffer[iVar1 + UVar2] = *(WCHAR *)(param_1 + lVar4);
          pWVar3 = (LPWSTR)0xffffffffffffffff;
          do {
            pWVar3 = (LPWSTR)((longlong)pWVar3 + 1);
          } while (*(short *)(param_1 + (longlong)pWVar3 * 2) != 0);
        } while (pWVar5 < pWVar3);
      }
    }
  }
  return lpBuffer;
}



// FUNCTION 144d63a40 FUN_144d63a40 body=316 status=ok
// SIG undefined FUN_144d63a40(void)

void FUN_144d63a40(uint param_1,longlong param_2)

{
  FARPROC pFVar1;
  longlong lVar2;
  INT_PTR IVar3;
  longlong lVar4;
  HLOCAL pvVar5;
  longlong lVar6;
  undefined1 auStack_268 [32];
  short *local_248;
  short local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 != 0) {
    memset(local_238,0,0x20a);
    if ((DAT_14c7919a0 == (HMODULE)0x0) &&
       (DAT_14c7919a0 = (HMODULE)FUN_144d63fa0(L"Shell32.dll",0), DAT_14c7919a0 != (HMODULE)0x0)) {
      DAT_14c7919a8 = GetProcAddress(DAT_14c7919a0,"SHGetFolderPathW");
    }
    pFVar1 = DAT_14c7919a8;
    if (DAT_14c7919a8 != (FARPROC)0x0) {
      _guard_check_icall(DAT_14c7919a8);
      local_248 = local_238;
      IVar3 = (*pFVar1)(0,(ulonglong)param_1,0,0);
      if ((int)IVar3 == 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
          lVar2 = -1;
        } while (*(short *)(param_2 + lVar6 * 2) != 0);
        do {
          lVar4 = lVar2;
          lVar2 = lVar4 + 1;
        } while (local_238[lVar4 + 1] != 0);
        lVar6 = lVar4 + 3 + lVar6;
        pvVar5 = LocalAlloc(0x40,lVar6 * 2);
        if (pvVar5 != (HLOCAL)0x0) {
          FUN_144d63390(pvVar5,lVar6,local_238);
          FUN_144d63430(pvVar5,lVar6,&DAT_149e01f64);
          FUN_144d63430(pvVar5,lVar6,param_2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_268);
}



// FUNCTION 144d63b90 FUN_144d63b90 body=446 status=ok
// SIG undefined FUN_144d63b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d63b90(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD nBufferLength;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  DWORDLONG dwlConditionMask;
  LPWSTR lpBuffer;
  LPWSTR _Str2;
  LPWSTR pWVar5;
  size_t _MaxCount;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pWVar5 = (LPWSTR)0x0;
  local_38[0] = 0x24;
  local_38[1] = 0x26;
  local_38[2] = 0x2a;
  if (DAT_14c791840 == 0) {
    uVar4 = VerSetConditionMask(0,2,3);
    uVar4 = VerSetConditionMask(uVar4,1,3);
    dwlConditionMask = VerSetConditionMask(uVar4,0x20,3);
    DAT_14c791840 = 0x11c;
    _DAT_14c791844 = 6;
    _DAT_14c791848 = 1;
    _DAT_14c791954 = 0;
    BVar1 = VerifyVersionInfoW((LPOSVERSIONINFOEXW)&DAT_14c791840,0x23,dwlConditionMask);
    DAT_14c707148 = (uint)(BVar1 == 0);
  }
  if (DAT_14c707148 == 0) {
    _Str2 = pWVar5;
    lpBuffer = pWVar5;
    if (param_1 != (LPCWSTR)0x0) {
      nBufferLength = GetFullPathNameW(param_1,0,(LPWSTR)0x0,(LPWSTR *)0x0);
      if (((nBufferLength != 0) &&
          (lpBuffer = LocalAlloc(0x40,(ulonglong)nBufferLength * 2), _Str2 = (LPWSTR)0x0,
          lpBuffer != (LPWSTR)0x0)) &&
         (DVar2 = GetFullPathNameW(param_1,nBufferLength,lpBuffer,(LPWSTR *)0x0),
         DVar2 < nBufferLength)) {
        do {
          _Str2 = (LPWSTR)FUN_144d63a40(local_38[(longlong)pWVar5],&DAT_149dfb77a);
          if (_Str2 == (wchar_t *)0x0) break;
          _MaxCount = 0xffffffffffffffff;
          do {
            _MaxCount = _MaxCount + 1;
          } while (_Str2[_MaxCount] != L'\0');
          iVar3 = _wcsnicmp(lpBuffer,_Str2,_MaxCount);
          if (iVar3 == 0) break;
          LocalFree(_Str2);
          pWVar5 = (LPWSTR)((longlong)pWVar5 + 1);
          _Str2 = (LPWSTR)0x0;
        } while ((longlong)pWVar5 < 3);
      }
    }
    LocalFree(_Str2);
    LocalFree(lpBuffer);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144d63d70 FUN_144d63d70 body=548 status=ok
// SIG undefined FUN_144d63d70(void)

void FUN_144d63d70(DWORD param_1)

{
  longlong lVar1;
  FARPROC pFVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  DWORDLONG dwlConditionMask;
  INT_PTR IVar6;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  int local_168 [2];
  undefined8 local_160;
  ushort *local_158 [2];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (DAT_14c791b0c == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = param_1;
    BVar3 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    if (BVar3 == 0) {
      local_168[0] = 0;
      local_158[0] = (ushort *)0x0;
      local_160 = 0;
      puVar9 = (ushort *)0x0;
      if ((((DAT_14c791a00 == (HMODULE)0x0) &&
           (DAT_14c791a00 = (HMODULE)FUN_144d63fa0(L"Advapi32.dll",0), DAT_14c791a00 == (HMODULE)0x0
           )) || ((DAT_14c791a08 == (FARPROC)0x0 &&
                  (DAT_14c791a08 = GetProcAddress(DAT_14c791a00,"RegOpenKeyExW"),
                  DAT_14c791a08 == (FARPROC)0x0)))) ||
         ((DAT_14c791a20 == (FARPROC)0x0 &&
          (DAT_14c791a20 = GetProcAddress(DAT_14c791a00,"RegCloseKey"),
          DAT_14c791a20 == (FARPROC)0x0)))) {
        DVar4 = GetLastError();
      }
      else {
        pFVar2 = DAT_14c791a08;
        _guard_check_icall(DAT_14c791a08);
        local_178 = &local_160;
        IVar6 = (*pFVar2)(&DAT_ffffffff80000002,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0
                          ,1);
        DVar4 = (DWORD)IVar6;
        if (DVar4 == 0) {
          DVar4 = FUN_144d65b90(local_160,L"CurrentBuildNumber",local_168,local_158);
          pFVar2 = DAT_14c791a20;
          _guard_check_icall(DAT_14c791a20);
          (*pFVar2)(local_160);
          puVar9 = local_158[0];
        }
      }
      if ((DVar4 == 0) && (local_168[0] == 1)) {
        lVar7 = -1;
        do {
          lVar1 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (puVar9[lVar1] != 0);
        for (puVar8 = puVar9; puVar8 < puVar9 + lVar7; puVar8 = puVar8 + 1) {
          iVar5 = isdigit((uint)*puVar8);
          if (iVar5 == 0) {
            DAT_14c791b0c = 0;
            break;
          }
          DAT_14c791b0c = (uint)*puVar8 + (DAT_14c791b0c * 5 + -0x18) * 2;
        }
      }
      LocalFree(puVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_198);
}



// FUNCTION 144d63fa0 FUN_144d63fa0 body=245 status=ok
// SIG undefined FUN_144d63fa0(void)

void FUN_144d63fa0(LPCWSTR param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  DWORDLONG dwlConditionMask;
  LPCWSTR hMem;
  DWORD dwFlags;
  undefined1 auStack_168 [32];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  hMem = (LPCWSTR)0x0;
  if (DAT_14c791b08 == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = 0x23f0;
    BVar1 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    DAT_14c791b08 = 0x1db0;
    if (BVar1 != 0) {
      DAT_14c791b08 = 0x23f0;
    }
  }
  iVar2 = FUN_144d64150(DAT_14c791b08 < 0x23f0);
  if (iVar2 != 0) {
    if (DAT_14c791b08 < 0x23f0) {
      dwFlags = param_2 & 0xffffe0f7;
      hMem = (LPCWSTR)FUN_144d63960(param_1);
    }
    else {
      dwFlags = param_2 & 0xffffe8f7 | 0x800;
    }
    if (hMem != (LPCWSTR)0x0) {
      param_1 = hMem;
    }
    LoadLibraryExW(param_1,(HANDLE)0x0,dwFlags);
    LocalFree(hMem);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
}



// FUNCTION 144d640b0 FUN_144d640b0 body=137 status=ok
// SIG undefined FUN_144d640b0(void)

void FUN_144d640b0(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  char local_118 [256];
  ulonglong local_18;
  
  pcVar1 = DAT_14c7919e8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118[0] = '\0';
  _guard_check_icall(DAT_14c7919e8);
  local_120 = 0x100;
  local_128 = local_118;
  (*pcVar1)(param_1,4,0);
  _strnicmp(local_118,"NVIDIA ",7);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144d64150 FUN_144d64150 body=852 status=ok
// SIG undefined FUN_144d64150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d64150(int param_1)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  wchar_t *lpLibFileName;
  wchar_t *lpLibFileName_00;
  wchar_t *lpLibFileName_01;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char *pcVar8;
  LPCWSTR pWVar9;
  LPCWSTR pWVar10;
  undefined1 auStack_168 [32];
  CHAR local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_148,0,0x104);
  uVar1 = GetModuleFileNameA((HMODULE)0x0,local_148,0x104);
  if (9 < (ulonglong)uVar1) {
    if (uVar1 != 0) {
      pcVar8 = local_148 + uVar1;
      do {
        if (*pcVar8 == '\\') break;
        pcVar8 = pcVar8 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    iVar2 = strncmp(local_148 + uVar1,"\\mfpmp.exe",7);
    if (iVar2 == 0) goto LAB_144d6448e;
  }
  if (((((DAT_14c791ad0 == (HMODULE)0x0) && (DAT_14c7919b0 == 0)) && (DAT_14c791ac0 == (HMODULE)0x0)
       ) && ((DAT_14c791ad8 == (HMODULE)0x0 && (DAT_14c791ae0 == (HMODULE)0x0)))) &&
     (DAT_14c791ae8 == (HMODULE)0x0)) {
    lpLibFileName_00 = (LPCWSTR)0x0;
    pWVar9 = (LPCWSTR)0x0;
    pWVar10 = (LPCWSTR)0x0;
    DVar4 = 0x800;
    if (param_1 != 0) {
      DVar4 = 0;
    }
    DAT_14c707158 = 0;
    if (param_1 == 0) {
      lpLibFileName = L"msasn1.dll";
    }
    else {
      lpLibFileName = (wchar_t *)FUN_144d63960(L"msasn1.dll");
    }
    DAT_14c791ad0 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,DVar4);
    if ((DAT_14c791ad0 != (HMODULE)0x0) ||
       (DVar3 = GetLastError(), pwVar7 = lpLibFileName_00, pwVar6 = lpLibFileName_00,
       lpLibFileName_01 = lpLibFileName_00, pwVar5 = lpLibFileName_00, DVar3 == 0x7e)) {
      if (param_1 == 0) {
        lpLibFileName_00 = L"cryptnet.dll";
      }
      else {
        lpLibFileName_00 = (wchar_t *)FUN_144d63960(L"cryptnet.dll");
      }
      _DAT_14c791ac8 = LoadLibraryExW(lpLibFileName_00,(HANDLE)0x0,DVar4);
      pwVar7 = pWVar9;
      pwVar6 = pWVar10;
      pwVar5 = (LPCWSTR)0x0;
      if ((_DAT_14c791ac8 != (HMODULE)0x0) ||
         (DVar3 = GetLastError(), lpLibFileName_01 = (LPCWSTR)0x0, DVar3 == 0x7e)) {
        if (param_1 == 0) {
          lpLibFileName_01 = L"drvstore.dll";
        }
        else {
          lpLibFileName_01 = (wchar_t *)FUN_144d63960(L"drvstore.dll");
        }
        DAT_14c791ad8 = LoadLibraryExW(lpLibFileName_01,(HANDLE)0x0,DVar4);
        if ((DAT_14c791ad8 != (HMODULE)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
          if (param_1 == 0) {
            pwVar5 = L"devobj.dll";
          }
          else {
            pwVar5 = (wchar_t *)FUN_144d63960(L"devobj.dll");
          }
          DAT_14c791ae0 = LoadLibraryExW(pwVar5,(HANDLE)0x0,DVar4);
          if ((DAT_14c791ae0 != (HMODULE)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
            if (param_1 == 0) {
              pwVar6 = L"wldp.dll";
            }
            else {
              pwVar6 = (wchar_t *)FUN_144d63960(L"wldp.dll");
            }
            DAT_14c791ae8 = LoadLibraryExW(pwVar6,(HANDLE)0x0,DVar4);
            if ((DAT_14c791ae8 != (HMODULE)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
              if (param_1 == 0) {
                pwVar7 = L"cryptbase.dll";
              }
              else {
                pwVar7 = (wchar_t *)FUN_144d63960(L"cryptbase.dll");
              }
              DAT_14c791ac0 = LoadLibraryExW(pwVar7,(HANDLE)0x0,DVar4);
              if ((DAT_14c791ac0 != (HMODULE)0x0) || (DVar4 = GetLastError(), DVar4 == 0x7e)) {
                DAT_14c707158 = 1;
              }
            }
          }
        }
      }
    }
    if (param_1 != 0) {
      LocalFree(lpLibFileName);
      LocalFree(lpLibFileName_00);
      LocalFree(pwVar7);
      LocalFree(lpLibFileName_01);
      LocalFree(pwVar5);
      LocalFree(pwVar6);
    }
  }
LAB_144d6448e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 144d644b0 FUN_144d644b0 body=4098 status=ok
// SIG undefined FUN_144d644b0(void)

void FUN_144d644b0(uint *param_1)

{
  uint uVar1;
  void *_Buf1;
  int iVar2;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined2 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined2 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined2 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined2 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_698;
  local_568 = 0xa018230;
  local_564 = 0x1018202;
  local_560 = 0xb123d300;
  local_55c = 0x3d4cbcb;
  local_558 = 0x9ef012c8;
  local_554 = 0xac0b9d0a;
  local_550 = 0xb85828f8;
  local_54c = 0x8689b316;
  local_548 = 0xcd865298;
  local_544 = 0xa283d35b;
  local_540 = 0x1c2e53f7;
  local_53c = 0x677d3d00;
  local_538 = 0x38699cb;
  local_534 = 0x8aa0b0bd;
  local_530 = 0x7f4e922d;
  local_52c = 0x34fbd129;
  local_528 = 0x169683e9;
  local_524 = 0x54dc4193;
  local_520 = 0x513e6203;
  local_51c = 0xe5ae6f0a;
  local_518 = 0x608bf6e8;
  local_514 = 0x41db24f6;
  local_510 = 0xc920ef8e;
  local_50c = 0x26028dec;
  local_508 = 0xa02fc9d1;
  local_504 = 0x7dd8d9be;
  local_500 = 0x1f59e138;
  local_4fc = 0x8417c037;
  local_4f8 = 0xcbb34076;
  local_4f4 = 0x5ae1765a;
  local_4f0 = 0xa9a5388c;
  local_4ec = 0xbb4c73;
  local_4e8 = 0x7fd18592;
  local_4e4 = 0x194d744e;
  local_4e0 = 0x62623963;
  local_4dc = 0x869c3b8;
  local_4d8 = 0xfe23f767;
  local_4d4 = 0x369eab04;
  local_4d0 = 0xc83a75c9;
  local_4cc = 0xcb8d743;
  local_4c8 = 0x12792560;
  local_4c4 = 0x7993053e;
  local_4c0 = 0x415d5645;
  local_4bc = 0x194362f3;
  local_4b8 = 0x44ec5ac1;
  local_4b4 = 0x95d2d222;
  local_4b0 = 0x415cf75d;
  local_4ac = 0x399dbf5;
  local_4a8 = 0xc3a4898b;
  local_4a4 = 0xa88dad93;
  local_4a0 = 0xf03aa90f;
  local_49c = 0x81eed7a3;
  local_498 = 0x254b80e7;
  local_494 = 0xfa8e7d53;
  local_490 = 0xfc26493d;
  local_48c = 0x734c31dd;
  local_488 = 0x89b7cc2d;
  local_484 = 0x14e8b1b7;
  local_480 = 0x793d6cd;
  local_47c = 0xf9b701f9;
  local_478 = 0x922fb435;
  local_474 = 0xd0b39af5;
  local_470 = 0xbf088d38;
  local_46c = 0x65a5b022;
  local_468 = 0x122a9082;
  local_464 = 0x1148a155;
  local_460 = 0x10302ff;
  local_45c = 0x100;
  local_458 = 0xa018230;
  local_454 = 0x1018202;
  local_450 = 0xc0d4a600;
  local_44c = 0x653517cf;
  local_448 = 0xda84138e;
  local_444 = 0x6ea2e4fa;
  local_440 = 0x14e0e785;
  local_43c = 0xec186298;
  local_438 = 0x55ad9f27;
  local_434 = 0x1a119bf7;
  local_430 = 0xce43be2b;
  local_42c = 0x78426753;
  local_428 = 0x7bd7a3b7;
  local_424 = 0x79d6c574;
  local_420 = 0x7d5c7f88;
  local_41c = 0xaa74da7b;
  local_418 = 0x9301a697;
  local_414 = 0xf759a060;
  local_410 = 0xf94b4f05;
  local_40c = 0xff9bfdec;
  local_408 = 0x99c1c4e7;
  local_404 = 0x6029f170;
  local_400 = 0xd286e20e;
  local_3fc = 0xb3527f60;
  local_3f8 = 0xe9b10217;
  local_3f4 = 0x1b867189;
  local_3f0 = 0xd3eff5b9;
  local_3ec = 0xe508a395;
  local_3e8 = 0x1ad71162;
  local_3e4 = 0x528ea274;
  local_3e0 = 0x3244c97b;
  local_3dc = 0xb5b9fe99;
  local_3d8 = 0x37257e6f;
  local_3d4 = 0x54584119;
  local_3d0 = 0xa53ef505;
  local_3cc = 0x8f2b8f1b;
  local_3c8 = 0x1e80ebe6;
  local_3c4 = 0x89dc86;
  local_3c0 = 0xd229ad23;
  local_3bc = 0xbf254c4a;
  local_3b8 = 0x249e18f7;
  local_3b4 = 0x36bdcf78;
  local_3b0 = 0x24765811;
  local_3ac = 0x13576df;
  local_3a8 = 0x1a7b34c2;
  local_3a4 = 0x57c64660;
  local_3a0 = 0x154f2823;
  local_39c = 0x1eb836e7;
  local_398 = 0xbf8ae57a;
  local_394 = 0x909ac811;
  local_390 = 0xf70ad138;
  local_38c = 0x4fa85d1;
  local_388 = 0x81d3b2af;
  local_384 = 0xe35b9199;
  local_380 = 0xa51562e8;
  local_37c = 0x6bfcc3d0;
  local_378 = 0x8a4f40c6;
  local_374 = 0x570bf4da;
  local_370 = 0x48902144;
  local_36c = 0x35bb55a1;
  local_368 = 0x738be375;
  local_364 = 0xbf7dfa29;
  local_360 = 0x46f0b989;
  local_35c = 0xf6abfbcd;
  local_358 = 0x76bf5c1;
  local_354 = 0x174776bb;
  local_350 = 0x10302e7;
  local_34c = 0x100;
  local_348 = 0xa018230;
  local_344 = 0x1018202;
  local_340 = 0x6a3faf00;
  local_33c = 0xb65c3bae;
  local_338 = 0x1afe292c;
  local_334 = 0xfe66503b;
  local_330 = 0x78d01bf7;
  local_32c = 0xf85930b9;
  local_328 = 0x7aa800b8;
  local_324 = 0x86c53d67;
  local_320 = 0xb010d906;
  local_31c = 0xaa4f6be6;
  local_318 = 0x69e88da9;
  local_314 = 0x88b1cd60;
  local_310 = 0xc52d19cc;
  local_30c = 0x37d8519c;
  local_308 = 0x6ad741b6;
  local_304 = 0x6a5cf079;
  local_300 = 0xefa2fb4e;
  local_2fc = 0x3238d0b2;
  local_2f8 = 0x3e5a9d3;
  local_2f4 = 0xd2ec2beb;
  local_2f0 = 0x6f1f17f0;
  local_2ec = 0xdae2e1ae;
  local_2e8 = 0x42b5105c;
  local_2e4 = 0xb4dbe63;
  local_2e0 = 0xb8c17208;
  local_2dc = 0x461a1abb;
  local_2d8 = 0xdce7d021;
  local_2d4 = 0x89f63685;
  local_2d0 = 0x83cc9d2a;
  local_2cc = 0xfd8a6759;
  local_2c8 = 0xd24e5315;
  local_2c4 = 0x70233a8c;
  local_2c0 = 0x39631e5d;
  local_2bc = 0x5454776a;
  local_2b8 = 0x245a6c66;
  local_2b4 = 0xd018dd7c;
  local_2b0 = 0x5a7ca6c0;
  local_2ac = 0xb9a3e7de;
  local_2a8 = 0x6dad414d;
  local_2a4 = 0x822a5f76;
  local_2a0 = 0x3c0a6f1c;
  local_29c = 0xd40e4b1b;
  local_298 = 0x8caf5193;
  local_294 = 0x6c9e1a04;
  local_290 = 0xb0943481;
  local_28c = 0x64a1f020;
  local_288 = 0x66a73a5a;
  local_284 = 0x2e4a66f6;
  local_280 = 0x2685def1;
  local_27c = 0x9124a954;
  local_278 = 0xbf1ea53f;
  local_274 = 0x1c9c9d44;
  local_270 = 0x2c16f828;
  local_26c = 0xc3f3318c;
  local_268 = 0x7b9e7179;
  local_264 = 0xe96bee9;
  local_260 = 0x2365556a;
  local_25c = 0xea71d154;
  local_258 = 0xb2425171;
  local_254 = 0x91f088cc;
  local_250 = 0xc6c89e28;
  local_24c = 0x8524fdab;
  local_248 = 0x5846a44b;
  local_244 = 0xd0c3d5ae;
  local_240 = 0x10302d5;
  local_23c = 0x100;
  local_238 = 0xa018230;
  local_234 = 0x1018202;
  local_230 = 0x6685b400;
  local_22c = 0x3549cc85;
  local_228 = 0xf791c056;
  local_224 = 0x3404b30b;
  local_220 = 0xb96aabf2;
  local_21c = 0x644325b2;
  local_218 = 0x277fa4c5;
  local_214 = 0x913c7c6b;
  local_210 = 0xf60a856b;
  local_20c = 0xd676da0c;
  local_208 = 0xc6bbafa5;
  local_204 = 0x3c24eff0;
  local_200 = 0xdd04a709;
  local_1fc = 0x973d2ffa;
  local_1f8 = 0xdc914fa2;
  local_1f4 = 0x2384585f;
  local_1f0 = 0xa561ce7f;
  local_1ec = 0x75cf9846;
  local_1e8 = 0x3b3e4ec7;
  local_1e4 = 0xabc8227e;
  local_1e0 = 0x3f86bfa8;
  local_1dc = 0xc870029a;
  local_1d8 = 0x21868c30;
  local_1d4 = 0xbf8b5497;
  local_1d0 = 0xf2b64e2d;
  local_1cc = 0xf6f2f3b0;
  local_1c8 = 0xac56ab0d;
  local_1c4 = 0x1363995d;
  local_1c0 = 0xf11e8c4a;
  local_1bc = 0x41d59a33;
  local_1b8 = 0x70b83fc7;
  local_1b4 = 0xeb1eb595;
  local_1b0 = 0x92dd7b8;
  local_1ac = 0xc4843412;
  local_1a8 = 0xfe9d4cc4;
  local_1a4 = 0x823072ce;
  local_1a0 = 0xd693015a;
  local_19c = 0xf6ef513e;
  local_198 = 0x2d5c013c;
  local_194 = 0x4167bea8;
  local_190 = 0xfc6d520f;
  local_18c = 0x3fd4458c;
  local_188 = 0x378927ae;
  local_184 = 0xd9dc083c;
  local_180 = 0xbff7ce2;
  local_17c = 0xc4b553b7;
  local_178 = 0x8a671de0;
  local_174 = 0xaf5c7e4c;
  local_170 = 0x96f0e441;
  local_16c = 0xde12c43e;
  local_168 = 0x67b97aad;
  local_164 = 0xfddc762c;
  local_160 = 0xc5615165;
  local_15c = 0x2db6c16f;
  local_158 = 0xa151724e;
  local_154 = 0x3ebad49f;
  local_150 = 0xdcb0ea9d;
  local_14c = 0x8040f4dd;
  local_148 = 0x2f4a8382;
  local_144 = 0xa0a75d23;
  local_140 = 0x3896f5a0;
  local_13c = 0x4d12d448;
  local_138 = 0x79df99e1;
  local_134 = 0xf45defcb;
  local_130 = 0x10302af;
  local_12c = 0x100;
  local_128 = 0xa018230;
  local_124 = 0x1018202;
  local_120 = 0x8d8ccf00;
  local_11c = 0x9f57a1ae;
  local_118 = 0xae866014;
  local_114 = 0x1b5971d1;
  local_110 = 0x1024fa05;
  local_10c = 0xbc9df45;
  local_108 = 0xad629415;
  local_104 = 0xbfc4e420;
  local_100 = 0x9cc8520f;
  local_fc = 0xa9d6aedf;
  local_f8 = 0xa9982107;
  local_f4 = 0xdd55842f;
  local_f0 = 0x22848989;
  local_ec = 0xad08789;
  local_e8 = 0xad2ff3cf;
  local_e4 = 0x69108040;
  local_e0 = 0x4728bb24;
  local_dc = 0x96a6a773;
  local_d8 = 0xe9223967;
  local_d4 = 0x88592c0c;
  local_d0 = 0xaea38630;
  local_cc = 0xd8d8c98c;
  local_c8 = 0x72faf9a2;
  local_c4 = 0x7355363a;
  local_c0 = 0xaeeddeda;
  local_bc = 0xe7f80f43;
  local_b8 = 0xe94862c4;
  local_b4 = 0xc00e240a;
  local_b0 = 0xc4f9b879;
  local_ac = 0x52f0b19f;
  local_a8 = 0x9f1be49d;
  local_a4 = 0x67d4a8a1;
  local_a0 = 0x7311d6d5;
  local_9c = 0xa2ffebd8;
  local_98 = 0x6b04bcc0;
  local_94 = 0x187946dd;
  local_90 = 0xb0fdf09c;
  local_8c = 0x51280d3d;
  local_88 = 0x9c48a505;
  local_84 = 0xba857081;
  local_80 = 0x50437f3e;
  local_7c = 0x4ff13dc1;
  local_78 = 0xcd65f3fa;
  local_74 = 0x424bc17;
  local_70 = 0x31002351;
  local_6c = 0x96a363d1;
  local_68 = 0x206154d5;
  local_64 = 0xbf613147;
  local_60 = 0xf8f5ddcf;
  local_5c = 0xe4875d23;
  local_58 = 0x2be1bbe3;
  local_54 = 0xd85f8530;
  local_50 = 0xb0e61699;
  local_4c = 0xd0a27a9e;
  local_48 = 0x89e7249a;
  local_44 = 0x5dedaee;
  local_40 = 0x7ac2f8d9;
  local_3c = 0xe55f840f;
  local_38 = 0x736c75b2;
  local_34 = 0x352f9b5;
  local_30 = 0x9e853248;
  local_2c = 0x1940eb07;
  local_28 = 0x413d0f8e;
  local_24 = 0xd2c054d7;
  local_20 = 0x10302e1;
  local_1c = 0x100;
  if ((*param_1 == 0x10e) && (param_1[4] == 0)) {
    iVar2 = FUN_144d63d70(0x23f0);
    if (iVar2 == 0) {
      local_678 = 0xa018230;
      local_674 = 0x1018202;
      local_670 = 0x4395d700;
      local_66c = 0x67dfdcd4;
      local_668 = 0x52fb39ae;
      local_664 = 0x3126b6a4;
      local_660 = 0xb7e97004;
      local_65c = 0xba2a5b8e;
      local_658 = 0x95356937;
      local_654 = 0x30c0bb8f;
      local_650 = 0x73d886e7;
      local_64c = 0xd1ebdfbb;
      local_648 = 0x568a3f76;
      local_644 = 0x4b2deb8e;
      local_640 = 0x4e1857f0;
      local_63c = 0x33a58db1;
      local_638 = 0x23750bd3;
      local_634 = 0x27796ad5;
      local_630 = 0xf7d3a3dd;
      local_62c = 0xb565870e;
      local_628 = 0xf11cadde;
      local_624 = 0x22b435f5;
      local_620 = 0xa122af51;
      local_61c = 0x904b5dc1;
      local_618 = 0x4e59c07f;
      local_614 = 0xa9799dab;
      local_610 = 0x491ed702;
      local_60c = 0x874d3bb1;
      local_608 = 0xab78c2fe;
      local_604 = 0xae52efbf;
      local_600 = 0xd908af9c;
      local_5fc = 0x519ae539;
      local_5f8 = 0x305f693e;
      local_5f4 = 0x63714e10;
      local_5f0 = 0xf0e1586c;
      local_5ec = 0xf1b3320;
      local_5e8 = 0xcb5bbe74;
      local_5e4 = 0x8cdbe112;
      local_5e0 = 0x729480c4;
      local_5dc = 0x9a45f6bb;
      local_5d8 = 0xb25c19e;
      local_5d4 = 0x9e1ca3fb;
      local_5d0 = 0x7009a6d8;
      local_5cc = 0x47c0ec71;
      local_5c8 = 0xc37d8f4c;
      local_5c4 = 0x3ece19de;
      local_5c0 = 0x8e7204ee;
      local_5bc = 0xf0ffd317;
      local_5b8 = 0x193205b2;
      local_5b4 = 0x1cb0d34c;
      local_5b0 = 0x78a5fe9f;
      local_5ac = 0x41704220;
      local_5a8 = 0x6f8c26b0;
      local_5a4 = 0x3ac800;
      local_5a0 = 0x417a4111;
      local_59c = 0x918aa7b0;
      local_598 = 0x7899a004;
      local_594 = 0xf3b477f4;
      local_590 = 0x6ce62a60;
      local_58c = 0x14b70450;
      local_588 = 0x510dff60;
      local_584 = 0x848ba8f4;
      local_580 = 0x5cda21fe;
      local_57c = 0x29f57d5e;
      local_578 = 0x44b04f79;
      local_574 = 0x726d6f74;
      local_570 = 0x10302ff;
      local_56c = 0x100;
      iVar2 = memcmp(*(void **)(param_1 + 2),&local_678,(ulonglong)*param_1);
      if (iVar2 == 0) goto LAB_144d654a3;
    }
    uVar1 = *param_1;
    _Buf1 = *(void **)(param_1 + 2);
    iVar2 = memcmp(_Buf1,&local_568,(ulonglong)uVar1);
    if ((((iVar2 != 0) && (iVar2 = memcmp(_Buf1,&local_458,(ulonglong)uVar1), iVar2 != 0)) &&
        (iVar2 = memcmp(_Buf1,&local_348,(ulonglong)uVar1), iVar2 != 0)) &&
       (iVar2 = memcmp(_Buf1,&local_238,(ulonglong)uVar1), iVar2 != 0)) {
      memcmp(_Buf1,&local_128,(ulonglong)uVar1);
    }
  }
LAB_144d654a3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_698);
}



// FUNCTION 144d654d0 FUN_144d654d0 body=491 status=ok
// SIG undefined FUN_144d654d0(void)

void FUN_144d654d0(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  INT_PTR IVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38 = 0;
  if ((((((DAT_14c791a00 != (HMODULE)0x0) ||
         (DAT_14c791a00 = (HMODULE)FUN_144d63fa0(L"Advapi32.dll",0), DAT_14c791a00 != (HMODULE)0x0))
        && ((DAT_14c791a28 != (FARPROC)0x0 ||
            (DAT_14c791a28 = GetProcAddress(DAT_14c791a00,"OpenSCManagerW"),
            DAT_14c791a28 != (FARPROC)0x0)))) &&
       ((DAT_14c791a30 != (FARPROC)0x0 ||
        (DAT_14c791a30 = GetProcAddress(DAT_14c791a00,"OpenServiceW"), DAT_14c791a30 != (FARPROC)0x0
        )))) && ((DAT_14c791a40 != (FARPROC)0x0 ||
                 (DAT_14c791a40 = GetProcAddress(DAT_14c791a00,"QueryServiceStatus"),
                 DAT_14c791a40 != (FARPROC)0x0)))) &&
     ((DAT_14c791a48 != (FARPROC)0x0 ||
      (DAT_14c791a48 = GetProcAddress(DAT_14c791a00,"CloseServiceHandle"),
      DAT_14c791a48 != (FARPROC)0x0)))) {
    pFVar1 = DAT_14c791a28;
    _guard_check_icall(DAT_14c791a28);
    IVar2 = (*pFVar1)(0,0,0x80000000);
    pFVar1 = DAT_14c791a30;
    if (IVar2 != 0) {
      _guard_check_icall(DAT_14c791a30);
      IVar3 = (*pFVar1)(IVar2,L"CryptSvc",4);
      pFVar1 = DAT_14c791a40;
      if (IVar3 != 0) {
        _guard_check_icall(DAT_14c791a40);
        (*pFVar1)(IVar3,&local_38);
        pFVar1 = DAT_14c791a48;
        _guard_check_icall(DAT_14c791a48);
        (*pFVar1)(IVar3);
      }
      pFVar1 = DAT_14c791a48;
      _guard_check_icall(DAT_14c791a48);
      (*pFVar1)(IVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144d656d0 FUN_144d656d0 body=474 status=ok
// SIG undefined FUN_144d656d0(void)

void FUN_144d656d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD dwErrCode;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  pcVar1 = DAT_14c791a98;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = 0;
  local_50 = 0xaac56b;
  local_4c = 0x11d0cd44;
  local_48 = 0xc000c28c;
  local_44 = 0xee95c24f;
  if (param_1 == 0) {
    dwErrCode = 0xa0;
    goto LAB_144d65893;
  }
  _guard_check_icall(DAT_14c791a98);
  dwErrCode = (*pcVar1)(0,&local_50,param_1);
  pcVar1 = DAT_14c791aa0;
  if ((dwErrCode == 0) || (dwErrCode == 0x800b010a)) {
    _guard_check_icall(DAT_14c791aa0);
    lVar5 = (*pcVar1)(*(undefined8 *)(param_1 + 0x38));
    pcVar1 = DAT_14c791aa8;
    if (lVar5 == 0) {
      dwErrCode = GetLastError();
    }
    else {
      _guard_check_icall(DAT_14c791aa8);
      lVar5 = (*pcVar1)(lVar5,0,0,0);
      pcVar1 = DAT_14c791ab0;
      if (lVar5 == 0) {
        dwErrCode = GetLastError();
        lVar6 = 0;
      }
      else {
        _guard_check_icall(DAT_14c791ab0);
        lVar5 = (*pcVar1)(lVar5,0);
        pcVar1 = DAT_14c7919f8;
        if (lVar5 == 0) {
LAB_144d657df:
          dwErrCode = GetLastError();
        }
        else {
          DVar2 = dwErrCode;
          if (dwErrCode == 0x800b010a) {
            local_58[0] = 0;
            _guard_check_icall(DAT_14c7919f8);
            lVar6 = (*pcVar1)(param_2,*(undefined8 *)(lVar5 + 8),0,local_58);
            if (lVar6 == 0) goto LAB_144d657df;
            iVar3 = FUN_144d644b0(*(longlong *)(lVar6 + 0x18) + 0x78);
            DVar2 = 0;
            if (iVar3 == 0) goto LAB_144d6584d;
          }
          dwErrCode = DVar2;
          if (param_4 != (undefined4 *)0x0) {
            uVar4 = FUN_144d640b0(*(undefined8 *)(lVar5 + 8));
            *param_4 = uVar4;
          }
        }
      }
    }
  }
LAB_144d6584d:
  *(undefined4 *)(param_1 + 0x30) = 2;
  pcVar1 = DAT_14c791a98;
  _guard_check_icall(DAT_14c791a98);
  (*pcVar1)(0,&local_50,param_1);
  pcVar1 = DAT_14c7919c8;
  if (lVar6 != 0) {
    _guard_check_icall(DAT_14c7919c8);
    (*pcVar1)(lVar6);
  }
LAB_144d65893:
  SetLastError(dwErrCode);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 144d658c0 FUN_144d658c0 body=712 status=ok
// SIG undefined FUN_144d658c0(void)

undefined8 FUN_144d658c0(void)

{
  if (((((((DAT_14c7919b0 != (HMODULE)0x0) ||
          (DAT_14c7919b0 = (HMODULE)FUN_144d63fa0(L"crypt32.dll",0), DAT_14c7919b0 != (HMODULE)0x0))
         && ((DAT_14c791a90 != (HMODULE)0x0 ||
             (DAT_14c791a90 = (HMODULE)FUN_144d63fa0(L"wintrust.dll",0),
             DAT_14c791a90 != (HMODULE)0x0)))) &&
        ((DAT_14c7919e8 != (FARPROC)0x0 ||
         (DAT_14c7919e8 = GetProcAddress(DAT_14c7919b0,"CertGetNameStringA"),
         DAT_14c7919e8 != (FARPROC)0x0)))) &&
       (((DAT_14c7919f0 != (FARPROC)0x0 ||
         (DAT_14c7919f0 = GetProcAddress(DAT_14c7919b0,"CryptDecodeObjectEx"),
         DAT_14c7919f0 != (FARPROC)0x0)) &&
        (((DAT_14c7919c8 != (FARPROC)0x0 ||
          (DAT_14c7919c8 = GetProcAddress(DAT_14c7919b0,"CertFreeCertificateContext"),
          DAT_14c7919c8 != (FARPROC)0x0)) &&
         ((DAT_14c7919d0 != (FARPROC)0x0 ||
          (DAT_14c7919d0 = GetProcAddress(DAT_14c7919b0,"CertFindCertificateInStore"),
          DAT_14c7919d0 != (FARPROC)0x0)))))))) &&
      (((DAT_14c7919f8 != (FARPROC)0x0 ||
        (DAT_14c7919f8 = GetProcAddress(DAT_14c7919b0,"CertGetIssuerCertificateFromStore"),
        DAT_14c7919f8 != (FARPROC)0x0)) &&
       ((DAT_14c7919d8 != (FARPROC)0x0 ||
        (DAT_14c7919d8 = GetProcAddress(DAT_14c7919b0,"CryptMsgGetParam"),
        DAT_14c7919d8 != (FARPROC)0x0)))))) &&
     (((((DAT_14c7919e0 != (FARPROC)0x0 ||
         (DAT_14c7919e0 = GetProcAddress(DAT_14c7919b0,"CryptQueryObject"),
         DAT_14c7919e0 != (FARPROC)0x0)) &&
        ((DAT_14c7919b8 != (FARPROC)0x0 ||
         (DAT_14c7919b8 = GetProcAddress(DAT_14c7919b0,"CryptMsgClose"),
         DAT_14c7919b8 != (FARPROC)0x0)))) &&
       (((DAT_14c7919c0 != (FARPROC)0x0 ||
         (DAT_14c7919c0 = GetProcAddress(DAT_14c7919b0,"CertCloseStore"),
         DAT_14c7919c0 != (FARPROC)0x0)) &&
        ((DAT_14c791a98 != (FARPROC)0x0 ||
         (DAT_14c791a98 = GetProcAddress(DAT_14c791a90,"WinVerifyTrust"),
         DAT_14c791a98 != (FARPROC)0x0)))))) &&
      ((((DAT_14c791aa0 != (FARPROC)0x0 ||
         (DAT_14c791aa0 = GetProcAddress(DAT_14c791a90,"WTHelperProvDataFromStateData"),
         DAT_14c791aa0 != (FARPROC)0x0)) &&
        ((DAT_14c791ab0 != (FARPROC)0x0 ||
         (DAT_14c791ab0 = GetProcAddress(DAT_14c791a90,"WTHelperGetProvCertFromChain"),
         DAT_14c791ab0 != (FARPROC)0x0)))) &&
       ((DAT_14c791aa8 != (FARPROC)0x0 ||
        (DAT_14c791aa8 = GetProcAddress(DAT_14c791a90,"WTHelperGetProvSignerFromChain"),
        DAT_14c791aa8 != (FARPROC)0x0)))))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144d65b90 FUN_144d65b90 body=356 status=ok
// SIG undefined FUN_144d65b90(void)

ulonglong FUN_144d65b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  FARPROC pFVar1;
  DWORD DVar2;
  ulonglong uVar3;
  HLOCAL pvVar4;
  int iVar5;
  int local_28;
  uint local_24 [3];
  
  local_24[0] = 0;
  local_28 = 0;
  if (((DAT_14c791a00 != (HMODULE)0x0) ||
      (DAT_14c791a00 = (HMODULE)FUN_144d63fa0(L"Advapi32.dll",0), DAT_14c791a00 != (HMODULE)0x0)) &&
     ((DAT_14c791a18 != (FARPROC)0x0 ||
      (DAT_14c791a18 = GetProcAddress(DAT_14c791a00,"RegQueryValueExW"),
      DAT_14c791a18 != (FARPROC)0x0)))) {
    pFVar1 = DAT_14c791a18;
    _guard_check_icall(DAT_14c791a18);
    uVar3 = (*pFVar1)(param_1,param_2,0,local_24,0,&local_28);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (local_28 == 0) {
      return uVar3;
    }
    iVar5 = 0;
    if (local_24[0] != 0) {
      if (local_24[0] < 3) {
        iVar5 = 2;
      }
      else {
        iVar5 = 0;
        if (local_24[0] == 7) {
          iVar5 = 4;
        }
      }
    }
    pvVar4 = LocalAlloc(0x40,(ulonglong)(uint)(iVar5 + local_28));
    *param_4 = pvVar4;
    pFVar1 = DAT_14c791a18;
    if (pvVar4 != (HLOCAL)0x0) {
      _guard_check_icall(DAT_14c791a18);
      uVar3 = (*pFVar1)(param_1,param_2,0,param_3,pvVar4,&local_28);
      if ((int)uVar3 == 0) {
        return uVar3 & 0xffffffff;
      }
      LocalFree((HLOCAL)*param_4);
      *param_4 = 0;
      return uVar3 & 0xffffffff;
    }
  }
  DVar2 = GetLastError();
  return (ulonglong)DVar2;
}



// FUNCTION 144d65d00 NVSDK_NGX_UpdateFeature body=269 status=ok
// SIG undefined NVSDK_NGX_UpdateFeature(void)

INT_PTR NVSDK_NGX_UpdateFeature(undefined8 param_1,ulonglong param_2)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  int *piVar3;
  
                    /* 0x4d65d00  418  NVSDK_NGX_UpdateFeature */
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (*piVar3 < DAT_14c791b18) {
    FUN_144b3d300(&DAT_14c791b18);
    if (DAT_14c791b18 == -1) {
      DAT_14c791b10 = (HMODULE)FUN_144d62bd0(0);
      _Init_thread_footer(&DAT_14c791b18);
    }
  }
  if (DAT_14c791b10 == (HMODULE)0x0) {
    IVar2 = 0xbad00002;
  }
  else {
    if (*piVar3 < DAT_14c791b28) {
      FUN_144b3d300(&DAT_14c791b28);
      if (DAT_14c791b28 == -1) {
        DAT_14c791b20 = GetProcAddress(DAT_14c791b10,"NVSDK_NGX_UpdateFeature");
        _Init_thread_footer(&DAT_14c791b28);
      }
    }
    pFVar1 = DAT_14c791b20;
    if (DAT_14c791b20 == (FARPROC)0x0) {
      IVar2 = 0xbad00012;
    }
    else {
      _guard_check_icall(DAT_14c791b20);
      IVar2 = (*pFVar1)(param_1,param_2 & 0xffffffff);
    }
  }
  return IVar2;
}



// FUNCTION 144d65e10 FUN_144d65e10 body=847 status=ok
// SIG undefined FUN_144d65e10(void)

ulonglong FUN_144d65e10(undefined8 param_1,wchar_t *param_2)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  ulonglong uVar6;
  void *_Memory;
  undefined4 *_Dst;
  ulonglong uVar7;
  uint uVar8;
  int iStackX_c;
  undefined4 local_res18 [2];
  ulonglong local_68;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  undefined8 local_48;
  
  FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                ,0x35,"NGXGetPathUsingQAI","Checking for path to NGX using QueryAdapterInfo");
  hModule = LoadLibraryW(L"gdi32.dll");
  if (hModule == (HMODULE)0x0) {
    return 0x8000ffff;
  }
  pFVar2 = GetProcAddress(hModule,"D3DKMTEnumAdapters2");
  pFVar3 = GetProcAddress(hModule,"D3DKMTCloseAdapter");
  pFVar4 = GetProcAddress(hModule,"D3DKMTQueryAdapterInfo");
  if (((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) || (pFVar4 == (FARPROC)0x0)) {
    uVar6 = 0x8000ffff;
  }
  else {
    uVar7 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    _guard_check_icall(pFVar2);
    IVar5 = (*pFVar2)(&local_68);
    if ((int)(uint)IVar5 < 0) {
      uVar6 = (ulonglong)((uint)IVar5 | 0x10000000);
    }
    else if ((uint)local_68 == 0) {
      uVar6 = 0x8000ffff;
    }
    else {
      _Memory = malloc((local_68 & 0xffffffff) * 0x14);
      if (_Memory == (void *)0x0) {
        uVar6 = 0x8007000e;
      }
      else {
        local_60 = _Memory;
        _guard_check_icall(pFVar2);
        IVar5 = (*pFVar2)(&local_68);
        if ((int)(uint)IVar5 < 0) {
          uVar6 = (ulonglong)((uint)IVar5 | 0x10000000);
        }
        else {
          if ((uint)local_68 != 0) {
            iStackX_c = (int)((ulonglong)param_1 >> 0x20);
            uVar6 = uVar7;
            do {
              if ((*(int *)((longlong)_Memory + uVar6 * 0x14 + 8) == iStackX_c) &&
                 (*(int *)((longlong)_Memory + uVar6 * 0x14 + 4) == (int)param_1)) {
                iVar1 = *(int *)((longlong)_Memory + uVar6 * 0x14);
                if (iVar1 != 0) {
                  _Dst = malloc(0x430);
                  if (_Dst == (undefined4 *)0x0) {
                    FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                                  ,0x97,"NGXGetPathUsingQAI",
                                  "error: out of memory... unable to query adapter info");
                    uVar6 = 0x80004005;
                  }
                  else {
                    memset(_Dst,0,0x430);
                    _Dst[1] = _Dst[1] & 0xfffffffe;
                    *_Dst = 0;
                    _Dst[0x84] = 1;
                    wcscpy_s((wchar_t *)(_Dst + 2),0x104,L"NGXCore\\NGXPath");
                    _local_58 = CONCAT44(0x30,iVar1);
                    local_48 = 0x430;
                    local_50 = _Dst;
                    _guard_check_icall(pFVar4);
                    IVar5 = (*pFVar4)(&local_58);
                    if (((int)IVar5 < 0) || (_Dst[0x87] != 0)) {
                      uVar6 = 0x80004005;
                      free(_Dst);
                    }
                    else {
                      wcscpy_s(param_2,0x104,(wchar_t *)(_Dst + 0x88));
                      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                                    ,0x8b,"NGXGetPathUsingQAI",
                                    "Path to driverStore found using QAI: %ls",param_2);
                      free(_Dst);
                      uVar6 = uVar7;
                    }
                  }
                  goto LAB_144d65fe1;
                }
                break;
              }
              uVar8 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar8;
            } while (uVar8 < (uint)local_68);
          }
          FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_lib_windows.cpp"
                        ,0x9d,"NGXGetPathUsingQAI","error: no matching adapter found");
          uVar6 = 0x80070057;
LAB_144d65fe1:
          if ((uint)local_68 != 0) {
            do {
              local_res18[0] = *(undefined4 *)((longlong)_Memory + uVar7 * 0x14);
              _guard_check_icall(pFVar3);
              (*pFVar3)(local_res18);
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
            } while (uVar8 < (uint)local_68);
          }
          free(_Memory);
          FreeLibrary(hModule);
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 144d66160 FUN_144d66160 body=109 status=ok
// SIG undefined FUN_144d66160(void)

void FUN_144d66160(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 144d661e0 thunk_FUN_144d66160 body=5 status=ok
// SIG undefined thunk_FUN_144d66160(void)

void thunk_FUN_144d66160(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 144d661f0 FUN_144d661f0 body=4 status=ok
// SIG undefined FUN_144d661f0(void)

undefined8 FUN_144d661f0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144d66200 FUN_144d66200 body=52 status=ok
// SIG undefined FUN_144d66200(void)

void FUN_144d66200(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_144d66160(param_1,lVar1,param_1[2] - lVar1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144d66240 FUN_144d66240 body=142 status=ok
// SIG undefined FUN_144d66240(void)

void FUN_144d66240(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _Dst = (void *)FUN_14631a4da();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_144d66160(param_1,lVar1,param_1[2] - lVar1 >> 3,param_4,uVar3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 3) * 8);
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 144d662d0 FUN_144d662d0 body=17 status=ok
// SIG undefined FUN_144d662d0(void)

void FUN_144d662d0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<T> too long");
}



// FUNCTION 144d662f0 NVSDK_NGX_VULKAN_RequiredExtensions body=123 status=ok
// SIG undefined NVSDK_NGX_VULKAN_RequiredExtensions(void)

undefined8
NVSDK_NGX_VULKAN_RequiredExtensions
          (undefined4 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
                    /* 0x4d662f0  433  NVSDK_NGX_VULKAN_RequiredExtensions */
  FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                ,0x92,"NVSDK_NGX_VULKAN_RequiredExtensions",
                "warning: NVSDK_NGX_VULKAN_RequiredExtensions will be deprecated in future SDK release. Use NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements() and NVSDK_NGX_VULKAN_GetFeatureRequirements() instead"
               );
  *param_1 = 1;
  *param_2 = &PTR_s_VK_KHR_get_physical_device_prope_14c7071c8;
  *param_3 = 4;
  *param_4 = &PTR_s_VK_NVX_binary_import_14c7072a8;
  return 1;
}



// FUNCTION 144d66370 NVSDK_NGX_VULKAN_Init body=433 status=ok
// SIG undefined NVSDK_NGX_VULKAN_Init(void)

undefined8
NVSDK_NGX_VULKAN_Init
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6,longlong param_7,longlong *param_8,undefined4 param_9)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar6 = param_7;
                    /* 0x4d66370  431  NVSDK_NGX_VULKAN_Init */
  uVar4 = FUN_144d67060(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  pcVar3 = DAT_14c791b70;
  pcVar2 = DAT_14c791b68;
  pcVar1 = DAT_14c791b60;
  uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
  if ((int)uVar4 == 1) {
    if (DAT_14c791b70 == (code *)0x0) {
      if ((param_7 == 0) || (param_6 == 0)) {
        if (DAT_14c791b68 != (code *)0x0) {
          _guard_check_icall(DAT_14c791b68);
          uVar4 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5,CONCAT44(uVar7,param_9),param_8)
          ;
          return uVar4;
        }
        if (((param_8 == (longlong *)0x0) || (*param_8 == 0)) || ((int)param_8[1] == 0)) {
          _guard_check_icall(DAT_14c791b60);
          uVar4 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,CONCAT44(uVar7,param_9));
          return uVar4;
        }
        pcVar5 = 
        "error: app passed non-empty list of extra paths but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        uVar4 = 300;
      }
      else {
        pcVar5 = 
        "error: app passed vkGetInstance/DeviceProcAddr but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        uVar4 = 0x11e;
      }
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                    ,uVar4,"NVSDK_NGX_VULKAN_Init",pcVar5);
      uVar4 = 0xbad0000c;
    }
    else {
      _guard_check_icall(DAT_14c791b70);
      uVar4 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_8);
    }
  }
  return uVar4;
}



// FUNCTION 144d66530 FUN_144d66530 body=400 status=ok
// SIG undefined FUN_144d66530(void)

undefined8
FUN_144d66530(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
             longlong param_9,undefined8 param_10,undefined4 param_11)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20),param_11);
  uVar3 = FUN_144d67060(param_4,param_5,param_6,param_7,param_8,param_9,param_10,uVar5);
  pcVar2 = DAT_14c791b80;
  pcVar1 = DAT_14c791b78;
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar3 == 1) {
    if (DAT_14c791b80 == (code *)0x0) {
      if ((param_9 == 0) || (param_8 == 0)) {
        if (DAT_14c791b78 != (code *)0x0) {
          _guard_check_icall(DAT_14c791b78);
          uVar3 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            CONCAT44(uVar6,param_11),param_10);
          return uVar3;
        }
        pcVar4 = 
        "error: app called Init with ProjectID but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        uVar3 = 0x151;
      }
      else {
        pcVar4 = 
        "error: app passed vkGetInstance/DeviceProcAddr but NGX Core driver does not support the proper Init entrypoint... Please update your driver."
        ;
        uVar3 = 0x146;
      }
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                    ,uVar3,"NVSDK_NGX_VULKAN_Init_with_ProjectID",pcVar4);
      uVar3 = 0xbad0000c;
    }
    else {
      _guard_check_icall(DAT_14c791b80);
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_11,param_10);
    }
  }
  return uVar3;
}



// FUNCTION 144d666c0 NVSDK_NGX_VULKAN_Shutdown body=7 status=ok
// SIG undefined NVSDK_NGX_VULKAN_Shutdown(void)

void NVSDK_NGX_VULKAN_Shutdown(void)

{
                    /* 0x4d666c0  434  NVSDK_NGX_VULKAN_Shutdown */
  FUN_144d67630(0);
  return;
}



// FUNCTION 144d666d0 NVSDK_NGX_VULKAN_Shutdown1 body=5 status=ok
// SIG undefined NVSDK_NGX_VULKAN_Shutdown1(void)

int NVSDK_NGX_VULKAN_Shutdown1(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int aiStackX_8 [2];
  undefined *puStackX_10;
  
                    /* 0x4d666d0  435  NVSDK_NGX_VULKAN_Shutdown1 */
  puStackX_10 = &DAT_14c791b38;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  pcVar2 = DAT_14c791b90;
  pcVar1 = DAT_14c791b88;
  aiStackX_8[0] = 0;
  if (param_1 == 0) {
    if (DAT_14c791b88 == (code *)0x0) {
      if (DAT_14c791b90 == (code *)0x0) goto LAB_144d677bf;
      _guard_check_icall(DAT_14c791b90);
      param_1 = 0;
      goto LAB_144d676c6;
    }
    _guard_check_icall(DAT_14c791b88);
    iVar3 = (*pcVar1)();
  }
  else {
    if (DAT_14c791b90 == (code *)0x0) {
LAB_144d677bf:
      iVar3 = -0x452ffff9;
      goto LAB_144d677c4;
    }
    _guard_check_icall(DAT_14c791b90);
LAB_144d676c6:
    iVar3 = (*pcVar2)(param_1,aiStackX_8);
  }
  if ((iVar3 == 1) && (aiStackX_8[0] == 0)) {
    FUN_145140ad0();
    if (CONCAT44(DAT_14c791bf8._4_4_,(undefined4)DAT_14c791bf8) != 0) {
      FUN_144d63360();
    }
    DAT_14c791b60 = 0;
    DAT_14c791b68 = 0;
    DAT_14c791b70 = 0;
    DAT_14c791b78 = 0;
    DAT_14c791b80 = 0;
    DAT_14c791b88 = (code *)0x0;
    DAT_14c791b90 = (code *)0x0;
    DAT_14c791b98 = 0;
    DAT_14c791ba0 = 0;
    DAT_14c791ba8 = 0;
    DAT_14c791bb0 = 0;
    DAT_14c791bb8 = 0;
    DAT_14c791bc0 = 0;
    DAT_14c791bc8 = 0;
    DAT_14c791bd0 = 0;
    DAT_14c791bd8 = 0;
    DAT_14c791be0 = 0;
    DAT_14c791be8 = 0;
    DAT_14c791bf0._0_4_ = 0;
    DAT_14c791bf0._4_4_ = 0;
    DAT_14c791bf8._0_4_ = 0;
    DAT_14c791bf8._4_4_ = 0;
    DAT_14c791c00 = 0;
  }
LAB_144d677c4:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  return iVar3;
}



// FUNCTION 144d666e0 NVSDK_NGX_VULKAN_GetParameters body=69 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetParameters(void)

undefined8 NVSDK_NGX_VULKAN_GetParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d666e0  429  NVSDK_NGX_VULKAN_GetParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791ba0;
  if (DAT_14c791ba0 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791ba0);
                    /* WARNING: Could not recover jumptable at 0x000144d66722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d66730 NVSDK_NGX_VULKAN_AllocateParameters body=91 status=ok
// SIG undefined NVSDK_NGX_VULKAN_AllocateParameters(void)

undefined8 NVSDK_NGX_VULKAN_AllocateParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d66730  419  NVSDK_NGX_VULKAN_AllocateParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791be0;
  if (DAT_14c791b60 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791be0 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791be0);
                    /* WARNING: Could not recover jumptable at 0x000144d66788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d66790 NVSDK_NGX_VULKAN_GetCapabilityParameters body=91 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetCapabilityParameters(void)

undefined8 NVSDK_NGX_VULKAN_GetCapabilityParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d66790  425  NVSDK_NGX_VULKAN_GetCapabilityParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791be8;
  if (DAT_14c791b60 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791be8 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791be8);
                    /* WARNING: Could not recover jumptable at 0x000144d667e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d667f0 NVSDK_NGX_VULKAN_DestroyParameters body=91 status=ok
// SIG undefined NVSDK_NGX_VULKAN_DestroyParameters(void)

undefined8 NVSDK_NGX_VULKAN_DestroyParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d667f0  422  NVSDK_NGX_VULKAN_DestroyParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791bf0;
  if (DAT_14c791b60 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791bf0 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791bf0);
                    /* WARNING: Could not recover jumptable at 0x000144d66848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d66850 NVSDK_NGX_VULKAN_GetScratchBufferSize body=87 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetScratchBufferSize(void)

undefined8
NVSDK_NGX_VULKAN_GetScratchBufferSize(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66850  430  NVSDK_NGX_VULKAN_GetScratchBufferSize */
  pcVar1 = DAT_14c791b98;
  if (DAT_14c791b98 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c791b98);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}



// FUNCTION 144d668b0 NVSDK_NGX_VULKAN_CreateFeature body=118 status=ok
// SIG undefined NVSDK_NGX_VULKAN_CreateFeature(void)

undefined8
NVSDK_NGX_VULKAN_CreateFeature
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d668b0  420  NVSDK_NGX_VULKAN_CreateFeature */
  if (DAT_14c791ba8 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    FUN_144d66c80(param_3);
    pcVar1 = DAT_14c791ba8;
    _guard_check_icall(DAT_14c791ba8);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d66930 NVSDK_NGX_VULKAN_CreateFeature1 body=130 status=ok
// SIG undefined NVSDK_NGX_VULKAN_CreateFeature1(void)

undefined8
NVSDK_NGX_VULKAN_CreateFeature1
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66930  421  NVSDK_NGX_VULKAN_CreateFeature1 */
  if (DAT_14c791bb0 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    FUN_144d66c80(param_4);
    pcVar1 = DAT_14c791bb0;
    _guard_check_icall(DAT_14c791bb0);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}



// FUNCTION 144d669c0 NVSDK_NGX_VULKAN_ReleaseFeature body=69 status=ok
// SIG undefined NVSDK_NGX_VULKAN_ReleaseFeature(void)

undefined8 NVSDK_NGX_VULKAN_ReleaseFeature(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4d669c0  432  NVSDK_NGX_VULKAN_ReleaseFeature */
  UNRECOVERED_JUMPTABLE = DAT_14c791bc0;
  if (DAT_14c791bc0 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791bc0);
                    /* WARNING: Could not recover jumptable at 0x000144d66a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144d66a10 NVSDK_NGX_VULKAN_GetFeatureRequirements body=122 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetFeatureRequirements(void)

undefined8
NVSDK_NGX_VULKAN_GetFeatureRequirements
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66a10  428  NVSDK_NGX_VULKAN_GetFeatureRequirements */
  if (DAT_14c791b30 == 0) {
    FUN_144d677f0();
  }
  pcVar1 = DAT_14c791bc8;
  if (DAT_14c791bc8 == (code *)0x0) {
    uVar2 = 0xbad00012;
  }
  else {
    _guard_check_icall(DAT_14c791bc8);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d66a90 NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements body=130 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements(void)

undefined8
NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements
          (undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66a90  427  NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements */
  pcVar1 = DAT_14c791bd0;
  if ((DAT_14c791b30 != 0) && (DAT_14c791bd0 != (code *)0x0)) {
    _guard_check_icall(DAT_14c791bd0);
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
    if ((int)uVar2 != -0x452fffee) {
      return uVar2;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = s_VK_KHR_get_physical_device_prope_14c7076e0;
  }
  return 1;
}



// FUNCTION 144d66b20 NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements body=169 status=ok
// SIG undefined NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements(void)

undefined8
NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
          undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66b20  426  NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements */
  if (((DAT_14c791b30 != 0) || (FUN_144d677f0(), DAT_14c791b30 != 0)) &&
     (pcVar1 = DAT_14c791bd8, DAT_14c791bd8 != (code *)0x0)) {
    _guard_check_icall(DAT_14c791bd8);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar2 != -0x452fffee) {
      return uVar2;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 4;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = s_VK_NVX_binary_import_14c7072d0;
  }
  return 1;
}



// FUNCTION 144d66bd0 NVSDK_NGX_VULKAN_EvaluateFeature body=107 status=ok
// SIG undefined NVSDK_NGX_VULKAN_EvaluateFeature(void)

undefined8
NVSDK_NGX_VULKAN_EvaluateFeature
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* 0x4d66bd0  423  NVSDK_NGX_VULKAN_EvaluateFeature */
  pcVar1 = DAT_14c791bb8;
  if (DAT_14c791bb8 == (code *)0x0) {
    uVar2 = 0xbad00007;
  }
  else {
    _guard_check_icall(DAT_14c791bb8);
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 144d66c40 NVSDK_NGX_VULKAN_EvaluateFeature_C body=53 status=ok
// SIG undefined NVSDK_NGX_VULKAN_EvaluateFeature_C(void)

undefined8
NVSDK_NGX_VULKAN_EvaluateFeature_C
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
                    /* 0x4d66c40  424  NVSDK_NGX_VULKAN_EvaluateFeature_C */
  if (DAT_14c791bb8 == 0) {
    return 0xbad00007;
  }
  uVar1 = FUN_144d67900(DAT_14c791bb8,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 144d66c80 FUN_144d66c80 body=643 status=ok
// SIG undefined FUN_144d66c80(void)

void FUN_144d66c80(undefined8 param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.DLAA",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Quality",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Balanced",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.Performance",0x80000005);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraQuality",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"DLSS.Hint.Render.Preset.UltraPerformance",0x80000006);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",local_res10)
  ;
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.DLAA",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Quality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Quality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Balanced",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Balanced",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.Performance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI(param_1,"RayReconstruction.Hint.Render.Preset.Performance",0x80000002)
    ;
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraQuality",0x80000002);
  }
  iVar1 = NVSDK_NGX_Parameter_GetUI
                    (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",local_res10);
  if ((iVar1 != 1) || (local_res10[0] == 0)) {
    NVSDK_NGX_Parameter_SetUI
              (param_1,"RayReconstruction.Hint.Render.Preset.UltraPerformance",0x80000002);
  }
  return;
}



// FUNCTION 144d66f10 FUN_144d66f10 body=315 status=ok
// SIG undefined FUN_144d66f10(void)

void FUN_144d66f10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8 [2];
  undefined4 *local_3b0;
  undefined1 local_3a8 [832];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  pcVar1 = DAT_14c791c00;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  _guard_check_icall(DAT_14c791c00);
  pcVar1 = (code *)(*pcVar1)(param_1);
  if (pcVar1 == (code *)0x0) {
    FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                  ,0x77,"GetLUIDFromVkPhysicalDevice",
                  "error: vkGetPhysicalDeviceProperties2 entrypoint does not exist for this Vulkan driver"
                 );
  }
  else {
    local_68[0] = 0x3b9bdf5c;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_3b0 = local_68;
    local_3b8[0] = 0x3b9bb079;
    memset(local_3a8,0,0x338);
    _guard_check_icall(pcVar1);
    (*pcVar1)(param_2,local_3b8);
    if (local_30._4_4_ == 0) {
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                    ,0x82,"GetLUIDFromVkPhysicalDevice",
                    "error: unable to fetch LUID for Vulkan device");
    }
    else {
      *param_3 = local_38;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_3d8);
}



// FUNCTION 144d67060 FUN_144d67060 body=1484 status=ok
// SIG undefined FUN_144d67060(void)

undefined8
FUN_144d67060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             FARPROC param_5,undefined8 param_6,longlong param_7,int param_8)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  if ((param_7 == 0) || (param_8 < 0x14)) {
    cVar1 = '\0';
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    cVar1 = *(char *)(param_7 + 0x24);
    if (((cVar1 != '\0') && (*(longlong *)(param_7 + 0x18) == 0)) ||
       (uVar3 = *(uint *)(param_7 + 0x20), 2 < uVar3)) {
      uVar2 = 0xbad00005;
      goto LAB_144d67600;
    }
    uVar2 = *(undefined8 *)(param_7 + 0x18);
  }
  cVar1 = FUN_145140ae0(param_1,L"/nvsdk_ngx.log",uVar3,uVar2,cVar1);
  if (cVar1 == '\0') {
    uVar2 = 0xbad0000f;
    goto LAB_144d67600;
  }
  if ((((DAT_14c791b60 == (FARPROC)0x0) || (DAT_14c791b88 == (FARPROC)0x0)) ||
      ((DAT_14c791ba0 == (FARPROC)0x0 ||
       ((DAT_14c791b98 == (FARPROC)0x0 || (DAT_14c791ba8 == (FARPROC)0x0)))))) ||
     ((DAT_14c791bb8 == (FARPROC)0x0 || (DAT_14c791bc0 == (FARPROC)0x0)))) {
    DAT_14c791b60 = (FARPROC)0x0;
    DAT_14c791b68 = (FARPROC)0x0;
    DAT_14c791b70 = (FARPROC)0x0;
    DAT_14c791b78 = (FARPROC)0x0;
    DAT_14c791b80 = (FARPROC)0x0;
    DAT_14c791b88 = (FARPROC)0x0;
    DAT_14c791b90 = (FARPROC)0x0;
    DAT_14c791b98 = (FARPROC)0x0;
    DAT_14c791ba0 = (FARPROC)0x0;
    DAT_14c791ba8 = (FARPROC)0x0;
    DAT_14c791bb0 = (FARPROC)0x0;
    DAT_14c791bb8 = (FARPROC)0x0;
    DAT_14c791bc0 = (FARPROC)0x0;
    DAT_14c791bc8 = (FARPROC)0x0;
    DAT_14c791bd0 = (FARPROC)0x0;
    DAT_14c791bd8 = (FARPROC)0x0;
    DAT_14c791be0 = (FARPROC)0x0;
    DAT_14c791be8 = (FARPROC)0x0;
    DAT_14c791bf0 = (FARPROC)0x0;
    DAT_14c791bf8 = (HMODULE)0x0;
    DAT_14c791c00 = param_5;
    if (param_5 == (FARPROC)0x0) {
      DAT_14c791bf8 = (HMODULE)FUN_144d632b0(L"vulkan-1.dll",2);
      if (DAT_14c791bf8 == (HMODULE)0x0) {
        FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                      ,0xd5,"NVSDK_NGX_VULKAN_Init_Common","error: %ls could not be loaded",
                      L"vulkan-1.dll");
        uVar2 = 0xbad00002;
        goto LAB_144d67600;
      }
      DAT_14c791c00 = GetProcAddress(DAT_14c791bf8,"vkGetInstanceProcAddr");
      if (DAT_14c791c00 != (FARPROC)0x0) goto LAB_144d672d1;
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/lib/nvsdk_ngx_vulkan_lib.cpp"
                    ,0xdc,"NVSDK_NGX_VULKAN_Init_Common",
                    "error: vkGetInstanceProcAddr not a valid entrypoint");
    }
    else {
LAB_144d672d1:
      cVar1 = FUN_144d66f10(param_2,param_3,&param_7);
      if (cVar1 != '\0') {
        if (DAT_14c791b30 == (HMODULE)0x0) {
          DAT_14c791b30 = (HMODULE)FUN_144d62bd0(param_7);
          if (DAT_14c791b30 != (HMODULE)0x0) goto LAB_144d67309;
        }
        else {
LAB_144d67309:
          DAT_14c791b60 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Init");
          DAT_14c791b68 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Init_Ext");
          DAT_14c791b70 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Init_Ext2");
          DAT_14c791b78 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Init_ProjectID");
          DAT_14c791b80 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Init_ProjectID_Ext");
          DAT_14c791b88 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Shutdown");
          DAT_14c791b90 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_Shutdown1");
          DAT_14c791ba0 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetParameters");
          DAT_14c791b98 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetScratchBufferSize");
          DAT_14c791ba8 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_CreateFeature");
          DAT_14c791bb0 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_CreateFeature1");
          DAT_14c791bb8 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_EvaluateFeature");
          DAT_14c791bc0 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_ReleaseFeature");
          DAT_14c791bc8 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetFeatureRequirements");
          DAT_14c791bd0 =
               GetProcAddress(DAT_14c791b30,
                              "NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
          DAT_14c791bd8 =
               GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements"
                             );
          DAT_14c791be0 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_AllocateParameters");
          DAT_14c791be8 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetCapabilityParameters");
          DAT_14c791bf0 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_DestroyParameters");
        }
        if (((((DAT_14c791b60 == (FARPROC)0x0) || (DAT_14c791b88 == (FARPROC)0x0)) ||
             (DAT_14c791ba0 == (FARPROC)0x0)) ||
            ((DAT_14c791b98 == (FARPROC)0x0 || (DAT_14c791ba8 == (FARPROC)0x0)))) ||
           ((DAT_14c791bb8 == (FARPROC)0x0 || (DAT_14c791bc0 == (FARPROC)0x0)))) {
          DAT_14c791b60 = (FARPROC)0x0;
          DAT_14c791b68 = (FARPROC)0x0;
          DAT_14c791b70 = (FARPROC)0x0;
          DAT_14c791b78 = (FARPROC)0x0;
          DAT_14c791b80 = (FARPROC)0x0;
          DAT_14c791b88 = (FARPROC)0x0;
          DAT_14c791b90 = (FARPROC)0x0;
          DAT_14c791b98 = (FARPROC)0x0;
          DAT_14c791ba0 = (FARPROC)0x0;
          DAT_14c791ba8 = (FARPROC)0x0;
          DAT_14c791bb0 = (FARPROC)0x0;
          DAT_14c791bb8 = (FARPROC)0x0;
          DAT_14c791bc0 = (FARPROC)0x0;
          DAT_14c791bc8 = (FARPROC)0x0;
          DAT_14c791bd0 = (FARPROC)0x0;
          DAT_14c791bd8 = (FARPROC)0x0;
          DAT_14c791be0 = (FARPROC)0x0;
          DAT_14c791be8 = (FARPROC)0x0;
          DAT_14c791bf0 = (FARPROC)0x0;
          DAT_14c791bf8 = (HMODULE)0x0;
          DAT_14c791c00 = (FARPROC)0x0;
          uVar2 = 0xbad00001;
          goto LAB_144d67600;
        }
        goto LAB_144d67154;
      }
    }
    uVar2 = 0xbad00002;
  }
  else {
LAB_144d67154:
    uVar2 = 1;
  }
LAB_144d67600:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  return uVar2;
}



// FUNCTION 144d67630 FUN_144d67630 body=439 status=ok
// SIG undefined FUN_144d67630(void)

int FUN_144d67630(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int local_res8 [2];
  undefined *local_res10;
  
  local_res10 = &DAT_14c791b38;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  pcVar2 = DAT_14c791b90;
  pcVar1 = DAT_14c791b88;
  local_res8[0] = 0;
  if (param_1 == 0) {
    if (DAT_14c791b88 == (code *)0x0) {
      if (DAT_14c791b90 == (code *)0x0) goto LAB_144d677bf;
      _guard_check_icall(DAT_14c791b90);
      param_1 = 0;
      goto LAB_144d676c6;
    }
    _guard_check_icall(DAT_14c791b88);
    iVar3 = (*pcVar1)();
  }
  else {
    if (DAT_14c791b90 == (code *)0x0) {
LAB_144d677bf:
      iVar3 = -0x452ffff9;
      goto LAB_144d677c4;
    }
    _guard_check_icall(DAT_14c791b90);
LAB_144d676c6:
    iVar3 = (*pcVar2)(param_1,local_res8);
  }
  if ((iVar3 == 1) && (local_res8[0] == 0)) {
    FUN_145140ad0();
    if (CONCAT44(DAT_14c791bf8._4_4_,(undefined4)DAT_14c791bf8) != 0) {
      FUN_144d63360();
    }
    DAT_14c791b60 = 0;
    DAT_14c791b68 = 0;
    DAT_14c791b70 = 0;
    DAT_14c791b78 = 0;
    DAT_14c791b80 = 0;
    DAT_14c791b88 = (code *)0x0;
    DAT_14c791b90 = (code *)0x0;
    DAT_14c791b98 = 0;
    DAT_14c791ba0 = 0;
    DAT_14c791ba8 = 0;
    DAT_14c791bb0 = 0;
    DAT_14c791bb8 = 0;
    DAT_14c791bc0 = 0;
    DAT_14c791bc8 = 0;
    DAT_14c791bd0 = 0;
    DAT_14c791bd8 = 0;
    DAT_14c791be0 = 0;
    DAT_14c791be8 = 0;
    DAT_14c791bf0._0_4_ = 0;
    DAT_14c791bf0._4_4_ = 0;
    DAT_14c791bf8._0_4_ = 0;
    DAT_14c791bf8._4_4_ = 0;
    DAT_14c791c00 = 0;
  }
LAB_144d677c4:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  return iVar3;
}



// FUNCTION 144d677f0 FUN_144d677f0 body=263 status=ok
// SIG undefined FUN_144d677f0(void)

undefined8 FUN_144d677f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  HMODULE hModule;
  undefined8 local_res18 [2];
  
  if (DAT_14c791b30 != (HMODULE)0x0) {
    return 1;
  }
  hModule = (HMODULE)FUN_144d632b0(L"vulkan-1.dll",2);
  if (hModule != (HMODULE)0x0) {
    DAT_14c791c00 = GetProcAddress(hModule,"vkGetInstanceProcAddr");
    cVar1 = FUN_144d66f10(param_1,param_2,local_res18);
    if ((cVar1 != '\0') &&
       (DAT_14c791b30 = (HMODULE)FUN_144d62bd0(local_res18[0]), DAT_14c791b30 != (HMODULE)0x0)) {
      DAT_14c791bc8 = GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetFeatureRequirements");
      DAT_14c791bd0 =
           GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
      DAT_14c791bd8 =
           GetProcAddress(DAT_14c791b30,"NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements");
      if ((DAT_14c791bc8 != (FARPROC)0x0) &&
         ((DAT_14c791bd0 != (FARPROC)0x0 && (DAT_14c791bd8 != (FARPROC)0x0)))) {
        return 1;
      }
      return 0xbad00012;
    }
  }
  return 0xbad00002;
}



// FUNCTION 144d67900 FUN_144d67900 body=144 status=ok
// SIG undefined FUN_144d67900(void)

void FUN_144d67900(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  code *pcVar1;
  longlong *plVar2;
  
  pcVar1 = (code *)0x0;
  plVar2 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x108);
  if (param_5 != 0) {
    pcVar1 = FUN_144d61050;
  }
  *plVar2 = param_5;
  _guard_check_icall(param_1);
  (*param_1)(param_2,param_3,param_4,pcVar1);
  *plVar2 = 0;
  return;
}



// FUNCTION 144d67990 FUN_144d67990 body=69 status=ok
// SIG undefined FUN_144d67990(void)

void FUN_144d67990(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = &DAT_14c792090;
  iVar4 = 1;
  pcVar2 = "Bink Error";
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  DAT_14c792090 = *pcVar2;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + 1;
    *pcVar3 = *pcVar1;
  } while (iVar4 != 0xff);
  *pcVar3 = '\0';
  return;
}



// FUNCTION 144d679e0 FUN_144d679e0 body=8 status=ok
// SIG undefined FUN_144d679e0(void)

undefined1 * FUN_144d679e0(void)

{
  return &DAT_14c792090;
}



// FUNCTION 144d679f0 thunk_FUN_144d6b240 body=5 status=ok
// SIG undefined thunk_FUN_144d6b240(void)

void thunk_FUN_144d6b240(void)

{
  FUN_144d6b240();
  return;
}



// FUNCTION 144d67a00 FUN_144d67a00 body=438 status=ok
// SIG undefined FUN_144d67a00(void)

void FUN_144d67a00(int *param_1,uint *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) {
    iVar7 = 0;
    param_2[5] = 0;
    iVar3 = FUN_145155e60(param_1[0x46]);
    if (iVar3 == 0) {
      param_2[1] = *param_1 + 7U & 0xfffffff8;
      param_2[2] = param_1[1] + 7U & 0xfffffff8;
      param_2[3] = (*param_1 + 1U >> 1) + 7 & 0xfffffff8;
      uVar4 = (param_1[1] + 1U >> 1) + 7 & 0xfffffff8;
    }
    else {
      uVar6 = *param_1 + 0x1fU & 0xffffffe0;
      param_2[1] = uVar6;
      uVar4 = param_1[1] + 0xfU & 0xfffffff0;
      param_2[3] = uVar6 >> 1;
      param_2[2] = uVar4;
      uVar4 = uVar4 >> 1;
    }
    param_2[4] = uVar4;
    if (param_1[2] == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = (param_1[8] & 8U | 0x10) >> 3;
    }
    *param_2 = uVar4;
    lVar1 = *(longlong *)(param_1 + 0x2c);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(param_2 + 8) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(param_2 + 10) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(param_2 + 0xc) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(param_2 + 0x14) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x60);
      *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x70);
      *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(lVar1 + 0x68);
      *(undefined8 *)(param_2 + 0x1c) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(lVar1 + 0x78);
      *(undefined8 *)(param_2 + 0x20) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)(param_2 + 0x22) = *(undefined8 *)(lVar1 + 0x88);
      *(undefined8 *)(param_2 + 0x24) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(lVar1 + 0x98);
      *(undefined8 *)(param_2 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xb0);
      *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(lVar1 + 0xa8);
      *(undefined8 *)(param_2 + 0x2c) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xc0);
      *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xd0);
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(lVar1 + 200);
      *(undefined8 *)(param_2 + 0x34) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xe0);
      *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(lVar1 + 0xd8);
      *(undefined8 *)(param_2 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xf0);
      *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(lVar1 + 0xe8);
      *(undefined8 *)(param_2 + 0x3c) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0x100);
      *(undefined8 *)(param_2 + 0x3e) = *(undefined8 *)(lVar1 + 0xf8);
      *(undefined8 *)(param_2 + 0x40) = uVar2;
      return;
    }
    memset(param_2 + 6,0,0xf0);
    if (0 < (int)*param_2) {
      puVar5 = param_2 + 0xc;
      do {
        puVar5[-4] = 1;
        iVar7 = iVar7 + 1;
        *puVar5 = 1;
        puVar5[4] = 1;
        puVar5[8] = (uint)param_1[8] >> 0x14 & 1;
        puVar5[0xc] = (uint)param_1[8] >> 2 & 1;
        puVar5 = puVar5 + 0x14;
      } while (iVar7 < (int)*param_2);
    }
  }
  return;
}



// FUNCTION 144d67bc0 FUN_144d67bc0 body=25 status=ok
// SIG undefined FUN_144d67bc0(void)

void FUN_144d67bc0(longlong param_1,longlong param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
    *(longlong *)(param_1 + 0xb0) = param_2;
  }
  return;
}



// FUNCTION 144d67be0 FUN_144d67be0 body=61 status=ok
// SIG undefined FUN_144d67be0(void)

undefined8 FUN_144d67be0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_145155c30(param_1 + 0x130,1,1);
  if (uVar1 != 0) {
    uVar2 = FUN_144d6d0e0(param_1,uVar1 | 0x300);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144d67c20 FUN_144d67c20 body=409 status=ok
// SIG undefined FUN_144d67c20(void)

void FUN_144d67c20(longlong param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_1 == 0) {
    return;
  }
  bVar2 = false;
  if (((((((*(int *)(param_1 + 0x10c) != 0 || *(int *)(param_1 + 0x108) != 0) ||
          *(int *)(param_1 + 0x104) != 0) || *(int *)(param_1 + 0x100) != 0) ||
        *(int *)(param_1 + 0xfc) != 0) || *(int *)(param_1 + 0xf8) != 0) ||
      *(int *)(param_1 + 0xf4) != 0) || *(int *)(param_1 + 0xf0) != 0) {
    return;
  }
  iVar6 = 1;
  if ((((*(int *)(param_1 + 300) == 0) || (*(int *)(param_1 + 0x14) == 0)) ||
      (*(int *)(param_1 + 0x11c) != 0)) || (*(int *)(param_1 + 0x40) == 0)) goto LAB_144d67d46;
  if (*(int *)(param_1 + 0x68c) == 0) {
    FUN_144d6cb10(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (*(int *)(param_1 + 0x690) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 300) == 0) goto LAB_144d67d46;
    do {
      lVar7 = uVar5 * 0x1c0;
      if (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x60 + lVar7) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x60 + lVar7) = 0;
        if ((1 < *(uint *)(param_1 + 0xc)) &&
           ((int)*(uint *)(param_1 + 0xc) <= *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x50 + lVar7)
           )) {
          bVar2 = true;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 300));
    if (!bVar2) goto LAB_144d67d46;
  }
  else {
    *(undefined4 *)(param_1 + 0x690) = 0;
  }
  *(int *)(param_1 + 0x63c) = *(int *)(param_1 + 0x63c) + 1;
  FUN_144d686e0(param_1,0);
  *(undefined4 *)(param_1 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  FUN_144d686e0(param_1,1);
LAB_144d67d46:
  *(undefined4 *)(param_1 + 0x2e0) = 1;
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_144d6a3e0(param_1);
  }
  iVar3 = FUN_145141010();
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + (iVar3 - iVar1);
  }
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    iVar6 = *(uint *)(param_1 + 0xc) + 1;
  }
  FUN_144d6adc0(param_1,iVar6);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  return;
}



// FUNCTION 144d67dc0 FUN_144d67dc0 body=378 status=ok
// SIG undefined FUN_144d67dc0(void)

undefined8 FUN_144d67dc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if ((param_1 == 0) ||
     (((*(int *)(param_1 + 0x630) == 0 && (*(int *)(param_1 + 0x11c) == 0)) ||
      (*(int *)(param_1 + 0x1c) != 0)))) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x644);
  if (iVar4 == 0) {
    FUN_144d6acc0();
    iVar4 = *(int *)(param_1 + 0x644);
  }
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_144d6a3e0(param_1);
  }
  iVar2 = FUN_145141010();
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + (iVar2 - iVar1);
  }
  if ((*(int *)(param_1 + 0x11c) == 0) &&
     ((*(int *)(param_1 + 300) == 0 || (*(int *)(param_1 + 0x40) != 0)))) {
    if (*(uint *)(param_1 + 0x14) == 0) {
      return 0;
    }
    iVar4 = (iVar2 - (int)((((ulonglong)
                             (uint)(*(int *)(param_1 + 0x630) - *(int *)(param_1 + 0x648)) *
                             (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                            (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x4c) >> 0x10)) -
            iVar4;
    if (-1 < iVar4) {
      if (*(int *)(param_1 + 300) != 0) {
        return 0;
      }
      if (iVar4 <= *(int *)(param_1 + 0x64c) * 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x644) = 0;
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x1f8) == 0) && ((*(uint *)(param_1 + 0x20) & 0x8000000) != 0)) {
    if ((*(code **)(param_1 + 0x240) != (code *)0x0) &&
       (uVar3 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar3 & 1) != 0)) {
      return 1;
    }
    (**(code **)(param_1 + 0x230))(param_1 + 0x210);
  }
  return 1;
}



// FUNCTION 144d67f40 FUN_144d67f40 body=456 status=ok
// SIG undefined FUN_144d67f40(void)

void FUN_144d67f40(void *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  FUN_144d68110();
  if (DAT_14c7addf8 != (code *)0x0) {
    (*DAT_14c7addf8)(param_1);
  }
  FUN_144d69870(param_1);
  FUN_144d6a2f0(param_1);
  FUN_144d6ab50(param_1);
  uVar2 = 0;
  if ((*(uint *)((longlong)param_1 + 0x20) & 0x10000000) == 0) {
    FUN_1451562f0((longlong)param_1 + 0x3a0);
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
    FUN_1451563e0((longlong)param_1 + 0x3a0);
  }
  if (DAT_14c792270 == param_1) {
    DAT_14c792270 = (void *)0x0;
  }
  if (DAT_14c792264 != 0) {
    FUN_1451562f0(&DAT_14c791c90);
  }
  if (*(int *)((longlong)param_1 + 300) != 0) {
    do {
      lVar3 = uVar2 * 0x1c0 + *(longlong *)((longlong)param_1 + 0x1b8);
      (**(code **)(lVar3 + 0x1a8))(lVar3);
      DAT_14c7921d0 = DAT_14c7921d0 + -1;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 300));
  }
  if (DAT_14c792264 != 0) {
    FUN_1451563e0(&DAT_14c791c90);
  }
  if (*(longlong *)((longlong)param_1 + 0x6b8) != 0) {
    FUN_1451571c0();
  }
  lVar3 = *(longlong *)((longlong)param_1 + 0x1f8);
  if (lVar3 == 0) {
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791d10);
    }
    (**(code **)((longlong)param_1 + 0x238))((longlong)param_1 + 0x210);
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791d10);
    }
    lVar3 = *(longlong *)((longlong)param_1 + 0x5e0);
  }
  else if ((*(uint *)((longlong)param_1 + 0x20) & 0x14000000) != 0) goto LAB_144d680b2;
  FUN_1451571c0(lVar3);
LAB_144d680b2:
  FUN_144d6a190(param_1);
  FUN_144d6aa20(param_1);
  if (*(longlong *)((longlong)param_1 + 0x6a8) != 0) {
    FUN_1451571c0();
  }
  if (*(longlong *)((longlong)param_1 + 0x6d0) != 0) {
    FUN_1451571c0();
  }
  memset(param_1,0,0x6e8);
  FUN_1451571c0((longlong)param_1 - (ulonglong)*(uint *)((longlong)param_1 + -4));
  return;
}



// FUNCTION 144d68110 FUN_144d68110 body=446 status=ok
// SIG undefined FUN_144d68110(void)

int FUN_144d68110(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar6 = false;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x11c) != param_2) {
    iVar2 = FUN_145141010();
    iVar1 = *(int *)(param_1 + 0x640);
    if (iVar1 - 1U < 0xfffffffe) {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + (iVar2 - iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    *(int *)(param_1 + 0x11c) = param_2;
    *(undefined4 *)(param_1 + 0x680) = 0;
    if ((*(int *)(param_1 + 300) != 0) &&
       ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar2 < 1 || (iVar2 == 2)))) {
      FUN_1451562f0(param_1 + 0x520);
    }
    if (*(int *)(param_1 + 300) != 0) {
      do {
        lVar5 = uVar4 * 0x1c0 + *(longlong *)(param_1 + 0x1b8);
        (**(code **)(lVar5 + 0x198))(lVar5,param_2);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 300));
    }
    iVar2 = FUN_145141010();
    if (param_2 == 0) {
      bVar6 = iVar1 != 0;
    }
    else {
      if (*(int *)(param_1 + 300) == 0) {
        *(undefined4 *)(param_1 + 0x69c) = 0;
        *(undefined4 *)(param_1 + 0x644) = 0;
      }
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x644) == 0) {
          *(undefined4 *)(param_1 + 0x69c) = 0;
        }
        else {
          *(int *)(param_1 + 0x69c) = iVar2 - *(int *)(param_1 + 0x644);
        }
      }
    }
    if (*(int *)(param_1 + 300) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c);
      if ((iVar1 < 1) || (iVar1 == 2)) {
        FUN_1451563e0(param_1 + 0x520);
      }
      if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1))
      {
        FUN_144d6a3e0(param_1);
      }
    }
    if (bVar6) {
      *(int *)(param_1 + 0x644) = iVar2 - *(int *)(param_1 + 0x69c);
    }
    if (DAT_14c79227c != 0) {
      FUN_145156630(&DAT_14c791e90,1);
    }
    return *(int *)(param_1 + 0x11c);
  }
  return param_2;
}



// FUNCTION 144d682d0 FUN_144d682d0 body=736 status=ok
// SIG undefined FUN_144d682d0(void)

void FUN_144d682d0(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 != 0) &&
     (((((((*(int *)(param_1 + 0x10c) == 0 && *(int *)(param_1 + 0x108) == 0) &&
          *(int *)(param_1 + 0x104) == 0) && *(int *)(param_1 + 0x100) == 0) &&
        *(int *)(param_1 + 0xfc) == 0) && *(int *)(param_1 + 0xf8) == 0) &&
      *(int *)(param_1 + 0xf4) == 0) && *(int *)(param_1 + 0xf0) == 0)) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    else if (*(uint *)(param_1 + 8) < param_2) {
      param_2 = *(uint *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x68c) = 0;
    if (*(uint *)(param_1 + 8) < param_2) {
      param_2 = *(uint *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 1;
    uVar3 = param_2;
    if (((param_3 & 2) == 0) && (*(int *)(param_1 + 300) != 0)) {
      uVar3 = (*(int *)(param_1 + 0x670) + -1 + *(uint *)(param_1 + 0x674)) /
              *(uint *)(param_1 + 0x674);
      if (uVar3 < param_2) {
        uVar3 = param_2 - uVar3;
      }
      else {
        uVar3 = 1;
      }
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 != param_2) {
      if ((param_3 & 3) == 3) {
        FUN_144d6adc0(param_1,param_2);
      }
      else {
        uVar4 = param_2;
        if ((param_3 & 1) == 0) {
          uVar4 = FUN_144d685b0(param_1,param_2,0);
        }
        iVar6 = 0;
        uVar5 = uVar4;
        if ((uVar3 < uVar4) &&
           (((uVar5 = uVar3, param_2 < uVar1 || (uVar1 < uVar3)) || (iVar6 = 0, (param_3 & 2) == 0))
           )) {
          iVar6 = *(int *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        if (((param_2 < uVar1) || (uVar1 < uVar5)) &&
           (FUN_144d6adc0(param_1,uVar5), uVar5 == param_2)) {
          *(undefined4 *)(param_1 + 0x2e0) = 0;
          if (*(int *)(param_1 + 0x40) == 0) {
            return;
          }
          FUN_144d686e0(param_1,0);
          FUN_144d686e0(param_1,1);
          return;
        }
        if ((*(int *)(param_1 + 300) != 0) &&
           ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar2 < 1 || (iVar2 == 2)))) {
          FUN_1451562f0(param_1 + 0x520);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        if (iVar2 != 0) {
          FUN_144d686e0(param_1,0);
        }
        if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x67c)) {
          FUN_144d67be0(param_1);
          *(undefined4 *)(param_1 + 0x120) = 1;
        }
        FUN_144d67c20(param_1);
        uVar3 = *(uint *)(param_1 + 0xc);
        while (uVar3 != param_2) {
          if (*(int *)(param_1 + 0x48) != 0) {
            FUN_1451562f0(param_1 + 0x3a0);
            if (*(int *)(param_1 + 0x48) != 0) {
              (**(code **)(param_1 + 0x230))(param_1 + 0x210);
            }
            FUN_1451563e0(param_1 + 0x3a0);
          }
          if ((iVar6 != 0) && (*(uint *)(param_1 + 0xc) == uVar4)) {
            *(undefined4 *)(param_1 + 0x44) = 1;
            iVar6 = 0;
          }
          uVar3 = FUN_145155c30(param_1 + 0x130,1,1);
          if (uVar3 != 0) {
            FUN_144d6d0e0(param_1,uVar3 | 0x300);
          }
          *(undefined4 *)(param_1 + 0x120) = 1;
          FUN_144d67c20(param_1);
          uVar3 = *(uint *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
        if (iVar6 != 0) {
          *(undefined4 *)(param_1 + 0x44) = 1;
        }
        if ((*(int *)(param_1 + 300) != 0) &&
           ((iVar6 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar6 < 1 || (iVar6 == 2)))) {
          FUN_1451563e0(param_1 + 0x520);
        }
        if (iVar2 != 0) {
          FUN_144d686e0(param_1,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 144d685b0 FUN_144d685b0 body=253 status=ok
// SIG undefined FUN_144d685b0(void)

ulonglong FUN_144d685b0(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    uVar4 = 1;
    if (param_2 != 0) {
      uVar4 = (ulonglong)param_2;
    }
    uVar3 = (uint)uVar4;
    if ((-1 < (char)param_3) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + (ulonglong)(uVar3 - 1) * 8) & 1) != 0)) {
      return uVar4;
    }
    param_3 = param_3 & 0x7f;
    if (param_3 == 0) {
      iVar6 = uVar3 - 2;
      if (0 < iVar6) {
        lVar5 = (longlong)iVar6;
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0x1c8) + lVar5 * 8);
        do {
          if ((*pbVar2 & 1) != 0) break;
          iVar6 = iVar6 + -1;
          lVar5 = lVar5 + -1;
          pbVar2 = pbVar2 + -8;
        } while (0 < lVar5);
      }
      return (ulonglong)(iVar6 + 1);
    }
    if (param_3 == 1) {
      if (uVar3 < *(uint *)(param_1 + 8)) {
        do {
          lVar5 = uVar4 * 8;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + lVar5) & 1) != 0) {
            return uVar4;
          }
        } while (uVar3 < *(uint *)(param_1 + 8));
        return 0;
      }
    }
    else if (param_3 == 2) {
      iVar6 = uVar3 - 2;
      lVar5 = (longlong)iVar6;
      do {
        uVar3 = (uint)uVar4;
        if (lVar5 < 0) {
          if (*(uint *)(param_1 + 8) <= uVar3) {
            return 0;
          }
          bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1c8) + uVar4 * 8);
LAB_144d6863f:
          uVar4 = (ulonglong)(uVar3 + 1);
          if ((bVar1 & 1) != 0) {
            return uVar4;
          }
        }
        else {
          if ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + lVar5 * 8) & 1) != 0) {
            return (ulonglong)(iVar6 + 1);
          }
          if (uVar3 < *(uint *)(param_1 + 8)) {
            bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1c8) + uVar4 * 8);
            goto LAB_144d6863f;
          }
        }
        iVar6 = iVar6 + -1;
        lVar5 = lVar5 + -1;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 144d686b0 FUN_144d686b0 body=46 status=ok
// SIG undefined FUN_144d686b0(void)

void FUN_144d686b0(void)

{
  if (DAT_14c7921a0 != (code *)0x0) {
    (*DAT_14c7921a0)();
  }
  if (DAT_14c7921a8 != (code *)0x0) {
    (*DAT_14c7921a8)();
  }
  FUN_144d6aad0();
  FUN_144d6a230();
  return;
}



// FUNCTION 144d686e0 FUN_144d686e0 body=411 status=ok
// SIG undefined FUN_144d686e0(void)

ulonglong FUN_144d686e0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 300) == 0) {
      *(undefined4 *)(param_1 + 0x69c) = 0;
      *(undefined4 *)(param_1 + 0x644) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
      uVar6 = uVar4;
      uVar9 = uVar4;
      do {
        lVar7 = uVar6 * 0x1c0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x1a0 + lVar7) != 0) {
          if (((int)uVar9 == 0) &&
             ((iVar2 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar2 < 1 || (iVar2 == 2))))
          {
            if (iVar2 < 0) {
              uVar9 = 1;
              if (DAT_14c792264 == 0) goto LAB_144d6879e;
              puVar3 = &DAT_14c791c90;
            }
            else {
              uVar9 = 2;
              puVar3 = (undefined *)(param_1 + 0x520);
            }
            FUN_1451562f0(puVar3);
          }
LAB_144d6879e:
          lVar8 = *(longlong *)(param_1 + 0x1b8) + lVar7;
          iVar2 = (**(code **)(lVar8 + 0x1a0))(lVar8,param_2 != 0);
          if (iVar2 == 0) {
            if (iVar1 != 0) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar7) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10 + lVar7);
              *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x28 + lVar7) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10 + lVar7);
              *(undefined4 *)(param_1 + 0x40) = 0;
            }
          }
          else {
            uVar4 = 1;
            if (iVar1 == 0) {
              if ((*(int *)(param_1 + 0xc) != 1) || (*(int *)(param_1 + 0x67c) == 1)) {
                FUN_144d6ac10(*(longlong *)(param_1 + 0x1b8) + lVar7);
              }
              *(undefined4 *)(param_1 + 0x40) = 1;
              *(undefined4 *)(param_1 + 0x644) = 0;
              *(undefined4 *)(param_1 + 0x69c) = 0;
            }
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 300));
      if ((int)uVar9 != 0) {
        if ((int)uVar9 == 1) {
          if (DAT_14c792264 == 0) {
            return uVar4;
          }
          puVar3 = &DAT_14c791c90;
        }
        else {
          puVar3 = (undefined *)(param_1 + 0x520);
        }
        FUN_1451563e0(puVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 144d68880 FUN_144d68880 body=151 status=ok
// SIG undefined FUN_144d68880(void)

void FUN_144d68880(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 300);
    if ((iVar1 != 0) && (uVar5 = 0, 0 < iVar1)) {
      piVar3 = *(int **)(param_1 + 200);
      uVar7 = uVar5;
      while (iVar6 = (int)uVar7,
            *(int *)(*(longlong *)(param_1 + 0x1f0) + (longlong)*piVar3 * 4) != param_2) {
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 1;
        if ((longlong)iVar1 <= (longlong)uVar5) {
          return;
        }
      }
      if (iVar6 != -1) {
        lVar4 = (longlong)iVar6 * 0x1c0 + *(longlong *)(param_1 + 0x1b8);
        pcVar2 = *(code **)(lVar4 + 0x188);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(lVar4,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 144d68920 FUN_144d68920 body=1342 status=ok
// SIG undefined FUN_144d68920(void)

void FUN_144d68920(longlong param_1,int param_2,longlong param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  code *local_c0;
  undefined8 local_b8;
  float local_b0 [10];
  ulonglong local_88 [2];
  undefined4 local_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_1 == 0) {
    return;
  }
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar2 = *(int *)(param_1 + 300);
  local_b8 = param_1;
  if ((iVar2 != 0) && (uVar8 = 0, 0 < iVar2)) {
    piVar4 = *(int **)(param_1 + 200);
    uVar6 = uVar8;
    uVar10 = uVar8;
    do {
      iVar7 = (int)uVar10;
      if (*(int *)(*(longlong *)(param_1 + 0x1f0) + (longlong)*piVar4 * 4) == param_2) {
        if (iVar7 != -1) {
          local_c8 = (longlong)iVar7 * 0x1c0 + *(longlong *)(param_1 + 0x1b8);
          local_c0 = *(code **)(local_c8 + 0x1b0);
          if (local_c0 != (code *)0x0) {
            uVar9 = 8;
            if (param_5 < 9) {
              uVar9 = param_5;
            }
            if (param_4 == 0) {
              if (uVar9 == 0) goto LAB_144d68bce;
              pfVar5 = local_b0;
              for (uVar6 = (ulonglong)uVar9; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pfVar5 = 1.0;
                pfVar5 = pfVar5 + 1;
              }
            }
            else {
              if (uVar9 == 0) goto LAB_144d68bce;
              uVar6 = uVar8;
              if (7 < uVar9) {
                do {
                  piVar4 = (int *)(param_4 + uVar6 * 4);
                  iVar2 = piVar4[1];
                  iVar7 = piVar4[2];
                  iVar3 = piVar4[3];
                  uVar15 = -(uint)(*piVar4 < 0x10000);
                  uVar16 = -(uint)(iVar2 < 0x10000);
                  uVar17 = -(uint)(iVar7 < 0x10000);
                  uVar18 = -(uint)(iVar3 < 0x10000);
                  local_b0[uVar6] =
                       (float)((uint)((float)*piVar4 * 3.0517578e-05) & uVar15 |
                              ~uVar15 & 0x40000000);
                  local_b0[uVar6 + 1] =
                       (float)((uint)((float)iVar2 * 3.0517578e-05) & uVar16 | ~uVar16 & 0x40000000)
                  ;
                  local_b0[uVar6 + 2] =
                       (float)((uint)((float)iVar7 * 3.0517578e-05) & uVar17 | ~uVar17 & 0x40000000)
                  ;
                  local_b0[uVar6 + 3] =
                       (float)((uint)((float)iVar3 * 3.0517578e-05) & uVar18 | ~uVar18 & 0x40000000)
                  ;
                  uVar10 = (ulonglong)((int)uVar6 + 4);
                  uVar15 = (int)uVar6 + 8;
                  uVar6 = (ulonglong)uVar15;
                  piVar4 = (int *)(param_4 + uVar10 * 4);
                  iVar2 = piVar4[1];
                  iVar7 = piVar4[2];
                  iVar3 = piVar4[3];
                  uVar16 = -(uint)(*piVar4 < 0x10000);
                  uVar17 = -(uint)(iVar2 < 0x10000);
                  uVar18 = -(uint)(iVar7 < 0x10000);
                  uVar19 = -(uint)(iVar3 < 0x10000);
                  local_b0[uVar10] =
                       (float)((uint)((float)*piVar4 * 3.0517578e-05) & uVar16 |
                              ~uVar16 & 0x40000000);
                  local_b0[uVar10 + 1] =
                       (float)((uint)((float)iVar2 * 3.0517578e-05) & uVar17 | ~uVar17 & 0x40000000)
                  ;
                  local_b0[uVar10 + 2] =
                       (float)((uint)((float)iVar7 * 3.0517578e-05) & uVar18 | ~uVar18 & 0x40000000)
                  ;
                  local_b0[uVar10 + 3] =
                       (float)((uint)((float)iVar3 * 3.0517578e-05) & uVar19 | ~uVar19 & 0x40000000)
                  ;
                } while (uVar15 < uVar9 - (uVar9 & 7));
              }
              uVar15 = (uint)uVar6;
              if (uVar15 < uVar9) {
                if (3 < uVar9 - uVar15) {
                  piVar4 = (int *)(param_4 + (uVar6 + 2) * 4);
                  uVar16 = ((uVar9 - uVar15) - 4 >> 2) + 1;
                  uVar6 = (ulonglong)uVar16;
                  uVar15 = uVar15 + uVar16 * 4;
                  do {
                    if (piVar4[-2] < 0x10000) {
                      fVar14 = (float)piVar4[-2] * 3.0517578e-05;
                    }
                    else {
                      fVar14 = 2.0;
                    }
                    iVar2 = piVar4[-1];
                    *(float *)((longlong)&local_b8 + -param_4 + (longlong)piVar4) = fVar14;
                    if (iVar2 < 0x10000) {
                      fVar14 = (float)iVar2 * 3.0517578e-05;
                    }
                    else {
                      fVar14 = 2.0;
                    }
                    iVar2 = *piVar4;
                    *(float *)((longlong)&local_b8 + -param_4 + 4 + (longlong)piVar4) = fVar14;
                    if (iVar2 < 0x10000) {
                      fVar14 = (float)iVar2 * 3.0517578e-05;
                    }
                    else {
                      fVar14 = 2.0;
                    }
                    iVar2 = piVar4[1];
                    *(float *)((longlong)local_b0 + -param_4 + (longlong)piVar4) = fVar14;
                    if (iVar2 < 0x10000) {
                      fVar14 = (float)iVar2 * 3.0517578e-05;
                    }
                    else {
                      fVar14 = 2.0;
                    }
                    *(float *)((longlong)local_b0 + -param_4 + 4 + (longlong)piVar4) = fVar14;
                    piVar4 = piVar4 + 4;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                if (uVar15 < uVar9) {
                  pfVar5 = local_b0 + uVar15;
                  uVar6 = (ulonglong)(uVar9 - uVar15);
                  do {
                    iVar2 = *(int *)((param_4 - (longlong)local_b0) + (longlong)pfVar5);
                    if (iVar2 < 0x10000) {
                      fVar14 = (float)iVar2 * 3.0517578e-05;
                    }
                    else {
                      fVar14 = 2.0;
                    }
                    *pfVar5 = fVar14;
                    pfVar5 = pfVar5 + 1;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
              }
            }
            if (uVar9 == 0) {
LAB_144d68bce:
              local_b0[0] = 1.0;
            }
            local_88[0] = 0;
            local_88[1] = 0;
            _local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            bVar13 = *(int *)(local_c8 + 0x38) == 2;
            uVar15 = *(int *)(local_c8 + 0x38) - 1;
            if (param_3 == 0) {
              uVar6 = uVar8;
              uVar10 = uVar8;
              uVar11 = uVar8;
              uVar12 = uVar8;
              if (1 < uVar9) {
                uVar6 = 1;
                uVar12 = 1;
                uVar10 = 1;
                if (4 < uVar9) {
                  uVar11 = 4;
                  uVar12 = 4;
                  uVar10 = 4;
                  uVar8 = 4;
                  if (5 < uVar9) {
                    uVar12 = 5;
                    uVar10 = 5;
                    if (6 < uVar9) {
                      uVar10 = 6;
                      uVar8 = 6;
                      if (7 < uVar9) {
                        uVar10 = 7;
                        uVar6 = 1;
                        uVar8 = 6;
                        uVar11 = 4;
                      }
                    }
                  }
                }
              }
              local_88[0] = (ulonglong)(uint)local_b0[0];
              *(float *)((longlong)local_88 + (ulonglong)(uVar15 + (1 << bVar13)) * 4) =
                   local_b0[uVar6];
              if (uVar15 == 1) {
                local_b0[2] = local_b0[2] * 0.5;
                local_b0[3] = local_b0[3] * 0.5;
                _local_78 = CONCAT44(local_b0[2],local_78);
                local_70 = CONCAT44(local_70._4_4_,local_b0[3]);
              }
              *(float *)((longlong)local_88 + (longlong)(2 << bVar13) * 4) = local_b0[2];
              *(float *)((longlong)local_88 + (ulonglong)((3 << bVar13) + uVar15) * 4) = local_b0[3]
              ;
              *(float *)((longlong)local_88 + (longlong)(4 << bVar13) * 4) = local_b0[uVar11];
              *(float *)((longlong)local_88 + (ulonglong)((5 << bVar13) + uVar15) * 4) =
                   local_b0[uVar12];
              *(float *)((longlong)local_88 + (longlong)(6 << bVar13) * 4) = local_b0[uVar8];
              *(float *)((longlong)local_88 + (ulonglong)(uVar15 + (7 << bVar13)) * 4) =
                   local_b0[uVar10];
            }
            else {
              if (3 < uVar9) {
                uVar16 = 2;
                piVar4 = (int *)(param_3 + 8);
                do {
                  piVar1 = piVar4 + 4;
                  uVar17 = (uint)uVar8;
                  uVar18 = uVar17 + 4;
                  uVar8 = (ulonglong)uVar18;
                  *(undefined4 *)
                   ((longlong)local_88 + (ulonglong)((piVar4[-2] << bVar13) + (uVar15 & uVar17)) * 4
                   ) = *(undefined4 *)((longlong)&local_c8 + -param_3 + (longlong)piVar1);
                  *(undefined4 *)
                   ((longlong)local_88 +
                   (ulonglong)((piVar4[-1] << bVar13) + (uVar16 - 1 & uVar15)) * 4) =
                       *(undefined4 *)((longlong)&local_c8 + -param_3 + 4 + (longlong)piVar1);
                  *(undefined4 *)
                   ((longlong)local_88 + (ulonglong)((*piVar4 << bVar13) + (uVar16 & uVar15)) * 4) =
                       *(undefined4 *)((longlong)&local_c0 + -param_3 + (longlong)piVar1);
                  uVar17 = uVar16 + 1;
                  uVar16 = uVar16 + 4;
                  *(undefined4 *)
                   ((longlong)local_88 + (ulonglong)((piVar4[1] << bVar13) + (uVar17 & uVar15)) * 4)
                       = *(undefined4 *)((longlong)&local_c0 + -param_3 + 4 + (longlong)piVar1);
                  piVar4 = piVar1;
                } while (uVar18 < uVar9 - 3);
              }
              if ((uint)uVar8 < uVar9) {
                piVar4 = (int *)(param_3 + uVar8 * 4);
                do {
                  uVar16 = (uint)uVar8;
                  uVar17 = uVar16 + 1;
                  uVar8 = (ulonglong)uVar17;
                  *(undefined4 *)
                   ((longlong)local_88 + (ulonglong)((*piVar4 << bVar13) + (uVar15 & uVar16)) * 4) =
                       *(undefined4 *)((longlong)piVar4 + ((longlong)local_b0 - param_3));
                  piVar4 = piVar4 + 1;
                } while (uVar17 < uVar9);
              }
            }
            if (uVar9 < 8) {
              uVar9 = 8;
            }
            uVar15 = *(uint *)(local_b8 + 0x638);
            if ((uVar15 != 0) && (uVar15 < uVar9)) {
              uVar9 = uVar15;
            }
            (*local_c0)(local_c8,local_88,uVar9);
          }
        }
        break;
      }
      uVar10 = (ulonglong)(iVar7 + 1);
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144d68e70 FUN_144d68e70 body=69 status=ok
// SIG undefined FUN_144d68e70(void)

ulonglong FUN_144d68e70(longlong param_1)

{
  ulonglong uVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x1c) == 0)) && (*(int *)(param_1 + 0x11c) == 0)) &&
     (((*(int *)(param_1 + 300) != 0 && (*(int *)(param_1 + 0x40) != 0)) &&
      (*(int *)(param_1 + 0xc) + 2U < *(uint *)(param_1 + 8))))) {
    if (*(int *)(param_1 + 0x68c) != 0) {
      return (ulonglong)(*(int *)(param_1 + 0x68c) - 1);
    }
    uVar1 = FUN_144d6cb10(param_1,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d68ec0 FUN_144d68ec0 body=106 status=ok
// SIG undefined FUN_144d68ec0(void)

void FUN_144d68ec0(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  if ((((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) &&
      (param_3 != (undefined *)0x0)) && (param_4 != (undefined *)0x0)) {
    PTR_FUN_14c7077f0 = param_1;
    PTR_FUN_14c7077f8 = param_2;
    PTR_FUN_14c707800 = param_3;
    PTR_FUN_14c707808 = param_4;
    return;
  }
  PTR_FUN_14c7077f0 = FUN_145140e70;
  PTR_FUN_14c7077f8 = FUN_145140f20;
  PTR_FUN_14c707800 = FUN_145140fc0;
  PTR_FUN_14c707808 = FUN_145140ff0;
  return;
}



// FUNCTION 144d68f30 FUN_144d68f30 body=25 status=ok
// SIG undefined FUN_144d68f30(void)

void FUN_144d68f30(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80;
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f;
  }
  return;
}



// FUNCTION 144d68f50 FUN_144d68f50 body=636 status=ok
// SIG undefined FUN_144d68f50(void)

void FUN_144d68f50(longlong param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [576];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1451571f0(local_288,0x20);
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    iVar1 = FUN_145155e60(*(undefined4 *)(param_1 + 0x118));
    uVar7 = param_2[1];
    if (iVar1 == 0) {
      uVar4 = param_2[3] + 0xfU & 0xfffffff0;
    }
    else {
      uVar4 = 0x40;
      if (0x3f < param_3) {
        uVar4 = param_3;
      }
      uVar7 = (uVar7 - 1) + uVar4 & ~(uVar4 - 1);
      uVar4 = param_2[3] + -1 + uVar4 & ~(uVar4 - 1);
    }
    if (*param_2 == 3) {
      *param_2 = 2;
    }
    iVar6 = 0;
    iVar1 = 0;
    if (0 < *param_2) {
      puVar3 = (uint *)(param_2 + 9);
      iVar1 = iVar6;
      do {
        if (puVar3[-1] != 0) {
          FUN_145157220(local_288,param_2 + (longlong)iVar1 * 0x14 + 6,param_2[2] * uVar7);
          iVar6 = 1;
          *puVar3 = uVar7;
        }
        if (puVar3[3] != 0) {
          FUN_145157220(local_288,param_2 + (longlong)iVar1 * 0x14 + 10,param_2[4] * uVar4);
          iVar6 = 1;
          puVar3[4] = uVar4;
        }
        if (puVar3[7] != 0) {
          FUN_145157220(local_288,param_2 + (longlong)iVar1 * 0x14 + 0xe,param_2[4] * uVar4);
          iVar6 = 1;
          puVar3[8] = uVar4;
        }
        if (puVar3[0xb] != 0) {
          FUN_145157220(local_288,param_2 + (longlong)iVar1 * 0x14 + 0x12,param_2[2] * uVar7);
          iVar6 = 1;
          puVar3[0xc] = uVar7;
        }
        if (puVar3[0xf] != 0) {
          FUN_145157220(local_288,param_2 + (longlong)iVar1 * 0x14 + 0x16,param_2[2] * uVar7);
          iVar6 = 1;
          puVar3[0x10] = uVar7;
        }
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 0x14;
      } while (iVar1 < *param_2);
    }
    lVar5 = (longlong)iVar1;
    if (lVar5 < 3) {
      param_2 = param_2 + lVar5 * 0x14 + 0xe;
      lVar5 = 3 - lVar5;
      do {
        param_2[-4] = 0;
        param_2[-3] = 0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[-8] = 0;
        param_2[-7] = 0;
        param_2 = param_2 + 0x14;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (iVar6 != 0) {
      lVar5 = FUN_145157280(local_288);
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + lVar5 + 0x108;
      uVar2 = FUN_145157290(local_288,0x108);
      *(undefined8 *)(param_1 + 0x6a8) = uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 144d691e0 FUN_144d691e0 body=689 status=ok
// SIG undefined FUN_144d691e0(void)

undefined8 FUN_144d691e0(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  char cVar6;
  int local_res8 [2];
  int local_res10 [2];
  ulonglong local_res18 [2];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  if (param_2 == 0) {
    FUN_1451571c0(*(undefined8 *)(param_1 + 0x6d0));
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_14c7077f0)(local_28,param_2,local_res18);
  if (iVar1 == 0) {
    pcVar2 = &DAT_14c792090;
    DAT_14c792090 = 0x45;
    iVar1 = 1;
    cVar6 = 'E';
    do {
      if (cVar6 == '\0') {
        return 0;
      }
      cVar6 = pcVar2[-0x2dbdfb7];
      pcVar2 = pcVar2 + 1;
      iVar1 = iVar1 + 1;
      *pcVar2 = cVar6;
    } while (iVar1 != 0xff);
    *pcVar2 = '\0';
  }
  else {
    if (local_res18[0] < 0x100000) {
      if ((*(longlong *)(param_1 + 0x6d0) != 0) && (*(uint *)(param_1 + 0x6e0) < local_res18[0])) {
        FUN_1451571c0();
        *(undefined8 *)(param_1 + 0x6d0) = 0;
        *(undefined4 *)(param_1 + 0x6e0) = 0;
      }
      if (*(longlong *)(param_1 + 0x6d0) != 0) {
LAB_144d692e4:
        uVar4 = (*(code *)PTR_FUN_14c7077f8)(local_28,*(undefined8 *)(param_1 + 0x6d0));
        (*(code *)PTR_FUN_14c707808)(local_28);
        if (local_res18[0] == uVar4) {
          local_res8[0] = 0;
          puVar5 = (uint *)FUN_144d6de00(*(longlong *)(param_1 + 0x6d0),
                                         *(longlong *)(param_1 + 0x6d0) + local_res18[0],local_res10
                                         ,local_res8);
          if (puVar5 != (uint *)0x0) {
            if (local_res8[0] != 0) {
              FUN_144d6dc40(puVar5 + 4,puVar5 + 4 + ((ulonglong)*puVar5 - 1) * 2);
            }
            *(uint **)(param_1 + 0x6d8) = puVar5;
            return 1;
          }
          iVar1 = 1;
          DAT_14c792090 = 0x45;
          pcVar2 = &DAT_14c792090;
          cVar6 = 'E';
          if (local_res10[0] == 1) {
            while (cVar6 != '\0') {
              cVar6 = pcVar2[-0x2dbdea7];
              pcVar2 = pcVar2 + 1;
              iVar1 = iVar1 + 1;
              *pcVar2 = cVar6;
              if (iVar1 == 0xff) {
                *pcVar2 = '\0';
                return 0;
              }
            }
          }
          else {
            while (cVar6 != '\0') {
              cVar6 = pcVar2[-0x2dbde7f];
              pcVar2 = pcVar2 + 1;
              iVar1 = iVar1 + 1;
              *pcVar2 = cVar6;
              if (iVar1 == 0xff) {
                *pcVar2 = '\0';
                return 0;
              }
            }
          }
        }
        else {
          pcVar2 = &DAT_14c792090;
          DAT_14c792090 = 0x45;
          iVar1 = 1;
          cVar6 = 'E';
          do {
            if (cVar6 == '\0') {
              return 0;
            }
            cVar6 = pcVar2[-0x2dbdebf];
            pcVar2 = pcVar2 + 1;
            iVar1 = iVar1 + 1;
            *pcVar2 = cVar6;
          } while (iVar1 != 0xff);
          *pcVar2 = '\0';
        }
        return 0;
      }
      lVar3 = FUN_144d696e0(0,param_1,local_res18[0]);
      *(longlong *)(param_1 + 0x6d0) = lVar3;
      if (lVar3 != 0) {
        *(int *)(param_1 + 0x6e0) = (int)local_res18[0];
        goto LAB_144d692e4;
      }
    }
    (*(code *)PTR_FUN_14c707808)(local_28);
    pcVar2 = &DAT_14c792090;
    DAT_14c792090 = 0x4f;
    iVar1 = 1;
    cVar6 = 'O';
    while (cVar6 != '\0') {
      cVar6 = pcVar2[-0x2dbdf17];
      pcVar2 = pcVar2 + 1;
      iVar1 = iVar1 + 1;
      *pcVar2 = cVar6;
      if (iVar1 == 0xff) {
        *pcVar2 = '\0';
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144d694a0 FUN_144d694a0 body=124 status=ok
// SIG undefined FUN_144d694a0(void)

undefined8 FUN_144d694a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x6d8) != 0)) {
    uVar1 = FUN_144d6d400(*(longlong *)(param_1 + 0x6d8),
                          (((ulonglong)*(uint *)(param_1 + 0x18) *
                            (ulonglong)*(uint *)(param_1 + 0xc) * 1000) /
                           (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x4c) >> 0x10,
                          param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d69520 FUN_144d69520 body=196 status=ok
// SIG undefined FUN_144d69520(void)

bool FUN_144d69520(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if (param_1 != (code *)0x0) {
    FUN_144d697a0();
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791c90);
    }
    if ((((DAT_14c7921b8 == 0) && (DAT_14c7921b0 == (code *)0x0)) &&
        (pcVar1 = param_1, DAT_14c7921c0 == 0)) ||
       ((pcVar1 = DAT_14c7921b0, DAT_14c7921b0 == param_1 || (pcVar1 = param_1, DAT_14c7921d0 == 0))
       )) {
      DAT_14c7921b0 = pcVar1;
      DAT_14c7921c8 = (*DAT_14c7921b0)(param_2);
      if (DAT_14c792264 != 0) {
        FUN_1451563e0(&DAT_14c791c90);
      }
      return DAT_14c7921c8 != 0;
    }
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791c90);
    }
  }
  return false;
}



// FUNCTION 144d695f0 FUN_144d695f0 body=216 status=ok
// SIG undefined FUN_144d695f0(void)

bool FUN_144d695f0(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (param_1 != (code *)0x0) {
    FUN_144d697a0();
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791c90);
    }
    if ((((DAT_14c7921b8 == (code *)0x0) && (DAT_14c7921b0 == 0)) &&
        (pcVar1 = param_1, DAT_14c7921c0 == 0)) ||
       ((pcVar1 = DAT_14c7921b8, DAT_14c7921b8 == param_1 || (pcVar1 = param_1, DAT_14c7921d0 == 0))
       )) {
      DAT_14c7921b8 = pcVar1;
      DAT_14c7921c8 = (*DAT_14c7921b8)(param_2,param_3);
      if (DAT_14c792264 != 0) {
        FUN_1451563e0(&DAT_14c791c90);
      }
      return DAT_14c7921c8 != 0;
    }
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791c90);
    }
  }
  return false;
}



// FUNCTION 144d696d0 thunk_FUN_1451570e0 body=5 status=ok
// SIG undefined thunk_FUN_1451570e0(void)

void thunk_FUN_1451570e0(undefined8 param_1,undefined8 param_2)

{
  DAT_14c7adb80 = param_1;
  DAT_14c7adb88 = param_2;
  return;
}



// FUNCTION 144d696e0 FUN_144d696e0 body=65 status=ok
// SIG undefined FUN_144d696e0(void)

void FUN_144d696e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145157280();
  *(longlong *)(param_2 + 0xe0) = *(longlong *)(param_2 + 0xe0) + lVar1 + param_3;
  FUN_145157290(param_1,param_3);
  return;
}



// FUNCTION 144d69730 FUN_144d69730 body=99 status=ok
// SIG undefined FUN_144d69730(void)

void FUN_144d69730(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_145155f20(&DAT_14c792278,1);
  while (iVar1 != 0) {
    FUN_145155f20(&DAT_14c792278,0xffffffff);
    FUN_145156730();
    uVar2 = uVar2 + 1;
    if (0x1ff < uVar2) {
      uVar2 = 0;
      FUN_1451566c0(1);
    }
    iVar1 = FUN_145155f20(&DAT_14c792278,1);
  }
  return;
}



// FUNCTION 144d697a0 FUN_144d697a0 body=112 status=ok
// SIG undefined FUN_144d697a0(void)

void FUN_144d697a0(void)

{
  code *pcVar1;
  int iVar2;
  
  FUN_144d69730();
  if (DAT_14c792264 == 0) {
    iVar2 = FUN_145156190(&DAT_14c791c10,2);
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_145156190(&DAT_14c791c90,1);
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_145156190(&DAT_14c791d10,1);
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    DAT_14c792264 = 1;
  }
  FUN_145155f20(&DAT_14c792278,0xffffffff);
  return;
}



// FUNCTION 144d69810 FUN_144d69810 body=93 status=ok
// SIG undefined FUN_144d69810(void)

void FUN_144d69810(longlong param_1)

{
  longlong lVar1;
  
  FUN_144d697a0();
  FUN_1451562f0(&DAT_14c791c10);
  for (lVar1 = DAT_14c792268; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
    if (lVar1 == param_1) goto LAB_144d6985c;
  }
  *(longlong *)(param_1 + 0xb8) = DAT_14c792268;
  DAT_14c792268 = param_1;
LAB_144d6985c:
  FUN_1451563e0(&DAT_14c791c10);
  return;
}



// FUNCTION 144d69870 FUN_144d69870 body=168 status=ok
// SIG undefined FUN_144d69870(void)

void FUN_144d69870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_1451562f0(&DAT_14c791c10);
    lVar2 = DAT_14c792268;
    if (DAT_14c792268 == param_1) {
      DAT_14c792268 = *(longlong *)(DAT_14c792268 + 0xb8);
    }
    else {
      do {
        lVar1 = lVar2;
        if (lVar1 == 0) goto LAB_144d698e5;
        lVar2 = *(longlong *)(lVar1 + 0xb8);
      } while (*(longlong *)(lVar1 + 0xb8) != param_1);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
    }
LAB_144d698e5:
    if (DAT_14c792270 == param_1) {
      DAT_14c792270 = 0;
    }
    FUN_1451563e0(&DAT_14c791c10);
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  return;
}



// FUNCTION 144d69920 FUN_144d69920 body=155 status=ok
// SIG undefined FUN_144d69920(void)

undefined8 FUN_144d69920(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  if ((*(int *)(param_1 + 0x2d8) == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar1 = (**(code **)(param_1 + 0x218))
                        (param_1 + 0x210,*(int *)(param_1 + 0xc) + -1,
                         *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xc0),
                         *(undefined4 *)(param_1 + 0x124));
      *(ulonglong *)(param_1 + 0x110) =
           (ulonglong)*(uint *)(param_1 + 0x124) + *(longlong *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 144d699c0 FUN_144d699c0 body=109 status=ok
// SIG undefined FUN_144d699c0(void)

undefined8 FUN_144d699c0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x2d8) != 0) || (*(int *)(param_1 + 0x4c) != 0)) {
    return 0;
  }
  if ((*(code **)(param_1 + 0x240) != (code *)0x0) &&
     (uVar1 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar1 & 1) != 0)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    uVar2 = (**(code **)(param_1 + 0x230))(param_1 + 0x210);
  }
  return uVar2;
}



// FUNCTION 144d69a30 FUN_144d69a30 body=162 status=ok
// SIG undefined FUN_144d69a30(void)

ulonglong FUN_144d69a30(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return 0x81;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x2d0);
  uVar2 = *(ulonglong *)(param_1 + 0x2c8);
  if (((uVar2 != 0) && (*(int *)(param_1 + 0x2d8) == 0)) && (*(int *)(param_1 + 0x4c) == 0)) {
    if ((*(code **)(param_1 + 0x240) != (code *)0x0) &&
       (uVar3 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar3 & 1) != 0)) {
      return 0x81;
    }
    if (uVar1 < uVar2) {
      return (uVar1 << 7) / uVar2;
    }
    return 0x80;
  }
  return 0x81;
}



// FUNCTION 144d69ae0 FUN_144d69ae0 body=959 status=ok
// SIG undefined FUN_144d69ae0(void)

undefined8 FUN_144d69ae0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  bool bVar9;
  
LAB_144d69b10:
  bVar9 = false;
  bVar1 = false;
  FUN_1451565e0(&DAT_14c791e90,0xffffffff);
LAB_144d69b22:
  if ((DAT_14c792284 != 0) || (DAT_14c792264 == 0)) goto LAB_144d69e6f;
  iVar4 = 0;
  FUN_1451562f0(&DAT_14c791c10);
  lVar8 = DAT_14c792270;
  if ((DAT_14c792270 == 0) ||
     (((*(int *)(DAT_14c792270 + 0x48) == 0 || (*(int *)(DAT_14c792270 + 0x1c) != 0)) ||
      ((*(uint *)(DAT_14c792270 + 0x20) & 0x8000000) != 0)))) {
    puVar7 = &DAT_14c791c10;
LAB_144d69bee:
    FUN_1451563e0(puVar7);
  }
  else {
    iVar4 = 1;
    iVar2 = FUN_145156340(DAT_14c792270 + 0x3a0);
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = FUN_145156340(lVar8 + 0x460), iVar3 == 0)) {
      FUN_1451563e0(lVar8 + 0x3a0);
    }
    FUN_1451563e0(&DAT_14c791c10);
    if (iVar3 != 0) {
      if (*(int *)(lVar8 + 0x48) != 0) {
        lVar6 = FUN_144d69920(lVar8);
        if (lVar6 != 0) {
          bVar9 = true;
          bVar1 = true;
        }
        iVar4 = 0;
      }
      FUN_1451563e0(lVar8 + 0x460);
      puVar7 = (undefined *)(lVar8 + 0x3a0);
      goto LAB_144d69bee;
    }
  }
  FUN_1451562f0(&DAT_14c791c10);
  for (lVar8 = DAT_14c792268; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0xb8)) {
    iVar3 = iVar4;
    if (((*(int *)(lVar8 + 0x48) != 0) && (*(int *)(lVar8 + 0x1c) == 0)) &&
       ((*(uint *)(lVar8 + 0x20) & 0x8000000) == 0)) {
      iVar3 = iVar4 + 1;
      iVar2 = FUN_145156340(lVar8 + 0x3a0);
      if (iVar2 != 0) {
        iVar2 = FUN_145156340(lVar8 + 0x460);
        if (iVar2 == 0) {
          FUN_1451563e0(lVar8 + 0x3a0);
        }
        else {
          FUN_1451563e0(&DAT_14c791c10);
          if ((*(int *)(lVar8 + 0x48) != 0) &&
             (lVar6 = FUN_144d69920(lVar8), iVar3 = iVar4, lVar6 != 0)) {
            bVar9 = true;
            bVar1 = true;
            DAT_14c792270 = lVar8;
          }
          iVar4 = FUN_145156340(&DAT_14c791c10);
          FUN_1451563e0(lVar8 + 0x460);
          FUN_1451563e0(lVar8 + 0x3a0);
          if (iVar4 == 0) goto LAB_144d69b22;
        }
      }
    }
    iVar4 = iVar3;
  }
  FUN_1451563e0(&DAT_14c791c10);
  if (!bVar1) {
    FUN_1451562f0(&DAT_14c791c10);
    lVar8 = DAT_14c792270;
    if ((((DAT_14c792270 == 0) || (*(int *)(DAT_14c792270 + 0x1c) != 0)) ||
        ((*(uint *)(DAT_14c792270 + 0x20) & 0x8000000) != 0)) ||
       (iVar3 = FUN_145156340(DAT_14c792270 + 0x460), iVar3 == 0)) {
      puVar7 = &DAT_14c791c10;
    }
    else {
      FUN_1451563e0(&DAT_14c791c10);
      if (*(int *)(lVar8 + 0x48) != 0) {
        FUN_1451563e0(lVar8 + 0x460);
        goto LAB_144d69b22;
      }
      lVar6 = FUN_144d699c0(lVar8);
      bVar9 = lVar6 != 0;
      puVar7 = (undefined *)(lVar8 + 0x460);
      if (bVar9) {
        bVar1 = true;
      }
    }
    FUN_1451563e0(puVar7);
  }
  lVar8 = DAT_14c792270;
  if (iVar4 == 0) {
    iVar3 = 0x81;
    FUN_1451562f0(&DAT_14c791c10);
    iVar2 = FUN_144d69a30(DAT_14c792270);
    for (lVar6 = DAT_14c792268; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0xb8)) {
      iVar5 = FUN_144d69a30(lVar6);
      if (((iVar5 < iVar3) && ((*(uint *)(lVar6 + 0x20) & 0x8000000) == 0)) &&
         (*(int *)(lVar6 + 0x48) == 0)) {
        lVar8 = lVar6;
        iVar3 = iVar5;
      }
    }
    if (((((iVar2 < 0x67) || (0x18 < iVar3)) && ((iVar2 < 0x7a || (0x3f < iVar3)))) && (0xb < iVar3)
        ) || ((((DAT_14c792270 = lVar8, lVar8 == 0 || (*(int *)(lVar8 + 0x1c) != 0)) ||
               ((*(uint *)(lVar8 + 0x20) & 0x8000000) != 0)) ||
              (iVar3 = FUN_145156340(lVar8 + 0x460), iVar3 == 0)))) {
      puVar7 = &DAT_14c791c10;
    }
    else {
      FUN_1451563e0(&DAT_14c791c10);
      if (*(int *)(lVar8 + 0x48) != 0) {
        FUN_1451563e0(lVar8 + 0x460);
        goto LAB_144d69b22;
      }
      lVar6 = FUN_144d699c0(lVar8);
      puVar7 = (undefined *)(lVar8 + 0x460);
      bVar1 = bVar9;
      if (lVar6 != 0) {
        bVar1 = true;
      }
    }
    FUN_1451563e0(puVar7);
  }
  if ((!bVar1) && (iVar4 == 0)) goto LAB_144d69e6f;
  bVar1 = false;
  bVar9 = false;
  goto LAB_144d69b22;
LAB_144d69e6f:
  if (DAT_14c792284 != 0) {
    return 1;
  }
  goto LAB_144d69b10;
}



// FUNCTION 144d69ea0 FUN_144d69ea0 body=218 status=ok
// SIG undefined FUN_144d69ea0(void)

undefined8 FUN_144d69ea0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (DAT_14c792264 != 0) {
    FUN_1451562f0(&DAT_14c791d10);
  }
  if (DAT_14c79227c == 0) {
    DAT_14c792284 = 0;
    iVar1 = FUN_1451564d0(&DAT_14c791e90,0,0x4000);
    if (iVar1 != 0) {
      uVar2 = FUN_145156740(3);
      iVar1 = FUN_145155f40(&DAT_14c791d90,FUN_144d69ae0,0,0x8000,uVar2,0,"Bink IO");
      if (iVar1 == 0) {
        FUN_145156580(&DAT_14c791e90);
      }
      else {
        DAT_14c792280 = DAT_14c792280 + 1;
        uVar3 = 1;
        DAT_14c79227c = 1;
      }
    }
  }
  else {
    DAT_14c792280 = DAT_14c792280 + 1;
    uVar3 = 1;
  }
  if (DAT_14c792264 != 0) {
    FUN_1451563e0(&DAT_14c791d10);
  }
  return uVar3;
}



// FUNCTION 144d69f80 FUN_144d69f80 body=132 status=ok
// SIG undefined FUN_144d69f80(void)

void FUN_144d69f80(void)

{
  if (DAT_14c792264 != 0) {
    FUN_1451562f0(&DAT_14c791d10);
  }
  if (DAT_14c79227c != 0) {
    DAT_14c792284 = 1;
    FUN_145156630(&DAT_14c791e90,4);
    FUN_145156130(&DAT_14c791d90);
    FUN_145156580(&DAT_14c791e90);
    DAT_14c792280 = 0;
    DAT_14c79227c = 0;
  }
  if (DAT_14c792264 != 0) {
    FUN_1451563e0(&DAT_14c791d10);
    return;
  }
  return;
}



// FUNCTION 144d6a070 FUN_144d6a070 body=72 status=ok
// SIG undefined FUN_144d6a070(void)

void FUN_144d6a070(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + -0x1f0) & 0x8000000) == 0) {
    iVar1 = FUN_145156340(param_1 + 0x250,1);
    if (iVar1 != 0) {
      FUN_1451563e0(param_1 + 0x250);
      return;
    }
  }
  return;
}



// FUNCTION 144d6a0c0 FUN_144d6a0c0 body=194 status=ok
// SIG undefined FUN_144d6a0c0(void)

void FUN_144d6a0c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  *(undefined1 **)(param_1 + 0x250) = &LAB_144d6a010;
  *(undefined1 **)(param_1 + 0x260) = &LAB_144d6a050;
  *(code **)(param_1 + 0x268) = FUN_144d6a070;
  if (((*(uint *)(param_1 + 0x20) & 0x8000000) != 0) || (*(longlong *)(param_1 + 0x1f8) != 0))
  goto LAB_144d6a15f;
  iVar2 = FUN_145156190(param_1 + 0x460,2);
  if (iVar2 == 0) {
LAB_144d6a138:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x8000000;
  }
  else {
    iVar2 = FUN_144d69ea0(param_1);
    if (iVar2 == 0) {
      FUN_145156470(param_1 + 0x460);
      goto LAB_144d6a138;
    }
  }
  if ((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) {
    FUN_144d69810(param_1);
    *(undefined4 *)(param_1 + 0x1d4) = 1;
  }
LAB_144d6a15f:
  iVar2 = FUN_145156190(param_1 + 0x3a0,2);
  if (iVar2 == 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_14c792270 = param_1;
  return;
}



// FUNCTION 144d6a190 FUN_144d6a190 body=147 status=ok
// SIG undefined FUN_144d6a190(void)

void FUN_144d6a190(longlong param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) {
    FUN_145156470(param_1 + 0x460);
  }
  if ((*(uint *)(param_1 + 0x20) & 0x10000000) == 0) {
    FUN_145156470(param_1 + 0x3a0);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 >> 0x1b & 1) == 0) {
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791d10);
    }
    DAT_14c792280 = DAT_14c792280 + -1;
    if ((DAT_14c792280 == 0) && ((~(uVar1 >> 6) & 1) != 0)) {
      FUN_144d69f80();
    }
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791d10);
      return;
    }
  }
  return;
}



// FUNCTION 144d6a230 FUN_144d6a230 body=187 status=ok
// SIG undefined FUN_144d6a230(void)

void FUN_144d6a230(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_14c792264 != 0) && (bVar1 = true, DAT_14c792264 != 0)) {
    FUN_1451562f0(&DAT_14c791d10);
  }
  if ((DAT_14c792280 == 0) && (DAT_14c79227c != 0)) {
    FUN_144d69f80();
  }
  if (((bVar1) && (DAT_14c792264 != 0)) && (DAT_14c792264 != 0)) {
    FUN_1451563e0(&DAT_14c791d10);
  }
  FUN_144d69730();
  if (DAT_14c792264 != 0) {
    FUN_145156470(&DAT_14c791c10);
    FUN_145156470(&DAT_14c791d10);
    FUN_145156470(&DAT_14c791c90);
    DAT_14c792264 = 0;
  }
  FUN_145155f20(&DAT_14c792278,0xffffffff);
  return;
}



// FUNCTION 144d6a2f0 FUN_144d6a2f0 body=233 status=ok
// SIG undefined FUN_144d6a2f0(void)

void FUN_144d6a2f0(longlong param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) {
    FUN_1451562f0(&DAT_14c791c10);
    iVar1 = FUN_145156340(param_1 + 0x460,0);
    while (iVar1 == 0) {
      FUN_1451563e0(&DAT_14c791c10);
      FUN_1451562f0(param_1 + 0x460);
      iVar1 = FUN_145156340(&DAT_14c791c10,0);
      if (iVar1 != 0) break;
      FUN_1451563e0(param_1 + 0x460);
      FUN_1451562f0(&DAT_14c791c10);
      iVar1 = FUN_145156340(param_1 + 0x460,0);
    }
    if (DAT_14c792270 == param_1) {
      DAT_14c792270 = 0;
    }
    FUN_1451563e0(param_1 + 0x460);
    FUN_1451563e0(&DAT_14c791c10);
  }
  if (DAT_14c792270 == param_1) {
    DAT_14c792270 = 0;
  }
  return;
}



// FUNCTION 144d6a3e0 FUN_144d6a3e0 body=502 status=ok
// SIG undefined FUN_144d6a3e0(void)

void FUN_144d6a3e0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  void *local_res10;
  
  if (((((*(longlong *)
           ((ulonglong)(*(int *)(param_1 + 300) - 1) * 0x1c0 + 0x170 +
           *(longlong *)(param_1 + 0x1b8)) != 0) && (*(int *)(param_1 + 0x630) != 0)) &&
       (*(int *)(param_1 + 300) != 0)) &&
      ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar1 < 1 || (iVar1 == 2)))) &&
     (iVar1 = FUN_145156340(param_1 + 0x520,0), iVar1 != 0)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 300) != 0) {
      do {
        piVar2 = (int *)((ulonglong)uVar4 * 0x1c0 + *(longlong *)(param_1 + 0x1b8));
        iVar1 = (**(code **)(piVar2 + 0x5c))(piVar2);
        while (iVar1 != 0) {
          uVar3 = *piVar2 - piVar2[10];
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + piVar2[3];
          }
          if ((((int)uVar3 <= piVar2[0xf]) &&
              ((*(int *)(param_1 + 0xc) <= piVar2[0x14] || (uVar3 == 0)))) ||
             (iVar1 = (**(code **)(piVar2 + 0x5e))(piVar2,&local_res10,local_res8), iVar1 == 0))
          break;
          if (uVar3 < local_res8[0]) {
            local_res8[0] = uVar3;
          }
          if (*(int *)(param_1 + 0xc) <= piVar2[0x14]) {
            local_res8[0] = local_res8[0] & piVar2[0x10];
          }
          uVar3 = piVar2[6] - piVar2[10];
          if (uVar3 < local_res8[0]) {
            if (uVar3 != 0) {
              memmove(local_res10,*(void **)(piVar2 + 10),(ulonglong)uVar3);
              local_res10 = (void *)((longlong)local_res10 + (ulonglong)uVar3);
            }
            memmove(local_res10,*(void **)(piVar2 + 4),(ulonglong)(local_res8[0] - uVar3));
            *(ulonglong *)(piVar2 + 10) =
                 (ulonglong)(local_res8[0] - uVar3) + *(longlong *)(piVar2 + 4);
          }
          else {
            memmove(local_res10,*(void **)(piVar2 + 10),(ulonglong)local_res8[0]);
            *(ulonglong *)(piVar2 + 10) = *(longlong *)(piVar2 + 10) + (ulonglong)local_res8[0];
          }
          (**(code **)(piVar2 + 0x60))(piVar2);
          iVar1 = (**(code **)(piVar2 + 0x5c))(piVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 300));
    }
    if ((*(int *)(param_1 + 300) != 0) &&
       ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar1 < 1 || (iVar1 == 2)))) {
      FUN_1451563e0(param_1 + 0x520);
    }
  }
  return;
}



// FUNCTION 144d6a5e0 FUN_144d6a5e0 body=457 status=ok
// SIG undefined FUN_144d6a5e0(void)

undefined8 FUN_144d6a5e0(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  
  do {
    FUN_1451565e0(&DAT_14c792010,DAT_14c7077e4);
joined_r0x000144d6a61a:
    if ((DAT_14c79219c == 0) && (DAT_14c792264 != 0)) {
      pcVar4 = (code *)0x0;
      FUN_1451562f0(&DAT_14c791c10);
      lVar3 = DAT_14c792268;
      do {
        if (lVar3 == 0) {
          FUN_1451563e0(&DAT_14c791c10);
          if (pcVar4 != (code *)0x0) {
            iVar2 = FUN_145156340(&DAT_14c791c90,0);
            if (iVar2 == 0) {
              if (2 < DAT_14c7077e4) {
                DAT_14c7077e4 = 2;
              }
            }
            else {
              (*pcVar4)(0,0);
              if (DAT_14c792264 != 0) {
                FUN_1451563e0(&DAT_14c791c90);
              }
            }
          }
          break;
        }
        if ((*(int *)(lVar3 + 0x4c) == 0) && (*(int *)(lVar3 + 300) != 0)) {
          iVar2 = FUN_145156340(lVar3 + 0x520);
          if (iVar2 == 0) {
            if (2 < DAT_14c7077e4) {
              DAT_14c7077e4 = 2;
            }
          }
          else {
            FUN_1451563e0(&DAT_14c791c10);
            DAT_14c7077e4 = 0xd;
            if ((*(int *)(lVar3 + 0x4c) == 0) && (*(int *)(lVar3 + 300) != 0)) {
              uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x1b8) + 0x5c);
              if ((uVar1 & 0xfffffffd) == 0) {
                FUN_144d6a3e0(lVar3);
              }
              else if ((int)uVar1 < 0) {
                pcVar4 = *(code **)(*(longlong *)(lVar3 + 0x1b8) + 0x180);
                if (-uVar1 < 0xd) {
                  DAT_14c7077e4 = -uVar1;
                }
              }
            }
            iVar2 = FUN_145156340(&DAT_14c791c10);
            FUN_1451563e0(lVar3 + 0x520);
            if (iVar2 == 0) goto joined_r0x000144d6a61a;
          }
        }
        lVar3 = *(longlong *)(lVar3 + 0xb8);
      } while( true );
    }
    if (DAT_14c79219c != 0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 144d6a7b0 FUN_144d6a7b0 body=218 status=ok
// SIG undefined FUN_144d6a7b0(void)

undefined8 FUN_144d6a7b0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (DAT_14c792264 != 0) {
    FUN_1451562f0(&DAT_14c791c90);
  }
  if (DAT_14c792194 == 0) {
    DAT_14c79219c = 0;
    iVar1 = FUN_1451564d0(&DAT_14c792010,0,0x4000);
    if (iVar1 != 0) {
      uVar2 = FUN_145156740(3);
      iVar1 = FUN_145155f40(&DAT_14c791f10,FUN_144d6a5e0,0,0x8000,uVar2,0,"Bink Snd");
      if (iVar1 == 0) {
        FUN_145156580(&DAT_14c792010);
      }
      else {
        DAT_14c792198 = DAT_14c792198 + 1;
        uVar3 = 1;
        DAT_14c792194 = 1;
      }
    }
  }
  else {
    DAT_14c792198 = DAT_14c792198 + 1;
    uVar3 = 1;
  }
  if (DAT_14c792264 != 0) {
    FUN_1451563e0(&DAT_14c791c90);
  }
  return uVar3;
}



// FUNCTION 144d6a890 FUN_144d6a890 body=132 status=ok
// SIG undefined FUN_144d6a890(void)

void FUN_144d6a890(void)

{
  if (DAT_14c792264 != 0) {
    FUN_1451562f0(&DAT_14c791c90);
  }
  if (DAT_14c792194 != 0) {
    DAT_14c79219c = 1;
    FUN_145156630(&DAT_14c792010,4);
    FUN_145156130(&DAT_14c791f10);
    FUN_145156580(&DAT_14c792010);
    DAT_14c792198 = 0;
    DAT_14c792194 = 0;
  }
  if (DAT_14c792264 != 0) {
    FUN_1451563e0(&DAT_14c791c90);
    return;
  }
  return;
}



// FUNCTION 144d6a920 FUN_144d6a920 body=247 status=ok
// SIG undefined FUN_144d6a920(void)

void FUN_144d6a920(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c);
  if (iVar1 < 1) {
    iVar1 = FUN_145156190(param_1 + 0x520,1);
    if (iVar1 == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) = 1;
      return;
    }
    if (DAT_14c792268 == 0) {
      DAT_14c7077e4 = 0xd;
    }
    iVar1 = FUN_144d6a7b0(param_1);
    if (iVar1 == 0) {
      FUN_145156470(param_1 + 0x520);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) = 1;
    }
    else {
      FUN_144d69810(param_1);
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c);
    if ((iVar1 < 0) && (uVar2 = -iVar1, uVar2 < DAT_14c7077e4)) {
      DAT_14c7077e4 = uVar2;
    }
  }
  else if (iVar1 == 2) {
    FUN_145156190(param_1 + 0x520,1);
    FUN_144d69810(param_1);
    *(undefined4 *)(param_1 + 0x1d4) = 1;
    return;
  }
  return;
}



// FUNCTION 144d6aa20 FUN_144d6aa20 body=173 status=ok
// SIG undefined FUN_144d6aa20(void)

void FUN_144d6aa20(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 300) != 0) &&
     ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), iVar1 < 1 || (iVar1 == 2)))) {
    FUN_145156470(param_1 + 0x520);
  }
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) < 1)) {
    uVar2 = *(uint *)(param_1 + 0x20);
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791c90);
    }
    DAT_14c792198 = DAT_14c792198 + -1;
    if (DAT_14c792198 == 0) {
      if ((~(uVar2 >> 6) & 1) == 0) {
        DAT_14c7077e4 = 0xffffffff;
      }
      else {
        FUN_144d6a890();
      }
    }
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791c90);
      return;
    }
  }
  return;
}



// FUNCTION 144d6aad0 FUN_144d6aad0 body=117 status=ok
// SIG undefined FUN_144d6aad0(void)

void FUN_144d6aad0(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_14c792264 != 0) && (bVar1 = true, DAT_14c792264 != 0)) {
    FUN_1451562f0(&DAT_14c791c90);
  }
  if ((DAT_14c792198 == 0) && (DAT_14c792194 != 0)) {
    FUN_144d6a890();
  }
  if (((bVar1) && (DAT_14c792264 != 0)) && (DAT_14c792264 != 0)) {
    FUN_1451563e0(&DAT_14c791c90);
    return;
  }
  return;
}



// FUNCTION 144d6ab50 FUN_144d6ab50 body=186 status=ok
// SIG undefined FUN_144d6ab50(void)

void FUN_144d6ab50(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 300) == 0) ||
     ((iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c), 0 < iVar1 && (iVar1 != 2)))) {
    return;
  }
  param_1 = param_1 + 0x520;
  FUN_1451562f0(&DAT_14c791c10);
  iVar1 = FUN_145156340(param_1,0);
  while (iVar1 == 0) {
    FUN_1451563e0(&DAT_14c791c10);
    FUN_1451562f0(param_1);
    iVar1 = FUN_145156340(&DAT_14c791c10,0);
    if (iVar1 != 0) break;
    FUN_1451563e0(param_1);
    FUN_1451562f0(&DAT_14c791c10);
    iVar1 = FUN_145156340(param_1,0);
  }
  FUN_1451563e0(param_1);
  FUN_1451563e0(&DAT_14c791c10);
  return;
}



// FUNCTION 144d6ac10 FUN_144d6ac10 body=163 status=ok
// SIG undefined FUN_144d6ac10(void)

void FUN_144d6ac10(int *param_1)

{
  int iVar1;
  void *_Dst;
  void *_Dst_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 - param_1[10];
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + param_1[3];
  }
  iVar1 = param_1[0x16];
  uVar2 = uVar2 & 0xffffffc0;
  if ((int)uVar2 < iVar1) {
    _Dst = *(void **)(param_1 + 4);
    uVar2 = iVar1 - uVar2;
    *(ulonglong *)(param_1 + 10) = *(longlong *)(param_1 + 10) - (ulonglong)uVar2;
    _Dst_00 = *(void **)(param_1 + 10);
    if (_Dst_00 < _Dst) {
      *(ulonglong *)(param_1 + 10) = (ulonglong)(uint)param_1[3] + (longlong)_Dst_00;
      uVar3 = (int)_Dst - (int)_Dst_00;
      memset(_Dst,0,(ulonglong)(uVar2 - uVar3));
      memset(*(void **)(param_1 + 10),0,(ulonglong)uVar3);
      return;
    }
    memset(_Dst_00,0,(ulonglong)uVar2);
    return;
  }
  if (iVar1 < (int)uVar2) {
    *(ulonglong *)(param_1 + 10) = *(longlong *)(param_1 + 10) + (ulonglong)(uVar2 - iVar1);
    if (*(longlong *)(param_1 + 4) + (ulonglong)(uint)param_1[3] < *(ulonglong *)(param_1 + 10)) {
      *(ulonglong *)(param_1 + 10) = *(ulonglong *)(param_1 + 10) - (ulonglong)(uint)param_1[3];
    }
  }
  return;
}



// FUNCTION 144d6acc0 FUN_144d6acc0 body=59 status=ok
// SIG undefined FUN_144d6acc0(void)

void FUN_144d6acc0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x644) == 0) {
    uVar1 = FUN_145141010();
    *(undefined4 *)(param_1 + 0x644) = uVar1;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
  }
  return;
}



// FUNCTION 144d6ad00 FUN_144d6ad00 body=185 status=ok
// SIG undefined FUN_144d6ad00(void)

void FUN_144d6ad00(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1451562f0(param_1 + 0x3a0);
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(param_1 + 0x218))
                (param_1 + 0x210,*(undefined4 *)(param_1 + 0x20c),*(undefined8 *)(param_1 + 0xe8),
                 *(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x124));
      *(ulonglong *)(param_1 + 0x110) =
           (ulonglong)*(uint *)(param_1 + 0x124) + *(longlong *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_1451563e0(param_1 + 0x3a0);
    if (DAT_14c79227c != 0) {
      FUN_145156630(&DAT_14c791e90,1);
      return;
    }
  }
  return;
}



// FUNCTION 144d6adc0 FUN_144d6adc0 body=453 status=ok
// SIG undefined FUN_144d6adc0(void)

void FUN_144d6adc0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 - 1;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_144d6a3e0();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(uint *)(param_1 + 0xc) = uVar4 + 1;
    return;
  }
  FUN_144d6ad00(param_1);
  if (uVar4 == 0) {
    iVar2 = FUN_145141010();
    if (*(int *)(param_1 + 0x684) == 0) {
      *(int *)(param_1 + 0x684) = iVar2;
    }
    if (300000 < (uint)(iVar2 - *(int *)(param_1 + 0x684))) {
      *(int *)(param_1 + 0x684) = iVar2;
      *(undefined4 *)(param_1 + 0x688) = 1;
    }
  }
  puVar1 = *(ulonglong **)(param_1 + 0x1c8);
  uVar3 = uVar4 + 1;
  *(uint *)(param_1 + 0x20c) = uVar3;
  *(ulonglong *)(param_1 + 0xe8) = puVar1[uVar4] & 0xfffffffffffffffc;
  *(uint *)(param_1 + 0x128) = (uint)puVar1[uVar4] & 1;
  *(uint *)(param_1 + 0x124) = ((uint)puVar1[uVar3] & 0xfffffffc) - *(uint *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    *(ulonglong *)(param_1 + 0xc0) =
         (*(longlong *)(param_1 + 0x6a0) + 0x100U & 0xffffffffffffff80) -
         (ulonglong)(0x80 - (*(uint *)(param_1 + 0xe8) & 0x7f));
    iVar2 = DAT_14c79227c;
    if ((*(ulonglong *)(param_1 + 0xe8) < *(ulonglong *)(param_1 + 0x110)) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x2d0) + *(longlong *)(param_1 + 0x110)) <
        (ulonglong)*(uint *)(param_1 + 0x124) + *(longlong *)(param_1 + 0xe8))) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      if (iVar2 != 0) {
        FUN_145156630(&DAT_14c791e90,1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
      FUN_144d6ad00(param_1);
    }
  }
  else {
    *(ulonglong *)(param_1 + 0xc0) =
         (*(longlong *)(param_1 + 0xe8) - (*puVar1 & 0xfffffffffffffffc)) +
         *(longlong *)(param_1 + 0x1f8);
  }
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_144d6a3e0(param_1);
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  return;
}



// FUNCTION 144d6af90 FUN_144d6af90 body=387 status=ok
// SIG undefined FUN_144d6af90(void)

ulonglong FUN_144d6af90(uint param_1,ulonglong *param_2,longlong param_3,uint param_4,
                       undefined4 *param_5,uint *param_6,longlong *param_7,uint param_8)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar6;
  ulonglong uVar9;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = (ulonglong)param_1;
  lVar10 = (longlong)(int)param_1;
  uVar12 = 1;
  if (-1 < (int)param_1) {
    do {
      param_2[lVar10] = (ulonglong)*(uint *)(param_3 + lVar10 * 4);
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  uVar2 = uVar6;
  if (0 < (int)param_1) {
    puVar3 = param_2;
    uVar11 = uVar6;
    uVar9 = uVar6;
    uVar12 = 1;
    do {
      uVar4 = *puVar3;
      uVar12 = uVar12 & (uint)uVar4;
      lVar10 = (puVar3[1] & 0xfffffffffffffffc) - (uVar4 & 0xfffffffffffffffc);
      *puVar3 = uVar4 + uVar11;
      if (0x10000000 < lVar10) {
        return 0xffffffffffffffff;
      }
      uVar2 = uVar11 + 0x100000000;
      if (0 < lVar10) {
        uVar2 = uVar11;
      }
      if (((int)uVar9 != 0) &&
         ((longlong)(ulonglong)param_8 <
          (longlong)((uVar4 + uVar11 & 0xfffffffffffffffc) - (puVar3[-1] & 0xfffffffffffffffc)))) {
        return 0xffffffffffffffff;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      puVar3 = puVar3 + 1;
      uVar11 = uVar2;
    } while ((int)uVar8 < (int)param_1);
  }
  param_2[uVar7] = param_2[uVar7] + uVar2;
  *param_7 = *param_7 + uVar2;
  if (*param_7 + 8U < (param_2[uVar7] & 0xfffffffffffffffc)) {
    return 0xffffffffffffffff;
  }
  iVar1 = 0;
  if (-1 < (int)(param_1 - param_4)) {
    iVar1 = param_1 - param_4;
  }
  uVar2 = uVar6;
  uVar11 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar1) {
    do {
      uVar4 = (param_2[(int)uVar2 + param_4] & 0xfffffffffffffffc) -
              (param_2[uVar11] & 0xfffffffffffffffc);
      if (uVar9 < uVar4) {
        uVar6 = uVar2;
      }
      uVar5 = (undefined4)uVar6;
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar11 = uVar11 + 1;
      if (uVar4 <= uVar9) {
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
    } while ((longlong)uVar11 < (longlong)iVar1);
    if (uVar4 != 0) goto LAB_144d6b0e1;
  }
  uVar4 = ((ulonglong)param_4 *
          ((param_2[uVar7] & 0xfffffffffffffffc) - (*param_2 & 0xfffffffffffffffc))) / uVar7;
LAB_144d6b0e1:
  *param_6 = uVar12;
  *param_5 = uVar5;
  return uVar4;
}



// FUNCTION 144d6b120 FUN_144d6b120 body=133 status=ok
// SIG undefined FUN_144d6b120(void)

void FUN_144d6b120(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(int *)(param_1 + -0x10);
  if (0 < *(int *)(param_1 + -0x10)) {
    uVar3 = (ulonglong)(param_2 * 1000) / uVar4;
    iVar2 = (int)uVar3;
    if (0xffffffff < uVar3) {
      iVar2 = -1;
    }
    iVar1 = FUN_145141010(uVar4,(ulonglong)(param_2 * 1000) % uVar4);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + (iVar2 - iVar1) + param_3;
    iVar2 = *(int *)(param_1 + -0xc);
    while (0 < iVar2) {
      FUN_1451566c0(1);
      iVar2 = FUN_145141010();
      if (iVar2 != iVar1) {
        *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + (iVar1 - iVar2);
        iVar1 = iVar2;
      }
      iVar2 = *(int *)(param_1 + -0xc);
    }
  }
  return;
}



// FUNCTION 144d6b1d0 FUN_144d6b1d0 body=110 status=ok
// SIG undefined FUN_144d6b1d0(void)

void FUN_144d6b1d0(void *param_1,void *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  for (; param_3 != 0; param_3 = param_3 - uVar2) {
    uVar1 = (uint)param_3;
    if (0x80000000 < param_3) {
      uVar1 = 0x80000000;
    }
    uVar2 = (ulonglong)uVar1;
    memcpy(param_1,param_2,(ulonglong)uVar1);
    param_1 = (void *)((longlong)param_1 + uVar2);
    param_2 = (void *)((longlong)param_2 + uVar2);
  }
  return;
}



// FUNCTION 144d6b240 FUN_144d6b240 body=6324 status=ok
// SIG undefined FUN_144d6b240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d6b240(ulonglong *param_1,undefined8 *param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  char cVar16;
  short *psVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  float *pfVar21;
  uint uVar22;
  code *pcVar23;
  longlong lVar24;
  undefined8 *puVar25;
  int iVar26;
  ulonglong uVar27;
  int *piVar28;
  undefined8 uVar29;
  int *piVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  float fVar35;
  undefined1 auStack_ba8 [32];
  undefined8 *local_b88;
  undefined4 *local_b80;
  ulonglong *local_b78;
  undefined4 local_b70;
  uint local_b68;
  uint local_b64;
  uint local_b60;
  undefined8 local_b58;
  int local_b50 [2];
  longlong local_b48;
  ulonglong local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  uint local_b18;
  uint local_b08;
  uint uStack_b04;
  undefined4 uStack_b00;
  int iStack_af4;
  uint uStack_af0;
  uint local_ae8;
  uint uStack_ae4;
  undefined4 uStack_ae0;
  uint uStack_ad0;
  undefined8 local_a68;
  undefined1 auStack_a40 [8];
  ulonglong local_a38;
  longlong local_a28;
  undefined4 local_9f0;
  undefined1 local_950 [16];
  undefined1 local_940 [24];
  undefined1 local_928 [48];
  code *local_8f8 [5];
  code *local_8d0;
  undefined1 *local_890;
  undefined1 *local_880;
  code *local_878;
  int local_830;
  undefined1 local_520 [8];
  undefined1 local_518 [8];
  undefined1 local_510 [8];
  undefined1 local_508 [8];
  undefined1 local_500 [8];
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [8];
  uint local_4e8;
  int local_4e0;
  undefined4 local_49c;
  int local_498;
  uint local_494;
  undefined1 local_458 [16];
  undefined1 local_448 [8];
  int local_440;
  undefined8 local_418 [34];
  uint auStack_308 [32];
  undefined1 local_288 [576];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_ba8;
  local_b58 = local_b50;
  iVar26 = 1;
  local_b48 = 0;
  uVar22 = 1;
  local_b68 = 1;
  local_b50[0] = 0;
  local_b64 = param_3;
  FUN_145157350(0,0);
  FUN_145149370();
  FUN_1451571f0(local_288);
  if ((param_3 >> 0xe & 1) != 0) {
    local_b58 = (int *)param_2[4];
    uVar22 = *(uint *)((longlong)param_2 + 0x1c);
    local_b68 = uVar22;
  }
  memset(&local_b08,0,0x6e8);
  local_49c = FUN_145141010();
  DAT_14c792090 = '\0';
  if ((param_3 >> 0x1a & 1) == 0) {
    pcVar23 = FUN_145158ab0;
    if (((param_3 >> 0x19 & 1) != 0) && ((code *)param_2[5] != (code *)0x0)) {
      pcVar23 = (code *)param_2[5];
    }
    if (pcVar23 == (code *)0x0) {
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'N';
      cVar16 = 'N';
      do {
        if (cVar16 == '\0') goto LAB_144d6cae5;
        cVar16 = pcVar11[-0x2dbdfd7];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      *pcVar11 = '\0';
      goto LAB_144d6cae5;
    }
    memset(local_8f8,0,400);
    local_890 = &LAB_144d6b1b0;
    local_880 = &LAB_144d6b1c0;
    local_878 = FUN_144d6b1d0;
    FUN_144d697a0();
    if ((param_3 & 0x20) != 0) {
      local_a68 = *param_2;
    }
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791d10);
    }
    iVar8 = (*pcVar23)(local_8f8,param_1,param_3);
    if (iVar8 == 0) {
      if (DAT_14c792264 != 0) {
        FUN_1451563e0(&DAT_14c791d10);
      }
      if (DAT_14c792090 == '\0') {
        pcVar11 = &DAT_14c792090;
        DAT_14c792090 = 'E';
        cVar16 = 'E';
        do {
          if (cVar16 == '\0') goto LAB_144d6cae5;
          cVar16 = pcVar11[-0x2dbdfb7];
          pcVar11 = pcVar11 + 1;
          iVar26 = iVar26 + 1;
          *pcVar11 = cVar16;
        } while (iVar26 != 0xff);
        *pcVar11 = '\0';
      }
      goto LAB_144d6cae5;
    }
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791d10);
    }
    (*local_8f8[0])(local_8f8,0,&local_b40,0x2c);
  }
  else {
    local_b40 = *param_1;
    uStack_b38 = param_1[1];
    local_b18 = (uint)param_1[5];
    local_b30 = param_1[2];
    uStack_b28 = param_1[3];
    local_b20 = param_1[4];
  }
  if ((int)(uint)uStack_b28 < 0) {
    uStack_b28 = CONCAT44(uStack_b28._4_4_,(uint)uStack_b28 + 0x7f000000);
  }
  iVar8 = FUN_145155cd0(local_b40 & 0xffffffff);
  if ((iVar8 == 0) || (local_830 != 0)) {
    pcVar11 = &DAT_14c792090;
    DAT_14c792090 = 'N';
    cVar16 = 'N';
    do {
      if (cVar16 == '\0') goto LAB_144d6caa3;
      cVar16 = pcVar11[-0x2dbdf9f];
      pcVar11 = pcVar11 + 1;
      iVar26 = iVar26 + 1;
      *pcVar11 = cVar16;
    } while (iVar26 != 0xff);
LAB_144d6caa0:
    *pcVar11 = '\0';
  }
  else {
    local_b18 = local_b18 & 0xbfffffff;
    if ((uint)uStack_b38 == 0) {
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'T';
      cVar16 = 'T';
      do {
        if (cVar16 == '\0') goto LAB_144d6caa3;
        cVar16 = pcVar11[-0x2dbdf87];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      goto LAB_144d6caa0;
    }
    uVar9 = local_b30._4_4_;
    if ((longlong)local_b30 < 0) {
      uVar9 = -local_b30._4_4_;
      local_b30 = CONCAT44(uVar9,(uint)local_b30);
    }
    if (((((uint)local_b30 < (uint)uStack_b38) || (1000000 < (uint)local_b30)) ||
        (0x100 < local_b18)) ||
       (((0x7fff < uVar9 || (0x7fff < (uint)uStack_b28)) ||
        ((uStack_b28._4_4_ == 0 || ((uint)local_b20 == 0)))))) {
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'T';
      cVar16 = 'T';
      do {
        if (cVar16 == '\0') goto LAB_144d6caa3;
        cVar16 = pcVar11[-0x2dbdf4f];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      goto LAB_144d6caa0;
    }
    uStack_b04 = (uint)uStack_b28;
    uStack_ae4 = local_b20._4_4_;
    local_9f0 = (undefined4)local_b40;
    if ((param_3 >> 8 & 1) != 0) {
      local_b64 = param_3 & 0xfffffeff | 0x400;
      param_3 = local_b64;
    }
    uVar31 = param_3;
    if ((local_b20._4_4_ >> 0x14 & 1) == 0) {
      uVar31 = param_3 & 0xffefffff;
    }
    if ((local_b20 & 0x400000000) == 0) {
      local_ae8 = local_b20._4_4_ & 0x60013 | uVar31 & 0xfffffffb;
    }
    else {
      local_ae8 = local_b20._4_4_ & 0x60013 | uVar31 | 4;
    }
    local_b08 = uVar9;
    iVar8 = FUN_145155e20(local_b40 & 0xffffffff);
    if ((iVar8 != 0) || (iVar8 = FUN_145155d90(local_b40 & 0xffffffff), iVar8 != 0)) {
      iVar8 = (local_b20._4_4_ >> 0x18) * 4;
      local_440 = iVar8 + 4;
      if ((local_ae8 & 4) == 0) {
        if ((local_b20._4_4_ >> 0x10 & 1) != 0) {
          local_440 = iVar8 + 0x1c;
        }
      }
      else {
        local_440 = iVar8 + 0x10;
      }
    }
    iVar8 = FUN_145155dc0(local_b40 & 0xffffffff);
    if (iVar8 != 0) {
      local_ae8 = local_ae8 | 0x8000;
    }
    uStack_b00 = (uint)uStack_b38;
    local_4e0 = (uint)local_b30;
    if (((param_3 >> 0xc & 1) == 0) || (iStack_af4 = *(int *)(param_2 + 2), iStack_af4 == -1)) {
      iStack_af4 = uStack_b28._4_4_;
      uStack_af0 = (uint)local_b20;
    }
    else {
      uStack_af0 = *(uint *)((longlong)param_2 + 0x14);
    }
    local_a38 = local_b40 >> 0x20;
    uStack_ad0 = local_b18;
    uStack_ae0 = uStack_b38._4_4_;
    uVar9 = ((uint)local_b20 >> 1) + uStack_b28._4_4_;
    local_498 = uStack_b28._4_4_;
    local_494 = (uint)local_b20;
    local_4e8 = uVar9 / (uint)local_b20;
    if (local_4e8 == 0) {
      local_4e8 = 1;
    }
    if ((param_3 >> 0x1c & 1) != 0) {
      lVar24 = local_a38 + 0xff0;
      lVar12 = FUN_145157280(local_288,(ulonglong)uVar9 % (local_b20 & 0xffffffff));
      local_a28 = local_a28 + lVar12 + lVar24;
      lVar12 = FUN_145157290(local_288,lVar24);
      if (lVar12 != 0) {
        lVar24 = 0xd;
        puVar25 = (undefined8 *)(lVar12 + 0x500U & 0xffffffffffffff00);
        *(uint *)((longlong)puVar25 + -4) = ((uint)(lVar12 + 0x500U) & 0xffffff00) - (int)lVar12;
        puVar7 = &local_b08;
        puVar14 = puVar25;
        do {
          puVar18 = puVar14;
          puVar13 = puVar7;
          uVar29 = *(undefined8 *)(puVar13 + 2);
          *puVar18 = *(undefined8 *)puVar13;
          puVar18[1] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 6);
          puVar18[2] = *(undefined8 *)(puVar13 + 4);
          puVar18[3] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 10);
          puVar18[4] = *(undefined8 *)(puVar13 + 8);
          puVar18[5] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 0xe);
          puVar18[6] = *(undefined8 *)(puVar13 + 0xc);
          puVar18[7] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 0x12);
          puVar18[8] = *(undefined8 *)(puVar13 + 0x10);
          puVar18[9] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 0x16);
          puVar18[10] = *(undefined8 *)(puVar13 + 0x14);
          puVar18[0xb] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 0x1a);
          puVar18[0xc] = *(undefined8 *)(puVar13 + 0x18);
          puVar18[0xd] = uVar29;
          uVar29 = *(undefined8 *)(puVar13 + 0x1e);
          puVar18[0xe] = *(undefined8 *)(puVar13 + 0x1c);
          puVar18[0xf] = uVar29;
          lVar24 = lVar24 + -1;
          puVar7 = puVar13 + 0x20;
          puVar14 = puVar18 + 0x10;
        } while (lVar24 != 0);
        uVar29 = *(undefined8 *)(puVar13 + 0x22);
        local_b88 = (undefined8 *)((ulonglong)local_b88 & 0xffffffff00000000);
        puVar18[0x10] = *(undefined8 *)(puVar13 + 0x20);
        puVar18[0x11] = uVar29;
        uVar29 = *(undefined8 *)(puVar13 + 0x26);
        puVar18[0x12] = *(undefined8 *)(puVar13 + 0x24);
        puVar18[0x13] = uVar29;
        uVar29 = *(undefined8 *)(puVar13 + 0x2a);
        puVar18[0x14] = *(undefined8 *)(puVar13 + 0x28);
        puVar18[0x15] = uVar29;
        uVar29 = *(undefined8 *)(puVar13 + 0x2e);
        puVar18[0x16] = *(undefined8 *)(puVar13 + 0x2c);
        puVar18[0x17] = uVar29;
        uVar29 = *(undefined8 *)(puVar13 + 0x32);
        puVar18[0x18] = *(undefined8 *)(puVar13 + 0x30);
        puVar18[0x19] = uVar29;
        uVar29 = *(undefined8 *)(puVar13 + 0x36);
        puVar18[0x1a] = *(undefined8 *)(puVar13 + 0x34);
        puVar18[0x1b] = uVar29;
        puVar18[0x1c] = *(undefined8 *)(puVar13 + 0x38);
        *(uint *)(puVar25 + 4) = *(uint *)(puVar25 + 4) | 0x8002000;
        puVar25[0x3f] = puVar25 + 0xde;
        puVar25[0x49] = puVar25;
        (*(code *)puVar25[0x45])(puVar25 + 0x42,0,0,puVar25[0x1a] + 8);
        (*(code *)puVar25[0x42])(puVar25 + 0x42,0,puVar25[0x3f],puVar25[0x1a] + 8);
        if (DAT_14c792264 != 0) {
          FUN_1451562f0(&DAT_14c791d10);
        }
        (*(code *)puVar25[0x47])(puVar25 + 0x42);
        if (DAT_14c792264 != 0) {
          FUN_1451563e0(&DAT_14c791d10);
        }
        *(undefined4 *)(puVar25 + 0x5d) = 0;
        goto LAB_144d6cae5;
      }
LAB_144d6ba71:
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'O';
      cVar16 = 'O';
      do {
        if (cVar16 == '\0') goto LAB_144d6caa3;
        cVar16 = pcVar11[-0x2dbdf17];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      goto LAB_144d6caa0;
    }
    FUN_145157220(local_288,local_520,local_4e8 * 4);
    FUN_145157220(local_288,local_518,local_4e8 * 4);
    FUN_145157220(local_288,local_510,local_4e8 * 4);
    FUN_145157220(local_288,local_508,local_4e8 * 4);
    FUN_145157220(local_288,local_500,local_4e8 * 4);
    FUN_145157220(local_288,local_4f8,local_4e8 * 4);
    FUN_145157220(local_288,local_4f0,local_4e8 * 4);
    iVar8 = FUN_145155e60(local_b40 & 0xffffffff);
    if (iVar8 != 0) {
      FUN_145157220(local_288,local_458,
                    ((uint)(byte)(&DAT_14c7300b0)[local_ae8 & 3] * 4 + -4) * (local_b08 + 0x1f >> 5)
                    + 4);
    }
    uVar9 = 1;
    if (uVar22 != 0) {
      uVar9 = uVar22;
    }
    FUN_145157220(local_288,local_950,(ulonglong)uVar9 * 0x1c0);
    FUN_145157220(local_288,auStack_a40,uVar22 * 4);
    iVar8 = FUN_145155d50(local_b40 & 0xffffffff);
    if (iVar8 != 0) {
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'N';
      cVar16 = 'N';
      do {
        if (cVar16 == '\0') goto LAB_144d6caa3;
        cVar16 = pcVar11[-0x2dbdf2f];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      goto LAB_144d6caa0;
    }
    uVar22 = param_3 & 0x4000000;
    local_b60 = uVar22;
    if ((param_3 & 0x4000000) == 0) {
      FUN_145157220(local_288,local_448,local_440);
      puVar20 = local_928;
      iVar8 = local_4e0 * 8 + (uStack_ad0 + 0x16) * 0xc;
    }
    else {
      puVar20 = local_940;
      iVar8 = local_4e0 * 8 + 0x10;
    }
    FUN_145157220(local_288,puVar20,iVar8);
    lVar12 = FUN_145157280(local_288);
    local_a28 = lVar12 + local_a28 + 0x7e8;
    lVar12 = FUN_145157290(local_288,0x7e8);
    if (lVar12 == 0) goto LAB_144d6ba71;
    lVar24 = 0xd;
    puVar25 = (undefined8 *)(lVar12 + 0x100U & 0xffffffffffffff00);
    *(uint *)((longlong)puVar25 + -4) = ((uint)(lVar12 + 0x100U) & 0xffffff00) - (int)lVar12;
    puVar7 = &local_b08;
    puVar14 = puVar25;
    do {
      puVar18 = puVar14;
      puVar13 = puVar7;
      uVar29 = *(undefined8 *)(puVar13 + 2);
      *puVar18 = *(undefined8 *)puVar13;
      puVar18[1] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 6);
      puVar18[2] = *(undefined8 *)(puVar13 + 4);
      puVar18[3] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 10);
      puVar18[4] = *(undefined8 *)(puVar13 + 8);
      puVar18[5] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 0xe);
      puVar18[6] = *(undefined8 *)(puVar13 + 0xc);
      puVar18[7] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 0x12);
      puVar18[8] = *(undefined8 *)(puVar13 + 0x10);
      puVar18[9] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 0x16);
      puVar18[10] = *(undefined8 *)(puVar13 + 0x14);
      puVar18[0xb] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 0x1a);
      puVar18[0xc] = *(undefined8 *)(puVar13 + 0x18);
      puVar18[0xd] = uVar29;
      uVar29 = *(undefined8 *)(puVar13 + 0x1e);
      puVar18[0xe] = *(undefined8 *)(puVar13 + 0x1c);
      puVar18[0xf] = uVar29;
      lVar24 = lVar24 + -1;
      puVar7 = puVar13 + 0x20;
      puVar14 = puVar18 + 0x10;
    } while (lVar24 != 0);
    uVar29 = *(undefined8 *)(puVar13 + 0x22);
    puVar18[0x10] = *(undefined8 *)(puVar13 + 0x20);
    puVar18[0x11] = uVar29;
    uVar29 = *(undefined8 *)(puVar13 + 0x26);
    puVar18[0x12] = *(undefined8 *)(puVar13 + 0x24);
    puVar18[0x13] = uVar29;
    uVar29 = *(undefined8 *)(puVar13 + 0x2a);
    puVar18[0x14] = *(undefined8 *)(puVar13 + 0x28);
    puVar18[0x15] = uVar29;
    uVar29 = *(undefined8 *)(puVar13 + 0x2e);
    puVar18[0x16] = *(undefined8 *)(puVar13 + 0x2c);
    puVar18[0x17] = uVar29;
    uVar29 = *(undefined8 *)(puVar13 + 0x32);
    puVar18[0x18] = *(undefined8 *)(puVar13 + 0x30);
    puVar18[0x19] = uVar29;
    uVar29 = *(undefined8 *)(puVar13 + 0x36);
    puVar18[0x1a] = *(undefined8 *)(puVar13 + 0x34);
    puVar18[0x1b] = uVar29;
    puVar18[0x1c] = *(undefined8 *)(puVar13 + 0x38);
    puVar25[0x49] = puVar25;
    *(undefined4 *)puVar25[0xbe] = 0;
    *(undefined4 *)puVar25[0xbf] = 0;
    *(undefined4 *)puVar25[0xc0] = 0;
    *(undefined4 *)puVar25[0xc1] = 0;
    *(undefined4 *)puVar25[0xc2] = 0;
    *(undefined4 *)puVar25[0xc3] = 0;
    if ((param_3 & 0x4000000) == 0) {
      if (*(int *)(puVar25 + 0xd9) != 0) {
        (*(code *)puVar25[0x42])
                  (puVar25 + 0x42,0xffffffffffffffff,puVar25[0xd8],*(int *)(puVar25 + 0xd9));
      }
      lVar12 = (puVar25[0x3c] + 0x100 & 0xffffffffffffff80) - 0x54;
      puVar25[0x3c] = lVar12;
      (*(code *)puVar25[0x42])
                (puVar25 + 0x42,0xffffffffffffffff,lVar12,local_4e0 * 4 + uStack_ad0 * 0xc + 4);
      lVar12 = puVar25[0x3c] + (longlong)(int)uStack_ad0 * 4;
      puVar25[0x3d] = lVar12;
      lVar12 = lVar12 + (longlong)(int)uStack_ad0 * 4;
      puVar25[0x3e] = lVar12;
      lVar12 = lVar12 + (longlong)(int)uStack_ad0 * 4;
      puVar25[0x39] = lVar12 + 7U & 0xfffffffffffffff8;
      if (*(int *)(puVar25 + 0x5b) == 0) goto LAB_144d6bc11;
      pcVar11 = &DAT_14c792090;
      DAT_14c792090 = 'E';
      cVar16 = 'E';
      do {
        if (cVar16 == '\0') goto LAB_144d6c335;
        cVar16 = pcVar11[-0x2dbdf07];
        pcVar11 = pcVar11 + 1;
        iVar26 = iVar26 + 1;
        *pcVar11 = cVar16;
      } while (iVar26 != 0xff);
      *pcVar11 = '\0';
      FUN_1451571c0((longlong)puVar25 - (ulonglong)*(uint *)((longlong)puVar25 + -4));
    }
    else {
      uVar27 = (ulonglong)*(uint *)(puVar25 + 0xd9);
      iVar8 = *(int *)(puVar25 + 7);
      puVar25[0xd8] = (longlong)param_1 + 0x2c;
      puVar25[0x3c] = (longlong)param_1 + uVar27 + 0x2c;
      puVar25[0x3d] = (longlong)param_1 + (longlong)(iVar8 * 4) + uVar27 + 0x2c;
      puVar25[0x3e] = (longlong)param_1 + (longlong)(iVar8 * 8) + uVar27 + 0x2c;
      lVar12 = (longlong)param_1 + (longlong)(iVar8 * 0xc) + uVar27 + 0x2c;
LAB_144d6bc11:
      if ((local_b20 & 0x400000000) == 0) {
        if ((local_b20._4_4_ >> 0x10 & 1) == 0) {
          puVar14 = (undefined8 *)&DAT_1499d4010;
          if ((*(byte *)(puVar25 + 4) & 0x10) != 0) {
            puVar14 = (undefined8 *)&DAT_1499d4050;
          }
          uVar29 = puVar14[1];
          puVar25[0xc] = *puVar14;
          puVar25[0xd] = uVar29;
          uVar29 = puVar14[3];
          puVar25[0xe] = puVar14[2];
          puVar25[0xf] = uVar29;
          uVar29 = puVar14[5];
          puVar25[0x10] = puVar14[4];
          puVar25[0x11] = uVar29;
          uVar29 = puVar14[7];
          puVar25[0x12] = puVar14[6];
          puVar25[0x13] = uVar29;
          iVar8 = FUN_145155da0(local_b40 & 0xffffffff);
          if (iVar8 != 0) {
            uVar10 = *(undefined4 *)(puVar25 + 0xc);
            uVar4 = *(undefined4 *)((longlong)puVar25 + 100);
            *(undefined4 *)(puVar25 + 0xc) = *(undefined4 *)(puVar25 + 0xe);
            *(undefined4 *)(puVar25 + 0xe) = uVar10;
            *(undefined4 *)((longlong)puVar25 + 100) = *(undefined4 *)((longlong)puVar25 + 0x74);
            uVar10 = *(undefined4 *)(puVar25 + 0xf);
            *(undefined4 *)(puVar25 + 0xf) = *(undefined4 *)(puVar25 + 0xd);
            *(undefined4 *)(puVar25 + 0xd) = uVar10;
            *(undefined4 *)((longlong)puVar25 + 0x74) = uVar4;
          }
        }
        else {
          psVar17 = (short *)puVar25[0xd8];
          pfVar21 = (float *)((longlong)puVar25 + 100);
          *(int *)(puVar25 + 0xd9) = *(int *)(puVar25 + 0xd9) + -0x18;
          puVar25[0xd8] = psVar17 + 0xc;
          uVar9 = 0xfffffffe;
          do {
            uVar22 = uVar9 - 2 & 3;
            if (uVar22 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[-1] = fVar35;
            uVar31 = uVar9 - 1 & 3;
            if (uVar31 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            *pfVar21 = fVar35;
            if ((uVar9 & 3) == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[1] = fVar35;
            uVar32 = uVar9 + 1 & 3;
            if (uVar32 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[2] = fVar35;
            if (uVar22 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[3] = fVar35;
            if (uVar31 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[4] = fVar35;
            if ((uVar9 & 3) == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[5] = fVar35;
            if (uVar32 == 3) {
              fVar35 = 0.0;
            }
            else {
              sVar5 = *psVar17;
              psVar17 = psVar17 + 1;
              fVar35 = (float)(int)sVar5 * 0.00024414062;
            }
            pfVar21[6] = fVar35;
            pfVar21 = pfVar21 + 8;
            iVar8 = uVar9 + 10;
            uVar9 = uVar9 + 8;
            uVar22 = local_b60;
          } while (iVar8 < 0x10);
        }
      }
      else {
        psVar17 = (short *)puVar25[0xd8];
        *(int *)(puVar25 + 0xd9) = *(int *)(puVar25 + 0xd9) + -0xc;
        puVar25[0xd8] = psVar17 + 6;
        *(float *)(puVar25 + 0xc) = (float)(int)*psVar17 * 3.051851e-05;
        *(float *)((longlong)puVar25 + 100) = (float)(int)psVar17[1] * 3.051851e-05;
        *(float *)(puVar25 + 0xd) = (float)(int)psVar17[2] * 3.051851e-05;
        *(float *)((longlong)puVar25 + 0x6c) = (float)(int)psVar17[3] * 3.051851e-05;
        *(float *)(puVar25 + 0xe) = (float)(int)psVar17[4] * 3.051851e-05;
        *(float *)((longlong)puVar25 + 0x74) = (float)(int)psVar17[5];
      }
      local_b88 = puVar25 + 0x26;
      FUN_145149240(*(undefined4 *)(puVar25 + 0x23),*(undefined4 *)(puVar25 + 4),
                    *(undefined4 *)puVar25,*(undefined4 *)((longlong)puVar25 + 4));
      local_b70 = *(undefined4 *)(puVar25 + 5);
      local_b80 = (undefined4 *)((longlong)puVar25 + 0x1dc);
      local_b88 = puVar25 + 0x41;
      puVar1 = puVar25 + 0x1a;
      local_b78 = puVar1;
      lVar12 = FUN_144d6af90(*(undefined4 *)(puVar25 + 1),puVar25[0x39],lVar12,
                             *(undefined4 *)(puVar25 + 0xc4));
      uVar9 = local_b64;
      puVar25[0x15] = lVar12;
      if (lVar12 == -1) {
        pcVar11 = &DAT_14c792090;
        DAT_14c792090 = 'T';
        cVar16 = 'T';
        do {
          param_3 = local_b64;
          if (cVar16 == '\0') goto LAB_144d6c335;
          cVar16 = pcVar11[-0x2dbdee7];
          pcVar11 = pcVar11 + 1;
          iVar26 = iVar26 + 1;
          *pcVar11 = cVar16;
        } while (iVar26 != 0xff);
      }
      else {
        if ((local_b64 >> 10 & 1) != 0) {
LAB_144d6c10c:
          if (((uVar9 >> 0x18 & 1) == 0) || (lVar12 = param_2[1], lVar12 == -1 || lVar12 == 0)) {
            puVar25[0x1b] = puVar25[0x15];
          }
          else {
            puVar25[0x1b] = lVar12;
          }
          if (((uVar9 >> 0x16 & 1) == 0) || (iVar8 = *(int *)(param_2 + 3), iVar8 + 1U < 2)) {
            iVar8 = 0;
          }
          *(int *)(puVar25 + 0x40) = iVar8;
          if (uVar22 == 0) {
            puVar14 = puVar25 + 0x42;
            lVar12 = (*(code *)puVar25[0x44])(puVar14,puVar25[0x1b]);
            uVar27 = *puVar1;
            puVar25[0x1b] = lVar12;
            if (uVar27 <= lVar12 + 0x40000U) {
              puVar25[0x1b] = uVar27 + 0x10;
            }
            if ((local_b64 & 0x2000) == 0) {
              FUN_145157220(local_288,puVar25 + 0xd4,*(int *)(puVar25 + 5) + 0x500);
              lVar12 = puVar25[0x1b];
              lVar24 = FUN_145157280(local_288);
              puVar25[0x1c] = puVar25[0x1c] + lVar24 + lVar12;
              lVar12 = FUN_145157290(local_288,lVar12);
              puVar25[0xbc] = lVar12;
              if (lVar12 == 0) goto LAB_144d6c2ea;
              local_b88 = (undefined8 *)CONCAT44(local_b88._4_4_,iVar8);
              (*(code *)puVar25[0x45])(puVar14,lVar12,puVar25[0x1b],*puVar1 + 8);
            }
            else {
              lVar34 = uVar27 - (*(ulonglong *)puVar25[0x39] & 0xfffffffffffffffc);
              lVar12 = lVar34 + 0x408;
              lVar24 = FUN_145157280(local_288);
              puVar25[0x1c] = puVar25[0x1c] + lVar24 + lVar12;
              lVar12 = FUN_145157290(local_288,lVar12);
              puVar25[0x3f] = lVar12;
              if (lVar12 == 0) {
LAB_144d6c2ea:
                if (puVar25[0x16] != 0) {
                  FUN_1451571c0();
                }
                goto LAB_144d6c2fb;
              }
              *(uint *)(puVar25 + 4) = *(uint *)(puVar25 + 4) | 0x8000000;
              local_b88 = (undefined8 *)CONCAT44(local_b88._4_4_,iVar8);
              (*(code *)puVar25[0x45])(puVar14,0,0,*puVar1 + 8);
              (*(code *)*puVar14)(puVar14,*(ulonglong *)puVar25[0x39] & 0xfffffffffffffffc,
                                  puVar25[0x3f],lVar34 + 8);
              if (DAT_14c792264 != 0) {
                FUN_1451562f0(&DAT_14c791d10);
              }
              (*(code *)puVar25[0x47])(puVar14);
              if (DAT_14c792264 != 0) {
                FUN_1451563e0(&DAT_14c791d10);
              }
              *(undefined4 *)(puVar25 + 0x5d) = 0;
            }
          }
          else {
            uVar27 = *(ulonglong *)puVar25[0x39];
            *(uint *)(puVar25 + 4) = *(uint *)(puVar25 + 4) | 0x8000000;
            puVar25[0x3f] = (uVar27 & 0xfffffffffffffffc) + (longlong)param_1;
          }
          *(undefined4 *)((longlong)puVar25 + 0xc) = 0xffffffff;
          if (*(uint *)((longlong)puVar25 + 0x14) == 0) {
            *(undefined4 *)((longlong)puVar25 + 0x64c) = 2000;
          }
          else {
            *(int *)((longlong)puVar25 + 0x64c) =
                 (int)(((ulonglong)*(uint *)(puVar25 + 3) * 2000) /
                      (ulonglong)*(uint *)((longlong)puVar25 + 0x14));
          }
          *(undefined4 *)((longlong)puVar25 + 0x44) = 1;
          iVar26 = FUN_145141010();
          uVar22 = 0;
          *(int *)((longlong)puVar25 + 0x66c) = iVar26 - *(int *)((longlong)puVar25 + 0x66c);
          *(undefined4 *)(puVar25[0x37] + 0x4c) = 0x10000;
          *(undefined4 *)((longlong)puVar25 + 300) = 0;
          if (((*(int *)(puVar25 + 7) != 0) && (local_b68 != 0)) &&
             (uVar31 = 0, piVar28 = local_b58, piVar30 = local_b58, uVar9 = local_b68,
             local_b68 != 0)) {
            do {
              iVar26 = 0;
              if (0 < (int)uVar31) {
                piVar15 = piVar28;
                do {
                  uVar9 = local_b68;
                  if (*piVar15 == *piVar30) goto LAB_144d6c4e2;
                  iVar26 = iVar26 + 1;
                  piVar15 = piVar15 + 1;
                } while (iVar26 < (int)uVar31);
              }
              iVar26 = 0;
              lVar12 = 0;
              if (0 < *(int *)(puVar25 + 7)) {
                piVar15 = (int *)puVar25[0x3e];
                do {
                  if (*piVar15 == *piVar30) {
                    uVar9 = *(uint *)((longlong)puVar25 + 300);
                    *(uint *)((longlong)puVar25 + 300) = uVar9 + 1;
                    *(int *)(puVar25[0x19] + (ulonglong)uVar9 * 4) = iVar26;
                    if ((*(uint *)(puVar25 + 4) & 0x40000) == 0) {
                      uVar32 = *(uint *)(puVar25[0x3d] + lVar12 * 4);
                      if ((uVar32 < 0x80000000) && ((uVar32 >> 0x1c & 1) != 0)) {
                        uVar29 = 1;
                      }
                      else {
                        uVar29 = 0;
                      }
                    }
                    else {
                      uVar29 = 4;
                    }
                    uVar32 = *(uint *)(puVar25[0x3d] + lVar12 * 4);
                    uVar32 = FUN_1451411d0(uVar32 & 0xffff,(uVar32 >> 0x1d & 1) + 1,uVar29);
                    lVar24 = puVar25[0x3c];
                    auStack_308[uVar9] = uVar32;
                    uVar22 = uVar22 + (((uint)(*(int *)(lVar24 + lVar12 * 4) * 5) >> 2) + 0xff &
                                      0xffffff00) + uVar32;
                    piVar28 = local_b58;
                    uVar9 = local_b68;
                    break;
                  }
                  iVar26 = iVar26 + 1;
                  lVar12 = lVar12 + 1;
                  piVar15 = piVar15 + 1;
                  piVar28 = local_b58;
                  uVar9 = local_b68;
                } while (iVar26 < *(int *)(puVar25 + 7));
              }
LAB_144d6c4e2:
              uVar31 = uVar31 + 1;
              piVar30 = piVar30 + 1;
            } while (uVar31 < uVar9);
            if (uVar22 != 0) {
              lVar12 = FUN_145157280(local_288);
              puVar25[0x1c] = puVar25[0x1c] + lVar12 + (ulonglong)uVar22;
              local_b48 = FUN_145157290(local_288,uVar22);
              puVar25[0xd7] = local_b48;
              if (local_b48 == 0) {
                *(undefined4 *)((longlong)puVar25 + 300) = 0;
              }
            }
          }
          uVar22 = 0;
          _DAT_14c7921e0 = 0;
          _DAT_14c7077e8 = 1;
          local_b68 = 0;
          if (*(int *)((longlong)puVar25 + 300) != 0) {
            do {
              uVar27 = (ulonglong)uVar22;
              lVar24 = uVar27 * 0x1c0;
              *(undefined8 *)(puVar25[0x37] + 0x10 + lVar24) = 0;
              lVar12 = (longlong)*(int *)(puVar25[0x19] + uVar27 * 4);
              uVar9 = *(uint *)(puVar25[0x3d] + lVar12 * 4);
              if (((0x7fffffff < uVar9) || ((uVar9 >> 0x1c & 1) != 0)) &&
                 (DAT_14c7921c8 != (code *)0x0)) {
                uVar31 = uVar9 & 0xffff;
                local_b58 = (int *)(CONCAT44(local_b58._4_4_,uVar9) & 0xffffffff0000ffff);
                uVar32 = (uVar9 >> 0x1d & 1) + 1;
                uVar33 = ((uint)(*(int *)(puVar25[0x3c] + lVar12 * 4) * 5) >> 2) + 0xff & 0xffffff00
                ;
                uVar9 = uVar31;
                if ((iStack_af4 != 0) && (uStack_af0 != 0)) {
                  uVar9 = (uint)(((double)uVar31 * (double)iStack_af4 * (double)(int)local_494) /
                                ((double)local_498 * (double)(int)uStack_af0));
                }
                if (0x3e800 < uVar9) {
                  uVar9 = 0x3e800;
                }
                uVar22 = local_b68;
                if (uVar33 <= uVar32 * uVar31 * 4) {
                  if (DAT_14c792264 != 0) {
                    FUN_1451562f0(&DAT_14c791c90);
                  }
                  local_b88 = puVar25;
                  local_b60 = (*DAT_14c7921c8)(puVar25[0x37] + lVar24,uVar9,uVar32,
                                               *(undefined4 *)(puVar25 + 4));
                  if (DAT_14c792264 != 0) {
                    FUN_1451563e0(&DAT_14c791c90);
                  }
                  uVar22 = local_b68;
                  if (local_b60 != 0) {
                    *(undefined4 *)(puVar25[0x37] + 0x30 + lVar24) = (undefined4)local_b58;
                    if (*(int *)(puVar25[0x37] + 0x40 + lVar24) == 0) {
                      *(undefined4 *)(puVar25[0x37] + 0x40 + lVar24) = 0xffffffff;
                    }
                    *(uint *)(puVar25[0x37] + 0xc + lVar24) = uVar33;
                    *(longlong *)(puVar25[0x37] + 0x10 + lVar24) = local_b48;
                    lVar12 = puVar25[0x37];
                    uVar19 = (ulonglong)*(uint *)(lVar12 + 0xc + lVar24);
                    lVar34 = local_b48 + uVar19;
                    iVar8 = 0x2ee - *(int *)(lVar12 + 0x48 + lVar24);
                    *(ulonglong *)(lVar12 + 0x18 + lVar24) =
                         uVar19 + *(longlong *)(lVar12 + 0x10 + lVar24);
                    *(undefined8 *)(puVar25[0x37] + lVar24) =
                         *(undefined8 *)(puVar25[0x37] + 0x10 + lVar24);
                    *(undefined8 *)(puVar25[0x37] + 0x28 + lVar24) =
                         *(undefined8 *)(puVar25[0x37] + 0x10 + lVar24);
                    iVar26 = 0;
                    if (-1 < iVar8) {
                      iVar26 = iVar8;
                    }
                    uVar19 = (longlong)iVar26 * (ulonglong)uVar9 * (ulonglong)uVar32 * 2;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar19;
                    lVar12 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar6,8);
                    *(uint *)(puVar25[0x37] + 0x58 + lVar24) =
                         (uint)((uVar19 - lVar12 >> 1) + lVar12 >> 9) & 0xffffffc0;
                    lVar12 = puVar25[0x37];
                    iVar26 = *(int *)(lVar12 + 0xc + lVar24);
                    if (iVar26 - *(int *)(lVar12 + 0x58 + lVar24) < 0x10) {
                      *(int *)(lVar12 + 0x58 + lVar24) = iVar26 + -0x10;
                    }
                    if ((*(uint *)(puVar25 + 4) & 0x40000) == 0) {
                      uVar22 = *(uint *)(puVar25[0x3d] +
                                        (longlong)*(int *)(puVar25[0x19] + uVar27 * 4) * 4);
                      if ((uVar22 < 0x80000000) && ((uVar22 >> 0x1c & 1) != 0)) {
                        uVar29 = 1;
                      }
                      else {
                        uVar29 = 0;
                      }
                    }
                    else {
                      uVar29 = 4;
                    }
                    uVar29 = FUN_145141220(lVar34,*(undefined2 *)
                                                   (puVar25[0x3d] +
                                                   (longlong)*(int *)(puVar25[0x19] + uVar27 * 4) *
                                                   4),uVar32,uVar29);
                    *(undefined8 *)(puVar25[0x37] + 0x20 + lVar24) = uVar29;
                    if (DAT_14c792264 != 0) {
                      FUN_1451562f0(&DAT_14c791c90);
                    }
                    lVar12 = puVar25[0x37] + lVar24;
                    if (*(longlong *)(lVar12 + 0x20) == 0) {
                      (**(code **)(lVar12 + 0x1a8))(lVar12);
                      *(undefined8 *)(puVar25[0x37] + 0x10 + lVar24) = 0;
                    }
                    if (DAT_14c792264 != 0) {
                      FUN_1451563e0(&DAT_14c791c90);
                    }
                    local_b48 = lVar34 + (ulonglong)auStack_308[uVar27];
                    *(uint *)(puVar25[0x37] + 0x50 + lVar24) =
                         *(int *)(puVar25 + 1) -
                         (uint)(*(int *)(puVar25 + 0xce) * 3) /
                         (uint)(*(int *)((longlong)puVar25 + 0x674) << 2);
                    uVar22 = local_b68;
                  }
                }
              }
              if (*(int *)(puVar25[0x37] + 0x4c + lVar24) == 0) {
                *(undefined4 *)(puVar25[0x37] + 0x4c + lVar24) = 0x10000;
              }
              if (*(longlong *)(puVar25[0x37] + 0x10 + lVar24) == 0) {
                *(int *)((longlong)puVar25 + 300) = *(int *)((longlong)puVar25 + 300) + -1;
                memmove((void *)(puVar25[0x19] + uVar27 * 4),
                        (void *)(puVar25[0x19] + (ulonglong)(uVar22 + 1) * 4),
                        (ulonglong)((*(int *)((longlong)puVar25 + 300) - uVar22) * 4));
              }
              else {
                uVar22 = uVar22 + 1;
                local_b68 = uVar22;
              }
            } while (uVar22 < *(uint *)((longlong)puVar25 + 300));
          }
          iVar26 = DAT_14c792264;
          if (*(int *)((longlong)puVar25 + 300) != 0) {
            *(undefined4 *)(puVar25 + 8) = 1;
            if (iVar26 != 0) {
              FUN_1451562f0(&DAT_14c791c90);
            }
            DAT_14c7921d0 = DAT_14c7921d0 + *(int *)((longlong)puVar25 + 300);
            if (DAT_14c792264 != 0) {
              FUN_1451563e0(&DAT_14c791c90);
            }
            FUN_144d6a920(puVar25);
          }
          puVar25[0x4b] = &LAB_144d6a030;
          puVar25[0x4e] = FUN_144d6b120;
          FUN_144d6a0c0(puVar25);
          if (puVar25[0x3f] == 0) {
            uVar22 = local_b64 | 0x200000;
            if ((*(uint *)(puVar25 + 4) & 0x8000000) != 0) {
              uVar22 = local_b64;
            }
            if ((uVar22 >> 0x15 & 1) == 0) {
              lVar12 = (*(code *)puVar25[0x46])(puVar25 + 0x42);
              while (lVar12 != 0) {
                lVar12 = (*(code *)puVar25[0x46])(puVar25 + 0x42);
              }
            }
            if (DAT_14c79227c != 0) {
              FUN_145156630(&DAT_14c791e90,1);
            }
          }
          puVar25[0x22] = 0xf0000000;
          FUN_144d6adc0(puVar25,1);
          if (((*(int *)((longlong)puVar25 + 300) != 0) && (DAT_14c792194 != 0)) &&
             (*(int *)(puVar25[0x37] + 0x5c) < 1)) {
            FUN_145156630(&DAT_14c792010,1);
          }
          uVar10 = FUN_145155f20(&DAT_14c792260,1);
          *(undefined4 *)(puVar25 + 0x3a) = uVar10;
          goto LAB_144d6cae5;
        }
        FUN_144d67a00(puVar25,local_418);
        iVar8 = FUN_144d68f50(puVar25,local_418,0);
        if (iVar8 != 0) {
          puVar25[0x16] = (undefined8 *)puVar25[0xd5];
          lVar12 = 2;
          puVar14 = local_418;
          puVar18 = (undefined8 *)puVar25[0xd5];
          do {
            puVar2 = puVar18 + 0x10;
            uVar29 = puVar14[1];
            puVar3 = puVar14 + 0x10;
            *puVar18 = *puVar14;
            puVar18[1] = uVar29;
            uVar29 = puVar14[3];
            puVar18[2] = puVar14[2];
            puVar18[3] = uVar29;
            uVar29 = puVar14[5];
            puVar18[4] = puVar14[4];
            puVar18[5] = uVar29;
            uVar29 = puVar14[7];
            puVar18[6] = puVar14[6];
            puVar18[7] = uVar29;
            uVar29 = puVar14[9];
            puVar18[8] = puVar14[8];
            puVar18[9] = uVar29;
            uVar29 = puVar14[0xb];
            puVar18[10] = puVar14[10];
            puVar18[0xb] = uVar29;
            uVar29 = puVar14[0xd];
            puVar18[0xc] = puVar14[0xc];
            puVar18[0xd] = uVar29;
            uVar29 = puVar14[0xf];
            puVar18[0xe] = puVar14[0xe];
            puVar18[0xf] = uVar29;
            lVar12 = lVar12 + -1;
            puVar14 = puVar3;
            puVar18 = puVar2;
          } while (lVar12 != 0);
          *puVar2 = *puVar3;
          goto LAB_144d6c10c;
        }
LAB_144d6c2fb:
        pcVar11 = &DAT_14c792090;
        DAT_14c792090 = 'O';
        cVar16 = 'O';
        do {
          param_3 = local_b64;
          if (cVar16 == '\0') goto LAB_144d6c335;
          cVar16 = pcVar11[-0x2dbdf17];
          pcVar11 = pcVar11 + 1;
          iVar26 = iVar26 + 1;
          *pcVar11 = cVar16;
        } while (iVar26 != 0xff);
      }
      *pcVar11 = '\0';
      param_3 = local_b64;
LAB_144d6c335:
      FUN_1451571c0((longlong)puVar25 - (ulonglong)*(uint *)((longlong)puVar25 + -4));
    }
  }
LAB_144d6caa3:
  if ((param_3 >> 0x1a & 1) == 0) {
    if (DAT_14c792264 != 0) {
      FUN_1451562f0(&DAT_14c791d10);
    }
    (*local_8d0)(local_8f8);
    if (DAT_14c792264 != 0) {
      FUN_1451563e0(&DAT_14c791d10);
    }
  }
LAB_144d6cae5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_ba8);
}



// FUNCTION 144d6cb10 FUN_144d6cb10 body=305 status=ok
// SIG undefined FUN_144d6cb10(void)

undefined8 FUN_144d6cb10(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x644) == 0) {
    uVar1 = FUN_145141010();
    *(undefined4 *)(param_1 + 0x644) = uVar1;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = FUN_145141010();
    iVar3 = (iVar2 - (int)((((ulonglong)
                             (uint)(*(int *)(param_1 + 0x630) - *(int *)(param_1 + 0x648)) *
                             (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                            (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                           (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x4c) >> 0x10)) -
            *(int *)(param_1 + 0x644);
    if ((-1 < iVar3) && (*(int *)(param_1 + 0x64c) < iVar3)) {
      if (*(int *)(param_1 + 300) == 0) {
        *(int *)(param_1 + 0x644) = iVar2;
        *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
        *(undefined4 *)(param_1 + 0x69c) = 0;
      }
      else {
        if (0x2d5 < iVar3) {
          *(undefined4 *)(param_1 + 0x690) = 1;
        }
        if (*(uint *)(param_1 + 0x698) < 4) {
          *(uint *)(param_1 + 0x698) = *(uint *)(param_1 + 0x698) + 1;
          if (param_2 == 0) {
            *(int *)(param_1 + 0x694) = *(int *)(param_1 + 0x694) + 1;
            *(undefined4 *)(param_1 + 0x68c) = 2;
            *(undefined4 *)(param_1 + 0x120) = 1;
          }
          return 1;
        }
        *(undefined4 *)(param_1 + 0x698) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x68c) = 1;
  return 0;
}



// FUNCTION 144d6cc50 FUN_144d6cc50 body=220 status=ok
// SIG undefined FUN_144d6cc50(void)

longlong FUN_144d6cc50(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x67c) != *(int *)(param_1 + 0xc))) {
    if (*(int *)(param_1 + 0x2d8) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = *(int *)(param_1 + 0x640);
      if (iVar1 - 1U < 0xfffffffe) {
        *(undefined4 *)(param_1 + 0x640) = 0;
        *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + (param_2 - iVar1);
      }
      if (*(int *)(param_1 + 0x688) != 0) {
        *(undefined4 *)(param_1 + 0x688) = 0;
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_144d686e0(param_1,0);
          FUN_144d686e0(param_1,1);
        }
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
      }
      if (*(int *)(param_1 + 0x11c) != 0) {
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
      }
      *(undefined4 *)(param_1 + 0x68c) = 0;
      FUN_145155ca0(param_1 + 0x130,*(undefined8 *)(param_1 + 0x6b0));
      *(undefined4 *)(param_1 + 0x6cc) = 0;
      *(undefined4 *)(param_1 + 0x2e0) = 1;
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 144d6cd30 FUN_144d6cd30 body=614 status=ok
// SIG undefined FUN_144d6cd30(void)

undefined8 FUN_144d6cd30(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (((*(longlong *)(param_1 + 0x6b0) != 0) && (*(longlong *)(param_1 + 0x1c0) == 0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    FUN_145149480(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,
                  *(uint *)(param_1 + 0x24) >> 0x14 & 1,*(uint *)(param_1 + 0x24) >> 2 & 1,
                  *(undefined4 *)(param_1 + 0x128),*(longlong *)(param_1 + 0x6b0));
  }
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (piVar1[5] + 1 < *piVar1) {
      iVar2 = piVar1[5] + 1;
    }
    piVar1[5] = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x624);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 0x624) = iVar3;
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x620) + -1;
  }
  if (*(int *)(param_1 + 0x680) != 0) {
    uVar5 = param_2 - *(int *)(param_1 + 0x680);
    if (*(uint *)(param_1 + 0x650) < uVar5) {
      *(uint *)(param_1 + 0x658) = *(uint *)(param_1 + 0x650);
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x654);
      *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_1 + 0x67c);
      *(uint *)(param_1 + 0x650) = uVar5;
    }
    else if (*(uint *)(param_1 + 0x658) < param_2) {
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x67c);
      *(uint *)(param_1 + 0x658) = uVar5;
    }
  }
  *(uint *)(param_1 + 0x680) = param_2;
  *(uint *)(*(longlong *)(param_1 + 0x5e8) + (longlong)*(int *)(param_1 + 0x624) * 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x5f8) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x660);
  *(undefined4 *)(*(longlong *)(param_1 + 0x5f0) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x664);
  *(undefined4 *)(*(longlong *)(param_1 + 0x600) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x668);
  *(undefined4 *)(*(longlong *)(param_1 + 0x608) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x610) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(*(longlong *)(param_1 + 0x618) + (longlong)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x634) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0x5e8) + (longlong)iVar2 * 4) =
         param_2 - (int)(((ulonglong)*(uint *)(param_1 + 0x674) * 1000) /
                        (ulonglong)*(uint *)(param_1 + 0x670));
    *(uint *)(param_1 + 0x634) = param_2;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  else if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(longlong *)(param_1 + 0x1b8) + 0x5c) == 1))
  {
    FUN_144d6a3e0(param_1);
  }
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
  if (*(int *)(param_1 + 0x644) == 0) {
    uVar4 = FUN_145141010();
    *(undefined4 *)(param_1 + 0x644) = uVar4;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
  }
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x6cc);
  *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  return 0;
}



// FUNCTION 144d6cfa0 FUN_144d6cfa0 body=316 status=ok
// SIG undefined FUN_144d6cfa0(void)

void FUN_144d6cfa0(longlong param_1,int param_2,ulonglong param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint *local_58;
  uint *local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  
  local_58 = param_4 + 1;
  puVar1 = (uint *)((param_3 & 0xffffffff) + (longlong)param_4);
  uVar6 = *param_4 & 0xfffffff0;
  if (uVar6 != 0) {
    puVar5 = (ulonglong *)((longlong)param_2 * 0x1c0 + *(longlong *)(param_1 + 0x1b8));
    uVar2 = puVar5[4];
    do {
      if (param_6 < local_58) {
        return;
      }
      if (local_58 < param_5) {
        return;
      }
      if (param_6 < puVar1) {
        return;
      }
      iVar3 = (int)*puVar5 - (int)puVar5[5];
      if (iVar3 < 0) {
        iVar3 = iVar3 + *(int *)((longlong)puVar5 + 0xc);
      }
      local_2c = 0;
      local_48 = *puVar5;
      uVar4 = *(int *)((longlong)puVar5 + 0xc) - iVar3 & 0xffffffc0;
      local_40 = puVar5[2];
      local_38 = puVar5[3];
      local_30 = uVar4 - 0x10;
      if (uVar4 < 0x11) {
        local_30 = uVar4;
      }
      local_50 = puVar1;
      FUN_1451414a0(uVar2,&local_48,&local_58);
      if (uVar6 < local_28) {
        *puVar5 = *puVar5 + (ulonglong)uVar6;
        if (puVar5[3] < *puVar5) {
          *puVar5 = *puVar5 - (ulonglong)*(uint *)((longlong)puVar5 + 0xc);
        }
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 - local_28;
        *puVar5 = local_48;
      }
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 144d6d0e0 FUN_144d6d0e0 body=792 status=ok
// SIG undefined FUN_144d6d0e0(void)

undefined8 FUN_144d6d0e0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *in_stack_ffffffffffffff78;
  undefined4 uVar16;
  
  uVar10 = (uint)param_2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  if ((uVar10 >> 8 & 1) != 0) {
    FUN_145141010();
    param_1 = FUN_144d6cc50(param_1);
    if (param_1 == 0) {
      return 0;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  puVar3 = *(uint **)(param_1 + 0xc0);
  puVar15 = (uint *)((ulonglong)*(uint *)(param_1 + 0x124) + (longlong)puVar3);
  puVar4 = *(uint **)(param_1 + 200);
  if (((*(int *)(param_1 + 0x4c) != 0) || (FUN_144d6ad00(param_1), *(int *)(param_1 + 0x1c) != 0))
     || (*(int *)(param_1 + 0x4c) != 0)) {
    return 0;
  }
  iVar5 = FUN_145141010();
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar14 = *(uint *)(param_1 + 0x134);
  uVar13 = 0;
  uVar6 = (uVar10 & 0xf) + ((uint)(param_2 >> 4) & 0xf);
  puVar12 = puVar3;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      if ((puVar15 < puVar12) || (puVar12 < puVar3)) break;
      uVar1 = *puVar12;
      if (uVar14 <= uVar6) {
        iVar11 = 0;
        puVar8 = puVar4;
        if (0 < *(int *)(param_1 + 300)) {
          do {
            if (*puVar8 == uVar13) {
              if ((iVar11 != -1) && (uVar1 != 0)) {
                in_stack_ffffffffffffff78 = puVar3;
                FUN_144d6cfa0(param_1,iVar11,uVar1,puVar12 + 1,puVar3,puVar15);
              }
              break;
            }
            iVar11 = iVar11 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar11 < *(int *)(param_1 + 300));
        }
      }
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      puVar12 = (uint *)((longlong)(puVar12 + 1) + (ulonglong)uVar1);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(param_1 + 0x38));
  }
  iVar11 = FUN_145141010();
  if ((*(int *)(param_1 + 0x44) != 0) &&
     (((lVar2 != 0 || (*(longlong *)(param_1 + 0x1c0) != 0)) && ((param_2 & 0xf0) != 0)))) {
    uVar13 = *(uint *)(param_1 + 0x20);
    iVar7 = FUN_145155e60(*(undefined4 *)(param_1 + 0x118));
    if (iVar7 == 0) {
      uVar14 = uVar13 & 0xffefffff | 0x20200;
      if (1 < uVar6) {
        uVar14 = uVar14 & 0xfffdffff | *(uint *)(param_1 + 0x20) & 0x100000;
      }
      uVar13 = uVar14 & 0xfffffdff;
      if ((param_2 & 0xf) != 0) {
        uVar13 = uVar14;
      }
      if ((uVar13 & 0x20200) == 0x20200) goto LAB_144d6d386;
    }
    else {
      uVar13 = uVar13 & 0xfffdfdff;
    }
    if (((puVar12 < puVar15) && (puVar3 <= puVar12)) &&
       ((lVar2 != 0 || (*(longlong *)(param_1 + 0x1c0) != 0)))) {
      iVar7 = FUN_145155e60(*(undefined4 *)(param_1 + 0x118));
      if (iVar7 == 0) {
        uVar13 = 0;
      }
      else if (((byte)DAT_14c7adb90 & 8) != 0) {
        uVar13 = FUN_1451493c0(lVar2,puVar12,*(uint *)(param_1 + 0x24) >> 0x14 & 1,
                               *(uint *)(param_1 + 0x24) >> 2 & 1,
                               CONCAT44(uVar16,*(undefined4 *)(param_1 + 0x128)),puVar15,
                               param_1 + 0x130,uVar10 & 0xff,*(undefined8 *)(param_1 + 0x6b0),
                               *(undefined8 *)(param_1 + 0x1c0));
      }
    }
  }
LAB_144d6d386:
  *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) + (iVar11 - iVar5);
  iVar5 = FUN_145141010();
  *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + (iVar5 - iVar11);
  if (*(uint *)(param_1 + 0x6cc) < uVar13) {
    *(uint *)(param_1 + 0x6cc) = uVar13;
  }
  if ((uVar10 >> 9 & 1) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_144d6cd30(param_1,iVar5);
  }
  return uVar9;
}



// FUNCTION 144d6d400 FUN_144d6d400 body=297 status=ok
// SIG undefined FUN_144d6d400(void)

longlong FUN_144d6d400(uint *param_1,uint param_2,int *param_3,uint *param_4,uint *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_2 < (uint)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x24)) || (param_1[3] < param_2))
  {
    return 0;
  }
  uVar4 = *param_1;
  iVar8 = 0;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      if (uVar4 - uVar6 < 0x21) break;
      uVar3 = uVar4 + uVar6 >> 1;
      if (*(ulonglong *)(param_1 + (ulonglong)uVar3 * 2 + 4) < (ulonglong)param_2 << 0x24) {
        uVar6 = uVar3 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar6 < uVar4);
  }
  uVar5 = (ulonglong)(uVar6 - 4);
  if (uVar6 < 4) {
    uVar5 = 0;
  }
  if (param_3 != (int *)0x0) {
    iVar8 = *param_3;
  }
  uVar4 = (uint)uVar5;
  uVar6 = uVar4 + 0x25;
  if (*param_1 < uVar4 + 0x25) {
    uVar6 = *param_1;
  }
  do {
    if (uVar6 <= uVar4) {
      return 0;
    }
    uVar1 = *(ulonglong *)(param_1 + uVar5 * 2 + 4);
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    uVar3 = (uint)(uVar1 >> 0x24);
  } while (((param_2 < uVar3) || (uVar7 = ((uint)(uVar1 >> 0x14) & 0xffff) + uVar3, uVar7 < param_2)
           ) || (bVar9 = iVar8 != 0, iVar8 = iVar8 + -1, bVar9));
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar7;
  }
  lVar2 = (longlong)param_1 + (longlong)(int)param_1[2] + (ulonglong)((uint)uVar1 & 0xfffff);
  if (param_3 == (int *)0x0) {
    return lVar2;
  }
  *param_3 = *param_3 + 1;
  return lVar2;
}



// FUNCTION 144d6d530 FUN_144d6d530 body=233 status=ok
// SIG undefined FUN_144d6d530(void)

int FUN_144d6d530(byte *param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  
  bVar7 = 0;
  pbVar6 = param_2 + -1;
  if (param_2 <= param_1) {
    pbVar6 = param_2;
  }
  iVar3 = 0;
  do {
    while( true ) {
      while( true ) {
        iVar4 = iVar3;
        if (pbVar6 <= param_1) {
          *param_3 = (uint)bVar7;
          return iVar4 + 1;
        }
        bVar2 = *param_1;
        if (bVar2 == 10) break;
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar7 = bVar7 | ((*pbVar1 & 0xc0) == 0x80 && (bVar2 & 0xc0) == 0xc0) | (char)bVar2 >> 6 & 2U
        ;
        iVar3 = iVar4;
      }
      param_1 = param_1 + 1;
      uVar5 = 1;
      if (param_1 < pbVar6) break;
LAB_144d6d5f4:
      iVar3 = iVar4 + 1;
      if (uVar5 < 2) {
        iVar3 = iVar4;
      }
    }
    do {
      bVar2 = *param_1;
      if (bVar2 == 10) {
        uVar5 = uVar5 + 1;
      }
      else if ((bVar2 != 0xd) && (bVar2 != 0x20)) {
        bVar7 = bVar7 | ((param_1[1] & 0xc0) == 0x80 && (*param_1 & 0xc0) == 0xc0) |
                        (char)*param_1 >> 6 & 2U;
        goto LAB_144d6d5f4;
      }
      param_1 = param_1 + 1;
    } while (param_1 < pbVar6);
    iVar3 = iVar4 + 1;
    if (uVar5 < 2) {
      iVar3 = iVar4;
    }
  } while( true );
}



// FUNCTION 144d6d620 FUN_144d6d620 body=197 status=ok
// SIG undefined FUN_144d6d620(void)

undefined8 FUN_144d6d620(undefined8 *param_1,char *param_2,int *param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar1 = (char *)*param_1;
  bVar4 = false;
  pcVar3 = param_2;
  if ((longlong)param_4 < (longlong)param_2 - (longlong)pcVar1) {
    pcVar3 = pcVar1 + param_4;
  }
  for (; (pcVar1 < pcVar3 && ((param_5 != 0 || (*pcVar1 != '\n')))); pcVar1 = pcVar1 + 1) {
    if ((byte)(*pcVar1 - 0x30U) < 10) {
      iVar2 = 0;
      for (; (pcVar1 < param_2 && ((byte)(*pcVar1 - 0x30U) < 10)); pcVar1 = pcVar1 + 1) {
        iVar2 = (int)*pcVar1 + (iVar2 * 5 + -0x18) * 2;
      }
      *param_1 = pcVar1;
      if (bVar4) {
        iVar2 = 0;
      }
      *param_3 = iVar2;
      return 1;
    }
    bVar4 = *pcVar1 == '-';
  }
  return 0;
}



// FUNCTION 144d6d6f0 FUN_144d6d6f0 body=535 status=ok
// SIG undefined FUN_144d6d6f0(void)

undefined8 FUN_144d6d6f0(undefined8 *param_1,char *param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  int local_18 [4];
  
  iVar2 = FUN_144d6d620(param_1,param_2,local_18,6,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar3 = (char *)*param_1;
  bVar8 = false;
  iVar2 = 0;
  bVar7 = bVar8;
  pcVar6 = param_2;
  if (3 < (longlong)param_2 - (longlong)pcVar3) {
    pcVar6 = pcVar3 + 3;
  }
  while( true ) {
    if (pcVar6 <= pcVar3) {
      return 0;
    }
    cVar1 = *pcVar3;
    if (cVar1 == '\n') break;
    iVar4 = iVar2;
    if ((byte)(cVar1 - 0x30U) < 10) {
      for (; (pcVar3 < param_2 && (cVar1 = *pcVar3, (byte)(cVar1 - 0x30U) < 10));
          pcVar3 = pcVar3 + 1) {
        iVar4 = (int)cVar1 + (iVar4 * 5 + -0x18) * 2;
      }
      *param_1 = pcVar3;
      if (bVar7) {
        iVar4 = 0;
      }
      pcVar6 = param_2;
      if (3 < (longlong)param_2 - (longlong)pcVar3) {
        pcVar6 = pcVar3 + 3;
      }
      bVar7 = bVar8;
      if (pcVar3 < pcVar6) {
        while (cVar1 = *pcVar3, cVar1 != '\n') {
          iVar5 = iVar2;
          if ((byte)(cVar1 - 0x30U) < 10) {
            for (; (pcVar3 < param_2 && (cVar1 = *pcVar3, (byte)(cVar1 - 0x30U) < 10));
                pcVar3 = pcVar3 + 1) {
              iVar5 = (int)cVar1 + (iVar5 * 5 + -0x18) * 2;
            }
            *param_1 = pcVar3;
            if (bVar7) {
              iVar5 = iVar2;
            }
            pcVar6 = param_2;
            if (3 < (longlong)param_2 - (longlong)pcVar3) {
              pcVar6 = pcVar3 + 3;
            }
            if (pcVar6 <= pcVar3) {
              return 0;
            }
            while( true ) {
              cVar1 = *pcVar3;
              if (cVar1 == '\n') {
                return 0;
              }
              if ((byte)(cVar1 - 0x30U) < 10) break;
              bVar8 = cVar1 == '-';
              pcVar3 = pcVar3 + 1;
              if (pcVar6 <= pcVar3) {
                return 0;
              }
            }
            for (; (pcVar3 < param_2 && ((byte)(*pcVar3 - 0x30U) < 10)); pcVar3 = pcVar3 + 1) {
              iVar2 = (int)*pcVar3 + (iVar2 * 5 + -0x18) * 2;
            }
            *param_1 = pcVar3;
            if (bVar8) {
              iVar2 = 0;
            }
            *param_3 = local_18[0] * 3600000 + iVar4 * 60000 + iVar5 * 1000 + iVar2;
            return 1;
          }
          bVar7 = cVar1 == '-';
          pcVar3 = pcVar3 + 1;
          if (pcVar6 <= pcVar3) {
            return 0;
          }
        }
      }
      return 0;
    }
    pcVar3 = pcVar3 + 1;
    bVar7 = cVar1 == '-';
  }
  return 0;
}



// FUNCTION 144d6d910 FUN_144d6d910 body=65 status=ok
// SIG undefined FUN_144d6d910(void)

void FUN_144d6d910(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined1 *)(lVar2 + (longlong)param_2) = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((longlong)param_2 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144d6d960 FUN_144d6d960 body=729 status=ok
// SIG undefined FUN_144d6d960(void)

undefined8
FUN_144d6d960(longlong *param_1,longlong param_2,uint param_3,undefined8 *param_4,int *param_5,
             byte *param_6,undefined4 *param_7,uint *param_8)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  byte *pbVar8;
  
  pbVar2 = param_6;
  pbVar12 = (byte *)0x0;
  pbVar9 = pbVar12;
LAB_144d6d990:
  pbVar4 = (byte *)*param_1;
  pbVar5 = pbVar2;
  if (8 < (longlong)pbVar2 - (longlong)pbVar4) {
    pbVar5 = pbVar4 + 8;
  }
  uVar7 = 0;
  for (; pbVar4 < pbVar5; pbVar4 = pbVar4 + 1) {
    if ((byte)(*pbVar4 - 0x30) < 10) goto joined_r0x000144d6d9c8;
  }
  goto LAB_144d6da1b;
joined_r0x000144d6d9c8:
  for (; (pbVar4 < pbVar2 && ((byte)(*pbVar4 - 0x30) < 10)); pbVar4 = pbVar4 + 1) {
  }
  *param_1 = (longlong)pbVar4;
  iVar3 = FUN_144d6d6f0(param_1,pbVar2,&param_6,1);
  if ((iVar3 != 0) && (iVar3 = FUN_144d6d6f0(param_1,pbVar2,local_res8,0), iVar3 != 0)) {
    pbVar9 = (byte *)*param_1;
    pbVar5 = pbVar12;
    goto joined_r0x000144d6daa9;
  }
LAB_144d6da1b:
  uVar11 = (int)pbVar9 + 1;
  pbVar9 = (byte *)(ulonglong)uVar11;
  if (8 < (int)uVar11) {
    return 0;
  }
  pbVar4 = pbVar12;
  for (pbVar5 = (byte *)*param_1; pbVar5 < pbVar2; pbVar5 = pbVar5 + 1) {
    uVar7 = (uint)pbVar4;
    if (*pbVar5 == 10) {
      pbVar4 = (byte *)(ulonglong)(uVar7 + 1);
    }
    else if (*pbVar5 != 0xd) break;
    uVar7 = (uint)pbVar4;
  }
  *param_1 = (longlong)pbVar5;
  if (uVar7 == 0) {
    pbVar4 = pbVar5;
    pbVar8 = pbVar12;
    pbVar6 = pbVar12;
    if (pbVar5 < pbVar2) {
      do {
        pbVar10 = pbVar12;
        pbVar5 = pbVar12;
        if ((*pbVar4 < 0x21) && (pbVar10 = pbVar8, pbVar5 = pbVar6, pbVar6 == (byte *)0x0)) {
          pbVar5 = pbVar4;
        }
        pbVar8 = pbVar10;
        if ((*pbVar4 == 10) &&
           (uVar7 = (int)pbVar8 + 1, pbVar8 = (byte *)(ulonglong)uVar7, 1 < (int)uVar7))
        goto LAB_144d6da99;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar5;
      } while (pbVar4 < pbVar2);
      *param_1 = (longlong)pbVar4;
    }
    else {
LAB_144d6da99:
      *param_1 = (longlong)pbVar5;
    }
  }
  goto LAB_144d6d990;
joined_r0x000144d6daa9:
  if (pbVar2 <= pbVar9) goto LAB_144d6dac7;
  uVar7 = (uint)pbVar5;
  if (*pbVar9 == 10) {
    pbVar5 = (byte *)(ulonglong)(uVar7 + 1);
  }
  else if (*pbVar9 != 0xd) goto LAB_144d6dac7;
  uVar7 = (uint)pbVar5;
  pbVar9 = pbVar9 + 1;
  goto joined_r0x000144d6daa9;
LAB_144d6dac7:
  *param_1 = (longlong)pbVar9;
  pbVar5 = pbVar9;
  pbVar4 = pbVar12;
  pbVar8 = pbVar12;
  if ((uVar7 < 2) || (9 < (byte)(*pbVar9 - 0x30))) {
    for (; pbVar6 = pbVar5, pbVar5 < pbVar2; pbVar5 = pbVar5 + 1) {
      pbVar10 = pbVar12;
      pbVar6 = pbVar12;
      if ((*pbVar5 < 0x21) && (pbVar10 = pbVar4, pbVar6 = pbVar8, pbVar8 == (byte *)0x0)) {
        pbVar6 = pbVar5;
      }
      if ((*pbVar5 == 10) &&
         (uVar7 = (int)pbVar10 + 1, pbVar10 = (byte *)(ulonglong)uVar7, 1 < (int)uVar7)) break;
      pbVar4 = pbVar10;
      pbVar8 = pbVar6;
    }
    *param_1 = (longlong)pbVar6;
  }
  else {
    pbVar9 = pbVar9 + -1;
    *param_1 = (longlong)pbVar9;
  }
  uVar7 = (int)*param_1 - (int)pbVar9;
  pbVar5 = pbVar9;
  if ((byte *)*param_1 == pbVar2) {
    pbVar5 = pbVar9 + -1;
    pbVar4 = pbVar5;
    for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar1 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(undefined4 *)pbVar4 = uVar1;
      pbVar4 = pbVar4 + 4;
    }
    uVar11 = uVar7 & 3;
    if (uVar11 != 0) {
      lVar13 = (longlong)pbVar4 - (longlong)pbVar9;
      do {
        pbVar9[lVar13] = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *param_1 = *param_1 + -1;
  }
  *(undefined1 *)*param_1 = 0;
  *param_1 = *param_1 + 1;
  *param_4 = pbVar5;
  *param_5 = uVar7 + 1;
  for (pbVar9 = (byte *)*param_1; (pbVar9 < pbVar2 && (*pbVar9 < 0x21)); pbVar9 = pbVar9 + 1) {
  }
  *param_1 = (longlong)pbVar9;
  if (0xfffffff < (uint)param_6) {
    param_6._0_4_ = 0xfffffff;
  }
  if ((uint)param_6 < local_res8[0]) {
    uVar7 = local_res8[0] - (uint)param_6;
    if (0xffff < local_res8[0] - (uint)param_6) {
      uVar7 = 0xffff;
    }
    pbVar12 = (byte *)(ulonglong)uVar7;
    if (*param_8 < uVar7 + (uint)param_6) {
      *param_8 = uVar7 + (uint)param_6;
    }
  }
  uVar14 = ((ulonglong)(uint)param_6 << 0x10 | (ulonglong)pbVar12) << 0x14;
  if ((param_3 != 0) && (uVar14 < *(ulonglong *)(param_2 + (ulonglong)(param_3 - 1) * 8))) {
    *param_7 = 1;
  }
  *(ulonglong *)(param_2 + (ulonglong)param_3 * 8) = uVar14;
  return 1;
}



// FUNCTION 144d6dc40 FUN_144d6dc40 body=426 status=ok
// SIG undefined FUN_144d6dc40(void)

void FUN_144d6dc40(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined *local_138 [34];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)(local_138 + 2);
  lVar8 = 0;
  do {
    ppuVar10 = local_138 + lVar8 + 1;
    lVar9 = lVar8;
    while( true ) {
      puVar6 = param_2 + 1;
      uVar1 = *(ulonglong *)
               (((longlong)param_2 - (longlong)param_1 >> 1 & 0xfffffffffffffff8U) +
               (longlong)param_1);
      puVar5 = param_1 + -1;
      while( true ) {
        do {
          uVar2 = puVar5[1];
          puVar5 = puVar5 + 1;
        } while (uVar2 < uVar1);
        do {
          puVar7 = puVar6;
          puVar6 = puVar7 + -1;
        } while (uVar1 < puVar7[-1]);
        if (puVar6 <= puVar5) break;
        *puVar5 = puVar7[-1];
        *puVar6 = uVar2;
      }
      if (puVar7 < param_2) {
        if ((longlong)((longlong)param_2 - (longlong)puVar6 & 0xfffffffffffffff8U) < 0x100) {
          puVar5 = puVar7 + 1;
          do {
            uVar1 = *puVar5;
            puVar4 = puVar5;
            while ((puVar3 = puVar4 + -1, puVar7 <= puVar3 && (uVar1 < *puVar3))) {
              *puVar4 = *puVar3;
              puVar4 = puVar3;
            }
            puVar5 = puVar5 + 1;
            *puVar4 = uVar1;
          } while (puVar5 <= param_2);
        }
        else {
          lVar9 = lVar9 + 2;
          ppuVar10[1] = (undefined *)puVar7;
          ppuVar10[2] = (undefined *)param_2;
          ppuVar10 = ppuVar10 + 2;
        }
      }
      if (puVar6 <= param_1) goto LAB_144d6ddc2;
      lVar8 = (longlong)puVar6 - (longlong)param_1 >> 3;
      if (lVar8 + 1 < 0x20) break;
      param_2 = puVar6;
      if (lVar9 != 0) {
        puVar5 = (ulonglong *)*ppuVar10;
        puVar7 = (ulonglong *)ppuVar10[-1];
        if ((longlong)puVar5 - (longlong)puVar7 >> 3 < lVar8) {
          ppuVar10[-1] = (undefined *)param_1;
          *ppuVar10 = (undefined *)puVar6;
          param_1 = puVar7;
          param_2 = puVar5;
        }
      }
    }
    puVar5 = param_1 + 1;
    do {
      uVar1 = *puVar5;
      puVar7 = puVar5;
      while ((puVar4 = puVar7 + -1, param_1 <= puVar4 && (uVar1 < *puVar4))) {
        *puVar7 = *puVar4;
        puVar7 = puVar4;
      }
      puVar5 = puVar5 + 1;
      *puVar7 = uVar1;
    } while (puVar5 <= puVar6);
LAB_144d6ddc2:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      local_138[1] = &UNK_144d6ddea;
      FUN_144d8e3a0(local_28 ^ (ulonglong)(local_138 + 2));
    }
    param_1 = (ulonglong *)local_138[lVar9];
    lVar8 = lVar9 + -2;
    param_2 = (ulonglong *)local_138[lVar9 + 1];
  } while( true );
}



// FUNCTION 144d6de00 FUN_144d6de00 body=781 status=ok
// SIG undefined FUN_144d6de00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144d6de00(uint *param_1,uint *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  longlong alStack_98 [4];
  undefined8 local_78;
  int local_70;
  uint uStack_6c;
  uint *local_68;
  uint local_60;
  uint local_5c;
  ulonglong *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 *local_40;
  ulonglong local_38;
  
  puVar10 = auStack_b8;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_78;
  uVar12 = 0;
  local_78._4_4_ = 0;
  local_68 = param_1;
  local_48 = param_4;
  local_40 = param_3;
  if (((param_1 < param_2) && ((longlong)param_2 - (longlong)param_1 < 0xfffff)) &&
     (0x17 < (ulonglong)((longlong)param_2 - (longlong)param_1))) {
    cVar1 = (char)*param_1;
    if (((cVar1 == -1) && (*(char *)((longlong)param_1 + 1) == -2)) ||
       ((cVar1 == -2 && (*(char *)((longlong)param_1 + 1) == -1)))) {
      puVar11 = auStack_b8;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
        puVar11 = auStack_b8;
      }
    }
    else {
      local_70 = 0;
      if (((cVar1 == -0x11) && (*(char *)((longlong)param_1 + 1) == -0x45)) &&
         (*(char *)((longlong)param_1 + 2) == -0x41)) {
        local_68 = (uint *)((longlong)param_1 + 3);
        local_70 = 1;
      }
      puVar14 = local_68;
      uStack_c0 = 0x144d6dee2;
      uVar5 = FUN_144d6d530(local_68,param_2,&local_5c);
      puVar11 = auStack_b8;
      local_78._0_4_ = uVar5;
      if (uVar5 == 0) {
LAB_144d6e0e2:
        if (local_40 != (undefined4 *)0x0) {
          *local_40 = 3;
        }
      }
      else {
        uVar15 = uVar5 * 8 + 0x10;
        uVar9 = (uVar5 * 8 + 0x23) / 0x18;
        uVar8 = (ulonglong)uVar9;
        puVar17 = param_1;
        uStack_6c = uVar15;
        if (uVar9 != 0) {
          uVar7 = uVar8 * 8 + 0xf;
          if (uVar7 <= uVar8 * 8) {
            uVar7 = 0xffffffffffffff0;
          }
          uStack_c0 = 0x144d6df38;
          lVar2 = -(uVar7 & 0xfffffffffffffff0);
          puVar10 = auStack_b8 + lVar2;
          puVar13 = (ulonglong *)((longlong)&local_78 + lVar2);
          puVar16 = param_1;
          local_58 = puVar13;
          if (uVar9 != 0) {
            do {
              puVar3 = local_58;
              if (param_2 <= puVar14) {
                uVar8 = (ulonglong)uVar12;
                uVar15 = uVar15 + (uVar12 - (uint)local_78) * 8;
                puVar17 = puVar16;
                uVar5 = uVar12;
                break;
              }
              *(longlong *)((longlong)alStack_98 + lVar2 + 0x18) = (longlong)&local_78 + 4;
              *(undefined8 *)((longlong)alStack_98 + lVar2 + 0x10) = local_48;
              *(uint **)((longlong)alStack_98 + lVar2 + 8) = param_2;
              *(uint **)((longlong)alStack_98 + lVar2) = &local_60;
              *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144d6df89;
              iVar6 = FUN_144d6d960(&local_68,puVar3,uVar12,&local_50);
              lVar4 = local_50;
              puVar14 = local_68;
              puVar11 = auStack_b8 + lVar2;
              if (iVar6 == 0) goto LAB_144d6e0e2;
              puVar17 = (uint *)((longlong)puVar16 + (ulonglong)local_60);
              if (local_68 < puVar17) goto LAB_144d6e01a;
              *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144d6dfae;
              FUN_144d6d910(puVar16,lVar4);
              uVar15 = uStack_6c;
              *puVar13 = *puVar13 | (longlong)puVar16 - (longlong)param_1;
              uVar5 = (uint)local_78;
              if (uVar15 + 7 <= (uint)((int)puVar14 - (int)puVar17)) {
                uVar8 = (ulonglong)(uVar12 + 1);
                break;
              }
              uVar12 = uVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar16 = puVar17;
            } while (uVar12 < uVar9);
          }
          puVar13 = local_58;
          if ((((ulonglong)puVar17 & 7) != 0) && (1 < uVar5)) {
            puVar17 = (uint *)((longlong)puVar17 + (ulonglong)(8 - ((uint)puVar17 & 7)));
          }
          if ((uint)((int)puVar14 - (int)puVar17) < uVar15) {
LAB_144d6e01a:
            puVar11 = auStack_b8 + lVar2;
            if (local_40 != (undefined4 *)0x0) {
              *local_40 = 4;
              puVar11 = auStack_b8 + lVar2;
            }
            goto LAB_144d6e101;
          }
          *(undefined8 *)(auStack_b8 + lVar2 + -8) = 0x144d6e043;
          FUN_144d6d910(puVar17 + 4,puVar13,(int)uVar8 * 8);
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < uVar5) {
          puVar13 = (ulonglong *)(puVar17 + 4 + uVar8 * 2);
          do {
            uVar12 = (uint)uVar8;
            if (param_2 <= puVar14) break;
            *(longlong *)(puVar10 + 0x38) = (longlong)&local_78 + 4;
            *(undefined8 *)(puVar10 + 0x30) = local_48;
            *(uint **)(puVar10 + 0x28) = param_2;
            *(uint **)(puVar10 + 0x20) = &uStack_6c;
            *(undefined8 *)(puVar10 + -8) = 0x144d6e08a;
            iVar6 = FUN_144d6d960(&local_68,puVar17 + 4,uVar8,&local_50);
            puVar11 = puVar10;
            if (iVar6 == 0) goto LAB_144d6e0e2;
            uVar12 = uVar12 + 1;
            uVar8 = (ulonglong)uVar12;
            *puVar13 = *puVar13 | local_50 - (longlong)param_1;
            puVar13 = puVar13 + 1;
            puVar14 = local_68;
          } while (uVar12 < uVar5);
        }
        *puVar17 = uVar12;
        puVar17[3] = local_78._4_4_;
        puVar17[2] = (int)param_1 - (int)puVar17;
        puVar11 = puVar10;
        if ((local_70 == 0) && ((local_5c & 1) == 0)) {
          puVar17[1] = local_5c >> 1 & 1;
        }
        else {
          puVar17[1] = 2;
        }
      }
    }
  }
  else {
    puVar11 = auStack_b8;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
      puVar11 = auStack_b8;
    }
  }
LAB_144d6e101:
  uVar8 = local_38 ^ (ulonglong)&local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_144d6e10d;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 144d6e130 FUN_144d6e130 body=23 status=ok
// SIG undefined FUN_144d6e130(void)

void FUN_144d6e130(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong *puVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((DAT_14c79294c == 0) || (DAT_14c792944 == 0)) {
    return;
  }
  bVar8 = false;
  (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
  DAT_14c7929a4 = DAT_14c7929a4 + 1;
  if (DAT_14c7929a4 != 1) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar19 = 0;
  lVar10 = DAT_14c792958;
  if (DAT_14c792958 != 0) {
    do {
      puVar12 = (ulonglong *)(lVar10 + 0x138);
      lVar15 = 0x30;
      do {
        (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
        uVar5 = *puVar12;
        if ((uVar5 != 0) && ((uVar19 == 0 || (uVar5 < uVar19)))) {
          iVar11 = param_2;
          if (puVar12[1] != 0) {
            iVar11 = param_1;
          }
          if (iVar11 != 0) {
            uVar19 = uVar5;
          }
        }
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        puVar12 = puVar12 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      plVar9 = (longlong *)(lVar10 + 0xd0);
      lVar10 = *plVar9;
    } while (*plVar9 != 0);
    lVar10 = DAT_14c792958;
    if (uVar19 != 0) {
LAB_144d6f727:
      while (lVar10 != 0) {
        (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)();
        iVar11 = 0;
        plVar9 = (longlong *)(lVar10 + 0x140);
        lVar15 = 0;
LAB_144d6f744:
        if (plVar9[-1] != uVar19) {
LAB_144d6f75b:
          iVar11 = iVar11 + 1;
          lVar15 = lVar15 + 1;
          plVar9 = plVar9 + 8;
          if (0x2f < iVar11) goto code_r0x000144d6f769;
          goto LAB_144d6f744;
        }
        lVar6 = *plVar9;
        iVar18 = param_2;
        if (lVar6 != 0) {
          iVar18 = param_1;
        }
        if (iVar18 == 0) goto LAB_144d6f75b;
        lVar15 = lVar15 * 0x40;
        uVar1 = *(uint *)(lVar15 + 0x164 + lVar10);
        uVar2 = *(undefined4 *)(lVar15 + 0x168 + lVar10);
        uVar3 = *(undefined4 *)(lVar15 + 0x16c + lVar10);
        uVar4 = *(undefined4 *)(lVar15 + 0x170 + lVar10);
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        iVar11 = 0;
        for (lVar10 = DAT_14c792958; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0xd0)) {
          (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
          plVar9 = (longlong *)(lVar10 + 0x140);
          lVar15 = 0x30;
          do {
            if ((plVar9[-1] == uVar19) && (*plVar9 == lVar6)) {
              iVar11 = iVar11 + 1;
            }
            plVar9 = plVar9 + 8;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        }
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
        if (!bVar8) {
          (*(code *)(&PTR_LAB_14c707898)[(ulonglong)DAT_14c707864 * 10])();
          bVar8 = true;
        }
        if (lVar6 == 0) {
          if ((code *)(&PTR_LAB_14c7078b8)[(ulonglong)DAT_14c707864 * 10] != (code *)0x0) {
            (*(code *)(&PTR_LAB_14c7078b8)[(ulonglong)DAT_14c707864 * 10])
                      (DAT_14c792988,DAT_14c792994,DAT_14c792998,DAT_14c79299c,DAT_14c792990);
          }
        }
        else {
          (*(code *)(&PTR_LAB_14c7078c0)[(ulonglong)DAT_14c707864 * 10])
                    (lVar6,uVar2,uVar3,iVar11 != 1,uVar4,0xffffffff);
        }
        while( true ) {
          (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
          lVar15 = 0;
          lVar17 = 0;
          iVar18 = 0x7fffffff;
          lVar10 = DAT_14c792958;
          if (DAT_14c792958 == 0) break;
          do {
            (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
            piVar13 = (int *)(lVar10 + 0x160);
            lVar14 = 0;
            lVar20 = 0x30;
            do {
              if (((*(ulonglong *)(piVar13 + -10) == uVar19) && (*piVar13 <= iVar18)) &&
                 (*(longlong *)(piVar13 + -8) == lVar6)) {
                if ((lVar15 != 0) && (lVar15 != lVar10)) {
                  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar15);
                }
                iVar18 = *piVar13;
                lVar15 = lVar10;
                lVar17 = lVar14;
              }
              lVar14 = lVar14 + 1;
              piVar13 = piVar13 + 0x10;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            if (lVar15 != lVar10) {
              (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
            }
            plVar9 = (longlong *)(lVar10 + 0xd0);
            lVar10 = *plVar9;
          } while (*plVar9 != 0);
          if (lVar15 == 0) break;
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
          if ((*(int *)(lVar15 + 0x114) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
            lVar10 = lVar17 * 0x40;
            fVar21 = *(float *)(lVar10 + 0x14c + lVar15);
            fVar23 = *(float *)(lVar10 + 0x154 + lVar15);
            fVar22 = *(float *)(lVar10 + 0x15c + lVar15);
            if ((lVar6 != 0) && (DAT_14c792974 != 0)) {
              fVar21 = 1.0 - fVar21;
              fVar23 = 1.0 - fVar23;
              fVar22 = 1.0 - fVar22;
            }
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x20))
                      (*(longlong *)(lVar15 + 200),*(undefined4 *)(lVar10 + 0x148 + lVar15),fVar21,
                       *(undefined4 *)(lVar10 + 0x150 + lVar15),fVar23,
                       *(undefined4 *)(lVar10 + 0x158 + lVar15),fVar22);
            if ((iVar11 == 1) && (lVar6 != 0)) {
              uVar16 = 2;
            }
            else {
              uVar16 = 0;
            }
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x30))
                      (*(longlong *)(lVar15 + 200),*(undefined4 *)(lVar15 + 300),uVar16 | uVar1);
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x10))(*(longlong *)(lVar15 + 200));
          }
          *(undefined8 *)(lVar17 * 0x40 + 0x138 + lVar15) = 0;
          *(undefined8 *)((lVar17 + 5) * 0x40 + lVar15) = 0;
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar15);
        }
        (*(code *)(&PTR_LAB_14c7078c8)[(ulonglong)DAT_14c707864 * 10])();
        lVar10 = DAT_14c792958;
      }
      if (bVar8) {
        (*(code *)(&PTR_LAB_14c7078a0)[(ulonglong)DAT_14c707864 * 10])();
      }
    }
  }
  DAT_14c7929a4 = DAT_14c7929a4 + -1;
  if (DAT_14c7929a4 != 0) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144d6fb3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  return;
code_r0x000144d6f769:
  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
  lVar10 = *(longlong *)(lVar10 + 0xd0);
  goto LAB_144d6f727;
}



// FUNCTION 144d6e150 thunk_FUN_144d6ffd0 body=5 status=ok
// SIG undefined thunk_FUN_144d6ffd0(void)

void thunk_FUN_144d6ffd0(short *param_1,undefined4 param_2,int param_3,int param_4,longlong param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  short *psVar7;
  short sVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  undefined4 auStack_a8 [2];
  longlong alStack_a0 [3];
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar12 = 0;
  uVar14 = 0;
  auStack_a8[0] = param_2;
  iVar4 = FUN_144d6ec30();
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)FUN_145140d60(0xd38);
    if (puVar5 != (undefined8 *)0x0) {
      lVar9 = 0x34;
      puVar3 = puVar5;
      do {
        puVar6 = puVar3;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        lVar9 = lVar9 + -1;
        puVar3 = puVar6 + 8;
      } while (lVar9 != 0);
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      alStack_a0[0] = param_5;
LAB_144d700e0:
      switch(param_2) {
      case 0:
        *(undefined4 *)((longlong)puVar5 + 0xec) = 0;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        break;
      case 1:
        goto switchD_144d700f6_caseD_1;
      case 2:
        *(int *)((longlong)puVar5 + 0xf4) = param_3;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 2;
        break;
      case 3:
        *(int *)((longlong)puVar5 + 0xf4) = param_3 + 1;
        *(int *)(puVar5 + 0x1e) = param_3;
        *(int *)(puVar5 + 0x1f) = param_3 + 2;
        *(int *)((longlong)puVar5 + 0xfc) = param_3 + 3;
        *(int *)(puVar5 + 0x20) = param_3 + 4;
        *(int *)((longlong)puVar5 + 0x104) = param_3 + 5;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 6;
        break;
      case 4:
        *(undefined4 *)((longlong)puVar5 + 0xf4) = 1;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)(puVar5 + 0x1f) = 2;
        *(undefined4 *)((longlong)puVar5 + 0xfc) = 3;
        *(undefined4 *)(puVar5 + 0x20) = 4;
        *(undefined4 *)((longlong)puVar5 + 0x104) = 5;
        *(int *)(puVar5 + 0x21) = param_3;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 7;
        break;
      case 5:
        *(int *)((longlong)puVar5 + 0xf4) = param_3 + 1;
        *(int *)(puVar5 + 0x1e) = param_3;
        *(int *)(puVar5 + 0x1f) = param_3 + 2;
        *(int *)((longlong)puVar5 + 0xfc) = param_3 + 3;
        *(int *)(puVar5 + 0x20) = param_3 + 4;
        *(int *)((longlong)puVar5 + 0x104) = param_3 + 5;
        *(int *)(puVar5 + 0x21) = param_3 + 6;
        *(int *)((longlong)puVar5 + 0x10c) = param_3 + 7;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 8;
        break;
      case 6:
        *(undefined4 *)((longlong)puVar5 + 0xf4) = 1;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)(puVar5 + 0x1f) = 2;
        *(undefined4 *)((longlong)puVar5 + 0xfc) = 3;
        *(undefined4 *)(puVar5 + 0x20) = 4;
        *(undefined4 *)((longlong)puVar5 + 0x104) = 5;
        *(undefined4 *)(puVar5 + 0x21) = 6;
        *(undefined4 *)((longlong)puVar5 + 0x10c) = 7;
        *(int *)(puVar5 + 0x22) = param_3;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 9;
        break;
      default:
        pcVar11 = "Bad sound track type specified.";
        FUN_145140d30("Bad sound track type specified.");
        pcVar10 = &DAT_14c792380;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        goto LAB_144d704c1;
      }
      goto LAB_144d702a6;
    }
    pcVar11 = "Out of memory.";
    FUN_145140d30("Out of memory.");
    pcVar10 = &DAT_14c792380;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
  }
  goto LAB_144d704db;
switchD_144d700f6_caseD_1:
  iVar4 = FUN_144d6fec0(param_1,auStack_a8);
  param_2 = auStack_a8[0];
  if (iVar4 == 0) goto LAB_144d7010f;
  goto LAB_144d700e0;
LAB_144d7010f:
  *(undefined4 *)((longlong)puVar5 + 0xec) = 1;
  *(int *)(puVar5 + 0x1e) = param_3;
LAB_144d702a6:
  puStack_80 = puVar5 + 0x1e;
  uStack_84 = *(undefined4 *)((longlong)puVar5 + 0xec);
  if (param_4 == 1) {
    uVar14 = 0x2000;
  }
  else if (param_4 == 2) {
    uVar14 = 0x1000000;
    alStack_a0[1] = 0x7fffffffffffffff;
  }
  plVar13 = &DAT_14c792540;
  do {
    plVar2 = (longlong *)*plVar13;
    if ((plVar2 != (longlong *)0x0) && (*plVar2 == param_5)) {
      sVar8 = (short)plVar2[1];
      psVar7 = param_1;
      if (sVar8 != 0) {
        do {
          if (sVar8 != *psVar7) goto LAB_144d70329;
          sVar8 = *(short *)((longlong)plVar2 + (10 - (longlong)param_1) + (longlong)psVar7);
          psVar7 = psVar7 + 1;
        } while (sVar8 != 0);
      }
      if (*psVar7 == 0) {
        if (-1 < iVar12) {
          uVar14 = uVar14 | 0x4000000;
          param_1 = *(short **)((&DAT_14c792540)[iVar12] + 0x9f0);
          alStack_a0[0] = 0;
        }
        break;
      }
    }
LAB_144d70329:
    iVar12 = iVar12 + 1;
    plVar13 = plVar13 + 1;
  } while (iVar12 < 0x40);
  lVar9 = (*(code *)PTR_thunk_FUN_144d6b240_14c72fc10)(param_1,alStack_a0,uVar14 | 0x104460);
  puVar5[0x18] = lVar9;
  if (lVar9 == 0) {
    pcVar11 = (char *)(*(code *)PTR_FUN_14c72fc20)();
    FUN_145140d30(pcVar11);
    pcVar10 = &DAT_14c792380;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
LAB_144d704c1:
    FUN_145140de0(puVar5);
  }
  else {
    if ((*(int *)(lVar9 + 0x38) != *(int *)((longlong)puVar5 + 0xec)) &&
       (*(int *)(lVar9 + 0x38) != 0)) {
      pcVar11 = "Mismatched number of tracks opened.";
      FUN_145140d30("Mismatched number of tracks opened.");
      pcVar10 = &DAT_14c792380;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
    }
    uStack_70 = 0x3f800000;
    uStack_6c = 0x3f800000;
    uStack_68 = 0x3f800000;
    uStack_64 = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xdc) = 1;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    *(undefined4 *)((longlong)puVar5 + 300) = 0x3f800000;
    uStack_50 = 0x3f800000;
    FUN_144d6fc00(puVar5,0x3f800000);
    (*(code *)PTR_FUN_14c72fba0)(puVar5,1);
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    puVar3 = DAT_14c792958;
    puVar5[0x1a] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar13 = puVar3 + 0x1a;
      lVar9 = *plVar13;
      while (lVar9 != 0) {
        puVar3 = (undefined8 *)*plVar13;
        plVar13 = puVar3 + 0x1a;
        lVar9 = *plVar13;
      }
      puVar3[0x1a] = puVar5;
      puVar5 = DAT_14c792958;
    }
    DAT_14c792958 = puVar5;
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  }
LAB_144d704db:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144d6e160 FUN_144d6e160 body=63 status=ok
// SIG undefined FUN_144d6e160(void)

void FUN_144d6e160(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    *(undefined4 *)(param_1 + 0xe0) = 1;
                    /* WARNING: Could not recover jumptable at 0x000144d6e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
    return;
  }
  return;
}



// FUNCTION 144d6e1a0 FUN_144d6e1a0 body=8 status=ok
// SIG undefined FUN_144d6e1a0(void)

undefined1 * FUN_144d6e1a0(void)

{
  return &DAT_14c792380;
}



// FUNCTION 144d6e1b0 FUN_144d6e1b0 body=468 status=ok
// SIG undefined FUN_144d6e1b0(void)

void FUN_144d6e1b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 2) = **(undefined4 **)(param_1 + 0xc0);
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 4)
      ;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 8);
      *(undefined4 *)((longlong)param_2 + 0x1c) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x10);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x630);
      *(undefined4 *)((longlong)param_2 + 0x24) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x14);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x18);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + 0xdc);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x1c);
      *(uint *)((longlong)param_2 + 0x34) = (uint)(*(int *)(param_1 + 0xd8) == 1);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(param_1 + 0xec);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x38);
      *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x2c8);
      param_2[1] = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x2d0);
      *(undefined4 *)((longlong)param_2 + 0x44) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x63c);
      *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(param_1 + 300);
      if (*(int *)(param_1 + 0xd8) == 6) {
        *(undefined4 *)((longlong)param_2 + 0x4c) = 1;
      }
      else if (*(int *)(param_1 + 0xd8) == 8) {
        *(undefined4 *)((longlong)param_2 + 0x4c) = 3;
      }
      else {
        *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
      }
      if ((*(int *)(param_1 + 0x11c) != 0) || (*(int *)(param_1 + 0x118) != 0)) {
        *(undefined4 *)((longlong)param_2 + 0x4c) = 2;
      }
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    if (DAT_14c7922b4 < 0x20) {
      *(undefined4 *)(param_2 + 10) = 0;
    }
    else {
      *(float *)(param_2 + 10) =
           32000.0 / (float)(uint)(*(int *)(&DAT_14c7924c0 + (ulonglong)DAT_14c7924b8 * 4) -
                                  *(int *)(&DAT_14c7924c0 +
                                          (ulonglong)(DAT_14c7924b8 + 1 & 0x1f) * 4));
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  }
  return;
}



// FUNCTION 144d6e390 FUN_144d6e390 body=451 status=ok
// SIG undefined FUN_144d6e390(void)

undefined8
FUN_144d6e390(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,longlong param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = FUN_144d6ec30();
  if ((int)uVar1 != 0) {
    if ((param_1 != 0) && (param_7 != 0)) {
      (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
      uVar1 = DAT_14c707870;
      (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)();
      iVar3 = 0;
      plVar2 = (longlong *)(param_1 + 0x178);
      lVar4 = 0;
      do {
        if (plVar2[-8] == 0) break;
        if (*plVar2 == 0) {
          iVar3 = iVar3 + 1;
          break;
        }
        if (plVar2[8] == 0) {
          iVar3 = iVar3 + 2;
          break;
        }
        if (plVar2[0x10] == 0) {
          iVar3 = iVar3 + 3;
          break;
        }
        if (plVar2[0x18] == 0) {
          iVar3 = iVar3 + 4;
          break;
        }
        if (plVar2[0x20] == 0) {
          iVar3 = iVar3 + 5;
          break;
        }
        lVar4 = lVar4 + 6;
        plVar2 = plVar2 + 0x30;
        iVar3 = iVar3 + 6;
      } while (lVar4 < 0x30);
      if (iVar3 < 0x30) {
        lVar4 = (longlong)iVar3 * 0x40;
        *(undefined4 *)(lVar4 + 0x160 + param_1) = param_6;
        *(undefined4 *)(lVar4 + 0x148 + param_1) = param_2;
        *(undefined4 *)(lVar4 + 0x14c + param_1) = param_3;
        *(undefined4 *)(lVar4 + 0x150 + param_1) = param_4;
        *(longlong *)(((longlong)iVar3 + 5) * 0x40 + param_1) = param_7;
        *(undefined4 *)(lVar4 + 0x168 + param_1) = param_8;
        *(undefined4 *)(lVar4 + 0x16c + param_1) = param_9;
        *(undefined4 *)(lVar4 + 0x154 + param_1) = param_3;
        *(undefined4 *)(lVar4 + 0x158 + param_1) = param_2;
        *(undefined4 *)(lVar4 + 0x15c + param_1) = param_5;
        *(undefined4 *)(lVar4 + 0x170 + param_1) = *(undefined4 *)(param_1 + 0x134);
        *(undefined4 *)(lVar4 + 0x164 + param_1) = *(undefined4 *)(param_1 + 0x130);
        *(undefined8 *)(lVar4 + 0x138 + param_1) = uVar1;
      }
      (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
      (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144d6e560 FUN_144d6e560 body=373 status=ok
// SIG undefined FUN_144d6e560(void)

undefined8
FUN_144d6e560(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = FUN_144d6ec30();
  if ((int)uVar1 != 0) {
    if (param_1 != 0) {
      (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
      uVar1 = DAT_14c707870;
      (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)();
      iVar3 = 0;
      plVar2 = (longlong *)(param_1 + 0x178);
      lVar4 = 0;
      do {
        if (plVar2[-8] == 0) break;
        if (*plVar2 == 0) {
          iVar3 = iVar3 + 1;
          break;
        }
        if (plVar2[8] == 0) {
          iVar3 = iVar3 + 2;
          break;
        }
        if (plVar2[0x10] == 0) {
          iVar3 = iVar3 + 3;
          break;
        }
        if (plVar2[0x18] == 0) {
          iVar3 = iVar3 + 4;
          break;
        }
        if (plVar2[0x20] == 0) {
          iVar3 = iVar3 + 5;
          break;
        }
        lVar4 = lVar4 + 6;
        plVar2 = plVar2 + 0x30;
        iVar3 = iVar3 + 6;
      } while (lVar4 < 0x30);
      if (iVar3 < 0x30) {
        lVar4 = (longlong)iVar3 * 0x40;
        *(undefined4 *)(lVar4 + 0x148 + param_1) = param_2;
        *(undefined4 *)(lVar4 + 0x14c + param_1) = param_3;
        *(undefined4 *)(lVar4 + 0x150 + param_1) = param_4;
        *(undefined4 *)(lVar4 + 0x154 + param_1) = param_3;
        *(undefined4 *)(lVar4 + 0x158 + param_1) = param_2;
        *(undefined4 *)(lVar4 + 0x15c + param_1) = param_5;
        *(undefined4 *)(lVar4 + 0x160 + param_1) = param_6;
        *(undefined4 *)(lVar4 + 0x170 + param_1) = *(undefined4 *)(param_1 + 0x134);
        *(undefined4 *)(lVar4 + 0x164 + param_1) = *(undefined4 *)(param_1 + 0x130);
        *(undefined8 *)(lVar4 + 0x138 + param_1) = uVar1;
      }
      (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
      (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144d6e6e0 FUN_144d6e6e0 body=115 status=ok
// SIG undefined FUN_144d6e6e0(void)

void FUN_144d6e6e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_144d6ec30();
  if ((iVar2 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (lVar1 != 0) {
      *(int *)(param_1 + 0xe8) = param_2;
      if (param_2 == 0) {
        if (*(int *)(lVar1 + 0x11c) != 0) {
          (*(code *)PTR_FUN_14c72fb58)(lVar1,0);
        }
        if (*(int *)(param_1 + 0xd8) == 6) {
          *(undefined4 *)(param_1 + 0xd8) = 2;
        }
      }
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e760 FUN_144d6e760 body=129 status=ok
// SIG undefined FUN_144d6e760(void)

void FUN_144d6e760(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_144d6ec30();
  if ((iVar2 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 8) < param_2) {
        param_2 = *(uint *)(lVar1 + 8);
      }
      if (param_2 == 0) {
        param_2 = 0xffffffff;
      }
      else {
        (*(code *)PTR_FUN_14c72fbe0)(lVar1,0);
      }
      *(undefined4 *)(param_1 + 0x118) = 1;
      *(uint *)(param_1 + 0x11c) = param_2;
      *(undefined4 *)(param_1 + 0x124) = param_3;
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e7f0 FUN_144d6e7f0 body=159 status=ok
// SIG undefined FUN_144d6e7f0(void)

void FUN_144d6e7f0(longlong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (uVar3 = 0, *(int *)(param_1 + 0xec) != 0)) {
      do {
        (*(code *)PTR_FUN_14c72fb88)
                  (*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xf0 + uVar3 * 4),
                   (int)(param_2 * 32768.0));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0xec));
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e890 FUN_144d6e890 body=93 status=ok
// SIG undefined FUN_144d6e890(void)

void FUN_144d6e890(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (*(undefined4 *)(param_1 + 0xdc) = param_2, *(int *)(param_1 + 0xd8) == 8)) {
      *(undefined4 *)(param_1 + 0xd8) = 5;
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e8f0 FUN_144d6e8f0 body=120 status=ok
// SIG undefined FUN_144d6e8f0(void)

void FUN_144d6e8f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_144d6ec30();
  if ((iVar2 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (lVar1 = *(longlong *)(param_1 + 200), lVar1 != 0))
    {
      (**(code **)(lVar1 + 0x38))(lVar1,param_2,param_3,param_4);
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e970 FUN_144d6e970 body=68 status=ok
// SIG undefined FUN_144d6e970(void)

void FUN_144d6e970(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    *(undefined4 *)(param_1 + 300) = param_2;
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6e9c0 FUN_144d6e9c0 body=64 status=ok
// SIG undefined FUN_144d6e9c0(void)

void FUN_144d6e9c0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    *(undefined4 *)(param_1 + 0x134) = param_2;
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6ea00 FUN_144d6ea00 body=64 status=ok
// SIG undefined FUN_144d6ea00(void)

void FUN_144d6ea00(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144d6ec30();
  if ((iVar1 != 0) && (param_1 != 0)) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    *(undefined4 *)(param_1 + 0x130) = param_2;
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return;
}



// FUNCTION 144d6ea40 FUN_144d6ea40 body=35 status=ok
// SIG undefined FUN_144d6ea40(void)

void FUN_144d6ea40(uint param_1)

{
  if (((param_1 < 9) && ((0x15eU >> (param_1 & 0x1f) & 1) != 0)) && (DAT_14c707868 != param_1)) {
    DAT_14c707868 = param_1;
    FUN_144d6ec30();
    return;
  }
  return;
}



// FUNCTION 144d6ea70 FUN_144d6ea70 body=112 status=ok
// SIG undefined FUN_144d6ea70(void)

ulonglong FUN_144d6ea70(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = FUN_144d6ec30();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_1 != 0) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      uVar1 = (*(code *)PTR_FUN_14c72fbf8)(*(longlong *)(param_1 + 0xc0),param_2);
      uVar3 = (ulonglong)uVar1;
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return uVar3;
}



// FUNCTION 144d6eae0 FUN_144d6eae0 body=117 status=ok
// SIG undefined FUN_144d6eae0(void)

undefined8 FUN_144d6eae0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144d6ec30();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(param_1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      uVar2 = (*(code *)PTR_FUN_14c72fc00)(*(longlong *)(param_1 + 0xc0),param_2,0,0);
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(param_1);
  }
  return uVar2;
}



// FUNCTION 144d6eb80 FUN_144d6eb80 body=161 status=ok
// SIG undefined FUN_144d6eb80(void)

undefined8 FUN_144d6eb80(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar2 = (*(code *)(&PTR_FUN_14c707880)[(ulonglong)DAT_14c707864 * 10])
                    (DAT_14c7922b8,&DAT_14c792480,DAT_14c792968,local_res8);
  if (iVar2 == 0) {
    pcVar4 = "Could not create shaders.";
    FUN_145140d30("Could not create shaders.");
    pcVar3 = &DAT_14c792380;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return 0;
  }
  if (local_res8[0] != 0) {
    DAT_14c792960 = local_res8[0];
  }
  return 1;
}



// FUNCTION 144d6ec30 FUN_144d6ec30 body=364 status=ok
// SIG undefined FUN_144d6ec30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_144d6ec30(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (DAT_14c792948 != 0) {
    return DAT_14c79294c;
  }
  iVar6 = 0;
  DAT_14c792948 = 1;
  DAT_14c79294c = 0;
  (*(code *)PTR_FUN_14c72fba0)(&DAT_14c7922c0,0);
  (*(code *)PTR_thunk_FUN_1451570e0_14c72fbd0)(&LAB_144d6eb60,&LAB_144d6eb70);
  (*(code *)PTR_FUN_14c72fbf0)(FUN_145140e70,FUN_145140f20,FUN_145140fc0,FUN_145140ff0);
  _DAT_14c792954 = (*(code *)PTR_thunk_FUN_1453de540_14c72fb98)();
  DAT_14c7922b0 = _DAT_14c792954;
  if (4 < _DAT_14c792954) {
    DAT_14c7922b0 = 4;
  }
  if (DAT_14c792950 < (int)(DAT_14c7922b0 + DAT_14c792950)) {
    piVar7 = &DAT_14c792290;
    iVar5 = DAT_14c792950;
    do {
      iVar2 = (*(code *)PTR_thunk_FUN_145157400_14c72fc40)(iVar5,0);
      if (iVar2 != 0) {
        iVar6 = iVar6 + 1;
        *piVar7 = iVar5;
        piVar7 = piVar7 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(DAT_14c7922b0 + DAT_14c792950));
  }
  DAT_14c7922b0 = iVar6;
  if (iVar6 != 0) {
    iVar6 = (*(code *)PTR_FUN_14c72fb80)(PTR_FUN_14c72fc08,0,0);
    if (iVar6 != 0) {
      DAT_14c7929a0 = 1;
    }
    DAT_14c79294c = 1;
    return 1;
  }
  pcVar3 = (char *)(*(code *)PTR_FUN_14c72fc20)();
  FUN_145140d30(pcVar3);
  pcVar4 = &DAT_14c792380;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return 0;
}



// FUNCTION 144d6eda0 FUN_144d6eda0 body=105 status=ok
// SIG undefined FUN_144d6eda0(void)

void FUN_144d6eda0(longlong param_1)

{
  bool bVar1;
  
  (*(code *)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200));
  bVar1 = DAT_14c707860 != 0;
  *(undefined4 *)(param_1 + 0xd8) = 3;
  if (bVar1) {
    (*(code *)PTR_FUN_14c72fc30)(*(undefined8 *)(param_1 + 0xc0),&DAT_14c792290,DAT_14c7922b0);
    *(undefined4 *)(param_1 + 0xd8) = 4;
    return;
  }
  (*(code *)PTR_FUN_14c72fc28)(*(undefined8 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xd8) = 4;
  return;
}



// FUNCTION 144d6ee10 FUN_144d6ee10 body=93 status=ok
// SIG undefined FUN_144d6ee10(void)

void FUN_144d6ee10(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((uint)param_2 != 0xffffffff) {
    uVar1 = (*(code *)PTR_FUN_14c72fb60)(param_1,param_2,0);
    if (((uint)param_2 < *(uint *)(param_1 + 0xc)) ||
       (((*(uint *)(param_1 + 0x18) + 1 >> 1) + *(int *)(param_1 + 0x14)) /
        *(uint *)(param_1 + 0x18) + *(uint *)(param_1 + 0xc) < uVar1)) {
      (*(code *)PTR_FUN_14c72fb48)(param_1,uVar1,1);
    }
  }
  return;
}



// FUNCTION 144d6ee70 FUN_144d6ee70 body=1951 status=ok
// SIG undefined FUN_144d6ee70(void)

void FUN_144d6ee70(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  (*(code *)PTR_FUN_14c72fbc8)();
  if (DAT_14c792970 == 0) {
    lVar11 = 0;
    if (DAT_14c79296c != 0) {
      DAT_14c79296c = 0;
      FUN_144d6eb80();
    }
    iVar2 = (*(code *)PTR_FUN_14c72fbc8)();
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    DAT_14c7929a4 = DAT_14c7929a4 + 1;
    if (DAT_14c7929a4 != 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&PTR_LAB_14c7078a8)[(ulonglong)DAT_14c707864 * 10] != (code *)0x0) {
      (*(code *)(&PTR_LAB_14c7078a8)[(ulonglong)DAT_14c707864 * 10])();
    }
    lVar9 = DAT_14c792958;
    if (8 < (uint)(iVar2 - *(int *)(&DAT_14c7924c0 + (ulonglong)DAT_14c7924b8 * 4))) {
      DAT_14c7922b4 = DAT_14c7922b4 + 1;
      DAT_14c7924b8 = DAT_14c7924b8 + 1 & 0x1f;
      *(int *)(&DAT_14c7924c0 + (ulonglong)DAT_14c7924b8 * 4) = iVar2;
      lVar9 = DAT_14c792958;
    }
LAB_144d6ef47:
    if (lVar9 != 0) {
      uVar8 = param_1;
      if (0 < (int)param_1) {
        iVar3 = (*(code *)PTR_FUN_14c72fbc8)();
        uVar8 = (uint)((uint)(iVar3 - iVar2) < param_1);
      }
      iVar3 = (*(code *)PTR_thunk_FUN_145156340_14c72fbc0)(lVar9,uVar8);
      if (iVar3 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          if (DAT_14c792944 != 0) {
            iVar3 = (*(code *)PTR_FUN_14c72fbc8)();
            (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
            if (*(int *)(lVar9 + 0xd8) == 0) {
              uVar7 = (ulonglong)DAT_14c707864;
              *(undefined4 *)(lVar9 + 0xd8) = 1;
              lVar6 = (*(code *)(&PTR_LAB_14c707890)[uVar7 * 10])(*(undefined8 *)(lVar9 + 0xc0));
              *(longlong *)(lVar9 + 200) = lVar6;
              if ((lVar6 != 0) && (*(undefined4 *)(lVar9 + 0xd8) = 2, param_2 == 0)) {
                FUN_144d6eda0(lVar9);
              }
            }
            if (*(int *)(lVar9 + 0xd8) == 4) {
              uVar8 = param_1;
              if (0 < (int)param_1) {
                iVar4 = (*(code *)PTR_FUN_14c72fbc8)();
                uVar8 = -(uint)((uint)(iVar4 - iVar2) < param_1) & 1000;
              }
              if ((DAT_14c707860 == 0) ||
                 (iVar4 = (*(code *)PTR_FUN_14c72fc38)(*(undefined8 *)(lVar9 + 0xc0),uVar8),
                 iVar4 != 0)) {
                *(undefined4 *)(lVar9 + 0xd8) = 5;
              }
            }
            if (*(int *)(lVar9 + 0xd8) == 5) {
              if (*(int *)(lVar9 + 0x118) == 0) goto LAB_144d6f4ae;
              FUN_144d6ee10(*(undefined8 *)(lVar9 + 0xc0),*(undefined4 *)(lVar9 + 0x11c));
              *(undefined4 *)(lVar9 + 0x118) = 0;
              *(undefined4 *)(lVar9 + 0xd8) = 3;
            }
            do {
              if (*(int *)(lVar9 + 0xd8) != 3) goto LAB_144d6f237;
              *(undefined4 *)(lVar9 + 0xd8) = 2;
LAB_144d6f4d4:
              (**(code **)(*(longlong *)(lVar9 + 200) + 8))(*(longlong *)(lVar9 + 200));
              *(undefined4 *)(lVar9 + 0x114) = 1;
LAB_144d6f237:
              if ((*(int *)(lVar9 + 0xd8) == 7) && (param_2 == 0)) {
                pcVar1 = *(code **)(*(longlong *)(lVar9 + 200) + 0x48);
                if (pcVar1 != (code *)0x0) {
                  (*pcVar1)();
                }
                *(undefined4 *)(lVar9 + 0xd8) = 2;
              }
              if ((*(int *)(lVar9 + 0xd8) != 2) && (*(int *)(lVar9 + 0x118) == 0))
              goto LAB_144d6f58e;
              if (param_2 != 0) {
                pcVar1 = *(code **)(*(longlong *)(lVar9 + 200) + 0x40);
                if (pcVar1 != (code *)0x0) {
                  (*pcVar1)();
                }
                *(undefined4 *)(lVar9 + 0xd8) = 7;
                goto LAB_144d6f58e;
              }
              iVar4 = *(int *)(lVar9 + 0xe8);
              if ((iVar4 != 0) &&
                 ((iVar4 < 0 || (iVar4 == *(int *)(*(longlong *)(lVar9 + 0xc0) + 0xc))))) {
                *(undefined4 *)(lVar9 + 0xe8) = 0;
                *(undefined4 *)(lVar9 + 0xd8) = 6;
                (*(code *)PTR_FUN_14c72fb58)(*(undefined8 *)(lVar9 + 0xc0),1);
              }
              if (*(int *)(lVar9 + 0x118) != 0) {
                uVar8 = *(uint *)(lVar9 + 0x11c);
                lVar6 = *(longlong *)(lVar9 + 0xc0);
                if (uVar8 != 0xffffffff) {
                  uVar5 = (*(code *)PTR_FUN_14c72fb60)(lVar6,uVar8,0);
                  if ((uVar8 < *(uint *)(lVar6 + 0xc)) ||
                     (((*(uint *)(lVar6 + 0x18) + 1 >> 1) + *(int *)(lVar6 + 0x14)) /
                      *(uint *)(lVar6 + 0x18) + *(uint *)(lVar6 + 0xc) < uVar5)) {
                    (*(code *)PTR_FUN_14c72fb48)(lVar6,uVar5);
                  }
                }
                *(undefined4 *)(lVar9 + 0x118) = 0;
              }
              iVar4 = *(int *)(lVar9 + 0x11c);
              if (iVar4 == 0) {
LAB_144d6f3fd:
                iVar4 = (*(code *)PTR_FUN_14c72fb68)(*(undefined8 *)(lVar9 + 0xc0));
                if (((iVar4 != 0) && (*(int *)(lVar9 + 0x11c) == 0)) &&
                   (*(int *)(lVar9 + 0x120) == 0)) goto LAB_144d6f58e;
                (*(code *)**(undefined8 **)(lVar9 + 200))(*(undefined8 **)(lVar9 + 200));
                bVar12 = DAT_14c707860 == 0;
                *(undefined4 *)(lVar9 + 0xd8) = 3;
                if (bVar12) {
                  (*(code *)PTR_FUN_14c72fc28)(*(undefined8 *)(lVar9 + 0xc0));
                }
                else {
                  (*(code *)PTR_FUN_14c72fc30)(*(undefined8 *)(lVar9 + 0xc0),&DAT_14c792290);
                }
                *(undefined4 *)(lVar9 + 0xd8) = 4;
                iVar4 = (*(code *)PTR_FUN_14c72fbd8)(*(undefined8 *)(lVar9 + 0xc0));
                if (iVar4 == 0) {
                  if (*(int *)(lVar9 + 0x120) != 0) {
                    *(undefined4 *)(lVar9 + 0x120) = 0;
                    (*(code *)PTR_FUN_14c72fc38)(*(undefined8 *)(lVar9 + 0xc0),0xffffffff);
                    *(undefined4 *)(lVar9 + 0xd8) = 5;
                    (*(code *)PTR_FUN_14c72fbe0)(*(undefined8 *)(lVar9 + 0xc0),1);
                  }
                  goto LAB_144d6f58e;
                }
                *(int *)(lVar9 + 0xe4) = *(int *)(lVar9 + 0xe4) + 1;
                if (DAT_14c707860 != 0) {
                  (*(code *)PTR_FUN_14c72fc38)(*(undefined8 *)(lVar9 + 0xc0));
                }
                *(undefined4 *)(lVar9 + 0xd8) = 5;
              }
              else {
                lVar6 = *(longlong *)(lVar9 + 0xc0);
                if ((iVar4 == *(int *)(lVar6 + 0xc)) || (iVar4 == -1)) {
                  *(undefined4 *)(lVar9 + 0x120) = 0;
                  if ((iVar4 == *(int *)(lVar6 + 0x10)) || (iVar4 == -1)) {
                    (*(code *)PTR_FUN_14c72fbe0)(lVar6,1);
                  }
                  else {
                    *(undefined4 *)(lVar9 + 0x120) = 1;
                  }
                  *(undefined4 *)(lVar9 + 0x11c) = 0;
                  goto LAB_144d6f3fd;
                }
                (*(code *)**(undefined8 **)(lVar9 + 200))(*(undefined8 **)(lVar9 + 200));
                bVar12 = DAT_14c707860 == 0;
                *(undefined4 *)(lVar9 + 0xd8) = 3;
                if (bVar12) {
                  (*(code *)PTR_FUN_14c72fc28)(*(undefined8 *)(lVar9 + 0xc0));
                }
                else {
                  (*(code *)PTR_FUN_14c72fc30)();
                }
                bVar12 = DAT_14c707860 != 0;
                *(undefined4 *)(lVar9 + 0xd8) = 4;
                if (bVar12) {
                  (*(code *)PTR_FUN_14c72fc38)(*(undefined8 *)(lVar9 + 0xc0));
                }
                *(undefined4 *)(lVar9 + 0xd8) = 5;
                iVar4 = (*(code *)PTR_FUN_14c72fbc8)();
                if (*(uint *)(lVar9 + 0x124) < (uint)(iVar4 - iVar3)) goto LAB_144d6f58e;
              }
LAB_144d6f4ae:
              if (*(int *)(*(longlong *)(lVar9 + 0xc0) + 0xc) !=
                  *(int *)(*(longlong *)(lVar9 + 0xc0) + 8)) goto LAB_144d6f4f6;
              if (*(uint *)(lVar9 + 0xdc) < 2) {
                if (*(uint *)(lVar9 + 0xdc) != 1) goto LAB_144d6f4f6;
                *(undefined4 *)(lVar9 + 0xd8) = 8;
                goto LAB_144d6f4d4;
              }
              *(int *)(lVar9 + 0xdc) = *(int *)(lVar9 + 0xdc) + -1;
LAB_144d6f4f6:
              if (*(int *)(lVar9 + 0xdc) != 1) {
                (*(code *)PTR_FUN_14c72fb70)(*(undefined8 *)(lVar9 + 0xc0));
              }
              (*(code *)PTR_FUN_14c72fb50)(*(undefined8 *)(lVar9 + 0xc0));
              *(undefined4 *)(lVar9 + 0xd8) = 3;
            } while( true );
          }
        }
        else {
          if (*(int *)(lVar9 + 0xd8) == 4) {
            (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
            uVar8 = param_1;
            if (0 < (int)param_1) {
              iVar3 = (*(code *)PTR_FUN_14c72fbc8)();
              uVar8 = -(uint)((uint)(iVar3 - iVar2) < param_1) & 1000;
            }
            if ((DAT_14c707860 != 0) &&
               (iVar3 = (*(code *)PTR_FUN_14c72fc38)(*(undefined8 *)(lVar9 + 0xc0),uVar8),
               iVar3 == 0)) {
LAB_144d6f58e:
              (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar9);
              (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
              lVar9 = *(longlong *)(lVar9 + 0xd0);
              goto LAB_144d6ef47;
            }
            *(undefined4 *)(lVar9 + 0xd8) = 3;
            (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
          }
          lVar6 = DAT_14c792958;
          if (DAT_14c792958 == lVar9) {
            DAT_14c792958 = *(longlong *)(lVar9 + 0xd0);
            lVar10 = lVar11;
          }
          else {
            do {
              lVar10 = lVar6;
              if (lVar10 == 0) goto LAB_144d6f037;
              lVar6 = *(longlong *)(lVar10 + 0xd0);
            } while (*(longlong *)(lVar10 + 0xd0) != lVar9);
            *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar9 + 0xd0);
          }
LAB_144d6f037:
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
          if (*(int *)(lVar9 + 0xd8) == 3) {
            (**(code **)(*(longlong *)(lVar9 + 200) + 8))(*(longlong *)(lVar9 + 200));
            *(undefined4 *)(lVar9 + 0x114) = 1;
            *(undefined4 *)(lVar9 + 0xd8) = 2;
          }
          if (1 < *(uint *)(lVar9 + 0xd8)) {
            (**(code **)(*(longlong *)(lVar9 + 200) + 0x50))(*(longlong *)(lVar9 + 200));
            *(undefined4 *)(lVar9 + 0xd8) = 1;
          }
          if (*(longlong *)(lVar9 + 0xc0) != 0) {
            (*(code *)PTR_FUN_14c72fc18)();
            *(undefined8 *)(lVar9 + 0xc0) = 0;
          }
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar9);
          (*(code *)PTR_thunk_FUN_145156470_14c72fba8)(lVar9);
          FUN_145140de0(lVar9);
          (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
          lVar9 = DAT_14c792958;
          lVar6 = DAT_14c792958;
          if (lVar10 != 0) {
            for (; lVar9 = lVar11, lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0xd0)) {
              if (lVar6 == lVar10) {
                if (lVar6 != 0) {
                  lVar9 = *(longlong *)(lVar6 + 0xd0);
                }
                break;
              }
            }
          }
        }
      }
      goto LAB_144d6ef47;
    }
    if ((code *)(&PTR_LAB_14c7078b0)[(ulonglong)DAT_14c707864 * 10] != (code *)0x0) {
      (*(code *)(&PTR_LAB_14c7078b0)[(ulonglong)DAT_14c707864 * 10])();
    }
    DAT_14c7929a4 = DAT_14c7929a4 + -1;
    if (DAT_14c7929a4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  }
  return;
}



// FUNCTION 144d6f610 FUN_144d6f610 body=1332 status=ok
// SIG undefined FUN_144d6f610(void)

void FUN_144d6f610(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong *puVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  bVar8 = false;
  (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
  DAT_14c7929a4 = DAT_14c7929a4 + 1;
  if (DAT_14c7929a4 != 1) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar19 = 0;
  lVar10 = DAT_14c792958;
  if (DAT_14c792958 != 0) {
    do {
      puVar12 = (ulonglong *)(lVar10 + 0x138);
      lVar15 = 0x30;
      do {
        (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
        uVar5 = *puVar12;
        if ((uVar5 != 0) && ((uVar19 == 0 || (uVar5 < uVar19)))) {
          iVar11 = param_2;
          if (puVar12[1] != 0) {
            iVar11 = param_1;
          }
          if (iVar11 != 0) {
            uVar19 = uVar5;
          }
        }
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        puVar12 = puVar12 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      plVar9 = (longlong *)(lVar10 + 0xd0);
      lVar10 = *plVar9;
    } while (*plVar9 != 0);
    lVar10 = DAT_14c792958;
    if (uVar19 != 0) {
LAB_144d6f727:
      while (lVar10 != 0) {
        (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)();
        iVar11 = 0;
        plVar9 = (longlong *)(lVar10 + 0x140);
        lVar15 = 0;
LAB_144d6f744:
        if (plVar9[-1] != uVar19) {
LAB_144d6f75b:
          iVar11 = iVar11 + 1;
          lVar15 = lVar15 + 1;
          plVar9 = plVar9 + 8;
          if (0x2f < iVar11) goto code_r0x000144d6f769;
          goto LAB_144d6f744;
        }
        lVar6 = *plVar9;
        iVar18 = param_2;
        if (lVar6 != 0) {
          iVar18 = param_1;
        }
        if (iVar18 == 0) goto LAB_144d6f75b;
        lVar15 = lVar15 * 0x40;
        uVar1 = *(uint *)(lVar15 + 0x164 + lVar10);
        uVar2 = *(undefined4 *)(lVar15 + 0x168 + lVar10);
        uVar3 = *(undefined4 *)(lVar15 + 0x16c + lVar10);
        uVar4 = *(undefined4 *)(lVar15 + 0x170 + lVar10);
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        iVar11 = 0;
        for (lVar10 = DAT_14c792958; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0xd0)) {
          (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
          plVar9 = (longlong *)(lVar10 + 0x140);
          lVar15 = 0x30;
          do {
            if ((plVar9[-1] == uVar19) && (*plVar9 == lVar6)) {
              iVar11 = iVar11 + 1;
            }
            plVar9 = plVar9 + 8;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
        }
        (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
        if (!bVar8) {
          (*(code *)(&PTR_LAB_14c707898)[(ulonglong)DAT_14c707864 * 10])();
          bVar8 = true;
        }
        if (lVar6 == 0) {
          if ((code *)(&PTR_LAB_14c7078b8)[(ulonglong)DAT_14c707864 * 10] != (code *)0x0) {
            (*(code *)(&PTR_LAB_14c7078b8)[(ulonglong)DAT_14c707864 * 10])
                      (DAT_14c792988,DAT_14c792994,DAT_14c792998,DAT_14c79299c,DAT_14c792990);
          }
        }
        else {
          (*(code *)(&PTR_LAB_14c7078c0)[(ulonglong)DAT_14c707864 * 10])
                    (lVar6,uVar2,uVar3,iVar11 != 1,uVar4,0xffffffff);
        }
        while( true ) {
          (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
          lVar15 = 0;
          lVar17 = 0;
          iVar18 = 0x7fffffff;
          lVar10 = DAT_14c792958;
          if (DAT_14c792958 == 0) break;
          do {
            (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(lVar10);
            piVar13 = (int *)(lVar10 + 0x160);
            lVar14 = 0;
            lVar20 = 0x30;
            do {
              if (((*(ulonglong *)(piVar13 + -10) == uVar19) && (*piVar13 <= iVar18)) &&
                 (*(longlong *)(piVar13 + -8) == lVar6)) {
                if ((lVar15 != 0) && (lVar15 != lVar10)) {
                  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar15);
                }
                iVar18 = *piVar13;
                lVar15 = lVar10;
                lVar17 = lVar14;
              }
              lVar14 = lVar14 + 1;
              piVar13 = piVar13 + 0x10;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            if (lVar15 != lVar10) {
              (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
            }
            plVar9 = (longlong *)(lVar10 + 0xd0);
            lVar10 = *plVar9;
          } while (*plVar9 != 0);
          if (lVar15 == 0) break;
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
          if ((*(int *)(lVar15 + 0x114) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
            lVar10 = lVar17 * 0x40;
            fVar21 = *(float *)(lVar10 + 0x14c + lVar15);
            fVar23 = *(float *)(lVar10 + 0x154 + lVar15);
            fVar22 = *(float *)(lVar10 + 0x15c + lVar15);
            if ((lVar6 != 0) && (DAT_14c792974 != 0)) {
              fVar21 = 1.0 - fVar21;
              fVar23 = 1.0 - fVar23;
              fVar22 = 1.0 - fVar22;
            }
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x20))
                      (*(longlong *)(lVar15 + 200),*(undefined4 *)(lVar10 + 0x148 + lVar15),fVar21,
                       *(undefined4 *)(lVar10 + 0x150 + lVar15),fVar23,
                       *(undefined4 *)(lVar10 + 0x158 + lVar15),fVar22);
            if ((iVar11 == 1) && (lVar6 != 0)) {
              uVar16 = 2;
            }
            else {
              uVar16 = 0;
            }
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x30))
                      (*(longlong *)(lVar15 + 200),*(undefined4 *)(lVar15 + 300),uVar16 | uVar1);
            (**(code **)(*(longlong *)(lVar15 + 200) + 0x10))(*(longlong *)(lVar15 + 200));
          }
          *(undefined8 *)(lVar17 * 0x40 + 0x138 + lVar15) = 0;
          *(undefined8 *)((lVar17 + 5) * 0x40 + lVar15) = 0;
          (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar15);
        }
        (*(code *)(&PTR_LAB_14c7078c8)[(ulonglong)DAT_14c707864 * 10])();
        lVar10 = DAT_14c792958;
      }
      if (bVar8) {
        (*(code *)(&PTR_LAB_14c7078a0)[(ulonglong)DAT_14c707864 * 10])();
      }
    }
  }
  DAT_14c7929a4 = DAT_14c7929a4 + -1;
  if (DAT_14c7929a4 != 0) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144d6fb3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  return;
code_r0x000144d6f769:
  (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(lVar10);
  lVar10 = *(longlong *)(lVar10 + 0xd0);
  goto LAB_144d6f727;
}



// FUNCTION 144d6fb50 FUN_144d6fb50 body=157 status=ok
// SIG undefined FUN_144d6fb50(void)

void FUN_144d6fb50(longlong param_1,uint param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  int local_68;
  int local_58;
  int aiStack_54 [7];
  uint local_38;
  uint auStack_34 [7];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2 & 0xf;
  local_68 = 1;
  local_58 = (int)(*(float *)(param_4 + (longlong)param_3 * 4) * 32768.0);
  if ((int)param_2 >> 4 != 0) {
    lVar2 = 0;
    do {
      *(int *)((longlong)auStack_34 + lVar2) = (int)param_2 >> 4;
      local_68 = local_68 + 1;
      *(int *)((longlong)aiStack_54 + lVar2) = local_58;
      lVar2 = lVar2 + 4;
      iVar1 = (int)param_2 >> 8;
      param_2 = (int)param_2 >> 4;
    } while (iVar1 != 0);
  }
  (*(code *)PTR_FUN_14c72fb90)
            (*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xf0 + (longlong)param_3 * 4)
             ,&local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 144d6fc00 FUN_144d6fc00 body=657 status=ok
// SIG undefined FUN_144d6fc00(void)

void FUN_144d6fc00(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar7 = 0;
  switch(*(undefined4 *)(param_1 + 0xec)) {
  case 2:
    iVar9 = DAT_14c707868;
    if (DAT_14c707868 == 4) {
      iVar9 = 2;
    }
    uVar1 = 2;
    if (iVar9 < 3) {
      uVar1 = (&DAT_14c707810)[iVar9 * 3 + -1];
    }
    FUN_144d6fb50(param_1,uVar1,1,param_2);
  case 1:
    uVar8 = 0x10;
    iVar9 = DAT_14c707868;
    uVar4 = uVar7;
    if (DAT_14c707868 == 4) {
      iVar9 = 2;
      uVar4 = 0;
    }
    do {
      uVar6 = uVar8 & 0xf;
      if (iVar9 < 3) {
        uVar6 = (uint)(byte)(&DAT_14c707810)[(int)(uVar6 + iVar9 * 3 + -3)];
      }
      uVar8 = (int)uVar8 >> 4;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 + 4;
      uVar7 = uVar7 | uVar6 << (bVar3 & 0x1f);
    } while (uVar8 != 0);
    FUN_144d6fb50(param_1,uVar7,0,param_2);
    break;
  case 3:
  case 4:
  case 5:
    break;
  case 7:
    uVar1 = 2;
    if (DAT_14c707868 < 6) {
      uVar1 = (&DAT_14c707818)[(DAT_14c707868 + -1) * 6 + 2];
    }
    FUN_144d6fb50(param_1,uVar1,6,param_2);
  case 6:
    uVar4 = uVar7;
    uVar8 = uVar7;
    uVar6 = uVar7;
    uVar5 = uVar7;
    do {
      for (; uVar6 != 0; uVar6 = (int)uVar6 >> 4) {
        uVar2 = uVar6 & 0xf;
        if (DAT_14c707868 < 6) {
          uVar2 = (uint)(byte)(&DAT_14c707818)[(int)(uVar2 + (DAT_14c707868 + -1) * 6)];
        }
        bVar3 = (byte)uVar4;
        uVar4 = uVar4 + 4;
        uVar8 = uVar8 | uVar2 << (bVar3 & 0x1f);
      }
      FUN_144d6fb50(param_1,uVar8,uVar5,param_2);
      uVar6 = uVar5 + 1;
      uVar4 = uVar7;
      uVar8 = uVar7;
      uVar5 = uVar6;
    } while ((int)uVar6 < 6);
    break;
  case 9:
    uVar1 = 2;
    if (DAT_14c707868 < 8) {
      uVar1 = (&DAT_14c707830)[DAT_14c707868 * 8 + -6];
    }
    FUN_144d6fb50(param_1,uVar1,8,param_2);
  case 8:
    uVar4 = uVar7;
    uVar8 = uVar7;
    uVar6 = uVar7;
    uVar5 = uVar7;
    do {
      for (; uVar6 != 0; uVar6 = (int)uVar6 >> 4) {
        uVar2 = uVar6 & 0xf;
        if (DAT_14c707868 < 8) {
          uVar2 = (uint)(byte)(&DAT_14c707830)[(int)(uVar2 + DAT_14c707868 * 8 + -8)];
        }
        bVar3 = (byte)uVar4;
        uVar4 = uVar4 + 4;
        uVar8 = uVar8 | uVar2 << (bVar3 & 0x1f);
      }
      FUN_144d6fb50(param_1,uVar8,uVar5,param_2);
      uVar6 = uVar5 + 1;
      uVar4 = uVar7;
      uVar8 = uVar7;
      uVar5 = uVar6;
    } while ((int)uVar6 < 8);
    break;
  default:
    goto switchD_144d6fc49_default;
  }
switchD_144d6fc49_default:
  return;
}



// FUNCTION 144d6fec0 FUN_144d6fec0 body=263 status=ok
// SIG undefined FUN_144d6fec0(void)

undefined8 FUN_144d6fec0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  char cVar2;
  undefined *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  do {
    if (uVar1 == 0) {
      return 0;
    }
    puVar5 = param_1 + 1;
    if (*param_1 == 0x5f) {
      puVar3 = &DAT_1499d426c;
      cVar2 = '5';
      puVar4 = puVar5;
      while ((int)cVar2 == (uint)*puVar4) {
        cVar2 = puVar3[1];
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        if (cVar2 == '\0') {
          *param_2 = 3;
          return 1;
        }
      }
      puVar3 = &DAT_1499d4270;
      cVar2 = '5';
      puVar4 = puVar5;
      while ((int)cVar2 == (uint)*puVar4) {
        cVar2 = puVar3[1];
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        if (cVar2 == '\0') {
          *param_2 = 4;
          return 1;
        }
      }
      puVar3 = &DAT_1499d4278;
      cVar2 = '7';
      puVar4 = puVar5;
      while ((int)cVar2 == (uint)*puVar4) {
        cVar2 = puVar3[1];
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        if (cVar2 == '\0') {
          *param_2 = 5;
          return 1;
        }
      }
      puVar3 = &DAT_1499d427c;
      cVar2 = '7';
      puVar4 = puVar5;
      while( true ) {
        if ((int)cVar2 != (uint)*puVar4) break;
        cVar2 = puVar3[1];
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        if (cVar2 == '\0') {
          *param_2 = 6;
          return 1;
        }
      }
    }
    uVar1 = *puVar5;
    param_1 = puVar5;
  } while( true );
}



// FUNCTION 144d6ffd0 FUN_144d6ffd0 body=1307 status=ok
// SIG undefined FUN_144d6ffd0(void)

void FUN_144d6ffd0(short *param_1,undefined4 param_2,int param_3,int param_4,longlong param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  short *psVar7;
  short sVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0 [3];
  undefined4 local_84;
  undefined8 *local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar12 = 0;
  uVar14 = 0;
  local_a8[0] = param_2;
  iVar4 = FUN_144d6ec30();
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)FUN_145140d60(0xd38);
    if (puVar5 != (undefined8 *)0x0) {
      lVar9 = 0x34;
      puVar3 = puVar5;
      do {
        puVar6 = puVar3;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        lVar9 = lVar9 + -1;
        puVar3 = puVar6 + 8;
      } while (lVar9 != 0);
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      local_a0[0] = param_5;
LAB_144d700e0:
      switch(param_2) {
      case 0:
        *(undefined4 *)((longlong)puVar5 + 0xec) = 0;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        break;
      case 1:
        goto switchD_144d700f6_caseD_1;
      case 2:
        *(int *)((longlong)puVar5 + 0xf4) = param_3;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 2;
        break;
      case 3:
        *(int *)((longlong)puVar5 + 0xf4) = param_3 + 1;
        *(int *)(puVar5 + 0x1e) = param_3;
        *(int *)(puVar5 + 0x1f) = param_3 + 2;
        *(int *)((longlong)puVar5 + 0xfc) = param_3 + 3;
        *(int *)(puVar5 + 0x20) = param_3 + 4;
        *(int *)((longlong)puVar5 + 0x104) = param_3 + 5;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 6;
        break;
      case 4:
        *(undefined4 *)((longlong)puVar5 + 0xf4) = 1;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)(puVar5 + 0x1f) = 2;
        *(undefined4 *)((longlong)puVar5 + 0xfc) = 3;
        *(undefined4 *)(puVar5 + 0x20) = 4;
        *(undefined4 *)((longlong)puVar5 + 0x104) = 5;
        *(int *)(puVar5 + 0x21) = param_3;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 7;
        break;
      case 5:
        *(int *)((longlong)puVar5 + 0xf4) = param_3 + 1;
        *(int *)(puVar5 + 0x1e) = param_3;
        *(int *)(puVar5 + 0x1f) = param_3 + 2;
        *(int *)((longlong)puVar5 + 0xfc) = param_3 + 3;
        *(int *)(puVar5 + 0x20) = param_3 + 4;
        *(int *)((longlong)puVar5 + 0x104) = param_3 + 5;
        *(int *)(puVar5 + 0x21) = param_3 + 6;
        *(int *)((longlong)puVar5 + 0x10c) = param_3 + 7;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 8;
        break;
      case 6:
        *(undefined4 *)((longlong)puVar5 + 0xf4) = 1;
        *(undefined4 *)(puVar5 + 0x1e) = 0;
        *(undefined4 *)(puVar5 + 0x1f) = 2;
        *(undefined4 *)((longlong)puVar5 + 0xfc) = 3;
        *(undefined4 *)(puVar5 + 0x20) = 4;
        *(undefined4 *)((longlong)puVar5 + 0x104) = 5;
        *(undefined4 *)(puVar5 + 0x21) = 6;
        *(undefined4 *)((longlong)puVar5 + 0x10c) = 7;
        *(int *)(puVar5 + 0x22) = param_3;
        *(undefined4 *)((longlong)puVar5 + 0xec) = 9;
        break;
      default:
        pcVar11 = "Bad sound track type specified.";
        FUN_145140d30("Bad sound track type specified.");
        pcVar10 = &DAT_14c792380;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        goto LAB_144d704c1;
      }
      goto LAB_144d702a6;
    }
    pcVar11 = "Out of memory.";
    FUN_145140d30("Out of memory.");
    pcVar10 = &DAT_14c792380;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
  }
  goto LAB_144d704db;
switchD_144d700f6_caseD_1:
  iVar4 = FUN_144d6fec0(param_1,local_a8);
  param_2 = local_a8[0];
  if (iVar4 == 0) goto LAB_144d7010f;
  goto LAB_144d700e0;
LAB_144d7010f:
  *(undefined4 *)((longlong)puVar5 + 0xec) = 1;
  *(int *)(puVar5 + 0x1e) = param_3;
LAB_144d702a6:
  local_80 = puVar5 + 0x1e;
  local_84 = *(undefined4 *)((longlong)puVar5 + 0xec);
  if (param_4 == 1) {
    uVar14 = 0x2000;
  }
  else if (param_4 == 2) {
    uVar14 = 0x1000000;
    local_a0[1] = 0x7fffffffffffffff;
  }
  plVar13 = &DAT_14c792540;
  do {
    plVar2 = (longlong *)*plVar13;
    if ((plVar2 != (longlong *)0x0) && (*plVar2 == param_5)) {
      sVar8 = (short)plVar2[1];
      psVar7 = param_1;
      if (sVar8 != 0) {
        do {
          if (sVar8 != *psVar7) goto LAB_144d70329;
          sVar8 = *(short *)((longlong)plVar2 + (10 - (longlong)param_1) + (longlong)psVar7);
          psVar7 = psVar7 + 1;
        } while (sVar8 != 0);
      }
      if (*psVar7 == 0) {
        if (-1 < iVar12) {
          uVar14 = uVar14 | 0x4000000;
          param_1 = *(short **)((&DAT_14c792540)[iVar12] + 0x9f0);
          local_a0[0] = 0;
        }
        break;
      }
    }
LAB_144d70329:
    iVar12 = iVar12 + 1;
    plVar13 = plVar13 + 1;
  } while (iVar12 < 0x40);
  lVar9 = (*(code *)PTR_thunk_FUN_144d6b240_14c72fc10)(param_1,local_a0,uVar14 | 0x104460);
  puVar5[0x18] = lVar9;
  if (lVar9 == 0) {
    pcVar11 = (char *)(*(code *)PTR_FUN_14c72fc20)();
    FUN_145140d30(pcVar11);
    pcVar10 = &DAT_14c792380;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar10 = cVar1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
LAB_144d704c1:
    FUN_145140de0(puVar5);
  }
  else {
    if ((*(int *)(lVar9 + 0x38) != *(int *)((longlong)puVar5 + 0xec)) &&
       (*(int *)(lVar9 + 0x38) != 0)) {
      pcVar11 = "Mismatched number of tracks opened.";
      FUN_145140d30("Mismatched number of tracks opened.");
      pcVar10 = &DAT_14c792380;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
    }
    local_70 = 0x3f800000;
    uStack_6c = 0x3f800000;
    uStack_68 = 0x3f800000;
    uStack_64 = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xdc) = 1;
    local_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    *(undefined4 *)((longlong)puVar5 + 300) = 0x3f800000;
    local_50 = 0x3f800000;
    FUN_144d6fc00(puVar5,0x3f800000);
    (*(code *)PTR_FUN_14c72fba0)(puVar5,1);
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    puVar3 = DAT_14c792958;
    puVar5[0x1a] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar13 = puVar3 + 0x1a;
      lVar9 = *plVar13;
      while (lVar9 != 0) {
        puVar3 = (undefined8 *)*plVar13;
        plVar13 = puVar3 + 0x1a;
        lVar9 = *plVar13;
      }
      puVar3[0x1a] = puVar5;
      puVar5 = DAT_14c792958;
    }
    DAT_14c792958 = puVar5;
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
  }
LAB_144d704db:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144d70520 FUN_144d70520 body=252 status=ok
// SIG undefined FUN_144d70520(void)

undefined4 FUN_144d70520(undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res18 [2];
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (void *)0x0) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_14515b410(param_1,1);
  if (iVar1 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  iVar1 = FUN_14515b260(param_1,local_res18,1);
  if (iVar1 != 0) {
    FUN_145168500();
    return 0x80920007;
  }
  if (*(char *)(local_res18[0] + 0x2c48) == '\0') {
    uVar2 = *(undefined4 *)(local_res18[0] + 0x1c);
  }
  else if (*(char *)(local_res18[0] + 0x2c49) == '\0') {
    uVar2 = *(undefined4 *)(local_res18[0] + 0x2c4c);
  }
  else {
    uVar2 = *(undefined4 *)(local_res18[0] + 0x2c50);
  }
  memset(param_2,0,0x2004);
  uVar2 = FUN_14515f940(uVar2,param_2);
  FUN_145168500();
  return uVar2;
}



// FUNCTION 144d70620 FUN_144d70620 body=261 status=ok
// SIG undefined FUN_144d70620(void)

undefined4 FUN_144d70620(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *local_res18 [2];
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0x80920001;
  }
  iVar2 = FUN_1451684d0();
  if (iVar2 != 0) {
    return 0x809200ff;
  }
  iVar2 = FUN_14515b410(param_1,0);
  if (iVar2 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  iVar2 = FUN_14515b260(param_1,local_res18,0,1);
  if (iVar2 == 0) {
    *param_2 = 0;
    uVar3 = 0;
    if ((*local_res18[0] != '\0') && (*(longlong *)(local_res18[0] + 0x168) != 0)) {
      cVar1 = FUN_14515bd30(*(undefined2 *)(local_res18[0] + 2),*(undefined2 *)(local_res18[0] + 4))
      ;
      if (cVar1 != '\0') {
        FUN_144d722d0(local_res18[0],param_2);
        FUN_145168500();
        return 0;
      }
      *param_2 = 0;
      FUN_145168500();
      return 0;
    }
  }
  else {
    uVar3 = 0x80920003;
  }
  FUN_145168500();
  return uVar3;
}



// FUNCTION 144d70730 FUN_144d70730 body=148 status=ok
// SIG undefined FUN_144d70730(void)

undefined8 FUN_144d70730(undefined4 param_1,longlong param_2)

{
  int iVar1;
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (param_2 == 0) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_14515b410(param_1,0);
  if (iVar1 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  FUN_144d71ce0(param_1,param_2);
  FUN_145168500();
  return 0;
}



// FUNCTION 144d707d0 FUN_144d707d0 body=195 status=ok
// SIG undefined FUN_144d707d0(void)

undefined4 FUN_144d707d0(undefined4 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if ((param_2 == 0) || (0x3f < param_3 - 1U)) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_14515b410(param_1,0);
  if (iVar1 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  uVar2 = FUN_144d71f50(param_1,param_2,param_3);
  FUN_145168500();
  return uVar2;
}



// FUNCTION 144d708a0 FUN_144d708a0 body=164 status=ok
// SIG undefined FUN_144d708a0(void)

int FUN_144d708a0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (DAT_14c7929a8 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (undefined1 *)0x0) {
    return -0x7f6dffff;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 == 0) {
    iVar1 = FUN_14515b410(param_1,0);
    if (iVar1 < 0) {
      FUN_145168500();
      return -0x7f6dfffd;
    }
    iVar1 = FUN_145159230(param_1,param_2[1],*param_2);
    if (-1 < iVar1) {
      FUN_145168500();
      return iVar1;
    }
    FUN_145168500();
  }
  return -0x7f6dff01;
}



// FUNCTION 144d70950 FUN_144d70950 body=335 status=ok
// SIG undefined FUN_144d70950(void)

int FUN_144d70950(undefined4 param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_14c7929a8 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (byte *)0x0) {
    return -0x7f6dffff;
  }
  iVar2 = FUN_1451684d0();
  if (iVar2 != 0) {
    return -0x7f6dff01;
  }
  iVar2 = FUN_14515b410(param_1,0);
  if (iVar2 < 0) {
    FUN_145168500();
    return -0x7f6dfffd;
  }
  lVar3 = FUN_14515b060(param_1,0,0,0);
  if (lVar3 != 0) {
    cVar1 = FUN_14515bd30(*(undefined2 *)(lVar3 + 2),*(undefined2 *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*param_2 < 0xd)) && (param_2[1] < 0xd)) && (param_2[2] < 0xd)) {
      FUN_145168500();
      return -0x7f6dfffa;
    }
    iVar2 = FUN_1451595b0(param_1,param_2);
    if (-1 < iVar2) {
      *(byte *)(lVar3 + 0x2c08) = *param_2;
      *(byte *)(lVar3 + 0x2c09) = param_2[1];
      *(byte *)(lVar3 + 0x2c0a) = param_2[2];
      *(byte *)(lVar3 + 0x2c0c) = *param_2;
      *(byte *)(lVar3 + 0x2c0d) = param_2[1];
      *(byte *)(lVar3 + 0x2c0e) = param_2[2];
      FUN_145168500();
      return iVar2;
    }
  }
  FUN_145168500();
  return -0x7f6dff01;
}



// FUNCTION 144d70b10 FUN_144d70b10 body=369 status=ok
// SIG undefined FUN_144d70b10(void)

undefined8 FUN_144d70b10(undefined4 param_1,float *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *local_res18 [2];
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (float *)0x0) {
    return 0x80920001;
  }
  iVar3 = FUN_1451684d0();
  if (iVar3 != 0) {
    return 0x809200ff;
  }
  iVar3 = FUN_14515b410(param_1,0);
  if (iVar3 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  iVar3 = FUN_14515b260(param_1,local_res18,0,1);
  if (iVar3 != 0) {
    FUN_145168500();
    return 0x80920003;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  if ((*local_res18[0] != '\0') && (*(longlong *)(local_res18[0] + 0x168) != 0)) {
    *param_2 = (float)*(uint *)(local_res18[0] + 0x150) / 100.0;
    cVar1 = FUN_14515ece0();
    if (cVar1 == '\0') {
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(local_res18[0] + 0x154);
      uVar2 = *(undefined2 *)(local_res18[0] + 0x156);
    }
    else {
      *(undefined2 *)(param_2 + 1) = 0x780;
      uVar2 = 0x3ae;
    }
    *(undefined2 *)((longlong)param_2 + 6) = uVar2;
    *(char *)(param_2 + 2) = local_res18[0][0x158];
    *(char *)((longlong)param_2 + 9) = local_res18[0][0x159];
    *(undefined1 *)((longlong)param_2 + 10) = 0;
    cVar1 = local_res18[0][1];
    *(undefined1 *)(param_2 + 3) = 1;
    *(char *)((longlong)param_2 + 0xb) = cVar1;
    FUN_145168500();
    return 0;
  }
  *(char *)((longlong)param_2 + 0xb) = local_res18[0][1];
  FUN_145168500();
  return 0;
}



// FUNCTION 144d70c90 FUN_144d70c90 body=12 status=ok
// SIG undefined FUN_144d70c90(void)

bool FUN_144d70c90(void)

{
  return DAT_14c7929a8 != '\0';
}



// FUNCTION 144d70ca0 FUN_144d70ca0 body=3 status=ok
// SIG undefined FUN_144d70ca0(void)

undefined8 FUN_144d70ca0(void)

{
  return 0;
}



// FUNCTION 144d70cb0 FUN_144d70cb0 body=506 status=ok
// SIG undefined FUN_144d70cb0(void)

undefined8 FUN_144d70cb0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *param_1;
  if ((bVar1 & 0xfc) != 0) {
    return 0;
  }
  if (bVar1 == 0) {
    return 0;
  }
  lVar5 = 0;
  if (((bVar1 & 1) == 0) || (iVar3 = *(int *)(param_1 + 8), iVar3 == 0)) goto LAB_144d70da5;
  if (iVar3 == 1) {
    if (9 < param_1[0x10]) {
      return 0;
    }
    bVar2 = param_1[0x11];
  }
  else {
    if (iVar3 == 2) {
      if (6 < (byte)(param_1[0x10] - 2)) {
        return 0;
      }
      if (6 < (byte)(param_1[0x11] - 2)) {
        return 0;
      }
      if (8 < param_1[0x12]) {
        return 0;
      }
      if (param_1[0x11] <= param_1[0x10]) {
        return 0;
      }
      goto LAB_144d70da5;
    }
    if (iVar3 != 3) {
      lVar4 = lVar5;
      if (iVar3 == 4) {
        do {
          if (8 < param_1[lVar4 + 0x10]) {
            return 0;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 10);
      }
      else if (iVar3 == 5) {
        if (9 < param_1[0x10]) {
          return 0;
        }
        if (9 < param_1[0x11]) {
          return 0;
        }
        if (param_1[0x11] <= param_1[0x10]) {
          return 0;
        }
        if (7 < (byte)(param_1[0x12] - 1)) {
          return 0;
        }
        if (7 < (byte)(param_1[0x13] - 1)) {
          return 0;
        }
      }
      else {
        if (iVar3 != 6) {
          return 0;
        }
        do {
          if (8 < param_1[lVar4 + 0x11]) {
            return 0;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 10);
      }
      goto LAB_144d70da5;
    }
    if (9 < param_1[0x10]) {
      return 0;
    }
    bVar2 = param_1[0x11];
  }
  if (8 < bVar2) {
    return 0;
  }
LAB_144d70da5:
  if (((bVar1 & 2) == 0) || (iVar3 = *(int *)(param_1 + 0x40), iVar3 == 0)) {
    return 1;
  }
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      if (6 < (byte)(param_1[0x48] - 2)) {
        return 0;
      }
      if (6 < (byte)(param_1[0x49] - 2)) {
        return 0;
      }
      if (8 < param_1[0x4a]) {
        return 0;
      }
      if (param_1[0x49] <= param_1[0x48]) {
        return 0;
      }
      return 1;
    }
    if (iVar3 != 3) {
      if (iVar3 == 4) {
        do {
          if (8 < param_1[lVar5 + 0x48]) {
            return 0;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < 10);
        return 1;
      }
      if (iVar3 != 5) {
        if (iVar3 != 6) {
          return 0;
        }
        do {
          if (8 < param_1[lVar5 + 0x49]) {
            return 0;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < 10);
        return 1;
      }
      if (9 < param_1[0x48]) {
        return 0;
      }
      if (9 < param_1[0x49]) {
        return 0;
      }
      if (param_1[0x49] <= param_1[0x48]) {
        return 0;
      }
      if (7 < (byte)(param_1[0x4a] - 1)) {
        return 0;
      }
      if (7 < (byte)(param_1[0x4b] - 1)) {
        return 0;
      }
      return 1;
    }
  }
  if ((param_1[0x48] < 10) && (param_1[0x49] < 9)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144d70eb0 FUN_144d70eb0 body=3608 status=ok
// SIG undefined FUN_144d70eb0(void)

void FUN_144d70eb0(byte *param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  undefined2 uVar11;
  byte local_58 [8];
  byte local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_58;
  if ((*param_1 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 1) {
      if (param_1[0x11] == 0) {
        param_2[1] = 5;
      }
      else {
        param_2[1] = 0x21;
        bVar5 = param_1[0x10];
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        uVar4 = 1 << (bVar5 & 0x1f);
        uVar11 = (undefined2)uVar4;
        uVar8 = bVar5 + 1;
        local_50[bVar5] = param_1[0x11] - 1;
        if (uVar8 < 10) {
          pbVar10 = local_50 + uVar8;
          do {
            *pbVar10 = local_50[bVar5];
            pbVar10 = pbVar10 + 1;
            uVar4 = uVar4 & 0xffff | 1 << (uVar8 & 0x1f);
            uVar11 = (undefined2)uVar4;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < 10);
        }
        bVar9 = (local_50[9] & 7) << 3 | local_50[8] & 7;
        param_2[2] = (byte)uVar11;
        param_2[3] = (byte)((ushort)uVar11 >> 8);
        uVar6 = ((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                   (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                 (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
                (ulonglong)(local_50[1] & 7);
        bVar5 = local_50[0];
LAB_144d70fe8:
        lVar7 = uVar6 << 3;
        param_2[7] = bVar9;
        param_2[4] = (byte)lVar7 | bVar5 & 7;
        param_2[5] = (byte)((ulonglong)lVar7 >> 8);
        param_2[6] = (byte)((ulonglong)lVar7 >> 0x10);
        param_2[9] = 0;
        param_2[8] = 0;
      }
    }
    else if (iVar1 == 2) {
      if (param_1[0x12] == 0) {
        param_2[1] = 5;
      }
      else {
        param_2[1] = 0x25;
        uVar4 = 1 << (param_1[0x10] & 0x1f) & 0xffffU | 1 << (param_1[0x11] & 0x1f);
        param_2[2] = (byte)uVar4;
        param_2[3] = (byte)(uVar4 >> 8);
        param_2[4] = param_1[0x12] - 1;
      }
    }
    else if (iVar1 == 3) {
      if ((param_1[0x11] == 0) || (param_1[0x12] == 0)) {
LAB_144d713e8:
        param_2[1] = 5;
      }
      else {
        param_2[1] = 0x26;
        bVar5 = param_1[0x10];
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        uVar4 = 1 << (bVar5 & 0x1f);
        uVar11 = (undefined2)uVar4;
        uVar8 = bVar5 + 1;
        local_50[bVar5] = param_1[0x11] - 1;
        if (uVar8 < 10) {
          pbVar10 = local_50 + uVar8;
          do {
            *pbVar10 = local_50[bVar5];
            pbVar10 = pbVar10 + 1;
            uVar4 = uVar4 & 0xffff | 1 << (uVar8 & 0x1f);
            uVar11 = (undefined2)uVar4;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < 10);
        }
        param_2[2] = (byte)uVar11;
        param_2[3] = (byte)((ushort)uVar11 >> 8);
        param_2[7] = (local_50[9] & 7) << 3 | local_50[8] & 7;
        lVar7 = (((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                    (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                  (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
                (ulonglong)(local_50[1] & 7)) << 3;
        param_2[4] = (byte)lVar7 | local_50[0] & 7;
        param_2[5] = (byte)((ulonglong)lVar7 >> 8);
        param_2[6] = (byte)((ulonglong)lVar7 >> 0x10);
        param_2[9] = 0;
        param_2[8] = 0;
        bVar5 = param_1[0x12];
LAB_144d715dc:
        param_2[10] = bVar5;
      }
    }
    else if (iVar1 == 0) {
      param_2[1] = 5;
    }
    else {
      if (iVar1 == 4) {
        param_2[1] = 0x21;
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        uVar2 = local_50._0_8_;
        local_50[8] = 0;
        local_50[9] = 0;
        uVar11 = local_50._8_2_;
        bVar5 = param_1[0x10];
        if (bVar5 == 0) {
          local_50[0] = 0;
        }
        else {
          local_50[0] = bVar5 - 1;
        }
        uVar3 = (ushort)(bVar5 != 0);
        if (param_1[0x11] == 0) {
          local_50[1] = 0;
        }
        else {
          uVar3 = uVar3 | 2;
          local_50[1] = param_1[0x11] - 1;
        }
        if (param_1[0x12] == 0) {
          local_50[2] = 0;
        }
        else {
          uVar3 = uVar3 | 4;
          local_50[2] = param_1[0x12] - 1;
        }
        if (param_1[0x13] == 0) {
          local_50[3] = 0;
        }
        else {
          uVar3 = uVar3 | 8;
          local_50[3] = param_1[0x13] - 1;
        }
        if (param_1[0x14] == 0) {
          local_50[4] = 0;
        }
        else {
          uVar3 = uVar3 | 0x10;
          local_50[4] = param_1[0x14] - 1;
        }
        if (param_1[0x15] == 0) {
          local_50[5] = 0;
        }
        else {
          uVar3 = uVar3 | 0x20;
          local_50[5] = param_1[0x15] - 1;
        }
        if (param_1[0x16] == 0) {
          local_50[6] = 0;
        }
        else {
          uVar3 = uVar3 | 0x40;
          local_50[6] = param_1[0x16] - 1;
        }
        if (param_1[0x17] == 0) {
          local_50[7] = 0;
        }
        else {
          uVar3 = uVar3 | 0x80;
          local_50[7] = param_1[0x17] - 1;
        }
        if (param_1[0x18] == 0) {
          local_50[8] = 0;
        }
        else {
          uVar3 = uVar3 | 0x100;
          local_50[8] = param_1[0x18] - 1;
        }
        if (param_1[0x19] == 0) {
          local_50[9] = 0;
        }
        else {
          uVar3 = uVar3 | 0x200;
          local_50[9] = param_1[0x19] - 1;
        }
        if (uVar3 == 0) {
          param_2[1] = 5;
        }
        param_2[2] = (byte)uVar3;
        param_2[3] = (byte)(uVar3 >> 8);
        bVar9 = (local_50[9] & 7) << 3 | local_50[8] & 7;
        uVar6 = ((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                   (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                 (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
                (ulonglong)(local_50[1] & 7);
        bVar5 = local_50[0];
        local_58[0] = local_50[0];
        local_50._0_8_ = uVar2;
        local_50._8_2_ = uVar11;
        goto LAB_144d70fe8;
      }
      if (iVar1 == 5) {
        param_2[1] = 0x22;
        uVar3 = (ushort)(1 << (param_1[0x10] & 0x1f));
        if (param_1[0x11] < 10) {
          uVar3 = uVar3 | (ushort)(1 << (param_1[0x11] & 0x1f));
        }
        else {
          uVar3 = uVar3 | 0x200;
        }
        param_2[2] = (byte)uVar3;
        param_2[3] = (byte)(uVar3 >> 8);
        param_2[4] = (param_1[0x13] - 1 & 7) << 3 | param_1[0x12] - 1 & 7;
      }
      else if (iVar1 == 6) {
        if (param_1[0x10] != 0) {
          param_2[1] = 0x26;
          local_50[0] = 0;
          local_50[1] = 0;
          local_50[2] = 0;
          local_50[3] = 0;
          local_50[4] = 0;
          local_50[5] = 0;
          local_50[6] = 0;
          local_50[7] = 0;
          uVar2 = local_50._0_8_;
          local_50[8] = 0;
          local_50[9] = 0;
          uVar11 = local_50._8_2_;
          bVar5 = param_1[0x11];
          if (bVar5 == 0) {
            local_50[0] = 0;
          }
          else {
            local_50[0] = bVar5 - 1;
          }
          uVar3 = (ushort)(bVar5 != 0);
          if (param_1[0x12] == 0) {
            local_50[1] = 0;
          }
          else {
            uVar3 = uVar3 | 2;
            local_50[1] = param_1[0x12] - 1;
          }
          if (param_1[0x13] == 0) {
            local_50[2] = 0;
          }
          else {
            uVar3 = uVar3 | 4;
            local_50[2] = param_1[0x13] - 1;
          }
          if (param_1[0x14] == 0) {
            local_50[3] = 0;
          }
          else {
            uVar3 = uVar3 | 8;
            local_50[3] = param_1[0x14] - 1;
          }
          if (param_1[0x15] == 0) {
            local_50[4] = 0;
          }
          else {
            uVar3 = uVar3 | 0x10;
            local_50[4] = param_1[0x15] - 1;
          }
          if (param_1[0x16] == 0) {
            local_50[5] = 0;
          }
          else {
            uVar3 = uVar3 | 0x20;
            local_50[5] = param_1[0x16] - 1;
          }
          if (param_1[0x17] == 0) {
            local_50[6] = 0;
          }
          else {
            uVar3 = uVar3 | 0x40;
            local_50[6] = param_1[0x17] - 1;
          }
          if (param_1[0x18] == 0) {
            local_50[7] = 0;
          }
          else {
            uVar3 = uVar3 | 0x80;
            local_50[7] = param_1[0x18] - 1;
          }
          if (param_1[0x19] == 0) {
            local_50[8] = 0;
          }
          else {
            uVar3 = uVar3 | 0x100;
            local_50[8] = param_1[0x19] - 1;
          }
          if (param_1[0x1a] == 0) {
            local_50[9] = 0;
          }
          else {
            uVar3 = uVar3 | 0x200;
            local_50[9] = param_1[0x1a] - 1;
          }
          if (uVar3 == 0) {
            param_2[1] = 5;
          }
          param_2[2] = (byte)uVar3;
          param_2[3] = (byte)(uVar3 >> 8);
          param_2[7] = (local_50[9] & 7) << 3 | local_50[8] & 7;
          lVar7 = (((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                      (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                    (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
                  (ulonglong)(local_50[1] & 7)) << 3;
          param_2[4] = (byte)lVar7 | local_50[0] & 7;
          param_2[5] = (byte)((ulonglong)lVar7 >> 8);
          param_2[6] = (byte)((ulonglong)lVar7 >> 0x10);
          param_2[9] = 0;
          param_2[8] = 0;
          bVar5 = param_1[0x10];
          local_58[0] = local_50[0];
          local_50._0_8_ = uVar2;
          local_50._8_2_ = uVar11;
          goto LAB_144d715dc;
        }
        goto LAB_144d713e8;
      }
    }
  }
  if ((*param_1 & 2) == 0) goto LAB_144d71cb5;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 1) {
    if (param_1[0x49] != 0) {
      param_2[0xc] = 0x21;
      bVar5 = param_1[0x48];
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      uVar4 = 1 << (bVar5 & 0x1f);
      uVar11 = (undefined2)uVar4;
      local_50[8] = 0;
      local_50[9] = 0;
      uVar8 = bVar5 + 1;
      local_50[bVar5] = param_1[0x49] - 1;
      if (uVar8 < 10) {
        pbVar10 = local_50 + uVar8;
        do {
          *pbVar10 = local_50[bVar5];
          pbVar10 = pbVar10 + 1;
          uVar4 = uVar4 & 0xffff | 1 << (uVar8 & 0x1f);
          uVar11 = (undefined2)uVar4;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 10);
      }
      param_2[0xd] = (byte)uVar11;
      param_2[0xe] = (byte)((ushort)uVar11 >> 8);
      bVar9 = (local_50[9] & 7) << 3 | local_50[8] & 7;
      uVar6 = ((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                 (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
               (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
              (ulonglong)(local_50[1] & 7);
      bVar5 = local_50[0];
LAB_144d71a1e:
      lVar7 = uVar6 << 3;
      param_2[0x12] = bVar9;
      param_2[0xf] = (byte)lVar7 | bVar5 & 7;
      param_2[0x10] = (byte)((ulonglong)lVar7 >> 8);
      param_2[0x11] = (byte)((ulonglong)lVar7 >> 0x10);
      param_2[0x14] = 0;
      param_2[0x13] = 0;
      goto LAB_144d71cb5;
    }
  }
  else if (iVar1 == 2) {
    if (param_1[0x4a] != 0) {
      param_2[0xc] = 0x25;
      uVar4 = 1 << (param_1[0x48] & 0x1f) & 0xffffU | 1 << (param_1[0x49] & 0x1f);
      param_2[0xd] = (byte)uVar4;
      param_2[0xe] = (byte)(uVar4 >> 8);
      param_2[0xf] = param_1[0x4a] - 1;
      goto LAB_144d71cb5;
    }
  }
  else if (iVar1 == 3) {
    if ((param_1[0x49] != 0) && (param_1[0x4a] != 0)) {
      param_2[0xc] = 0x26;
      bVar5 = param_1[0x48];
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      uVar4 = 1 << (bVar5 & 0x1f);
      uVar11 = (undefined2)uVar4;
      local_50[8] = 0;
      local_50[9] = 0;
      uVar8 = bVar5 + 1;
      local_50[bVar5] = param_1[0x49] - 1;
      if (uVar8 < 10) {
        pbVar10 = local_50 + uVar8;
        do {
          *pbVar10 = local_50[bVar5];
          pbVar10 = pbVar10 + 1;
          uVar4 = uVar4 & 0xffff | 1 << (uVar8 & 0x1f);
          uVar11 = (undefined2)uVar4;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 10);
      }
      param_2[0xd] = (byte)uVar11;
      param_2[0xe] = (byte)((ushort)uVar11 >> 8);
      param_2[0x12] = (local_50[9] & 7) << 3 | local_50[8] & 7;
      lVar7 = (((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                  (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
              (ulonglong)(local_50[1] & 7)) << 3;
      param_2[0xf] = (byte)lVar7 | local_50[0] & 7;
      param_2[0x10] = (byte)((ulonglong)lVar7 >> 8);
      param_2[0x11] = (byte)((ulonglong)lVar7 >> 0x10);
      param_2[0x14] = 0;
      param_2[0x13] = 0;
      bVar5 = param_1[0x4a];
LAB_144d71cb1:
      param_2[0x15] = bVar5;
      goto LAB_144d71cb5;
    }
  }
  else if (iVar1 != 0) {
    if (iVar1 == 4) {
      param_2[0xc] = 0x21;
      bVar5 = param_1[0x48];
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      uVar2 = local_50._0_8_;
      local_50[8] = 0;
      local_50[9] = 0;
      uVar11 = local_50._8_2_;
      if (bVar5 == 0) {
        local_50[0] = 0;
      }
      else {
        local_50[0] = bVar5 - 1;
      }
      uVar3 = (ushort)(bVar5 != 0);
      if (param_1[0x49] == 0) {
        local_50[1] = 0;
      }
      else {
        uVar3 = uVar3 | 2;
        local_50[1] = param_1[0x49] - 1;
      }
      if (param_1[0x4a] == 0) {
        local_50[2] = 0;
      }
      else {
        uVar3 = uVar3 | 4;
        local_50[2] = param_1[0x4a] - 1;
      }
      if (param_1[0x4b] == 0) {
        local_50[3] = 0;
      }
      else {
        uVar3 = uVar3 | 8;
        local_50[3] = param_1[0x4b] - 1;
      }
      if (param_1[0x4c] == 0) {
        local_50[4] = 0;
      }
      else {
        uVar3 = uVar3 | 0x10;
        local_50[4] = param_1[0x4c] - 1;
      }
      if (param_1[0x4d] == 0) {
        local_50[5] = 0;
      }
      else {
        uVar3 = uVar3 | 0x20;
        local_50[5] = param_1[0x4d] - 1;
      }
      if (param_1[0x4e] == 0) {
        local_50[6] = 0;
      }
      else {
        uVar3 = uVar3 | 0x40;
        local_50[6] = param_1[0x4e] - 1;
      }
      if (param_1[0x4f] == 0) {
        local_50[7] = 0;
      }
      else {
        uVar3 = uVar3 | 0x80;
        local_50[7] = param_1[0x4f] - 1;
      }
      if (param_1[0x50] == 0) {
        local_50[8] = 0;
      }
      else {
        uVar3 = uVar3 | 0x100;
        local_50[8] = param_1[0x50] - 1;
      }
      if (param_1[0x51] == 0) {
        local_50[9] = 0;
      }
      else {
        uVar3 = uVar3 | 0x200;
        local_50[9] = param_1[0x51] - 1;
      }
      if (uVar3 == 0) {
        param_2[0xc] = 5;
      }
      param_2[0xd] = (byte)uVar3;
      param_2[0xe] = (byte)(uVar3 >> 8);
      bVar9 = (local_50[9] & 7) << 3 | local_50[8] & 7;
      uVar6 = ((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                 (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
               (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
              (ulonglong)(local_50[1] & 7);
      bVar5 = local_50[0];
      local_50._0_8_ = uVar2;
      local_50._8_2_ = uVar11;
      goto LAB_144d71a1e;
    }
    if (iVar1 == 5) {
      param_2[0xc] = 0x22;
      uVar3 = (ushort)(1 << (param_1[0x48] & 0x1f));
      if (param_1[0x49] < 10) {
        uVar3 = uVar3 | (ushort)(1 << (param_1[0x49] & 0x1f));
      }
      else {
        uVar3 = uVar3 | 0x200;
      }
      param_2[0xd] = (byte)uVar3;
      param_2[0xe] = (byte)(uVar3 >> 8);
      param_2[0xf] = (param_1[0x4b] - 1 & 7) << 3 | param_1[0x4a] - 1 & 7;
      goto LAB_144d71cb5;
    }
    if (iVar1 != 6) goto LAB_144d71cb5;
    if (param_1[0x48] != 0) {
      param_2[0xc] = 0x26;
      bVar5 = param_1[0x49];
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      uVar2 = local_50._0_8_;
      local_50[8] = 0;
      local_50[9] = 0;
      uVar11 = local_50._8_2_;
      if (bVar5 == 0) {
        local_50[0] = 0;
      }
      else {
        local_50[0] = bVar5 - 1;
      }
      uVar3 = (ushort)(bVar5 != 0);
      if (param_1[0x4a] == 0) {
        local_50[1] = 0;
      }
      else {
        uVar3 = uVar3 | 2;
        local_50[1] = param_1[0x4a] - 1;
      }
      if (param_1[0x4b] == 0) {
        local_50[2] = 0;
      }
      else {
        uVar3 = uVar3 | 4;
        local_50[2] = param_1[0x4b] - 1;
      }
      if (param_1[0x4c] == 0) {
        local_50[3] = 0;
      }
      else {
        uVar3 = uVar3 | 8;
        local_50[3] = param_1[0x4c] - 1;
      }
      if (param_1[0x4d] == 0) {
        local_50[4] = 0;
      }
      else {
        uVar3 = uVar3 | 0x10;
        local_50[4] = param_1[0x4d] - 1;
      }
      if (param_1[0x4e] == 0) {
        local_50[5] = 0;
      }
      else {
        uVar3 = uVar3 | 0x20;
        local_50[5] = param_1[0x4e] - 1;
      }
      if (param_1[0x4f] == 0) {
        local_50[6] = 0;
      }
      else {
        uVar3 = uVar3 | 0x40;
        local_50[6] = param_1[0x4f] - 1;
      }
      if (param_1[0x50] == 0) {
        local_50[7] = 0;
      }
      else {
        uVar3 = uVar3 | 0x80;
        local_50[7] = param_1[0x50] - 1;
      }
      if (param_1[0x51] == 0) {
        local_50[8] = 0;
      }
      else {
        uVar3 = uVar3 | 0x100;
        local_50[8] = param_1[0x51] - 1;
      }
      if (param_1[0x52] == 0) {
        local_50[9] = 0;
      }
      else {
        uVar3 = uVar3 | 0x200;
        local_50[9] = param_1[0x52] - 1;
      }
      if (uVar3 == 0) {
        param_2[0xc] = 5;
      }
      param_2[0xd] = (byte)uVar3;
      param_2[0xe] = (byte)(uVar3 >> 8);
      param_2[0x12] = (local_50[9] & 7) << 3 | local_50[8] & 7;
      lVar7 = (((((((ulonglong)(local_50[7] & 7) << 3 | (ulonglong)(local_50[6] & 7)) << 3 |
                  (ulonglong)(local_50[5] & 7)) << 3 | (ulonglong)(local_50[4] & 7)) << 3 |
                (ulonglong)(local_50[3] & 7)) << 3 | (ulonglong)(local_50[2] & 7)) << 3 |
              (ulonglong)(local_50[1] & 7)) << 3;
      param_2[0xf] = (byte)lVar7 | local_50[0] & 7;
      param_2[0x10] = (byte)((ulonglong)lVar7 >> 8);
      param_2[0x11] = (byte)((ulonglong)lVar7 >> 0x10);
      param_2[0x14] = 0;
      param_2[0x13] = 0;
      bVar5 = param_1[0x48];
      local_50._0_8_ = uVar2;
      local_50._8_2_ = uVar11;
      goto LAB_144d71cb1;
    }
  }
  param_2[0xc] = 5;
LAB_144d71cb5:
  *param_2 = *param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)local_58);
}



// FUNCTION 144d71ce0 FUN_144d71ce0 body=614 status=ok
// SIG undefined FUN_144d71ce0(void)

undefined8 FUN_144d71ce0(undefined4 param_1,uint *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  byte local_res10 [8];
  longlong local_res18;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[1] = 0x80808080;
  FUN_145168990(param_2 + 3);
  FUN_1451689a0(param_2 + 7);
  FUN_1451689b0(param_2 + 10);
  iVar7 = FUN_14515b260(param_1,&local_res18,1);
  if ((iVar7 == 0) && (FUN_145168950(param_1,local_res10), *(longlong *)(local_res18 + 0x168) != 0))
  {
    cVar5 = FUN_145164270();
    uVar8 = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x14);
    if (cVar5 == '\0') {
      uVar8 = uVar8 & 0xffdefffe;
    }
    *param_2 = uVar8;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x18);
    *(undefined1 *)((longlong)param_2 + 5) =
         *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x19);
    *(undefined1 *)((longlong)param_2 + 6) =
         *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x1a);
    *(undefined1 *)((longlong)param_2 + 7) =
         *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x1b);
    *(undefined1 *)((longlong)param_2 + 9) =
         *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x1d);
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(*(longlong *)(local_res18 + 0x168) + 0x1c);
    if ((*(char *)(local_res18 + 0x6c) == '\x01') && ((local_res10[0] & 8) != 0)) {
      lVar2 = *(longlong *)(local_res18 + 0x168);
      uVar8 = *(uint *)(lVar2 + 0x7c);
      uVar3 = *(uint *)(lVar2 + 0x80);
      uVar4 = *(uint *)(lVar2 + 0x84);
      param_2[3] = *(uint *)(lVar2 + 0x78);
      param_2[4] = uVar8;
      param_2[5] = uVar3;
      param_2[6] = uVar4;
      param_2[7] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x68);
      param_2[8] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x6c);
      param_2[9] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x70);
      param_2[10] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x5c);
      param_2[0xb] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 0x60);
      param_2[0xc] = *(uint *)(*(longlong *)(local_res18 + 0x168) + 100);
    }
    else {
      FUN_145168990(param_2 + 3);
      FUN_1451689a0(param_2 + 7);
      FUN_1451689b0(param_2 + 10);
    }
    *(undefined1 *)(param_2 + 0x13) = 1;
    *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(local_res18 + 1);
    *(undefined8 *)(param_2 + 0x14) = **(undefined8 **)(local_res18 + 0x168);
    lVar2 = *(longlong *)(local_res18 + 0x168);
    bVar6 = *(byte *)(lVar2 + 0x21);
    if (2 < bVar6) {
      bVar6 = 2;
    }
    iVar7 = 0;
    *(byte *)(param_2 + 0xd) = bVar6;
    if (*(char *)(lVar2 + 0x21) != '\0') {
      puVar11 = (ushort *)((longlong)param_2 + 0x3e);
      puVar10 = (ushort *)(lVar2 + 0x26);
      do {
        cVar5 = FUN_14515bd30(*(undefined2 *)(local_res18 + 2),*(undefined2 *)(local_res18 + 4));
        if ((cVar5 == '\0') || (cVar5 = FUN_14515ece0(), cVar5 == '\0')) {
          puVar11[-1] = puVar10[-1];
          uVar9 = *puVar10;
        }
        else {
          puVar11[-1] = puVar10[-1];
          uVar9 = (short)(((uint)*puVar10 * 0x3ae) / 0x438) -
                  (short)((int)((uint)*puVar10 * 0x3ae) / -0x79000000);
        }
        *puVar11 = uVar9;
        iVar7 = iVar7 + 1;
        puVar1 = puVar10 + -2;
        puVar10 = puVar10 + 3;
        *(char *)(puVar11 + 1) = (char)*puVar1;
        puVar11 = puVar11 + 4;
      } while (iVar7 < (int)(uint)*(byte *)(lVar2 + 0x21));
    }
  }
  return 0;
}



// FUNCTION 144d71f50 FUN_144d71f50 body=893 status=ok
// SIG undefined FUN_144d71f50(void)

int FUN_144d71f50(ulonglong param_1,undefined8 *param_2,int param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  ushort *puVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  int local_res20;
  byte local_58 [8];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  uVar15 = 0;
  iVar8 = FUN_14515b260(param_1,&local_50,1);
  if (iVar8 == 0) {
    FUN_145168950(param_1 & 0xffffffff,local_58);
    local_40 = local_50;
    if (*(int *)(local_50 + 0x15c) < param_3) {
      param_3 = *(int *)(local_50 + 0x15c);
    }
    if (*(longlong *)(local_50 + 0x168) != 0) {
      if ((0 < param_3) &&
         (uVar15 = (*(int *)(local_50 + 0x164) - param_3) + 0x40U & 0x8000003f, (int)uVar15 < 0)) {
        uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
      }
      local_48 = (longlong)param_3;
      local_res20 = 0;
      if (0 < param_3) {
        puVar16 = (undefined1 *)((longlong)param_2 + 5);
        do {
          uVar9 = local_res20 + uVar15 & 0x8000003f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
          }
          lVar13 = (longlong)(int)uVar9 * 0xa8;
          cVar6 = FUN_145164270();
          uVar9 = *(uint *)(lVar13 + 0x184 + local_50);
          if (cVar6 == '\0') {
            uVar9 = uVar9 & 0xffdefffe;
          }
          *(uint *)(puVar16 + -5) = uVar9;
          puVar16[-1] = *(undefined1 *)(lVar13 + 0x188 + local_50);
          *puVar16 = *(undefined1 *)(lVar13 + 0x189 + local_50);
          puVar16[1] = *(undefined1 *)(lVar13 + 0x18a + local_50);
          puVar16[2] = *(undefined1 *)(lVar13 + 0x18b + local_50);
          puVar16[4] = *(undefined1 *)(lVar13 + 0x18d + local_50);
          puVar16[3] = *(undefined1 *)(lVar13 + 0x18c + local_50);
          if ((*(char *)(local_50 + 0x6c) == '\x01') && ((local_58[0] & 8) != 0)) {
            puVar2 = (undefined4 *)(lVar13 + 0x1e8 + local_50);
            uVar3 = puVar2[1];
            uVar4 = puVar2[2];
            uVar5 = puVar2[3];
            *(undefined4 *)(puVar16 + 7) = *puVar2;
            *(undefined4 *)(puVar16 + 0xb) = uVar3;
            *(undefined4 *)(puVar16 + 0xf) = uVar4;
            *(undefined4 *)(puVar16 + 0x13) = uVar5;
            *(undefined4 *)(puVar16 + 0x17) = *(undefined4 *)(lVar13 + 0x1d8 + local_50);
            *(undefined4 *)(puVar16 + 0x1b) = *(undefined4 *)(lVar13 + 0x1dc + local_50);
            *(undefined4 *)(puVar16 + 0x1f) = *(undefined4 *)(lVar13 + 0x1e0 + local_50);
            *(undefined4 *)(puVar16 + 0x23) = *(undefined4 *)(lVar13 + 0x1cc + local_50);
            *(undefined4 *)(puVar16 + 0x27) = *(undefined4 *)(lVar13 + 0x1d0 + local_50);
            *(undefined4 *)(puVar16 + 0x2b) = *(undefined4 *)(lVar13 + 0x1d4 + local_50);
          }
          else {
            lVar11 = (longlong)local_res20 * 0x78;
            FUN_145168990((longlong)param_2 + lVar11 + 0xc);
            FUN_1451689a0((longlong)param_2 + lVar11 + 0x1c);
            FUN_1451689b0(param_2 + (longlong)local_res20 * 0xf + 5);
          }
          puVar16[0x47] = 1;
          lVar11 = lVar13 + local_50;
          puVar16[99] = *(undefined1 *)(local_50 + 1);
          *(undefined8 *)(puVar16 + 0x4b) = *(undefined8 *)(lVar13 + 0x170 + local_50);
          bVar7 = *(byte *)(lVar11 + 0x191);
          if (2 < bVar7) {
            bVar7 = 2;
          }
          iVar8 = 0;
          puVar16[0x2f] = bVar7;
          if (*(char *)(lVar11 + 0x191) != '\0') {
            puVar12 = (ushort *)(local_50 + 0x196 + lVar13);
            puVar14 = (ushort *)(puVar16 + 0x39);
            do {
              cVar6 = FUN_14515bd30(*(undefined2 *)(local_50 + 2),*(undefined2 *)(local_50 + 4));
              if ((cVar6 == '\0') || (cVar6 = FUN_14515ece0(), cVar6 == '\0')) {
                puVar14[-1] = puVar12[-1];
                uVar10 = *puVar12;
              }
              else {
                puVar14[-1] = puVar12[-1];
                uVar10 = (short)(((uint)*puVar12 * 0x3ae) / 0x438) -
                         (short)((int)((uint)*puVar12 * 0x3ae) / -0x79000000);
              }
              *puVar14 = uVar10;
              iVar8 = iVar8 + 1;
              puVar1 = puVar12 + -2;
              puVar12 = puVar12 + 3;
              *(char *)(puVar14 + 1) = (char)*puVar1;
              puVar14 = puVar14 + 4;
            } while (iVar8 < (int)(uint)*(byte *)(lVar11 + 0x191));
          }
          local_res20 = local_res20 + 1;
          puVar16 = puVar16 + 0x78;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
        if (0 < param_3) {
          *(undefined4 *)(local_40 + 0x160) = *(undefined4 *)(local_40 + 0x164);
          *(undefined4 *)(local_40 + 0x15c) = 0;
          return param_3;
        }
      }
      return 0;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0x80808080;
  FUN_145168990((longlong)param_2 + 0xc);
  FUN_1451689a0((longlong)param_2 + 0x1c);
  FUN_1451689b0(param_2 + 5);
  return 1;
}



// FUNCTION 144d722d0 FUN_144d722d0 body=680 status=ok
// SIG undefined FUN_144d722d0(void)

void FUN_144d722d0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  
  if (param_1 == 0) {
    return;
  }
  cVar2 = FUN_14515bcd0(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  if ((((cVar2 == '\0') || (*(uint *)(param_1 + 0x40) < 0x1003c)) &&
      (cVar2 = FUN_14515bd00(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4)),
      cVar2 == '\0')) &&
     (cVar2 = FUN_14515bc60(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4),
                            *(undefined4 *)(param_1 + 0x20)), cVar2 == '\0')) {
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x168) + 0x8d) == -0x10) {
    *param_2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x168) + 0x8b);
    param_2[1] = (uint)*(byte *)(*(longlong *)(param_1 + 0x168) + 0x8c);
    return;
  }
  bVar6 = 0;
  cVar2 = FUN_14515bd30(*(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
  uVar5 = 0;
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x168);
    bVar4 = *(byte *)(lVar1 + 0x8d);
    bVar6 = bVar4 & 0xf;
    bVar3 = bVar4 >> 4;
    if (bVar4 >> 4 != 0) {
      if (bVar3 != 1) {
        if (bVar3 == 2) {
          bVar4 = *(byte *)(lVar1 + 0x8b) & 0xf0;
          if (bVar4 == 0) {
            *param_2 = 3;
          }
          else if (bVar4 == 0x10) {
            *param_2 = 4;
          }
          else if (bVar4 == 0x20) {
            *param_2 = 5;
          }
          goto LAB_144d72419;
        }
        if (bVar3 == 3) {
          bVar4 = *(byte *)(lVar1 + 0x8b) & 0xf0;
          if (bVar4 == 0) {
            *param_2 = 6;
          }
          else if (bVar4 == 0x10) {
            *param_2 = 7;
          }
          goto LAB_144d72419;
        }
        if (bVar3 != 4) {
          if (bVar3 == 0xf) {
            *param_2 = 0xffffffff;
          }
          goto LAB_144d72419;
        }
      }
      bVar4 = *(byte *)(lVar1 + 0x8b) & 0xf0;
      if (bVar4 != 0) {
        if (bVar4 != 0x10) goto LAB_144d72419;
        if (*(char *)(lVar1 + 0x1c) != '\0') {
          *param_2 = 2;
          goto LAB_144d72419;
        }
      }
      *param_2 = 1;
      goto LAB_144d72419;
    }
  }
  *param_2 = 0;
LAB_144d72419:
  if (bVar6 != 0) {
    if (bVar6 != 1) {
      if (bVar6 == 2) {
        bVar6 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x8c) & 0xf0;
        if (bVar6 == 0) {
          param_2[1] = 3;
          return;
        }
        if (bVar6 != 0x10) {
          if (bVar6 != 0x20) {
            return;
          }
          param_2[1] = 5;
          return;
        }
        param_2[1] = 4;
        return;
      }
      if (bVar6 == 3) {
        bVar6 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x8c) & 0xf0;
        if (bVar6 == 0) {
          param_2[1] = 6;
          return;
        }
        if (bVar6 != 0x10) {
          return;
        }
        param_2[1] = 7;
        return;
      }
      if (bVar6 != 4) {
        if (bVar6 != 0xf) {
          return;
        }
        param_2[1] = 0xffffffff;
        return;
      }
    }
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x168) + 0x8c) & 0xf0;
    if (bVar6 == 0) {
      param_2[1] = 1;
      return;
    }
    if (bVar6 != 0x10) {
      return;
    }
    uVar5 = (*(char *)(*(longlong *)(param_1 + 0x168) + 0x1d) != '\0') + 1;
  }
  param_2[1] = uVar5;
  return;
}



// FUNCTION 144d72580 FUN_144d72580 body=291 status=ok
// SIG undefined FUN_144d72580(void)

undefined4 FUN_144d72580(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  short local_res10 [4];
  longlong local_res18 [2];
  
  iVar2 = FUN_144d70c90();
  if (iVar2 == 0) {
    return 0x80920005;
  }
  iVar2 = FUN_1451684d0();
  if (iVar2 == 0) {
    iVar2 = FUN_14515b410(param_1,0);
    if (iVar2 < 0) {
      FUN_145168500();
      return 0x80920003;
    }
    iVar2 = FUN_144d70ca0(param_1);
    if (iVar2 == 1) {
LAB_144d72693:
      FUN_145168500();
      return 0x80920007;
    }
    iVar2 = FUN_14515b260(param_1,local_res18,1);
    if (iVar2 != 0) goto LAB_144d72693;
    uVar3 = 0;
    local_res10[0] = 0;
    if (*(char *)(local_res18[0] + 0x2c48) == '\0') {
      uVar1 = *(undefined4 *)(local_res18[0] + 0x1c);
    }
    else {
      if (*(char *)(local_res18[0] + 0x2c49) != '\0') {
        FUN_145168500();
        return 0;
      }
      uVar1 = *(undefined4 *)(local_res18[0] + 0x2c4c);
    }
    iVar2 = FUN_14515f710(uVar1,local_res10);
    if (iVar2 == -0x7f6dfff9) goto LAB_144d72693;
    if (*(int *)(local_res18[0] + 100) == 0) {
      if ((((local_res10[0] == 0x9cc) || (local_res10[0] == 0xba0)) || (local_res10[0] == 0xce6)) ||
         (local_res10[0] == 0xdf2)) {
        uVar3 = 1;
        goto LAB_144d72672;
      }
    }
    if (-1 < iVar2) {
LAB_144d72672:
      FUN_145168500();
      return uVar3;
    }
    FUN_145168500();
  }
  return 0x809200ff;
}



// FUNCTION 144d726b0 FUN_144d726b0 body=181 status=ok
// SIG undefined FUN_144d726b0(void)

undefined4 FUN_144d726b0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_144d70c90();
  if (iVar1 == 0) {
    return 0x80920005;
  }
  if (4 < param_2) {
    return 0x80920001;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_14515b410(param_1,0);
  if (iVar1 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  iVar1 = FUN_144d70ca0(param_1);
  if (iVar1 == 1) {
    FUN_145168500();
    return 0x80920007;
  }
  uVar2 = FUN_145159a80(param_1,param_2);
  FUN_145168500();
  return uVar2;
}



// FUNCTION 144d72770 FUN_144d72770 body=264 status=ok
// SIG undefined FUN_144d72770(void)

int FUN_144d72770(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144d70c90();
  if (iVar1 == 0) {
    return -0x7f6dfffb;
  }
  if ((((param_2 == (char *)0x0) || ((byte)(*param_2 + 0x80U) < 0x7f)) ||
      ((byte)(param_2[1] + 0x80U) < 0x7f)) || ((byte)(param_2[3] + 0x80U) < 0x7f)) {
    return -0x7f6dffff;
  }
  iVar1 = FUN_1451684d0();
  if (iVar1 != 0) {
    return -0x7f6dff01;
  }
  iVar1 = FUN_14515b410(param_1,0);
  if (iVar1 < 0) {
    FUN_145168500();
    return -0x7f6dfffd;
  }
  iVar1 = FUN_144d70ca0(param_1);
  if (iVar1 == 1) {
    FUN_145168500();
    return 0;
  }
  iVar1 = FUN_145159c90(param_1,param_2);
  if (iVar1 < 0) {
    FUN_145168500();
    iVar2 = -0x7f6dff01;
    if (iVar1 == -0x7f6dfff9) {
      iVar2 = -0x7f6dfff9;
    }
    return iVar2;
  }
  FUN_145168500();
  return iVar1;
}



// FUNCTION 144d72880 FUN_144d72880 body=314 status=ok
// SIG undefined FUN_144d72880(void)

undefined8 FUN_144d72880(undefined4 param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong local_res18 [2];
  int local_18;
  
  iVar3 = FUN_144d70c90();
  if (iVar3 == 0) {
    return 0x80920005;
  }
  if (param_2 == (int *)0x0) {
    return 0x80920001;
  }
  iVar3 = FUN_1451684d0();
  if (iVar3 != 0) {
    return 0x809200ff;
  }
  iVar3 = FUN_14515b410(param_1,0);
  if (-1 < iVar3) {
    iVar3 = FUN_144d70ca0(param_1);
    if ((iVar3 != 1) && (iVar3 = FUN_14515b260(param_1,local_res18,1), iVar3 == 0)) {
      local_18 = 0;
      if (*(longlong *)(local_res18[0] + 0x168) != 0) {
        cVar2 = FUN_14515bd30(*(undefined2 *)(local_res18[0] + 2),
                              *(undefined2 *)(local_res18[0] + 4));
        if (cVar2 == '\0') {
          bVar1 = *(byte *)(*(longlong *)(local_res18[0] + 0x168) + 0x88);
          if ((bVar1 & 0x20) != 0) {
            local_18 = ((bVar1 & 0x40) != 0) + 1;
          }
        }
        else {
          bVar1 = *(byte *)(*(longlong *)(local_res18[0] + 0x168) + 0x89);
          if ((bVar1 & 1) != 0) {
            local_18 = 2 - (uint)((bVar1 & 3) < 2);
          }
        }
      }
      *param_2 = local_18;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      FUN_145168500();
      return 0;
    }
    FUN_145168500();
    return 0x80920007;
  }
  FUN_145168500();
  return 0x80920003;
}



// FUNCTION 144d729c0 FUN_144d729c0 body=290 status=ok
// SIG undefined FUN_144d729c0(void)

undefined8 *
FUN_144d729c0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_1 == param_2) {
    param_3 = param_3 + param_4;
    if ((ulonglong)param_1[2] < param_3) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    param_1[2] = param_3;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_3) = 0;
    FUN_144d72c20(param_1,0);
  }
  else {
    if (param_4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < param_4) {
      FUN_144d72cf0(param_1,param_4,param_1[2]);
      if (param_4 == 0) {
        return param_1;
      }
    }
    else if (param_4 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      memcpy(puVar2,(void *)((longlong)param_2 + param_3),param_4);
    }
    param_1[2] = param_4;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + param_4) = 0;
  }
  return param_1;
}



// FUNCTION 144d72af0 FUN_144d72af0 body=300 status=ok
// SIG undefined FUN_144d72af0(void)

undefined8 * FUN_144d72af0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (0xf < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (0xf < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2])) {
        puVar2 = param_1;
        if (0xf < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)
                 FUN_144d729c0(param_1,param_1,(longlong)param_2 - (longlong)puVar2,param_3);
        return puVar2;
      }
    }
  }
  if (param_3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((ulonglong)param_1[3] < param_3) {
    FUN_144d72cf0(param_1,param_3,param_1[2]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[2] = 0;
    if (0xf < (ulonglong)param_1[3]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  if (param_3 != 0) {
    memcpy(puVar2,param_2,param_3);
  }
  param_1[2] = param_3;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)((longlong)puVar2 + param_3) = 0;
  return param_1;
}



// FUNCTION 144d72c20 FUN_144d72c20 body=197 status=ok
// SIG undefined FUN_144d72c20(void)

longlong * FUN_144d72c20(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_3 < uVar1 - param_2) {
    if (param_3 != 0) {
      plVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      lVar3 = uVar1 - param_3;
      if (lVar3 - param_2 != 0) {
        memmove((void *)((longlong)plVar2 + param_2),
                (void *)((longlong)((longlong)plVar2 + param_2) + param_3),lVar3 - param_2);
      }
      param_1[2] = lVar3;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)(*param_1 + lVar3) = 0;
        return param_1;
      }
      *(undefined1 *)((longlong)param_1 + lVar3) = 0;
    }
    return param_1;
  }
  param_1[2] = param_2;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_2) = 0;
  return param_1;
}



// FUNCTION 144d72cf0 FUN_144d72cf0 body=385 status=ok
// SIG undefined FUN_144d72cf0(void)

void FUN_144d72cf0(ulonglong *param_1,ulonglong param_2,size_t param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *_Dst;
  ulonglong uVar4;
  
  uVar4 = param_2 | 0xf;
  if (uVar4 != 0xffffffffffffffff) {
    uVar3 = param_1[3];
    uVar2 = uVar3 >> 1;
    param_2 = uVar4;
    if ((uVar4 / 3 < uVar2) && (param_2 = 0xfffffffffffffffe, uVar3 <= -uVar2 - 2)) {
      param_2 = uVar2 + uVar3;
    }
  }
  if (param_2 == 0xffffffffffffffff) {
    _Dst = (ulonglong *)0x0;
  }
  else if (param_2 + 1 < 0x1000) {
    _Dst = (ulonglong *)FUN_14494321d();
    if (_Dst == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (param_2 + 0x28 <= param_2 + 1) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar4 = FUN_14494321d(param_2 + 0x28);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (ulonglong *)(uVar4 + 0x27 & 0xffffffffffffffe0);
    _Dst[-1] = uVar4;
  }
  if (param_3 != 0) {
    puVar1 = param_1;
    if (0xf < param_1[3]) {
      puVar1 = (ulonglong *)*param_1;
    }
    if (param_3 != 0) {
      memcpy(_Dst,puVar1,param_3);
    }
  }
  if (0xf < param_1[3]) {
    uVar4 = *param_1;
    uVar3 = uVar4;
    if (0xfff < param_1[3] + 1) {
      if ((uVar4 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar4 - 8);
      if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar4 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar4 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(uVar3);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < param_1[3]) {
    puVar1 = (ulonglong *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  *param_1 = (ulonglong)_Dst;
  param_1[3] = param_2;
  param_1[2] = param_3;
  if (0xf < param_1[3]) {
    param_1 = _Dst;
  }
  *(undefined1 *)((longlong)param_1 + param_3) = 0;
  return;
}



// FUNCTION 144d72e80 FUN_144d72e80 body=116 status=ok
// SIG undefined FUN_144d72e80(void)

void FUN_144d72e80(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88 + param_1) =
       &PTR_LAB_14ae75850;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x88) + 4);
  *(int *)((longlong)iVar1 + -0x8c + param_1) = iVar1 + -0x88;
  *(undefined ***)(param_1 + -0x80) = &PTR_FUN_14a179f40;
  FUN_1470a9532(param_1 + -0x80);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
                    /* WARNING: Could not recover jumptable at 0x000144d72eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  return;
}



// FUNCTION 144d72f00 FUN_144d72f00 body=35 status=ok
// SIG undefined FUN_144d72f00(void)

undefined8 FUN_144d72f00(longlong param_1,undefined8 param_2)

{
  FUN_144d72f30(param_1 + 8);
  return param_2;
}



// FUNCTION 144d72f30 FUN_144d72f30 body=375 status=ok
// SIG undefined FUN_144d72f30(void)

void FUN_144d72f30(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (((*(uint *)(param_1 + 0x70) & 2) == 0) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 != 0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x68) < uVar1) {
      uVar2 = uVar1;
    }
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    FUN_144d72af0(&local_30,**(longlong **)(param_1 + 0x20),uVar2 - **(longlong **)(param_1 + 0x20))
    ;
    param_2[3] = 0xf;
    param_2[2] = 0;
    *(undefined1 *)param_2 = 0;
    if (local_18 < 0x10) {
      if (local_20 + 1U != 0) {
        memmove(param_2,&local_30,local_20 + 1U);
        param_2[2] = local_20;
        param_2[3] = local_18;
        goto LAB_144d73098;
      }
    }
    else {
      *param_2 = CONCAT71(uStack_2f,local_30);
    }
    param_2[2] = local_20;
    param_2[3] = local_18;
  }
  else {
    if (((*(uint *)(param_1 + 0x70) & 4) == 0) && (**(longlong **)(param_1 + 0x38) != 0)) {
      local_18 = 0xf;
      local_20 = 0;
      local_30 = 0;
      FUN_144d72af0(&local_30,**(longlong **)(param_1 + 0x18),
                    ((longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38)) -
                    **(longlong **)(param_1 + 0x18));
    }
    else {
      local_18 = 0xf;
      local_20 = 0;
      local_30 = 0;
    }
    param_2[3] = 0xf;
    param_2[2] = 0;
    *(undefined1 *)param_2 = 0;
    if (local_18 < 0x10) {
      if (local_20 + 1U != 0) {
        memmove(param_2,&local_30,local_20 + 1U);
      }
    }
    else {
      *param_2 = CONCAT71(uStack_2f,local_30);
    }
    param_2[2] = local_20;
    param_2[3] = local_18;
  }
LAB_144d73098:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144d730c0 FUN_144d730c0 body=56 status=ok
// SIG undefined FUN_144d730c0(void)

void FUN_144d730c0(longlong param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x88);
  FUN_144d72e80(piVar1);
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
                    /* WARNING: Could not recover jumptable at 0x000144d730f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}



// FUNCTION 144d73100 FUN_144d73100 body=71 status=ok
// SIG undefined FUN_144d73100(void)

void FUN_144d73100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba6d600;
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(param_1[1],0x18);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 144d73150 FUN_144d73150 body=48 status=ok
// SIG undefined FUN_144d73150(void)

void FUN_144d73150(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73180 FUN_144d73180 body=48 status=ok
// SIG undefined FUN_144d73180(void)

void FUN_144d73180(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d731b0 FUN_144d731b0 body=19 status=ok
// SIG undefined FUN_144d731b0(void)

bool FUN_144d731b0(void)

{
  int iVar1;
  
  iVar1 = cef_currently_on();
  return iVar1 != 0;
}



// FUNCTION 144d731d0 FUN_144d731d0 body=148 status=ok
// SIG undefined FUN_144d731d0(void)

bool FUN_144d731d0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_res18 [2];
  
  local_res18[0] = *param_2;
  if (local_res18[0] == 0) {
    bVar4 = false;
  }
  else {
    if (local_res18[0] != 0) {
      (*(code *)**(undefined8 **)
                  (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4)))
                ();
    }
    uVar3 = FUN_144d73660(local_res18);
    iVar2 = cef_post_task(param_1,uVar3);
    bVar4 = iVar2 != 0;
    lVar1 = *param_2;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return bVar4;
}



// FUNCTION 144d73270 FUN_144d73270 body=215 status=ok
// SIG undefined FUN_144d73270(void)

ulonglong FUN_144d73270(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar6 = *(ulonglong *)(param_1 + 8);
  if ((uVar6 == 0) || (*(longlong *)(uVar6 + 8) == 0)) {
    uVar3 = *param_3;
    if (uVar3 != 0) {
      uVar6 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4) + uVar3 + 8) + 8))();
    }
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_144d735d0(&local_res8);
    iVar4 = cef_register_scheme_handler_factory(uVar2,uVar1,uVar5,param_4,uVar7);
    uVar6 = *param_3;
    if (uVar6 != 0) {
      (**(code **)(*(longlong *)(uVar6 + 8 + (longlong)*(int *)(*(longlong *)(uVar6 + 8) + 4)) + 8))
                ();
    }
    uVar6 = (ulonglong)(iVar4 != 0);
  }
  return uVar6;
}



// FUNCTION 144d73350 FUN_144d73350 body=19 status=ok
// SIG undefined FUN_144d73350(void)

bool FUN_144d73350(void)

{
  int iVar1;
  
  iVar1 = cef_clear_scheme_handler_factories();
  return iVar1 != 0;
}



// FUNCTION 144d73370 FUN_144d73370 body=265 status=ok
// SIG undefined FUN_144d73370(void)

ulonglong FUN_144d73370(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  char *_Str1;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  local_28[0] = local_28[0] & 0xffffffff00000000;
  _Str1 = (char *)cef_api_hash(0);
  iVar2 = strcmp(_Str1,"4150bd26e7bf639a9b1f3e5860af8c76eeae8570");
  uVar3 = CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) {
    lVar6 = param_2 + 8;
    if (param_2 == 0) {
      lVar6 = 0;
    }
    lVar5 = param_1 + 8;
    if (param_1 == 0) {
      lVar5 = 0;
    }
    local_28[0] = *param_3;
    if (local_28[0] != 0) {
      (*(code *)**(undefined8 **)
                  (local_28[0] + 8 + (longlong)*(int *)(*(longlong *)(local_28[0] + 8) + 4)))();
    }
    uVar4 = FUN_144d734b0(local_28);
    iVar2 = cef_initialize(lVar5,lVar6,uVar4,param_4);
    uVar3 = *param_3;
    if (uVar3 != 0) {
      (**(code **)(*(longlong *)(uVar3 + 8 + (longlong)*(int *)(*(longlong *)(uVar3 + 8) + 4)) + 8))
                ();
    }
    uVar3 = (ulonglong)(iVar2 != 0);
  }
  else {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      uVar3 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar1 + 8) + 4) + uVar1 + 8) + 8))();
    }
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 144d73480 cef_shutdown body=5 status=ok
// SIG undefined cef_shutdown(void)

void cef_shutdown(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014992c960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cef_shutdown();
  return;
}



// FUNCTION 144d73490 cef_do_message_loop_work body=5 status=ok
// SIG undefined cef_do_message_loop_work(void)

void cef_do_message_loop_work(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014992c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cef_do_message_loop_work();
  return;
}



// FUNCTION 144d734a0 cef_enable_highdpi_support body=5 status=ok
// SIG undefined cef_enable_highdpi_support(void)

void cef_enable_highdpi_support(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014992c980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cef_enable_highdpi_support();
  return;
}



// FUNCTION 144d734b0 FUN_144d734b0 body=135 status=ok
// SIG undefined FUN_144d734b0(void)

undefined8 * FUN_144d734b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x78);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145169960(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d73540 FUN_144d73540 body=135 status=ok
// SIG undefined FUN_144d73540(void)

undefined8 * FUN_144d73540(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_14516a370(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d735d0 FUN_144d735d0 body=135 status=ok
// SIG undefined FUN_144d735d0(void)

undefined8 * FUN_144d735d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_14516a6d0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d73660 FUN_144d73660 body=135 status=ok
// SIG undefined FUN_144d73660(void)

undefined8 * FUN_144d73660(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_14516ada0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 144d736f0 FUN_144d736f0 body=230 status=ok
// SIG undefined FUN_144d736f0(void)

longlong * FUN_144d736f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14516b340(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7301ec;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 144d737e0 FUN_144d737e0 body=230 status=ok
// SIG undefined FUN_144d737e0(void)

longlong * FUN_144d737e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_14516db60(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7301f8;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 144d738d0 FUN_144d738d0 body=156 status=ok
// SIG undefined FUN_144d738d0(void)

undefined8 FUN_144d738d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7301f8) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_14516daf0(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 144d73970 FUN_144d73970 body=48 status=ok
// SIG undefined FUN_144d73970(void)

void FUN_144d73970(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d739a0 FUN_144d739a0 body=94 status=ok
// SIG undefined FUN_144d739a0(void)

void FUN_144d739a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 3;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)puVar2;
  return;
}



// FUNCTION 144d73a00 FUN_144d73a00 body=48 status=ok
// SIG undefined FUN_144d73a00(void)

void FUN_144d73a00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73a30 FUN_144d73a30 body=48 status=ok
// SIG undefined FUN_144d73a30(void)

void FUN_144d73a30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73a60 FUN_144d73a60 body=48 status=ok
// SIG undefined FUN_144d73a60(void)

void FUN_144d73a60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73a90 FUN_144d73a90 body=48 status=ok
// SIG undefined FUN_144d73a90(void)

void FUN_144d73a90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73ac0 FUN_144d73ac0 body=48 status=ok
// SIG undefined FUN_144d73ac0(void)

void FUN_144d73ac0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73af0 FUN_144d73af0 body=48 status=ok
// SIG undefined FUN_144d73af0(void)

void FUN_144d73af0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 144d73b20 FUN_144d73b20 body=161 status=ok
// SIG undefined FUN_144d73b20(void)

void FUN_144d73b20(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8),0x18);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      puVar5 = (undefined8 *)FUN_14494321d();
      *(undefined8 **)(param_1 + 8) = puVar5;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    *puVar1 = *(undefined4 *)param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *(undefined8 *)(puVar1 + 4) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    cef_string_userfree_utf16_free(param_2);
  }
  return;
}



// FUNCTION 144d73bd0 FUN_144d73bd0 body=47 status=ok
// SIG undefined FUN_144d73bd0(void)

undefined8
FUN_144d73bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_14516fec0();
  uVar1 = cef_dictionary_value_create();
  FUN_144d73c30(param_1,uVar1,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 144d73c00 FUN_144d73c00 body=48 status=ok
// SIG undefined FUN_144d73c00(void)

longlong FUN_144d73c00(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 144d73c30 FUN_144d73c30 body=230 status=ok
// SIG undefined FUN_144d73c30(void)

longlong * FUN_144d73c30(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_144d73f20(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078d0;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}


