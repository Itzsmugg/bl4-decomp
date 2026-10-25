// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a9f7c8 FUN_143a9f7c8 body=23 status=ok
// SIG undefined FUN_143a9f7c8(void)

void FUN_143a9f7c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9f7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143a9f7e0 FUN_143a9f7e0 body=125 status=ok
// SIG undefined FUN_143a9f7e0(void)

undefined8 * FUN_143a9f7e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14adff940;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 1;
  if (*(int *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143a9f83f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143a9f83f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f85e FUN_143a9f85e body=29 status=ok
// SIG undefined FUN_143a9f85e(void)

undefined8 FUN_143a9f85e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f890 FUN_143a9f890 body=85 status=ok
// SIG undefined FUN_143a9f890(void)

void FUN_143a9f890(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adff9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff980;
  return;
}



// FUNCTION 143a9f8e6 FUN_143a9f8e6 body=85 status=ok
// SIG undefined FUN_143a9f8e6(void)

void FUN_143a9f8e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adff9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff980;
  return;
}



// FUNCTION 143a9f93c FUN_143a9f93c body=118 status=ok
// SIG undefined FUN_143a9f93c(void)

void FUN_143a9f93c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14adff9f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adff980;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9f9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9f9ba FUN_143a9f9ba body=19 status=ok
// SIG undefined FUN_143a9f9ba(void)

undefined1 FUN_143a9f9ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1418322dc(param_2);
  return 1;
}



// FUNCTION 143a9f9ce FUN_143a9f9ce body=29 status=ok
// SIG undefined FUN_143a9f9ce(void)

undefined8 FUN_143a9f9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9fa00 FUN_143a9fa00 body=85 status=ok
// SIG undefined FUN_143a9fa00(void)

void FUN_143a9fa00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffa60;
  return;
}



// FUNCTION 143a9fa56 FUN_143a9fa56 body=85 status=ok
// SIG undefined FUN_143a9fa56(void)

void FUN_143a9fa56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffa60;
  return;
}



// FUNCTION 143a9faac FUN_143a9faac body=118 status=ok
// SIG undefined FUN_143a9faac(void)

void FUN_143a9faac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14adffad0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adffa60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9fb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9fb22 FUN_143a9fb22 body=53 status=ok
// SIG undefined FUN_143a9fb22(void)

void FUN_143a9fb22(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x810,0x10);
  FUN_143a8b3da(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a9fb58 FUN_143a9fb58 body=56 status=ok
// SIG undefined FUN_143a9fb58(void)

undefined1
FUN_143a9fb58(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x810,0x10);
  FUN_143a8b3da(uVar1,param_2,param_3,param_4);
  return 1;
}



// FUNCTION 143a9fb9c FUN_143a9fb9c body=29 status=ok
// SIG undefined FUN_143a9fb9c(void)

undefined8 FUN_143a9fb9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9fbce FUN_143a9fbce body=85 status=ok
// SIG undefined FUN_143a9fbce(void)

void FUN_143a9fbce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffc90;
  return;
}



// FUNCTION 143a9fc24 FUN_143a9fc24 body=85 status=ok
// SIG undefined FUN_143a9fc24(void)

void FUN_143a9fc24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffc90;
  return;
}



// FUNCTION 143a9fc7a FUN_143a9fc7a body=118 status=ok
// SIG undefined FUN_143a9fc7a(void)

void FUN_143a9fc7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adffc90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9fce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9fcf8 FUN_143a9fcf8 body=19 status=ok
// SIG undefined FUN_143a9fcf8(void)

undefined1 FUN_143a9fcf8(undefined8 param_1,undefined8 param_2)

{
  FUN_143aa49e4(param_2);
  return 1;
}



// FUNCTION 143a9fd0b FUN_143a9fd0b body=39 status=ok
// SIG undefined FUN_143a9fd0b(void)

void FUN_143a9fd0b(void)

{
  if (DAT_14cb412f0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14cb412f0)(DAT_14cb412f0,0);
    DAT_14cb412f0 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 143a9fd32 FUN_143a9fd32 body=12894 status=ok
// SIG undefined FUN_143a9fd32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9fd32(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  wchar_t **local_a8;
  undefined **ppuStack_a0;
  undefined4 *puStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined4 local_70 [4];
  wchar_t *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb3e644);
  if (cVar2 == '\0') {
    _DAT_14cb3e644 = 0;
    uRam000000014cb3e64c = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  puStack_98 = (undefined4 *)0x1;
  ppuStack_a0 = &PTR_FUN_14adf3a40;
  local_a8 = (wchar_t **)0x1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14adf3a60);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e688,L"fx.DumpParticleData",&DAT_14cb3e698,
                L"If > 0 current frame particle data will be dumped after simulation. \n");
  atexit(FUN_143a82118);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e6a0,L"fx.Niagara.DumpNans",&DAT_14cb3e6b0,
                L"If not 0 any NaNs will be dumped always.\n");
  atexit(FUN_143a8215d);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e6b8,L"fx.Niagara.DumpNansOnce",&DAT_14cb3e6c8,
                L"If not 0 any NaNs will be dumped for the first emitter that encounters NaNs.\n");
  atexit(FUN_143a821a2);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e6d0,L"fx.Niagara.ShowAllocationWarnings",&DAT_14cb3e6e0,
                L"If not 0 then frequent reallocations and over-allocations of particle memory will cause warnings in the log.\n"
               );
  atexit(FUN_143a821e7);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e6e8,L"fx.MaxNiagaraCPUParticlesPerEmitter",&DAT_14c7628c8,
                L"The max number of supported CPU particles per emitter in Niagara. \n");
  atexit(FUN_143a8222c);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e6f8,&DAT_14adf3f02,&DAT_14c7628cc,
                L"The max number of GPU particles we expect to spawn in a single frame.\n");
  atexit(FUN_143a82271);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e708,L"fx.TriggerDebugCrash",&DAT_14cb3e718,
                L"If > 0 we deliberately crash to test Crash Reporter integration.");
  atexit(FUN_143a84e4d);
  ppuStack_a0 = (undefined **)0x0;
  puStack_98 = (undefined4 *)0x0;
  local_a8 = (wchar_t **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adf4fa0,2,&PTR_FUN_14adf4f70);
  local_60 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  puStack_98 = (undefined4 *)0x0;
  local_a8 = (wchar_t **)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adf73f0,1,0);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e820,L"fx.AllowFastPathFunctionLibrary",&DAT_14cb3e818,
                L"If > 0 Allow the graph to insert custom fastpath operations into the graph.\n");
  atexit(FUN_143a8a8a6);
  DAT_14cb3e830 = 0;
  _DAT_14cb3e838 = 0;
  atexit(FUN_143a8a8eb);
  DAT_14cb3e840 = 0;
  _DAT_14cb3e848 = 0;
  atexit(FUN_143a8a91c);
  FUN_1446f470e(&DAT_14cb3e850,L"FastPathLibrary",1);
  FUN_1446f470e(&DAT_14cb3e858,L"FastPathDot4",1);
  FUN_1446f470e(&DAT_14cb3e860,L"FastPathTransformPosition",1);
  FUN_1446f470e(&DAT_14cb3e868,L"FastMatrixToQuaternion",1);
  FUN_1446f470e(&DAT_14cb3e870,L"FastUniqueRandom",1);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e878,L"fx.Niagara.GpuComputeDebug.MinTextureHeight",&DAT_14c7628d0,
                L"The minimum height we will visualize a texture at, smaller textures will be scaled up to match this."
               );
  atexit(FUN_143a8b08b);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e888,L"fx.Niagara.GpuComputeDebug.MaxTextureHeight",&DAT_14c7628d4,
                L"The maximum height we will visualize a texture at, this is to avoid things becoming too large on screen."
               );
  atexit(FUN_143a8b0d0);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e898,L"fx.Niagara.GpuComputeDebug.MaxLineInstances",&DAT_14c7628d8,
                L"Maximum number of line draw we support in a single frame.");
  atexit(FUN_143a8b115);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e8a8,L"fx.Niagara.GpuComputeDebug.DrawDebugEnabled",&DAT_14c7628dc,
                L"Should we draw any of the debug information or not.");
  atexit(FUN_143a8b15a);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e8c0,L"fx.NiagaraGpuSubmitCommandHint",&DAT_14cb3e8bc,
                L"If greater than zero, we use this value to submit commands after the number of dispatches have been issued."
               );
  atexit(FUN_143a8b19f);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e8d0,L"fx.NiagaraGpuLowLatencyTranslucencyEnabled",&DAT_14c7628e0,
                L"When enabled translucent materials can use the current frames simulation data no matter which tick pass Niagara uses.\nThis can result in an additional data buffer being required but will reduce any latency when using view uniform buffer / depth buffer / distance fields / etc"
               );
  atexit(FUN_143a8b1e4);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e8e0,L"fx.NiagaraBatcher.FreeBufferEarly",&DAT_14c7628e4,
                L"Will take the path to release GPU buffers when possible.\nThis will reduce memory pressure but can result in more allocations if you buffers ping pong from zero particles to many."
               );
  atexit(FUN_143a8b229);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e8f0,L"fx.NiagaraOptimizeCrossGPUTransfer",&DAT_14c7628e8,
                L"Optimizes fence waits for cross GPU transfers when rendering views on multiple GPUs via nDisplay.  (Default = 1)"
               );
  atexit(FUN_143a8b26e);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 8) = lVar6;
  *(undefined ***)local_60 = &PTR_FUN_14adff370;
  local_70[0] = 1;
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb3e900,L"fx.gbx.MultiDispatchForGestalt",local_70,
                L"0: Single dispatch for Niagara skeletal interface\n>0: Enable multiple dispatch to support Gestalt part Niagara rendering."
               );
  (**(code **)(*DAT_14cb3e908 + 200))(DAT_14cb3e908,&local_60);
  if (local_58 == 0) {
LAB_143aa02e0:
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143aa02e0;
  }
  atexit(FUN_143a8b2b3);
  FUN_1446f470e(&DAT_14cb3e918,L"FNiagaraGpuComputeDispatch",1);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e920,L"fx.Niagara.Batcher.TickFlush.MaxQueuedFrames",&DAT_14c7628ec,
                L"The number of unprocessed frames with queued ticks before we process them.\nThe larger the number the more data we process in a single frame, this is generally only a concern when the application does not have focus."
               );
  atexit(FUN_143a8b2f8);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e930,L"fx.Niagara.Batcher.TickFlush.MaxPendingTicks",&DAT_14c7628f0,
                L"The maximum number of unprocess ticks before we process them.\nThe larger the number the more data we process in a single frame."
               );
  atexit(FUN_143a8b33d);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e940,L"fx.Niagara.Batcher.TickFlush.Mode",&DAT_14c7628f4,
                L"What to do when we go over our max queued frames.\n0 = Keep ticks queued, can result in a long pause when gaining focus again.\n1 = (Default) Process all queued ticks with dummy view / buffer data, may result in incorrect simulation due to missing depth collisions, etc.\n2 = Kill all pending ticks, may result in incorrect simulation due to missing frames of data, i.e. a particle reset.\n"
               );
  atexit(FUN_143a8b382);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e950,L"Niagara.MinGPUInstanceCount",&DAT_14c7628f8,
                L"Minimum number of instance count entries allocated in the global buffer. (default=2048)"
               );
  atexit(FUN_143a951bd);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e960,L"Niagara.GPUCountManager.AllocateIncrement",&DAT_14c7628fc,
                L"If we run out of space for allocations this is how many allocate rather than a single entry. (default=64)"
               );
  atexit(FUN_143a95202);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e970,L"Niagara.MinCulledGPUInstanceCount",&DAT_14c762900,
                L"Minimum number of culled (per-view) instance count entries allocated in the global buffer. (default=2048)"
               );
  atexit(FUN_143a95247);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb3e980,L"Niagara.GPUCountBufferSlack",&DAT_14c762904,
                L"Multiplier of the GPU count buffer size to prevent frequent re-allocation.");
  atexit(FUN_143a9528c);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e990,L"fx.Niagara.IndirectArgsPool.MinSize",&DAT_14c762908,
                L"Minimum number of draw indirect args allocated into the pool. (default=256)");
  atexit(FUN_143a952d1);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb3e9a0,L"fx.Niagara.IndirectArgsPool.BlockSizeFactor",&DAT_14c76290c,
                L"Multiplier on the indirect args pool size when needing to increase it from running out of space. (default=2.0)"
               );
  atexit(FUN_143a95316);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e9b0,L"fx.Niagara.IndirectArgsPool.AllowShrinking",&DAT_14c762910,
                L"Allow the indirect args pool to shrink after a number of frames below a low water mark."
               );
  atexit(FUN_143a9535b);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb3e9c0,L"fx.Niagara.IndirectArgsPool.LowWaterAmount",&DAT_14c762914,
                L"Percentage (0-1) of the indirect args pool that is considered low and worthy of shrinking"
               );
  atexit(FUN_143a953a0);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e9d0,L"fx.Niagara.IndirectArgsPool.LowWaterFrames",&DAT_14c762918,
                L"The number of frames to wait to shrink the indirect args pool for being below the low water mark. (default=150)"
               );
  atexit(FUN_143a953e5);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb3e9e0,L"fx.Niagara.GpuProfiling.Enabled",&DAT_14c76291c,
                L"Primary control to allow Niagara to use GPU profiling or not.\n");
  atexit(FUN_143a96510);
  local_60 = L"NiagaraGpuReadback";
  local_58 = 0x12;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb3e9f0 = (ulonglong)uVar3;
  puStack_98 = (undefined4 *)0x0;
  local_a8 = (wchar_t **)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adfa110,1,0);
  puStack_98 = (undefined4 *)0x0;
  local_a8 = (wchar_t **)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adfac00,1,0);
  DAT_14cb3ea28 = 0;
  _DAT_14cb3ea30 = 0;
  atexit((_func_5014 *)&LAB_143a96b54);
  ppuStack_a0 = &PTR_FUN_14adfca50;
  puStack_98 = (undefined4 *)0x4;
  local_a8 = (wchar_t **)0x3;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adfcb50,1,&PTR_FUN_14adfcad0);
  DAT_14cb3eaf8 = 0;
  _DAT_14cb3eb00 = 0;
  atexit((_func_5014 *)&LAB_143a96c43);
  local_60 = (wchar_t *)0x800000014a90bfc8;
  local_70[0] = 7;
  local_58 = FUN_14577453c();
  local_54 = 1;
  FUN_146476246(&local_60);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3eb10,L"fx.LogCompileIdGeneration",&DAT_14cb3eb0c,
                L"If > 0 all compile id generation will be logged. If 2 or greater, log detailed info. \n"
               );
  atexit(FUN_143a96c54);
  local_60 = L"LightweightDisplayName";
  local_58 = 0x16;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"NiagaraModule";
  local_58 = 0xd;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Lightweight";
  local_58 = 0xb;
  FUN_140208c1e(local_70,local_78,local_74,&local_60);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_88 = 0xe1737bf2;
  uStack_84 = 0x52264191;
  uStack_80 = 0xb9b9aa5f;
  uStack_7c = 0xfb8c7412;
  ppuStack_a0 = (undefined **)&DAT_149e1dd34;
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffffffffff00);
  puStack_98 = &local_88;
  FUN_1480d7764(&DAT_14cb3eb20,local_70,2,&local_60);
  atexit(FUN_143a96c99);
  local_60 = L"TemplateDisplayName";
  local_58 = 0x13;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"NiagaraModule";
  local_58 = 0xd;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Template";
  local_58 = 8;
  FUN_140208c1e(local_70,local_78,local_74,&local_60);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_88 = 0xfc157afa;
  uStack_84 = 0x50264263;
  uStack_80 = 0xb9a9e658;
  uStack_7c = 0xffac2d22;
  ppuStack_a0 = (undefined **)&DAT_149e1dd24;
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffffffffff00);
  puStack_98 = &local_88;
  FUN_1480d7764(&DAT_14cb3eb70,local_70,3,&local_60);
  atexit(FUN_143a96ccc);
  local_60 = L"LearningContentDisplayName";
  local_58 = 0x1a;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"NiagaraModule";
  local_58 = 0xd;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Learning Content";
  local_58 = 0x10;
  FUN_140208c1e(local_70,local_78,local_74,&local_60);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_88 = 0xfcf21afa;
  uStack_84 = 0x50764bfa;
  uStack_80 = 0xb9b2e618;
  uStack_7c = 0xf2a0cd6f;
  ppuStack_a0 = (undefined **)&DAT_149e1dd14;
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffffffffff00);
  puStack_98 = &local_88;
  FUN_1480d7764(&DAT_14cb3ebc0,local_70,7,&local_60);
  atexit(FUN_143a96cff);
  local_60 = L"HiddenDisplayName";
  local_58 = 0x11;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"NiagaraModule";
  local_58 = 0xd;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Hidden in Asset Browser";
  local_58 = 0x17;
  FUN_140208c1e(local_70,local_78,local_74,&local_60);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_88 = 0xc7b2f2a1;
  uStack_84 = 0x71762afb;
  uStack_80 = 0x51bde232;
  uStack_7c = 0x8ca4bba3;
  ppuStack_a0 = (undefined **)&DAT_149e1e308;
  local_a8 = (wchar_t **)CONCAT71(local_a8._1_7_,2);
  puStack_98 = &local_88;
  FUN_1480d7764(&DAT_14cb3ec10,local_70,7,&local_60);
  atexit(FUN_143a96d32);
  local_60 = L"DeprecatedDisplayName";
  local_58 = 0x15;
  FUN_1446e940c(local_74,&local_60);
  local_60 = L"NiagaraModule";
  local_58 = 0xd;
  FUN_1446e940c(local_78,&local_60);
  local_60 = L"Deprecated";
  local_58 = 10;
  FUN_140208c1e(local_70,local_78,local_74,&local_60);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = DAT_14c844848;
  local_88 = 0xf1f2f2fb;
  uStack_84 = 0x50c64af9;
  uStack_80 = 0xb6bce631;
  uStack_7c = 0x32c4cc61;
  ppuStack_a0 = (undefined **)&DAT_149e1e308;
  local_a8 = (wchar_t **)CONCAT71(local_a8._1_7_,2);
  puStack_98 = &local_88;
  FUN_1480d7764(&DAT_14cb3ec60,local_70,7,&local_60);
  atexit(FUN_143a96d65);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3ecb8,L"fx.EnableVerboseNiagaraChangeIdLogging",&DAT_14cb3ecb0,
                L"If > 0 Verbose change id logging info will be printed. \n");
  atexit(FUN_143a96d98);
  local_a8 = (wchar_t **)CONCAT44(local_a8._4_4_,0x40);
  FUN_1415c789c(&DAT_14cb3ecc8,L"fx.NiagaraGlobalSystemCountScale",&DAT_14c762928,
                L"A global scale on system count thresholds for culling in Niagara. \n");
  atexit(FUN_143a96ddd);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 8) = lVar6;
  *(undefined ***)local_60 = &PTR_FUN_149e17030;
  *(undefined **)(local_60 + 0xc) = &DAT_143a96e22;
  ppuStack_a0 = (undefined **)((ulonglong)ppuStack_a0 & 0xffffffff00000000);
  local_a8 = &local_60;
  FUN_14171ec12(&DAT_14cb3ecd8,L"fx.Niagara.UseGlobalFXBudget",&DAT_14c76292c,
                L"If true, Niagara will track performace data into the global FX budget and feed the global budget values into scalability. \n"
               );
  if (local_58 == 0) {
LAB_143aa0d00:
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143aa0d00;
  }
  atexit(FUN_143a96e23);
  local_a8 = (wchar_t **)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb3ece8,L"fx.Niagara.MaxCompilePollTimePerFrame",&DAT_14c762920,
                L"When a lot of system compile tasks queue up, this is the max time per frame that is used to advance them."
               );
  atexit(FUN_143a96e68);
  local_60 = (wchar_t *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_60 + 8) = lVar6;
  *(undefined ***)local_60 = &PTR_FUN_149e17030;
  *(code **)(local_60 + 0xc) = FUN_1481c9668;
  ppuStack_a0 = (undefined **)((ulonglong)ppuStack_a0 & 0xffffffff00000000);
  local_a8 = &local_60;
  FUN_14171ec12(&DAT_14cb3ecf8,L"fx.Niagara.DataChannels.Enabled",&DAT_14c76292d,
                L"If true, Niagara Data Channels will be enabled. \n");
  if (local_58 != 0) {
    if (local_60 == (wchar_t *)0x0) goto LAB_143aa0e20;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143aa0e20:
  atexit(FUN_143a96ead);
  DAT_14cb41418 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41428 = 0;
  _DAT_14cb41430 = 0;
  DAT_14cb41420 = uVar4;
  atexit((_func_5014 *)&LAB_143a96ef2);
  DAT_14cb41438 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41448 = 0;
  _DAT_14cb41450 = 0;
  DAT_14cb41440 = uVar5;
  atexit((_func_5014 *)&LAB_143a96f03);
  DAT_14cb41458 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41468 = 0;
  _DAT_14cb41470 = 0;
  DAT_14cb41460 = uVar4;
  atexit((_func_5014 *)&LAB_143a96f14);
  DAT_14cb41478 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41488 = 0;
  _DAT_14cb41490 = 0;
  DAT_14cb41480 = uVar5;
  atexit((_func_5014 *)&LAB_143a96f25);
  DAT_14cb41498 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb414a8 = 0;
  _DAT_14cb414b0 = 0;
  DAT_14cb414a0 = uVar4;
  atexit((_func_5014 *)&LAB_143a96f36);
  DAT_14cb414b8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb414c8 = 0;
  _DAT_14cb414d0 = 0;
  DAT_14cb414c0 = uVar5;
  atexit((_func_5014 *)&LAB_143a96f47);
  DAT_14cb414d8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb414e8 = 0;
  _DAT_14cb414f0 = 0;
  DAT_14cb414e0 = uVar4;
  atexit((_func_5014 *)&LAB_143a96f58);
  DAT_14cb41518 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41528 = 0;
  _DAT_14cb41530 = 0;
  DAT_14cb41520 = uVar5;
  atexit((_func_5014 *)&LAB_143a96f69);
  DAT_14cb41538 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41548 = 0;
  _DAT_14cb41550 = 0;
  DAT_14cb41540 = uVar4;
  atexit((_func_5014 *)&LAB_143a96f7a);
  DAT_14cb41558 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41568 = 0;
  _DAT_14cb41570 = 0;
  DAT_14cb41560 = uVar5;
  atexit((_func_5014 *)&LAB_143a96f8b);
  DAT_14cb41578 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41588 = 0;
  _DAT_14cb41590 = 0;
  DAT_14cb41580 = uVar4;
  atexit((_func_5014 *)&LAB_143a96f9c);
  DAT_14cb414f8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41508 = 0;
  _DAT_14cb41510 = 0;
  DAT_14cb41500 = uVar5;
  atexit((_func_5014 *)&LAB_143a96fad);
  DAT_14cb415f8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41608 = 0;
  _DAT_14cb41610 = 0;
  DAT_14cb41600 = uVar4;
  atexit((_func_5014 *)&LAB_143a96fbe);
  DAT_14cb41598 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb415a8 = 0;
  _DAT_14cb415b0 = 0;
  DAT_14cb415a0 = uVar5;
  atexit((_func_5014 *)&LAB_143a96fcf);
  DAT_14cb415b8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb415c8 = 0;
  _DAT_14cb415d0 = 0;
  DAT_14cb415c0 = uVar4;
  atexit((_func_5014 *)&LAB_143a96fe0);
  DAT_14cb41618 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41628 = 0;
  _DAT_14cb41630 = 0;
  DAT_14cb41620 = uVar5;
  atexit((_func_5014 *)&LAB_143a96ff1);
  DAT_14cb41638 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41648 = 0;
  _DAT_14cb41650 = 0;
  DAT_14cb41640 = uVar4;
  atexit((_func_5014 *)&LAB_143a97002);
  DAT_14cb41658 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41668 = 0;
  _DAT_14cb41670 = 0;
  DAT_14cb41660 = uVar5;
  atexit((_func_5014 *)&LAB_143a97013);
  DAT_14cb41678 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41688 = 0;
  _DAT_14cb41690 = 0;
  DAT_14cb41680 = uVar4;
  atexit((_func_5014 *)&LAB_143a97024);
  DAT_14cb41698 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb416a8 = 0;
  _DAT_14cb416b0 = 0;
  DAT_14cb416a0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97035);
  DAT_14cb416b8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb416c8 = 0;
  _DAT_14cb416d0 = 0;
  DAT_14cb416c0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97046);
  DAT_14cb41718 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41728 = 0;
  _DAT_14cb41730 = 0;
  DAT_14cb41720 = uVar5;
  atexit((_func_5014 *)&LAB_143a97057);
  DAT_14cb416d8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb416e8 = 0;
  _DAT_14cb416f0 = 0;
  DAT_14cb416e0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97068);
  DAT_14cb416f8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41708 = 0;
  _DAT_14cb41710 = 0;
  DAT_14cb41700 = uVar5;
  atexit((_func_5014 *)&LAB_143a97079);
  DAT_14cb41738 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41748 = 0;
  _DAT_14cb41750 = 0;
  DAT_14cb41740 = uVar4;
  atexit((_func_5014 *)&LAB_143a9708a);
  DAT_14cb41758 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41768 = 0;
  _DAT_14cb41770 = 0;
  DAT_14cb41760 = uVar5;
  atexit((_func_5014 *)&LAB_143a9709b);
  DAT_14cb41778 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41788 = 0;
  _DAT_14cb41790 = 0;
  DAT_14cb41780 = uVar4;
  atexit((_func_5014 *)&LAB_143a970ac);
  DAT_14cb41798 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb417a8 = 0;
  _DAT_14cb417b0 = 0;
  DAT_14cb417a0 = uVar5;
  atexit((_func_5014 *)&LAB_143a970bd);
  DAT_14cb417b8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb417c8 = 0;
  _DAT_14cb417d0 = 0;
  DAT_14cb417c0 = uVar4;
  atexit((_func_5014 *)&LAB_143a970ce);
  DAT_14cb417d8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb417e8 = 0;
  _DAT_14cb417f0 = 0;
  DAT_14cb417e0 = uVar5;
  atexit((_func_5014 *)&LAB_143a970df);
  DAT_14cb415d8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb415e8 = 0;
  _DAT_14cb415f0 = 0;
  DAT_14cb415e0 = uVar4;
  atexit((_func_5014 *)&LAB_143a970f0);
  DAT_14cb41978 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41988 = 0;
  _DAT_14cb41990 = 0;
  DAT_14cb41980 = uVar5;
  atexit((_func_5014 *)&LAB_143a97101);
  DAT_14cb417f8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41808 = 0;
  _DAT_14cb41810 = 0;
  DAT_14cb41800 = uVar4;
  atexit((_func_5014 *)&LAB_143a97112);
  DAT_14cb41818 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41828 = 0;
  _DAT_14cb41830 = 0;
  DAT_14cb41820 = uVar5;
  atexit((_func_5014 *)&LAB_143a97123);
  DAT_14cb41838 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41848 = 0;
  _DAT_14cb41850 = 0;
  DAT_14cb41840 = uVar4;
  atexit((_func_5014 *)&LAB_143a97134);
  DAT_14cb41858 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41868 = 0;
  _DAT_14cb41870 = 0;
  DAT_14cb41860 = uVar5;
  atexit((_func_5014 *)&LAB_143a97145);
  DAT_14cb41878 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41888 = 0;
  _DAT_14cb41890 = 0;
  DAT_14cb41880 = uVar4;
  atexit((_func_5014 *)&LAB_143a97156);
  DAT_14cb41898 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb418a8 = 0;
  _DAT_14cb418b0 = 0;
  DAT_14cb418a0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97167);
  DAT_14cb418b8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb418c8 = 0;
  _DAT_14cb418d0 = 0;
  DAT_14cb418c0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97178);
  DAT_14cb418d8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb418e8 = 0;
  _DAT_14cb418f0 = 0;
  DAT_14cb418e0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97189);
  DAT_14cb418f8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41908 = 0;
  _DAT_14cb41910 = 0;
  DAT_14cb41900 = uVar4;
  atexit((_func_5014 *)&LAB_143a9719a);
  DAT_14cb41918 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41928 = 0;
  _DAT_14cb41930 = 0;
  DAT_14cb41920 = uVar5;
  atexit((_func_5014 *)&LAB_143a971ab);
  DAT_14cb41938 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41948 = 0;
  _DAT_14cb41950 = 0;
  DAT_14cb41940 = uVar4;
  atexit((_func_5014 *)&LAB_143a971bc);
  DAT_14cb41958 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41968 = 0;
  _DAT_14cb41970 = 0;
  DAT_14cb41960 = uVar5;
  atexit((_func_5014 *)&LAB_143a971cd);
  DAT_14cb41998 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb419a8 = 0;
  _DAT_14cb419b0 = 0;
  DAT_14cb419a0 = uVar4;
  atexit((_func_5014 *)&LAB_143a971de);
  DAT_14cb419b8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb419c8 = 0;
  _DAT_14cb419d0 = 0;
  DAT_14cb419c0 = uVar5;
  atexit((_func_5014 *)&LAB_143a971ef);
  DAT_14cb419d8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb419e8 = 0;
  _DAT_14cb419f0 = 0;
  DAT_14cb419e0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97200);
  DAT_14cb41ad8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ae8 = 0;
  _DAT_14cb41af0 = 0;
  DAT_14cb41ae0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97211);
  DAT_14cb419f8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41a08 = 0;
  _DAT_14cb41a10 = 0;
  DAT_14cb41a00 = uVar4;
  atexit((_func_5014 *)&LAB_143a97222);
  DAT_14cb41ab8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ac8 = 0;
  _DAT_14cb41ad0 = 0;
  DAT_14cb41ac0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97233);
  DAT_14cb41a18 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41a28 = 0;
  _DAT_14cb41a30 = 0;
  DAT_14cb41a20 = uVar4;
  atexit((_func_5014 *)&LAB_143a97244);
  DAT_14cb41a38 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41a48 = 0;
  _DAT_14cb41a50 = 0;
  DAT_14cb41a40 = uVar5;
  atexit((_func_5014 *)&LAB_143a97255);
  _DAT_14cb41b78 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41b88 = 0;
  uRam000000014cb41b90 = 0;
  _DAT_14cb41b80 = uVar4;
  atexit((_func_5014 *)&LAB_143a97266);
  DAT_14cb41b98 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ba8 = 0;
  _DAT_14cb41bb0 = 0;
  DAT_14cb41ba0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97277);
  DAT_14cb41bb8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41bc8 = 0;
  _DAT_14cb41bd0 = 0;
  DAT_14cb41bc0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97288);
  DAT_14cb41a58 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41a68 = 0;
  _DAT_14cb41a70 = 0;
  DAT_14cb41a60 = uVar5;
  atexit((_func_5014 *)&LAB_143a97299);
  DAT_14cb41bd8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41be8 = 0;
  _DAT_14cb41bf0 = 0;
  DAT_14cb41be0 = uVar4;
  atexit((_func_5014 *)&LAB_143a972aa);
  DAT_14cb41bf8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41c08 = 0;
  _DAT_14cb41c10 = 0;
  DAT_14cb41c00 = uVar5;
  atexit((_func_5014 *)&LAB_143a972bb);
  DAT_14cb41b58 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41b68 = 0;
  _DAT_14cb41b70 = 0;
  DAT_14cb41b60 = uVar4;
  atexit((_func_5014 *)&LAB_143a972cc);
  DAT_14cb41c18 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41c28 = 0;
  _DAT_14cb41c30 = 0;
  DAT_14cb41c20 = uVar5;
  atexit((_func_5014 *)&LAB_143a972dd);
  DAT_14cb41c38 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41c48 = 0;
  _DAT_14cb41c50 = 0;
  DAT_14cb41c40 = uVar4;
  atexit((_func_5014 *)&LAB_143a972ee);
  DAT_14cb41c58 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41c68 = 0;
  _DAT_14cb41c70 = 0;
  DAT_14cb41c60 = uVar5;
  atexit((_func_5014 *)&LAB_143a972ff);
  _DAT_14cb41308 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41318 = 0;
  uRam000000014cb41320 = 0;
  _DAT_14cb41310 = uVar4;
  atexit((_func_5014 *)&LAB_143a97310);
  DAT_14cb41c78 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41c88 = 0;
  _DAT_14cb41c90 = 0;
  DAT_14cb41c80 = uVar5;
  atexit((_func_5014 *)&LAB_143a97321);
  DAT_14cb41c98 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ca8 = 0;
  _DAT_14cb41cb0 = 0;
  DAT_14cb41ca0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97332);
  DAT_14cb41cb8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41cc8 = 0;
  _DAT_14cb41cd0 = 0;
  DAT_14cb41cc0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97343);
  DAT_14cb41cd8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ce8 = 0;
  _DAT_14cb41cf0 = 0;
  DAT_14cb41ce0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97354);
  DAT_14cb41cf8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d08 = 0;
  _DAT_14cb41d10 = 0;
  DAT_14cb41d00 = uVar5;
  atexit((_func_5014 *)&LAB_143a97365);
  DAT_14cb41d18 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d28 = 0;
  _DAT_14cb41d30 = 0;
  DAT_14cb41d20 = uVar4;
  atexit((_func_5014 *)&LAB_143a97376);
  DAT_14cb41d38 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d48 = 0;
  _DAT_14cb41d50 = 0;
  DAT_14cb41d40 = uVar5;
  atexit((_func_5014 *)&LAB_143a97387);
  DAT_14cb41d58 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d68 = 0;
  _DAT_14cb41d70 = 0;
  DAT_14cb41d60 = uVar4;
  atexit((_func_5014 *)&LAB_143a97398);
  DAT_14cb41d78 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d88 = 0;
  _DAT_14cb41d90 = 0;
  DAT_14cb41d80 = uVar5;
  atexit((_func_5014 *)&LAB_143a973a9);
  DAT_14cb41d98 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41da8 = 0;
  _DAT_14cb41db0 = 0;
  DAT_14cb41da0 = uVar4;
  atexit((_func_5014 *)&LAB_143a973ba);
  DAT_14cb41db8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41dc8 = 0;
  _DAT_14cb41dd0 = 0;
  DAT_14cb41dc0 = uVar5;
  atexit((_func_5014 *)&LAB_143a973cb);
  DAT_14cb41dd8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41de8 = 0;
  _DAT_14cb41df0 = 0;
  DAT_14cb41de0 = uVar4;
  atexit((_func_5014 *)&LAB_143a973dc);
  DAT_14cb41e38 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41e48 = 0;
  _DAT_14cb41e50 = 0;
  DAT_14cb41e40 = uVar5;
  atexit((_func_5014 *)&LAB_143a973ed);
  DAT_14cb41e58 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41e68 = 0;
  _DAT_14cb41e70 = 0;
  DAT_14cb41e60 = uVar4;
  atexit((_func_5014 *)&LAB_143a973fe);
  DAT_14cb41e18 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41e28 = 0;
  _DAT_14cb41e30 = 0;
  DAT_14cb41e20 = uVar5;
  atexit((_func_5014 *)&LAB_143a9740f);
  DAT_14cb41e78 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41e88 = 0;
  _DAT_14cb41e90 = 0;
  DAT_14cb41e80 = uVar4;
  atexit((_func_5014 *)&LAB_143a97420);
  DAT_14cb41e98 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ea8 = 0;
  _DAT_14cb41eb0 = 0;
  DAT_14cb41ea0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97431);
  DAT_14cb42038 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb42048 = 0;
  _DAT_14cb42050 = 0;
  DAT_14cb42040 = uVar4;
  atexit((_func_5014 *)&LAB_143a97442);
  DAT_14cb41eb8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ec8 = 0;
  _DAT_14cb41ed0 = 0;
  DAT_14cb41ec0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97453);
  DAT_14cb42058 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb42068 = 0;
  _DAT_14cb42070 = 0;
  DAT_14cb42060 = uVar4;
  atexit((_func_5014 *)&LAB_143a97464);
  DAT_14cb42078 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb42088 = 0;
  _DAT_14cb42090 = 0;
  DAT_14cb42080 = uVar5;
  atexit((_func_5014 *)&LAB_143a97475);
  _DAT_14cb42098 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb420a8 = 0;
  uRam000000014cb420b0 = 0;
  _DAT_14cb420a0 = uVar4;
  atexit((_func_5014 *)&LAB_143a97486);
  DAT_14cb41ed8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41ee8 = 0;
  _DAT_14cb41ef0 = 0;
  DAT_14cb41ee0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97497);
  DAT_14cb41ef8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41f08 = 0;
  _DAT_14cb41f10 = 0;
  DAT_14cb41f00 = uVar4;
  atexit((_func_5014 *)&LAB_143a974a8);
  DAT_14cb41f18 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41f28 = 0;
  _DAT_14cb41f30 = 0;
  DAT_14cb41f20 = uVar5;
  atexit((_func_5014 *)&LAB_143a974b9);
  DAT_14cb41f38 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41f48 = 0;
  _DAT_14cb41f50 = 0;
  DAT_14cb41f40 = uVar4;
  atexit((_func_5014 *)&LAB_143a974ca);
  DAT_14cb41f58 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41f68 = 0;
  _DAT_14cb41f70 = 0;
  DAT_14cb41f60 = uVar5;
  atexit((_func_5014 *)&LAB_143a974db);
  DAT_14cb41f98 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41fa8 = 0;
  _DAT_14cb41fb0 = 0;
  DAT_14cb41fa0 = uVar4;
  atexit((_func_5014 *)&LAB_143a974ec);
  DAT_14cb41fb8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41fc8 = 0;
  _DAT_14cb41fd0 = 0;
  DAT_14cb41fc0 = uVar5;
  atexit((_func_5014 *)&LAB_143a974fd);
  DAT_14cb41fd8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41fe8 = 0;
  _DAT_14cb41ff0 = 0;
  DAT_14cb41fe0 = uVar4;
  atexit((_func_5014 *)&LAB_143a9750e);
  DAT_14cb41ff8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb42008 = 0;
  _DAT_14cb42010 = 0;
  DAT_14cb42000 = uVar5;
  atexit((_func_5014 *)&LAB_143a9751f);
  DAT_14cb41f78 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41f88 = 0;
  _DAT_14cb41f90 = 0;
  DAT_14cb41f80 = uVar4;
  atexit((_func_5014 *)&LAB_143a97530);
  DAT_14cb413f8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41408 = 0;
  _DAT_14cb41410 = 0;
  DAT_14cb41400 = uVar5;
  atexit((_func_5014 *)&LAB_143a97541);
  DAT_14cb41df8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41e08 = 0;
  _DAT_14cb41e10 = 0;
  DAT_14cb41e00 = uVar4;
  atexit((_func_5014 *)&LAB_143a97552);
  DAT_14cb413d8 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb413e8 = 0;
  _DAT_14cb413f0 = 0;
  DAT_14cb413e0 = uVar5;
  atexit((_func_5014 *)&LAB_143a97563);
  DAT_14cb41af8 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41b08 = 0;
  _DAT_14cb41b10 = 0;
  DAT_14cb41b00 = uVar4;
  atexit((_func_5014 *)&LAB_143a97574);
  DAT_14cb41b18 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41b28 = 0;
  _DAT_14cb41b30 = 0;
  DAT_14cb41b20 = uVar5;
  atexit((_func_5014 *)&LAB_143a97585);
  DAT_14cb41b38 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41b48 = 0;
  _DAT_14cb41b50 = 0;
  DAT_14cb41b40 = uVar4;
  atexit((_func_5014 *)&LAB_143a97596);
  DAT_14cb42018 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb42028 = 0;
  _DAT_14cb42030 = 0;
  DAT_14cb42020 = uVar5;
  atexit((_func_5014 *)&LAB_143a975a7);
  DAT_14cb41a78 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar4 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41a88 = 0;
  _DAT_14cb41a90 = 0;
  DAT_14cb41a80 = uVar4;
  atexit((_func_5014 *)&LAB_143a975b8);
  DAT_14cb41a98 = 0;
  if (DAT_14cb42160 != 0) {
    uVar5 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41aa8 = 0;
  _DAT_14cb41ab0 = 0;
  DAT_14cb41aa0 = uVar5;
  atexit((_func_5014 *)&LAB_143a975c9);
  DAT_14cb3edc0 = 0;
  _DAT_14cb3edc8 = 0;
  DAT_14cb3edca = 0;
  _DAT_14cb3edcc = 0xffffffff;
  DAT_14cb421a0 = 0;
  DAT_14cb421a8 = 0;
  DAT_14cb421aa = 0;
  _DAT_14cb421ac = 0xffffffff;
  _DAT_14cb3edd0 = 0;
  _DAT_14cb3edd8 = 0;
  DAT_14cb3edda = 0;
  _DAT_14cb3eddc = 0xffffffff;
  DAT_14cb420f0 = 0;
  DAT_14cb420f8._0_2_ = 0;
  DAT_14cb420f8._2_1_ = 0;
  DAT_14cb420f8._4_4_ = 0xffffffff;
  DAT_14cb420e0 = 0;
  DAT_14cb420e8._0_2_ = 0;
  DAT_14cb420e8._2_1_ = 0;
  DAT_14cb420e8._4_4_ = 0xffffffff;
  DAT_14cb420d0 = 0;
  DAT_14cb420d8 = 0;
  DAT_14cb420da = 0;
  _DAT_14cb420dc = 0xffffffff;
  DAT_14cb41370 = 0;
  DAT_14cb41378 = 0;
  DAT_14cb4137a = 0;
  _DAT_14cb4137c = 0xffffffff;
  DAT_14cb42160 = 0;
  DAT_14cb42168._0_2_ = 0;
  DAT_14cb42168._2_1_ = 0;
  DAT_14cb42168._4_4_ = 0xffffffff;
  DAT_14cb42140 = 0;
  DAT_14cb42148._0_2_ = 0;
  DAT_14cb42148._2_1_ = 0;
  DAT_14cb42148._4_4_ = 0xffffffff;
  DAT_14cb42110 = 0;
  DAT_14cb42118._0_2_ = 0;
  DAT_14cb42118._2_1_ = 0;
  DAT_14cb42118._4_4_ = 0xffffffff;
  DAT_14cb42180 = 0;
  DAT_14cb42188._0_2_ = 0;
  DAT_14cb42188._2_1_ = 0;
  DAT_14cb42188._4_4_ = 0xffffffff;
  DAT_14cb42130 = 0;
  DAT_14cb42138 = 0;
  DAT_14cb4213a = 0;
  _DAT_14cb4213c = 0xffffffff;
  DAT_14cb42190 = 0;
  DAT_14cb42198 = 0;
  DAT_14cb4219a = 0;
  _DAT_14cb4219c = 0xffffffff;
  DAT_14cb42100 = 0;
  DAT_14cb42108 = 0;
  DAT_14cb4210a = 0;
  _DAT_14cb4210c = 0xffffffff;
  DAT_14cb42120 = 0;
  DAT_14cb42128 = 0;
  DAT_14cb4212a = 0;
  _DAT_14cb4212c = 0xffffffff;
  DAT_14cb42150 = 0;
  DAT_14cb42158 = 0;
  DAT_14cb4215a = 0;
  _DAT_14cb4215c = 0xffffffff;
  DAT_14cb42170 = 0;
  DAT_14cb42178 = 0;
  DAT_14cb4217a = 0;
  _DAT_14cb4217c = 0xffffffff;
  DAT_14cb41380 = 0;
  DAT_14cb41388 = 0;
  DAT_14cb4138a = 0;
  _DAT_14cb4138c = 0xffffffff;
  _DAT_14cb41390 = 0;
  _DAT_14cb41398 = 0;
  DAT_14cb4139a = 0;
  _DAT_14cb4139c = 0xffffffff;
  DAT_14cb413b0 = 0;
  DAT_14cb413b8 = 0;
  DAT_14cb413ba = 0;
  _DAT_14cb413bc = 0xffffffff;
  DAT_14cb413c0 = 0;
  DAT_14cb413c8 = 0;
  DAT_14cb413ca = 0;
  _DAT_14cb413cc = 0xffffffff;
  _DAT_14cb413a0 = 0;
  _DAT_14cb413a8 = 0;
  DAT_14cb413aa = 0;
  _DAT_14cb413ac = 0xffffffff;
  _DAT_14cb41360 = 0;
  _DAT_14cb41368 = 0;
  DAT_14cb4136a = 0;
  _DAT_14cb4136c = 0xffffffff;
  _DAT_14cb3ee20 = 0;
  _DAT_14cb3ee28 = 0;
  DAT_14cb3ee00 = 0;
  _DAT_14cb3ee08 = 0;
  _DAT_14cb3ee2c = 0xffffffff00000080;
  DAT_14cb3ee34 = 0;
  DAT_14cb3ee40 = 0;
  DAT_14cb3ee48 = 0;
  atexit(FUN_143a9a629);
  DAT_14cb3ee50 = 0;
  _DAT_14cb3ee58 = 0;
  atexit((_func_5014 *)&LAB_143a9a658);
  _DAT_14cb3ee80 = 0;
  _DAT_14cb3ee88 = 0;
  _DAT_14cb3ee60 = 0;
  uRam000000014cb3ee68 = 0;
  _DAT_14cb3ee8c = 0xffffffff00000080;
  _DAT_14cb3ee94 = 0;
  DAT_14cb3eea0 = 0;
  _DAT_14cb3eea8 = 0;
  atexit(FUN_143a9a669);
  _DAT_14cb3eed0 = 0;
  _DAT_14cb3eed8 = 0;
  _DAT_14cb3eeb0 = 0;
  uRam000000014cb3eeb8 = 0;
  _DAT_14cb3eedc = 0xffffffff00000080;
  _DAT_14cb3eee4 = 0;
  DAT_14cb3eef0 = 0;
  _DAT_14cb3eef8 = 0;
  atexit(FUN_143a9a698);
  _DAT_14cb3ef20 = 0;
  _DAT_14cb3ef28 = 0;
  _DAT_14cb3ef00 = 0;
  uRam000000014cb3ef08 = 0;
  _DAT_14cb3ef2c = 0xffffffff00000080;
  _DAT_14cb3ef34 = 0;
  DAT_14cb3ef40 = 0;
  _DAT_14cb3ef48 = 0;
  atexit(FUN_143a9a6c7);
  _DAT_14cb3ef70 = 0;
  _DAT_14cb3ef78 = 0;
  _DAT_14cb3ef50 = 0;
  uRam000000014cb3ef58 = 0;
  _DAT_14cb3ef7c = 0xffffffff00000080;
  _DAT_14cb3ef84 = 0;
  DAT_14cb3ef90 = 0;
  _DAT_14cb3ef98 = 0;
  atexit(FUN_143a9a6f6);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aa2f94 FUN_143aa2f94 body=376 status=ok
// SIG undefined FUN_143aa2f94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa2f94(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar2 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar2;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar2 = &PTR_FUN_14ae014a0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = &PTR_LAB_14ae02690;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(byte *)(puVar2 + 0x18) = *(byte *)(puVar2 + 0x18) | 0xf;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
  puVar2[0x19] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x1a));
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    _DAT_00000048 = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
    *(uint *)(puVar2 + 9) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x4c) = iVar3;
  return;
}



// FUNCTION 143aa310c FUN_143aa310c body=1102 status=ok
// SIG undefined FUN_143aa310c(void)

void FUN_143aa310c(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint local_64;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_2 == param_3) ||
     (puVar6 = (uint *)(**(code **)(*param_1 + 0x58))(param_1,param_2,0), puVar6 == (uint *)0x0))
  goto LAB_143aa3309;
  uVar1 = *puVar6;
  uVar13 = (ulonglong)uVar1;
  if (uVar13 == 0xffffffff) goto LAB_143aa3309;
  local_58 = (undefined4)param_2[1];
  local_50 = 0;
  uStack_48 = 0;
  local_b8 = &local_64;
  local_64 = 0xffffffff;
  local_60 = param_3;
  cVar4 = (**(code **)(*param_1 + 0x10))(param_1,&local_60,0,0);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FUN_144741050();
    if (*(short *)((longlong)plVar7 + 0xc) == -1) {
      if (*plVar7 == 0) {
LAB_143aa354d:
        uVar5 = 0;
      }
      else {
        lVar12 = DAT_14cb420c0;
        if ((short)plVar7[1] == 3) goto LAB_143aa33f2;
        if ((short)plVar7[1] == 1) goto LAB_143aa354d;
        lVar11 = FUN_1449e2fb2();
        lVar9 = *plVar7;
        if (lVar9 == 0) {
LAB_143aa3527:
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if ((lVar11 != 0) && (lVar2 = *(longlong *)(lVar9 + 0x10), lVar2 != 0)) {
            if (*(int *)(lVar2 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_143aa3527;
            lVar12 = 0;
            if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30) {
              lVar12 = lVar9;
            }
          }
        }
LAB_143aa33f2:
        sVar3 = (short)*(undefined4 *)(lVar12 + 0x5c);
        uVar5 = -sVar3 & (sVar3 + (short)*(undefined4 *)(lVar12 + 0x58)) - 1U;
      }
      *(ushort *)((longlong)plVar7 + 0xc) = uVar5;
    }
    uVar8 = FUN_144741050(param_2 + 1);
    cVar4 = FUN_14487ac36(uVar8);
    if (cVar4 == '\0') {
      plVar7 = (longlong *)FUN_144741050(param_2 + 1);
      if ((short)plVar7[1] == 3) {
        lVar12 = DAT_14cb420c0;
        if (DAT_14cb420c0 != 0) {
LAB_143aa3262:
          if (DAT_14c927740 == 0) {
            local_80 = &local_40;
            local_40 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_146856450;
            local_90 = FUN_1427b121c;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000021;
            local_b0 = 8;
            local_b8 = (uint *)CONCAT44(local_b8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            if (DAT_14c927740 == 0) goto LAB_143aa328e;
          }
          if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
              DAT_14c927740 + 0x30)) {
            lVar12 = (longlong)(int)local_64;
            if (((int)uVar1 < 0) || ((int)param_1[9] <= (int)uVar1)) {
              lVar9 = param_1[8];
              lVar11 = 0;
            }
            else {
              lVar9 = param_1[8];
              lVar11 = *(longlong *)(lVar9 + uVar13 * 8);
              if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar11);
              }
            }
            *(longlong *)(lVar9 + lVar12 * 8) = lVar11;
            uVar10 = 4;
            goto LAB_143aa32dd;
          }
        }
      }
      else if (*plVar7 != 0) {
        lVar9 = FUN_1449e2fb2();
        lVar12 = *plVar7;
        if ((((lVar12 != 0) && (lVar9 != 0)) && (lVar11 = *(longlong *)(lVar12 + 0x10), lVar11 != 0)
            ) && ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar11 + 0x38) &&
                  (*(longlong *)
                    (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                   lVar9 + 0x30)))) goto LAB_143aa3262;
      }
LAB_143aa328e:
      plVar7 = (longlong *)FUN_144741050();
      uVar5 = *(ushort *)((longlong)plVar7 + 0xc);
      if (uVar5 == 0xffff) {
        if (*plVar7 == 0) {
LAB_143aa3554:
          uVar5 = 0;
        }
        else {
          lVar12 = DAT_14cb420c0;
          if ((short)plVar7[1] == 3) goto LAB_143aa346c;
          if ((short)plVar7[1] == 1) goto LAB_143aa3554;
          lVar11 = FUN_1449e2fb2();
          lVar9 = *plVar7;
          if (lVar9 == 0) {
LAB_143aa353a:
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            if ((lVar11 != 0) && (lVar2 = *(longlong *)(lVar9 + 0x10), lVar2 != 0)) {
              if (*(int *)(lVar2 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_143aa353a;
              lVar12 = 0;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                  == lVar11 + 0x30) {
                lVar12 = lVar9;
              }
            }
          }
LAB_143aa346c:
          sVar3 = (short)*(undefined4 *)(lVar12 + 0x5c);
          uVar5 = -sVar3 & (sVar3 + (short)*(undefined4 *)(lVar12 + 0x58)) - 1U;
        }
        *(ushort *)((longlong)plVar7 + 0xc) = uVar5;
      }
      uVar10 = 1;
      if (local_64 != uVar1) {
        memcpy((void *)((longlong)(int)local_64 + param_1[4]),
               (void *)((longlong)(int)uVar1 + param_1[4]),(longlong)(short)uVar5);
      }
    }
    else {
      lVar12 = (longlong)(int)local_64;
      if (((int)uVar1 < 0) || ((int)param_1[7] <= (int)uVar1)) {
        lVar9 = param_1[6];
        lVar11 = 0;
      }
      else {
        lVar9 = param_1[6];
        lVar11 = *(longlong *)(lVar9 + uVar13 * 8);
        if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar11);
        }
      }
      *(longlong *)(lVar9 + lVar12 * 8) = lVar11;
      uVar10 = 2;
    }
LAB_143aa32dd:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    FUN_140219f72(param_1);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_143aa3309:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aa355c FUN_143aa355c body=204 status=ok
// SIG undefined FUN_143aa355c(void)

void FUN_143aa355c(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)*param_1)(param_1,&local_60);
  if ((longlong)local_58 != 0) {
    puVar3 = local_60;
    do {
      local_78 = *(undefined4 *)(puVar3 + 1);
      local_80 = *puVar3;
      local_70 = (void *)0x0;
      uStack_68 = 0;
      iVar1 = *(int *)((longlong)puVar3 + 0xc);
      lVar2 = param_1[4];
      FUN_140121138(&local_80);
      memcpy(local_70,(void *)(iVar1 + lVar2),(longlong)(int)uStack_68);
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 5;
    } while (puVar3 != local_60 + (longlong)local_58 * 5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aa362a FUN_143aa362a body=2232 status=ok
// SIG undefined FUN_143aa362a(void)

int FUN_143aa362a(undefined8 *param_1,byte param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  char cVar6;
  ushort uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  uint local_f0;
  undefined8 local_e8;
  wchar_t *pwStack_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  byte local_99;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  int local_80;
  code *local_78;
  undefined1 local_70 [8];
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)*param_1)();
  if ((longlong)local_80 == 0) {
    iVar17 = 0;
  }
  else {
    local_90 = param_1 + 8;
    plVar1 = param_1 + 6;
    lVar15 = (longlong)local_80 * 0x28;
    lVar16 = local_88 + 8;
    local_99 = param_2 ^ 1;
    iVar17 = 0;
    do {
      if (*(longlong *)(lVar16 + -8) != 0) {
        iVar2 = *(int *)(lVar16 + 4);
        plVar8 = (longlong *)FUN_144741050(lVar16);
        if (*plVar8 != 0) {
          uVar9 = FUN_144741050(lVar16);
          cVar6 = FUN_14487ac36(uVar9);
          if (cVar6 == '\0') {
            plVar8 = (longlong *)FUN_144741050(lVar16);
            if ((short)plVar8[1] == 3) {
              lVar13 = DAT_14cb420c0;
              if (DAT_14cb420c0 != 0) {
LAB_143aa38a1:
                if (DAT_14c927740 == 0) {
                  local_68 = FUN_1449e2820;
                  local_b0 = FUN_14081d0ea;
                  local_b8 = FUN_14081d0ea;
                  local_c0 = &local_68;
                  local_c8 = &LAB_146856450;
                  local_d0 = FUN_1427b121c;
                  local_d8 = L"Engine";
                  pwStack_e0 = (wchar_t *)0x0;
                  local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
                  local_f0 = 8;
                  local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,0x28);
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  if (DAT_14c927740 == 0) goto LAB_143aa38c8;
                }
                if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
                    == DAT_14c927740 + 0x30)) {
                  iVar3 = *(int *)(param_1 + 9);
                  if (iVar3 <= iVar2) {
                    uVar14 = (iVar2 - iVar3) + 1;
                    *(int *)(param_1 + 9) = iVar2 + 1;
                    if ((uint)(*(int *)((longlong)param_1 + 0x4c) - iVar3) < uVar14) {
                      FUN_140845902(local_90);
                    }
                    memset((void *)((longlong)iVar3 * 8 + *local_90),0,(longlong)(int)uVar14 << 3);
                  }
                  goto LAB_143aa38ec;
                }
              }
            }
            else {
              lVar13 = *plVar8;
              if (lVar13 != 0) {
                if (DAT_14c948f88 == 0) {
                  local_78 = (code *)&DAT_1427db2a2;
                  lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c948f88 = lVar13;
                  FUN_1446f470e(local_70,L"Struct",1);
                  local_c0 = &local_78;
                  local_c8 = &LAB_146891313;
                  local_d0 = FUN_146272f63;
                  pwStack_e0 = L"Engine";
                  local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
                  local_e8 = 8;
                  local_f0 = 0x10000020;
                  local_f8._0_4_ = 8;
                  FUN_14574b4b2(lVar13);
                  local_98 = DAT_14c927740;
                  DAT_14c948f88 = lVar13;
                  if (DAT_14c927740 == 0) {
                    local_68 = FUN_1449e2820;
                    local_b0 = FUN_14081d0ea;
                    local_b8 = FUN_14081d0ea;
                    local_c0 = &local_68;
                    local_c8 = &LAB_146856450;
                    local_d0 = FUN_1427b121c;
                    local_d8 = L"Engine";
                    pwStack_e0 = (wchar_t *)0x0;
                    local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
                    local_f0 = 8;
                    local_f8._0_4_ = 0x28;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  }
                  lVar13 = DAT_14c948f88;
                  local_98 = DAT_14c927740;
                  uVar9 = FUN_1400163b0();
                  local_f8 = L"Struct";
                  FUN_14574b446(uVar9,lVar13,local_98,L"/Script/CoreUObject");
                  lVar13 = *plVar8;
                  if (lVar13 == 0) goto LAB_143aa38c8;
                }
                if ((((DAT_14c948f88 != 0) && (lVar11 = *(longlong *)(lVar13 + 0x10), lVar11 != 0))
                    && (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
                    == DAT_14c948f88 + 0x30)) goto LAB_143aa38a1;
              }
            }
LAB_143aa38c8:
            plVar8 = (longlong *)FUN_144741050(lVar16);
            uVar7 = *(ushort *)((longlong)plVar8 + 0xc);
            if (uVar7 == 0xffff) {
              lVar13 = *plVar8;
              if (lVar13 == 0) {
LAB_143aa3cd7:
                uVar7 = 0;
              }
              else {
                lVar11 = DAT_14cb420c0;
                if ((short)plVar8[1] == 3) goto LAB_143aa39e8;
                if ((short)plVar8[1] == 1) goto LAB_143aa3cd7;
                if (DAT_14c948f88 == 0) {
                  local_78 = (code *)&DAT_1427db2a2;
                  lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c948f88 = lVar13;
                  FUN_1446f470e(local_70,L"Struct",1);
                  local_c0 = &local_78;
                  local_c8 = &LAB_146891313;
                  local_d0 = FUN_146272f63;
                  pwStack_e0 = L"Engine";
                  local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
                  local_e8 = 8;
                  local_f0 = 0x10000020;
                  local_f8._0_4_ = 8;
                  FUN_14574b4b2(lVar13);
                  local_98 = DAT_14c927740;
                  DAT_14c948f88 = lVar13;
                  if (DAT_14c927740 == 0) {
                    local_68 = FUN_1449e2820;
                    local_b0 = FUN_14081d0ea;
                    local_b8 = FUN_14081d0ea;
                    local_c0 = &local_68;
                    local_c8 = &LAB_146856450;
                    local_d0 = FUN_1427b121c;
                    local_d8 = L"Engine";
                    pwStack_e0 = (wchar_t *)0x0;
                    local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
                    local_f0 = 8;
                    local_f8._0_4_ = 0x28;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  }
                  lVar13 = DAT_14c948f88;
                  local_98 = DAT_14c927740;
                  uVar9 = FUN_1400163b0();
                  local_f8 = L"Struct";
                  FUN_14574b446(uVar9,lVar13,local_98,L"/Script/CoreUObject");
                  lVar13 = *plVar8;
                  if (lVar13 != 0) goto LAB_143aa39b0;
LAB_143aa3cd0:
                  lVar11 = 0;
                }
                else {
LAB_143aa39b0:
                  if (DAT_14c948f88 == 0) goto LAB_143aa3cd0;
                  lVar4 = *(longlong *)(lVar13 + 0x10);
                  lVar11 = 0;
                  if (lVar4 != 0) {
                    if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_143aa3cd0;
                    lVar11 = lVar13;
                    if (*(longlong *)
                         (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8
                         ) != DAT_14c948f88 + 0x30) {
                      lVar11 = 0;
                    }
                  }
                }
LAB_143aa39e8:
                sVar5 = (short)*(undefined4 *)(lVar11 + 0x5c);
                uVar7 = -sVar5 & ((short)*(undefined4 *)(lVar11 + 0x58) + sVar5) - 1U;
              }
              *(ushort *)((longlong)plVar8 + 0xc) = uVar7;
            }
            if (iVar17 < (short)uVar7 + iVar2) {
              iVar17 = (short)uVar7 + iVar2;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 7);
            if (iVar3 <= iVar2) {
              uVar14 = (iVar2 - iVar3) + 1;
              *(int *)(param_1 + 7) = iVar2 + 1;
              if ((uint)(*(int *)((longlong)param_1 + 0x3c) - iVar3) < uVar14) {
                FUN_14183529c(plVar1);
              }
              memset((void *)((longlong)iVar3 * 8 + *plVar1),0,(longlong)(int)uVar14 << 3);
            }
            if (((*(longlong *)(*plVar1 + (longlong)iVar2 * 8) == 0 && local_99 == 0) &&
                (*(int *)((longlong)param_1 + 0xc) != 0)) &&
               ((uVar14 = *(uint *)(param_1 + 1), -1 < (int)uVar14 &&
                (((((int)uVar14 < DAT_14c9647dc &&
                   (lVar13 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8),
                   lVar13 != 0)) && (*(int *)(lVar13 + 0x10) == *(int *)((longlong)param_1 + 0xc)))
                 && ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))))) {
              puVar10 = (undefined8 *)FUN_144741050(lVar16);
              uVar12 = 0;
              uVar9 = 0;
              if (*(short *)(puVar10 + 1) == 1) {
                uVar9 = *puVar10;
              }
              if (*(int *)((longlong)param_1 + 0xc) != 0) {
                uVar14 = *(uint *)(param_1 + 1);
                if ((int)uVar14 < 0) {
LAB_143aa3975:
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  if ((int)uVar14 < DAT_14c9647dc) {
                    puVar10 = (undefined8 *)
                              ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                    if (((puVar10 == (undefined8 *)0x0) ||
                        (*(int *)(puVar10 + 2) != *(int *)((longlong)param_1 + 0xc))) ||
                       ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143aa3975;
                    uVar12 = *puVar10;
                  }
                }
              }
              local_e8 = 0;
              pwStack_e0 = (wchar_t *)0x0;
              local_f0 = local_f0 & 0xffffff00;
              local_f8 = (wchar_t *)0x0;
              lVar11 = FUN_141821fc0(uVar12,uVar9,0,9);
              lVar13 = *plVar1;
              if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar11);
              }
              *(longlong *)(lVar13 + (longlong)iVar2 * 8) = lVar11;
            }
          }
        }
      }
LAB_143aa38ec:
      lVar16 = lVar16 + 0x28;
      lVar15 = lVar15 + -0x28;
    } while (lVar15 != 0);
  }
  iVar2 = *(int *)(param_1 + 5);
  if (iVar2 < iVar17) {
    *(int *)(param_1 + 5) = iVar17;
    if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar2) < (uint)(iVar17 - iVar2)) {
      FUN_1447403be(param_1 + 4);
    }
    memset((void *)((longlong)iVar2 + param_1[4]),0,(longlong)(iVar17 - iVar2));
  }
  iVar17 = *(int *)((longlong)param_1 + 0xc);
  if ((((iVar17 != 0) && (uVar14 = *(uint *)(param_1 + 1), -1 < (int)uVar14)) &&
      ((int)uVar14 < DAT_14c9647dc)) &&
     ((lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar15 != 0 &&
      (*(int *)(lVar15 + 0x10) == iVar17)))) {
    iVar17 = *(int *)(lVar15 + 8);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar17;
}



// FUNCTION 143aa3ee4 FUN_143aa3ee4 body=215 status=ok
// SIG undefined FUN_143aa3ee4(void)

void FUN_143aa3ee4(longlong param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1449394d8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_141835560(param_1 + 0x10,0);
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_144893a1c(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1464784ea(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_140c6998c(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_1481d7334(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (param_2 != '\0') {
    FUN_1447b41aa(param_1);
    return;
  }
  return;
}



// FUNCTION 143aa3fee FUN_143aa3fee body=150 status=ok
// SIG undefined FUN_143aa3fee(void)

longlong FUN_143aa3fee(undefined8 *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)*param_1)(param_1,&local_38);
  if ((longlong)local_30 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = local_38 + 8;
    lVar5 = (longlong)local_30 * 0x28;
    lVar4 = 0;
    do {
      if (*(int *)(lVar3 + 4) == param_2) {
        uVar2 = FUN_144741050(lVar3);
        cVar1 = FUN_14487ac36(uVar2);
        if (cVar1 != '\0') {
          lVar4 = lVar3 + -8;
          break;
        }
      }
      lVar3 = lVar3 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 143aa4086 FUN_143aa4086 body=1240 status=ok
// SIG undefined FUN_143aa4086(void)

void FUN_143aa4086(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar15 = param_3 + 8;
  FUN_144741050(lVar15);
  plVar7 = (longlong *)FUN_144741050(param_4 + 8);
  if ((*plVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  piVar8 = (int *)(**(code **)(*param_2 + 0x58))(param_2,param_4,0);
  if (piVar8 == (int *)0x0) {
    iVar14 = -1;
  }
  else {
    iVar14 = *piVar8;
  }
  piVar8 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_3,0);
  if (((piVar8 == (int *)0x0) || (iVar14 == -1)) || (iVar1 = *piVar8, iVar1 == -1))
  goto LAB_143aa43ed;
  lVar16 = (longlong)iVar1;
  uVar9 = FUN_144741050(lVar15);
  cVar5 = FUN_14487ac36(uVar9);
  if (cVar5 != '\0') {
    lVar11 = *(longlong *)(param_2[6] + (longlong)iVar14 * 8);
    if (lVar11 == 0) {
      cVar5 = FUN_14493c216(param_2 + 1,0);
      if (cVar5 != '\0') goto LAB_143aa43ed;
      puVar10 = (undefined8 *)FUN_144741050(lVar15);
      uVar13 = 0;
      uVar9 = 0;
      if (*(short *)(puVar10 + 1) == 1) {
        uVar9 = *puVar10;
      }
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        uVar2 = *(uint *)(param_2 + 1);
        uVar13 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar10 == (undefined8 *)0x0) ||
             ((*(int *)(puVar10 + 2) != *(int *)((longlong)param_2 + 0xc) ||
              ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) {
            uVar13 = 0;
          }
          else {
            uVar13 = *puVar10;
          }
        }
      }
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      local_a8 = 0;
      lVar11 = FUN_141821fc0(uVar13,uVar9,0,9);
      lVar15 = param_2[6];
      if ((lVar11 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar11);
      }
      *(longlong *)(lVar15 + (longlong)iVar14 * 8) = lVar11;
    }
    plVar7 = *(longlong **)(param_1[6] + lVar16 * 8);
    (**(code **)(*plVar7 + 0x438))(plVar7,lVar11);
    *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
    goto LAB_143aa43ed;
  }
  plVar7 = (longlong *)FUN_144741050(lVar15);
  if ((short)plVar7[1] == 3) {
    lVar11 = DAT_14cb420c0;
    if (DAT_14cb420c0 != 0) {
LAB_143aa428f:
      if (DAT_14c927740 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_146856450;
        local_80 = FUN_1427b121c;
        local_88 = L"Engine";
        uStack_90 = 0;
        local_98 = CONCAT44(local_98._4_4_,0x10000021);
        local_a0 = 8;
        local_a8 = CONCAT44(local_a8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        if (DAT_14c927740 == 0) goto LAB_143aa42bd;
      }
      if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
          == DAT_14c927740 + 0x30)) {
        if ((iVar1 < 0) || ((int)param_1[9] <= iVar1)) {
          lVar16 = param_2[8];
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)(param_1[8] + lVar16 * 8);
          lVar16 = param_2[8];
          if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar15);
          }
        }
        *(longlong *)(lVar16 + (longlong)iVar14 * 8) = lVar15;
        *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
        goto LAB_143aa43ed;
      }
    }
  }
  else if (*plVar7 != 0) {
    lVar12 = FUN_1449e2fb2();
    lVar11 = *plVar7;
    if ((((lVar11 != 0) && (lVar12 != 0)) && (lVar3 = *(longlong *)(lVar11 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
         lVar12 + 0x30)))) goto LAB_143aa428f;
  }
LAB_143aa42bd:
  local_58 = lVar16;
  plVar7 = (longlong *)FUN_144741050(lVar15);
  lVar15 = DAT_14cb42130;
  if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42130);
  }
  if (((*plVar7 == lVar15) && ((short)plVar7[1] == DAT_14cb42138)) &&
     (*(char *)((longlong)plVar7 + 10) == DAT_14cb4213a)) {
    (**(code **)(*param_1 + 0x68))(param_1,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  plVar7 = (longlong *)FUN_144741050();
  uVar6 = *(ushort *)((longlong)plVar7 + 0xc);
  if (uVar6 == 0xffff) {
    if (*plVar7 == 0) {
LAB_143aa457d:
      uVar6 = 0;
    }
    else {
      lVar15 = DAT_14cb420c0;
      if ((short)plVar7[1] == 3) goto LAB_143aa44b2;
      if ((short)plVar7[1] == 1) goto LAB_143aa457d;
      lVar11 = FUN_1449e2fb2();
      lVar16 = *plVar7;
      if (lVar16 == 0) {
LAB_143aa456a:
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if ((lVar11 != 0) && (lVar12 = *(longlong *)(lVar16 + 0x10), lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_143aa456a;
          lVar15 = 0;
          if (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30) {
            lVar15 = lVar16;
          }
        }
      }
LAB_143aa44b2:
      sVar4 = (short)*(undefined4 *)(lVar15 + 0x5c);
      uVar6 = -sVar4 & (sVar4 + (short)*(undefined4 *)(lVar15 + 0x58)) - 1U;
    }
    *(ushort *)((longlong)plVar7 + 0xc) = uVar6;
  }
  if ((void *)((longlong)iVar14 + param_2[4]) != (void *)(param_1[4] + local_58)) {
    memcpy((void *)((longlong)iVar14 + param_2[4]),(void *)(param_1[4] + local_58),
           (longlong)(short)uVar6);
  }
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
LAB_143aa43ed:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aa458f FUN_143aa458f body=55 status=ok
// SIG undefined FUN_143aa458f(void)

void FUN_143aa458f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb423b8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb423b8 = FUN_14171c317(FUN_146477208,uVar1,L"ENiagaraPlatformSelectionState");
  }
  return;
}



// FUNCTION 143aa45c6 FUN_143aa45c6 body=55 status=ok
// SIG undefined FUN_143aa45c6(void)

void FUN_143aa45c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb423e8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb423e8 = FUN_14171c317(FUN_1464772ce,uVar1,L"ENiagaraPlatformSetState");
  }
  return;
}



// FUNCTION 143aa45fd FUN_143aa45fd body=55 status=ok
// SIG undefined FUN_143aa45fd(void)

void FUN_143aa45fd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42430 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42430 = FUN_14171c317(FUN_14647742a,uVar1,L"ENiagaraCVarConditionResponse");
  }
  return;
}



// FUNCTION 143aa4634 FUN_143aa4634 body=55 status=ok
// SIG undefined FUN_143aa4634(void)

void FUN_143aa4634(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42460 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42460 = FUN_14171c317(FUN_1464774f2,uVar1,L"ENiagaraDeviceProfileRedirectMode");
  }
  return;
}



// FUNCTION 143aa467c FUN_143aa467c body=41 status=ok
// SIG undefined FUN_143aa467c(void)

void FUN_143aa467c(void)

{
  DAT_14cb424f8 = 0;
  if (DAT_14cb424f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d715ae();
  return;
}



// FUNCTION 143aa46b3 FUN_143aa46b3 body=69 status=ok
// SIG undefined FUN_143aa46b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa46b3(void)

{
  _DAT_14cb42530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa46f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42538,1);
  return;
}



// FUNCTION 143aa46f8 FUN_143aa46f8 body=69 status=ok
// SIG undefined FUN_143aa46f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa46f8(void)

{
  _DAT_14cb42540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa473a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42548,1);
  return;
}



// FUNCTION 143aa473d FUN_143aa473d body=69 status=ok
// SIG undefined FUN_143aa473d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa473d(void)

{
  _DAT_14cb42550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa477f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42558,1);
  return;
}



// FUNCTION 143aa4782 FUN_143aa4782 body=69 status=ok
// SIG undefined FUN_143aa4782(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4782(void)

{
  _DAT_14cb42560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa47c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42568,1);
  return;
}



// FUNCTION 143aa47c7 FUN_143aa47c7 body=69 status=ok
// SIG undefined FUN_143aa47c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa47c7(void)

{
  _DAT_14cb42588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa4809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42590,1);
  return;
}



// FUNCTION 143aa480c FUN_143aa480c body=69 status=ok
// SIG undefined FUN_143aa480c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa480c(void)

{
  _DAT_14cb42598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa484e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb425a0,1);
  return;
}



// FUNCTION 143aa4851 FUN_143aa4851 body=69 status=ok
// SIG undefined FUN_143aa4851(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4851(void)

{
  _DAT_14cb425b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa4893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb425b8,1);
  return;
}



// FUNCTION 143aa4896 FUN_143aa4896 body=69 status=ok
// SIG undefined FUN_143aa4896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4896(void)

{
  _DAT_14cb425c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa48d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb425c8,1);
  return;
}



// FUNCTION 143aa48db FUN_143aa48db body=69 status=ok
// SIG undefined FUN_143aa48db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa48db(void)

{
  _DAT_14cb425d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa491d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb425e0,1);
  return;
}



// FUNCTION 143aa4920 FUN_143aa4920 body=195 status=ok
// SIG undefined FUN_143aa4920(void)

byte FUN_143aa4920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  
  plVar3 = (longlong *)param_1[4];
  if (((plVar3 == (longlong *)0x0) || (*(uint *)(param_1 + 5) <= DAT_14cb425e8)) ||
     (*(uint *)(param_1 + 5) == 0xffffffff)) {
    *(undefined4 *)(param_1 + 5) = DAT_14c75b13c;
    plVar3 = (longlong *)FUN_1481d0502(*param_1);
    param_1[4] = plVar3;
    if (plVar3 != (longlong *)0x0) goto LAB_143aa4951;
LAB_143aa4978:
    bVar2 = 0;
    bVar4 = 0;
  }
  else {
LAB_143aa4951:
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        if (cVar1 == '\0') goto LAB_143aa4978;
        bVar2 = FUN_1481d0b1c(param_1,param_2,param_3,param_4);
      }
      else {
        bVar2 = FUN_1481d0a56(param_1,param_2,param_3,param_4);
      }
    }
    else {
      bVar2 = FUN_1481d09b6(param_1,param_2,param_3,param_4);
    }
    bVar4 = 1;
  }
  return bVar2 & bVar4;
}



// FUNCTION 143aa49e4 FUN_143aa49e4 body=486 status=ok
// SIG undefined FUN_143aa49e4(void)

void FUN_143aa49e4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  DAT_14c762948 = 0xffffffff;
  DAT_14cb425e8 = DAT_14c75b13c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  local_50 = 0x100000000;
  local_48 = &DAT_14cb424c0;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (DAT_14cb424d8 != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_90 = &DAT_14cb424b0;
  local_68 = &DAT_14cb424b0;
  local_60 = &DAT_14cb424b0;
  local_58 = 0;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      lVar2 = (longlong)iStack_74 * 0x20;
      local_50 = *(undefined8 *)(*local_90 + lVar2);
      lVar1 = *local_90;
      if (*(longlong **)(lVar1 + 8 + lVar2) == param_1) {
        uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
        if (*(longlong *)(lVar1 + lVar2 + 0x10) != 0) {
          FUN_14480f766(uVar3);
        }
        FUN_140721fbe(&DAT_14cb424a0,&local_50);
        FUN_1481d7720(local_68,iStack_74);
        local_58 = CONCAT11(local_58._1_1_,1);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_1481d74fe(local_60,*(int *)(local_60 + 1) - *(int *)((longlong)local_60 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aa4bcb FUN_143aa4bcb body=55 status=ok
// SIG undefined FUN_143aa4bcb(void)

void FUN_143aa4bcb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42728 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42728 = FUN_14171c317(FUN_146477adb,uVar1,L"ENiagaraPreviewGridResetMode");
  }
  return;
}



// FUNCTION 143aa4c02 FUN_143aa4c02 body=69 status=ok
// SIG undefined FUN_143aa4c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4c02(void)

{
  _DAT_14cb42770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa4c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42778,1);
  return;
}



// FUNCTION 143aa4c47 FUN_143aa4c47 body=47 status=ok
// SIG undefined FUN_143aa4c47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4c47(void)

{
  _DAT_14cb42780 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42780);
  FUN_1464785b2(&DAT_14cb42780);
  return;
}



// FUNCTION 143aa4c76 FUN_143aa4c76 body=47 status=ok
// SIG undefined FUN_143aa4c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4c76(void)

{
  _DAT_14cb427c0 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb427c0);
  FUN_1464785b2(&DAT_14cb427c0);
  return;
}



// FUNCTION 143aa4ca5 FUN_143aa4ca5 body=47 status=ok
// SIG undefined FUN_143aa4ca5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4ca5(void)

{
  _DAT_14cb42800 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42800);
  FUN_1464785b2(&DAT_14cb42800);
  return;
}



// FUNCTION 143aa4cd4 FUN_143aa4cd4 body=47 status=ok
// SIG undefined FUN_143aa4cd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4cd4(void)

{
  _DAT_14cb42840 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42840);
  FUN_1464785b2(&DAT_14cb42840);
  return;
}



// FUNCTION 143aa4d03 FUN_143aa4d03 body=47 status=ok
// SIG undefined FUN_143aa4d03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4d03(void)

{
  _DAT_14cb42880 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42880);
  FUN_1464785b2(&DAT_14cb42880);
  return;
}



// FUNCTION 143aa4d32 FUN_143aa4d32 body=47 status=ok
// SIG undefined FUN_143aa4d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4d32(void)

{
  _DAT_14cb428c0 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb428c0);
  FUN_1464785b2(&DAT_14cb428c0);
  return;
}



// FUNCTION 143aa4d61 FUN_143aa4d61 body=47 status=ok
// SIG undefined FUN_143aa4d61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4d61(void)

{
  _DAT_14cb42900 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42900);
  FUN_1464785b2(&DAT_14cb42900);
  return;
}



// FUNCTION 143aa4d90 FUN_143aa4d90 body=47 status=ok
// SIG undefined FUN_143aa4d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4d90(void)

{
  _DAT_14cb42940 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42940);
  FUN_1464785b2(&DAT_14cb42940);
  return;
}



// FUNCTION 143aa4dbf FUN_143aa4dbf body=47 status=ok
// SIG undefined FUN_143aa4dbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa4dbf(void)

{
  _DAT_14cb42980 = &PTR_FUN_14ae0ead0;
  FUN_144725486(&DAT_14cb42980);
  FUN_1464785b2(&DAT_14cb42980);
  return;
}



// FUNCTION 143aa4dee FUN_143aa4dee body=864 status=ok
// SIG undefined FUN_143aa4dee(void)

uint FUN_143aa4dee(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_3;
  if ((*(char *)(param_1 + 4) == '\0') || (*(int *)(param_1 + 8) == -1)) {
    uVar5 = 0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x120);
    DVar7 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar7 = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar13 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = DVar7;
      if (bVar13) {
        DVar6 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar13) {
        TlsFree(DVar7);
        DVar7 = DVar6;
      }
    }
    pvVar8 = TlsGetValue(DVar7);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = (LPVOID)FUN_140036a08(&local_78);
      FUN_140fddf04(pvVar8);
      TlsSetValue(DVar7,pvVar8);
    }
    local_78 = (undefined8 *)((longlong)pvVar8 + 0x10);
    local_70 = *(undefined8 *)((longlong)pvVar8 + 0x10);
    local_68 = *(longlong *)((longlong)pvVar8 + 0x20);
    local_60 = '\0';
    local_58 = *(undefined8 *)((longlong)pvVar8 + 0x28);
    *(undefined8 ***)((longlong)pvVar8 + 0x28) = &local_78;
    *(int *)((longlong)pvVar8 + 0x30) = *(int *)((longlong)pvVar8 + 0x30) + 1;
    DVar7 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar7 = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar13 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = DVar7;
      if (bVar13) {
        DVar6 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar13) {
        TlsFree(DVar7);
        DVar7 = DVar6;
      }
    }
    pvVar8 = TlsGetValue(DVar7);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(pvVar8);
      TlsSetValue(DVar7,pvVar8);
    }
    puVar1 = (ulonglong *)((longlong)pvVar8 + 0x10);
    uVar12 = *(longlong *)((longlong)pvVar8 + 0x10) + 3U & 0xfffffffffffffffc;
    uVar11 = uVar12 + (longlong)iVar2 * 8;
    if (*(ulonglong *)((longlong)pvVar8 + 0x18) < uVar11) {
      lVar10 = (longlong)iVar2 * 8;
      FUN_140023dd8(puVar1,(uint)lVar10 | 4);
      uVar12 = *puVar1 + 3 & 0xfffffffffffffffc;
      uVar11 = lVar10 + uVar12;
    }
    *puVar1 = uVar11;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      uVar5 = FUN_1481d2d9a(param_1,param_2,uVar12);
    }
    else {
      uVar5 = FUN_1481d2ed2(param_1,param_2,uVar12);
    }
    if ((DAT_14c762954 == -1) || ((int)uVar5 <= DAT_14c762954)) {
      FUN_1481d81cc(uVar12,uVar5);
      if (0 < (int)uVar5) {
        uVar11 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar11 * 4) = *(undefined4 *)(uVar12 + 4 + uVar11 * 8);
          uVar11 = uVar11 + 1;
        } while (uVar5 != uVar11);
      }
    }
    else {
      DVar7 = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        DVar7 = TlsAlloc();
        DVar6 = 0xffffffff;
        LOCK();
        bVar13 = DAT_14c7585d0 != 0xffffffff;
        DVar4 = DVar7;
        if (bVar13) {
          DVar6 = DAT_14c7585d0;
          DVar4 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar4;
        UNLOCK();
        if (bVar13) {
          TlsFree(DVar7);
          DVar7 = DVar6;
        }
      }
      pvVar8 = TlsGetValue(DVar7);
      if (pvVar8 == (LPVOID)0x0) {
        pvVar8 = (LPVOID)FUN_140036a08(&local_49);
        FUN_140fddf04(pvVar8);
        TlsSetValue(DVar7,pvVar8);
      }
      puVar1 = (ulonglong *)((longlong)pvVar8 + 0x10);
      uVar9 = *(longlong *)((longlong)pvVar8 + 0x10) + 3U & 0xfffffffffffffffc;
      uVar11 = uVar9 + (longlong)(int)uVar5 * 8;
      if (*(ulonglong *)((longlong)pvVar8 + 0x18) < uVar11) {
        lVar10 = (longlong)(int)uVar5 * 8;
        FUN_140023dd8(puVar1,(uint)lVar10 | 4);
        uVar9 = *puVar1 + 3 & 0xfffffffffffffffc;
        uVar11 = lVar10 + uVar9;
      }
      *puVar1 = uVar11;
      FUN_1481d99c4(uVar9,uVar12,uVar5);
      if (0 < (int)uVar5) {
        uVar11 = 0;
        do {
          *(undefined4 *)(lVar3 + uVar11 * 4) = *(undefined4 *)(uVar9 + 4 + uVar11 * 8);
          uVar11 = uVar11 + 1;
        } while (uVar5 != uVar11);
      }
    }
    if (local_60 == '\0') {
      local_60 = '\x01';
      *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
      if (local_68 != local_78[2]) {
        FUN_14004673c();
      }
      *local_78 = local_70;
      local_78[3] = local_58;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143aa516d FUN_143aa516d body=69 status=ok
// SIG undefined FUN_143aa516d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa516d(void)

{
  _DAT_14cb429c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa51af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb429c8,1);
  return;
}



// FUNCTION 143aa51b2 FUN_143aa51b2 body=69 status=ok
// SIG undefined FUN_143aa51b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa51b2(void)

{
  _DAT_14cb429d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa51f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb429d8,1);
  return;
}



// FUNCTION 143aa51f8 FUN_143aa51f8 body=18153 status=ok
// SIG undefined FUN_143aa51f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa51f8(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  double dVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  double *pdVar22;
  uint *puVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  char cVar30;
  int iVar31;
  longlong lVar32;
  undefined *puVar33;
  uint uVar34;
  longlong lVar35;
  char cVar36;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auVar46 [12];
  float fVar47;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  longlong lVar49;
  undefined1 auVar48 [12];
  undefined1 in_XMM3 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_3f8 [32];
  wchar_t *local_3d8;
  undefined8 local_3d0;
  undefined *local_3c8;
  code *local_3c0;
  wchar_t *local_3b8;
  code *local_3b0;
  undefined1 *local_3a8;
  int *local_3a0;
  code *local_398;
  code *local_390;
  char local_37b;
  short local_37a;
  longlong local_378;
  char local_36b;
  byte local_36a;
  byte local_369;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong *local_348;
  undefined4 local_340;
  int local_33c;
  int local_338;
  uint local_334;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  int local_314;
  longlong *local_310;
  longlong *local_308;
  ulonglong local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_210;
  undefined4 uStack_20c;
  longlong local_200;
  int local_1f8 [2];
  double *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined2 uStack_198;
  byte bStack_196;
  undefined1 uStack_195;
  int iStack_194;
  undefined1 local_190 [8];
  undefined1 *local_188;
  int local_180;
  longlong *local_178;
  longlong local_168 [4];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  longlong local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 uStack_118;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  short sVar37;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  lVar32 = param_3[1];
  if ((((param_2 == 0 || lVar32 == 0) || (*(longlong *)(param_2 + 0x140) == 0)) ||
      (*(char *)(param_1 + 0xf4) == '\x01')) ||
     (((((*(int *)(lVar32 + 0x4c) == 0 || (uVar41 = *(uint *)(lVar32 + 0x48), (int)uVar41 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar41 ||
         ((plVar29 = (longlong *)
                     ((ulonglong)((uVar41 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8)),
          plVar29 == (longlong *)0x0 || ((int)plVar29[2] != *(int *)(lVar32 + 0x4c))))))) ||
       ((*(uint *)(plVar29 + 1) & 0x10200000) != 0)) ||
      ((local_330 = *plVar29, local_330 == 0 ||
       (lVar15 = (**(code **)(*param_3 + 0x68))(param_3), lVar15 == 0)))))) goto LAB_143aa9592;
  lVar16 = *(longlong *)(local_330 + 0xb0);
  local_2d0 = lVar15;
  local_2a0 = lVar32;
  if (lVar16 == 0) {
    lVar16 = FUN_1448abda6(local_330);
  }
  dVar2 = *(double *)(lVar16 + 0x6e0);
  lVar32 = param_3[2];
  local_320 = *(longlong *)(lVar32 + 0x78);
  uVar17 = FUN_144741050(param_2 + 0xf0);
  uVar19 = *(undefined8 *)(param_2 + 0xf4);
  FUN_144830b78(&uStack_1c0,uVar17);
  local_278._0_4_ = -NAN;
  FUN_140a6faac(&local_278,*(undefined8 *)(lVar32 + 8),uVar19);
  lVar15 = *(longlong *)(lVar32 + 0x78);
  local_369 = (float)local_278 != -NAN && lVar15 != 0;
  local_300 = 0;
  if ((float)local_278 != -NAN && lVar15 != 0) {
    local_2f0 = (ulonglong)(uint)((int)(float)local_278 * *(int *)(lVar15 + 300)) +
                *(longlong *)(lVar15 + 0x28);
    local_338 = *(int *)(lVar15 + 0x120);
  }
  else {
    local_338 = 0;
    local_2f0 = 0;
  }
  local_360 = lVar32;
  uVar17 = FUN_144741050(param_2 + 0x128);
  uVar19 = *(undefined8 *)(param_2 + 300);
  FUN_144830b78(&uStack_1c0,uVar17);
  lVar32 = local_360;
  local_278 = (code *)CONCAT44(local_278._4_4_,0xffffffff);
  FUN_140a6f82a(&local_278,*(undefined8 *)(local_360 + 8),uVar19);
  lVar16 = local_320;
  lVar15 = local_360;
  lVar32 = *(longlong *)(lVar32 + 0x78);
  local_36b = (float)local_278 != -NAN && lVar32 != 0;
  if ((float)local_278 != -NAN && lVar32 != 0) {
    lVar35 = (ulonglong)(uint)((int)(float)local_278 * *(int *)(lVar32 + 300)) +
             *(longlong *)(lVar32 + 0x28);
    local_300 = (ulonglong)*(uint *)(lVar32 + 0x120);
  }
  else {
    lVar35 = 0;
  }
  local_1c8._0_4_ = -1;
  FUN_140a6f82a(&local_1c8,*(undefined8 *)(local_360 + 8),DAT_14cb429e0);
  lVar32 = *(longlong *)(lVar15 + 0x78);
  bVar44 = lVar32 != 0;
  local_36a = (int)local_1c8 != -1 && bVar44;
  if ((int)local_1c8 != -1 && bVar44) {
    local_350 = (ulonglong)(uint)((int)local_1c8 * *(int *)(lVar32 + 300)) +
                *(longlong *)(lVar32 + 0x28);
    local_33c = *(int *)(lVar32 + 0x120);
  }
  else {
    local_350 = 0;
    local_33c = 0;
  }
  local_37b = FUN_144a47c72(bVar44,param_2,param_3);
  local_128 = 0;
  local_120 = 0;
  local_148 = (undefined1  [16])0x0;
  local_11c = 0x80;
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_288 = (undefined1  [16])0x0;
  local_378 = param_2;
  local_358 = param_1;
  local_2c0 = lVar35;
  local_2b8 = param_3;
  if ((*(char *)(param_2 + 0x138) == '\x01') && (0 < *(int *)(param_1 + 0x138))) {
    FUN_14481578e(local_288);
    local_1a8 = (double *)0x0;
    iStack_1a0 = 0;
    local_1c8._0_4_ = 0;
    local_1c8._4_4_ = 0;
    uStack_1c0._0_4_ = 0;
    uStack_1c0._4_4_ = 0;
    uStack_19c = 0x80;
    uStack_198 = 0xffff;
    bStack_196 = 0xff;
    uStack_195 = 0xff;
    iStack_194 = 0;
    local_188 = (undefined1 *)0x0;
    local_180 = 0;
    uVar41 = *(uint *)(param_1 + 0x138);
    uVar42 = (ulonglong)(int)uVar41;
    if (uVar42 != 0) {
      if ((int)uVar41 < 0) goto LAB_143aa9883;
      FUN_140ab2830(&local_1c8,uVar41);
      iVar13 = 1;
      if (3 < uVar41) {
        uVar41 = (uVar41 | 1) + 0xe;
        iVar13 = 0x1f;
        if (uVar41 != 0) {
          for (; uVar41 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        iVar13 = 1 << ((byte)iVar13 & 0x1f);
      }
      if ((local_180 == 0) || (local_180 < iVar13)) {
        local_180 = iVar13;
        FUN_140264164();
      }
      local_1e0 = (longlong *)((ulonglong)(uint)local_1e0._4_4_ << 0x20);
      if (0 < *(int *)(param_1 + 0x138)) {
        iVar13 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x130) + 0x60 + (longlong)iVar13 * 0x68) < 0) {
            uVar3 = local_288._8_4_;
            lVar32 = (longlong)(int)local_288._8_4_;
            uVar41 = local_288._8_4_ + 1;
            local_288._8_4_ = uVar41;
            if ((uint)local_288._12_4_ < uVar41) {
              FUN_1446f48e2(local_288,uVar3);
              iVar13 = (int)(float)local_1e0;
            }
            *(int *)(local_288._0_8_ + lVar32 * 4) = iVar13;
          }
          else {
            local_278 = (code *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar13 * 0x68 + 0x60);
            uStack_270 = (int *)&local_1e0;
            FUN_1418355d2(&local_1c8,&local_200,&local_278,0);
          }
          iVar13 = (int)(float)local_1e0 + 1;
          local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,iVar13);
          param_1 = local_358;
        } while (iVar13 < *(int *)(local_358 + 0x138));
      }
    }
    lVar32 = local_320;
    uVar42 = (longlong)(int)uStack_1c0 - (longlong)iStack_194;
    uVar41 = (uint)uVar42;
    if ((uint)(local_148._8_4_ - local_114) < uVar41) {
      if ((int)uVar41 < 0) {
LAB_143aa9883:
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar42);
      }
      FUN_140ab2830(local_148,uVar42 & 0xffffffff);
      iVar13 = 1;
      if (3 < uVar41) {
        uVar41 = (uVar41 | 1) + 0xe;
        iVar13 = 0x1f;
        if (uVar41 != 0) {
          for (; uVar41 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        iVar13 = 1 << ((byte)iVar13 & 0x1f);
      }
      if ((local_100 == 0) || (local_100 < iVar13)) {
        local_100 = iVar13;
        FUN_140264164();
      }
    }
    if (*(int *)(lVar32 + 0x120) != 0) {
      uVar41 = 0;
      do {
        uVar34 = 0xffffffff;
        if (((int)uVar41 < local_33c & local_36a) == 1) {
          uVar34 = *(uint *)(local_350 + (longlong)(int)uVar41 * 4);
        }
        local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,uVar34);
        if ((int)uStack_1c0 != iStack_194) {
          puVar18 = local_188;
          if (local_188 == (undefined1 *)0x0) {
            puVar18 = local_190;
          }
          iVar13 = *(int *)(puVar18 + (ulonglong)(local_180 - 1U & uVar34) * 4);
          if (iVar13 != -1) {
            lVar15 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
            do {
              lVar16 = (longlong)iVar13 * 0x10;
              if (*(uint *)(lVar15 + lVar16) == uVar34) {
                local_210 = *(int *)(lVar15 + 4 + lVar16);
                FUN_1406ea0e0(&local_1c8);
                if ((local_37b == '\0') ||
                   ((((int)uVar41 < local_338 & local_369) == 1 &&
                    (*(int *)(local_2f0 + (longlong)(int)uVar41 * 4) == 0)))) {
LAB_143aa5965:
                  iVar13 = *(int *)(*(longlong *)(local_358 + 0x130) + 4 +
                                   (longlong)local_210 * 0x68);
                  if ((((iVar13 != 0) &&
                       (uVar34 = *(uint *)(*(longlong *)(local_358 + 0x130) +
                                          (longlong)local_210 * 0x68), -1 < (int)uVar34)) &&
                      ((int)uVar34 < DAT_14c9647dc)) &&
                     (((plVar29 = (longlong *)
                                  ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                       plVar29 != (longlong *)0x0 && ((int)plVar29[2] == iVar13)) &&
                      (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 &&
                       ((plVar29 = (longlong *)*plVar29, plVar29 != (longlong *)0x0 &&
                        ((*(byte *)((longlong)plVar29 + 0x9e) & 0x10) != 0)))))))) {
                    (**(code **)(*plVar29 + 0x2b0))(plVar29);
                    FUN_14045627c(plVar29,0,2);
                  }
                  uVar3 = local_288._8_4_;
                  lVar32 = (longlong)(int)local_288._8_4_;
                  uVar34 = local_288._8_4_ + 1;
                  local_288._8_4_ = uVar34;
                  if ((uint)local_288._12_4_ < uVar34) {
                    FUN_1446f48e2(local_288,uVar3);
                  }
                  *(int *)(local_288._0_8_ + lVar32 * 4) = local_210;
                  *(undefined4 *)
                   (*(longlong *)(local_358 + 0x130) + 0x60 + (longlong)local_210 * 0x68) =
                       0xffffffff;
                  lVar32 = local_320;
                }
                else {
                  if (local_36b != '\0') {
                    iVar13 = 0;
                    if ((int)uVar41 < (int)local_300) {
                      iVar13 = *(int *)(local_2c0 + (longlong)(int)uVar41 * 4);
                    }
                    if (iVar13 != *(int *)(param_2 + 0x13c)) goto LAB_143aa5965;
                  }
                  local_278 = (code *)&local_1e0;
                  uStack_270 = &local_210;
                  FUN_1418355d2(local_148,&local_200,&local_278,0);
                }
                break;
              }
              iVar13 = *(int *)(lVar16 + lVar15 + 8);
            } while (iVar13 != -1);
          }
        }
        uVar41 = uVar41 + 1;
      } while (uVar41 < *(uint *)(lVar32 + 0x120));
    }
    iVar13 = iStack_1a0;
    if (iStack_1a0 == 0) {
      uVar42 = 1;
      uVar40 = 0;
      iVar31 = 0;
      iVar14 = 0;
    }
    else {
      pdVar22 = local_1a8;
      if (local_1a8 == (double *)0x0) {
        pdVar22 = (double *)&local_1b8;
      }
      uVar41 = *(uint *)pdVar22;
      if (uVar41 == 0) {
        iVar14 = iStack_1a0 + 0x1e;
        if (-1 < iStack_1a0 + -1) {
          iVar14 = iStack_1a0 + -1;
        }
        uVar40 = 0;
        uVar42 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar42 = uVar40;
        }
        iVar31 = 0;
        do {
          if (uVar42 == uVar40) goto LAB_143aa5af7;
          iVar31 = iVar31 + 0x20;
          uVar41 = *(uint *)((longlong)pdVar22 + uVar40 * 4 + 4);
          uVar40 = uVar40 + 1;
        } while (uVar41 == 0);
      }
      else {
        uVar40 = 0;
        iVar31 = 0;
      }
      uVar42 = (ulonglong)(-uVar41 & uVar41);
      uVar1 = uVar42 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar14 = (iVar31 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if (iStack_1a0 <= iVar14) {
        iVar14 = iStack_1a0;
      }
    }
    if (iVar14 != iStack_1a0) {
      uVar41 = 0xffffffff;
      do {
        lVar32 = *(longlong *)(CONCAT44(local_1c8._4_4_,(int)local_1c8) + (longlong)iVar14 * 0x10);
        lVar15 = (lVar32 >> 0x20) * 0x68;
        iVar14 = *(int *)(*(longlong *)(local_358 + 0x130) + 4 + lVar15);
        if (((((iVar14 != 0) &&
              (uVar34 = *(uint *)(*(longlong *)(local_358 + 0x130) + lVar15), -1 < (int)uVar34)) &&
             ((int)uVar34 < DAT_14c9647dc)) &&
            ((plVar29 = (longlong *)
                        ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
             plVar29 != (longlong *)0x0 && ((int)plVar29[2] == iVar14)))) &&
           (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 &&
            ((plVar29 = (longlong *)*plVar29, plVar29 != (longlong *)0x0 &&
             ((*(byte *)((longlong)plVar29 + 0x9e) & 0x10) != 0)))))) {
          (**(code **)(*plVar29 + 0x2b0))(plVar29);
          FUN_14045627c(plVar29,0,2);
        }
        uVar3 = local_288._8_4_;
        lVar16 = (longlong)(int)local_288._8_4_;
        uVar34 = local_288._8_4_ + 1;
        local_288._8_4_ = uVar34;
        if ((uint)local_288._12_4_ < uVar34) {
          FUN_1446f48e2(local_288,uVar3);
        }
        *(int *)(local_288._0_8_ + lVar16 * 4) = (int)((ulonglong)lVar32 >> 0x20);
        *(undefined4 *)(*(longlong *)(local_358 + 0x130) + 0x60 + lVar15) = 0xffffffff;
        uVar41 = uVar41 & ~(uint)uVar42;
        pdVar22 = local_1a8;
        if (local_1a8 == (double *)0x0) {
          pdVar22 = (double *)&local_1b8;
        }
        iVar14 = (int)uVar40;
        lVar32 = (longlong)iVar14;
        uVar34 = *(uint *)((longlong)pdVar22 + lVar32 * 4) & uVar41;
        if (uVar34 == 0) {
          iVar25 = iStack_1a0 + 0x1e;
          if (-1 < iStack_1a0 + -1) {
            iVar25 = iStack_1a0 + -1;
          }
          iVar25 = iVar25 >> 5;
          iVar31 = iVar31 + 0x20;
          iVar26 = iVar25;
          if (iVar25 < iVar14) {
            iVar26 = iVar14;
          }
          if (iVar14 < iVar25) {
            lVar15 = 0;
            do {
              uVar34 = *(uint *)((longlong)pdVar22 + lVar15 * 4 + lVar32 * 4 + 4);
              if (uVar34 != 0) {
                uVar40 = (ulonglong)(iVar14 + (int)lVar15 + 1);
                uVar41 = 0xffffffff;
                goto LAB_143aa9796;
              }
              iVar31 = iVar31 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar26 - lVar32 != lVar15);
            uVar41 = 0xffffffff;
            iVar14 = iVar26;
          }
          uVar40 = (ulonglong)(iVar14 + 1);
          iVar14 = iStack_1a0;
        }
        else {
LAB_143aa9796:
          uVar42 = (ulonglong)(-uVar34 & uVar34);
          uVar1 = uVar42 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar14 = (iVar31 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iStack_1a0 <= iVar14) {
            iVar14 = iStack_1a0;
          }
        }
      } while (iVar14 != iVar13);
    }
LAB_143aa5af7:
    param_1 = local_358;
    local_180 = 0;
    if (local_188 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    param_3 = local_2b8;
    param_2 = local_378;
    uStack_1c0._0_4_ = 0;
    if (uStack_1c0._4_4_ != 0) {
      FUN_14472eb64(&local_1c8,0);
    }
    uStack_198 = 0xffff;
    bStack_196 = 0xff;
    uStack_195 = 0xff;
    iStack_194 = 0;
    iStack_1a0 = 0;
    if (0x80 < uStack_19c) {
      uStack_19c = 0x80;
      FUN_1446efbd8(&local_1b8,0);
    }
    lVar16 = local_320;
    if (local_1a8 != (double *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(local_1c8._4_4_,(int)local_1c8) != 0) {
      FUN_1400020a8();
    }
  }
  lVar32 = *(longlong *)(param_2 + 0x140);
  if ((lVar32 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar32);
LAB_143aa5bbc:
    uVar41 = *(uint *)(lVar32 + 0xc);
    if ((int)uVar41 < DAT_14c9647dc) {
      lVar32 = (ulonglong)((uVar41 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8);
    }
    else {
      lVar32 = 0;
    }
    iVar13 = *(int *)(lVar32 + 0x10);
    if (*(int *)(lVar32 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar44 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar44) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar13 = *(int *)(lVar32 + 0x10);
      bVar44 = iVar13 == 0;
      if (bVar44) {
        *(int *)(lVar32 + 0x10) = iVar14;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar44) {
        iVar13 = iVar14;
      }
    }
  }
  else {
    if (lVar32 != 0) goto LAB_143aa5bbc;
    uVar41 = 0;
    iVar13 = 0;
  }
  if (*(int *)(lVar16 + 0x120) == 0) {
    uVar41 = 0;
  }
  else {
    local_314 = *(int *)(param_2 + 0xc0);
    local_2d8 = CONCAT44(iVar13,uVar41);
    local_310 = (longlong *)(param_1 + 0x130);
    local_298 = param_2 + 400;
    uVar41 = 0;
    uVar34 = 0;
    lVar32 = local_350;
    cVar30 = local_37b;
    do {
      if ((cVar30 != '\0') &&
         ((((int)uVar34 < local_338 & local_369) != 1 ||
          (*(int *)(local_2f0 + (longlong)(int)uVar34 * 4) != 0)))) {
        if (local_36b != '\0') {
          iVar13 = 0;
          if ((int)uVar34 < (int)local_300) {
            iVar13 = *(int *)(local_2c0 + (longlong)(int)uVar34 * 4);
          }
          if (iVar13 != *(int *)(param_2 + 0x13c)) goto LAB_143aa904f;
        }
        uVar28 = 0xffffffff;
        local_334 = uVar41;
        if (*(char *)(param_2 + 0x138) == '\x01') {
          if (((int)uVar34 < local_33c & local_36a) == 1) {
            uVar28 = *(uint *)(lVar32 + (longlong)(int)uVar34 * 4);
          }
          if (local_148._8_4_ != local_114) {
            puVar18 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar18 = local_110;
            }
            iVar13 = *(int *)(puVar18 + (ulonglong)(local_100 - 1U & uVar28) * 4);
            if (iVar13 != -1) {
              do {
                lVar32 = (longlong)iVar13 * 0x10;
                if (*(uint *)(local_148._0_8_ + lVar32) == uVar28) {
                  uVar27 = *(uint *)(local_148._0_8_ + 4 + lVar32);
                  uVar19 = FUN_1406ea0e0(local_148);
                  param_2 = local_378;
                  if (uVar27 != 0xffffffff) {
                    local_340 = (undefined4)CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
                    goto LAB_143aa5e35;
                  }
                  break;
                }
                iVar13 = *(int *)(lVar32 + local_148._0_8_ + 8);
              } while (iVar13 != -1);
            }
          }
          lVar32 = local_350;
          if (((*(char *)(param_2 + 0x139) == '\x01') &&
              (cVar11 = FUN_1481c5e94(local_2d0,local_2d8), lVar32 = local_350, param_2 = local_378,
              cVar11 == '\0')) &&
             (uVar34 < (uint)(*(int *)(lVar16 + 0x120) - *(int *)(lVar16 + 0x134))))
          goto LAB_143aa904f;
        }
        if ((int)((local_148._8_4_ + uVar41) - local_114) < local_314) {
          if (*(char *)(param_2 + 0x138) == '\0') {
            uVar42 = 0xffffffff;
            local_340 = 0;
            bVar44 = false;
            uVar27 = uVar41;
            if ((int)uVar41 < *(int *)(param_1 + 0x138)) goto LAB_143aa5e35;
LAB_143aa5ed0:
            if (((((*(int *)(param_1 + 300) == 0) ||
                  (uVar41 = *(uint *)(param_1 + 0x128), (int)uVar41 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar41)) ||
                (((plVar29 = (longlong *)
                             ((ulonglong)((uVar41 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8)),
                  plVar29 == (longlong *)0x0 || ((int)plVar29[2] != *(int *)(param_1 + 300))) ||
                 (((*(uint *)(plVar29 + 1) & 0x10200000) != 0 || (lVar32 = *plVar29, lVar32 == 0))))
                )) && (lVar32 = *(longlong *)(local_330 + 0xa8), lVar32 == 0)) {
              lVar32 = *(longlong *)(local_330 + 0xb0);
              if (lVar32 == 0) {
                lVar32 = FUN_1448abda6(local_330);
              }
              local_1a8 = (double *)0x0;
              iStack_1a0 = 0;
              uStack_19c = 0;
              local_1b8._0_4_ = 0;
              local_1b8._4_4_ = 0;
              uStack_1b0 = 0;
              local_1c8._0_4_ = 0;
              local_1c8._4_4_ = 0;
              uStack_1c0._0_4_ = 0;
              uStack_1c0._4_4_ = 0;
              uStack_198 = 0x100;
              bStack_196 = bStack_196 & 0xe0;
              uStack_195 = 0;
              iStack_194 = 8;
              local_188 = (undefined1 *)0x0;
              local_178 = (longlong *)0x0;
              if (DAT_14cac9ca8 == 0) {
                local_278 = FUN_141030f22;
                local_390 = FUN_14081d0ea;
                local_398 = FUN_14081d0ea;
                local_3a0 = (int *)&local_278;
                local_3a8 = &LAB_1478c0a72;
                local_3b0 = (code *)&LAB_1417b2375;
                local_3b8 = L"Engine";
                local_3c0 = (code *)0x1000000000;
                local_3c8 = (undefined *)CONCAT44(local_3c8._4_4_,0x10000004);
                local_3d0 = CONCAT44(local_3d0._4_4_,8);
                local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,0x390);
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              local_278 = (code *)0x0;
              uStack_270 = (int *)0x0;
              local_268 = 0;
              uStack_264 = 0;
              uStack_260 = 0;
              uStack_25c = 0x3ff00000;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = 0;
              uStack_250 = 0;
              local_238 = 0x3ff0000000000000;
              uStack_230 = 0x3ff0000000000000;
              local_228 = 0x3ff0000000000000;
              uStack_220 = 0;
              lVar32 = FUN_141037e38(lVar32,DAT_14cac9ca8,&local_278,&local_1c8);
              if (local_188 != (undefined1 *)0x0) {
                plVar29 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar29 = local_168;
                }
                (**(code **)(*plVar29 + 0x10))();
              }
              FUN_144757f48(lVar32,0x40);
              if (lVar32 == 0) {
                *(undefined4 *)(param_1 + 0x128) = 0;
                iVar13 = 0;
              }
              else {
                uVar41 = *(uint *)(lVar32 + 0xc);
                *(uint *)(param_1 + 0x128) = uVar41;
                if ((int)uVar41 < DAT_14c9647dc) {
                  lVar15 = (ulonglong)((uVar41 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8);
                }
                else {
                  lVar15 = 0;
                }
                iVar13 = *(int *)(lVar15 + 0x10);
                if (*(int *)(lVar15 + 0x10) == 0) {
                  LOCK();
                  iVar13 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar14 = DAT_14c964868 + 1;
                  bVar45 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar13;
                  if (bVar45) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar14);
                  }
                  LOCK();
                  iVar13 = *(int *)(lVar15 + 0x10);
                  bVar45 = iVar13 == 0;
                  if (bVar45) {
                    *(int *)(lVar15 + 0x10) = iVar14;
                    iVar13 = 0;
                  }
                  UNLOCK();
                  if (bVar45) {
                    iVar13 = iVar14;
                  }
                }
              }
              *(int *)(local_358 + 300) = iVar13;
              param_1 = local_358;
            }
            uVar19 = *(undefined8 *)(local_378 + 0x140);
            if (DAT_14cac7648 == 0) {
              local_1c8._0_4_ = 0x44a7958c;
              local_1c8._4_4_ = 1;
              local_390 = FUN_14081d0ea;
              local_398 = FUN_143242436;
              local_3a0 = (int *)&local_1c8;
              local_3a8 = &LAB_14789ef1f;
              local_3b0 = (code *)&LAB_1417b008f;
              local_3b8 = L"Engine";
              local_3c0 = (code *)0x8000000000;
              local_3c8 = (undefined *)CONCAT44(local_3c8._4_4_,0x10000004);
              local_3d0 = CONCAT44(local_3d0._4_4_,0x10);
              local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,0x2b0);
              FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
            }
            plVar29 = (longlong *)FUN_14092e757(DAT_14cac7648,uVar19,lVar32,0);
            FUN_14472eae2(plVar29,0x20);
            FUN_144757f48(plVar29,0x40);
            lVar32 = local_330;
            FUN_140486fc4(plVar29,local_330,0);
            FUN_140b506a4(plVar29);
            local_348 = plVar29;
            (**(code **)(*plVar29 + 0x440))(plVar29,lVar32);
            if (bVar44) {
              uVar27 = (uint)uVar42;
              puVar23 = (uint *)(uVar42 * 0x68 + *local_310);
            }
            else {
              uVar27 = *(uint *)(param_1 + 0x138);
              puVar23 = (uint *)FUN_14589d60e(local_310);
            }
            if (local_348 == (longlong *)0x0) {
              *puVar23 = 0;
              uVar41 = 0;
            }
            else {
              uVar41 = *(uint *)((longlong)local_348 + 0xc);
              *puVar23 = uVar41;
              if ((int)uVar41 < DAT_14c9647dc) {
                lVar32 = (ulonglong)((uVar41 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8);
              }
              else {
                lVar32 = 0;
              }
              uVar41 = *(uint *)(lVar32 + 0x10);
              if (*(uint *)(lVar32 + 0x10) == 0) {
                LOCK();
                iVar13 = DAT_14c964868 + 1;
                UNLOCK();
                uVar39 = DAT_14c964868 + 1;
                bVar44 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar13;
                if (bVar44) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                uVar41 = *(uint *)(lVar32 + 0x10);
                bVar44 = uVar41 == 0;
                if (bVar44) {
                  *(uint *)(lVar32 + 0x10) = uVar39;
                  uVar41 = 0;
                }
                UNLOCK();
                param_1 = local_358;
                if (bVar44) {
                  uVar41 = uVar39;
                }
              }
            }
            puVar23[1] = uVar41;
            lVar32 = *local_310;
            param_2 = local_378;
            lVar16 = local_320;
          }
          else {
            lVar32 = (longlong)(int)local_288._8_4_;
            if (lVar32 == 0) {
              local_340 = 0;
              uVar42 = 0xffffffff;
              bVar44 = false;
              goto LAB_143aa5ed0;
            }
            local_288._8_4_ = local_288._8_4_ + -1;
            local_340 = 0;
            uVar27 = *(uint *)(local_288._0_8_ + -4 + lVar32 * 4);
LAB_143aa5e35:
            if ((int)uVar27 < 0) {
              bVar44 = false;
LAB_143aa5eb9:
              uVar42 = (ulonglong)uVar27;
              goto LAB_143aa5ed0;
            }
            lVar32 = *local_310;
            iVar13 = *(int *)(lVar32 + 4 + (ulonglong)uVar27 * 0x68);
            bVar44 = true;
            if (((iVar13 == 0) ||
                (uVar41 = *(uint *)((ulonglong)uVar27 * 0x68 + lVar32), (int)uVar41 < 0)) ||
               ((((DAT_14c9647dc <= (int)uVar41 ||
                  ((plVar29 = (longlong *)
                              ((ulonglong)((uVar41 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8)),
                   plVar29 == (longlong *)0x0 || ((int)plVar29[2] != iVar13)))) ||
                 ((*(uint *)(plVar29 + 1) & 0x10200000) != 0)) ||
                (plVar29 = (longlong *)*plVar29, plVar29 == (longlong *)0x0)))) goto LAB_143aa5eb9;
            uVar42 = (ulonglong)uVar27;
            local_348 = plVar29;
            if ((*(uint *)(plVar29 + 1) & 0x18000) != 0) goto LAB_143aa5ed0;
          }
          local_2dc = uVar28;
          dVar7 = DAT_14c8464f0;
          dVar8 = DAT_14c8464e8;
          dVar9 = DAT_14c8464e0;
          if ((*(byte *)(param_3 + 0x1a) & 1) == 0) {
            dVar7 = (double)*(float *)(local_2a0 + 0x14) * 65536.0;
            dVar8 = (double)*(float *)(local_2a0 + 0x10) * 65536.0;
            dVar9 = (double)*(float *)(local_2a0 + 0xc) * 65536.0;
          }
          local_328 = lVar32 + (longlong)(int)uVar27 * 0x68;
          uVar41 = local_334;
          cVar30 = local_37b;
          if ((longlong)*(int *)(param_2 + 0x150) != 0) {
            lVar32 = *(longlong *)(param_2 + 0x148);
            local_290 = (longlong)*(int *)(param_2 + 0x150) * 0xa8 + lVar32;
            local_308 = (longlong *)(local_328 + 0x10);
            local_2c8 = local_328 + 0x48;
            local_2e8 = (longlong)(int)uVar34;
            do {
              if (*(int *)(param_2 + 0x160) != *(int *)(param_2 + 0x18c)) {
                lVar15 = *(longlong *)(lVar32 + 0x38);
                uVar28 = (uint)((ulonglong)lVar15 >> 0x10);
                uVar27 = (uint)lVar15 & 0xffff;
                lVar35 = *(longlong *)(param_2 + 0x198);
                if (*(longlong *)(param_2 + 0x198) == 0) {
                  lVar35 = local_298;
                }
                iVar13 = *(int *)(lVar35 + (ulonglong)
                                           (*(int *)(param_2 + 0x1a0) - 1U &
                                           (int)((ulonglong)lVar15 >> 0x20) +
                                           ((uint)lVar15 << 0x10 | uVar27) +
                                           (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar27 >> 4)) * 4);
                if (iVar13 != -1) {
                  do {
                    lVar35 = *(longlong *)(param_2 + 0x158) + (longlong)iVar13 * 0x20;
                    if (*(longlong *)(*(longlong *)(param_2 + 0x158) + (longlong)iVar13 * 0x20) ==
                        lVar15) {
                      if ((lVar35 != 0) &&
                         (local_2a8 = (longlong *)(lVar35 + 8), local_2a8 != (longlong *)0x0)) {
                        local_2f8 = (longlong *)(lVar32 + 0x38);
                        uVar19 = FUN_144741050(lVar32 + 0x28);
                        local_1c8._0_4_ = (int)*(undefined8 *)(lVar32 + 0x2c);
                        local_1c8._4_4_ =
                             (undefined4)((ulonglong)*(undefined8 *)(lVar32 + 0x2c) >> 0x20);
                        local_1f8[0] = FUN_144830b78(&uStack_1c0,uVar19);
                        uStack_1c0._0_4_ = local_1f8[0];
                        local_200 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
                        local_1f0 = (double *)0x0;
                        uStack_1e8 = 0;
                        if (local_200 != 0) {
                          plVar29 = (longlong *)FUN_144741050(local_1f8);
                          if (*plVar29 == 0) goto LAB_143aa6bf7;
                          lVar15 = (longlong)(int)(*(longlong **)(local_360 + 8))[1];
                          if (lVar15 == 0) goto LAB_143aa6bf7;
                          lVar49 = **(longlong **)(local_360 + 8);
                          lVar38 = 0;
                          goto LAB_143aa63d0;
                        }
                      }
                      break;
                    }
                    iVar13 = *(int *)(lVar35 + 0x18);
                  } while (iVar13 != -1);
                }
              }
LAB_143aa6c09:
              lVar32 = lVar32 + 0xa8;
            } while (lVar32 != local_290);
          }
          param_3 = local_2b8;
          plVar29 = local_348;
          if (((((byte)local_340 & *(byte *)(param_2 + 0x138)) != 1) ||
              (*(char *)(param_2 + 0x13a) == '\0')) &&
             ((*(byte *)((longlong)local_348 + 0x9e) & 0x10) == 0)) {
            FUN_14045627c(local_348,1,2);
            (**(code **)(*plVar29 + 0x2a8))(plVar29,0);
            if (plVar29 != (longlong *)0x0) {
              if (DAT_14cac6e60 == 0) {
                local_1c8._0_4_ = 0x44a7958c;
                local_1c8._4_4_ = 1;
                local_390 = FUN_14081d0ea;
                local_398 = FUN_142b47bc4;
                local_3a0 = (int *)&local_1c8;
                local_3a8 = &LAB_1478989f1;
                local_3b0 = (code *)&LAB_146391124;
                local_3b8 = L"Engine";
                local_3c0 = (code *)0x10000000000;
                local_3c8 = (undefined *)CONCAT44(local_3c8._4_4_,0x10000005);
                local_3d0 = CONCAT44(local_3d0._4_4_,0x10);
                local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,0x620);
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60);
              }
              if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(local_348[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(local_348[2] + 0x30) +
                    (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
                 (local_348[0xb5] != 0)) {
                FUN_1436592d8();
              }
            }
          }
          *(uint *)(local_328 + 0x60) = local_2dc;
          *(double *)(local_328 + 8) = dVar2;
          if (*(char *)(param_2 + 0x139) == '\x01') {
            FUN_1481c5e16(local_2d0,local_2d8);
          }
          if (0 < DAT_14c762960 && DAT_14c762958 <= (int)uVar41) {
            DAT_14c762960 = DAT_14c762960 + -1;
          }
          uVar41 = uVar41 + 1;
          lVar32 = local_350;
          if (local_314 <= (int)uVar41) break;
        }
      }
LAB_143aa904f:
      uVar34 = uVar34 + 1;
    } while (uVar34 < *(uint *)(lVar16 + 0x120));
  }
  if (0 < *(int *)(param_1 + 0x138) && (int)uVar41 < *(int *)(param_1 + 0x138)) {
    iVar13 = 0;
    do {
      puVar23 = (uint *)((longlong)iVar13 * 0x68 + *(longlong *)(param_1 + 0x130));
      if (*(char *)(param_2 + 0x138) == '\x01') {
        if ((int)puVar23[0x18] < 0) {
LAB_143aa943f:
          if (((puVar23[1] != 0) && (uVar34 = *puVar23, -1 < (int)uVar34)) &&
             (((int)uVar34 < DAT_14c9647dc &&
              ((((plVar29 = (longlong *)
                            ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                 plVar29 != (longlong *)0x0 && (*(uint *)(plVar29 + 2) == puVar23[1])) &&
                ((*(uint *)(plVar29 + 1) & 0x10200000) == 0)) &&
               (plVar29 = (longlong *)*plVar29, plVar29 != (longlong *)0x0)))))) {
            if (dVar2 - *(double *)(puVar23 + 2) < (double)_DAT_14c76295c) {
              if ((*(byte *)((longlong)plVar29 + 0x9e) & 0x10) != 0) {
                (**(code **)(*plVar29 + 0x2b0))(plVar29);
                FUN_14045627c(plVar29,0,2);
              }
              goto LAB_143aa94ef;
            }
            (**(code **)(*plVar29 + 0x420))(plVar29,0);
          }
          FUN_1481d9c94((longlong *)(param_1 + 0x130),iVar13);
          iVar13 = iVar13 + -1;
        }
      }
      else if ((int)uVar41 <= iVar13) goto LAB_143aa943f;
LAB_143aa94ef:
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x138));
  }
  if (local_288._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_148._8_4_ = 0;
  if (local_148._12_4_ != 0) {
    FUN_14472eb64(local_148,0);
  }
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_120 = 0;
  if (0x80 < local_11c) {
    local_11c = 0x80;
    FUN_1446efbd8(local_138,0);
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_148._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_143aa9592:
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143aa63d0:
  if ((*(longlong *)(lVar49 + lVar38) != local_200) ||
     (*(int *)(lVar49 + 8 + lVar38) != local_1f8[0])) goto LAB_143aa63d6;
  plVar29 = (longlong *)FUN_144741050(local_1f8);
  puVar43 = DAT_14cb420f0;
  if ((DAT_14cb420f0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb420f0);
  }
  puVar21 = DAT_14cb420d0;
  puVar20 = (undefined8 *)*plVar29;
  if (((puVar20 == puVar43) && ((short)plVar29[1] == (short)DAT_14cb420f8)) &&
     (*(char *)((longlong)plVar29 + 10) == DAT_14cb420f8._2_1_)) {
    FUN_1481d2ff3(&local_200,local_360,uVar34);
  }
  else {
    if ((DAT_14cb420d0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420d0);
      puVar20 = (undefined8 *)*plVar29;
    }
    puVar43 = DAT_14cb420e0;
    if (((puVar20 == puVar21) && ((short)plVar29[1] == DAT_14cb420d8)) &&
       (*(char *)((longlong)plVar29 + 10) == DAT_14cb420da)) {
      FUN_1481d3110(&local_200,local_360,uVar34);
    }
    else {
      if ((DAT_14cb420e0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb420e0);
        puVar20 = (undefined8 *)*plVar29;
      }
      puVar21 = DAT_14cb42110;
      if (((puVar20 == puVar43) && ((short)plVar29[1] == (short)DAT_14cb420e8)) &&
         (*(char *)((longlong)plVar29 + 10) == DAT_14cb420e8._2_1_)) {
        FUN_1481d31ba(&local_200,local_360,uVar34);
      }
      else {
        if ((DAT_14cb42110 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42110);
          puVar20 = (undefined8 *)*plVar29;
        }
        puVar43 = DAT_14cb42140;
        if (((puVar20 == puVar21) && ((short)plVar29[1] == (short)DAT_14cb42118)) &&
           (*(char *)((longlong)plVar29 + 10) == DAT_14cb42118._2_1_)) {
          FUN_1481d3264(&local_200,local_360,uVar34);
        }
        else {
          if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42140);
            puVar20 = (undefined8 *)*plVar29;
          }
          puVar21 = DAT_14cb42160;
          if (((puVar20 == puVar43) && ((short)plVar29[1] == (short)DAT_14cb42148)) &&
             (*(char *)((longlong)plVar29 + 10) == DAT_14cb42148._2_1_)) {
            FUN_1481d3425(&local_200,local_360,uVar34);
          }
          else {
            if ((DAT_14cb42160 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb42160);
              puVar20 = (undefined8 *)*plVar29;
            }
            puVar43 = DAT_14cb42180;
            if (((puVar20 == puVar21) && ((short)plVar29[1] == (short)DAT_14cb42168)) &&
               (*(char *)((longlong)plVar29 + 10) == DAT_14cb42168._2_1_)) {
              FUN_1481d3560(&local_200,local_360,uVar34);
            }
            else {
              if ((DAT_14cb42180 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(DAT_14cb42180);
                puVar20 = (undefined8 *)*plVar29;
              }
              puVar21 = DAT_14cb42190;
              if (((puVar20 == puVar43) && ((short)plVar29[1] == (short)DAT_14cb42188)) &&
                 (*(char *)((longlong)plVar29 + 10) == DAT_14cb42188._2_1_)) {
                FUN_1481d36a6(&local_200,local_360,uVar34);
              }
              else {
                if ((DAT_14cb42190 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(DAT_14cb42190);
                  puVar20 = (undefined8 *)*plVar29;
                }
                puVar43 = DAT_14cb42130;
                if (((puVar20 == puVar21) && ((short)plVar29[1] == DAT_14cb42198)) &&
                   (*(char *)((longlong)plVar29 + 10) == DAT_14cb4219a)) {
                  FUN_1481d37e1(&local_200,local_360,uVar34);
                }
                else {
                  if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(DAT_14cb42130);
                    puVar20 = (undefined8 *)*plVar29;
                  }
                  lVar15 = local_360;
                  if (((puVar20 == puVar43) && ((short)plVar29[1] == DAT_14cb42138)) &&
                     (*(char *)((longlong)plVar29 + 10) == DAT_14cb4213a)) {
                    local_278 = (code *)CONCAT71(local_278._1_7_,1);
                    local_278 = (code *)CONCAT44(0xffffffff,(float)local_278);
                    FUN_140bec572(&local_278,*(undefined8 *)(local_360 + 8),local_200);
                    lVar15 = *(longlong *)(lVar15 + 0x78);
                    local_1b8._4_4_ = 0;
                    uStack_1b0 = 0;
                    local_1c8._4_4_ = 0;
                    uStack_1c0._0_4_ = 0;
                    uStack_1c0._4_4_ = 0;
                    local_1b8._0_4_ = 0;
                    if ((local_278._4_4_ != -NAN) && (lVar15 != 0)) {
                      uVar3 = *(undefined4 *)(lVar15 + 0x128 + (ulonglong)((byte)local_278 ^ 1) * 8)
                      ;
                      lVar15 = *(longlong *)
                                (lVar15 + 0x18 + (ulonglong)((byte)local_278 ^ 1) * 0x20);
                      in_XMM1._4_4_ = uVar3;
                      in_XMM1._0_4_ = (float)uVar3;
                      in_XMM1._8_8_ = 0;
                      lVar16 = 0;
                      in_XMM2 = pmovsxbq(in_XMM2,0x100);
                      in_XMM3 = pmovsxbd(in_XMM3,0x100);
                      do {
                        auVar50._0_4_ = (int)local_278._4_4_ + in_XMM3._0_4_;
                        iVar13 = in_XMM3._4_4_;
                        auVar50._4_4_ = (int)local_278._4_4_ + iVar13;
                        auVar50._8_4_ = in_XMM3._8_4_;
                        auVar50._12_4_ = in_XMM3._12_4_;
                        auVar50 = pmulld(auVar50,in_XMM1);
                        auVar50 = pmovzxdq(auVar50,auVar50);
                        if (SUB168(in_XMM2 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
                          (&uStack_1c0)[lVar16] = auVar50._0_8_ + lVar15;
                        }
                        if (SUB168(in_XMM2 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
                          (&local_1b8)[lVar16] = auVar50._8_8_ + lVar15;
                        }
                        lVar16 = lVar16 + 2;
                        lVar49 = in_XMM2._8_8_;
                        in_XMM2._0_8_ = (double)(in_XMM2._0_8_ + 2);
                        in_XMM2._8_8_ = lVar49 + 2;
                        in_XMM3._0_4_ = in_XMM3._0_4_ + 2;
                        in_XMM3._4_4_ = iVar13 + 2;
                      } while (lVar16 != 4);
                    }
                    if ((byte)local_278 == 0) {
                      lVar15 = 0;
                      do {
                        uVar12 = *(ushort *)((&uStack_1c0)[lVar15] + local_2e8 * 2);
                        uVar41 = (uint)uVar12 << 0xd;
                        if ((uVar41 & 0xf800000) == 0xf800000) {
                          fVar24 = (float)(uVar41 | 0x70000000);
                        }
                        else if ((uVar41 & 0xf800000) == 0) {
                          fVar24 = (float)(uVar41 | 0x38800000) + -6.1035156e-05;
                        }
                        else {
                          fVar24 = (float)((uVar41 & 0xfffe000) + 0x38000000);
                        }
                        *(uint *)((longlong)&local_278 + lVar15 * 4) =
                             (int)(short)uVar12 & 0x80000000U | (uint)fVar24;
                        lVar15 = lVar15 + 1;
                        param_2 = local_378;
                      } while (lVar15 != 3);
                    }
                    else {
                      lVar15 = 0;
                      do {
                        *(undefined4 *)((longlong)&local_278 + lVar15 * 4) =
                             *(undefined4 *)((&uStack_1c0)[lVar15] + local_2e8 * 4);
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 3);
                    }
                    FUN_140121138(&local_200);
                    memcpy(local_1f0,&local_278,(longlong)(int)uStack_1e8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar43 = *(undefined8 **)(lVar32 + 0x40);
  local_368 = lVar32;
  if ((DAT_14c950c29 == 1) && (puVar43 != (undefined8 *)0x0)) {
    FUN_1456cec3c(puVar43);
    uVar19 = *(undefined8 *)(local_368 + 0x48);
LAB_143aa6723:
    uVar17 = uVar19;
    if ((short)uVar19 == 3) {
      bVar44 = true;
      local_37a = 3;
      bVar45 = true;
      puVar20 = DAT_14cb420c0;
      local_2b0 = uVar19;
      if (DAT_14cb420c0 != (undefined8 *)0x0) goto LAB_143aa6788;
      goto LAB_143aa6833;
    }
LAB_143aa6730:
    local_37a = (short)uVar17;
    if (puVar43 != (undefined8 *)0x0) goto LAB_143aa6741;
    local_1a8 = (double *)0x0;
    iStack_1a0 = 0;
    uStack_19c = 0x20;
LAB_143aa810f:
    plVar29 = (longlong *)FUN_144741050(local_1f8);
    uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
    if (uVar12 == 0xffff) {
      uVar12 = 0;
      if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
        lVar32 = FUN_144a811ba(plVar29);
        sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
        uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
      }
      *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
    }
    param_2 = local_378;
    lVar32 = local_368;
    pdVar22 = local_1f0;
    iVar13 = (int)(short)uVar12;
    cVar30 = local_37b;
  }
  else {
    uVar19 = *(undefined8 *)(lVar32 + 0x48);
    if (puVar43 != (undefined8 *)0x0) goto LAB_143aa6723;
    if ((*local_2a8 == 0) || (lVar32 = *(longlong *)(*local_2a8 + 0x70), lVar32 == 0)) {
      puVar43 = (undefined8 *)0x0;
      param_2 = local_378;
      goto LAB_143aa6723;
    }
    puVar43 = (undefined8 *)0x0;
    while ((*(uint *)(lVar32 + 0x38) & 0x480) != 0x80) {
LAB_143aa7d6f:
      lVar32 = *(longlong *)(lVar32 + 0x48);
      param_2 = local_378;
      if (lVar32 == 0) goto LAB_143aa6723;
    }
    puVar33 = *(undefined **)(lVar32 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_3c8 = (undefined *)FUN_140342cba();
        local_3c0 = FUN_1468c7f1e;
        local_3d0 = 0;
        local_3d8 = (wchar_t *)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_3c0 = FUN_1403a682c;
      local_3c8 = &DAT_14c951a38;
      local_3d0 = 0;
      local_3d8 = (wchar_t *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar44 = puVar33 != (undefined *)0x0;
      if (puVar33 != &DAT_14c952a08 && bVar44) {
        do {
          puVar33 = *(undefined **)(puVar33 + 0x30);
          bVar44 = puVar33 != (undefined *)0x0;
          if (puVar33 == &DAT_14c952a08) break;
        } while (puVar33 != (undefined *)0x0);
      }
      if (!bVar44) goto LAB_143aa7a21;
    }
    else if ((*(ulonglong *)(puVar33 + 0x18) & DAT_14c952a10) == 0) {
LAB_143aa7a21:
      plVar29 = (longlong *)FUN_144741050(local_1f8);
      local_278 = (code *)*plVar29;
      if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uStack_270 = (int *)plVar29[1];
      iVar13 = *(int *)(lVar32 + 0x34);
      iVar14 = *(int *)(lVar32 + 0x30);
      uVar12 = (ushort)((ulonglong)uStack_270 >> 0x20);
      if (uVar12 == 0xffff) {
        uVar12 = 0;
        if ((local_278 != (code *)0x0) && (uVar12 = 0, ((uint)uStack_270 & 0xffff) != 1)) {
          lVar15 = FUN_144a811ba(&local_278);
          sVar37 = (short)*(undefined4 *)(lVar15 + 0x5c);
          uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar15 + 0x58) + sVar37) - 1U;
        }
        uStack_270._0_6_ = CONCAT24(uVar12,(float)uStack_270);
      }
      param_2 = local_378;
      if (iVar13 * iVar14 == (int)(short)uVar12) goto LAB_143aa6723;
      puVar33 = *(undefined **)(lVar32 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
      {
        FUN_14475b26a();
        local_3c0 = FUN_14079c5e4;
        local_3c8 = &DAT_14c9520b8;
        local_3d8 = (wchar_t *)0x101008001;
        local_3d0 = 0;
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty");
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
      if (DAT_14c9523d8 == 0) {
        bVar44 = puVar33 != (undefined *)0x0;
        if (puVar33 != &DAT_14c9523d0 && bVar44) {
          do {
            puVar33 = *(undefined **)(puVar33 + 0x30);
            bVar44 = puVar33 != (undefined *)0x0;
            if (puVar33 == &DAT_14c9523d0) break;
          } while (puVar33 != (undefined *)0x0);
        }
        if (!bVar44) goto LAB_143aa7afa;
      }
      else if ((*(ulonglong *)(puVar33 + 0x18) & DAT_14c9523d8) == 0) {
LAB_143aa7afa:
        iVar13 = *(int *)(lVar32 + 0x34) * *(int *)(lVar32 + 0x30);
        uVar12 = uStack_270._4_2_;
        if (uStack_270._4_2_ == 0xffff) {
          uVar12 = 0;
          if ((local_278 != (code *)0x0) && (uVar12 = 0, (short)uStack_270 != 1)) {
            lVar15 = FUN_144a811ba(&local_278);
            sVar37 = (short)*(undefined4 *)(lVar15 + 0x5c);
            uVar12 = -sVar37 & (sVar37 + (short)*(undefined4 *)(lVar15 + 0x58)) - 1U;
          }
          uStack_270._0_6_ = CONCAT24(uVar12,(float)uStack_270);
        }
        puVar43 = DAT_14cb42110;
        if ((DAT_14cb42110 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42110);
        }
        puVar20 = DAT_14cb42140;
        iVar14 = (short)uVar12 * 2;
        if ((((local_278 == (code *)puVar43) && ((short)uStack_270 == (short)DAT_14cb42118)) &&
            (uStack_270._2_1_ == DAT_14cb42118._2_1_)) && (iVar13 == iVar14)) {
          FUN_148111540(&local_1c8);
LAB_143aa7ce7:
          puVar43 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
          if (DAT_14c950c29 == 1) {
            if (puVar43 == (undefined8 *)0x0) {
LAB_143aa7d01:
              puVar43 = (undefined8 *)0x0;
            }
            else {
              FUN_1456cec3c(puVar43);
              puVar43 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            }
          }
        }
        else {
          if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42140);
          }
          puVar43 = DAT_14cb42130;
          if (((local_278 != (code *)puVar20) || ((short)uStack_270 != (short)DAT_14cb42148)) ||
             (uStack_270._2_1_ != DAT_14cb42148._2_1_)) {
            if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb42130);
            }
            puVar20 = (undefined8 *)local_278;
            if (((local_278 == (code *)puVar43) &&
                (puVar20 = puVar43, (short)uStack_270 == DAT_14cb42138)) &&
               (uStack_270._2_1_ == DAT_14cb4213a)) goto LAB_143aa7c01;
LAB_143aa7c41:
            puVar43 = DAT_14cb42160;
            if ((DAT_14cb42160 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb42160);
              puVar20 = (undefined8 *)local_278;
            }
            puVar21 = DAT_14cb42190;
            if ((((puVar20 == puVar43) && ((short)uStack_270 == (short)DAT_14cb42168)) &&
                (uStack_270._2_1_ == DAT_14cb42168._2_1_)) && (iVar13 == iVar14)) {
              FUN_148111556(&local_1c8);
            }
            else {
              if ((DAT_14cb42190 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(DAT_14cb42190);
                puVar20 = (undefined8 *)local_278;
              }
              if (((puVar20 != puVar21) || ((short)uStack_270 != DAT_14cb42198)) ||
                 ((uStack_270._2_1_ != DAT_14cb4219a || (iVar13 != iVar14)))) {
                local_1c8._0_4_ = 0;
                local_1c8._4_4_ = 0;
                local_1f8[0] = FUN_144830b78(&uStack_1c0,&DAT_14cb42160);
                local_200 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
                uStack_1c0._0_4_ = local_1f8[0];
                if (local_1f0 != (double *)0x0) {
                  FUN_1400020a8();
                }
                local_1f0 = (double *)0x0;
                uStack_1e8 = 0;
                puVar43 = (undefined8 *)0x0;
                uVar19 = 0;
                goto LAB_143aa7d6f;
              }
              FUN_14811156c(&local_1c8);
            }
            goto LAB_143aa7ce7;
          }
LAB_143aa7c01:
          if (iVar13 != iVar14) goto LAB_143aa7c41;
          FUN_1408c4b2a(&local_1c8);
          puVar43 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
          if (DAT_14c950c29 == 1) {
            if (puVar43 != (undefined8 *)0x0) {
              FUN_1456cec3c(puVar43);
              goto LAB_143aa7d04;
            }
            goto LAB_143aa7d01;
          }
        }
LAB_143aa7d04:
        uVar19 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
        goto LAB_143aa7d6f;
      }
      FUN_1481115c0(&local_1c8);
      puVar43 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
      if (DAT_14c950c29 == 1) {
        if (puVar43 == (undefined8 *)0x0) {
          puVar43 = (undefined8 *)0x0;
        }
        else {
          FUN_1456cec3c(puVar43);
          puVar43 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
        }
      }
      uVar19 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
      param_2 = local_378;
      goto LAB_143aa6723;
    }
    puVar43 = *(undefined8 **)(lVar32 + 0x70);
    if (puVar43 != (undefined8 *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(puVar43);
    }
    if ((puVar43 == (undefined8 *)0x0) || ((DAT_14c950c29 & 1) == 0)) {
      uVar19 = 0xffffffff00000002;
      uVar17 = 2;
      param_2 = local_378;
      goto LAB_143aa6730;
    }
    FUN_1456cec3c(puVar43);
    local_37a = 2;
    uVar19 = 0xffffffff00000002;
    param_2 = local_378;
LAB_143aa6741:
    lVar32 = FUN_1449e2fb2();
    if ((((lVar32 == 0) || (lVar15 = puVar43[2], lVar15 == 0)) ||
        (*(int *)(lVar15 + 0x38) < *(int *)(lVar32 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar32 + 0x38) * 8) !=
        lVar32 + 0x30)) {
      bVar45 = true;
    }
    else {
      bVar44 = false;
      puVar20 = puVar43;
      local_2b0 = uVar19;
LAB_143aa6788:
      if (DAT_14c948fa0 == 0) {
        local_1e0 = (longlong *)&DAT_1427db2a2;
        lVar32 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar32;
        FUN_1446f470e(&local_278,L"ScriptStruct",1);
        local_3a0 = (int *)&local_1e0;
        local_3a8 = &LAB_1468915ce;
        local_3b0 = FUN_1427dc742;
        local_3c0 = (code *)0x149e2b68a;
        local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,199);
        local_3c8 = (undefined *)0x10;
        local_3d0 = CONCAT44(local_3d0._4_4_,0x10000020);
        local_3d8._0_4_ = 8;
        FUN_14574b4b2(lVar32);
        DAT_14c948fa0 = lVar32;
        if (DAT_14c927740 == 0) {
          local_1c8._0_4_ = 0x449e2820;
          local_1c8._4_4_ = 1;
          local_390 = FUN_14081d0ea;
          local_398 = FUN_14081d0ea;
          local_3a0 = (int *)&local_1c8;
          local_3a8 = &LAB_146856450;
          local_3b0 = FUN_1427b121c;
          local_3b8 = L"Engine";
          local_3c0 = (code *)0x0;
          local_3c8 = (undefined *)CONCAT44(local_3c8._4_4_,0x10000021);
          local_3d0 = CONCAT44(local_3d0._4_4_,8);
          local_3d8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar15 = DAT_14c948fa0;
        lVar32 = DAT_14c927740;
        uVar19 = FUN_1449e2fb2();
        local_3d8 = L"ScriptStruct";
        FUN_14574b446(uVar19,lVar15,lVar32);
        param_2 = local_378;
      }
      bVar45 = true;
      if ((*(int *)(puVar20[2] + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(puVar20[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
          DAT_14c948fa0 + 0x30)) goto LAB_143aa6833;
      if (bVar44) {
        puVar20 = DAT_14cb420c0;
        if (DAT_14cb420c0 != (undefined8 *)0x0) goto LAB_143aa6805;
LAB_143aa6820:
        puVar20 = (undefined8 *)0x0;
      }
      else {
        if (((puVar43 == (undefined8 *)0x0) || (lVar32 = FUN_1449e2fb2(), lVar32 == 0)) ||
           ((lVar15 = puVar43[2], lVar15 == 0 ||
            ((*(int *)(lVar15 + 0x38) < *(int *)(lVar32 + 0x38) ||
             (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar32 + 0x38) * 8) !=
              lVar32 + 0x30)))))) goto LAB_143aa6820;
        puVar20 = puVar43;
        if (DAT_14c948fa0 == 0) {
          local_1e0 = (longlong *)&DAT_1427db2a2;
          lVar32 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948fa0 = lVar32;
          FUN_1446f470e(&local_278,L"ScriptStruct",1);
          local_3a0 = (int *)&local_1e0;
          local_3a8 = &LAB_1468915ce;
          local_3b0 = FUN_1427dc742;
          local_3c0 = (code *)0x149e2b68a;
          local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,199);
          local_3c8 = (undefined *)0x10;
          local_3d0 = CONCAT44(local_3d0._4_4_,0x10000020);
          local_3d8._0_4_ = 8;
          FUN_14574b4b2(lVar32);
          DAT_14c948fa0 = lVar32;
          if (DAT_14c927740 == 0) {
            local_1c8._0_4_ = 0x449e2820;
            local_1c8._4_4_ = 1;
            local_390 = FUN_14081d0ea;
            local_398 = FUN_14081d0ea;
            local_3a0 = (int *)&local_1c8;
            local_3a8 = &LAB_146856450;
            local_3b0 = FUN_1427b121c;
            local_3b8 = L"Engine";
            local_3c0 = (code *)0x0;
            local_3c8 = (undefined *)CONCAT44(local_3c8._4_4_,0x10000021);
            local_3d0 = CONCAT44(local_3d0._4_4_,8);
            local_3d8._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          lVar15 = DAT_14c948fa0;
          lVar32 = DAT_14c927740;
          uVar19 = FUN_1449e2fb2();
          local_3d8 = L"ScriptStruct";
          FUN_14574b446(uVar19,lVar15,lVar32);
          param_2 = local_378;
        }
LAB_143aa6805:
        if ((*(int *)(puVar20[2] + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(puVar20[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
            DAT_14c948fa0 + 0x30)) goto LAB_143aa6820;
      }
      puVar21 = (undefined8 *)FUN_140c6c286(puVar20,0);
      bVar45 = puVar21 == puVar20;
LAB_143aa6833:
      local_1a8 = (double *)0x0;
      iStack_1a0 = 0;
      uStack_19c = 0x20;
      uVar19 = local_2b0;
      if (puVar43 == (undefined8 *)0x0) goto LAB_143aa810f;
    }
    uStack_19c = 0x20;
    iStack_1a0 = 0;
    local_1a8 = (double *)0x0;
    plVar29 = (longlong *)FUN_144741050(local_1f8);
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(puVar43);
    }
    cVar11 = (char)((ulonglong)uVar19 >> 0x10);
    if (((((undefined8 *)*plVar29 == puVar43) && ((short)plVar29[1] == local_37a)) &&
        (*(char *)((longlong)plVar29 + 10) == cVar11)) || ((*(byte *)(lVar35 + 0x10) & bVar45) != 0)
       ) goto LAB_143aa810f;
    plVar29 = (longlong *)FUN_144741050(local_1f8);
    puVar20 = (undefined8 *)*plVar29;
    if ((puVar20 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(puVar20);
    }
    cVar30 = local_37b;
    puVar21 = DAT_14cb42140;
    lVar32 = plVar29[1];
    if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42140);
    }
    sVar37 = (short)lVar32;
    cVar36 = (char)((ulonglong)lVar32 >> 0x10);
    if (((puVar20 == puVar21) && ((short)DAT_14cb42148 == sVar37)) &&
       (DAT_14cb42148._2_1_ == cVar36)) {
      FUN_1481112dc(&local_278);
      puVar21 = (undefined8 *)local_278;
      if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_278);
      }
      param_2 = local_378;
      cVar30 = local_37b;
      if (((puVar43 != puVar21) || ((short)uStack_270 != local_37a)) || (uStack_270._2_1_ != cVar11)
         ) goto LAB_143aa68ee;
      plVar29 = (longlong *)FUN_144741050(local_1f8);
      uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
      if (uVar12 == 0xffff) {
        uVar12 = 0;
        if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
          lVar32 = FUN_144a811ba(plVar29);
          sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
          uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
        }
        *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
      }
      memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
      iVar13 = iStack_1a0;
      iStack_1a0 = iStack_1a0 + 4;
      if (uStack_19c - iVar13 < 4) {
        FUN_1481d9b96(&local_1c8);
      }
      in_XMM1._0_12_ = ZEXT812(0x437f0000);
      in_XMM1._12_4_ = 0;
      uVar41 = (uint)((float)uStack_270 * 255.0);
      if (0xfe < (int)uVar41) {
        uVar41 = 0xff;
      }
      if ((int)uVar41 < 1) {
        uVar41 = 0;
      }
      iVar13 = (int)(local_278._4_4_ * 255.0);
      if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      iVar14 = (int)((float)local_278 * 255.0);
      if (0xfe < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      pdVar22 = local_1a8;
      if (local_1a8 == (double *)0x0) {
        pdVar22 = (double *)&local_1c8;
      }
      *(uint *)pdVar22 = iVar13 << 8 | uVar41 | iVar14 << 0x10 | 0xff000000;
      param_2 = local_378;
      lVar32 = local_368;
      cVar30 = local_37b;
    }
    else {
LAB_143aa68ee:
      puVar21 = DAT_14cb42160;
      if ((DAT_14cb42160 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42160);
      }
      if (((puVar20 == puVar21) && ((short)DAT_14cb42168 == sVar37)) &&
         (DAT_14cb42168._2_1_ == cVar36)) {
        FUN_1481112dc(&local_278);
        puVar21 = (undefined8 *)local_278;
        if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_278);
        }
        param_2 = local_378;
        cVar30 = local_37b;
        if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
           (uStack_270._2_1_ == cVar11)) {
          local_278 = (code *)0x0;
          uStack_270 = (int *)0x3f80000000000000;
          plVar29 = (longlong *)FUN_144741050(local_1f8);
          uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
          if (uVar12 == 0xffff) {
            uVar12 = 0;
            if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
              lVar32 = FUN_144a811ba(plVar29);
              sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
              uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
            }
            *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
          }
          memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
          iVar13 = iStack_1a0;
          iStack_1a0 = iStack_1a0 + 4;
          if (uStack_19c - iVar13 < 4) {
            FUN_1481d9b96(&local_1c8);
          }
          in_XMM1._0_12_ = ZEXT812(0x437f0000);
          in_XMM1._12_4_ = 0;
          iVar13 = (int)(uStack_270._4_4_ * 255.0);
          if (0xfe < iVar13) {
            iVar13 = 0xff;
          }
          if (iVar13 < 1) {
            iVar13 = 0;
          }
          uVar41 = (uint)((float)uStack_270 * 255.0);
          if (0xfe < (int)uVar41) {
            uVar41 = 0xff;
          }
          if ((int)uVar41 < 1) {
            uVar41 = 0;
          }
          iVar14 = (int)(local_278._4_4_ * 255.0);
          if (0xfe < iVar14) {
            iVar14 = 0xff;
          }
          if (iVar14 < 1) {
            iVar14 = 0;
          }
          iVar31 = (int)((float)local_278 * 255.0);
          if (0xfe < iVar31) {
            iVar31 = 0xff;
          }
          if (iVar31 < 1) {
            iVar31 = 0;
          }
          pdVar22 = local_1a8;
          if (local_1a8 == (double *)0x0) {
            pdVar22 = (double *)&local_1c8;
          }
          *(uint *)pdVar22 = iVar14 << 8 | iVar31 << 0x10 | iVar13 << 0x18 | uVar41;
          param_2 = local_378;
          lVar32 = local_368;
          cVar30 = local_37b;
          goto LAB_143aa6b4d;
        }
      }
      puVar21 = DAT_14cb42180;
      if ((DAT_14cb42180 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42180);
      }
      if (((puVar20 == puVar21) && ((short)DAT_14cb42188 == sVar37)) &&
         (DAT_14cb42188._2_1_ == cVar36)) {
        FUN_1481112dc(&local_278);
        puVar21 = (undefined8 *)local_278;
        if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_278);
        }
        param_2 = local_378;
        cVar30 = local_37b;
        if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
           (uStack_270._2_1_ == cVar11)) {
          plVar29 = (longlong *)FUN_144741050(local_1f8);
          uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
          if (uVar12 == 0xffff) {
            uVar12 = 0;
            if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
              lVar32 = FUN_144a811ba(plVar29);
              sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
              uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
            }
            *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
          }
          memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
          iVar13 = iStack_1a0;
          iStack_1a0 = iStack_1a0 + 4;
          if (uStack_19c - iVar13 < 4) {
            FUN_1481d9b96(&local_1c8);
          }
          auVar46._4_8_ = 0;
          auVar46._0_4_ = uStack_270._4_4_;
          in_XMM3 = (undefined1  [16])0x0;
          if (uStack_270._4_4_ <= 0.0) {
            auVar46 = ZEXT812(0) << 0x20;
          }
          if (1.0 <= auVar46._0_4_) {
            auVar46._4_8_ = auVar46._4_8_;
            auVar46._0_4_ = 0x3f800000;
          }
          in_XMM2._0_12_ = ZEXT812(0x437f0000);
          in_XMM2._12_4_ = 0;
          fVar24 = (float)uStack_270;
          if ((float)uStack_270 <= 0.0) {
            fVar24 = 0.0;
          }
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
          fVar10 = local_278._4_4_;
          if (local_278._4_4_ <= 0.0) {
            fVar10 = 0.0;
          }
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          fVar47 = fVar10 * 255.0 + 0.5;
          in_XMM1 = ZEXT416((uint)fVar47);
          fVar10 = (float)local_278;
          if ((float)local_278 <= 0.0) {
            fVar10 = 0.0;
          }
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          pdVar22 = local_1a8;
          if (local_1a8 == (double *)0x0) {
            pdVar22 = (double *)&local_1c8;
          }
          *(uint *)pdVar22 =
               (int)(fVar24 * 255.0 + 0.5) & 0xffU |
               ((int)fVar47 & 0xffU) << 8 |
               ((int)(fVar10 * 255.0 + 0.5) & 0xffU) << 0x10 |
               (int)(auVar46._0_4_ * 255.0 + 0.5) << 0x18;
          param_2 = local_378;
          lVar32 = local_368;
          cVar30 = local_37b;
          goto LAB_143aa6b4d;
        }
      }
      puVar21 = DAT_14cb42140;
      if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42140);
      }
      if (((puVar20 == puVar21) && ((short)DAT_14cb42148 == sVar37)) &&
         (DAT_14cb42148._2_1_ == cVar36)) {
        FUN_14811140e(&local_278);
        puVar21 = (undefined8 *)local_278;
        if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_278);
        }
        param_2 = local_378;
        cVar30 = local_37b;
        if (((puVar43 != puVar21) || ((short)uStack_270 != local_37a)) ||
           (uStack_270._2_1_ != cVar11)) goto LAB_143aa6975;
LAB_143aa8818:
        plVar29 = (longlong *)FUN_144741050(local_1f8);
        uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
        if (uVar12 == 0xffff) {
          uVar12 = 0;
          if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
            lVar32 = FUN_144a811ba(plVar29);
            sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
            uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
          }
          *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
        }
        memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
        iVar13 = iStack_1a0;
        iStack_1a0 = iStack_1a0 + 0x18;
        if (uStack_19c - iVar13 < 0x18) {
          FUN_1481d9b96(&local_1c8);
        }
        in_XMM1._0_8_ = (double)local_278._4_4_;
        in_XMM2._0_8_ = (double)(float)local_278;
        fVar24 = (float)uStack_270;
LAB_143aa888d:
        pdVar22 = local_1a8;
        if (local_1a8 == (double *)0x0) {
          pdVar22 = (double *)&local_1c8;
        }
        *pdVar22 = in_XMM2._0_8_;
        pdVar22[1] = in_XMM1._0_8_;
        pdVar22[2] = (double)fVar24;
        param_2 = local_378;
        lVar32 = local_368;
        cVar30 = local_37b;
      }
      else {
LAB_143aa6975:
        puVar21 = DAT_14cb42110;
        if ((DAT_14cb42110 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42110);
        }
        if (((puVar20 == puVar21) && ((short)DAT_14cb42118 == sVar37)) &&
           (DAT_14cb42118._2_1_ == cVar36)) {
          FUN_148111540(&local_278);
          puVar21 = (undefined8 *)local_278;
          if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_278);
          }
          param_2 = local_378;
          cVar30 = local_37b;
          if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
             (uStack_270._2_1_ == cVar11)) {
            plVar29 = (longlong *)FUN_144741050(local_1f8);
            uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
            if (uVar12 == 0xffff) {
              uVar12 = 0;
              if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
                lVar32 = FUN_144a811ba(plVar29);
                sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
                uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
              }
              *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
            }
            memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
            iVar13 = iStack_1a0;
            iStack_1a0 = iStack_1a0 + 0x10;
            if (uStack_19c - iVar13 < 0x10) {
              FUN_1481d9b96(&local_1c8);
            }
            in_XMM1._0_8_ = (double)(float)local_278;
            pdVar22 = local_1a8;
            if (local_1a8 == (double *)0x0) {
              pdVar22 = (double *)&local_1c8;
            }
            *pdVar22 = in_XMM1._0_8_;
            pdVar22[1] = (double)local_278._4_4_;
            param_2 = local_378;
            lVar32 = local_368;
            cVar30 = local_37b;
            goto LAB_143aa6b4d;
          }
        }
        puVar21 = DAT_14cb42140;
        if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42140);
        }
        if (((puVar20 == puVar21) && ((short)DAT_14cb42148 == sVar37)) &&
           (DAT_14cb42148._2_1_ == cVar36)) {
          FUN_1408c4b2a(&local_278);
          puVar21 = (undefined8 *)local_278;
          if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_278);
          }
          param_2 = local_378;
          cVar30 = local_37b;
          if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
             (uStack_270._2_1_ == cVar11)) goto LAB_143aa8818;
        }
        puVar21 = DAT_14cb42160;
        if ((DAT_14cb42160 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42160);
        }
        if (((puVar20 == puVar21) && ((short)DAT_14cb42168 == sVar37)) &&
           (DAT_14cb42168._2_1_ == cVar36)) {
          FUN_148111556(&local_278);
          puVar21 = (undefined8 *)local_278;
          if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_278);
          }
          param_2 = local_378;
          cVar30 = local_37b;
          if (((puVar43 != puVar21) || ((short)uStack_270 != local_37a)) ||
             (uStack_270._2_1_ != cVar11)) goto LAB_143aa69fc;
          local_278 = (code *)0x0;
          uStack_270 = (int *)0x3f80000000000000;
LAB_143aa70fa:
          plVar29 = (longlong *)FUN_144741050(local_1f8);
          uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
          if (uVar12 == 0xffff) {
            uVar12 = 0;
            if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
              lVar32 = FUN_144a811ba(plVar29);
              sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
              uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
            }
            *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
          }
          memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
          iVar13 = iStack_1a0;
          iStack_1a0 = iStack_1a0 + 0x20;
          if (uStack_19c - iVar13 < 0x20) {
            FUN_1481d9b96(&local_1c8);
          }
          in_XMM1._0_8_ = (double)(float)uStack_270;
          in_XMM2._0_8_ = (double)local_278._4_4_;
          in_XMM3._0_8_ = (double)(float)local_278;
          pdVar22 = local_1a8;
          if (local_1a8 == (double *)0x0) {
            pdVar22 = (double *)&local_1c8;
          }
          *pdVar22 = in_XMM3._0_8_;
          pdVar22[1] = in_XMM2._0_8_;
          pdVar22[2] = in_XMM1._0_8_;
          pdVar22[3] = (double)uStack_270._4_4_;
          param_2 = local_378;
          lVar32 = local_368;
          cVar30 = local_37b;
        }
        else {
LAB_143aa69fc:
          puVar21 = DAT_14cb42130;
          if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42130);
          }
          if (((puVar20 == puVar21) && (DAT_14cb42138 == sVar37)) && (DAT_14cb4213a == cVar36)) {
            FUN_1408c4b2a(&local_278);
            puVar21 = (undefined8 *)local_278;
            if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(local_278);
            }
            if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
               (uStack_270._2_1_ == cVar11)) {
              plVar29 = (longlong *)FUN_144741050(local_1f8);
              uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
              if (uVar12 == 0xffff) {
                uVar12 = 0;
                if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
                  lVar32 = FUN_144a811ba(plVar29);
                  sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
                  uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
                }
                *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
                param_2 = local_378;
                cVar30 = local_37b;
              }
              memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
              iVar13 = iStack_1a0;
              lVar32 = local_368;
              dVar5 = (double)(float)uStack_270;
              dVar6 = (double)local_278._4_4_;
              dVar4 = (double)(float)local_278;
              iStack_1a0 = iStack_1a0 + 0x18;
              if (uStack_19c - iVar13 < 0x18) {
                FUN_1481d9b96(&local_1c8);
              }
              pdVar22 = local_1a8;
              if (local_1a8 == (double *)0x0) {
                pdVar22 = (double *)&local_1c8;
              }
              *pdVar22 = dVar4 + dVar9;
              pdVar22[1] = dVar6 + dVar8;
              pdVar22[2] = dVar5 + dVar7;
              goto LAB_143aa6b4d;
            }
          }
          puVar21 = DAT_14cb42130;
          if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42130);
          }
          if (((puVar20 == puVar21) && (DAT_14cb42138 == sVar37)) && (DAT_14cb4213a == cVar36)) {
            FUN_148111582(&local_278);
            puVar21 = (undefined8 *)local_278;
            if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(local_278);
            }
            if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
               (uStack_270._2_1_ == cVar11)) {
              plVar29 = (longlong *)FUN_144741050(local_1f8);
              uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
              if (uVar12 == 0xffff) {
                uVar12 = 0;
                if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
                  lVar32 = FUN_144a811ba(plVar29);
                  sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
                  uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
                }
                *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
              }
              memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
              iVar13 = iStack_1a0;
              auVar48 = in_XMM2._4_12_;
              auVar46 = in_XMM1._4_12_;
              dVar4 = (double)(float)uStack_270;
              dVar5 = (double)local_278._4_4_;
              dVar6 = (double)(float)local_278;
              iStack_1a0 = iStack_1a0 + 0xc;
              if (uStack_19c - iVar13 < 0xc) {
                FUN_1481d9b96(&local_1c8);
                auVar48 = in_XMM2._4_12_;
                auVar46 = in_XMM1._4_12_;
              }
              in_XMM1._0_4_ = (float)(dVar5 + dVar8);
              in_XMM1._4_12_ = auVar46;
              in_XMM2._0_4_ = (float)(dVar6 + dVar9);
              in_XMM2._4_12_ = auVar48;
              pdVar22 = local_1a8;
              if (local_1a8 == (double *)0x0) {
                pdVar22 = (double *)&local_1c8;
              }
              *(float *)pdVar22 = in_XMM2._0_4_;
              *(float *)((longlong)pdVar22 + 4) = in_XMM1._0_4_;
              *(float *)(pdVar22 + 1) = (float)(dVar4 + dVar7);
              param_2 = local_378;
              lVar32 = local_368;
              cVar30 = local_37b;
              goto LAB_143aa6b4d;
            }
          }
          puVar21 = DAT_14cb42190;
          if ((DAT_14cb42190 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42190);
          }
          if (((puVar20 == puVar21) && (DAT_14cb42198 == sVar37)) && (DAT_14cb4219a == cVar36)) {
            FUN_14811156c(&local_278);
            puVar21 = (undefined8 *)local_278;
            if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(local_278);
            }
            if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
               (uStack_270._2_1_ == cVar11)) goto LAB_143aa70fa;
          }
          puVar21 = DAT_14cb42190;
          if ((DAT_14cb42190 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42190);
          }
          if (((puVar20 == puVar21) && (DAT_14cb42198 == sVar37)) && (DAT_14cb4219a == cVar36)) {
            FUN_14811140e(&local_278);
            puVar21 = (undefined8 *)local_278;
            if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(local_278);
            }
            if (((puVar43 == puVar21) && ((short)uStack_270 == local_37a)) &&
               (uStack_270._2_1_ == cVar11)) {
              plVar29 = (longlong *)FUN_144741050(local_1f8);
              uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
              if (uVar12 == 0xffff) {
                uVar12 = 0;
                if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
                  lVar32 = FUN_144a811ba(plVar29);
                  sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
                  uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
                }
                *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
              }
              memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
              iVar13 = iStack_1a0 + 0x18;
              uVar41 = uStack_19c - iStack_1a0;
              iStack_1a0 = iVar13;
              if (uVar41 < 0x18) {
                FUN_1481d9b96(&local_1c8);
              }
              FUN_1467f5e0c(&local_278,&local_1e0);
              in_XMM1._0_8_ = (double)local_1e0._4_4_;
              in_XMM2._0_8_ = (double)(float)local_1e0;
              fVar24 = local_1d8._0_4_;
              goto LAB_143aa888d;
            }
          }
          puVar21 = DAT_14cb420f0;
          if ((DAT_14cb420f0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb420f0);
          }
          param_2 = local_378;
          lVar32 = local_368;
          cVar30 = local_37b;
          if (((puVar20 == puVar21) && ((short)DAT_14cb420f8 == sVar37)) &&
             (DAT_14cb420f8._2_1_ == cVar36)) {
            FUN_1481115c0(&local_278);
            puVar20 = (undefined8 *)local_278;
            if ((local_278 != (code *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(local_278);
            }
            param_2 = local_378;
            lVar32 = local_368;
            cVar30 = local_37b;
            if (((puVar43 == puVar20) && ((short)uStack_270 == local_37a)) &&
               (uStack_270._2_1_ == cVar11)) {
              local_278 = (code *)((ulonglong)local_278 & 0xffffffff00000000);
              plVar29 = (longlong *)FUN_144741050(local_1f8);
              uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
              if (uVar12 == 0xffff) {
                uVar12 = 0;
                if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
                  lVar32 = FUN_144a811ba(plVar29);
                  sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
                  uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
                }
                *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
              }
              memcpy(&local_278,local_1f0,(longlong)(short)uVar12);
              iVar13 = iStack_1a0;
              iStack_1a0 = iStack_1a0 + 8;
              if (uStack_19c - iVar13 < 8) {
                FUN_1481d9b96(&local_1c8);
              }
              pdVar22 = local_1a8;
              if (local_1a8 == (double *)0x0) {
                pdVar22 = (double *)&local_1c8;
              }
              *pdVar22 = (double)(float)local_278;
              param_2 = local_378;
              lVar32 = local_368;
              cVar30 = local_37b;
            }
          }
        }
      }
    }
LAB_143aa6b4d:
    pdVar22 = local_1a8;
    iVar13 = iStack_1a0;
    if (local_1a8 == (double *)0x0) {
      pdVar22 = (double *)&local_1c8;
    }
  }
  iVar14 = (int)uStack_1e8;
  if (0 < (int)uStack_1e8) {
    plVar29 = (longlong *)FUN_144741050(local_1f8);
    uVar12 = *(ushort *)((longlong)plVar29 + 0xc);
    if (uVar12 == 0xffff) {
      uVar12 = 0;
      if ((*plVar29 != 0) && (uVar12 = 0, (short)plVar29[1] != 1)) {
        lVar32 = FUN_144a811ba(plVar29);
        sVar37 = (short)*(undefined4 *)(lVar32 + 0x5c);
        uVar12 = -sVar37 & ((short)*(undefined4 *)(lVar32 + 0x58) + sVar37) - 1U;
      }
      *(ushort *)((longlong)plVar29 + 0xc) = uVar12;
      param_2 = local_378;
      lVar32 = local_368;
      cVar30 = local_37b;
    }
    plVar29 = local_2f8;
    if (iVar14 == (short)uVar12) {
      lVar15 = *local_2a8;
      if ((lVar15 == 0) || (*(char *)(lVar15 + 0xb4) == '\0')) {
        iVar14 = *(int *)(local_328 + 0x18);
        iVar31 = *(int *)(local_328 + 0x44);
        if (iVar14 == iVar31) {
LAB_143aa74dc:
          FUN_1400021e4(local_2f8,&local_210);
          FUN_1481d3894(&local_278,local_348,&local_210);
          local_1e0 = plVar29;
          local_1d8 = &local_278;
          FUN_1481d9d10(local_308,local_1cc,&local_1e0);
          if (CONCAT44(uStack_25c,uStack_260) != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_20c,local_210) != 0) {
            FUN_1400020a8();
          }
          lVar32 = *local_2f8;
          iVar14 = *(int *)(local_328 + 0x18);
          iVar31 = *(int *)(local_328 + 0x44);
        }
        else {
          lVar32 = *local_2f8;
          uVar41 = (uint)((ulonglong)lVar32 >> 0x10);
          uVar28 = (uint)lVar32 & 0xffff;
          lVar15 = *(longlong *)(local_328 + 0x50);
          if (*(longlong *)(local_328 + 0x50) == 0) {
            lVar15 = local_2c8;
          }
          iVar25 = *(int *)(lVar15 + (ulonglong)
                                     (*(int *)(local_328 + 0x58) - 1U &
                                     (int)((ulonglong)lVar32 >> 0x20) +
                                     ((uint)lVar32 << 0x10 | uVar28) +
                                     (uVar41 << 0x13 | uVar41 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar25 == -1) goto LAB_143aa74dc;
          while (*(longlong *)(*local_308 + (longlong)iVar25 * 0x40) != lVar32) {
            iVar25 = *(int *)((longlong)iVar25 * 0x40 + *local_308 + 0x38);
            if (iVar25 == -1) goto LAB_143aa74dc;
          }
        }
        if (iVar14 == iVar31) {
LAB_143aa75f8:
          lVar15 = 0;
        }
        else {
          uVar41 = (uint)((ulonglong)lVar32 >> 0x10);
          uVar28 = (uint)lVar32 & 0xffff;
          lVar15 = *(longlong *)(local_328 + 0x50);
          if (*(longlong *)(local_328 + 0x50) == 0) {
            lVar15 = local_2c8;
          }
          iVar14 = *(int *)(lVar15 + (ulonglong)
                                     (*(int *)(local_328 + 0x58) - 1U &
                                     (int)((ulonglong)lVar32 >> 0x20) +
                                     ((uint)lVar32 << 0x10 | uVar28) +
                                     (uVar41 << 0x13 | uVar41 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar14 == -1) goto LAB_143aa75f8;
          while (lVar15 = *local_308 + (longlong)iVar14 * 0x40,
                *(longlong *)(*local_308 + (longlong)iVar14 * 0x40) != lVar32) {
            iVar14 = *(int *)(lVar15 + 0x38);
            if (iVar14 == -1) goto LAB_143aa75f8;
          }
        }
        FUN_1406fa146(&local_278,lVar15 + 8);
        uStack_250 = *(undefined8 *)(lVar15 + 0x30);
        lVar32 = FUN_1481d397e(&local_278);
        if (lVar32 != 0) {
          lVar32 = FUN_1481d397e(&local_278);
          memcpy((void *)((longlong)*(int *)(lVar32 + 0x44) + (longlong)local_348),pdVar22,
                 (longlong)iVar13);
        }
        param_2 = local_378;
        lVar32 = local_368;
        cVar30 = local_37b;
        if (CONCAT44(uStack_25c,uStack_260) != 0) {
          FUN_1400020a8();
          param_2 = local_378;
          lVar32 = local_368;
          cVar30 = local_37b;
        }
      }
      else {
        local_3d8 = (wchar_t *)(lVar32 + 0x58);
        FUN_140876e04(local_348,lVar15,pdVar22);
      }
    }
  }
  param_1 = local_358;
  lVar16 = local_320;
  uVar41 = local_334;
  if (local_1a8 != (double *)0x0) {
    FUN_1400020a8();
    param_1 = local_358;
    lVar16 = local_320;
    uVar41 = local_334;
  }
LAB_143aa6bf7:
  if (local_1f0 != (double *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143aa6c09;
LAB_143aa63d6:
  lVar38 = lVar38 + 0xc;
  if (lVar15 * 0xc == lVar38) goto LAB_143aa6bf7;
  goto LAB_143aa63d0;
}



// FUNCTION 143aa98e2 FUN_143aa98e2 body=69 status=ok
// SIG undefined FUN_143aa98e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa98e2(void)

{
  _DAT_14cb429e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa9924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb429f0,1);
  return;
}



// FUNCTION 143aa9941 FUN_143aa9941 body=69 status=ok
// SIG undefined FUN_143aa9941(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aa9941(void)

{
  _DAT_14cb429f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aa9983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42a00,1);
  return;
}



// FUNCTION 143aa9986 FUN_143aa9986 body=112 status=ok
// SIG undefined FUN_143aa9986(void)

undefined8 * FUN_143aa9986(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = 0x80;
  if ((*(byte *)(param_1 + 0xf0) & 2) != 0) {
    cVar1 = FUN_14480c900(param_4,param_3);
    if (cVar1 != '\0') {
      uVar2 = *(uint *)(*(longlong *)(param_3 + 8) + 0x50) >> 0x19 & 4 | 0x80;
    }
  }
  *(undefined1 *)((longlong)param_2 + 4) = 0;
  *(uint *)(param_2 + 2) = (*(uint *)(param_1 + 0xf0) & 2) << 0xb | uVar2;
  return param_2;
}



// FUNCTION 143aa99f6 FUN_143aa99f6 body=6301 status=ok
// SIG undefined FUN_143aa99f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143aa99f6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  short sVar8;
  char cVar9;
  ushort uVar10;
  undefined8 *puVar11;
  int *piVar12;
  float *pfVar13;
  longlong *plVar14;
  int *piVar15;
  int *piVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  uint uVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  int iVar38;
  int iVar39;
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 in_XMM3 [16];
  undefined1 auVar41 [16];
  longlong lVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined8 *local_290;
  undefined1 *local_288;
  code *local_280;
  byte local_26b;
  byte local_26a;
  byte local_269;
  byte local_268;
  byte local_267;
  byte local_266;
  byte local_265;
  byte local_264;
  byte local_263;
  byte local_262;
  byte local_261;
  longlong local_260;
  float local_258;
  int local_254;
  float local_250;
  int local_24c;
  longlong local_248;
  int local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  int local_220;
  uint local_21c;
  float local_218;
  int local_214;
  longlong local_210;
  int *local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [24];
  undefined8 *local_170;
  float local_164 [7];
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  longlong local_130 [4];
  undefined1 local_110;
  byte local_10f;
  undefined1 local_10c [4];
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(byte *)(param_1 + 0xf0) & 2) == 0) goto LAB_143aaa325;
  if (((*(int *)(*(longlong *)(param_2 + 0x210) + 8) < 3) &&
      ((DAT_14ca964f0 != '\x01' || ((DAT_14c760e14 & 1) == 0)))) &&
     ((puVar11 = (undefined8 *)0x0, DAT_14c760e10 < 1 || (DAT_14ca964dd == '\0'))))
  goto LAB_143aaa327;
  cVar9 = FUN_144a47c72(param_1,param_3,param_4);
  if (cVar9 != '\0') {
    lVar5 = *(longlong *)(param_4 + 0x10);
    local_1b8 = *(longlong *)(lVar5 + 0x78);
    if ((local_1b8 != 0) && (lVar21 = *(longlong *)(param_4 + 8), lVar21 != 0)) {
      if ((((*(char *)(param_3 + 0x5e) == '\0') &&
           (((*(int *)(lVar21 + 0x4c) != 0 && (uVar19 = *(uint *)(lVar21 + 0x48), -1 < (int)uVar19))
            && ((int)uVar19 < DAT_14c9647dc)))) &&
          (((plVar25 = (longlong *)
                       ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
            plVar25 != (longlong *)0x0 && ((int)plVar25[2] == *(int *)(lVar21 + 0x4c))) &&
           ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))) && (lVar21 = *plVar25, lVar21 != 0)) {
        lVar26 = FUN_14143f1a6();
        lVar21 = *(longlong *)(lVar21 + 0x10);
        if ((*(int *)(lVar26 + 0x38) <= *(int *)(lVar21 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar26 + 0x38) * 8) ==
            lVar26 + 0x30)) goto LAB_143aaa325;
      }
      lVar21 = *(longlong *)(param_4 + 8);
      puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar11 = &PTR_FUN_14ae09a28;
      puVar11[1] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = *(undefined8 *)(lVar21 + 0x100);
      if (*(char *)(param_4 + 0xd1) == '\0') {
        lVar26 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x78);
        if (lVar26 != 0) {
          puVar11[4] = lVar26;
          LOCK();
          *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
          UNLOCK();
        }
      }
      else {
        puVar11[5] = *(undefined8 *)(param_4 + 0x20);
      }
      *puVar11 = &PTR_FUN_14ae0dd90;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
        if (*(char *)(param_2 + 0x388) == '\x01') {
          uVar48 = *(undefined4 *)(lVar21 + 0x50);
          uVar49 = *(undefined4 *)(lVar21 + 0x54);
          uVar50 = *(undefined4 *)(lVar21 + 0x58);
          uVar51 = *(undefined4 *)(lVar21 + 0x5c);
          uVar53 = *(undefined4 *)(lVar21 + 0x60);
          uVar54 = *(undefined4 *)(lVar21 + 100);
          uVar55 = *(undefined4 *)(lVar21 + 0x68);
          uVar56 = *(undefined4 *)(lVar21 + 0x6c);
          dVar33 = *(double *)(lVar21 + 0x70);
          dVar36 = *(double *)(lVar21 + 0x78);
          dVar31 = *(double *)(lVar21 + 0x80);
          dVar32 = *(double *)(lVar21 + 0x88);
          local_1a8 = *(double *)(lVar21 + 0x90);
          dStack_1a0 = *(double *)(lVar21 + 0x98);
          local_198 = *(double *)(lVar21 + 0xa0);
          uStack_190 = *(undefined8 *)(lVar21 + 0xa8);
        }
        else {
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0x3ff00000;
          local_1a8 = 1.0;
          dStack_1a0 = 1.0;
          local_198 = 1.0;
          uStack_190 = 0;
          dVar31 = 0.0;
          dVar32 = 0.0;
          dVar33 = 0.0;
          dVar36 = 0.0;
        }
        auVar46._0_8_ = (double)*(float *)(lVar21 + 0x14) * 65536.0;
        auVar46._8_8_ = 0;
        in_XMM3._0_8_ = (double)*(float *)(lVar21 + 0x10) * 65536.0;
        dVar33 = (double)*(float *)(lVar21 + 0xc) * 65536.0 + dVar33;
        dVar36 = in_XMM3._0_8_ + dVar36;
        local_188._0_8_ = auVar46._0_8_ + dVar31;
        local_188._8_8_ = dVar32 + 0.0;
        if (*(char *)(param_2 + 0x388) != '\0') goto LAB_143aa9ce6;
        local_140 = (float)*(double *)(lVar21 + 0x80);
        auVar46 = ZEXT416((uint)(float)*(double *)(lVar21 + 0x70));
        local_148 = CONCAT44((float)*(double *)(lVar21 + 0x78),(float)*(double *)(lVar21 + 0x70));
      }
      else {
        uVar48 = *(undefined4 *)(lVar21 + 0x50);
        uVar49 = *(undefined4 *)(lVar21 + 0x54);
        uVar50 = *(undefined4 *)(lVar21 + 0x58);
        uVar51 = *(undefined4 *)(lVar21 + 0x5c);
        uVar53 = *(undefined4 *)(lVar21 + 0x60);
        uVar54 = *(undefined4 *)(lVar21 + 100);
        uVar55 = *(undefined4 *)(lVar21 + 0x68);
        uVar56 = *(undefined4 *)(lVar21 + 0x6c);
        local_1a8 = *(double *)(lVar21 + 0x90);
        dStack_1a0 = *(double *)(lVar21 + 0x98);
        local_198 = *(double *)(lVar21 + 0xa0);
        uStack_190 = *(undefined8 *)(lVar21 + 0xa8);
        auVar46 = ZEXT816(0x40f0000000000000);
        dVar33 = (double)*(float *)(lVar21 + 0xc) * 65536.0 + *(double *)(lVar21 + 0x70);
        dVar36 = (double)*(float *)(lVar21 + 0x10) * 65536.0 + *(double *)(lVar21 + 0x78);
        local_188._8_8_ = *(double *)(lVar21 + 0x88) + 0.0;
        local_188._0_8_ = (double)*(float *)(lVar21 + 0x14) * 65536.0 + *(double *)(lVar21 + 0x80);
LAB_143aa9ce6:
        local_140 = DAT_14c846338;
        local_148 = DAT_14c846330;
      }
      plVar25 = (longlong *)(param_4 + 0x40);
      piVar12 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))
                                 (plVar25,param_3 + 0x178,0);
      pfVar13 = (float *)&local_148;
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        pfVar13 = (float *)((longlong)*piVar12 + *(longlong *)(param_4 + 0x60));
      }
      local_224 = *pfVar13;
      local_228 = pfVar13[1];
      local_22c = pfVar13[2];
      plVar14 = (longlong *)FUN_144741050();
      uVar10 = *(ushort *)((longlong)plVar14 + 0xc);
      local_248 = param_3;
      if (uVar10 == 0xffff) {
        if (*plVar14 == 0) {
LAB_143aab27f:
          uVar10 = 0;
        }
        else {
          lVar21 = DAT_14cb420c0;
          if ((short)plVar14[1] == 3) goto LAB_143aab081;
          if ((short)plVar14[1] == 1) goto LAB_143aab27f;
          lVar27 = FUN_1449e2fb2();
          lVar26 = *plVar14;
          if (lVar26 == 0) {
LAB_143aab246:
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            if ((lVar27 != 0) && (lVar6 = *(longlong *)(lVar26 + 0x10), lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x38) < *(int *)(lVar27 + 0x38)) goto LAB_143aab246;
              lVar21 = 0;
              if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8)
                  == lVar27 + 0x30) {
                lVar21 = lVar26;
              }
            }
          }
LAB_143aab081:
          sVar8 = (short)*(undefined4 *)(lVar21 + 0x5c);
          uVar10 = -sVar8 & (sVar8 + (short)*(undefined4 *)(lVar21 + 0x58)) - 1U;
        }
        *(ushort *)((longlong)plVar14 + 0xc) = uVar10;
      }
      lVar21 = local_248;
      pfVar13 = (float *)&local_138;
      memcpy(pfVar13,*(void **)(local_248 + 0x1a0),(longlong)(short)uVar10);
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x1b0,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        pfVar13 = (float *)((longlong)*piVar12 + *(longlong *)(param_4 + 0x60));
      }
      local_238 = *pfVar13;
      local_234 = pfVar13[1];
      local_230 = pfVar13[2];
      fVar58 = pfVar13[3];
      plVar14 = (longlong *)FUN_144741050();
      uVar10 = *(ushort *)((longlong)plVar14 + 0xc);
      if (uVar10 == 0xffff) {
        if (*plVar14 == 0) {
LAB_143aab286:
          uVar10 = 0;
        }
        else {
          lVar21 = DAT_14cb420c0;
          if ((short)plVar14[1] == 3) goto LAB_143aab104;
          if ((short)plVar14[1] == 1) goto LAB_143aab286;
          lVar27 = FUN_1449e2fb2();
          lVar26 = *plVar14;
          if (lVar26 == 0) {
LAB_143aab24d:
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            if ((lVar27 != 0) && (lVar6 = *(longlong *)(lVar26 + 0x10), lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x38) < *(int *)(lVar27 + 0x38)) goto LAB_143aab24d;
              lVar21 = 0;
              if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8)
                  == lVar27 + 0x30) {
                lVar21 = lVar26;
              }
            }
          }
LAB_143aab104:
          sVar8 = (short)*(undefined4 *)(lVar21 + 0x5c);
          uVar10 = -sVar8 & (sVar8 + (short)*(undefined4 *)(lVar21 + 0x58)) - 1U;
        }
        *(ushort *)((longlong)plVar14 + 0xc) = uVar10;
        lVar21 = local_248;
      }
      memcpy(&local_138,*(void **)(lVar21 + 0x1d8),(longlong)(short)uVar10);
      fVar57 = (float)local_138;
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x1e8,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        fVar57 = *(float *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar12);
      }
      plVar14 = (longlong *)FUN_144741050();
      uVar10 = *(ushort *)((longlong)plVar14 + 0xc);
      if (uVar10 == 0xffff) {
        if (*plVar14 == 0) {
LAB_143aab28d:
          uVar10 = 0;
        }
        else {
          lVar21 = DAT_14cb420c0;
          if ((short)plVar14[1] == 3) goto LAB_143aab187;
          if ((short)plVar14[1] == 1) goto LAB_143aab28d;
          lVar27 = FUN_1449e2fb2();
          lVar26 = *plVar14;
          if (lVar26 == 0) {
LAB_143aab254:
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            if ((lVar27 != 0) && (lVar6 = *(longlong *)(lVar26 + 0x10), lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x38) < *(int *)(lVar27 + 0x38)) goto LAB_143aab254;
              lVar21 = 0;
              if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8)
                  == lVar27 + 0x30) {
                lVar21 = lVar26;
              }
            }
          }
LAB_143aab187:
          sVar8 = (short)*(undefined4 *)(lVar21 + 0x5c);
          uVar10 = -sVar8 & (sVar8 + (short)*(undefined4 *)(lVar21 + 0x58)) - 1U;
        }
        *(ushort *)((longlong)plVar14 + 0xc) = uVar10;
        lVar21 = local_248;
      }
      memcpy(&local_138,*(void **)(lVar21 + 0x210),(longlong)(short)uVar10);
      local_250 = (float)local_138;
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x220,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        local_250 = *(float *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar12);
      }
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x108,0);
      local_24c = -1;
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        local_24c = *(int *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar12);
      }
      piVar12 = (int *)(lVar21 + 0xe0);
      piVar15 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 600,0);
      piVar16 = piVar12;
      if ((piVar15 != (int *)0x0) && ((longlong)*piVar15 != -1)) {
        piVar16 = (int *)((longlong)*piVar15 + *(longlong *)(param_4 + 0x60));
      }
      local_214 = *piVar16;
      pfVar13 = (float *)(lVar21 + 0xc4);
      local_208 = piVar12;
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x140,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        pfVar13 = (float *)((longlong)*piVar12 + *(longlong *)(param_4 + 0x60));
      }
      local_258 = *pfVar13;
      pfVar13 = (float *)(lVar21 + 200);
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x290,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        pfVar13 = (float *)((longlong)*piVar12 + *(longlong *)(param_4 + 0x60));
      }
      local_1f4 = *pfVar13;
      pfVar13 = (float *)(lVar21 + 0xcc);
      puVar28 = (undefined8 *)0x0;
      piVar12 = (int *)(**(code **)(*plVar25 + 0x58))(plVar25,lVar21 + 0x2c8,0);
      if ((piVar12 != (int *)0x0) && ((longlong)*piVar12 != -1)) {
        pfVar13 = (float *)((longlong)*piVar12 + *(longlong *)(param_4 + 0x60));
      }
      local_1f8 = *pfVar13;
      if ((*(byte *)(lVar21 + 0xbc) & 8) == 0) {
        if (DAT_14cb366a0 == (longlong *)0x0) {
          local_138 = FUN_1449e2820;
          local_280 = FUN_14081d0ea;
          local_288 = &LAB_140eca530;
          local_298 = &LAB_148063819;
          local_2a0 = &LAB_1460672b6;
          local_2a8 = L"Niagara";
          local_2b0 = 0;
          local_2b8 = 0x10000006;
          local_2c0 = 8;
          local_2c8 = 0x130;
          puVar28 = &DAT_14cb366a0;
          local_290 = &local_138;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
        }
        plVar25 = DAT_14cb366a0;
        lVar26 = DAT_14cb366a0[0x22];
        if (lVar26 == 0) {
          (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
          lVar26 = plVar25[0x22];
        }
        pfVar13 = (float *)(lVar26 + 0xe8);
      }
      else {
        pfVar13 = (float *)(lVar21 + 0xdc);
      }
      local_1c0 = puVar11 + 6;
      local_218 = *pfVar13;
      if (*(char *)(lVar21 + 0xb8) == '\0') {
        iVar2 = *(int *)(lVar21 + 0x2e4);
        local_26b = *(byte *)(lVar21 + 0x2e0);
        lVar26 = *(longlong *)(lVar5 + 0x78);
        local_110 = 0;
        local_262 = iVar2 != -1 && lVar26 != 0;
        lVar27 = CONCAT71((int7)((ulonglong)puVar28 >> 8),local_262);
        _local_10c = 0;
        uStack_108._4_4_ = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        local_1b0 = 0;
        local_21c = 0;
        if (iVar2 != -1 && lVar26 != 0) {
          local_110 = 1;
          uVar3 = *(undefined4 *)(lVar26 + 0x128 + (ulonglong)(local_26b ^ 1) * 8);
          lVar6 = *(longlong *)(lVar26 + 0x18 + (ulonglong)(local_26b ^ 1) * 0x20);
          auVar35._4_4_ = uVar3;
          auVar35._0_4_ = uVar3;
          auVar35._8_8_ = 0;
          auVar37 = pmovsxbd(auVar46,0x100);
          auVar41 = pmovsxbq(in_XMM3,0x100);
          lVar20 = 0;
          auVar46 = pmovsxbq(ZEXT416((uint)fVar58),0x202);
          auVar47 = pmovsxbd(unaff_XMM7,0x2020202);
          do {
            auVar52._0_4_ = iVar2 + auVar37._0_4_;
            iVar38 = auVar37._4_4_;
            auVar52._4_4_ = iVar2 + iVar38;
            iVar39 = auVar37._8_4_;
            auVar52._8_4_ = iVar39;
            iVar40 = auVar37._12_4_;
            auVar52._12_4_ = iVar40;
            auVar52 = pmulld(auVar52,auVar35);
            auVar52 = pmovzxdq(auVar52,auVar52);
            if (SUB168(auVar41 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
              *(longlong *)(local_10c + lVar20 * 8 + 4) = auVar52._0_8_ + lVar6;
            }
            lVar27 = 0;
            if (SUB168(auVar41 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
              lVar27 = auVar52._8_8_ + lVar6;
              *(longlong *)(&uStack_100 + lVar20 * 2) = lVar27;
            }
            lVar20 = lVar20 + 2;
            lVar42 = auVar41._8_8_;
            auVar41._0_8_ = auVar41._0_8_ + auVar46._0_8_;
            auVar41._8_8_ = lVar42 + auVar46._8_8_;
            auVar37._0_4_ = auVar37._0_4_ + auVar47._0_4_;
            auVar37._4_4_ = iVar38 + auVar47._4_4_;
            auVar37._8_4_ = iVar39 + auVar47._8_4_;
            auVar37._12_4_ = iVar40 + auVar47._12_4_;
          } while (lVar20 != 4);
          local_21c = *(uint *)(lVar26 + 0x120);
          _local_10c = (ulonglong)local_21c;
        }
        local_1fc = fVar58;
        local_10f = local_26b;
        FUN_144a47c00(&local_138,lVar26,
                      CONCAT71((int7)((ulonglong)lVar27 >> 8),*(undefined1 *)(lVar21 + 0x2e8)),
                      *(undefined4 *)(lVar21 + 0x2ec));
        iVar2 = *(int *)(lVar21 + 0x2f4);
        bVar1 = *(byte *)(lVar21 + 0x2f0);
        lVar5 = *(longlong *)(lVar5 + 0x78);
        if (iVar2 == -1 || lVar5 == 0) {
          local_1e0 = 0;
        }
        else {
          bVar17 = bVar1 ^ 1;
          local_1e0 = (ulonglong)(uint)(iVar2 * *(int *)(lVar5 + 0x128 + (ulonglong)bVar17 * 8)) +
                      *(longlong *)(lVar5 + 0x18 + (ulonglong)bVar17 * 0x20);
          local_1b0 = (ulonglong)*(uint *)(lVar5 + 0x120);
        }
        iVar38 = *(int *)(lVar21 + 0x2fc);
        local_26a = *(byte *)(lVar21 + 0x2f8);
        local_266 = iVar38 != -1 && lVar5 != 0;
        local_1c8 = 0;
        if (iVar38 != -1 && lVar5 != 0) {
          local_1f0 = (ulonglong)
                      (uint)(iVar38 * *(int *)(lVar5 + 0x128 + (ulonglong)(local_26a ^ 1) * 8)) +
                      *(longlong *)(lVar5 + 0x18 + (ulonglong)(local_26a ^ 1) * 0x20);
          local_23c = *(int *)(lVar5 + 0x120);
        }
        else {
          local_23c = 0;
          local_1f0 = 0;
        }
        iVar38 = *(int *)(lVar21 + 0x304);
        local_267 = *(byte *)(lVar21 + 0x300);
        local_263 = iVar38 != -1 && lVar5 != 0;
        if (iVar38 != -1 && lVar5 != 0) {
          local_1e8 = (ulonglong)
                      (uint)(iVar38 * *(int *)(lVar5 + 0x128 + (ulonglong)(local_267 ^ 1) * 8)) +
                      *(longlong *)(lVar5 + 0x18 + (ulonglong)(local_267 ^ 1) * 0x20);
          local_1c8 = (ulonglong)*(uint *)(lVar5 + 0x120);
        }
        else {
          local_1e8 = 0;
        }
        iVar38 = *(int *)(lVar21 + 0x308);
        iVar39 = 0;
        if (iVar38 == -1 || lVar5 == 0) {
          lVar26 = 0;
          iVar40 = 0;
        }
        else {
          lVar26 = (ulonglong)(uint)(iVar38 * *(int *)(lVar5 + 300)) + *(longlong *)(lVar5 + 0x28);
          iVar40 = *(int *)(lVar5 + 0x120);
        }
        iVar18 = *(int *)(lVar21 + 0x30c);
        local_261 = iVar18 != -1 && lVar5 != 0;
        if (iVar18 != -1 && lVar5 != 0) {
          local_1d8 = (ulonglong)(uint)(iVar18 * *(int *)(lVar5 + 300)) +
                      *(longlong *)(lVar5 + 0x28);
          iVar39 = *(int *)(lVar5 + 0x120);
        }
        else {
          local_1d8 = 0;
        }
        iVar18 = *(int *)(lVar21 + 0x314);
        local_268 = *(byte *)(lVar21 + 0x310);
        local_264 = iVar18 != -1 && lVar5 != 0;
        local_1d0 = 0;
        if (iVar18 != -1 && lVar5 != 0) {
          local_260 = (ulonglong)
                      (uint)(iVar18 * *(int *)(lVar5 + 0x128 + (ulonglong)(local_268 ^ 1) * 8)) +
                      *(longlong *)(lVar5 + 0x18 + (ulonglong)(local_268 ^ 1) * 0x20);
          local_220 = *(int *)(lVar5 + 0x120);
        }
        else {
          local_260 = 0;
          local_220 = 0;
        }
        iVar18 = *(int *)(lVar21 + 0x31c);
        local_269 = *(byte *)(lVar21 + 0x318);
        local_265 = iVar18 != -1 && lVar5 != 0;
        if (iVar18 != -1 && lVar5 != 0) {
          local_210 = (ulonglong)
                      (uint)(iVar18 * *(int *)(lVar5 + 0x128 + (ulonglong)(local_269 ^ 1) * 8)) +
                      *(longlong *)(lVar5 + 0x18 + (ulonglong)(local_269 ^ 1) * 0x20);
          local_1d0 = (ulonglong)*(uint *)(lVar5 + 0x120);
        }
        else {
          local_210 = 0;
        }
        uVar19 = *(uint *)(local_1b8 + 0x120);
        local_170 = puVar11;
        if (uVar19 != 0) {
          uVar29 = 0;
          local_254 = iVar40;
          do {
            lVar27 = (longlong)(int)uVar29;
            iVar18 = local_214;
            if (((int)uVar29 < iVar39 & local_261) == 1) {
              iVar18 = *(int *)(local_1d8 + lVar27 * 4);
            }
            iVar4 = local_24c;
            if ((int)uVar29 < iVar40 && (iVar38 != -1 && lVar5 != 0)) {
              iVar4 = *(int *)(lVar26 + lVar27 * 4);
            }
            if (iVar4 == 0) {
              bVar30 = false;
            }
            else {
              bVar30 = iVar18 == *local_208;
            }
            fVar58 = fVar57;
            if ((int)uVar29 < (int)local_1b0 && (iVar2 != -1 && lVar5 != 0)) {
              if (bVar1 == 0) {
                uVar10 = *(ushort *)(local_1e0 + lVar27 * 2);
                uVar22 = (uint)uVar10 << 0xd;
                if ((uVar22 & 0xf800000) == 0xf800000) {
                  fVar58 = (float)(uVar22 | 0x70000000);
                }
                else if ((uVar22 & 0xf800000) == 0) {
                  fVar58 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar58 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                }
                fVar58 = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar58);
              }
              else {
                fVar58 = *(float *)(local_1e0 + lVar27 * 4);
              }
            }
            fVar58 = fVar58 * *(float *)(lVar21 + 0xc0);
            if ((bool)(bVar30 & 0.0 < fVar58)) {
              pfVar13 = (float *)FUN_14024d1ce();
              if (((char)local_138 == '\x01') && ((int)uVar29 < local_138._4_4_)) {
                if (local_138._1_1_ == '\0') {
                  lVar21 = 0;
                  do {
                    uVar10 = *(ushort *)(local_130[lVar21] + lVar27 * 2);
                    uVar19 = (uint)uVar10 << 0xd;
                    if ((uVar19 & 0xf800000) == 0xf800000) {
                      fVar23 = (float)(uVar19 | 0x70000000);
                    }
                    else if ((uVar19 & 0xf800000) == 0) {
                      fVar23 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar23 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                    }
                    local_164[lVar21 + 3] = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar23)
                    ;
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 4);
                }
                else {
                  lVar21 = 0;
                  do {
                    local_164[lVar21 + 3] = *(float *)(local_130[lVar21] + lVar27 * 4);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 4);
                }
              }
              else {
                local_164[3] = local_238;
                local_164[4] = local_234;
                local_164[5] = local_230;
                local_164[6] = local_1fc;
              }
              fVar23 = 1.0;
              if ((*(byte *)(local_248 + 0xbc) & 4) != 0) {
                fVar23 = local_164[6];
              }
              if (((int)uVar29 < (int)local_21c & local_262) == 1) {
                if (local_26b == 0) {
                  lVar21 = 0;
                  do {
                    uVar10 = *(ushort *)(*(longlong *)(local_10c + lVar21 * 8 + 4) + lVar27 * 2);
                    uVar19 = (uint)uVar10 << 0xd;
                    if ((uVar19 & 0xf800000) == 0xf800000) {
                      fVar24 = (float)(uVar19 | 0x70000000);
                    }
                    else if ((uVar19 & 0xf800000) == 0) {
                      fVar24 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar24 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                    }
                    local_164[lVar21] = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar24);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 3);
                }
                else {
                  lVar21 = 0;
                  do {
                    local_164[lVar21] =
                         *(float *)(*(longlong *)(local_10c + lVar21 * 8 + 4) + lVar27 * 4);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 3);
                }
              }
              else {
                local_164[0] = local_224;
                local_164[1] = local_228;
                local_164[2] = local_22c;
              }
              pfVar13[3] = fVar58;
              fVar58 = *(float *)(local_248 + 0xd8);
              fVar24 = *(float *)(local_248 + 0xd4);
              *pfVar13 = fVar23 * local_164[3] + *(float *)(local_248 + 0xd0);
              pfVar13[1] = local_164[4] * fVar23 + fVar24;
              pfVar13[2] = local_164[5] * fVar23 + fVar58;
              fVar58 = 0.0;
              if (((*(byte *)(local_248 + 0xbc) & 1) == 0) &&
                 (fVar58 = local_258, ((int)uVar29 < local_23c & local_266) == 1)) {
                if (local_26a == 0) {
                  uVar10 = *(ushort *)(local_1f0 + lVar27 * 2);
                  uVar19 = (uint)uVar10 << 0xd;
                  if ((uVar19 & 0xf800000) == 0xf800000) {
                    fVar58 = (float)(uVar19 | 0x70000000);
                  }
                  else if ((uVar19 & 0xf800000) == 0) {
                    fVar58 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar58 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                  }
                  fVar58 = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar58);
                }
                else {
                  fVar58 = *(float *)(local_1f0 + lVar27 * 4);
                }
              }
              pfVar13[4] = fVar58;
              pfVar13[5] = local_218;
              *(byte *)(pfVar13 + 9) = *(byte *)(local_248 + 0xbc) >> 1 & 1;
              fVar58 = local_250;
              if (((int)uVar29 < (int)local_1c8 & local_263) == 1) {
                if (local_267 == 0) {
                  uVar10 = *(ushort *)(local_1e8 + lVar27 * 2);
                  uVar19 = (uint)uVar10 << 0xd;
                  if ((uVar19 & 0xf800000) == 0xf800000) {
                    fVar58 = (float)(uVar19 | 0x70000000);
                  }
                  else if ((uVar19 & 0xf800000) == 0) {
                    fVar58 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar58 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                  }
                  fVar58 = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar58);
                }
                else {
                  fVar58 = *(float *)(local_1e8 + lVar27 * 4);
                }
              }
              pfVar13[6] = fVar58;
              fVar58 = local_1f4;
              if (((int)uVar29 < local_220 & local_264) == 1) {
                if (local_268 == 0) {
                  uVar10 = *(ushort *)(local_260 + lVar27 * 2);
                  uVar19 = (uint)uVar10 << 0xd;
                  if ((uVar19 & 0xf800000) == 0xf800000) {
                    fVar58 = (float)(uVar19 | 0x70000000);
                  }
                  else if ((uVar19 & 0xf800000) == 0) {
                    fVar58 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar58 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                  }
                  fVar58 = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar58);
                }
                else {
                  fVar58 = *(float *)(local_260 + lVar27 * 4);
                }
              }
              pfVar13[7] = fVar58;
              fVar58 = local_1f8;
              if (((int)uVar29 < (int)local_1d0 & local_265) == 1) {
                if (local_269 == 0) {
                  uVar10 = *(ushort *)(local_210 + lVar27 * 2);
                  uVar19 = (uint)uVar10 << 0xd;
                  if ((uVar19 & 0xf800000) == 0xf800000) {
                    fVar58 = (float)(uVar19 | 0x70000000);
                  }
                  else if ((uVar19 & 0xf800000) == 0) {
                    fVar58 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar58 = (float)((uVar19 & 0xfffe000) + 0x38000000);
                  }
                  fVar58 = (float)((int)(short)uVar10 & 0x80000000U | (uint)fVar58);
                }
                else {
                  fVar58 = *(float *)(local_210 + lVar27 * 4);
                }
              }
              pfVar13[8] = fVar58;
              dVar34 = (double)local_164[0] * local_1a8;
              dVar43 = (double)local_164[1] * dStack_1a0;
              dVar31 = (double)local_164[2] * local_198;
              dVar32 = dVar43 * (double)CONCAT44(uVar49,uVar48) -
                       (double)CONCAT44(uVar51,uVar50) * dVar34;
              dVar44 = dVar31 * (double)CONCAT44(uVar51,uVar50) -
                       (double)CONCAT44(uVar54,uVar53) * dVar43;
              dVar45 = dVar34 * (double)CONCAT44(uVar54,uVar53) -
                       (double)CONCAT44(uVar49,uVar48) * dVar31;
              dVar44 = dVar44 + dVar44;
              dVar45 = dVar45 + dVar45;
              dVar32 = dVar32 + dVar32;
              auVar47._0_8_ =
                   (dVar32 * (double)CONCAT44(uVar51,uVar50) -
                   dVar45 * (double)CONCAT44(uVar54,uVar53)) +
                   (double)CONCAT44(uVar56,uVar55) * dVar44 + dVar34 + dVar33;
              auVar47._8_8_ =
                   ((double)CONCAT44(uVar54,uVar53) * dVar44 -
                   (double)CONCAT44(uVar49,uVar48) * dVar32) +
                   (double)CONCAT44(uVar56,uVar55) * dVar45 + dVar43 + dVar36;
              *(undefined1 (*) [16])(pfVar13 + 10) = auVar47;
              *(double *)(pfVar13 + 0xe) =
                   dVar32 * (double)CONCAT44(uVar56,uVar55) + dVar31 +
                   (dVar45 * (double)CONCAT44(uVar49,uVar48) -
                   dVar44 * (double)CONCAT44(uVar51,uVar50)) + (double)local_188._0_8_;
              uVar19 = *(uint *)(local_1b8 + 0x120);
              lVar21 = local_248;
              iVar40 = local_254;
            }
            uVar29 = uVar29 + 1;
            puVar11 = local_170;
          } while (uVar29 < uVar19);
        }
      }
      else if (((local_24c != 0) && (local_214 == *local_208)) &&
              (fVar57 = fVar57 * *(float *)(lVar21 + 0xc0), 0.0 < fVar57)) {
        if ((*(byte *)(lVar21 + 0xbc) & 4) == 0) {
          fVar58 = 1.0;
        }
        pfVar13 = (float *)FUN_14024d1ce(local_1c0);
        pfVar13[3] = fVar57;
        fVar57 = *(float *)(lVar21 + 0xd8);
        fVar23 = *(float *)(lVar21 + 0xd4);
        *pfVar13 = local_238 * fVar58 + *(float *)(lVar21 + 0xd0);
        pfVar13[1] = local_234 * fVar58 + fVar23;
        pfVar13[2] = local_230 * fVar58 + fVar57;
        if ((*(byte *)(lVar21 + 0xbc) & 1) != 0) {
          local_258 = 0.0;
        }
        pfVar13[4] = local_258;
        pfVar13[5] = local_218;
        *(byte *)(pfVar13 + 9) = *(byte *)(lVar21 + 0xbc) >> 1 & 1;
        pfVar13[6] = local_250;
        pfVar13[7] = *(float *)(lVar21 + 200);
        pfVar13[8] = *(float *)(lVar21 + 0xcc);
        dVar43 = local_1a8 * (double)local_224;
        dVar44 = dStack_1a0 * (double)local_228;
        dVar45 = local_198 * (double)local_22c;
        dVar31 = dVar44 * (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar51,uVar50) * dVar43
        ;
        dVar32 = dVar45 * (double)CONCAT44(uVar51,uVar50) - (double)CONCAT44(uVar54,uVar53) * dVar44
        ;
        dVar34 = dVar43 * (double)CONCAT44(uVar54,uVar53) - (double)CONCAT44(uVar49,uVar48) * dVar45
        ;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar31 = dVar31 + dVar31;
        dVar36 = dVar36 + ((double)CONCAT44(uVar54,uVar53) * dVar32 -
                          (double)CONCAT44(uVar49,uVar48) * dVar31) +
                          (double)CONCAT44(uVar56,uVar55) * dVar34 + dVar44;
        auVar7._8_4_ = SUB84(dVar36,0);
        auVar7._0_8_ = dVar33 + (dVar31 * (double)CONCAT44(uVar51,uVar50) -
                                dVar34 * (double)CONCAT44(uVar54,uVar53)) +
                                (double)CONCAT44(uVar56,uVar55) * dVar32 + dVar43;
        auVar7._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        *(undefined1 (*) [16])(pfVar13 + 10) = auVar7;
        *(double *)(pfVar13 + 0xe) =
             (double)local_188._0_8_ +
             (double)CONCAT44(uVar56,uVar55) * dVar31 + dVar45 +
             (dVar34 * (double)CONCAT44(uVar49,uVar48) - dVar32 * (double)CONCAT44(uVar51,uVar50));
      }
      goto LAB_143aaa327;
    }
  }
LAB_143aaa325:
  puVar11 = (undefined8 *)0x0;
LAB_143aaa327:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 143aab294 FUN_143aab294 body=69 status=ok
// SIG undefined FUN_143aab294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aab294(void)

{
  _DAT_14cb42a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aab2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42a10,1);
  return;
}



// FUNCTION 143aab2d9 FUN_143aab2d9 body=69 status=ok
// SIG undefined FUN_143aab2d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aab2d9(void)

{
  _DAT_14cb42a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aab31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42a20,1);
  return;
}



// FUNCTION 143aab31e FUN_143aab31e body=69 status=ok
// SIG undefined FUN_143aab31e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aab31e(void)

{
  _DAT_14cb42a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aab360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42a30,1);
  return;
}



// FUNCTION 143aab366 FUN_143aab366 body=1569 status=ok
// SIG undefined FUN_143aab366(void)

void FUN_143aab366(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,int param_8)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar15;
  
  *param_3 = param_5;
  if (*(int *)(param_1 + 0xf8) < 3) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    if (((ulonglong)
         *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_7 + 0x210) + 8) * 2) !=
         0xc) && (lVar7 = (ulonglong)
                          *(ushort *)
                           (&DAT_14ca85070 +
                           (longlong)*(int *)(*(longlong *)(param_7 + 0x210) + 8) * 2) * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar7) != DAT_14ca81490)) {
      if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar7 + 3) & 0x10) == 0) {
        bVar5 = 1;
      }
      else {
        bVar5 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar7 + 3) & 0x20) >> 5;
      }
    }
  }
  *(byte *)(param_3 + 3) = bVar5;
  param_3[1] = param_6;
  if (param_6 == 0) {
    return;
  }
  if (*(longlong *)(param_7 + 0x2f8) == 0) {
    return;
  }
  plVar11 = *(longlong **)(param_6 + 0x28);
  if (plVar11 == (longlong *)0x0) {
    lVar7 = *(longlong *)(param_6 + 0x20);
  }
  else {
    lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,(*(uint *)(param_1 + 0x1c8) & 8) >> 3);
  }
  if (lVar7 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x1c4) == '\0') && (*(int *)(lVar7 + 0x120) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x1b0) == 0) {
    return;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((((*(byte *)(param_1 + 0x1c8) & 8) == 0) || (param_8 < *(int *)(lVar7 + 0x58))) ||
      (((*(byte *)(param_7 + 0x72) & 1) != 0 ||
       ((*(int *)(param_3[1] + 0x78) < 1 ||
        (plVar11 = *(longlong **)(param_3[1] + 0x28), plVar11 == (longlong *)0x0)))))) ||
     (cVar4 = (**(code **)(*plVar11 + 8))(), cVar4 == '\0')) {
    uVar6 = 0;
  }
  else {
    if ((longlong)*(int *)(param_4 + 0x10) != 0) {
      plVar11 = *(longlong **)(param_4 + 8);
      lVar7 = (longlong)*(int *)(param_4 + 0x10) << 3;
      do {
        if (0.0 < *(float *)(*plVar11 + 0x23f8)) goto LAB_143aab514;
        plVar11 = plVar11 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    plVar11 = (longlong *)0x0;
LAB_143aab514:
    uVar6 = (uint)CONCAT71((int7)((ulonglong)plVar11 >> 8),plVar11 == (longlong *)0x0);
  }
  *(char *)((longlong)param_3 + 0x1f) = (char)uVar6;
  *(undefined1 *)((longlong)param_3 + 0x19) = 0;
  lVar7 = param_3[1];
  *(bool *)((longlong)param_3 + 0x1a) = 0 < *(int *)(lVar7 + 0x78);
  lVar10 = lVar7 + 0x30;
  if (*(longlong *)(lVar7 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar7 + 0x70);
  }
  iVar1 = *(int *)(lVar7 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      plVar8 = (longlong *)
               FUN_14485b2b4(*(undefined8 *)(lVar10 + lVar7),*(undefined4 *)(param_1 + 0xf8));
      pcVar9 = *(code **)(*plVar8 + 0x270);
      plVar11 = plVar8;
      if (pcVar9 == (code *)&LAB_1447f82f4) {
        plVar11 = (longlong *)plVar8[9];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)plVar8[8];
          pcVar9 = *(code **)(*plVar11 + 0x408);
          if (pcVar9 != (code *)&LAB_14470b702) goto LAB_143aab61d;
          bVar5 = *(byte *)((longlong)plVar11 + 0x129);
          if (bVar5 == 1) {
            bVar5 = ~*(byte *)((longlong)plVar11 + 0x1d6) & 1;
          }
          uVar6 = (uint)bVar5;
        }
        else {
          pcVar9 = *(code **)(*plVar11 + 0x408);
          if (pcVar9 != (code *)&LAB_14497e176) goto LAB_143aab61d;
          uVar6 = (uint)*(byte *)(plVar11 + 0x2b);
        }
      }
      else {
LAB_143aab61d:
        uVar6 = (*pcVar9)(plVar11);
      }
      *(byte *)((longlong)param_3 + 0x19) = *(byte *)((longlong)param_3 + 0x19) | 1 < uVar6;
      *(byte *)((longlong)param_3 + 0x1a) = *(byte *)((longlong)param_3 + 0x1a) & 1 < uVar6;
      if (*(char *)((longlong)param_3 + 0x1f) == '\x01') {
        uVar6 = FUN_14040f37f(param_4,param_7,plVar8);
        uVar6 = uVar6 ^ 1;
      }
      else {
        uVar6 = 0;
      }
      *(char *)((longlong)param_3 + 0x1f) = (char)uVar6;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    lVar7 = param_3[1];
  }
  plVar11 = *(longlong **)(lVar7 + 0x28);
  if (plVar11 == (longlong *)0x0) {
    lVar7 = *(longlong *)(lVar7 + 0x20);
  }
  else {
    lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar6,*plVar11,param_2);
  }
  param_3[2] = lVar7;
  if ((lVar7 == 0) ||
     (((*(char *)(param_1 + 0x1c4) == '\0' && (*(int *)(lVar7 + 0x120) == 0)) ||
      (*(int *)(param_1 + 0x1b0) == 0)))) {
LAB_143aab717:
    param_3[2] = 0;
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x218) != -1) {
    *(undefined4 *)(param_3 + 0x1d) =
         *(undefined4 *)(*(longlong *)(param_3[1] + 0xa0) + (longlong)*(int *)(param_1 + 0x218));
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x21c);
  if (lVar10 != -1) {
    lVar2 = *(longlong *)(param_3[1] + 0xa0);
    *(undefined8 *)((longlong)param_3 + 0xec) = *(undefined8 *)(lVar2 + lVar10);
    *(undefined4 *)((longlong)param_3 + 0xf4) = *(undefined4 *)(lVar2 + 8 + lVar10);
  }
  iVar1 = *(int *)(param_1 + 0x20c);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_3[1] + 0xa8))) &&
     (*(int *)(param_1 + 0x208) != *(int *)(*(longlong *)(param_3[1] + 0xa0) + (longlong)iVar1)))
  goto LAB_143aab717;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1c5) == '\0') {
    *(undefined1 *)((longlong)param_3 + 0x1c) = 0;
LAB_143aab7b5:
    plVar11 = (longlong *)(param_1 + 0x278);
    param_3[4] = *(undefined8 *)(param_1 + 0x278);
    *(undefined4 *)(param_3 + 5) = 0;
  }
  else {
    if (*(char *)((longlong)param_3 + 0x19) == '\x01') {
      *(undefined1 *)((longlong)param_3 + 0x1c) = 1;
    }
    else {
      bVar17 = (*(byte *)(param_1 + 0x1c8) & 4) == 0;
      *(bool *)((longlong)param_3 + 0x1c) = bVar17;
      if (!bVar17) goto LAB_143aab7b5;
    }
    bVar17 = 1 < (byte)(*(char *)(param_1 + 0x1c5) - 3U);
    lVar10 = 7;
    if (bVar17) {
      lVar10 = 0;
    }
    plVar11 = (longlong *)(param_1 + (ulonglong)bVar17 * 8 + 0x270);
    lVar2 = *plVar11;
    param_3[4] = lVar2;
    *(int *)(param_3 + 5) = (int)lVar10;
    lVar2 = *(longlong *)(lVar2 + 0x10);
    uVar12 = (uint)*(ushort *)(lVar2 + 2 + lVar10 * 8);
    uVar6 = 0xffffffff;
    if (uVar12 != 0xffff) {
      uVar6 = uVar12;
    }
    *(bool *)((longlong)param_3 + 0x1c) =
         ((uint)*(byte *)(lVar2 + 7 + lVar10 * 8) << 0x1f | uVar6) != 0xffffffff;
  }
  bVar5 = *(byte *)(param_3 + 3);
  bVar16 = bVar5 ^ 1;
  if ((*(uint *)(param_1 + 0x1c8) & 0xa0) == 0) {
    bVar16 = 0;
  }
  *(byte *)((longlong)param_3 + 0x1d) = bVar16;
  bVar15 = (byte)*(undefined4 *)(param_1 + 0x1c8);
  bVar14 = bVar15 >> 7;
  *(byte *)((longlong)param_3 + 0x1e) = bVar14;
  bVar13 = bVar5;
  if ((*(byte *)((longlong)param_3 + 0x1c) & DAT_14c7616c0 != 0) == 0) {
    if ((bVar16 & 1) == 0) {
      *(undefined1 *)((longlong)param_3 + 0x1b) = 0;
      if (*(char *)(param_1 + 0xf4) != '\x01') goto LAB_143aab94f;
LAB_143aab91e:
      bVar13 = 0;
      goto LAB_143aab920;
    }
    if ((DAT_14c762800 == 0) || (DAT_14c7616c0 == 0)) {
      *(undefined1 *)((longlong)param_3 + 0x1b) = 0;
      if (*(char *)(param_1 + 0xf4) == '\x01') goto LAB_143aab909;
    }
    else {
      bVar16 = DAT_14c7627f8 != 0 & DAT_14ca84d96;
      *(byte *)((longlong)param_3 + 0x1b) = bVar16;
      if (*(char *)(param_1 + 0xf4) == '\x01') {
        bVar13 = 1;
        if (bVar16 != 0) goto LAB_143aab920;
LAB_143aab909:
        *(undefined2 *)((longlong)param_3 + 0x1d) = 0;
        goto LAB_143aab91e;
      }
      if (bVar16 != 0) goto LAB_143aab835;
    }
LAB_143aab94f:
    bVar14 = bVar14 & bVar13;
  }
  else {
    *(undefined1 *)((longlong)param_3 + 0x1b) = 1;
    bVar13 = 1;
    if (*(char *)(param_1 + 0xf4) != '\x01') {
LAB_143aab835:
      bVar16 = *(byte *)(*(longlong *)(param_7 + 0x2f8) + 0x50);
      *(byte *)((longlong)param_3 + 0x1b) = bVar16 ^ 1;
      if (bVar16 == 0) {
        bVar14 = 1;
      }
      bVar13 = 1;
      if (bVar16 != 0) {
        bVar13 = bVar5;
      }
      if (-1 < (char)bVar15 && bVar16 == 0) {
        iVar1 = *(int *)(lVar7 + 0x120);
        bVar18 = -1 < DAT_14c7627b8;
        bVar17 = DAT_14c7627b8 <= iVar1;
        bVar19 = -1 < DAT_14cb2d4a0;
        bVar3 = DAT_14cb2d4a0 <= iVar1;
        *(byte *)((longlong)param_3 + 0x1b) = bVar3 && bVar19 || bVar17 && bVar18;
        if (bVar3 && bVar19 || bVar17 && bVar18) {
          bVar5 = 1;
        }
        bVar14 = 0;
        bVar13 = bVar5;
      }
      goto LAB_143aab94f;
    }
LAB_143aab920:
    bVar13 = bVar13 & *(byte *)((longlong)param_3 + 0x1c);
    *(byte *)((longlong)param_3 + 0x1c) = bVar13;
    if (((bVar13 == 0) && (*(char *)((longlong)param_3 + 0x1d) != '\x01')) ||
       (*(char *)(*(longlong *)(param_7 + 0x2f8) + 0x50) != '\x01')) goto LAB_143aab956;
    *(undefined2 *)((longlong)param_3 + 0x1c) = 0;
    bVar14 = 0;
  }
  *(byte *)((longlong)param_3 + 0x1e) = bVar14;
LAB_143aab956:
  param_3[4] = *plVar11;
  return;
}



// FUNCTION 143aab988 FUN_143aab988 body=3462 status=ok
// SIG undefined FUN_143aab988(void)

void FUN_143aab988(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5,
                  undefined4 *param_6,uint param_7)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  byte bVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  longlong lVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  double dVar32;
  double dVar33;
  double *pdVar34;
  bool bVar35;
  ulonglong uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar28 = *(longlong *)(param_2 + 0x10);
  if (param_7 == 0xffffffff) {
    uVar26 = *(undefined4 *)(lVar28 + 0x120);
  }
  else {
    uVar26 = 0;
    if ((-1 < (int)param_7) && (uVar26 = 0, (int)param_7 < *(int *)(lVar28 + 0x168))) {
      uVar26 = *(undefined4 *)(*(longlong *)(lVar28 + 0x160) + (ulonglong)param_7 * 4);
    }
  }
  dVar33 = *(double *)(*(longlong *)(param_2 + 0x20) + 0x10);
  *param_6 = uVar26;
  *(undefined1 *)(param_6 + 1) = *(undefined1 *)(param_1 + 0x1c5);
  iVar30 = 0x14;
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x58) == 2) {
    iVar30 = 0x28;
  }
  param_6[0xa8] = (iVar30 - (uint)((*(uint *)(param_1 + 0x1c8) & 2) == 0)) + 0x82;
  *(undefined1 *)(param_6 + 0x1e) = *(undefined1 *)(param_2 + 0x1d);
  param_6[0x22] = *(undefined4 *)(param_2 + 0x90);
  param_6[0x24] = *(undefined4 *)(param_2 + 0x94);
  param_6[0x23] = *(undefined4 *)(param_1 + 0x208);
  *(undefined8 *)(param_6 + 0x34) = *(undefined8 *)(param_1 + 0x1f0);
  if (*(char *)(param_2 + 0x1b) != '\x01') goto LAB_143aabd85;
  dVar32 = *(double *)(param_3 + 0x2f8);
  lVar28 = *(longlong *)(param_2 + 0x30);
  lVar14 = *(longlong *)(param_6 + 4);
  if (lVar14 != lVar28) {
    *(longlong *)(param_6 + 4) = lVar28;
    if (lVar28 != 0) {
      LOCK();
      *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar14 + 0xd);
          local_1c8 = dVar33;
          local_1b8 = dVar32;
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar14;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          dVar32 = local_1b8;
          dVar33 = local_1c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar35 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar35) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar35 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar35) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  lVar28 = *(longlong *)(param_2 + 0x38);
  lVar14 = *(longlong *)(param_6 + 6);
  if (lVar14 != lVar28) {
    *(longlong *)(param_6 + 6) = lVar28;
    if (lVar28 != 0) {
      LOCK();
      *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar14 + 0xd);
          local_1c8 = dVar33;
          local_1b8 = dVar32;
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar14;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          dVar32 = local_1b8;
          dVar33 = local_1c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar35 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar35) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar35 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar35) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  lVar28 = *(longlong *)(param_2 + 0x40);
  lVar14 = *(longlong *)(param_6 + 8);
  if (lVar14 != lVar28) {
    *(longlong *)(param_6 + 8) = lVar28;
    if (lVar28 != 0) {
      LOCK();
      *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar14 + 0xd);
          local_1c8 = dVar33;
          local_1b8 = dVar32;
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar14;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          dVar32 = local_1b8;
          dVar33 = local_1c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar35 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar35) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar35 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar35) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  param_6[10] = *(undefined4 *)(param_2 + 0x48);
  param_6[0xb] = *(undefined4 *)(param_2 + 0x4c);
  param_6[0xc] = *(undefined4 *)(param_2 + 0x50);
  lVar28 = *(longlong *)((longlong)dVar32 + 0x68);
  if (*(longlong *)((longlong)dVar32 + 0x68) == 0) {
    lVar28 = DAT_14cb428f0;
  }
  lVar14 = *(longlong *)(param_6 + 0xe);
  if (lVar14 != lVar28) {
    *(longlong *)(param_6 + 0xe) = lVar28;
    if (lVar28 != 0) {
      LOCK();
      *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
      UNLOCK();
    }
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar22 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar22 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar14 + 8);
        LOCK();
        uVar22 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar22 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar14 + 0xd);
          local_1c8 = dVar33;
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar14;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          dVar33 = local_1c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar35 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar35) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar35 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar35) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  lVar28 = *(longlong *)(param_2 + 0x10);
  if (param_7 == 0xffffffff) {
    puVar27 = (undefined4 *)(lVar28 + 0x5c);
LAB_143aabd7e:
    uVar26 = *puVar27;
  }
  else {
    uVar26 = 0xffffffff;
    if ((-1 < (int)param_7) && ((int)param_7 < *(int *)(lVar28 + 0x178))) {
      puVar27 = (undefined4 *)((ulonglong)param_7 * 4 + *(longlong *)(lVar28 + 0x170));
      goto LAB_143aabd7e;
    }
  }
  param_6[0x10] = uVar26;
LAB_143aabd85:
  if ((longlong)*(int *)(param_2 + 0x28) != -1) {
    lVar28 = (longlong)*(int *)(param_2 + 0x28) * 8 + (longlong)dVar33;
    uVar31 = (uint)*(ushort *)(lVar28 + (ulonglong)*(byte *)(param_2 + 0x1b) * 2);
    uVar22 = 0xffffffff;
    if (uVar31 != 0xffff) {
      uVar22 = uVar31;
    }
    param_6[2] = (uint)*(byte *)(lVar28 + 7) << 0x1f | uVar22;
  }
  *(undefined8 *)(param_6 + 0x16) = *(undefined8 *)(param_4 + 0x1058);
  uVar5 = *(undefined8 *)(param_4 + 0x1050);
  *(undefined8 *)(param_6 + 0x12) = *(undefined8 *)(param_4 + 0x1048);
  *(undefined8 *)(param_6 + 0x14) = uVar5;
  uVar5 = *(undefined8 *)(param_4 + 0xa00);
  uVar6 = *(undefined8 *)(param_4 + 0x9e0);
  *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_4 + 0x9c0);
  *(undefined8 *)(param_6 + 0x1a) = uVar6;
  *(undefined8 *)(param_6 + 0x1c) = uVar5;
  if (param_5 != '\0') {
    *(undefined8 *)(param_6 + 0x16) = *(undefined8 *)(param_4 + 0x2390);
    uVar26 = *(undefined4 *)(param_4 + 0x2384);
    uVar18 = *(undefined4 *)(param_4 + 0x2388);
    uVar19 = *(undefined4 *)(param_4 + 0x238c);
    param_6[0x12] = *(undefined4 *)(param_4 + 0x2380);
    param_6[0x13] = uVar26;
    param_6[0x14] = uVar18;
    param_6[0x15] = uVar19;
  }
  if ((*(byte *)(param_1 + 0x1c8) & 0x40) != 0) {
    if (*(longlong *)(param_4 + 0x20) == 0) {
      lVar28 = param_4 + 0x2180;
      if (param_5 == '\0') {
        lVar28 = param_4 + 8000;
      }
      FUN_1418342e8(param_6 + 0x3c,lVar28);
    }
    else if (*(uint *)(*(longlong *)(param_4 + 0x20) + 0xd0) < 0xd) {
      pdVar34 = (double *)(param_6 + 0x3c);
      FUN_1418342e8(pdVar34);
      iVar30 = param_6[0x9c];
      if ((longlong)iVar30 != 0) {
        dVar32 = *(double *)(param_4 + 0x28);
        dVar42 = *(double *)(param_4 + 0x30);
        dVar7 = *(double *)(param_4 + 0x38);
        do {
          pdVar34[3] = pdVar34[3] - (pdVar34[2] * dVar7 + *pdVar34 * dVar32 + pdVar34[1] * dVar42);
          pdVar34 = pdVar34 + 4;
        } while (pdVar34 != (double *)(param_6 + (longlong)iVar30 * 8 + 0x3c));
      }
    }
  }
  if (((*(byte *)(param_1 + 0xf0) & 1) == 0) && ((*(byte *)(param_3 + 0x388) & 1) == 0)) {
    pfVar29 = (float *)&DAT_14c846330;
    if (*(float **)(param_3 + 0x2f0) != (float *)0x0) {
      pfVar29 = *(float **)(param_3 + 0x2f0);
    }
    fVar2 = pfVar29[2];
    fVar3 = pfVar29[1];
    fVar4 = *pfVar29;
    *(double *)(param_6 + 0x12) = *(double *)(param_6 + 0x12) - (double)fVar4 * 65536.0;
    *(double *)(param_6 + 0x14) = *(double *)(param_6 + 0x14) - (double)fVar3 * 65536.0;
    *(double *)(param_6 + 0x16) = *(double *)(param_6 + 0x16) - (double)fVar2 * 65536.0;
    if (((*(byte *)(param_1 + 0x1c8) & 0x40) != 0) &&
       (iVar30 = param_6[0x9c], (longlong)iVar30 != 0)) {
      lVar28 = 0;
      do {
        dVar32 = *(double *)((longlong)param_6 + lVar28 + 0x108);
        dVar42 = *(double *)((longlong)param_6 + lVar28 + 0x100);
        dVar7 = *(double *)((longlong)param_6 + lVar28 + 0xf0);
        dVar40 = *(double *)((longlong)param_6 + lVar28 + 0xf8);
        *(double *)((longlong)param_6 + lVar28 + 0x108) =
             (dVar32 * dVar42 - (double)fVar2 * 65536.0) * dVar42 +
             (dVar32 * dVar7 - (double)fVar4 * 65536.0) * dVar7 +
             (dVar32 * dVar40 - (double)fVar3 * 65536.0) * dVar40;
        lVar28 = lVar28 + 0x20;
      } while ((longlong)iVar30 * 0x20 != lVar28);
    }
  }
  else {
    dVar32 = *(double *)(param_6 + 0x16);
    dVar42 = *(double *)(param_6 + 0x12);
    dVar7 = *(double *)(param_6 + 0x14);
    dVar8 = *(double *)(param_3 + 0x308);
    dVar9 = *(double *)(param_3 + 0x328);
    dVar10 = *(double *)(param_3 + 0x348);
    dVar41 = *(double *)(param_3 + 0x368);
    dVar40 = *(double *)(param_3 + 0x350);
    dVar37 = *(double *)(param_3 + 0x330);
    dVar38 = *(double *)(param_3 + 0x310);
    dVar39 = *(double *)(param_3 + 0x370);
    *(double *)(param_6 + 0x12) =
         dVar32 * *(double *)(param_3 + 0x340) +
         dVar7 * *(double *)(param_3 + 800) + dVar42 * *(double *)(param_3 + 0x300) +
         *(double *)(param_3 + 0x360);
    *(double *)(param_6 + 0x14) = dVar32 * dVar10 + dVar7 * dVar9 + dVar42 * dVar8 + dVar41;
    *(double *)(param_6 + 0x16) = dVar42 * dVar38 + dVar7 * dVar37 + dVar32 * dVar40 + dVar39;
    dVar32 = *(double *)(param_3 + 0x120);
    dVar42 = *(double *)(param_3 + 0x128);
    dVar7 = *(double *)(param_3 + 0x130);
    dVar40 = *(double *)(param_3 + 0x138);
    dVar37 = *(double *)(param_6 + 0x1c);
    dVar38 = *(double *)(param_6 + 0x1a);
    dVar39 = *(double *)(param_6 + 0x18);
    dVar41 = *(double *)(param_3 + 0x158);
    dVar8 = *(double *)(param_3 + 0x150);
    dVar9 = *(double *)(param_3 + 0x148);
    dVar10 = *(double *)(param_3 + 0x140);
    *(double *)(param_6 + 0x18) =
         *(double *)(param_3 + 0x118) * 0.0 +
         dVar37 * *(double *)(param_3 + 0x110) +
         dVar38 * *(double *)(param_3 + 0x108) + dVar39 * *(double *)(param_3 + 0x100);
    *(double *)(param_6 + 0x1a) = dVar40 * 0.0 + dVar37 * dVar7 + dVar38 * dVar42 + dVar39 * dVar32;
    *(double *)(param_6 + 0x1c) = dVar39 * dVar10 + dVar38 * dVar9 + dVar37 * dVar8 + dVar41 * 0.0;
    if (((*(byte *)(param_1 + 0x1c8) & 0x40) != 0) &&
       (iVar30 = param_6[0x9c], (longlong)iVar30 != 0)) {
      lVar28 = 0;
      do {
        FUN_1467fd4e6(param_3 + 0x300,&local_178);
        local_1c8 = *(double *)((longlong)param_6 + lVar28 + 0x100);
        dVar32 = *(double *)((longlong)param_6 + lVar28 + 0xf0);
        local_1b8 = *(double *)((longlong)param_6 + lVar28 + 0xf8);
        dVar37 = local_118 * 0.0 +
                 local_1c8 * local_138 + local_1b8 * local_158 + dVar32 * local_178;
        dVar38 = dStack_110 * 0.0 +
                 local_1c8 * dStack_130 + local_1b8 * dStack_150 + dVar32 * dStack_170;
        uStack_1c0 = 0;
        uStack_1b0 = 0;
        dVar39 = local_168 * dVar32 + local_148 * local_1b8 + local_128 * local_1c8 +
                 local_108 * 0.0;
        dVar41 = dVar39 * dVar39 + dVar37 * dVar37 + dVar38 * dVar38;
        dVar7 = 0.0;
        dVar42 = 0.0;
        dVar40 = 0.0;
        dStack_180 = 0.0;
        if (9.99999993922529e-09 < dVar41) {
          dVar7 = 1.0 / SQRT(dVar41);
          dVar40 = dVar39 * dVar7;
          dVar42 = dVar38 * dVar7;
          dVar7 = dVar7 * dVar37;
          dStack_180 = dVar38;
        }
        uStack_190 = 0;
        dVar37 = *(double *)(param_3 + 0x328);
        dVar38 = *(double *)(param_3 + 0x350);
        dVar39 = *(double *)(param_3 + 0x378);
        dVar41 = *(double *)(param_3 + 0x358);
        dVar8 = *(double *)(param_3 + 0x370);
        dVar15 = dVar38 * dVar39 - dVar8 * dVar41;
        local_1a8 = *(double *)(param_3 + 0x348);
        local_1a0 = *(double *)(param_3 + 0x330);
        dVar9 = *(double *)(param_3 + 0x338);
        dVar17 = local_1a0 * dVar39 - dVar8 * dVar9;
        dVar10 = *(double *)(param_3 + 0x368);
        dVar11 = *(double *)(param_3 + 0x310);
        dVar12 = *(double *)(param_3 + 0x318);
        dVar16 = dVar39 * dVar11 - dVar8 * dVar12;
        dVar8 = dVar41 * dVar11 - dVar38 * dVar12;
        dVar39 = local_1a0 * dVar41 - dVar38 * dVar9;
        dVar38 = *(double *)(param_3 + 0x308);
        dVar41 = dVar11 * dVar9 - local_1a0 * dVar12;
        dVar37 = ((dVar10 * dVar41 + (dVar17 * dVar38 - dVar16 * dVar37)) *
                  *(double *)(param_3 + 0x340) +
                 ((dVar10 * dVar39 + (dVar37 * dVar15 - dVar17 * local_1a8)) *
                  *(double *)(param_3 + 0x300) -
                 (dVar10 * dVar8 + (dVar15 * dVar38 - dVar16 * local_1a8)) *
                 *(double *)(param_3 + 800))) -
                 (dVar41 * local_1a8 + (dVar39 * dVar38 - dVar8 * dVar37)) *
                 *(double *)(param_3 + 0x360);
        local_188._0_4_ = SUB84(dVar42,0);
        local_198._0_4_ = SUB84(dVar40,0);
        local_188._4_4_ = (uint)((ulonglong)dVar42 >> 0x20);
        local_198._4_4_ = (uint)((ulonglong)dVar40 >> 0x20);
        if (dVar37 < 0.0) {
          local_188._4_4_ = local_188._4_4_ ^ 0x80000000;
          local_198._4_4_ = local_198._4_4_ ^ 0x80000000;
        }
        uVar36 = -(ulonglong)(dVar37 < 0.0);
        dVar37 = *(double *)((longlong)param_6 + lVar28 + 0x108);
        dVar9 = local_1c8 * dVar37;
        dVar10 = local_1b8 * dVar37;
        dVar32 = dVar32 * dVar37;
        dVar12 = *(double *)(param_3 + 0x300);
        dVar15 = *(double *)(param_3 + 0x308);
        dVar16 = *(double *)(param_3 + 800);
        dVar17 = *(double *)(param_3 + 0x328);
        dVar20 = *(double *)(param_3 + 0x340);
        dVar21 = *(double *)(param_3 + 0x348);
        dVar41 = *(double *)(param_3 + 0x360);
        dVar8 = *(double *)(param_3 + 0x368);
        dVar11 = (double)(~uVar36 & (ulonglong)dVar7 | (ulonglong)-dVar7 & uVar36);
        dVar7 = *(double *)(param_3 + 0x350);
        dVar37 = *(double *)(param_3 + 0x330);
        dVar38 = *(double *)(param_3 + 0x310);
        dVar39 = *(double *)(param_3 + 0x370);
        *(double *)((longlong)param_6 + lVar28 + 0xf0) = dVar11;
        *(ulonglong *)((longlong)param_6 + lVar28 + 0xf8) =
             CONCAT44(local_188._4_4_,(undefined4)local_188);
        *(ulonglong *)((longlong)param_6 + lVar28 + 0x100) =
             CONCAT44(local_198._4_4_,(undefined4)local_198);
        *(double *)((longlong)param_6 + lVar28 + 0x108) =
             (dVar32 * dVar38 + dVar10 * dVar37 + dVar9 * dVar7 + dVar39) *
             (double)CONCAT44(local_198._4_4_,(undefined4)local_198) +
             (dVar9 * dVar20 + dVar10 * dVar16 + dVar32 * dVar12 + dVar41) * dVar11 +
             (dVar9 * dVar21 + dVar10 * dVar17 + dVar32 * dVar15 + dVar8) *
             (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
        lVar28 = lVar28 + 0x20;
        local_198 = dVar40;
        local_188 = dVar42;
      } while ((longlong)iVar30 * 0x20 != lVar28);
    }
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    uVar36 = (ulonglong)*(byte *)(param_2 + 0x1b);
    uVar22 = (uint)*(ushort *)((longlong)dVar33 + uVar36 * 2);
    if (uVar22 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    param_6[0x1f] = (uint)*(byte *)((longlong)dVar33 + 7) << 0x1f | uVar22;
    uVar22 = (uint)*(ushort *)((longlong)dVar33 + 0x20 + uVar36 * 2);
    if (uVar22 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    param_6[0x20] = (uint)*(byte *)((longlong)dVar33 + 0x27) << 0x1f | uVar22;
    uVar22 = (uint)*(ushort *)((longlong)dVar33 + 0x18 + uVar36 * 2);
    if (uVar22 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    param_6[0x21] = (uint)*(byte *)((longlong)dVar33 + 0x1f) << 0x1f | uVar22;
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aac710 FUN_143aac710 body=713 status=ok
// SIG undefined FUN_143aac710(void)

uint FUN_143aac710(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8,uint param_9)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1c4) == '\x01') {
    *(undefined8 *)(param_3 + 0x58) = DAT_14cb2d4c0;
    *(undefined4 *)(param_3 + 0x60) = 0xffffffff;
    uVar12 = 1;
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0x10);
    if (param_9 == 0xffffffff) {
      uVar12 = *(uint *)(lVar6 + 0x120);
    }
    else {
      uVar12 = 0;
      if ((-1 < (int)param_9) && (uVar12 = 0, (int)param_9 < *(int *)(lVar6 + 0x168))) {
        uVar12 = *(uint *)(*(longlong *)(lVar6 + 0x160) + (ulonglong)param_9 * 4);
      }
    }
    if ((*(char *)(param_3 + 0x1d) == '\0') && (*(char *)(param_3 + 0x1c) != '\x01')) {
      *(undefined8 *)(param_3 + 0x58) = DAT_14cb2d4c0;
      *(undefined4 *)(param_3 + 0x60) = 0xffffffff;
    }
    else {
      uVar8 = *(undefined8 *)(param_3 + 200);
      uVar9 = *(undefined8 *)(param_3 + 0xd0);
      uVar14 = *(undefined4 *)(param_3 + 0xdc);
      uVar16 = *(undefined4 *)(param_3 + 0xe0);
      uVar7 = *(undefined4 *)(param_3 + 0xe4);
      *(undefined4 *)(param_5 + 0xa8) = *(undefined4 *)(param_3 + 0xd8);
      *(undefined4 *)(param_5 + 0xac) = uVar14;
      *(undefined4 *)(param_5 + 0xb0) = uVar16;
      *(undefined4 *)(param_5 + 0xb4) = uVar7;
      *(undefined8 *)(param_5 + 0x98) = uVar8;
      *(undefined8 *)(param_5 + 0xa0) = uVar9;
      uVar14 = *(undefined4 *)(param_3 + 0xb4);
      uVar16 = *(undefined4 *)(param_3 + 0xb8);
      uVar7 = *(undefined4 *)(param_3 + 0xbc);
      *(undefined4 *)(param_5 + 0xb8) = *(undefined4 *)(param_3 + 0xb0);
      *(undefined4 *)(param_5 + 0xbc) = uVar14;
      *(undefined4 *)(param_5 + 0xc0) = uVar16;
      *(undefined4 *)(param_5 + 0xc4) = uVar7;
      *(undefined8 *)(param_5 + 200) = *(undefined8 *)(param_3 + 0xc0);
      *(undefined4 *)(param_5 + 0x94) = *(undefined4 *)(param_8 + 0x10);
      if ((*(int *)(param_7 + 0x1dd0) != 0) &&
         (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
        uVar13 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x30))();
        lVar6 = *(longlong *)(param_7 + 8);
        if ((-1 < (int)uVar13 && lVar6 != 0) && ((int)uVar13 < *(int *)(lVar6 + 0x10))) {
          param_7 = *(longlong *)(*(longlong *)(lVar6 + 8) + (ulonglong)uVar13 * 8);
        }
      }
      dVar4 = *(double *)(param_7 + 0x830);
      uVar14 = SUB84(dVar4,0);
      uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)(param_7 + 0x858);
      if (dVar4 <= dVar5) {
        uVar14 = SUB84(dVar5,0);
        uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      uVar13 = -(uint)(*(float *)(param_8 + 0x24) < 0.0);
      fVar18 = *(float *)(param_8 + 0x24) * 0.5;
      fVar2 = *(float *)(param_7 + 0x23c8);
      dVar4 = *(double *)(param_7 + 0x888);
      fVar3 = *(float *)(param_8 + 0x1c);
      fVar15 = (float)((double)CONCAT44(uVar16,uVar14) * (double)*(float *)(param_8 + 0x28) * 0.5);
      fVar17 = *(float *)(param_8 + 0x20) * 0.5;
      *(float *)(param_5 + 0xe0) = fVar17 * fVar17;
      *(uint *)(param_5 + 0xe4) = uVar13 & 0x49800000 | ~uVar13 & (uint)(fVar18 * fVar18);
      *(float *)(param_5 + 0xe8) = fVar15 * fVar15;
      *(float *)(param_5 + 0xec) = (float)((double)fVar3 * (double)fVar2 * dVar4);
      if (*(char *)(param_3 + 0x1b) == '\x01') {
        iVar11 = -1;
        if (*(char *)(param_3 + 0x1d) == '\x01') {
          LOCK();
          plVar1 = param_6 + 9;
          iVar11 = (int)*plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          UNLOCK();
        }
        *(int *)(param_5 + 0x44) = iVar11;
        cVar10 = (**(code **)(*param_6 + 0xe0))(param_6,param_2,param_5);
        if (cVar10 != '\0') {
          *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_5 + 0x288);
          *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_5 + 0x290);
        }
      }
      else {
        *(longlong *)(param_4 + 0x40) = *(longlong *)(param_4 + 0x40) + (ulonglong)uVar12;
        FUN_1431f2978(param_4,local_58,*(undefined8 *)(param_4 + 0x38),uVar12);
        uVar12 = FUN_143aa4dee(param_5,*(undefined8 *)(param_3 + 0x10),local_58);
        *(undefined8 *)(param_3 + 0x58) = local_48;
        *(undefined4 *)(param_3 + 0x60) = 0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aac9da FUN_143aac9da body=10610 status=ok
// SIG undefined FUN_143aac9da(void)

void FUN_143aac9da(longlong param_1,longlong *param_2,longlong param_3,uint param_4,
                  LARGE_INTEGER *param_5,LARGE_INTEGER param_6)

{
  LARGE_INTEGER *pLVar1;
  size_t _Size;
  byte *pbVar2;
  DWORD DVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  DWORD DVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  LARGE_INTEGER LVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  code *pcVar17;
  longlong *plVar18;
  LARGE_INTEGER *pLVar19;
  longlong lVar20;
  longlong lVar21;
  DWORD DVar22;
  DWORD DVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  LARGE_INTEGER LVar26;
  longlong lVar27;
  LARGE_INTEGER unaff_RDI;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  LARGE_INTEGER LVar33;
  char cVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  undefined1 auStack_848 [32];
  LARGE_INTEGER local_828;
  LARGE_INTEGER local_820;
  LARGE_INTEGER local_818;
  LARGE_INTEGER local_810;
  LARGE_INTEGER local_808;
  undefined8 *local_800;
  undefined1 *local_7f8;
  LARGE_INTEGER *local_7f0;
  undefined4 local_7e8;
  DWORD local_7e0;
  undefined1 local_7d8;
  undefined1 local_7d0;
  undefined4 local_7c8;
  LARGE_INTEGER *local_7c0;
  longlong local_7b8;
  LARGE_INTEGER local_7b0;
  uint local_7a4;
  longlong local_7a0;
  DWORD local_794;
  LARGE_INTEGER local_790;
  LARGE_INTEGER *local_788;
  uint local_780;
  DWORD local_77c;
  LARGE_INTEGER local_778;
  LARGE_INTEGER local_770;
  DWORD local_764;
  longlong *local_760;
  longlong local_758;
  LARGE_INTEGER local_750;
  undefined8 *local_748;
  longlong local_740;
  longlong local_738;
  ulonglong local_730;
  LARGE_INTEGER local_728;
  DWORD local_720;
  DWORD local_71c;
  longlong local_718;
  LARGE_INTEGER *local_710;
  undefined8 *local_708;
  longlong local_700;
  ulonglong local_6f8;
  int *local_6f0;
  undefined8 *local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  ulonglong local_6d0;
  void *local_6c8;
  ulonglong uStack_6c0;
  void *local_6b8;
  ulonglong uStack_6b0;
  undefined8 local_6a0;
  undefined4 local_698;
  longlong local_690;
  int local_688;
  undefined8 local_680;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined8 uStack_66c;
  undefined8 local_660;
  longlong local_658;
  ulonglong uStack_650;
  LARGE_INTEGER *local_640 [7];
  undefined8 local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  LARGE_INTEGER local_5e8;
  LARGE_INTEGER LStack_5e0;
  DWORD local_5d8;
  LONG LStack_5d4;
  DWORD DStack_5d0;
  LONG LStack_5cc;
  LARGE_INTEGER local_5c8;
  LARGE_INTEGER LStack_5c0;
  LARGE_INTEGER local_5b8;
  LARGE_INTEGER local_498;
  undefined4 local_490;
  longlong local_488;
  longlong lStack_480;
  longlong local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 local_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined8 uStack_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_228;
  undefined4 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  DWORD DStack_184;
  uint uStack_180;
  undefined8 uStack_17c;
  LARGE_INTEGER local_170;
  LARGE_INTEGER LStack_168;
  LARGE_INTEGER local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  LARGE_INTEGER local_148;
  undefined8 local_140;
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  int local_100;
  undefined8 local_fc;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_848;
  local_6e0 = ((LARGE_INTEGER *)(param_6.QuadPart + 0x390))->QuadPart;
  local_780 = param_4;
  local_760 = param_2;
  local_740 = param_3;
  if (local_6e0 == 0) {
    local_718 = -1;
  }
  else {
    QueryPerformanceCounter(&local_498);
    local_718 = CONCAT44(local_498.s.HighPart,local_498.s.LowPart);
  }
  lVar27 = param_5[0x22].QuadPart;
  local_1c8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1c0 = 0xffffffff;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_188 = 0xffffffff;
  DStack_184 = 0xffffffff;
  uStack_180 = 0xffffffff;
  uStack_17c = 0xffffffffffffffff;
  local_170.QuadPart = 0;
  LStack_168.QuadPart = 0;
  local_160.QuadPart = 0;
  local_158 = 0xffffffffffffffff;
  local_148.QuadPart = 0;
  local_140 = 0x4000000000;
  local_138._4_4_ = DAT_14c8464e0._4_4_;
  local_138._0_4_ = (undefined4)DAT_14c8464e0;
  local_138._8_4_ = (undefined4)DAT_14c8464e8;
  uStack_12c = DAT_14c8464e8._4_4_;
  local_128 = DAT_14c8464f0;
  local_100 = 0;
  local_110 = 0.0;
  dStack_108 = 0.0;
  local_120 = 0.0;
  dStack_118 = 0.0;
  local_fc = DAT_14c846330;
  local_f4 = DAT_14c846338;
  local_820 = *(LARGE_INTEGER *)(param_1 + 8);
  local_818.s = param_6.s;
  local_828.QuadPart = (LONGLONG)param_5;
  local_810.s.LowPart = 2;
  FUN_143aab366(param_1,lVar27,&local_1e8);
  if ((local_1d8 != 0) && (DAT_14c76296c != 0)) {
    if (uStack_1d0._2_1_ == '\x01') {
      if (0 < (longlong)(int)local_760[1]) {
        lVar29 = 0;
        do {
          if ((((local_780 >> ((uint)lVar29 & 0x1f) & 1) != 0) &&
              (lVar21 = *(longlong *)(*local_760 + lVar29 * 8), *(longlong *)(lVar21 + 0x23e0) == 0)
              ) && (((*(byte *)(param_6.QuadPart + 0x72) & 1) != 0 ||
                    (*(longlong *)(lVar21 + 0x20) == 0)))) goto LAB_143aacc33;
          lVar29 = lVar29 + 1;
        } while ((int)local_760[1] != lVar29);
      }
    }
    else {
LAB_143aacc33:
      iVar11 = *(int *)(param_1 + 0x200);
      if (((iVar11 != -1) || (*(int *)(param_1 + 0x204) != -1)) &&
         (*(char *)(param_1 + 0xf4) == '\0')) {
        uVar30 = *(uint *)(local_1d8 + 0x120);
        uVar31 = (ulonglong)uVar30;
        if (((int)uVar30 <= DAT_14c762970) && (*(char *)(param_1 + 0x1c4) == '\0')) {
          plVar18 = *(longlong **)(lStack_1e0 + 0x28);
          if (plVar18 == (longlong *)0x0) {
            lVar29 = *(longlong *)(lStack_1e0 + 0x20);
          }
          else {
            lVar29 = (**(code **)(*plVar18 + 0x10))(plVar18,param_5[0x22].QuadPart,0);
            iVar11 = *(int *)(param_1 + 0x200);
          }
          if (iVar11 != -1) {
            if (0 < (int)uVar30) {
              uVar25 = 0;
              do {
                if (*(int *)((ulonglong)(uint)(iVar11 * *(int *)(lVar29 + 300)) +
                             *(longlong *)(lVar29 + 0x28) + uVar25 * 4) == *(int *)(param_1 + 0x208)
                   ) goto LAB_143aaf320;
                uVar25 = uVar25 + 1;
              } while (uVar31 != uVar25);
              goto LAB_143aaf24e;
            }
            uVar25 = 0;
LAB_143aaf320:
            if ((uint)uVar25 == uVar30) goto LAB_143aaf24e;
          }
          if (*(int *)(param_1 + 0x204) != -1) {
            unaff_RDI.QuadPart = (LONGLONG)local_150;
            FUN_1407c4842(unaff_RDI.QuadPart);
            FUN_142b31174(unaff_RDI.QuadPart,0,*(undefined4 *)(param_1 + 0x1c0),0);
            if ((int)uVar30 < 1) goto LAB_143aaf24e;
            iVar11 = *(int *)(lVar29 + 300);
            iVar4 = *(int *)(param_1 + 0x204);
            lVar29 = *(longlong *)(lVar29 + 0x28);
            uVar25 = 0;
            bVar35 = false;
            do {
              while( true ) {
                uVar25 = uVar25 + 1;
                uVar30 = *(uint *)((ulonglong)(uint)(iVar11 * iVar4) + lVar29 + -4 + uVar25 * 4);
                if ((-1 < (int)uVar30) && ((int)uVar30 < *(int *)(param_1 + 0x1c0))) break;
                if (uVar25 == uVar31) {
                  if (!bVar35) goto LAB_143aaf24e;
                  goto LAB_143aacc5e;
                }
              }
              LVar26 = local_148;
              if ((LARGE_INTEGER *)local_148.QuadPart == (LARGE_INTEGER *)0x0) {
                LVar26.QuadPart = unaff_RDI.QuadPart;
              }
              puVar14 = (uint *)(LVar26.QuadPart + (ulonglong)(uVar30 >> 5) * 4);
              *puVar14 = *puVar14 | 1 << ((byte)uVar30 & 0x1f);
              bVar35 = true;
            } while (uVar25 != uVar31);
          }
        }
      }
LAB_143aacc5e:
      FUN_144aefb7a(param_1,&local_1e8,param_5[0x21].QuadPart);
      iVar11 = *(int *)(param_1 + 0x210);
      local_7a4 = 0xffffffff;
      if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(lStack_1e0 + 0xa8))) {
        local_7a4 = *(uint *)(*(longlong *)(lStack_1e0 + 0xa0) + (longlong)iVar11);
      }
      lVar29 = (longlong)(int)local_760[1];
      if (0 < lVar29) {
        local_700 = param_1 + 0x120;
        local_710 = (LARGE_INTEGER *)(param_6.QuadPart + 0x180);
        local_6e8 = (undefined8 *)(param_1 + 0x1d4);
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        local_708 = (undefined8 *)(lVar21 + 0xea8);
        local_6f8 = (ulonglong)local_7a4;
        local_6f0 = (int *)(lVar21 + 0xc60);
        lVar21 = 0;
        local_7b8 = lVar27;
        local_7a0 = param_1;
        local_6d8 = lVar29;
        uVar30 = local_780;
        do {
          if ((uVar30 >> ((uint)lVar21 & 0x1f) & 1) != 0) {
            local_7c0 = *(LARGE_INTEGER **)(*local_760 + lVar21 * 8);
            if (*(char *)((longlong)local_7c0 + 0x23f2) == '\0') {
              local_758 = local_7c0[4].QuadPart;
              unaff_RDI.QuadPart = 0;
            }
            else {
              local_790.QuadPart = (LONGLONG)(local_7c0 + 4);
              local_758 = local_7c0[4].QuadPart;
              if (local_7c0[0x3ba].s.LowPart == 0) {
                unaff_RDI.QuadPart = 0;
              }
              else {
                if (local_7c0[0x3ba].s.LowPart != 1) goto LAB_143aaed89;
                unaff_RDI._1_7_ = (undefined7)((ulonglong)unaff_RDI >> 8);
                unaff_RDI.s.LowPart._0_1_ = 1;
              }
            }
            local_790.QuadPart = (LONGLONG)(local_7c0 + 4);
            if ((*(char *)(param_1 + 0x1c4) == '\x01') && ((*(byte *)(param_1 + 0x1c8) & 0x20) != 0)
               ) {
              fVar36 = *(float *)(param_6.QuadPart + 0x38c);
              if (0.0 <= fVar36) {
                dVar5 = (double)(fVar36 * fVar36);
              }
              else {
                dVar6 = (double)local_7c0[0x209] - *(double *)(param_6.QuadPart + 0x160);
                dVar40 = (double)local_7c0[0x20a] - *(double *)(param_6.QuadPart + 0x168);
                dVar5 = (double)local_7c0[0x20b] - *(double *)(param_6.QuadPart + 0x170);
                dVar5 = dVar5 * dVar5 + dVar40 * dVar40 + dVar6 * dVar6;
              }
              if ((dVar5 < (double)(*(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x1f0))) ||
                 ((double)(*(float *)(param_1 + 500) * *(float *)(param_1 + 500)) < dVar5))
              goto LAB_143aaed89;
            }
            local_658 = 0;
            uStack_650 = 0;
            local_738 = lVar21;
            if (*(char *)(param_1 + 0xf4) == '\0') {
              uStack_650 = 1;
              FUN_1447d253c(&local_658,0);
              LVar26.QuadPart = (LONGLONG)&DAT_00000001;
              FUN_144b37ece(local_658,1);
            }
            else {
              uVar30 = *(uint *)(local_1d8 + 0x180);
              LVar13.s.HighPart = 0;
              LVar13.QuadPart._0_4_ = uVar30;
              if ((int)uVar30 < 1) {
                LVar26.QuadPart = 0;
                if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(LVar13.QuadPart);
                }
              }
              else {
                uStack_650 = (ulonglong)uVar30;
                FUN_1447d253c(&local_658,0);
                FUN_144b37ece(local_658,LVar13.QuadPart);
                LVar26 = LVar13;
              }
            }
            local_498.s.LowPart = 0;
            local_498.s.HighPart = local_498.s.HighPart & 0xffffff00;
            local_490 = 0xffffffff;
            local_460 = 0;
            local_468 = 0;
            local_478 = 0;
            uStack_470 = 0;
            local_488 = 0;
            lStack_480 = 0;
            local_458 = 0xffffffffffffffff;
            local_430 = 0;
            local_440 = 0;
            uStack_438 = 0;
            local_450 = 0;
            uStack_448 = 0;
            local_428 = 0x3ff0000000000000;
            local_420 = 0;
            local_41c = 0xffffffff;
            uStack_418 = 0xffffffff;
            uStack_414 = 0xffffffff;
            uStack_410 = 0xffffffff;
            local_40c = 0xffffffff00000000;
            local_3d4 = 0;
            uStack_3cc = 0;
            local_3e4 = 0;
            uStack_3dc = 0;
            local_3f4 = 0;
            uStack_3ec = 0;
            local_404 = 0;
            uStack_3fc = 0;
            local_3c4 = 0x7f7fffff;
            local_3b8 = 0x4000000000000000;
            uStack_3b0 = 0x3f800000;
            local_228 = 0xc00000000;
            local_218 = 0;
            local_210 = 0;
            local_208 = 0xffffffffffffffff;
            local_200 = 0xffffffff;
            local_1f8 = 0;
            DVar22 = LVar26.s.LowPart;
            local_794 = unaff_RDI.s.LowPart;
            uVar8 = (undefined1)unaff_RDI.s.LowPart;
            if (DVar22 == 1) {
              if ((uStack_1d0._4_1_ != '\0') || (uStack_1d0._5_1_ == '\x01')) {
                local_828.s.LowPart._0_1_ = uVar8;
                local_818.s.LowPart = 0xffffffff;
                local_820.QuadPart = (LONGLONG)&local_498;
                FUN_143aab988(param_1,&local_1e8,param_6.QuadPart,local_7c0);
              }
              cVar34 = (local_158._4_4_ & local_7a4) != 0xffffffff;
              iVar11 = *(int *)(param_1 + 0x1b0);
              if (0 < iVar11) {
                local_770 = *(LARGE_INTEGER *)(param_6.QuadPart + 0x2f8);
                uVar31 = 0;
                local_758 = CONCAT71(local_758._1_7_,cVar34);
                do {
                  lVar29 = *(longlong *)(param_1 + 0x1a0);
                  if (*(longlong *)(param_1 + 0x1a0) == 0) {
                    lVar29 = local_700;
                  }
                  uVar30 = *(uint *)(lVar29 + 0x10 + uVar31 * 0x80);
                  if ((uVar30 != 0) &&
                     ((cVar34 == '\0' ||
                      ((uStack_1d0._5_1_ == '\0' && ((byte)uStack_1d0 != '\x01')))))) break;
                  if (local_7a4 == 0xffffffff || uVar31 == local_6f8) {
                    if (0 < (int)local_140) {
                      LVar26 = local_148;
                      if ((LARGE_INTEGER *)local_148.QuadPart == (LARGE_INTEGER *)0x0) {
                        LVar26.QuadPart = (LONGLONG)local_150;
                      }
                      uVar28 = uVar30 + 0x1f;
                      if (-1 < (int)uVar30) {
                        uVar28 = uVar30;
                      }
                      if ((*(uint *)(LVar26.QuadPart + (longlong)((int)uVar28 >> 5) * 4) >>
                           (uVar30 & 0x1f) & 1) == 0) goto LAB_143aadc9c;
                    }
                    LVar26.QuadPart = lVar29 + uVar31 * 0x80;
                    if ((((*(char *)(LVar26.QuadPart + 0x14) != '\x03') || (uVar31 == 0)) ||
                        (uStack_1d0._6_1_ != '\0')) ||
                       ((((LARGE_INTEGER *)(LVar26.QuadPart + -0x70))->s).LowPart != uVar30)) {
                      local_6a0 = 0xffffffff;
                      local_698 = 0;
                      local_690 = 0;
                      local_688 = 0;
                      local_660 = 0;
                      uStack_670 = 0;
                      uStack_66c = 0;
                      local_680 = 0;
                      uStack_678 = 0;
                      uStack_674 = 0;
                      local_730 = uVar31;
                      if (*(char *)(LVar26.QuadPart + 0x14) == '\x02') {
                        local_5b8 = local_710[6];
                        local_5e8.s = *(_struct_19 *)local_710;
                        LStack_5e0 = local_710[1];
                        local_5d8 = local_710[2].s.LowPart;
                        LStack_5d4 = *(LONG *)((longlong)local_710 + 0x14);
                        DStack_5d0 = local_710[3].s.LowPart;
                        LStack_5cc = *(LONG *)((longlong)local_710 + 0x1c);
                        local_5c8 = local_710[4];
                        LStack_5c0 = local_710[5];
                        local_828.s.LowPart = *(undefined4 *)(LVar26.QuadPart + 0x1c);
                        uVar10 = (**(code **)(**(longlong **)LVar26 + 0x50))
                                           (*(longlong **)LVar26,&local_5e8,(float)(double)local_5b8
                                            ,local_7c0);
                        (**(code **)(**(longlong **)LVar26 + 0x18))
                                  (*(longlong **)LVar26,&local_6a0,uVar10);
                      }
                      else {
                        (**(code **)(**(longlong **)LVar26 + 0x18))
                                  (*(longlong **)LVar26,&local_6a0,
                                   (((LARGE_INTEGER *)(LVar26.QuadPart + 0x18))->s).LowPart);
                      }
                      if ((int)local_6a0 != -1) {
                        lVar29 = FUN_144af077a(param_5);
                        if (*(longlong *)(local_740 + 0x40) != 0) {
                          *(undefined1 *)(lVar29 + 0x14) =
                               *(undefined1 *)(*(longlong *)(local_740 + 0x40) + 8);
                        }
                        LVar13.QuadPart = lVar29 + 8;
                        *(byte *)(lVar29 + 0x1f8) = (byte)uStack_1d0;
                        (**(code **)(*(longlong *)(lVar29 + 8) + 0x18))(LVar13.QuadPart,lVar27);
                        local_728.QuadPart = LVar13.QuadPart;
                        (**(code **)(**(longlong **)LVar26 + 0x30))
                                  (*(longlong **)LVar26,lVar27,LVar13.QuadPart,&local_6a0);
                        uStack_6b0 = CONCAT44(uStack_6b0._4_4_,*(undefined4 *)(local_6e8 + 1));
                        local_6b8 = (void *)*local_6e8;
                        local_6c8 = *(void **)(LVar26.QuadPart + 0x3c);
                        uStack_6c0 = CONCAT44(uStack_6c0._4_4_,
                                              *(undefined4 *)(LVar26.QuadPart + 0x44));
                        unaff_RDI.QuadPart = (LONGLONG)local_640;
                        (**(code **)(**(longlong **)LVar26 + 0x10))
                                  (*(longlong **)LVar26,unaff_RDI.QuadPart);
                        FUN_1400e4e82(&local_5e8,unaff_RDI.QuadPart,&local_6c8,&local_6b8);
                        local_110 = ((double)CONCAT44(LStack_5d4,local_5d8) + (double)LStack_5c0) *
                                    0.5;
                        dStack_118 = ((double)LStack_5e0 + (double)local_5c8) * 0.5;
                        local_120 = ((double)local_5e8 + (double)CONCAT44(LStack_5cc,DStack_5d0)) *
                                    0.5;
                        dVar5 = ((double)LStack_5c0 - (double)CONCAT44(LStack_5d4,local_5d8)) * 0.5;
                        dVar6 = ((double)local_5c8 - (double)LStack_5e0) * 0.5;
                        dVar40 = ((double)CONCAT44(LStack_5cc,DStack_5d0) - (double)local_5e8) * 0.5
                        ;
                        dStack_108 = SQRT(dVar5 * dVar5 + dVar40 * dVar40 + dVar6 * dVar6);
                        if (*(char *)(LVar26.QuadPart + 0x38) == '\0') {
                          local_128 = DAT_14c8464f0;
                          local_138._4_4_ = DAT_14c8464e0._4_4_;
                          local_138._0_4_ = (undefined4)DAT_14c8464e0;
                          uStack_12c = DAT_14c8464e8._4_4_;
                          local_138._8_4_ = (undefined4)DAT_14c8464e8;
                          local_120 = local_120 + (double)*(float *)(LVar26.QuadPart + 0x2c);
                          dStack_118 = dStack_118 + (double)*(float *)(LVar26.QuadPart + 0x30);
                          local_110 = local_110 + (double)*(float *)(LVar26.QuadPart + 0x34);
                        }
                        else {
                          local_128 = (double)*(float *)(LVar26.QuadPart + 0x34);
                          dVar5 = (double)*(float *)(LVar26.QuadPart + 0x30);
                          local_138._0_8_ = (undefined8)*(float *)(LVar26.QuadPart + 0x2c);
                          stack0xfffffffffffffed0 = dVar5;
                          if ((*(char *)(LVar26.QuadPart + 0x38) == '\x03') ||
                             ((*(char *)(LVar26.QuadPart + 0x38) == '\x01' &&
                              ((*(uint *)(param_1 + 0xf0) & 1) != 0)))) {
                            dVar40 = local_128 * *(double *)(param_6.QuadPart + 0x140);
                            dVar6 = *(double *)(param_6.QuadPart + 0x168) * 0.0 +
                                    local_128 * *(double *)(param_6.QuadPart + 0x148) +
                                    dVar5 * *(double *)(param_6.QuadPart + 0x128) +
                                    (double)local_138._0_8_ * *(double *)(param_6.QuadPart + 0x108);
                            local_128 = (double)local_138._0_8_ *
                                        *(double *)(param_6.QuadPart + 0x110) +
                                        dVar5 * *(double *)(param_6.QuadPart + 0x130) +
                                        local_128 * *(double *)(param_6.QuadPart + 0x150) +
                                        *(double *)(param_6.QuadPart + 0x170) * 0.0;
                            local_138._8_4_ = SUB84(dVar6,0);
                            local_138._0_8_ =
                                 *(double *)(param_6.QuadPart + 0x160) * 0.0 +
                                 dVar40 + dVar5 * *(double *)(param_6.QuadPart + 0x120) +
                                          (double)local_138._0_8_ *
                                          *(double *)(param_6.QuadPart + 0x100);
                            uStack_12c = (int)((ulonglong)dVar6 >> 0x20);
                          }
                        }
                        if ((*(byte *)((longlong)&DAT_14ca814d0 +
                                      (ulonglong)
                                      *(ushort *)
                                       (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0xf8) * 2) *
                                      0x3c + 6) & 0x10) == 0) {
                          DStack_184 = 0xffffffff;
                          uStack_180 = 0xffffffff;
                          pLVar19 = (LARGE_INTEGER *)&DAT_14cb427f0;
                          LStack_168 = DAT_14cb42830;
                          local_160 = DAT_14cb42830;
                        }
                        else {
                          DStack_184 = *(DWORD *)(lVar29 + 0x1f0);
                          uStack_180 = (uint)*(byte *)(lVar29 + 0x1f5);
                          pLVar19 = (LARGE_INTEGER *)(lVar29 + 0x1e0);
                          LStack_168 = *(LARGE_INTEGER *)(lVar29 + 0x1d8);
                          local_160 = *(LARGE_INTEGER *)(lVar29 + 0x1e8);
                        }
                        uStack_17c = 0xffffffffffffffff;
                        local_170 = *pLVar19;
                        local_818.QuadPart = (LONGLONG)local_7c0;
                        local_820 = local_770;
                        local_808.s.LowPart = 0xffffffff;
                        local_828.QuadPart = (LONGLONG)&local_498;
                        local_810.QuadPart = LVar26.QuadPart;
                        iVar11 = FUN_143aac710(param_1,lVar27,&local_1e8,param_5[0x21].QuadPart);
                        local_788 = (LARGE_INTEGER *)CONCAT44(local_788._4_4_,iVar11);
                        if (iVar11 != 0) {
                          local_828.QuadPart = LVar26.QuadPart;
                          local_820 = param_6;
                          local_7b0.QuadPart = LVar26.QuadPart;
                          FUN_144b36a0c(param_1,&local_5e8,&local_1e8,local_7c0);
                          FUN_144af01cc(param_1,local_640,&local_1e8,&local_5e8);
                          *(LARGE_INTEGER **)(lVar29 + 0x200) = local_640[0];
                          unaff_RDI = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar29 + 0x208))->QuadPart;
                          if ((LARGE_INTEGER *)unaff_RDI.QuadPart != local_640[0]) {
                            *(LARGE_INTEGER **)(lVar29 + 0x208) = local_640[0];
                            if (local_640[0] != (LARGE_INTEGER *)0x0) {
                              LOCK();
                              local_640[0][1].s.LowPart = local_640[0][1].s.LowPart + 1;
                              UNLOCK();
                            }
                            if ((LARGE_INTEGER *)unaff_RDI.QuadPart != (LARGE_INTEGER *)0x0) {
                              LOCK();
                              pLVar19 = (LARGE_INTEGER *)(unaff_RDI.QuadPart + 8);
                              uVar30 = (pLVar19->s).LowPart;
                              (pLVar19->s).LowPart = (pLVar19->s).LowPart - 1;
                              UNLOCK();
                              if ((uVar30 & 0x3fffffff) == 1) {
                                pLVar19 = (LARGE_INTEGER *)(unaff_RDI.QuadPart + 8);
                                LOCK();
                                uVar30 = (pLVar19->s).LowPart;
                                (pLVar19->s).LowPart = (pLVar19->s).LowPart | 0x40000000;
                                UNLOCK();
                                if ((uVar30 >> 0x1e & 1) == 0) {
                                  bVar9 = *(byte *)(unaff_RDI.QuadPart + 0xd);
                                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                  ((LARGE_INTEGER *)(plVar12 + 1))->QuadPart = (LONGLONG)unaff_RDI;
                                  plVar18 = DAT_14ca843c0;
                                  plVar16 = DAT_14ca843c8;
                                  if ((bVar9 & 2) == 0) {
                                    do {
                                      *plVar12 = (longlong)plVar18;
                                      LOCK();
                                      bVar35 = plVar18 != DAT_14ca843c0;
                                      plVar16 = plVar12;
                                      if (bVar35) {
                                        plVar18 = DAT_14ca843c0;
                                        plVar16 = DAT_14ca843c0;
                                      }
                                      DAT_14ca843c0 = plVar16;
                                      UNLOCK();
                                    } while (bVar35);
                                  }
                                  else {
                                    do {
                                      *plVar12 = (longlong)plVar16;
                                      LOCK();
                                      bVar35 = plVar16 != DAT_14ca843c8;
                                      plVar18 = plVar12;
                                      if (bVar35) {
                                        plVar16 = DAT_14ca843c8;
                                        plVar18 = DAT_14ca843c8;
                                      }
                                      DAT_14ca843c8 = plVar18;
                                      UNLOCK();
                                    } while (bVar35);
                                  }
                                }
                              }
                            }
                          }
                          if (((*local_6f0 != 0x40000002) && (*local_6f0 == 1)) &&
                             (DAT_14c86a9f8 != '\0')) {
                            FUN_140ad26c0();
                            GetCurrentThreadId();
                          }
                          if (0 < local_688) {
                            local_778.QuadPart = local_7b0.QuadPart + 0x60;
                            lVar27 = 0;
                            LVar26 = local_7b0;
                            do {
                              lVar29 = local_690;
                              unaff_RDI.QuadPart = lVar27 * 0x1c;
                              iVar11 = *(int *)(local_690 + unaff_RDI.QuadPart);
                              if (((longlong)iVar11 < 0) ||
                                 ((int)(((LARGE_INTEGER *)(LVar26.QuadPart + 0x78))->s).LowPart <=
                                  iVar11)) {
LAB_143aad632:
                                FUN_14003fbd6();
                                LVar13.QuadPart = (**(code **)(*DAT_14caea080 + 0x2f0))();
                              }
                              else {
                                LVar13.QuadPart =
                                     ((LARGE_INTEGER *)(LVar26.QuadPart + 0x70))->QuadPart;
                                if ((LARGE_INTEGER *)
                                    ((LARGE_INTEGER *)(LVar26.QuadPart + 0x70))->QuadPart ==
                                    (LARGE_INTEGER *)0x0) {
                                  LVar13 = local_778;
                                }
                                iVar11 = *(int *)(LVar13.QuadPart + (longlong)iVar11 * 4);
                                if (((longlong)iVar11 < 0) ||
                                   (*(int *)(lStack_1e0 + 0x78) <= iVar11)) goto LAB_143aad632;
                                lVar21 = lStack_1e0 + 0x30;
                                if (*(longlong *)(lStack_1e0 + 0x70) != 0) {
                                  lVar21 = *(longlong *)(lStack_1e0 + 0x70);
                                }
                                LVar13 = (LARGE_INTEGER)
                                         ((LARGE_INTEGER *)(lVar21 + (longlong)iVar11 * 8))->
                                         QuadPart;
                              }
                              puVar32 = (undefined1 *)(lVar29 + unaff_RDI.QuadPart);
                              if ((*(int *)(puVar32 + 8) != 0) &&
                                 ((LARGE_INTEGER *)LVar13.QuadPart != (LARGE_INTEGER *)0x0)) {
                                unaff_RDI.QuadPart =
                                     FUN_14485b2b4(LVar13.QuadPart,*(undefined4 *)(param_1 + 0xf8));
                                pcVar17 = *(code **)(*(longlong *)unaff_RDI + 0x270);
                                LVar33.QuadPart = unaff_RDI.QuadPart;
                                if (pcVar17 == (code *)&LAB_1447f82f4) {
                                  LVar33 = (LARGE_INTEGER)
                                           ((LARGE_INTEGER *)(unaff_RDI.QuadPart + 0x48))->QuadPart;
                                  if ((LARGE_INTEGER *)LVar33.QuadPart == (LARGE_INTEGER *)0x0) {
                                    LVar33 = (LARGE_INTEGER)
                                             ((LARGE_INTEGER *)(unaff_RDI.QuadPart + 0x40))->
                                             QuadPart;
                                    pcVar17 = *(code **)(*(longlong *)LVar33 + 0x408);
                                    if (pcVar17 != (code *)&LAB_14470b702) goto LAB_143aadc03;
                                    bVar9 = *(byte *)(LVar33.QuadPart + 0x129);
                                    if (bVar9 == 1) {
                                      bVar9 = ~*(byte *)(LVar33.QuadPart + 0x1d6) & 1;
                                    }
                                    uVar30 = (uint)bVar9;
                                  }
                                  else {
                                    pcVar17 = *(code **)(*(longlong *)LVar33 + 0x408);
                                    if (pcVar17 != (code *)&LAB_14497e176) goto LAB_143aadc03;
                                    uVar30 = (uint)*(byte *)(LVar33.QuadPart + 0x158);
                                  }
                                }
                                else {
LAB_143aadc03:
                                  uVar30 = (*pcVar17)(LVar33.QuadPart);
                                }
                                if (uVar30 < 2) {
                                  uVar8 = 1;
                                }
                                else {
                                  uVar8 = (**(code **)(*(longlong *)unaff_RDI + 0x58))
                                                    (unaff_RDI.QuadPart);
                                  if (((local_7c0[0x47c].QuadPart != 0) ||
                                      ((*(longlong *)local_790 != 0 &&
                                       ((*(byte *)(param_6.QuadPart + 0x72) & 1) == 0)))) ||
                                     ((*(char *)(local_7c0 + 0x47d) == '\x01' &&
                                      (((uStack_1d0 & 1) != 0 && (uStack_1d0._7_1_ != '\0'))))))
                                  goto LAB_143aadace;
                                }
                                uVar10 = 0xffffffff;
                                if ((((byte)uStack_1d0 & 1) == 0) &&
                                   (uVar10 = local_458._4_4_, local_458._4_4_ == 0xffffffff)) {
                                  uVar10 = *(DWORD *)(local_1d8 + 0x5c);
                                }
                                DVar22 = param_5[1].s.LowPart;
                                DVar23 = param_5[2].s.LowPart;
                                DVar3 = (int)(DVar23 + 0x44) / 0x44;
                                param_5[2].s.LowPart = DVar23 + 1;
                                if ((int)DVar22 < (int)DVar3) {
                                  local_748 = (undefined8 *)CONCAT71(local_748._1_7_,uVar8);
                                  local_750.s.LowPart = uVar10;
                                  do {
                                    local_77c = DVar22;
                                    lVar29 = FUN_14001cc68(0x3fc0,0x10);
                                    lVar21 = 0;
                                    do {
                                      *(undefined8 *)(lVar29 + 0xa8 + lVar21) = 0;
                                      puVar24 = (undefined8 *)(lVar29 + 0xb8 + lVar21);
                                      *puVar24 = 0;
                                      puVar24[1] = 0;
                                      *(undefined8 *)(lVar29 + 200 + lVar21) = 0;
                                      *(undefined8 *)(lVar29 + 0xd0 + lVar21) = 0xffffffff;
                                      *(undefined8 *)(lVar29 + 0xd8 + lVar21) = 0xff0000ffffffff;
                                      *(undefined1 *)(lVar29 + 0xe0 + lVar21) = 0;
                                      *(undefined4 *)(lVar29 + 0xe4 + lVar21) = 0x40c00f07;
                                      pbVar2 = (byte *)(lVar29 + 0xe8 + lVar21);
                                      *pbVar2 = *pbVar2 & 0xfc;
                                      *(undefined1 **)(lVar29 + 0xb0 + lVar21) = &DAT_100000001;
                                      FUN_14470b9e0(lVar29 + lVar21,1);
                                      lVar21 = lVar21 + 0xf0;
                                    } while (lVar21 != 0x3fc0);
                                    DVar22 = param_5[1].s.LowPart;
                                    param_5[1].s.LowPart = DVar22 + 1;
                                    if (*(uint *)((longlong)param_5 + 0xc) < DVar22 + 1) {
                                      FUN_14002baf6(param_5,DVar22);
                                    }
                                    *(longlong *)(param_5->QuadPart + (longlong)(int)DVar22 * 8) =
                                         lVar29;
                                    DVar22 = local_77c + 1;
                                    uVar10 = local_750._0_4_;
                                    uVar8 = (char)local_748;
                                  } while (DVar22 != DVar3);
                                }
                                local_7d0 = uVar8;
                                local_7e0 = uVar10;
                                param_1 = local_7a0;
                                LVar26 = local_7b0;
                                LVar33.QuadPart =
                                     (ulonglong)(uint)((int)DVar23 % 0x44) * 0xf0 +
                                     *(longlong *)
                                      (param_5->QuadPart + (longlong)((int)DVar23 / 0x44) * 8);
                                local_7d8 = (undefined1)local_794;
                                local_7e8 = local_788._0_4_;
                                local_7f0 = local_7c0;
                                local_800 = &local_6a0;
                                local_808.s = local_7b0.s;
                                local_810.s = param_6.s;
                                local_820 = local_728;
                                local_7c8 = 0xffffffff;
                                local_828.QuadPart = LVar33.QuadPart;
                                local_818 = LVar13;
                                local_7f8 = puVar32;
                                FUN_1447fa5ac(local_7a0,local_7b8,&local_1e8,&local_5e8);
                                unaff_RDI = param_6;
                                if ((*(byte *)(param_6.QuadPart + 0x74) & 0x20) != 0) {
                                  LVar13 = param_5[0x1d];
                                  puVar14 = (uint *)*local_708;
                                  if (puVar14 != (uint *)0x0) goto LAB_143aad8ce;
                                  while( true ) {
                                    FUN_14472e504();
                                    puVar14 = (uint *)*local_708;
LAB_143aad8ce:
                                    puVar24 = (undefined8 *)
                                              (*(longlong *)(puVar14 + 0x10) + 0xfU &
                                              0xfffffffffffffff0);
                                    uVar30 = puVar14[0x12];
                                    if (puVar24 + 0x1c <= puVar14 + 0x4000) break;
                                    while( true ) {
                                      *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
                                      LOCK();
                                      uVar28 = *puVar14;
                                      *puVar14 = *puVar14 + uVar30 + 1;
                                      UNLOCK();
                                      if ((uVar28 ^ uVar30) != 0xffffffff) break;
                                      puVar14 = (uint *)*local_708;
                                      *puVar14 = 0xffffffff;
                                      *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
                                      puVar14[0x12] = 0;
                                      *local_708 = puVar14;
                                      puVar24 = (undefined8 *)
                                                ((longlong)puVar14 + 0x67U & 0xfffffffffffffff0);
                                      uVar30 = 0;
                                      if (puVar24 + 0x1c <= puVar14 + 0x4000) {
                                        uVar30 = 1;
                                        goto LAB_143aad950;
                                      }
                                    }
                                  }
                                  uVar30 = uVar30 + 1;
LAB_143aad950:
                                  *(undefined8 **)(puVar14 + 0x10) = puVar24 + 0x1d;
                                  puVar14[0x12] = uVar30;
                                  *(int *)(puVar24 + -1) = ((int)puVar24 + -8) - (int)puVar14;
                                  *(undefined4 *)((longlong)puVar24 + -4) = 0xe0;
                                  puVar24[1] = 0;
                                  *puVar24 = &PTR_FUN_14ae0eee8;
                                  lVar29 = *(longlong *)LVar13;
                                  do {
                                    puVar24[1] = lVar29;
                                    LOCK();
                                    lVar21 = *(longlong *)LVar13;
                                    bVar35 = lVar29 == lVar21;
                                    if (bVar35) {
                                      *(undefined8 **)LVar13 = puVar24;
                                      lVar21 = lVar29;
                                    }
                                    UNLOCK();
                                    lVar29 = lVar21;
                                  } while (!bVar35);
                                  puVar24[2] = &PTR_FUN_14a8622c0;
                                  puVar24[3] = &PTR_FUN_14a862348;
                                  ((LARGE_INTEGER *)(puVar24 + 4))->QuadPart = (LONGLONG)param_6;
                                  pLVar19 = (LARGE_INTEGER *)&DAT_14c846400;
                                  unaff_RDI.QuadPart = (LONGLONG)(puVar24 + 6);
                                  for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
                                    *(LARGE_INTEGER *)unaff_RDI = *pLVar19;
                                    pLVar19 = pLVar19 + 1;
                                    unaff_RDI.QuadPart = unaff_RDI.QuadPart + 8;
                                  }
                                  *(undefined4 *)(puVar24 + 0x17) = DAT_14c9a52a0;
                                  puVar24[0x16] = DAT_14c9a5298;
                                  *(undefined8 *)((longlong)puVar24 + 0xbc) = 0x3f8000003dcccccd;
                                  *(undefined8 *)((longlong)puVar24 + 0xc4) = 0x41000000;
                                  *(undefined8 *)((longlong)puVar24 + 0xcc) = 0x3f800000;
                                  *(undefined2 *)((longlong)puVar24 + 0xd4) = 0;
                                  fVar36 = (float)local_fc;
                                  if ((float)local_fc <= local_fc._4_4_) {
                                    fVar36 = local_fc._4_4_;
                                  }
                                  if (fVar36 <= local_f4) {
                                    fVar36 = local_f4;
                                  }
                                  fVar36 = (float)(-(uint)(0.0 < fVar36) & (uint)(1.0 / fVar36));
                                  fVar38 = (float)local_100;
                                  fVar39 = local_f4 * fVar36 * fVar38;
                                  fVar37 = local_fc._4_4_ * fVar36 * fVar38;
                                  fVar38 = fVar36 * (float)local_fc * fVar38;
                                  *(int *)(puVar24 + 0x16) =
                                       -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
                                  *(int *)((longlong)puVar24 + 0xb4) =
                                       -((int)ROUND(-0.5 - (fVar37 + fVar37)) >> 1);
                                  *(int *)(puVar24 + 0x17) =
                                       -((int)ROUND(-0.5 - (fVar39 + fVar39)) >> 1);
                                  LVar13.QuadPart =
                                       ((LARGE_INTEGER *)(LVar33.QuadPart + 0xa8))->QuadPart;
                                  if ((LARGE_INTEGER *)
                                      ((LARGE_INTEGER *)(LVar33.QuadPart + 0xa8))->QuadPart ==
                                      (LARGE_INTEGER *)0x0) {
                                    LVar13.QuadPart = LVar33.QuadPart;
                                  }
                                  ((LARGE_INTEGER *)(LVar13.QuadPart + 0x38))->QuadPart =
                                       (LONGLONG)(puVar24 + 2);
                                }
                                FUN_1436a14f8(param_5,local_738,LVar33.QuadPart);
                              }
LAB_143aadace:
                              lVar27 = lVar27 + 1;
                            } while (lVar27 < local_688);
                          }
                          pLVar19 = local_640[0];
                          lVar27 = local_7b8;
                          if (local_640[0] != (LARGE_INTEGER *)0x0) {
                            LOCK();
                            pLVar1 = local_640[0] + 1;
                            uVar30 = (pLVar1->s).LowPart;
                            (pLVar1->s).LowPart = (pLVar1->s).LowPart - 1;
                            UNLOCK();
                            if ((uVar30 & 0x3fffffff) == 1) {
                              pLVar1 = local_640[0] + 1;
                              LOCK();
                              uVar30 = (pLVar1->s).LowPart;
                              (pLVar1->s).LowPart = (pLVar1->s).LowPart | 0x40000000;
                              UNLOCK();
                              if ((uVar30 >> 0x1e & 1) == 0) {
                                bVar9 = *(byte *)((longlong)local_640[0] + 0xd);
                                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                plVar12[1] = (longlong)pLVar19;
                                plVar18 = DAT_14ca843c0;
                                plVar16 = DAT_14ca843c8;
                                if ((bVar9 & 2) == 0) {
                                  do {
                                    *plVar12 = (longlong)plVar18;
                                    LOCK();
                                    bVar35 = plVar18 != DAT_14ca843c0;
                                    plVar16 = plVar12;
                                    if (bVar35) {
                                      plVar18 = DAT_14ca843c0;
                                      plVar16 = DAT_14ca843c0;
                                    }
                                    DAT_14ca843c0 = plVar16;
                                    UNLOCK();
                                  } while (bVar35);
                                }
                                else {
                                  do {
                                    *plVar12 = (longlong)plVar16;
                                    LOCK();
                                    bVar35 = plVar16 != DAT_14ca843c8;
                                    plVar18 = plVar12;
                                    if (bVar35) {
                                      plVar16 = DAT_14ca843c8;
                                      plVar18 = DAT_14ca843c8;
                                    }
                                    DAT_14ca843c8 = plVar18;
                                    UNLOCK();
                                  } while (bVar35);
                                }
                              }
                            }
                          }
                        }
                      }
                      iVar11 = *(int *)(param_1 + 0x1b0);
                      uVar31 = local_730;
                      cVar34 = (char)local_758;
                    }
                  }
LAB_143aadc9c:
                  uVar31 = uVar31 + 1;
                } while ((longlong)uVar31 < (longlong)iVar11);
              }
            }
            else {
              local_770 = LVar26;
              local_764 = DVar22;
              if (uStack_1d0._4_1_ == '\0') {
                if ((DVar22 != 0) && (uStack_1d0._5_1_ != '\0')) goto LAB_143aadf07;
LAB_143aadf49:
                DVar22 = local_764;
                local_6b8 = (void *)0x0;
                if ((int)local_764 < 1) goto LAB_143aade51;
                uStack_6b0 = (ulonglong)local_764;
                unaff_RDI.s.HighPart = 0;
                unaff_RDI.s.LowPart = local_764;
                FUN_141835706(&local_6b8);
                LVar26 = local_770;
                _Size = local_770.QuadPart * 8;
                memset(local_6b8,0,_Size);
                local_6c8 = (void *)0x0;
                uStack_6c0 = (ulonglong)DVar22;
                FUN_141835868(&local_6c8);
                memset(local_6c8,0,_Size);
                pLVar19 = (LARGE_INTEGER *)0x0;
                do {
                  uVar15 = FUN_144af077a(param_5);
                  *(undefined8 *)((longlong)local_6b8 + (longlong)pLVar19 * 8) = uVar15;
                  *(longlong *)((longlong)local_6c8 + (longlong)pLVar19 * 8) =
                       *(longlong *)((longlong)local_6b8 + (longlong)pLVar19 * 8) + 8;
                  pLVar19 = (LARGE_INTEGER *)((longlong)&(pLVar19->s).LowPart + 1);
                } while ((LARGE_INTEGER *)LVar26.QuadPart != pLVar19);
              }
              else {
                if (DVar22 != 0) {
LAB_143aadf07:
                  lVar29 = 0;
                  unaff_RDI.QuadPart = 0;
                  do {
                    local_820.QuadPart = local_658 + lVar29;
                    local_818.s.LowPart = unaff_RDI.s.LowPart;
                    local_828.s.LowPart._0_1_ = uVar8;
                    FUN_143aab988(param_1,&local_1e8,param_6.QuadPart);
                    unaff_RDI.QuadPart = unaff_RDI.QuadPart + 1;
                    lVar29 = lVar29 + 0x2b0;
                  } while (local_770.QuadPart != unaff_RDI.QuadPart);
                  goto LAB_143aadf49;
                }
LAB_143aade51:
                uStack_6b0 = 0;
                local_6b8 = (void *)0x0;
                local_6c8 = (void *)0x0;
                uStack_6c0 = 0;
              }
              iVar11 = *(int *)(param_1 + 0x1b0);
              if (0 < iVar11) {
                local_750 = *(LARGE_INTEGER *)(param_6.QuadPart + 0x2f8);
                uVar31 = 0;
                do {
                  if ((uVar31 != 0) &&
                     ((local_158._4_4_ == -1 ||
                      ((uStack_1d0._5_1_ == '\0' && ((byte)uStack_1d0 != '\x01')))))) break;
                  if (local_7a4 == 0xffffffff || uVar31 == local_6f8) {
                    lVar29 = *(longlong *)(param_1 + 0x1a0);
                    if (*(longlong *)(param_1 + 0x1a0) == 0) {
                      lVar29 = local_700;
                    }
                    LVar26.QuadPart = lVar29 + uVar31 * 0x80;
                    local_6a0 = 0xffffffff;
                    local_698 = 0;
                    local_690 = 0;
                    local_688 = 0;
                    local_660 = 0;
                    uStack_670 = 0;
                    uStack_66c = 0;
                    local_680 = 0;
                    uStack_678 = 0;
                    uStack_674 = 0;
                    local_6d0 = uVar31;
                    if (*(char *)(lVar29 + 0x14 + uVar31 * 0x80) == '\x02') {
                      local_5b8 = local_710[6];
                      local_5e8.s = *(_struct_19 *)local_710;
                      LStack_5e0 = local_710[1];
                      local_5d8 = local_710[2].s.LowPart;
                      LStack_5d4 = *(LONG *)((longlong)local_710 + 0x14);
                      DStack_5d0 = local_710[3].s.LowPart;
                      LStack_5cc = *(LONG *)((longlong)local_710 + 0x1c);
                      local_5c8 = local_710[4];
                      LStack_5c0 = local_710[5];
                      local_828.s.LowPart = *(undefined4 *)(LVar26.QuadPart + 0x1c);
                      uVar10 = (**(code **)(**(longlong **)LVar26 + 0x50))
                                         (*(longlong **)LVar26,&local_5e8,(float)(double)local_5b8,
                                          local_7c0);
                      (**(code **)(**(longlong **)LVar26 + 0x18))
                                (*(longlong **)LVar26,&local_6a0,uVar10);
                    }
                    else {
                      (**(code **)(**(longlong **)LVar26 + 0x18))
                                (*(longlong **)LVar26,&local_6a0,
                                 (((LARGE_INTEGER *)(LVar26.QuadPart + 0x18))->s).LowPart);
                    }
                    if ((0 < (int)local_764) && ((int)local_6a0 != -1)) {
                      local_748 = (undefined8 *)(LVar26.QuadPart + 0x3c);
                      local_728.QuadPart = LVar26.QuadPart + 0x60;
                      pLVar19 = (LARGE_INTEGER *)0x0;
                      local_790.QuadPart = LVar26.QuadPart;
                      do {
                        lVar29 = *(longlong *)((longlong)local_6b8 + (longlong)pLVar19 * 8);
                        local_778 = (LARGE_INTEGER)
                                    ((LARGE_INTEGER *)((longlong)local_6c8 + (longlong)pLVar19 * 8))
                                    ->QuadPart;
                        local_788 = pLVar19;
                        FUN_144af096e(&local_498,(longlong)pLVar19 * 0x2b0 + local_658);
                        LVar13 = local_778;
                        local_218 = 0;
                        if ((longlong)local_788 < (longlong)*(int *)(local_1d8 + 400)) {
                          local_218 = *(undefined4 *)
                                       (*(longlong *)(local_1d8 + 0x188) + (longlong)local_788 * 4);
                        }
                        if (*(longlong *)(local_740 + 0x40) != 0) {
                          *(undefined1 *)(local_778.QuadPart + 0xc) =
                               *(undefined1 *)(*(longlong *)(local_740 + 0x40) + 8);
                        }
                        *(byte *)(local_778.QuadPart + 0x1f0) = (byte)uStack_1d0;
                        (**(code **)(*(longlong *)local_778 + 0x18))(local_778.QuadPart,lVar27);
                        (**(code **)(**(longlong **)LVar26 + 0x30))
                                  (*(longlong **)LVar26,lVar27,LVar13.QuadPart,&local_6a0);
                        local_5f0 = *(undefined4 *)(local_6e8 + 1);
                        local_5f8 = *local_6e8;
                        local_608 = *local_748;
                        local_600 = *(undefined4 *)(local_748 + 1);
                        unaff_RDI.QuadPart = (LONGLONG)local_640;
                        (**(code **)(**(longlong **)LVar26 + 0x10))
                                  (*(longlong **)LVar26,unaff_RDI.QuadPart);
                        FUN_1400e4e82(&local_5e8,unaff_RDI.QuadPart,&local_608,&local_5f8);
                        local_110 = ((double)CONCAT44(LStack_5d4,local_5d8) + (double)LStack_5c0) *
                                    0.5;
                        dStack_118 = ((double)LStack_5e0 + (double)local_5c8) * 0.5;
                        local_120 = ((double)local_5e8 + (double)CONCAT44(LStack_5cc,DStack_5d0)) *
                                    0.5;
                        dVar5 = ((double)LStack_5c0 - (double)CONCAT44(LStack_5d4,local_5d8)) * 0.5;
                        dVar6 = ((double)local_5c8 - (double)LStack_5e0) * 0.5;
                        dVar40 = ((double)CONCAT44(LStack_5cc,DStack_5d0) - (double)local_5e8) * 0.5
                        ;
                        dStack_108 = SQRT(dVar5 * dVar5 + dVar40 * dVar40 + dVar6 * dVar6);
                        if (*(char *)(LVar26.QuadPart + 0x38) == '\0') {
                          local_128 = DAT_14c8464f0;
                          local_138._4_4_ = DAT_14c8464e0._4_4_;
                          local_138._0_4_ = (undefined4)DAT_14c8464e0;
                          uStack_12c = DAT_14c8464e8._4_4_;
                          local_138._8_4_ = (undefined4)DAT_14c8464e8;
                          local_120 = local_120 + (double)*(float *)(LVar26.QuadPart + 0x2c);
                          dStack_118 = dStack_118 + (double)*(float *)(LVar26.QuadPart + 0x30);
                          local_110 = local_110 + (double)*(float *)(LVar26.QuadPart + 0x34);
                        }
                        else {
                          local_128 = (double)*(float *)(LVar26.QuadPart + 0x34);
                          dVar5 = (double)*(float *)(LVar26.QuadPart + 0x30);
                          local_138._0_8_ = (undefined8)*(float *)(LVar26.QuadPart + 0x2c);
                          stack0xfffffffffffffed0 = dVar5;
                          if ((*(char *)(LVar26.QuadPart + 0x38) == '\x03') ||
                             ((*(char *)(LVar26.QuadPart + 0x38) == '\x01' &&
                              ((*(uint *)(param_1 + 0xf0) & 1) != 0)))) {
                            dVar40 = local_128 * *(double *)(param_6.QuadPart + 0x140);
                            dVar6 = *(double *)(param_6.QuadPart + 0x168) * 0.0 +
                                    local_128 * *(double *)(param_6.QuadPart + 0x148) +
                                    dVar5 * *(double *)(param_6.QuadPart + 0x128) +
                                    (double)local_138._0_8_ * *(double *)(param_6.QuadPart + 0x108);
                            local_128 = (double)local_138._0_8_ *
                                        *(double *)(param_6.QuadPart + 0x110) +
                                        dVar5 * *(double *)(param_6.QuadPart + 0x130) +
                                        local_128 * *(double *)(param_6.QuadPart + 0x150) +
                                        *(double *)(param_6.QuadPart + 0x170) * 0.0;
                            local_138._8_4_ = SUB84(dVar6,0);
                            local_138._0_8_ =
                                 *(double *)(param_6.QuadPart + 0x160) * 0.0 +
                                 dVar40 + dVar5 * *(double *)(param_6.QuadPart + 0x120) +
                                          (double)local_138._0_8_ *
                                          *(double *)(param_6.QuadPart + 0x100);
                            uStack_12c = (int)((ulonglong)dVar6 >> 0x20);
                          }
                        }
                        if ((*(byte *)((longlong)&DAT_14ca814d0 +
                                      (ulonglong)
                                      *(ushort *)
                                       (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0xf8) * 2) *
                                      0x3c + 6) & 0x10) == 0) {
                          DStack_184 = 0xffffffff;
                          uStack_180 = 0xffffffff;
                          pLVar19 = (LARGE_INTEGER *)&DAT_14cb427f0;
                          LStack_168 = DAT_14cb42830;
                          local_160 = DAT_14cb42830;
                        }
                        else {
                          DStack_184 = (((LARGE_INTEGER *)(local_778.QuadPart + 0x1e8))->s).LowPart;
                          uStack_180 = (uint)*(byte *)(local_778.QuadPart + 0x1ed);
                          pLVar19 = (LARGE_INTEGER *)(local_778.QuadPart + 0x1d8);
                          LStack_168 = *(LARGE_INTEGER *)(local_778.QuadPart + 0x1d0);
                          local_160 = *(LARGE_INTEGER *)(local_778.QuadPart + 0x1e0);
                        }
                        uStack_17c = 0xffffffffffffffff;
                        local_170 = *pLVar19;
                        local_808.s.LowPart = (int)local_788;
                        local_818.QuadPart = (LONGLONG)local_7c0;
                        local_820 = local_750;
                        local_828.QuadPart = (LONGLONG)&local_498;
                        local_810 = LVar26;
                        iVar11 = FUN_143aac710(param_1,lVar27,&local_1e8,param_5[0x21].QuadPart);
                        local_730 = CONCAT44(local_730._4_4_,iVar11);
                        if (iVar11 != 0) {
                          local_828 = LVar26;
                          local_820 = param_6;
                          FUN_144b36a0c(param_1,&local_5e8,&local_1e8,local_7c0);
                          FUN_144af01cc(param_1,local_640,&local_1e8,&local_5e8);
                          ((LARGE_INTEGER *)(local_778.QuadPart + 0x1f8))->QuadPart =
                               (LONGLONG)local_640[0];
                          unaff_RDI = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar29 + 0x208))->QuadPart;
                          if ((LARGE_INTEGER *)unaff_RDI.QuadPart != local_640[0]) {
                            *(LARGE_INTEGER **)(lVar29 + 0x208) = local_640[0];
                            if (local_640[0] != (LARGE_INTEGER *)0x0) {
                              LOCK();
                              local_640[0][1].s.LowPart = local_640[0][1].s.LowPart + 1;
                              UNLOCK();
                            }
                            if ((LARGE_INTEGER *)unaff_RDI.QuadPart != (LARGE_INTEGER *)0x0) {
                              LOCK();
                              pLVar19 = (LARGE_INTEGER *)(unaff_RDI.QuadPart + 8);
                              uVar30 = (pLVar19->s).LowPart;
                              (pLVar19->s).LowPart = (pLVar19->s).LowPart - 1;
                              UNLOCK();
                              if ((uVar30 & 0x3fffffff) == 1) {
                                pLVar19 = (LARGE_INTEGER *)(unaff_RDI.QuadPart + 8);
                                LOCK();
                                uVar30 = (pLVar19->s).LowPart;
                                (pLVar19->s).LowPart = (pLVar19->s).LowPart | 0x40000000;
                                UNLOCK();
                                if ((uVar30 >> 0x1e & 1) == 0) {
                                  bVar9 = *(byte *)(unaff_RDI.QuadPart + 0xd);
                                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                  ((LARGE_INTEGER *)(plVar12 + 1))->QuadPart = (LONGLONG)unaff_RDI;
                                  plVar18 = DAT_14ca843c0;
                                  plVar16 = DAT_14ca843c8;
                                  LVar26 = local_790;
                                  if ((bVar9 & 2) == 0) {
                                    do {
                                      *plVar12 = (longlong)plVar18;
                                      LOCK();
                                      bVar35 = plVar18 != DAT_14ca843c0;
                                      plVar16 = plVar12;
                                      if (bVar35) {
                                        plVar18 = DAT_14ca843c0;
                                        plVar16 = DAT_14ca843c0;
                                      }
                                      DAT_14ca843c0 = plVar16;
                                      UNLOCK();
                                    } while (bVar35);
                                  }
                                  else {
                                    do {
                                      *plVar12 = (longlong)plVar16;
                                      LOCK();
                                      bVar35 = plVar16 != DAT_14ca843c8;
                                      plVar18 = plVar12;
                                      if (bVar35) {
                                        plVar16 = DAT_14ca843c8;
                                        plVar18 = DAT_14ca843c8;
                                      }
                                      DAT_14ca843c8 = plVar18;
                                      UNLOCK();
                                    } while (bVar35);
                                  }
                                }
                              }
                            }
                          }
                          if (((*local_6f0 != 0x40000002) && (*local_6f0 == 1)) &&
                             (DAT_14c86a9f8 != '\0')) {
                            FUN_140ad26c0();
                            GetCurrentThreadId();
                          }
                          if (0 < local_688) {
                            lVar29 = 0;
                            do {
                              lVar21 = local_690;
                              unaff_RDI.QuadPart = lVar29 * 0x1c;
                              LVar13.QuadPart =
                                   ((LARGE_INTEGER *)(LVar26.QuadPart + 0x70))->QuadPart;
                              if ((LARGE_INTEGER *)
                                  ((LARGE_INTEGER *)(LVar26.QuadPart + 0x70))->QuadPart ==
                                  (LARGE_INTEGER *)0x0) {
                                LVar13 = local_728;
                              }
                              iVar11 = *(int *)(LVar13.QuadPart +
                                               (longlong)*(int *)(local_690 + unaff_RDI.QuadPart) *
                                               4);
                              if (((longlong)iVar11 < 0) || (*(int *)(lStack_1e0 + 0x78) <= iVar11))
                              {
                                FUN_14003fbd6();
                                LVar13.QuadPart = (**(code **)(*DAT_14caea080 + 0x2f0))();
                              }
                              else {
                                lVar20 = lStack_1e0 + 0x30;
                                if (*(longlong *)(lStack_1e0 + 0x70) != 0) {
                                  lVar20 = *(longlong *)(lStack_1e0 + 0x70);
                                }
                                LVar13 = (LARGE_INTEGER)
                                         ((LARGE_INTEGER *)(lVar20 + (longlong)iVar11 * 8))->
                                         QuadPart;
                              }
                              puVar32 = (undefined1 *)(lVar21 + unaff_RDI.QuadPart);
                              if ((*(int *)(puVar32 + 8) != 0) &&
                                 ((LARGE_INTEGER *)LVar13.QuadPart != (LARGE_INTEGER *)0x0)) {
                                local_7b0 = LVar13;
                                plVar16 = (longlong *)
                                          FUN_14485b2b4(LVar13.QuadPart,
                                                        *(undefined4 *)(param_1 + 0xf8));
                                pcVar17 = *(code **)(*plVar16 + 0x270);
                                plVar18 = plVar16;
                                if (pcVar17 == (code *)&LAB_1447f82f4) {
                                  plVar18 = (longlong *)plVar16[9];
                                  if (plVar18 == (longlong *)0x0) {
                                    plVar18 = (longlong *)plVar16[8];
                                    pcVar17 = *(code **)(*plVar18 + 0x408);
                                    if (pcVar17 != (code *)&LAB_14470b702) goto LAB_143aaea34;
                                    bVar9 = *(byte *)((longlong)plVar18 + 0x129);
                                    if (bVar9 == 1) {
                                      bVar9 = ~*(byte *)((longlong)plVar18 + 0x1d6) & 1;
                                    }
                                    uVar30 = (uint)bVar9;
                                  }
                                  else {
                                    pcVar17 = *(code **)(*plVar18 + 0x408);
                                    if (pcVar17 != (code *)&LAB_14497e176) goto LAB_143aaea34;
                                    uVar30 = (uint)*(byte *)(plVar18 + 0x2b);
                                  }
                                }
                                else {
LAB_143aaea34:
                                  uVar30 = (*pcVar17)(plVar18);
                                }
                                uVar8 = 1;
                                if (((uVar30 < 2) ||
                                    (uVar8 = (**(code **)(*plVar16 + 0x58))(plVar16), local_758 == 0
                                    )) || ((*(byte *)(param_6.QuadPart + 0x72) & 1) != 0)) {
                                  DVar22 = 0xffffffff;
                                  if ((((byte)uStack_1d0 == '\0') &&
                                      (DVar22 = local_458._4_4_, local_458._4_4_ == 0xffffffff)) &&
                                     (DVar22 = 0xffffffff,
                                     (longlong)local_788 < (longlong)*(int *)(local_1d8 + 0x178))) {
                                    DVar22 = *(DWORD *)(*(longlong *)(local_1d8 + 0x170) +
                                                       (longlong)local_788 * 4);
                                  }
                                  DVar23 = param_5[1].s.LowPart;
                                  DVar3 = param_5[2].s.LowPart;
                                  DVar7 = (int)(DVar3 + 0x44) / 0x44;
                                  param_5[2].s.LowPart = DVar3 + 1;
                                  if ((int)DVar23 < (int)DVar7) {
                                    local_77c = CONCAT31(local_77c._1_3_,uVar8);
                                    local_71c = DVar22;
                                    do {
                                      local_720 = DVar23;
                                      lVar27 = FUN_14001cc68(0x3fc0,0x10);
                                      lVar21 = 0;
                                      do {
                                        *(undefined8 *)(lVar27 + 0xa8 + lVar21) = 0;
                                        puVar24 = (undefined8 *)(lVar27 + 0xb8 + lVar21);
                                        *puVar24 = 0;
                                        puVar24[1] = 0;
                                        *(undefined8 *)(lVar27 + 200 + lVar21) = 0;
                                        *(undefined8 *)(lVar27 + 0xd0 + lVar21) = 0xffffffff;
                                        *(undefined8 *)(lVar27 + 0xd8 + lVar21) = 0xff0000ffffffff;
                                        *(undefined1 *)(lVar27 + 0xe0 + lVar21) = 0;
                                        *(undefined4 *)(lVar27 + 0xe4 + lVar21) = 0x40c00f07;
                                        pbVar2 = (byte *)(lVar27 + 0xe8 + lVar21);
                                        *pbVar2 = *pbVar2 & 0xfc;
                                        *(undefined1 **)(lVar27 + 0xb0 + lVar21) = &DAT_100000001;
                                        FUN_14470b9e0(lVar27 + lVar21,1);
                                        lVar21 = lVar21 + 0xf0;
                                      } while (lVar21 != 0x3fc0);
                                      DVar22 = param_5[1].s.LowPart;
                                      unaff_RDI = (LARGE_INTEGER)(longlong)(int)DVar22;
                                      param_5[1].s.LowPart = DVar22 + 1;
                                      if (*(uint *)((longlong)param_5 + 0xc) < DVar22 + 1) {
                                        FUN_14002baf6(param_5,DVar22);
                                      }
                                      *(longlong *)(param_5->QuadPart + unaff_RDI.QuadPart * 8) =
                                           lVar27;
                                      DVar23 = local_720 + 1;
                                      lVar27 = local_7b8;
                                      uVar8 = (undefined1)local_77c;
                                      DVar22 = local_71c;
                                    } while (DVar23 != DVar7);
                                  }
                                  local_7e0 = DVar22;
                                  LVar26 = local_790;
                                  param_1 = local_7a0;
                                  LVar13.QuadPart =
                                       (ulonglong)(uint)((int)DVar3 % 0x44) * 0xf0 +
                                       *(longlong *)
                                        (param_5->QuadPart + (longlong)((int)DVar3 / 0x44) * 8);
                                  local_7c8 = SUB84(local_788,0);
                                  local_7d8 = (undefined1)local_794;
                                  local_7e8 = (undefined4)local_730;
                                  local_7f0 = local_7c0;
                                  local_800 = &local_6a0;
                                  local_808.s = local_790.s;
                                  local_810.s = param_6.s;
                                  local_820 = local_778;
                                  local_828.QuadPart = LVar13.QuadPart;
                                  local_818 = local_7b0;
                                  local_7f8 = puVar32;
                                  local_7d0 = uVar8;
                                  FUN_1447fa5ac(local_7a0,lVar27,&local_1e8,&local_5e8);
                                  FUN_1436a14f8(param_5,local_738,LVar13.QuadPart);
                                }
                              }
                              lVar29 = lVar29 + 1;
                            } while (lVar29 < local_688);
                          }
                          pLVar19 = local_640[0];
                          if (local_640[0] != (LARGE_INTEGER *)0x0) {
                            LOCK();
                            pLVar1 = local_640[0] + 1;
                            uVar30 = (pLVar1->s).LowPart;
                            (pLVar1->s).LowPart = (pLVar1->s).LowPart - 1;
                            UNLOCK();
                            if ((uVar30 & 0x3fffffff) == 1) {
                              pLVar1 = local_640[0] + 1;
                              LOCK();
                              uVar30 = (pLVar1->s).LowPart;
                              (pLVar1->s).LowPart = (pLVar1->s).LowPart | 0x40000000;
                              UNLOCK();
                              if ((uVar30 >> 0x1e & 1) == 0) {
                                bVar9 = *(byte *)((longlong)local_640[0] + 0xd);
                                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                plVar12[1] = (longlong)pLVar19;
                                plVar18 = DAT_14ca843c0;
                                plVar16 = DAT_14ca843c8;
                                LVar26 = local_790;
                                if ((bVar9 & 2) == 0) {
                                  do {
                                    *plVar12 = (longlong)plVar18;
                                    LOCK();
                                    bVar35 = plVar18 != DAT_14ca843c0;
                                    plVar16 = plVar12;
                                    if (bVar35) {
                                      plVar18 = DAT_14ca843c0;
                                      plVar16 = DAT_14ca843c0;
                                    }
                                    DAT_14ca843c0 = plVar16;
                                    UNLOCK();
                                  } while (bVar35);
                                }
                                else {
                                  do {
                                    *plVar12 = (longlong)plVar16;
                                    LOCK();
                                    bVar35 = plVar16 != DAT_14ca843c8;
                                    plVar18 = plVar12;
                                    if (bVar35) {
                                      plVar16 = DAT_14ca843c8;
                                      plVar18 = DAT_14ca843c8;
                                    }
                                    DAT_14ca843c8 = plVar18;
                                    UNLOCK();
                                  } while (bVar35);
                                }
                              }
                            }
                          }
                        }
                        pLVar19 = (LARGE_INTEGER *)((longlong)local_788 + 1);
                      } while (pLVar19 != (LARGE_INTEGER *)local_770.QuadPart);
                    }
                    iVar11 = *(int *)(param_1 + 0x1b0);
                    uVar31 = local_6d0;
                  }
                  uVar31 = uVar31 + 1;
                } while ((longlong)uVar31 < (longlong)iVar11);
              }
              if (local_6c8 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_6b8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar29 = local_210;
            if (local_210 != 0) {
              LOCK();
              puVar14 = (uint *)(local_210 + 8);
              uVar30 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar30 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(local_210 + 8);
                LOCK();
                uVar30 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar30 >> 0x1e & 1) == 0) {
                  bVar9 = *(byte *)(local_210 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = lVar29;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  lVar27 = local_7b8;
                  param_1 = local_7a0;
                  if ((bVar9 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar18;
                      LOCK();
                      bVar35 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar12;
                      if (bVar35) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar12;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            lVar29 = local_460;
            if (local_460 != 0) {
              LOCK();
              puVar14 = (uint *)(local_460 + 8);
              uVar30 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar30 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(local_460 + 8);
                LOCK();
                uVar30 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar30 >> 0x1e & 1) == 0) {
                  bVar9 = *(byte *)(local_460 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = lVar29;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  lVar27 = local_7b8;
                  param_1 = local_7a0;
                  if ((bVar9 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar18;
                      LOCK();
                      bVar35 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar12;
                      if (bVar35) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar12;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            lVar29 = local_478;
            if (local_478 != 0) {
              LOCK();
              puVar14 = (uint *)(local_478 + 8);
              uVar30 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar30 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(local_478 + 8);
                LOCK();
                uVar30 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar30 >> 0x1e & 1) == 0) {
                  bVar9 = *(byte *)(local_478 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = lVar29;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar9 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar18;
                      LOCK();
                      bVar35 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar12;
                      if (bVar35) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar12;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            lVar29 = lStack_480;
            if (lStack_480 != 0) {
              LOCK();
              puVar14 = (uint *)(lStack_480 + 8);
              uVar30 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar30 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(lStack_480 + 8);
                LOCK();
                uVar30 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar30 >> 0x1e & 1) == 0) {
                  bVar9 = *(byte *)(lStack_480 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = lVar29;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  lVar27 = local_7b8;
                  param_1 = local_7a0;
                  if ((bVar9 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar18;
                      LOCK();
                      bVar35 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar12;
                      if (bVar35) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar12;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            lVar29 = local_488;
            if (local_488 != 0) {
              LOCK();
              puVar14 = (uint *)(local_488 + 8);
              uVar30 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar30 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(local_488 + 8);
                LOCK();
                uVar30 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar30 >> 0x1e & 1) == 0) {
                  bVar9 = *(byte *)(local_488 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = lVar29;
                  plVar18 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  lVar27 = local_7b8;
                  param_1 = local_7a0;
                  if ((bVar9 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar18;
                      LOCK();
                      bVar35 = plVar18 != DAT_14ca843c0;
                      plVar16 = plVar12;
                      if (bVar35) {
                        plVar18 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar18 = plVar12;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            FUN_144aef1bc(local_658,uStack_650 & 0xffffffff);
            lVar21 = local_738;
            lVar29 = local_6d8;
            uVar30 = local_780;
            if (local_658 != 0) {
              FUN_1400020a8();
              lVar21 = local_738;
              lVar29 = local_6d8;
              uVar30 = local_780;
            }
          }
LAB_143aaed89:
          lVar21 = lVar21 + 1;
        } while (lVar21 != lVar29);
      }
    }
  }
LAB_143aaf24e:
  if ((LARGE_INTEGER *)local_148.QuadPart != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  lVar29 = local_6e0;
  lVar27 = local_718;
  if ((local_718 != -1) && (QueryPerformanceCounter(&local_498), lVar29 != 0)) {
    plVar18 = (longlong *)(lVar29 + 0x48);
    *plVar18 = *plVar18 + (CONCAT44(local_498.s.HighPart,local_498.s.LowPart) - lVar27);
  }
  if ((local_f0 ^ (ulonglong)auStack_848) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143aaf34e FUN_143aaf34e body=1163 status=ok
// SIG undefined FUN_143aaf34e(void)

undefined8 * FUN_143aaf34e(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_144a47c72(param_1,param_3,param_4);
  if (cVar6 != '\0') {
    if (*(char *)(param_3 + 0x5e) == '\0') {
      iVar1 = *(int *)(*(longlong *)(param_4 + 8) + 0x4c);
      if ((((iVar1 != 0) &&
           (uVar10 = *(uint *)(*(longlong *)(param_4 + 8) + 0x48), -1 < (int)uVar10)) &&
          ((int)uVar10 < DAT_14c9647dc)) &&
         (((plVar12 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar1)) &&
          (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar2 = *plVar12, lVar2 != 0)))))) {
        lVar11 = FUN_14143f1a6();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) goto LAB_143aaf697;
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x78);
    if ((lVar2 != 0) &&
       (((longlong)(int)param_1[0x36] != 0 &&
        (((*(char *)((longlong)param_1 + 0x1c4) != '\0' ||
          (*(char *)((longlong)param_1 + 0xf4) == '\x01')) || (*(int *)(lVar2 + 0x120) != 0)))))) {
      plVar12 = param_1 + 0x24;
      if ((longlong *)param_1[0x34] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[0x34];
      }
      puVar7 = (undefined8 *)0x0;
      lVar11 = 0;
      do {
        if (*(longlong *)((longlong)plVar12 + lVar11) == 0) goto LAB_143aaf69a;
        lVar11 = lVar11 + 0x80;
      } while ((longlong)(int)param_1[0x36] * 0x80 != lVar11);
      puVar7 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      *puVar7 = &PTR_FUN_14ae09a28;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[3] = *(undefined8 *)(*(longlong *)(param_4 + 8) + 0x100);
      if (*(char *)(param_4 + 0xd1) == '\0') {
        puVar7[4] = lVar2;
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      else {
        puVar7[5] = *(undefined8 *)(param_4 + 0x20);
      }
      *puVar7 = &PTR_FUN_14ae0dda0;
      puVar7[0xe] = 0;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = 8;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x114);
      lVar2 = param_1[0x23];
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x11c);
      *(int *)(puVar7 + 1) = (int)param_1[0x22];
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar4;
      *(int *)(puVar7 + 2) = (int)lVar2;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar5;
      uVar10 = *(uint *)(param_1 + 0x21);
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar10);
      }
      puVar13 = puVar7 + 6;
      *(undefined4 *)(puVar7 + 0xf) = 0;
      local_70 = puVar7;
      local_68 = param_1;
      local_60 = param_3;
      if (8 < uVar10) {
        FUN_1481da48a(puVar13);
        uVar10 = *(uint *)(param_1 + 0x21);
      }
      if (uVar10 != 0) {
        lVar2 = local_68[0x20];
        lVar11 = 0;
        do {
          uVar8 = (**(code **)(**(longlong **)(lVar2 + lVar11) + 0x2f0))();
          iVar1 = *(int *)(puVar7 + 0xf);
          *(uint *)(puVar7 + 0xf) = iVar1 + 1U;
          if (*(uint *)((longlong)puVar7 + 0x7c) < iVar1 + 1U) {
            FUN_1481da558(puVar13,iVar1);
          }
          puVar9 = (undefined8 *)puVar7[0xe];
          if ((undefined8 *)puVar7[0xe] == (undefined8 *)0x0) {
            puVar9 = puVar13;
          }
          puVar9[iVar1] = uVar8;
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)uVar10 * 8 != lVar11);
      }
      lVar2 = local_60;
      if (local_70 != (undefined8 *)0x0) {
        puVar13 = local_70 + 0x10;
        puVar9 = local_70 + 0x12;
        if (puVar13 != (undefined8 *)(param_4 + 0x70)) {
          iVar1 = *(int *)(param_4 + 0x78);
          pvVar3 = *(void **)(param_4 + 0x70);
          *(int *)(puVar7 + 0x11) = iVar1;
          if (iVar1 == 0 && *(int *)((longlong)puVar7 + 0x8c) == 0) {
            *(undefined4 *)((longlong)puVar7 + 0x8c) = 0;
          }
          else {
            FUN_14016dbec(puVar13,iVar1);
            if (iVar1 != 0) {
              memcpy((void *)*puVar13,pvVar3,(longlong)iVar1 << 3);
            }
          }
        }
        puVar13 = local_70 + 0x14;
        if (puVar9 != (undefined8 *)(param_4 + 0x80)) {
          iVar1 = *(int *)(param_4 + 0x88);
          pvVar3 = *(void **)(param_4 + 0x80);
          *(int *)(puVar7 + 0x13) = iVar1;
          if (iVar1 == 0 && *(int *)((longlong)puVar7 + 0x9c) == 0) {
            *(undefined4 *)((longlong)puVar7 + 0x9c) = 0;
          }
          else {
            FUN_14010590e(puVar9,iVar1);
            if (iVar1 != 0) {
              memcpy((void *)*puVar9,pvVar3,(longlong)iVar1 << 3);
            }
          }
        }
        if (puVar13 != (undefined8 *)(param_4 + 0x60)) {
          iVar1 = *(int *)(param_4 + 0x68);
          pvVar3 = *(void **)(param_4 + 0x60);
          *(int *)(puVar7 + 0x15) = iVar1;
          if (iVar1 == 0 && *(int *)((longlong)puVar7 + 0xac) == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
          }
          else {
            FUN_1447a127e(puVar13,iVar1);
            if (iVar1 != 0) {
              memcpy((void *)*puVar13,pvVar3,(longlong)iVar1);
            }
          }
        }
        if (((0 < *(int *)(lVar2 + 0x4d0)) || (0 < *(int *)(lVar2 + 0x4e0))) ||
           ((0 < *(int *)(lVar2 + 0x4f0) || (0 < *(int *)(lVar2 + 0x500))))) {
          local_58 = local_68[0x20];
          local_50 = (undefined4)local_68[0x21];
          (**(code **)(*local_68 + 0x80))(local_68,lVar2 + 0x4c8,param_4);
        }
        goto LAB_143aaf69a;
      }
    }
  }
LAB_143aaf697:
  puVar7 = (undefined8 *)0x0;
LAB_143aaf69a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 143aaf7da FUN_143aaf7da body=55 status=ok
// SIG undefined FUN_143aaf7da(void)

void FUN_143aaf7da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42a48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42a48 = FUN_14171c317(FUN_146477c9d,uVar1,L"ENiagaraRendererSortPrecision");
  }
  return;
}



// FUNCTION 143aaf811 FUN_143aaf811 body=55 status=ok
// SIG undefined FUN_143aaf811(void)

void FUN_143aaf811(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42a60 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42a60 = FUN_14171c317(FUN_146477ccc,uVar1,L"ENiagaraRendererGpuTranslucentLatency");
  }
  return;
}



// FUNCTION 143aaf848 FUN_143aaf848 body=69 status=ok
// SIG undefined FUN_143aaf848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aaf848(void)

{
  _DAT_14cb42b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aaf88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b08,1);
  return;
}



// FUNCTION 143aaf88e FUN_143aaf88e body=164 status=ok
// SIG undefined FUN_143aaf88e(void)

void FUN_143aaf88e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar6 = lVar2 + 0x120;
  lVar3 = *(longlong *)(lVar2 + 0x1a0);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = lVar6;
  }
  iVar1 = *(int *)(lVar2 + 0x1a8);
  lVar7 = (longlong)iVar1;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(lVar4 + lVar5) == param_3) {
        return;
      }
      lVar5 = lVar5 + 4;
    } while (lVar7 * 4 - lVar5 != 0);
  }
  *(uint *)(lVar2 + 0x1a8) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x1ac) < iVar1 + 1U) {
    FUN_1456cba76(lVar6,iVar1);
    lVar3 = *(longlong *)(lVar2 + 0x1a0);
  }
  if (lVar3 != 0) {
    lVar6 = lVar3;
  }
  *(int *)(lVar6 + lVar7 * 4) = param_3;
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + param_2;
  return;
}



// FUNCTION 143aaf932 FUN_143aaf932 body=69 status=ok
// SIG undefined FUN_143aaf932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aaf932(void)

{
  _DAT_14cb42b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aaf974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b18,1);
  return;
}



// FUNCTION 143aaf977 FUN_143aaf977 body=69 status=ok
// SIG undefined FUN_143aaf977(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aaf977(void)

{
  _DAT_14cb42b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aaf9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b28,1);
  return;
}



// FUNCTION 143aaf9bc FUN_143aaf9bc body=69 status=ok
// SIG undefined FUN_143aaf9bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aaf9bc(void)

{
  _DAT_14cb42b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aaf9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b38,1);
  return;
}



// FUNCTION 143aafa01 FUN_143aafa01 body=69 status=ok
// SIG undefined FUN_143aafa01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafa01(void)

{
  _DAT_14cb42b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafa43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b48,1);
  return;
}



// FUNCTION 143aafa46 FUN_143aafa46 body=69 status=ok
// SIG undefined FUN_143aafa46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafa46(void)

{
  _DAT_14cb42b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b58,1);
  return;
}



// FUNCTION 143aafa8b FUN_143aafa8b body=69 status=ok
// SIG undefined FUN_143aafa8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafa8b(void)

{
  _DAT_14cb42b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b68,1);
  return;
}



// FUNCTION 143aafad0 FUN_143aafad0 body=69 status=ok
// SIG undefined FUN_143aafad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafad0(void)

{
  _DAT_14cb42b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b78,1);
  return;
}



// FUNCTION 143aafb15 FUN_143aafb15 body=69 status=ok
// SIG undefined FUN_143aafb15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafb15(void)

{
  _DAT_14cb42b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafb57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b88,1);
  return;
}



// FUNCTION 143aafb5a FUN_143aafb5a body=69 status=ok
// SIG undefined FUN_143aafb5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafb5a(void)

{
  _DAT_14cb42b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42b98,1);
  return;
}



// FUNCTION 143aafb9f FUN_143aafb9f body=69 status=ok
// SIG undefined FUN_143aafb9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafb9f(void)

{
  _DAT_14cb42ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafbe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42bb0,1);
  return;
}



// FUNCTION 143aafbe4 FUN_143aafbe4 body=69 status=ok
// SIG undefined FUN_143aafbe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafbe4(void)

{
  _DAT_14cb42bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafc26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42bc8,1);
  return;
}



// FUNCTION 143aafc29 FUN_143aafc29 body=69 status=ok
// SIG undefined FUN_143aafc29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafc29(void)

{
  _DAT_14cb42bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafc6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42bd8,1);
  return;
}



// FUNCTION 143aafc6e FUN_143aafc6e body=69 status=ok
// SIG undefined FUN_143aafc6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafc6e(void)

{
  _DAT_14cb42be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42be8,1);
  return;
}



// FUNCTION 143aafcb3 FUN_143aafcb3 body=69 status=ok
// SIG undefined FUN_143aafcb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafcb3(void)

{
  _DAT_14cb42bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafcf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42bf8,1);
  return;
}



// FUNCTION 143aafcf8 FUN_143aafcf8 body=69 status=ok
// SIG undefined FUN_143aafcf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafcf8(void)

{
  _DAT_14cb42c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafd3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42c10,1);
  return;
}



// FUNCTION 143aafd3d FUN_143aafd3d body=69 status=ok
// SIG undefined FUN_143aafd3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafd3d(void)

{
  _DAT_14cb42c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafd7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42c28,1);
  return;
}



// FUNCTION 143aafd82 FUN_143aafd82 body=69 status=ok
// SIG undefined FUN_143aafd82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143aafd82(void)

{
  _DAT_14cb42c38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143aafdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42c40,1);
  return;
}



// FUNCTION 143aafdcc FUN_143aafdcc body=4072 status=ok
// SIG undefined FUN_143aafdcc(void)

void FUN_143aafdcc(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5,LARGE_INTEGER *param_6)

{
  int *piVar1;
  LARGE_INTEGER *pLVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint *puVar19;
  undefined7 uVar23;
  longlong *plVar20;
  undefined8 uVar21;
  code *pcVar22;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  LARGE_INTEGER *pLVar31;
  longlong lVar32;
  undefined2 *puVar33;
  undefined4 in_R10D;
  LARGE_INTEGER *pLVar34;
  ulonglong uVar35;
  LARGE_INTEGER LVar36;
  bool bVar37;
  undefined1 auStack_1a8 [32];
  LARGE_INTEGER *local_188;
  LARGE_INTEGER *local_180;
  LARGE_INTEGER *local_178;
  LARGE_INTEGER *local_170;
  LARGE_INTEGER *local_168;
  undefined1 local_160;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  undefined4 local_14c;
  char *local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 *local_120;
  ulonglong local_118;
  LARGE_INTEGER local_110;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  LARGE_INTEGER *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  LARGE_INTEGER local_c8;
  undefined2 *local_c0;
  int local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  LARGE_INTEGER local_78;
  DWORD DStack_70;
  undefined4 uStack_6c;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar28 = param_6[0x72].QuadPart;
  local_d0 = param_3;
  if (lVar28 == 0) {
    LVar36.QuadPart = -1;
  }
  else {
    QueryPerformanceCounter(&local_a8);
    LVar36 = local_a8;
  }
  lVar29 = *(longlong *)(param_1 + 8);
  if (lVar29 == 0) goto LAB_143ab0d19;
  plVar18 = *(longlong **)(lVar29 + 0x28);
  if (plVar18 == (longlong *)0x0) {
    lVar17 = *(longlong *)(lVar29 + 0x20);
  }
  else {
    lVar17 = (**(code **)(*plVar18 + 0x10))(plVar18,param_5[0x22]);
  }
  if ((lVar17 == 0) || (DAT_14c762990 == 0)) goto LAB_143ab0d19;
  if (*(char *)(lVar29 + 0x41) == '\x01') {
    if ((*(char *)(param_1 + 0xf4) != '\x01') || (*(uint *)(lVar17 + 0x120) < 2))
    goto LAB_143ab0d19;
  }
  else if ((*(uint *)(lVar17 + 0x120) < 2) ||
          ((*(char *)(lVar29 + 0x40) == '\0' &&
           ((*(longlong *)(lVar29 + 0x48) == 0 || (*(int *)(*(longlong *)(lVar29 + 0x48) + 8) < 1)))
           ))) goto LAB_143ab0d19;
  if (*(longlong *)(lVar29 + 0x30) != 0) {
    plVar18 = (longlong *)
              FUN_14485b2b4(*(longlong *)(lVar29 + 0x30),*(undefined4 *)(param_1 + 0xf8));
    if (*(code **)(*plVar18 + 0x270) == (code *)&LAB_1447f82f4) {
      plVar20 = (longlong *)plVar18[9];
      if (plVar20 == (longlong *)0x0) {
        plVar18 = (longlong *)plVar18[8];
        pcVar22 = *(code **)(*plVar18 + 0x408);
        if (pcVar22 != (code *)&LAB_14470b702) goto LAB_143ab0dae;
        bVar15 = *(byte *)((longlong)plVar18 + 0x129);
        if (bVar15 == 1) {
          bVar15 = ~*(byte *)((longlong)plVar18 + 0x1d6) & 1;
        }
        uVar24 = (uint)bVar15;
      }
      else {
        pcVar22 = *(code **)(*plVar20 + 0x408);
        if (pcVar22 == (code *)&LAB_14497e176) {
          uVar24 = (uint)*(byte *)(plVar20 + 0x2b);
        }
        else {
LAB_143ab0dae:
          uVar24 = (*pcVar22)();
        }
      }
    }
    else {
      uVar24 = (**(code **)(*plVar18 + 0x270))(plVar18);
    }
    if (1 < uVar24) {
      if (0 < (longlong)(int)param_2[1]) {
        lVar32 = 0;
        do {
          if ((((param_4 >> ((uint)lVar32 & 0x1f) & 1) != 0) &&
              (lVar26 = *(longlong *)(*param_2 + lVar32 * 8), *(longlong *)(lVar26 + 0x23e0) == 0))
             && ((in_R10D = CONCAT31((int3)((uint)in_R10D >> 8),1), local_14c = in_R10D,
                 (*(byte *)((longlong)param_6 + 0x72) & 1) != 0 ||
                 (*(longlong *)(lVar26 + 0x20) == 0)))) goto LAB_143aaffc9;
          lVar32 = lVar32 + 1;
        } while ((int)param_2[1] != lVar32);
      }
      goto LAB_143ab0d19;
    }
  }
  local_14c = 0;
LAB_143aaffc9:
  plVar18 = (longlong *)param_5[0x1d];
  local_130 = param_5[0x22];
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar19 = (uint *)*puVar4;
  local_150 = param_4;
  local_140 = param_1;
  if (puVar19 != (uint *)0x0) goto LAB_143ab0012;
  while( true ) {
    FUN_14472e504(puVar4);
    puVar19 = (uint *)*puVar4;
LAB_143ab0012:
    puVar27 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar24 = puVar19[0x12];
    if (puVar27 + 5 <= puVar19 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
      LOCK();
      uVar7 = *puVar19;
      *puVar19 = *puVar19 + uVar24 + 1;
      UNLOCK();
      if ((uVar7 ^ uVar24) != 0xffffffff) break;
      puVar19 = (uint *)*puVar4;
      *puVar19 = 0xffffffff;
      *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
      puVar19[0x12] = 0;
      *puVar4 = puVar19;
      puVar27 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
      uVar24 = 0;
      if (puVar27 + 5 <= puVar19 + 0x4000) {
        uVar24 = 1;
        goto LAB_143ab0088;
      }
    }
  }
  uVar24 = uVar24 + 1;
LAB_143ab0088:
  *(undefined8 **)(puVar19 + 0x10) = puVar27 + 6;
  puVar19[0x12] = uVar24;
  *(int *)(puVar27 + -1) = ((int)puVar27 + -8) - (int)puVar19;
  *(undefined4 *)((longlong)puVar27 + -4) = 0x28;
  puVar27[1] = 0;
  *puVar27 = &PTR_FUN_14ae0ed60;
  lVar32 = *plVar18;
  do {
    puVar27[1] = lVar32;
    LOCK();
    lVar26 = *plVar18;
    bVar37 = lVar32 == lVar26;
    if (bVar37) {
      *plVar18 = (longlong)puVar27;
      lVar26 = lVar32;
    }
    UNLOCK();
    lVar32 = lVar26;
  } while (!bVar37);
  local_120 = puVar27 + 2;
  FUN_141835b1a();
  uVar8 = *(undefined1 *)(lVar29 + 0x40);
  local_a8 = *(LARGE_INTEGER *)(puVar27 + 3);
  plVar18 = (longlong *)puVar27[4];
  uStack_a0 = plVar18;
  if (plVar18 == (longlong *)0x0) {
    local_188 = (LARGE_INTEGER *)param_5[0x21];
    local_178 = (LARGE_INTEGER *)CONCAT71(local_178._1_7_,uVar8);
    local_180 = &local_a8;
    FUN_1402bcb02(local_140,local_130,lVar29,lVar17);
    uVar24 = local_150;
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    local_180 = &local_a8;
    local_188 = (LARGE_INTEGER *)param_5[0x21];
    local_178 = (LARGE_INTEGER *)CONCAT71(local_178._1_7_,uVar8);
    FUN_1402bcb02(local_140,local_130,lVar29,lVar17);
    uVar24 = local_150;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar18 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  lVar32 = param_6[0x5f].QuadPart;
  local_f0 = FUN_140c7d77a(lVar32);
  uVar23 = (undefined7)((ulonglong)local_f0 >> 8);
  if (DAT_14c7629a0 == '\x01') {
    if (*(char *)(lVar29 + 0x40) == '\0') {
      local_154 = (undefined4)CONCAT71((int7)((ulonglong)lVar32 >> 8),*(char *)(lVar29 + 0x41));
      if ((char)local_14c == '\x01' && *(char *)(lVar29 + 0x41) == '\0') {
        lVar32 = *(longlong *)(lVar29 + 0x48);
        if (lVar32 != 0) {
          local_158 = (undefined4)
                      CONCAT71((int7)((ulonglong)lVar32 >> 8),0 < *(int *)(lVar32 + 0xa0));
          local_154 = 0;
          goto LAB_143ab023f;
        }
        local_154 = 0;
      }
    }
    else {
      local_154 = (undefined4)CONCAT71(uVar23,1);
    }
    local_158 = 0;
  }
  else {
    local_158 = (undefined4)CONCAT71(uVar23,1);
    local_154 = 0;
  }
LAB_143ab023f:
  iVar25 = (int)param_2[1];
  if (0 < iVar25) {
    local_d8 = lVar29 + 0x48;
    local_148 = (char *)(local_f0 + 0x178);
    local_f8 = local_f0 + 0x10;
    uVar35 = 0;
    local_118 = 0;
    local_138 = param_2;
    local_128 = lVar17;
    local_110 = LVar36;
    local_100 = lVar28;
LAB_143ab02a9:
    if ((((uVar24 >> ((uint)uVar35 & 0x1f) & 1) != 0) &&
        ((pLVar34 = *(LARGE_INTEGER **)(*param_2 + uVar35 * 8), param_2 = local_138,
         *(char *)((longlong)pLVar34 + 0x23f2) != '\x01' || (pLVar34[0x3ba].s.LowPart < 2)))) &&
       (((char)local_14c == '\0' ||
        ((pLVar34[0x47c].QuadPart == 0 &&
         ((pLVar34[4].QuadPart == 0 || ((*(byte *)((longlong)param_6 + 0x72) & 1) != 0)))))))) {
      iVar25 = (int)param_5[1];
      iVar16 = (int)param_5[2];
      iVar10 = (iVar16 + 0x44) / 0x44;
      *(int *)(param_5 + 2) = iVar16 + 1;
      if (iVar25 < iVar10) {
        do {
          local_e0 = lVar29;
          local_e8 = pLVar34;
          local_104 = iVar25;
          lVar28 = FUN_14001cc68(0x3fc0,0x10);
          lVar29 = 0;
          do {
            *(undefined8 *)(lVar28 + 0xa8 + lVar29) = 0;
            puVar4 = (undefined8 *)(lVar28 + 0xb8 + lVar29);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 *)(lVar28 + 200 + lVar29) = 0;
            *(undefined8 *)(lVar28 + 0xd0 + lVar29) = 0xffffffff;
            *(undefined8 *)(lVar28 + 0xd8 + lVar29) = 0xff0000ffffffff;
            *(undefined1 *)(lVar28 + 0xe0 + lVar29) = 0;
            *(undefined4 *)(lVar28 + 0xe4 + lVar29) = 0x40c00f07;
            pbVar5 = (byte *)(lVar28 + 0xe8 + lVar29);
            *pbVar5 = *pbVar5 & 0xfc;
            *(undefined1 **)(lVar28 + 0xb0 + lVar29) = &DAT_100000001;
            FUN_14470b9e0(lVar28 + lVar29,1);
            lVar29 = lVar29 + 0xf0;
          } while (lVar29 != 0x3fc0);
          iVar25 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar25 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar25 + 1U) {
            FUN_14002baf6(param_5,iVar25);
          }
          *(longlong *)(*param_5 + (longlong)iVar25 * 8) = lVar28;
          iVar25 = local_104 + 1;
          lVar29 = local_e0;
          pLVar34 = local_e8;
        } while (iVar25 != iVar10);
      }
      pLVar31 = (LARGE_INTEGER *)
                ((ulonglong)(uint)(iVar16 % 0x44) * 0xf0 +
                *(longlong *)(*param_5 + (longlong)(iVar16 / 0x44) * 8));
      local_68 = pLVar34[0x20b];
      local_78.s.LowPart = pLVar34[0x209].s.LowPart;
      local_78.s.HighPart = *(LONG *)((longlong)pLVar34 + 0x104c);
      DStack_70 = pLVar34[0x20a].s.LowPart;
      uStack_6c = *(undefined4 *)((longlong)pLVar34 + 0x1054);
      plVar18 = (longlong *)local_120[1];
      plVar20 = (longlong *)FUN_14001cc68(0x1b8);
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_14ae0ee20;
      memset(plVar20 + 3,0,0x1a0);
      *(undefined4 *)(plVar20 + 3) = 0xffffffff;
      *(undefined2 *)((longlong)plVar20 + 0x1c) = 0x105;
      plVar20[0x14] = 0;
      *(undefined4 *)((longlong)plVar20 + 0xac) = 8;
      plVar20[0x1b] = 0x200000000;
      plVar20[0x23] = 0x300000000;
      plVar20[0x24] = 0;
      plVar20[0x25] = 0;
      plVar20[0x26] = 0;
      *(undefined2 *)(plVar20 + 0x27) = 0xffff;
      *(undefined1 *)((longlong)plVar20 + 0x13a) = 0xff;
      plVar20[2] = (longlong)&PTR_FUN_14ae0ee40;
      plVar20[0x28] = 0;
      plVar20[0x29] = 0;
      plVar20[0x2a] = 0;
      plVar20[0x2b] = 0;
      plVar20[0x2c] = 0;
      plVar20[0x2d] = 0;
      plVar20[0x2e] = 0;
      plVar20[0x2f] = 0;
      plVar20[0x30] = 0;
      plVar20[0x31] = 0;
      plVar20[0x32] = 0;
      plVar20[0x33] = 0;
      plVar20[0x34] = 0;
      plVar20[0x35] = 0;
      *(undefined1 *)(plVar20 + 0x36) = 1;
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      iVar25 = (int)plVar18[1];
      *(uint *)(plVar18 + 1) = iVar25 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar25 + 1U) {
        FUN_141835bf0(plVar18,iVar25);
      }
      pLVar2 = (LARGE_INTEGER *)(plVar20 + 2);
      lVar28 = *plVar18;
      *(LARGE_INTEGER **)(lVar28 + (longlong)iVar25 * 0x10) = pLVar2;
      *(longlong **)(lVar28 + 8 + (longlong)iVar25 * 0x10) = plVar20;
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar20 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      if ((char)local_154 != '\0') {
        LOCK();
        cVar6 = *local_148;
        if (cVar6 == '\0') {
          *local_148 = '\x01';
        }
        UNLOCK();
        if (cVar6 != '\0') {
          FUN_1447d2058(local_148);
        }
        lVar28 = (ulonglong)(*(int *)(local_128 + 0x58) == 2) * 0x10;
        lVar17 = (longlong)*(int *)(local_f8 + 8 + lVar28);
        if (lVar17 == 0) {
          lVar28 = 0;
        }
        else {
          lVar32 = *(longlong *)(local_f8 + lVar28);
          lVar26 = 0;
          do {
            if (*(longlong *)(lVar32 + lVar26) == local_140) {
              plVar18 = *(longlong **)(lVar32 + 0x18 + lVar26);
              if (plVar18 == (longlong *)0x0) goto LAB_143ab0be0;
              iVar25 = (int)plVar18[1];
              goto LAB_143ab0bb8;
            }
            lVar26 = lVar26 + 0x20;
            lVar28 = 0;
          } while (lVar17 * 0x20 != lVar26);
        }
        goto LAB_143ab0560;
      }
      if (((char)local_158 == '\0') && (1 < *(int *)((undefined8 *)local_120[1] + 1))) {
        lVar28 = **(longlong **)local_120[1];
        goto LAB_143ab0573;
      }
      goto LAB_143ab065f;
    }
    goto LAB_143ab0978;
  }
LAB_143ab0d19:
  if (((undefined2 *)LVar36.QuadPart != (undefined2 *)0xffffffffffffffff) &&
     (QueryPerformanceCounter(&local_a8), lVar28 != 0)) {
    *(longlong *)(lVar28 + 0x48) =
         *(longlong *)(lVar28 + 0x48) + (local_a8.QuadPart - (longlong)LVar36);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    LOCK();
    iVar16 = (int)plVar18[1];
    bVar37 = iVar25 == iVar16;
    if (bVar37) {
      *(int *)(plVar18 + 1) = iVar25 + 1;
      iVar16 = iVar25;
    }
    iVar25 = iVar16;
    UNLOCK();
    if (bVar37) break;
LAB_143ab0bb8:
    if (iVar25 == 0) goto LAB_143ab0be0;
  }
  puVar4 = *(undefined8 **)(lVar32 + 0x10 + lVar26);
  if ((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 1) < 1)) {
    lVar28 = 0;
  }
  else {
    lVar28 = *(longlong *)*puVar4;
  }
  LOCK();
  plVar9 = plVar18 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar1 = (int *)((longlong)plVar18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
LAB_143ab0560:
  LOCK();
  cVar6 = *local_148;
  if (cVar6 == '\x01') {
    *local_148 = '\0';
  }
  UNLOCK();
  if (cVar6 != '\x01') {
    FUN_14008cdb0(local_148);
  }
LAB_143ab0573:
  if (lVar28 == 0) {
LAB_143ab065f:
    lVar28 = local_140;
    local_170 = (LARGE_INTEGER *)CONCAT71(local_170._1_7_,*(undefined1 *)(lVar29 + 0x40));
    local_178 = &local_78;
    local_188 = param_6;
    local_180 = pLVar34;
    FUN_143ab0db6(local_140,&local_a8,local_d8,local_128);
    *(undefined4 *)(plVar20 + 0x34) = local_88;
    *(undefined4 *)((longlong)plVar20 + 0x1a4) = uStack_84;
    *(undefined4 *)(plVar20 + 0x35) = uStack_80;
    *(undefined4 *)((longlong)plVar20 + 0x1ac) = uStack_7c;
    *(undefined4 *)(plVar20 + 0x32) = local_98;
    *(undefined4 *)((longlong)plVar20 + 0x194) = uStack_94;
    *(undefined4 *)(plVar20 + 0x33) = uStack_90;
    *(undefined4 *)((longlong)plVar20 + 0x19c) = uStack_8c;
    *(DWORD *)(plVar20 + 0x30) = local_a8.s.LowPart;
    *(LONG *)((longlong)plVar20 + 0x184) = local_a8.s.HighPart;
    *(int *)(plVar20 + 0x31) = (int)uStack_a0;
    *(undefined4 *)((longlong)plVar20 + 0x18c) = uStack_a0._4_4_;
    if ((0 < (int)DAT_14cb42c18) && (DAT_14cb42c18 < *(uint *)(plVar20 + 0x35))) {
      iVar25 = DAT_14cb42c30 + -1;
      bVar37 = 0 < DAT_14cb42c30;
      DAT_14cb42c30 = iVar25;
      if (bVar37) {
        local_b0 = param_6[0x46];
        FUN_1400021e4(&local_b0,&local_a8);
        LVar36.QuadPart = (LONGLONG)&DAT_149dfb77a;
        if ((int)uStack_a0 != 0) {
          LVar36 = local_a8;
        }
        local_c8 = param_6[0x47];
        FUN_1400021e4(&local_c8,&local_c0);
        puVar33 = &DAT_149dfb77a;
        if (local_b8 != 0) {
          puVar33 = local_c0;
        }
        FUN_145d03cb4(L"Max RibbonIndices Exceeded (%d) System=%s | Owner=%s\r\n",(int)plVar20[0x35]
                      ,puVar33,LVar36.QuadPart);
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((undefined2 *)local_a8.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (DAT_14cb42c48 == '\x01') {
        plVar18 = (longlong *)local_120[1];
        lVar28 = (longlong)(int)plVar18[1] * 0x10;
        plVar20 = *(longlong **)(*plVar18 + -8 + lVar28);
        puVar4 = (undefined8 *)(*plVar18 + -0x10 + lVar28);
        *puVar4 = 0;
        puVar4[1] = 0;
        iVar25 = (int)plVar18[1];
        lVar28 = *plVar18;
        lVar17 = (longlong)iVar25 * 0x10;
        plVar9 = *(longlong **)(lVar28 + -8 + lVar17);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        iVar16 = (int)plVar18[1] - iVar25;
        if (iVar16 != 0) {
          memmove((void *)(lVar17 + -0x10 + lVar28),(void *)(lVar28 + lVar17),(longlong)iVar16 << 4)
          ;
          iVar25 = (int)plVar18[1];
        }
        *(int *)(plVar18 + 1) = iVar25 + -1;
        uVar21 = FUN_143ab8720(plVar18);
        LVar36 = local_110;
        lVar17 = local_128;
        param_2 = local_138;
        uVar24 = local_150;
        local_118 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar20 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        goto LAB_143ab0974;
      }
    }
    local_188 = (LARGE_INTEGER *)(plVar20 + 0x30);
    local_168 = &local_78;
    local_180 = (LARGE_INTEGER *)lVar29;
    local_178 = pLVar2;
    local_170 = pLVar34;
    uVar21 = FUN_14498c500(lVar28,local_130,local_f0,param_5);
    local_118 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
  }
  else {
    lVar17 = *(longlong *)(lVar28 + 0x150);
    lVar32 = *(longlong *)(lVar28 + 0x158);
    if (lVar32 != 0) {
      LOCK();
      *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
      UNLOCK();
    }
    plVar18 = (longlong *)plVar20[0x2d];
    plVar20[0x2c] = lVar17;
    plVar20[0x2d] = lVar32;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar18 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    lVar17 = *(longlong *)(lVar28 + 0x160);
    lVar32 = *(longlong *)(lVar28 + 0x168);
    if (lVar32 != 0) {
      LOCK();
      *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
      UNLOCK();
    }
    plVar18 = (longlong *)plVar20[0x2f];
    plVar20[0x2e] = lVar17;
    plVar20[0x2f] = lVar32;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar18 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    uVar11 = *(undefined4 *)(lVar28 + 0x170);
    uVar12 = *(undefined4 *)(lVar28 + 0x174);
    uVar13 = *(undefined4 *)(lVar28 + 0x178);
    uVar14 = *(undefined4 *)(lVar28 + 0x17c);
    lVar17 = *(longlong *)(lVar28 + 0x180);
    lVar32 = *(longlong *)(lVar28 + 0x188);
    lVar26 = *(longlong *)(lVar28 + 0x198);
    plVar20[0x34] = *(longlong *)(lVar28 + 400);
    plVar20[0x35] = lVar26;
    plVar20[0x32] = lVar17;
    plVar20[0x33] = lVar32;
    *(undefined4 *)(plVar20 + 0x30) = uVar11;
    *(undefined4 *)((longlong)plVar20 + 0x184) = uVar12;
    *(undefined4 *)(plVar20 + 0x31) = uVar13;
    *(undefined4 *)((longlong)plVar20 + 0x18c) = uVar14;
    *(undefined1 *)(plVar20 + 0x36) = 0;
    lVar28 = local_140;
  }
  local_180 = (LARGE_INTEGER *)(plVar20 + 0x2b);
  plVar20 = plVar20 + 0x30;
  local_188 = param_6;
  FUN_1418343a2(lVar28,plVar20,pLVar34,local_d0);
  local_160 = *(undefined1 *)(lVar29 + 0x40);
  local_a8 = *(LARGE_INTEGER *)(local_120 + 1);
  plVar18 = (longlong *)local_120[2];
  local_188 = pLVar34;
  local_180 = param_6;
  local_170 = pLVar2;
  local_168 = pLVar31;
  uStack_a0 = plVar18;
  if (plVar18 == (longlong *)0x0) {
    local_178 = &local_a8;
    FUN_143ab1432(lVar28,local_130,plVar20,lVar29);
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    local_178 = &local_a8;
    FUN_143ab1432(lVar28,local_130,plVar20,lVar29);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar18 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  FUN_1436a14f8(param_5,uVar35 & 0xffffffff,pLVar31);
  lVar17 = local_128;
  param_2 = local_138;
  LVar36 = local_110;
  uVar24 = local_150;
LAB_143ab0974:
  iVar25 = (int)param_2[1];
LAB_143ab0978:
  lVar32 = local_f8;
  uVar35 = uVar35 + 1;
  if ((longlong)iVar25 <= (longlong)uVar35) goto LAB_143ab0c12;
  goto LAB_143ab02a9;
LAB_143ab0be0:
  lVar28 = 0;
  goto LAB_143ab0560;
LAB_143ab0c12:
  lVar28 = local_100;
  if (((local_118 & 1) != 0) &&
     ((*(char *)(lVar29 + 0x40) != '\0' || (*(char *)(lVar29 + 0x41) == '\x01')))) {
    lVar29 = local_120[1];
    plVar18 = (longlong *)local_120[2];
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    if (0 < *(int *)(lVar29 + 8)) {
      LOCK();
      cVar6 = *local_148;
      if (cVar6 == '\0') {
        *local_148 = '\x01';
      }
      UNLOCK();
      if (cVar6 != '\0') {
        FUN_1447d2058(local_148);
      }
      lVar26 = (ulonglong)(*(int *)(lVar17 + 0x58) == 2) * 0x10;
      iVar25 = *(int *)(lVar32 + 8 + lVar26);
      *(uint *)(lVar32 + 8 + lVar26) = iVar25 + 1U;
      if (*(uint *)(lVar32 + 0xc + lVar26) < iVar25 + 1U) {
        FUN_141835008((longlong *)(lVar32 + lVar26),iVar25);
      }
      lVar28 = local_100;
      lVar30 = (longlong)iVar25 * 0x20;
      lVar32 = *(longlong *)(lVar32 + lVar26);
      *(longlong *)(lVar32 + lVar30) = local_140;
      *(undefined4 *)(lVar32 + 8 + lVar30) = *(undefined4 *)(lVar17 + 0x120);
      *(undefined4 *)(lVar32 + 0xc + lVar30) = *(undefined4 *)(lVar17 + 0x5c);
      *(longlong *)(lVar32 + 0x10 + lVar30) = lVar29;
      *(longlong **)(lVar32 + 0x18 + lVar30) = plVar18;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
        UNLOCK();
      }
      LOCK();
      cVar6 = *local_148;
      if (cVar6 == '\x01') {
        *local_148 = '\0';
      }
      UNLOCK();
      if (cVar6 != '\x01') {
        FUN_14008cdb0(local_148);
      }
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar18 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  goto LAB_143ab0d19;
}



// FUNCTION 143ab0db6 FUN_143ab0db6 body=1660 status=ok
// SIG undefined FUN_143ab0db6(void)

float * FUN_143ab0db6(longlong param_1,float *param_2,longlong *param_3,longlong param_4,
                     longlong param_5,longlong param_6,double *param_7,char param_8)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  fVar8 = *(float *)(param_5 + 0x38c);
  fVar9 = fVar8;
  if (fVar8 < 0.0) {
    dVar12 = *(double *)(param_5 + 0x188) - *(double *)(param_5 + 0x1a0);
    dVar16 = *(double *)(param_5 + 0x180) - *(double *)(param_5 + 0x198);
    dVar1 = *param_7;
    if (dVar16 <= dVar1) {
      dVar16 = *(double *)(param_5 + 0x180) + *(double *)(param_5 + 0x198);
      dVar15 = 0.0;
      if (dVar16 < dVar1) goto LAB_143ab127c;
    }
    else {
LAB_143ab127c:
      dVar15 = (dVar1 - dVar16) * (dVar1 - dVar16);
    }
    dVar16 = *(double *)(param_5 + 400) - *(double *)(param_5 + 0x1a8);
    dVar1 = param_7[1];
    if ((dVar1 < dVar12) ||
       (dVar12 = *(double *)(param_5 + 0x188) + *(double *)(param_5 + 0x1a0), dVar12 < dVar1)) {
      dVar15 = dVar15 + (dVar1 - dVar12) * (dVar1 - dVar12);
    }
    dVar1 = param_7[2];
    if ((dVar1 < dVar16) ||
       (dVar16 = *(double *)(param_5 + 400) + *(double *)(param_5 + 0x1a8), dVar16 < dVar1)) {
      dVar15 = dVar15 + (dVar1 - dVar16) * (dVar1 - dVar16);
    }
    fVar9 = (float)dVar15;
  }
  *param_2 = fVar9;
  param_2[1] = *(float *)(param_6 + 0x23c8);
  if (param_8 == '\0') {
    fVar9 = *(float *)(*param_3 + 0x18);
    param_2[2] = fVar9;
    param_2[3] = 1.4013e-45;
    if ((*(byte *)(param_1 + 300) & 0x60) != 0) {
      fVar13 = 1.4013e-45;
      fVar4 = DAT_14c762980;
      if (*(char *)(param_1 + 0x268) == '\x01') {
        if ((int)*(float *)(param_1 + 0x26c) <= (int)DAT_14c762980) {
          fVar4 = *(float *)(param_1 + 0x26c);
        }
        fVar10 = 0.0;
        if (*(char *)(param_1 + 0x270) == '\0') {
          fVar10 = DAT_14c762984;
        }
        if (*(char *)(param_1 + 0x278) == '\0') {
          fVar10 = 0.0;
        }
        fVar6 = fVar4;
        if (*(char *)(param_1 + 0x270) == '\0') {
          pfVar3 = (float *)(param_1 + 0x274);
          goto LAB_143ab0e9e;
        }
      }
      else {
        fVar6 = fVar13;
        if (*(char *)(param_1 + 0x268) != '\x02') {
          pfVar3 = (float *)&DAT_14c76297c;
          fVar10 = DAT_14c762984;
LAB_143ab0e9e:
          fVar6 = fVar13;
          if (((DAT_14c762978 != 0) && (1 < (int)fVar4)) && (1e-08 < *(float *)(param_1 + 0x3c4))) {
            fVar6 = *pfVar3;
            if ((fVar6 != 0.0) || (NAN(fVar6))) {
              fVar13 = *(float *)(param_1 + 0x3c8);
              if (*(float *)(param_1 + 0x3c8) <= *(float *)(param_1 + 0x3c0)) {
                fVar13 = *(float *)(param_1 + 0x3c0);
              }
              fVar11 = 1e-08;
              if (1e-08 <= fVar6) {
                fVar11 = fVar6;
              }
              fVar6 = 1.0;
              if (1.0 <= fVar13 / fVar11) {
                fVar6 = fVar13 / fVar11;
              }
            }
            else {
              fVar6 = (float)(int)fVar4;
            }
            if (fVar8 < 0.0) {
              dVar12 = *(double *)(param_5 + 0x188) - *(double *)(param_5 + 0x1a0);
              dVar16 = *(double *)(param_5 + 0x180) - *(double *)(param_5 + 0x198);
              dVar1 = *param_7;
              if (dVar16 <= dVar1) {
                dVar16 = *(double *)(param_5 + 0x180) + *(double *)(param_5 + 0x198);
                dVar15 = 0.0;
                if (dVar16 < dVar1) goto LAB_143ab1339;
              }
              else {
LAB_143ab1339:
                dVar15 = (dVar1 - dVar16) * (dVar1 - dVar16);
              }
              dVar16 = *(double *)(param_5 + 400) - *(double *)(param_5 + 0x1a8);
              dVar1 = param_7[1];
              if ((dVar1 < dVar12) ||
                 (dVar12 = *(double *)(param_5 + 0x188) + *(double *)(param_5 + 0x1a0),
                 dVar12 < dVar1)) {
                dVar15 = dVar15 + (dVar1 - dVar12) * (dVar1 - dVar12);
              }
              dVar1 = param_7[2];
              if ((dVar1 < dVar16) ||
                 (dVar16 = *(double *)(param_5 + 400) + *(double *)(param_5 + 0x1a8), dVar16 < dVar1
                 )) {
                dVar15 = dVar15 + (dVar1 - dVar16) * (dVar1 - dVar16);
              }
              fVar8 = (float)dVar15;
            }
            if (fVar8 < 0.0) {
              fVar8 = sqrtf(fVar8);
            }
            else {
              fVar8 = SQRT(fVar8);
            }
            fVar13 = (fVar10 * fVar8) / *(float *)(param_6 + 0x23c8);
            fVar8 = DAT_14c762988;
            if (DAT_14c762988 <= fVar13) {
              fVar8 = fVar13;
            }
            fVar11 = *(float *)(param_1 + 0x3c4) / (*(float *)(param_1 + 0x3c4) + fVar8);
            fVar10 = ABS(fVar11);
            fVar14 = 1.0 - fVar10;
            fVar13 = 0.0;
            if (0.0 <= fVar14) {
              fVar13 = fVar14;
            }
            fVar13 = SQRT(fVar13) * (fVar10 * -0.156583 + 1.5707964);
            uVar7 = -(uint)(0.0 <= fVar11);
            fVar13 = (float)(~uVar7 & (uint)(3.1415927 - fVar13) | (uint)fVar13 & uVar7);
            fVar10 = 0.002;
            if (0.002 <= fVar13) {
              fVar10 = fVar13;
            }
            fVar10 = *(float *)(param_1 + 0x3c0) / fVar10;
            fVar13 = fVar10;
            if ((0.0 < *(float *)(param_1 + 0x3c8)) &&
               (fVar11 = *(float *)(param_1 + 0x3cc), 0.0 < fVar11)) {
              fVar11 = fVar11 / (fVar8 + fVar11);
              fVar13 = ABS(fVar11);
              fVar14 = 1.0 - fVar13;
              fVar8 = 0.0;
              if (0.0 <= fVar14) {
                fVar8 = fVar14;
              }
              fVar8 = SQRT(fVar8) * (fVar13 * -0.156583 + 1.5707964);
              uVar7 = -(uint)(0.0 <= fVar11);
              fVar8 = (float)(~uVar7 & (uint)(3.1415927 - fVar8) | (uint)fVar8 & uVar7);
              fVar13 = 0.002;
              if (0.002 <= fVar8) {
                fVar13 = fVar8;
              }
              fVar13 = *(float *)(param_1 + 0x3c8) / fVar13;
              if (fVar13 <= fVar10) {
                fVar13 = fVar10;
              }
            }
            fVar8 = (float)((int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
            fVar6 = (float)((int)ROUND(fVar13 + fVar13 + 0.5) >> 1);
            if ((int)fVar4 <= (int)fVar6) {
              fVar6 = fVar4;
            }
            if ((int)fVar6 < (int)fVar8) {
              fVar6 = fVar8;
            }
          }
        }
      }
LAB_143ab1021:
      param_2[3] = fVar6;
      goto LAB_143ab1025;
    }
  }
  else {
    fVar9 = *(float *)(param_4 + 0x120);
    param_2[2] = fVar9;
    param_2[3] = 1.4013e-45;
    if ((*(byte *)(param_1 + 300) & 0x60) != 0) {
      if (*(char *)(param_1 + 0x268) == '\x01') {
        pfVar3 = &DAT_14c762980;
        if (*(char *)(param_1 + 0x270) != '\0') {
          pfVar3 = (float *)(param_1 + 0x26c);
        }
      }
      else {
        pfVar3 = &DAT_14c762980;
      }
      fVar6 = *pfVar3;
      goto LAB_143ab1021;
    }
  }
  fVar6 = 1.4013e-45;
LAB_143ab1025:
  fVar8 = logf((float)(uint)fVar9);
  iVar5 = (int)ROUND(-0.5 - (fVar8 / 0.6931472 + fVar8 / 0.6931472)) >> 1;
  fVar8 = logf((float)(uint)fVar6);
  iVar2 = (int)ROUND(-0.5 - (fVar8 / 0.6931472 + fVar8 / 0.6931472)) >> 1;
  fVar8 = *(float *)(param_1 + 0x25c);
  param_2[4] = (float)((int)fVar8 - iVar2);
  param_2[6] = fVar8;
  param_2[5] = (float)(0xffffffffL >> ((char)iVar5 + 0x20U & 0x3f));
  param_2[7] = (float)(0xffffffffL >> ((char)iVar2 + 0x20U & 0x3f));
  param_2[8] = *(float *)(param_1 + 0x260);
  param_2[9] = (float)((int)fVar8 - (iVar2 + iVar5));
  param_2[10] = (float)((int)fVar6 * (int)fVar9 * *(int *)(param_1 + 0x254) * 3);
  param_2[0xb] = 0.0;
  return param_2;
}



// FUNCTION 143ab1432 FUN_143ab1432 body=1696 status=ok
// SIG undefined FUN_143ab1432(void)

void FUN_143ab1432(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined8 *param_9,byte param_10)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8 [6];
  undefined1 local_b8;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = *(undefined8 *)(param_4 + 0x30);
  local_90 = *(undefined8 *)(param_1 + 0x2c0);
  local_88 = *(undefined8 *)(param_1 + 0x2f0);
  local_80 = *(longlong *)(param_1 + 800);
  if (*(longlong *)(param_1 + 800) == 0) {
    local_80 = DAT_14cb428f0;
  }
  local_78 = *(undefined8 *)(param_1 + 0x350);
  local_60 = *(undefined8 *)(param_1 + 0x240);
  lVar4 = *param_7;
  local_70 = *(undefined8 *)(lVar4 + 0x68);
  local_68 = *(undefined8 *)(lVar4 + 0x70);
  local_a8 = *(int *)(lVar4 + 0x80);
  if (*(int *)(lVar4 + 0x80) < *(int *)(lVar4 + 0x84)) {
    local_a8 = *(int *)(lVar4 + 0x84);
  }
  local_a4 = (uint)*(byte *)(param_1 + 0x27c);
  local_a0 = (uint)*(byte *)(param_1 + 0x250);
  local_9c = *(uint *)(param_1 + 300) >> 7 & 1;
  local_98 = 1;
  if (local_a0 == 0) {
    local_98 = (uint)*(byte *)(param_1 + 0x289);
  }
  local_58 = DAT_14cb428f0;
  if (param_10 != 0) {
    local_58 = *(longlong *)(*(longlong *)(param_8 + 0x160) + 0x10);
  }
  local_50 = param_10 - 1;
  lVar4 = FUN_1448a0fee();
  local_100 = 1;
  local_108 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,local_e8,&local_a8,*(undefined8 *)(lVar4 + 0x48));
  if (local_e8[0] != 0) {
    LOCK();
    *(int *)(local_e8[0] + 8) = *(int *)(local_e8[0] + 8) + 1;
    UNLOCK();
    if (local_e8[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_e8[0] + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_e8[0] + 8);
        LOCK();
        uVar8 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(local_e8[0] + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_e8[0];
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar16 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar16) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar16 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar16) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_8 + 0x130);
  *(longlong *)(param_8 + 0x130) = local_e8[0];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar8 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar8 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar16 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar16) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar16 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar16) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  FUN_14006bf18(param_8);
  lVar4 = *(longlong *)(param_8 + 0x148);
  if (lVar4 == 0) {
    lVar13 = *(longlong *)(param_8 + 0x138);
    if (lVar13 == 0) goto LAB_143ab17f4;
    *(undefined8 *)(param_8 + 0x138) = 0;
LAB_143ab171b:
    LOCK();
    puVar1 = (uint *)(lVar13 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar13 + 8);
      LOCK();
      uVar8 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar8 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar13 + 0xd);
        local_f8 = param_3;
        plVar5 = (longlong *)FUN_14001cc68(0x10);
        plVar5[1] = lVar13;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        param_3 = local_f8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar16 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar16) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar16 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar16) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
    if (lVar4 == 0) goto LAB_143ab17f4;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar13 = *(longlong *)(param_8 + 0x138);
    if (lVar13 != lVar4) {
      *(longlong *)(param_8 + 0x138) = lVar4;
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      if (lVar13 != 0) goto LAB_143ab171b;
    }
  }
  LOCK();
  puVar1 = (uint *)(lVar4 + 8);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar8 & 0x3fffffff) == 1) {
    puVar1 = (uint *)(lVar4 + 8);
    LOCK();
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar8 >> 0x1e & 1) == 0) {
      bVar10 = *(byte *)(lVar4 + 0xd);
      plVar5 = (longlong *)FUN_14001cc68(0x10);
      plVar5[1] = lVar4;
      plVar7 = DAT_14ca843c0;
      plVar6 = DAT_14ca843c8;
      if ((bVar10 & 2) == 0) {
        do {
          *plVar5 = (longlong)plVar7;
          LOCK();
          bVar16 = plVar7 != DAT_14ca843c0;
          plVar6 = plVar5;
          if (bVar16) {
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar6;
          UNLOCK();
        } while (bVar16);
      }
      else {
        do {
          *plVar5 = (longlong)plVar6;
          LOCK();
          bVar16 = plVar6 != DAT_14ca843c8;
          plVar7 = plVar5;
          if (bVar16) {
            plVar6 = DAT_14ca843c8;
            plVar7 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar7;
          UNLOCK();
        } while (bVar16);
      }
    }
  }
LAB_143ab17f4:
  param_9[0x17] = param_8;
  uVar11 = 0;
  uVar8 = 0;
  if ((*(byte *)(param_6 + 0x70) & 1) != 0) {
    uVar8 = (uint)*(byte *)(param_1 + 0x288) << 8;
  }
  uVar8 = *(uint *)((longlong)param_9 + 0xe4) & 0xfffffeff | uVar8;
  *(uint *)((longlong)param_9 + 0xe4) = uVar8;
  if ((*(byte *)(param_6 + 0x70) & 1) != 0) {
    uVar11 = *(int *)(param_1 + 0x288) << 0x1e;
  }
  *(uint *)((longlong)param_9 + 0xe4) = uVar8 & 0xbffff7ff | uVar11;
  uVar12 = (*(byte *)(param_6 + 0x6b) & 1) << 6;
  *(uint *)((longlong)param_9 + 0xe4) = uVar8 & 0xbffff7bf | uVar11 | uVar12;
  uVar8 = uVar8 & 0xbffe373f | uVar11 | uVar12 | (uint)*(byte *)(param_1 + 0x264) << 7;
  *(uint *)((longlong)param_9 + 0xe4) = uVar8;
  if (((*(byte *)(param_6 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_6 + 0xf0) != 0)) {
    uVar14 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_6 + 0xe8) + uVar14) == *(longlong *)(param_5 + 0x4c0)) {
        if ((int)(~uVar14 >> 3) != 0) {
          bVar10 = *(byte *)(param_6 + 0x6d) >> 3;
          goto LAB_143ab18d9;
        }
        break;
      }
      uVar14 = uVar14 + 8;
    } while ((longlong)*(int *)(param_6 + 0xf0) * 8 != uVar14);
  }
  bVar10 = *(byte *)(param_6 + 0x6d);
LAB_143ab18d9:
  uVar8 = (uVar8 & 0xffe037ff) + (bVar10 & 7) * 0x20000 + 0x100000;
  *(uint *)((longlong)param_9 + 0xe4) = uVar8;
  uVar11 = (uint)((*(byte *)(param_6 + 0x6c) & 6) != 0) << 0x15;
  *(uint *)((longlong)param_9 + 0xe4) = uVar8 & 0xffde37ff | uVar11;
  *(undefined4 *)(param_9 + 0x1b) = 0;
  param_9[0x18] = local_f0;
  *(uint *)((longlong)param_9 + 0xe4) =
       uVar8 & 0xffde17ff | uVar11 | (*(byte *)(param_6 + 0x77) & 0x40) << 7;
  puVar15 = (undefined8 *)param_9[0x15];
  if ((undefined8 *)param_9[0x15] == (undefined8 *)0x0) {
    puVar15 = param_9;
  }
  lVar4 = *(longlong *)(param_8 + 0x150);
  puVar15[3] = lVar4;
  *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)(puVar15 + 0xc) = 1;
  puVar15[0xd] = 0;
  if (param_10 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x5c) = *(undefined4 *)(param_3 + 0x2c);
    iVar2 = *(int *)(*(longlong *)(param_4 + 0x48) + 0x18);
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    *(int *)((longlong)puVar15 + 0x6c) = iVar3;
  }
  else {
    *(undefined4 *)((longlong)puVar15 + 0x5c) = 0;
    puVar15[9] = **(undefined8 **)(param_8 + 0x160);
    uVar9 = 0xc;
    if (*(char *)(param_5 + 0x23f2) == '\x01') {
      uVar9 = 0xc;
      if (*(int *)(param_5 + 0x1dd0) == 1) {
        uVar9 = 0x20;
      }
    }
    *(undefined4 *)(puVar15 + 10) = uVar9;
  }
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_b8 = 0;
  lVar4 = FUN_1447fbca2(param_6,param_2,0);
  *puVar15 = *(undefined8 *)(lVar4 + 0x18);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ab1ad4 FUN_143ab1ad4 body=2320 status=ok
// SIG undefined FUN_143ab1ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143ab1ad4(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  int iVar17;
  int iVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  int iVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined4 local_138;
  uint local_130 [2];
  byte local_128;
  byte local_127;
  uint local_124;
  longlong local_120;
  byte local_118;
  uint local_114;
  longlong local_110;
  undefined1 local_108;
  uint local_104;
  longlong local_100;
  undefined1 local_f8;
  uint local_f4;
  longlong lStack_f0;
  undefined8 uStack_e8;
  char local_e0;
  byte local_df;
  uint local_dc;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_cc [12];
  undefined1 local_c0;
  byte local_bf;
  uint local_bc;
  longlong local_b8;
  undefined1 local_b0;
  byte local_af;
  uint local_ac;
  longlong local_a8;
  undefined1 local_a0;
  byte local_9f;
  uint local_9c;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
  if (param_3 != 0) {
    cVar8 = FUN_144a47c72(param_1,param_3,param_4);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
    if (cVar8 != '\0') {
      if (*(char *)(param_3 + 0x5e) == '\0') {
        iVar4 = *(int *)(*(longlong *)(param_4 + 8) + 0x4c);
        if ((((iVar4 != 0) &&
             (uVar3 = *(uint *)(*(longlong *)(param_4 + 8) + 0x48), -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           (((plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar4)) &&
            (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar6 = *plVar11, lVar6 != 0)))))) {
          lVar14 = FUN_14143f1a6();
          lVar6 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30)) goto LAB_143ab1b59;
        }
      }
      if (((*(char *)((longlong)param_1 + 0xf4) != '\x01') ||
          (uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8), DAT_14c762994 != 0)) &&
         ((lVar6 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x78),
          *(char *)((longlong)param_1 + 0xf4) == '\x01' ||
          ((uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8), lVar6 != 0 &&
           (uStack_e8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8),
           1 < *(uint *)(lVar6 + 0x120))))))) {
        puVar9 = (undefined8 *)FUN_14001cc68(0x58);
        *puVar9 = &PTR_FUN_14ae09a28;
        puVar9[1] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[3] = *(undefined8 *)(*(longlong *)(param_4 + 8) + 0x100);
        if (*(char *)(param_4 + 0xd1) == '\0') {
          if (lVar6 != 0) {
            puVar9[4] = lVar6;
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
        }
        else {
          puVar9[5] = *(undefined8 *)(param_4 + 0x20);
        }
        *puVar9 = &PTR_FUN_14ae0e640;
        puVar9[7] = 0;
        *(undefined2 *)(puVar9 + 8) = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        uVar10 = (**(code **)(**(longlong **)param_1[0x20] + 0x2f0))();
        puVar9[6] = uVar10;
        lVar6 = param_1[0x23];
        puVar9[1] = param_1[0x22];
        puVar9[2] = lVar6;
        if (puVar9 != (undefined8 *)0x0) {
          cVar8 = *(char *)((longlong)param_1 + 0xf4);
          bVar12 = 0;
          if ((((DAT_14c7627f8 != 0) && ((DAT_14ca84d96 & 1) != 0)) && (DAT_14cb42ba0 != 2)) &&
             (bVar12 = 0, DAT_14c762994 != 0)) {
            bVar12 = DAT_14cb42ba0 == 1 | (*(byte *)(param_3 + 0x13a) & 8) >> 3;
          }
          *(byte *)(puVar9 + 8) = cVar8 == '\x01' | bVar12;
          *(bool *)((longlong)puVar9 + 0x41) = cVar8 == '\x01';
          *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(*(longlong *)(param_4 + 0x10) + 0xac);
          *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
          lVar6 = *(longlong *)(param_4 + 0x28);
          if ((lVar6 != 0) && (lVar14 = (longlong)*(int *)(lVar6 + 0x50), lVar14 != 0)) {
            if (*(char *)(lVar6 + 0x40) == '\0') {
              lVar13 = *(longlong *)(lVar6 + 0x48);
LAB_143ab1d07:
              if (lVar13 != 0) {
                FUN_144a44170();
                *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
              }
            }
            else {
              lVar13 = *(longlong *)(lVar6 + 0x48);
              if (((*(int *)(param_4 + 0x34) == 0 && *(int *)(param_4 + 0x30) == 0) &&
                  *(int *)(param_4 + 0x38) == 0) && *(int *)(param_4 + 0x3c) == 0) {
                lVar14 = lVar14 * 0x368;
                do {
                  if (((*(int *)(lVar13 + 8) == *(int *)(lVar6 + 0x30)) &&
                      (*(int *)(lVar13 + 0xc) == *(int *)(lVar6 + 0x34))) &&
                     ((*(int *)(lVar13 + 0x10) == *(int *)(lVar6 + 0x38) &&
                      (*(int *)(lVar13 + 0x14) == *(int *)(lVar6 + 0x3c))))) goto LAB_143ab1d07;
                  lVar13 = lVar13 + 0x368;
                  lVar14 = lVar14 + -0x368;
                } while (lVar14 != 0);
              }
              else {
                lVar14 = lVar14 * 0x368;
                do {
                  if ((((*(int *)(lVar13 + 8) == *(int *)(param_4 + 0x30)) &&
                       (*(int *)(lVar13 + 0xc) == *(int *)(param_4 + 0x34))) &&
                      (*(int *)(lVar13 + 0x10) == *(int *)(param_4 + 0x38))) &&
                     (*(int *)(lVar13 + 0x14) == *(int *)(param_4 + 0x3c))) goto LAB_143ab1d07;
                  lVar13 = lVar13 + 0x368;
                  lVar14 = lVar14 + -0x368;
                } while (lVar14 != 0);
              }
            }
          }
          if (cVar8 != '\x01' && bVar12 == 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x78);
            local_130[0] = *(uint *)(lVar6 + 0x120);
            local_127 = *(byte *)(param_3 + 0x6cc);
            local_124 = 0;
            local_120 = 0;
            local_128 = *(int *)(param_3 + 0x6d0) != -1 && lVar6 != 0;
            if ((bool)local_128) {
              local_120 = (ulonglong)
                          (uint)(*(int *)(param_3 + 0x6d0) *
                                *(int *)(lVar6 + 0x128 + (ulonglong)(local_127 ^ 1) * 8)) +
                          *(longlong *)(lVar6 + 0x18 + (ulonglong)(local_127 ^ 1) * 0x20);
              local_124 = local_130[0];
            }
            local_114 = 0;
            local_110 = 0;
            local_118 = *(int *)(param_3 + 0x6d4) != -1 && lVar6 != 0;
            if ((bool)local_118) {
              local_110 = (ulonglong)(uint)(*(int *)(param_3 + 0x6d4) * *(int *)(lVar6 + 300)) +
                          *(longlong *)(lVar6 + 0x28);
              local_114 = local_130[0];
            }
            local_104 = 0;
            local_100 = 0;
            local_108 = *(int *)(param_3 + 0x724) != -1 && lVar6 != 0;
            if ((bool)local_108) {
              local_100 = (ulonglong)(uint)(*(int *)(param_3 + 0x724) * *(int *)(lVar6 + 300)) +
                          *(longlong *)(lVar6 + 0x28);
              local_104 = local_130[0];
            }
            iVar4 = *(int *)(param_3 + 0x730);
            local_f4 = 0;
            lStack_f0 = 0;
            uStack_e8 = 0;
            local_f8 = iVar4 != -1 && lVar6 != 0;
            if (iVar4 != -1 && lVar6 != 0) {
              lStack_f0 = (ulonglong)(uint)(*(int *)(lVar6 + 300) * iVar4) +
                          *(longlong *)(lVar6 + 0x28);
              uStack_e8 = (ulonglong)(uint)((iVar4 + 1) * *(int *)(lVar6 + 300)) +
                          *(longlong *)(lVar6 + 0x28);
              local_f4 = local_130[0];
            }
            iVar4 = *(int *)(param_3 + 0x6dc);
            local_df = *(byte *)(param_3 + 0x6d8);
            local_e0 = '\0';
            local_dc = 0;
            lStack_d8 = 0;
            uStack_d0 = 0;
            auStack_cc = SUB1612((undefined1  [16])0x0,4);
            if ((iVar4 != -1) && (lVar6 != 0)) {
              local_e0 = '\x01';
              uVar5 = *(undefined4 *)(lVar6 + 0x128 + (ulonglong)(local_df ^ 1) * 8);
              lVar14 = *(longlong *)(lVar6 + 0x18 + (ulonglong)(local_df ^ 1) * 0x20);
              auVar15._4_4_ = uVar5;
              auVar15._0_4_ = uVar5;
              auVar15._8_8_ = 0;
              auVar16 = pmovsxbd(in_XMM2,0x100);
              auVar20 = pmovsxbq(in_XMM3,0x100);
              lVar13 = 0;
              auVar22 = pmovsxbq(unaff_XMM6,0x202);
              auVar23 = pmovsxbd(unaff_XMM7,0x2020202);
              do {
                auVar24._0_4_ = iVar4 + auVar16._0_4_;
                iVar17 = auVar16._4_4_;
                auVar24._4_4_ = iVar4 + iVar17;
                iVar18 = auVar16._8_4_;
                auVar24._8_4_ = iVar18;
                iVar19 = auVar16._12_4_;
                auVar24._12_4_ = iVar19;
                auVar24 = pmulld(auVar24,auVar15);
                auVar24 = pmovzxdq(auVar24,auVar24);
                if (SUB168(auVar20 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
                  (&lStack_d8)[lVar13] = auVar24._0_8_ + lVar14;
                }
                if (SUB168(auVar20 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
                  *(longlong *)(auStack_cc + lVar13 * 8 + -4) = auVar24._8_8_ + lVar14;
                }
                lVar13 = lVar13 + 2;
                lVar21 = auVar20._8_8_;
                auVar20._0_8_ = auVar20._0_8_ + auVar22._0_8_;
                auVar20._8_8_ = lVar21 + auVar22._8_8_;
                auVar16._0_4_ = auVar16._0_4_ + auVar23._0_4_;
                auVar16._4_4_ = iVar17 + auVar23._4_4_;
                auVar16._8_4_ = iVar18 + auVar23._8_4_;
                auVar16._12_4_ = iVar19 + auVar23._12_4_;
                local_dc = local_130[0];
              } while (lVar13 != 4);
            }
            local_bf = *(byte *)(param_3 + 0x6e0);
            local_c0 = 0;
            local_bc = 0;
            local_b8 = 0;
            if ((*(int *)(param_3 + 0x6e4) != -1) && (lVar6 != 0)) {
              local_c0 = 1;
              local_b8 = (ulonglong)
                         (uint)(*(int *)(param_3 + 0x6e4) *
                               *(int *)(lVar6 + 0x128 + (ulonglong)(local_bf ^ 1) * 8)) +
                         *(longlong *)(lVar6 + 0x18 + (ulonglong)(local_bf ^ 1) * 0x20);
              local_bc = local_130[0];
            }
            local_af = *(byte *)(param_3 + 0x6e8);
            local_b0 = 0;
            local_ac = 0;
            local_a8 = 0;
            if ((*(int *)(param_3 + 0x6ec) != -1) && (lVar6 != 0)) {
              local_b0 = 1;
              local_a8 = (ulonglong)
                         (uint)(*(int *)(param_3 + 0x6ec) *
                               *(int *)(lVar6 + 0x128 + (ulonglong)(local_af ^ 1) * 8)) +
                         *(longlong *)(lVar6 + 0x18 + (ulonglong)(local_af ^ 1) * 0x20);
              local_ac = local_130[0];
            }
            local_9f = *(byte *)(param_3 + 0x6f0);
            local_9c = 0;
            local_98 = 0;
            local_a0 = *(int *)(param_3 + 0x6f4) != -1 && lVar6 != 0;
            if ((bool)local_a0) {
              local_98 = (ulonglong)
                         (uint)(*(int *)(param_3 + 0x6f4) *
                               *(int *)(lVar6 + 0x128 + (ulonglong)(local_9f ^ 1) * 8)) +
                         *(longlong *)(lVar6 + 0x18 + (ulonglong)(local_9f ^ 1) * 0x20);
              local_9c = local_130[0];
            }
            plVar11 = (longlong *)FUN_14001cc68(0xd0);
            plVar11[1] = (longlong)&DAT_100000001;
            *plVar11 = (longlong)&PTR_FUN_14ae0eea0;
            memset(plVar11 + 2,0,0xc0);
            *(undefined4 *)((longlong)plVar11 + 0xb4) = 1;
            *(undefined1 (*) [16])(plVar11 + 0x17) = (undefined1  [16])0x0;
            *(undefined4 *)(plVar11 + 0x19) = 0;
            if (plVar11 == (longlong *)0x0) {
              puVar9[9] = 0x10;
            }
            else {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              plVar7 = (longlong *)puVar9[10];
              puVar9[9] = plVar11 + 2;
              if (plVar11 == plVar7) {
                LOCK();
                plVar7 = plVar11 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar4 = *piVar2;
                  UNLOCK();
                  plVar7 = plVar11;
joined_r0x000143ab22bd:
                  if (iVar4 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              else {
                puVar9[10] = plVar11;
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar7 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar7 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    iVar4 = *piVar2;
                    UNLOCK();
                    goto joined_r0x000143ab22bd;
                  }
                }
              }
              LOCK();
              plVar7 = plVar11 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            if (((local_e0 != '\x01') || (((local_118 | local_128) & 1) == 0)) || (local_130[0] < 2)
               ) {
              (**(code **)*puVar9)(puVar9,1);
              goto LAB_143ab1b59;
            }
            FUN_143ab23e6(param_1,local_130,puVar9[9]);
          }
          if (((0 < *(int *)(param_3 + 0x5a0)) || (0 < *(int *)(param_3 + 0x5b0))) ||
             ((0 < *(int *)(param_3 + 0x5c0) || (0 < *(int *)(param_3 + 0x5d0))))) {
            local_140 = param_1[0x20];
            local_138 = (undefined4)param_1[0x21];
            (**(code **)(*param_1 + 0x80))(param_1,param_3 + 0x598,param_4);
          }
          goto LAB_143ab1b5c;
        }
      }
    }
  }
LAB_143ab1b59:
  puVar9 = (undefined8 *)0x0;
LAB_143ab1b5c:
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab23e6 FUN_143ab23e6 body=16149 status=ok
// SIG undefined FUN_143ab23e6(void)

void FUN_143ab23e6(longlong param_1,uint *param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  int *piVar6;
  DWORD DVar7;
  uint uVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  LPVOID lpTlsValue;
  double *pdVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  double *pdVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  undefined4 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_278 [32];
  longlong *local_258;
  uint local_250;
  int local_248;
  float local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  int *local_228;
  longlong local_218;
  longlong *local_210;
  undefined8 local_208;
  ulonglong local_200;
  float local_1f4;
  longlong *local_1f0;
  ulonglong local_1e8;
  double *local_1e0;
  ulonglong local_1d8;
  float local_1d0;
  float local_1cc;
  longlong local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  uint *local_1b0;
  longlong local_1a8;
  float local_1a0;
  float local_19c;
  undefined8 *local_198;
  undefined8 local_190;
  longlong local_188;
  char local_180;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  int *local_148;
  undefined8 uStack_140;
  uint local_138 [4];
  uint *local_128;
  uint local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dwTlsIndex = DAT_14c7585d0;
  local_218 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar9 = 0xffffffff;
    LOCK();
    bVar35 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar35) {
      DVar9 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    if (bVar35) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar9;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_148);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_198 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_190 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_188 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_180 = '\0';
  local_178 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_198;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  uVar8 = *(uint *)(local_218 + 300);
  if ((uVar8 & 3) != 0) {
    if ((uVar8 & 1) == 0) {
      FUN_1481d50da(local_218,param_2,param_2 + 10,param_3);
      lVar25 = local_218;
      goto LAB_143ab6075;
    }
    uVar19 = 0;
    if ((uVar8 & 0x40) == 0) {
      local_128 = (uint *)0x0;
      local_120 = 0;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = (undefined1 *)0x0;
      local_100 = 0;
      if (*param_2 == 0) {
        iVar28 = (int)param_3[0x14];
        uVar8 = 0;
      }
      else {
        do {
          iVar28 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar19 * 4);
          uVar8 = *(uint *)(*(longlong *)(param_2 + 0x12) + (longlong)(int)uVar19 * 4);
          local_160 = (int *)CONCAT44(uVar8,iVar28);
          uVar22 = uVar8 >> 0xd ^ iVar28 - uVar8;
          uVar12 = uVar22 << 8 ^ (-0x61c88647 - uVar8) - uVar22;
          uVar24 = uVar12 >> 0xd ^ (uVar8 - uVar22) - uVar12;
          uVar22 = uVar24 >> 0xc ^ (uVar22 - uVar12) - uVar24;
          uVar27 = uVar22 << 0x10 ^ (uVar12 - uVar24) - uVar22;
          uVar12 = uVar27 >> 5 ^ (uVar24 - uVar22) - uVar27;
          uVar24 = uVar12 >> 3 ^ (uVar22 - uVar27) - uVar12;
          uVar22 = uVar24 << 10 ^ (uVar27 - uVar12) - uVar24;
          uVar12 = uVar22 >> 0xf ^ uVar12 - (uVar24 + uVar22);
          if ((int)uStack_140 != local_114) {
            puVar16 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar16 = local_110;
            }
            iVar13 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & uVar12) * 4);
            while (iVar13 != -1) {
              lVar25 = (longlong)iVar13;
              piVar6 = local_148 + lVar25 * 8;
              if ((local_148[lVar25 * 8] == iVar28) && (local_148[lVar25 * 8 + 1] == uVar8)) {
                if (piVar6 != (int *)0x0) goto LAB_143ab42e9;
                break;
              }
              iVar13 = piVar6[6];
            }
          }
          local_170 = &local_160;
          FUN_14054dd5a(&local_148,&local_14c,uVar12,&local_170);
          piVar6 = local_148 + (longlong)local_14c * 8;
LAB_143ab42e9:
          iVar28 = piVar6[4];
          uVar8 = iVar28 + 1;
          piVar6[4] = uVar8;
          if ((uint)piVar6[5] < uVar8) {
            FUN_141838130(piVar6 + 2);
          }
          *(uint *)(*(longlong *)(piVar6 + 2) + (longlong)iVar28 * 4) = uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *param_2);
        uVar8 = (int)uStack_140 - local_114;
        iVar28 = (int)param_3[0x14];
        *(uint *)(param_3 + 0x14) = iVar28 + uVar8;
        if ((uint)(*(int *)((longlong)param_3 + 0xa4) - iVar28) < uVar8) {
          FUN_1418382ec(param_3 + 8);
        }
      }
      plVar23 = param_3 + 8;
      if ((longlong *)param_3[0x13] != (longlong *)0x0) {
        plVar23 = (longlong *)param_3[0x13];
      }
      memset(plVar23 + (longlong)iVar28 * 0xb,0,(longlong)(int)uVar8 * 0x58);
      uVar19 = *param_2;
      iVar28 = uVar8 + (int)param_3[3] + uVar19;
      if (iVar28 < 0) goto LAB_143ab591b;
      if (*(int *)((longlong)param_3 + 0x1c) < iVar28) {
        FUN_14480809c(param_3 + 2,iVar28);
        uVar19 = *param_2;
      }
      iVar13 = uVar19 + uVar8;
      iVar28 = (int)param_3[5] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x2c) < iVar28) {
        FUN_14499148c(param_3 + 4,iVar28);
        iVar13 = *param_2 + uVar8;
      }
      iVar28 = (int)param_3[7] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x3c) < iVar28) {
        FUN_14480809c(param_3 + 6,iVar28);
        iVar13 = uVar8 + *param_2;
      }
      iVar13 = iVar13 + (int)param_3[1];
      if (iVar13 < 0) goto LAB_143ab5116;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
        FUN_14480809c(param_3);
      }
      local_160 = &local_14c;
      local_170 = &local_160;
      FUN_143ab881e(&local_148);
      FUN_1449dcec4(&local_148);
      if (local_120 == 0) {
        uVar21 = 1;
        uVar33 = 0;
        uVar8 = 0;
        iVar28 = 0;
      }
      else {
        puVar11 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar11 = local_138;
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar28 = local_120 + 0x1e;
          if (-1 < (int)(local_120 - 1)) {
            iVar28 = local_120 - 1;
          }
          uVar33 = 0;
          uVar21 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar21 = uVar33;
          }
          iVar28 = 0;
          do {
            if (uVar21 == uVar33) goto LAB_143ab6047;
            iVar28 = iVar28 + 0x20;
            uVar8 = puVar11[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar33 = 0;
          iVar28 = 0;
        }
        uVar21 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar21 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)local_120 <= (int)uVar8) {
          uVar8 = local_120;
        }
      }
      if (uVar8 != local_120) {
        uVar19 = 0xffffffff;
        iVar13 = 0;
        local_208 = (ulonglong)local_120;
        do {
          piVar6 = local_148;
          plVar23 = (longlong *)(local_148 + (longlong)(int)uVar8 * 8 + 2);
          FUN_144b37034(param_2,plVar23);
          local_170 = (undefined8 *)*plVar23;
          local_168 = (float)piVar6[(longlong)(int)uVar8 * 8 + 4];
          local_258 = param_3;
          FUN_1418370b6(local_218,param_2,&local_170,iVar13);
          uVar19 = ~(uint)uVar21 & uVar19;
          puVar11 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar11 = local_138;
          }
          iVar31 = (int)uVar33;
          lVar25 = (longlong)iVar31;
          uVar8 = puVar11[lVar25] & uVar19;
          if (uVar8 == 0) {
            iVar14 = local_120 + 0x1e;
            if (-1 < (int)(local_120 - 1)) {
              iVar14 = local_120 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar31) {
              iVar15 = iVar31;
            }
            if (iVar31 < iVar14) {
              lVar26 = 0;
              do {
                uVar8 = puVar11[lVar25 + lVar26 + 1];
                if (uVar8 != 0) {
                  uVar33 = (ulonglong)(iVar31 + (int)lVar26 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143ab45e2;
                }
                iVar28 = iVar28 + 0x20;
                lVar26 = lVar26 + 1;
              } while (iVar15 - lVar25 != lVar26);
              uVar19 = 0xffffffff;
              iVar31 = iVar15;
            }
            uVar33 = (ulonglong)(iVar31 + 1);
            uVar8 = local_120;
          }
          else {
LAB_143ab45e2:
            uVar21 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar21 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)local_120 <= (int)uVar8) {
              uVar8 = local_120;
            }
          }
          iVar13 = iVar13 + 1;
        } while (uVar8 != (uint)local_208);
      }
    }
    else if ((uVar8 & 4) == 0) {
      local_128 = (uint *)0x0;
      local_120 = 0;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = (undefined1 *)0x0;
      local_100 = 0;
      if (*param_2 == 0) {
        iVar28 = (int)param_3[0x14];
        uVar8 = 0;
      }
      else {
        do {
          iVar28 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar19 * 4);
          uVar8 = *(uint *)(*(longlong *)(param_2 + 0x12) + (longlong)(int)uVar19 * 4);
          local_160 = (int *)CONCAT44(uVar8,iVar28);
          uVar22 = uVar8 >> 0xd ^ iVar28 - uVar8;
          uVar12 = uVar22 << 8 ^ (-0x61c88647 - uVar8) - uVar22;
          uVar24 = uVar12 >> 0xd ^ (uVar8 - uVar22) - uVar12;
          uVar22 = uVar24 >> 0xc ^ (uVar22 - uVar12) - uVar24;
          uVar27 = uVar22 << 0x10 ^ (uVar12 - uVar24) - uVar22;
          uVar12 = uVar27 >> 5 ^ (uVar24 - uVar22) - uVar27;
          uVar24 = uVar12 >> 3 ^ (uVar22 - uVar27) - uVar12;
          uVar22 = uVar24 << 10 ^ (uVar27 - uVar12) - uVar24;
          uVar12 = uVar22 >> 0xf ^ uVar12 - (uVar24 + uVar22);
          if ((int)uStack_140 != local_114) {
            puVar16 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar16 = local_110;
            }
            iVar13 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & uVar12) * 4);
            while (iVar13 != -1) {
              lVar25 = (longlong)iVar13;
              piVar6 = local_148 + lVar25 * 8;
              if ((local_148[lVar25 * 8] == iVar28) && (local_148[lVar25 * 8 + 1] == uVar8)) {
                if (piVar6 != (int *)0x0) goto LAB_143ab2676;
                break;
              }
              iVar13 = piVar6[6];
            }
          }
          local_170 = &local_160;
          FUN_14054dd5a(&local_148,&local_14c,uVar12,&local_170);
          piVar6 = local_148 + (longlong)local_14c * 8;
LAB_143ab2676:
          iVar28 = piVar6[4];
          uVar8 = iVar28 + 1;
          piVar6[4] = uVar8;
          if ((uint)piVar6[5] < uVar8) {
            FUN_141838130(piVar6 + 2);
          }
          *(uint *)(*(longlong *)(piVar6 + 2) + (longlong)iVar28 * 4) = uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *param_2);
        uVar8 = (int)uStack_140 - local_114;
        iVar28 = (int)param_3[0x14];
        *(uint *)(param_3 + 0x14) = iVar28 + uVar8;
        if ((uint)(*(int *)((longlong)param_3 + 0xa4) - iVar28) < uVar8) {
          FUN_1418382ec(param_3 + 8);
        }
      }
      plVar23 = param_3 + 8;
      if ((longlong *)param_3[0x13] != (longlong *)0x0) {
        plVar23 = (longlong *)param_3[0x13];
      }
      memset(plVar23 + (longlong)iVar28 * 0xb,0,(longlong)(int)uVar8 * 0x58);
      uVar19 = *param_2;
      iVar28 = uVar8 + (int)param_3[3] + uVar19;
      if (iVar28 < 0) {
LAB_143ab591b:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar28);
      }
      if (*(int *)((longlong)param_3 + 0x1c) < iVar28) {
        FUN_14480809c(param_3 + 2,iVar28);
        uVar19 = *param_2;
      }
      iVar13 = uVar19 + uVar8;
      iVar28 = (int)param_3[5] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x2c) < iVar28) {
        FUN_14499148c(param_3 + 4,iVar28);
        iVar13 = *param_2 + uVar8;
      }
      iVar28 = (int)param_3[7] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x3c) < iVar28) {
        FUN_14480809c(param_3 + 6,iVar28);
        iVar13 = uVar8 + *param_2;
      }
      iVar13 = iVar13 + (int)param_3[1];
      if (iVar13 < 0) goto LAB_143ab5116;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
        FUN_14480809c(param_3);
      }
      local_160 = &local_14c;
      local_170 = &local_160;
      FUN_143ab881e(&local_148);
      FUN_1449dcec4(&local_148);
      if (local_120 == 0) {
        uVar21 = 1;
        uVar33 = 0;
        uVar8 = 0;
        iVar28 = 0;
      }
      else {
        puVar11 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar11 = local_138;
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar28 = local_120 + 0x1e;
          if (-1 < (int)(local_120 - 1)) {
            iVar28 = local_120 - 1;
          }
          uVar33 = 0;
          uVar21 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar21 = uVar33;
          }
          iVar28 = 0;
          do {
            if (uVar21 == uVar33) goto LAB_143ab6047;
            iVar28 = iVar28 + 0x20;
            uVar8 = puVar11[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar33 = 0;
          iVar28 = 0;
        }
        uVar21 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar21 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)local_120 <= (int)uVar8) {
          uVar8 = local_120;
        }
      }
      if (uVar8 != local_120) {
        uVar19 = 0xffffffff;
        iVar13 = 0;
        local_208 = (ulonglong)local_120;
        do {
          piVar6 = local_148;
          plVar23 = (longlong *)(local_148 + (longlong)(int)uVar8 * 8 + 2);
          FUN_144b37034(param_2,plVar23);
          local_170 = (undefined8 *)*plVar23;
          local_168 = (float)piVar6[(longlong)(int)uVar8 * 8 + 4];
          local_258 = param_3;
          FUN_1449d414a(local_218,param_2,&local_170,iVar13);
          uVar19 = ~(uint)uVar21 & uVar19;
          puVar11 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar11 = local_138;
          }
          iVar31 = (int)uVar33;
          lVar25 = (longlong)iVar31;
          uVar8 = puVar11[lVar25] & uVar19;
          if (uVar8 == 0) {
            iVar14 = local_120 + 0x1e;
            if (-1 < (int)(local_120 - 1)) {
              iVar14 = local_120 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar31) {
              iVar15 = iVar31;
            }
            if (iVar31 < iVar14) {
              lVar26 = 0;
              do {
                uVar8 = puVar11[lVar25 + lVar26 + 1];
                if (uVar8 != 0) {
                  uVar33 = (ulonglong)(iVar31 + (int)lVar26 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143ab2971;
                }
                iVar28 = iVar28 + 0x20;
                lVar26 = lVar26 + 1;
              } while (iVar15 - lVar25 != lVar26);
              uVar19 = 0xffffffff;
              iVar31 = iVar15;
            }
            uVar33 = (ulonglong)(iVar31 + 1);
            uVar8 = local_120;
          }
          else {
LAB_143ab2971:
            uVar21 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar21 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)local_120 <= (int)uVar8) {
              uVar8 = local_120;
            }
          }
          iVar13 = iVar13 + 1;
        } while (uVar8 != (uint)local_208);
      }
    }
    else {
      local_128 = (uint *)0x0;
      local_120 = 0;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = (undefined1 *)0x0;
      local_100 = 0;
      if (*param_2 == 0) {
        iVar28 = (int)param_3[0x14];
        uVar8 = 0;
      }
      else {
        do {
          iVar28 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar19 * 4);
          uVar8 = *(uint *)(*(longlong *)(param_2 + 0x12) + (longlong)(int)uVar19 * 4);
          local_160 = (int *)CONCAT44(uVar8,iVar28);
          uVar22 = uVar8 >> 0xd ^ iVar28 - uVar8;
          uVar12 = uVar22 << 8 ^ (-0x61c88647 - uVar8) - uVar22;
          uVar24 = uVar12 >> 0xd ^ (uVar8 - uVar22) - uVar12;
          uVar22 = uVar24 >> 0xc ^ (uVar22 - uVar12) - uVar24;
          uVar27 = uVar22 << 0x10 ^ (uVar12 - uVar24) - uVar22;
          uVar12 = uVar27 >> 5 ^ (uVar24 - uVar22) - uVar27;
          uVar24 = uVar12 >> 3 ^ (uVar22 - uVar27) - uVar12;
          uVar22 = uVar24 << 10 ^ (uVar27 - uVar12) - uVar24;
          uVar12 = uVar22 >> 0xf ^ uVar12 - (uVar24 + uVar22);
          if ((int)uStack_140 != local_114) {
            puVar16 = local_108;
            if (local_108 == (undefined1 *)0x0) {
              puVar16 = local_110;
            }
            iVar13 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & uVar12) * 4);
            while (iVar13 != -1) {
              lVar25 = (longlong)iVar13;
              piVar6 = local_148 + lVar25 * 8;
              if ((local_148[lVar25 * 8] == iVar28) && (local_148[lVar25 * 8 + 1] == uVar8)) {
                if (piVar6 != (int *)0x0) goto LAB_143ab47cd;
                break;
              }
              iVar13 = piVar6[6];
            }
          }
          local_170 = &local_160;
          FUN_14054dd5a(&local_148,&local_14c,uVar12,&local_170);
          piVar6 = local_148 + (longlong)local_14c * 8;
LAB_143ab47cd:
          iVar28 = piVar6[4];
          uVar8 = iVar28 + 1;
          piVar6[4] = uVar8;
          if ((uint)piVar6[5] < uVar8) {
            FUN_141838130(piVar6 + 2);
          }
          *(uint *)(*(longlong *)(piVar6 + 2) + (longlong)iVar28 * 4) = uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *param_2);
        uVar8 = (int)uStack_140 - local_114;
        iVar28 = (int)param_3[0x14];
        *(uint *)(param_3 + 0x14) = iVar28 + uVar8;
        if ((uint)(*(int *)((longlong)param_3 + 0xa4) - iVar28) < uVar8) {
          FUN_1418382ec(param_3 + 8);
        }
      }
      plVar23 = param_3 + 8;
      if ((longlong *)param_3[0x13] != (longlong *)0x0) {
        plVar23 = (longlong *)param_3[0x13];
      }
      memset(plVar23 + (longlong)iVar28 * 0xb,0,(longlong)(int)uVar8 * 0x58);
      uVar19 = *param_2;
      iVar28 = uVar8 + (int)param_3[3] + uVar19;
      if (iVar28 < 0) goto LAB_143ab591b;
      if (*(int *)((longlong)param_3 + 0x1c) < iVar28) {
        FUN_14480809c(param_3 + 2,iVar28);
        uVar19 = *param_2;
      }
      iVar13 = uVar19 + uVar8;
      iVar28 = (int)param_3[5] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x2c) < iVar28) {
        FUN_14499148c(param_3 + 4,iVar28);
        iVar13 = *param_2 + uVar8;
      }
      iVar28 = (int)param_3[7] + iVar13;
      if (iVar28 < 0) goto LAB_143ab510f;
      if (*(int *)((longlong)param_3 + 0x3c) < iVar28) {
        FUN_14480809c(param_3 + 6,iVar28);
        iVar13 = uVar8 + *param_2;
      }
      iVar13 = iVar13 + (int)param_3[1];
      if (iVar13 < 0) goto LAB_143ab5116;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
        FUN_14480809c(param_3);
      }
      local_160 = &local_14c;
      local_170 = &local_160;
      FUN_143ab881e(&local_148);
      FUN_1449dcec4(&local_148);
      if (local_120 == 0) {
        uVar21 = 1;
        uVar33 = 0;
        uVar8 = 0;
        iVar28 = 0;
      }
      else {
        puVar11 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar11 = local_138;
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar28 = local_120 + 0x1e;
          if (-1 < (int)(local_120 - 1)) {
            iVar28 = local_120 - 1;
          }
          uVar33 = 0;
          uVar21 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar21 = uVar33;
          }
          iVar28 = 0;
          do {
            if (uVar21 == uVar33) goto LAB_143ab6047;
            iVar28 = iVar28 + 0x20;
            uVar8 = puVar11[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar33 = 0;
          iVar28 = 0;
        }
        uVar21 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar21 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)local_120 <= (int)uVar8) {
          uVar8 = local_120;
        }
      }
      if (uVar8 != local_120) {
        uVar19 = 0xffffffff;
        iVar13 = 0;
        local_208 = (ulonglong)local_120;
        do {
          piVar6 = local_148;
          plVar23 = (longlong *)(local_148 + (longlong)(int)uVar8 * 8 + 2);
          FUN_144b37034(param_2,plVar23);
          local_170 = (undefined8 *)*plVar23;
          local_168 = (float)piVar6[(longlong)(int)uVar8 * 8 + 4];
          local_258 = param_3;
          FUN_141835d1c(local_218,param_2,&local_170,iVar13);
          uVar19 = ~(uint)uVar21 & uVar19;
          puVar11 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar11 = local_138;
          }
          iVar31 = (int)uVar33;
          lVar25 = (longlong)iVar31;
          uVar8 = puVar11[lVar25] & uVar19;
          if (uVar8 == 0) {
            iVar14 = local_120 + 0x1e;
            if (-1 < (int)(local_120 - 1)) {
              iVar14 = local_120 - 1;
            }
            iVar14 = iVar14 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar31) {
              iVar15 = iVar31;
            }
            if (iVar31 < iVar14) {
              lVar26 = 0;
              do {
                uVar8 = puVar11[lVar25 + lVar26 + 1];
                if (uVar8 != 0) {
                  uVar33 = (ulonglong)(iVar31 + (int)lVar26 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143ab6008;
                }
                iVar28 = iVar28 + 0x20;
                lVar26 = lVar26 + 1;
              } while (iVar15 - lVar25 != lVar26);
              uVar19 = 0xffffffff;
              iVar31 = iVar15;
            }
            uVar33 = (ulonglong)(iVar31 + 1);
            uVar8 = local_120;
          }
          else {
LAB_143ab6008:
            uVar21 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar21 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar8 = (iVar28 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)local_120 <= (int)uVar8) {
              uVar8 = local_120;
            }
          }
          iVar13 = iVar13 + 1;
        } while (uVar8 != (uint)local_208);
      }
    }
LAB_143ab6047:
    local_100 = 0;
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_141837042(&local_148);
    lVar25 = local_218;
    goto LAB_143ab6075;
  }
  local_148 = (int *)0x0;
  uStack_140 = 0;
  iVar13 = *param_2 + 1;
  if (iVar13 < 0) {
LAB_143ab5116:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if ((iVar13 == 0) || (FUN_141837fac(&local_148), *param_2 != 0)) {
    uVar8 = 0;
    do {
      uVar21 = uStack_140;
      lVar25 = (longlong)(int)uStack_140;
      uVar19 = (int)uStack_140 + 1;
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar19);
      if (uStack_140._4_4_ < uVar19) {
        FUN_141838130(&local_148,uVar21 & 0xffffffff);
      }
      local_148[lVar25] = uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *param_2);
  }
  pdVar20 = (double *)(param_3 + 8);
  iVar28 = (int)param_3[0x14];
  lVar25 = (longlong)iVar28;
  *(int *)(param_3 + 0x14) = iVar28 + 1;
  if (*(int *)((longlong)param_3 + 0xa4) == iVar28) {
    FUN_1418382ec(pdVar20,iVar28);
  }
  pdVar10 = (double *)param_3[0x13];
  if ((double *)param_3[0x13] == (double *)0x0) {
    pdVar10 = pdVar20;
  }
  pdVar10[lVar25 * 0xb + 8] = 0.0;
  (pdVar10 + lVar25 * 0xb + 8)[1] = 0.0;
  pdVar10[lVar25 * 0xb + 6] = 0.0;
  (pdVar10 + lVar25 * 0xb + 6)[1] = 0.0;
  pdVar10[lVar25 * 0xb + 4] = 0.0;
  (pdVar10 + lVar25 * 0xb + 4)[1] = 0.0;
  pdVar10[lVar25 * 0xb + 2] = 0.0;
  (pdVar10 + lVar25 * 0xb + 2)[1] = 0.0;
  pdVar10[lVar25 * 0xb] = 0.0;
  (pdVar10 + lVar25 * 0xb)[1] = 0.0;
  pdVar10[lVar25 * 0xb + 10] = 0.0;
  FUN_144b37034(param_2,&local_148);
  uVar8 = *param_2;
  iVar28 = (int)param_3[3] + uVar8 + 1;
  if (iVar28 < 0) {
LAB_143ab510f:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar28);
  }
  plVar23 = param_3 + 2;
  if (*(int *)((longlong)param_3 + 0x1c) < iVar28) {
    FUN_14480809c(plVar23,iVar28);
    uVar8 = *param_2;
  }
  iVar13 = uVar8 + 1;
  iVar28 = (int)param_3[5] + iVar13;
  if (iVar28 < 0) goto LAB_143ab510f;
  local_210 = param_3 + 4;
  if (*(int *)((longlong)param_3 + 0x2c) < iVar28) {
    FUN_14499148c(local_210,iVar28);
    iVar13 = *param_2 + 1;
  }
  iVar13 = iVar13 + (int)param_3[1];
  if (iVar13 < 0) goto LAB_143ab5116;
  if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
    FUN_14480809c(param_3);
  }
  piVar6 = local_148;
  iVar28 = (int)uStack_140;
  local_1e0 = pdVar20;
  local_1f0 = plVar23;
  if ((*(uint *)(local_218 + 300) & 0x40) == 0) {
    uVar8 = *(uint *)(param_3 + 3);
    local_1d8 = (ulonglong)uVar8;
    iVar13 = *local_148;
    cVar2 = *(char *)((longlong)param_2 + 0x51);
    if (cVar2 == '\0') {
      lVar25 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar13 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar38 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar38 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar38 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar25 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar38;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    else {
      lVar25 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar25 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar13 * 4);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    fVar37 = local_168;
    lVar26 = (longlong)(int)uVar8;
    fVar38 = (float)local_170;
    fVar41 = local_170._4_4_;
    if ((int)uStack_140 < 2) {
      uVar21 = 1;
      local_208 = CONCAT44(local_208._4_4_,(float)local_170);
      fVar39 = 0.0;
      fVar46 = DAT_14c846338;
      fVar49 = DAT_14c846330._4_4_;
      fVar52 = (float)DAT_14c846330;
      fVar43 = local_170._4_4_;
      fVar36 = local_168;
    }
    else {
      uVar21 = 1;
      do {
        iVar13 = local_148[uVar21];
        lVar25 = 0;
        if (cVar2 == '\0') {
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar13 * 2);
            uVar19 = (uint)uVar5 << 0xd;
            if ((uVar19 & 0xf800000) == 0xf800000) {
              fVar39 = (float)(uVar19 | 0x70000000);
            }
            else if ((uVar19 & 0xf800000) == 0) {
              fVar39 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar39 = (float)((uVar19 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar25 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar39;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
        }
        else {
          do {
            *(undefined4 *)((longlong)&local_170 + lVar25 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar13 * 4);
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
        }
        fVar36 = local_168;
        fVar43 = local_170._4_4_;
        fVar46 = local_168 - fVar37;
        fVar49 = local_170._4_4_ - fVar41;
        local_208 = CONCAT44(local_208._4_4_,(float)local_170);
        fVar52 = (float)local_170 - fVar38;
        fVar39 = SQRT(fVar46 * fVar46 + fVar52 * fVar52 + fVar49 * fVar49);
        if (DAT_14c76298c < fVar39) {
          fVar38 = 1.0 / fVar39;
          *(uint *)(param_3 + 3) = uVar8 + 1;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8 + 1) {
            FUN_1447808da(plVar23);
          }
          *(int *)(param_3[2] + lVar26 * 4) = *piVar6;
          lVar25 = param_3[5];
          uVar8 = (int)lVar25 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            FUN_1449e2712();
          }
          lVar18 = *local_210;
          lVar25 = (longlong)(int)lVar25 * 0x10;
          *(float *)(lVar18 + lVar25) = fVar52 * fVar38;
          *(float *)(lVar18 + 4 + lVar25) = fVar49 * fVar38;
          *(float *)(lVar18 + 8 + lVar25) = fVar46 * fVar38;
          *(undefined4 *)(lVar18 + 0xc + lVar25) = 0;
          fVar46 = fVar46 * fVar38;
          fVar49 = fVar49 * fVar38;
          fVar52 = fVar52 * fVar38;
          goto LAB_143ab2f58;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != (uStack_140 & 0xffffffff));
      uVar21 = uStack_140 & 0xffffffff;
      fVar39 = 0.0;
    }
LAB_143ab2f58:
    iVar13 = (int)uVar21;
    lVar25 = local_218;
    plVar23 = local_210;
    local_1c8 = lVar26;
    if (iVar13 + 1 < iVar28) {
      fVar38 = 0.0;
      uVar1 = (uVar21 & 0xffffffff) + 1;
      uVar33 = uVar21;
      do {
        uVar29 = uVar1;
        iVar13 = piVar6[uVar29];
        if (*(char *)((longlong)param_2 + 0x51) == '\0') {
          lVar26 = 0;
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 2);
            uVar8 = (uint)uVar5 << 0xd;
            if ((uVar8 & 0xf800000) == 0xf800000) {
              fVar41 = (float)(uVar8 | 0x70000000);
            }
            else if ((uVar8 & 0xf800000) == 0) {
              fVar41 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar41 = (float)((uVar8 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar26 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
            lVar26 = lVar26 + 1;
            lVar25 = local_218;
            plVar23 = local_210;
          } while (lVar26 != 3);
        }
        else {
          lVar26 = 0;
          do {
            *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 4);
            lVar26 = lVar26 + 1;
          } while (lVar26 != 3);
        }
        fVar37 = local_168;
        fVar41 = local_170._4_4_;
        fVar40 = local_168 - fVar36;
        fVar42 = local_170._4_4_ - fVar43;
        local_1d0 = (float)local_170;
        fVar44 = (float)local_170 - (float)local_208;
        fVar45 = SQRT(fVar40 * fVar40 + fVar44 * fVar44 + fVar42 * fVar42);
        if ((DAT_14c76298c < fVar45) || ((int)uVar33 == iVar28 + -2)) {
          fVar43 = DAT_14c76298c;
          if (DAT_14c76298c <= fVar45) {
            fVar43 = fVar45;
          }
          fVar43 = 1.0 / fVar43;
          fVar46 = fVar46 + fVar40 * fVar43;
          fVar49 = fVar49 + fVar42 * fVar43;
          fVar52 = fVar52 + fVar44 * fVar43;
          fVar36 = fVar46 * fVar46 + fVar52 * fVar52 + fVar49 * fVar49;
          if (((fVar36 != 1.0) || (fVar50 = fVar46, fVar47 = fVar49, fVar48 = fVar52, NAN(fVar36)))
             && (fVar50 = DAT_14c846338, fVar47 = DAT_14c846330._4_4_, fVar48 = (float)DAT_14c846330
                , 1e-08 <= fVar36)) {
            fVar36 = 1.0 / SQRT(fVar36);
            fVar50 = fVar46 * fVar36;
            fVar47 = fVar49 * fVar36;
            fVar48 = fVar52 * fVar36;
          }
          fVar36 = *(float *)(lVar25 + 0x124);
          if (0.99 <= fVar36) {
            fVar36 = 0.99;
          }
          lVar26 = param_3[3];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 3) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8) {
            local_208 = CONCAT44(local_208._4_4_,fVar38);
            local_1f4 = fVar39;
            FUN_1447808da(local_1f0);
            lVar25 = local_218;
            plVar23 = local_210;
            fVar39 = local_1f4;
            fVar38 = (float)local_208;
          }
          *(int *)(param_3[2] + (longlong)(int)lVar26 * 4) = piVar6[(int)uVar21];
          lVar26 = param_3[5];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            local_208 = CONCAT44(local_208._4_4_,fVar38);
            local_1f4 = fVar39;
            FUN_1449e2712();
            lVar25 = local_218;
            plVar23 = local_210;
            fVar39 = local_1f4;
            fVar38 = (float)local_208;
          }
          fVar36 = 1.0 - fVar36;
          fVar38 = fVar38 + fVar39;
          lVar18 = param_3[4];
          lVar26 = (longlong)(int)lVar26 * 0x10;
          *(float *)(lVar18 + lVar26) = fVar48 * fVar36;
          *(float *)(lVar18 + 4 + lVar26) = fVar47 * fVar36;
          *(float *)(lVar18 + 8 + lVar26) = fVar50 * fVar36;
          *(float *)(lVar18 + 0xc + lVar26) = fVar38;
          *(float *)(param_3 + 0x15) = *(float *)(param_3 + 0x15) + fVar45;
          uVar21 = uVar29 & 0xffffffff;
          local_208 = CONCAT44(local_208._4_4_,local_1d0);
          fVar39 = fVar45;
          fVar46 = fVar40 * fVar43;
          fVar49 = fVar42 * fVar43;
          fVar52 = fVar44 * fVar43;
          fVar43 = fVar41;
          fVar36 = fVar37;
        }
        iVar13 = (int)uVar21;
        uVar1 = uVar29 + 1;
        uVar33 = uVar29;
      } while ((int)(uVar29 + 1) < iVar28);
    }
    else {
      fVar38 = 0.0;
    }
    iVar31 = (int)param_3[3];
    if (0.0 < fVar39) {
      *(uint *)(param_3 + 3) = iVar31 + 1U;
      if (*(uint *)((longlong)param_3 + 0x1c) < iVar31 + 1U) {
        FUN_1447808da(local_1f0);
        lVar25 = local_218;
        plVar23 = local_210;
      }
      fVar38 = fVar38 + fVar39;
      *(int *)(param_3[2] + (longlong)iVar31 * 4) = piVar6[iVar13];
      iVar13 = (int)param_3[5];
      *(uint *)(param_3 + 5) = iVar13 + 1U;
      if (*(uint *)((longlong)param_3 + 0x2c) < iVar13 + 1U) {
        FUN_1449e2712(plVar23,iVar13);
        lVar25 = local_218;
        plVar23 = local_210;
      }
      lVar26 = param_3[4];
      lVar18 = (longlong)iVar13 * 0x10;
      *(float *)(lVar26 + lVar18) = fVar52;
      *(float *)(lVar26 + 4 + lVar18) = fVar49;
      *(float *)(lVar26 + 8 + lVar18) = fVar46;
      *(float *)(lVar26 + 0xc + lVar18) = fVar38;
      iVar31 = (int)param_3[3];
    }
    plVar30 = local_1f0;
    uVar8 = iVar31 - 1;
    iVar13 = (int)local_1d8;
    iVar14 = uVar8 - iVar13;
    if (iVar14 != 0 && iVar13 <= (int)uVar8) {
      if ((double *)param_3[0x13] != (double *)0x0) {
        local_1e0 = (double *)param_3[0x13];
      }
      iVar15 = *piVar6;
      if (*(char *)((longlong)param_2 + 0x51) == '\0') {
        lVar26 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar15 * 2);
          uVar19 = (uint)uVar5 << 0xd;
          if ((uVar19 & 0xf800000) == 0xf800000) {
            fVar41 = (float)(uVar19 | 0x70000000);
          }
          else if ((uVar19 & 0xf800000) == 0) {
            fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
          }
          *(uint *)((longlong)&local_170 + lVar26 * 4) =
               (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
          lVar26 = lVar26 + 1;
          lVar25 = local_218;
          plVar23 = local_210;
        } while (lVar26 != 3);
      }
      else {
        lVar26 = 0;
        do {
          *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
               *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar15 * 4);
          lVar26 = lVar26 + 1;
        } while (lVar26 != 3);
      }
      *local_1e0 = (double)(float)local_170;
      local_1e0[1] = (double)local_170._4_4_;
      local_1e0[2] = (double)local_168;
      iVar28 = piVar6[iVar28 + -1];
      if (*(char *)((longlong)param_2 + 0x51) == '\0') {
        lVar26 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 2);
          uVar19 = (uint)uVar5 << 0xd;
          if ((uVar19 & 0xf800000) == 0xf800000) {
            fVar41 = (float)(uVar19 | 0x70000000);
          }
          else if ((uVar19 & 0xf800000) == 0) {
            fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
          }
          *(uint *)((longlong)&local_170 + lVar26 * 4) =
               (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
          lVar26 = lVar26 + 1;
          lVar25 = local_218;
          plVar23 = local_210;
        } while (lVar26 != 3);
      }
      else {
        lVar26 = 0;
        do {
          *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
               *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 4);
          lVar26 = lVar26 + 1;
        } while (lVar26 != 3);
      }
      local_1e0[3] = (double)(float)local_170;
      local_1e0[4] = (double)local_170._4_4_;
      local_1e0[5] = (double)local_168;
      *(int *)(local_1e0 + 6) = (int)param_3[1];
      *(int *)((longlong)local_1e0 + 0x34) = iVar14;
      if (iVar14 != 1) {
        lVar26 = *plVar23;
        lVar18 = local_1c8 * 0x10;
        fVar41 = *(float *)(lVar26 + 0x10 + lVar18);
        fVar37 = *(float *)(lVar26 + 4 + lVar18);
        fVar39 = *(float *)(lVar26 + 0x14 + lVar18);
        fVar43 = *(float *)(lVar26 + 8 + lVar18);
        fVar36 = *(float *)(lVar26 + 0x18 + lVar18);
        fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar41 + fVar37 * fVar39;
        fVar46 = fVar46 + fVar46;
        *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar41;
        *(float *)(lVar26 + 4 + lVar18) = fVar37 * fVar46 - fVar39;
        *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
        lVar26 = *plVar23;
        lVar18 = (longlong)(int)uVar8 * 0x10;
        lVar17 = (longlong)iVar31 * 0x10;
        fVar41 = *(float *)(lVar26 + 4 + lVar18);
        fVar37 = *(float *)(lVar26 + -0x20 + lVar17);
        fVar39 = *(float *)(lVar26 + -0x1c + lVar17);
        fVar43 = *(float *)(lVar26 + 8 + lVar18);
        fVar36 = *(float *)(lVar26 + -0x18 + lVar17);
        fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar37 + fVar41 * fVar39;
        fVar46 = fVar46 + fVar46;
        *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar37;
        *(float *)(lVar26 + 4 + lVar18) = fVar41 * fVar46 - fVar39;
        *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
      }
      if (iVar13 < (int)uVar8) {
        uVar21 = local_1d8 & 0xffffffff;
        do {
          iVar28 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar28 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar28 + 1U) {
            FUN_1447808da(param_3,iVar28);
            lVar25 = local_218;
            plVar23 = local_210;
          }
          *(int *)(*param_3 + (longlong)iVar28 * 4) = (int)uVar21;
          uVar19 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar19;
        } while (uVar8 != uVar19);
      }
      uVar19 = *(uint *)(lVar25 + 300);
      if ((uVar19 & 8) == 0) {
        local_228 = &local_14c;
        local_230 = &local_170;
        local_238 = &local_160;
        local_258 = (longlong *)CONCAT44(local_258._4_4_,(int)local_1d8);
        local_250 = uVar8;
        local_248 = iVar14;
        local_240 = fVar38;
        FUN_1449d50c8(lVar25 + 0x130,plVar30,plVar23,param_2 + 0x1c);
      }
      else {
        local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
        local_160 = (int *)CONCAT44(local_160._4_4_,0x3f800000);
        local_14c = 0x3f800000;
      }
      uVar32 = (undefined4)local_1d8;
      if ((uVar19 & 0x10) == 0) {
        local_228 = &local_158;
        local_230 = (undefined8 *)&local_150;
        local_238 = (undefined8 *)&local_154;
        local_258 = (longlong *)CONCAT44(local_258._4_4_,uVar32);
        local_250 = uVar8;
        local_248 = iVar14;
        local_240 = fVar38;
        FUN_1449d50c8(local_218 + 0x158,local_1f0,local_210,param_2 + 0x1c);
      }
      else {
        local_150 = 0;
        local_158 = 0x3f800000;
        local_154 = 0x3f800000;
      }
      *(undefined4 *)(local_1e0 + 7) = (undefined4)local_160;
      *(float *)((longlong)local_1e0 + 0x3c) = (float)local_170;
      *(int *)(local_1e0 + 8) = local_14c;
      *(undefined4 *)((longlong)local_1e0 + 0x44) = local_154;
      *(undefined4 *)(local_1e0 + 9) = local_150;
      *(int *)((longlong)local_1e0 + 0x4c) = local_158;
      *(undefined4 *)(local_1e0 + 10) = uVar32;
      *(uint *)((longlong)local_1e0 + 0x54) = uVar8;
      lVar25 = local_218;
    }
    goto LAB_143ab6075;
  }
  local_1b0 = param_2 + 0x1c;
  local_200 = uStack_140 & 0xffffffff;
  uVar8 = *(uint *)(param_3 + 3);
  local_1e8 = (ulonglong)uVar8;
  local_1a8 = (longlong)(int)uVar8;
  if ((*(uint *)(local_218 + 300) & 4) == 0) {
    iVar28 = *local_148;
    cVar2 = *(char *)((longlong)param_2 + 0x51);
    if (cVar2 == '\0') {
      lVar25 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar38 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar38 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar38 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar25 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar38;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    else {
      lVar25 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar25 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 4);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    fVar37 = local_168;
    fVar38 = (float)local_170;
    fVar41 = local_170._4_4_;
    if ((int)uStack_140 < 2) {
      uVar21 = 1;
      fVar40 = 0.0;
      fVar46 = (float)DAT_14c846330;
      fVar39 = (float)local_170;
      fVar43 = local_170._4_4_;
      fVar36 = local_168;
      fVar49 = DAT_14c846338;
      fVar52 = DAT_14c846330._4_4_;
    }
    else {
      uVar21 = 1;
      do {
        iVar28 = local_148[uVar21];
        lVar25 = 0;
        if (cVar2 == '\0') {
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 2);
            uVar19 = (uint)uVar5 << 0xd;
            if ((uVar19 & 0xf800000) == 0xf800000) {
              fVar39 = (float)(uVar19 | 0x70000000);
            }
            else if ((uVar19 & 0xf800000) == 0) {
              fVar39 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar39 = (float)((uVar19 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar25 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar39;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
        }
        else {
          do {
            *(undefined4 *)((longlong)&local_170 + lVar25 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 4);
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
        }
        fVar36 = local_168;
        fVar39 = (float)local_170;
        fVar43 = local_170._4_4_;
        fVar49 = local_168 - fVar37;
        fVar52 = local_170._4_4_ - fVar41;
        fVar46 = (float)local_170 - fVar38;
        fVar40 = SQRT(fVar49 * fVar49 + fVar46 * fVar46 + fVar52 * fVar52);
        if (DAT_14c76298c < fVar40) {
          fVar38 = 1.0 / fVar40;
          *(uint *)(param_3 + 3) = uVar8 + 1;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8 + 1) {
            FUN_1447808da(plVar23);
          }
          *(int *)(param_3[2] + local_1a8 * 4) = *piVar6;
          lVar25 = param_3[5];
          uVar8 = (int)lVar25 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            FUN_1449e2712();
          }
          lVar26 = *local_210;
          lVar25 = (longlong)(int)lVar25 * 0x10;
          *(float *)(lVar26 + lVar25) = fVar46 * fVar38;
          *(float *)(lVar26 + 4 + lVar25) = fVar52 * fVar38;
          *(float *)(lVar26 + 8 + lVar25) = fVar49 * fVar38;
          *(undefined4 *)(lVar26 + 0xc + lVar25) = 0;
          fVar46 = fVar46 * fVar38;
          fVar49 = fVar49 * fVar38;
          fVar52 = fVar52 * fVar38;
          goto LAB_143ab3cf1;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_200);
      fVar40 = 0.0;
      uVar21 = local_200;
    }
LAB_143ab3cf1:
    iVar28 = (int)uVar21;
    iVar13 = (int)local_200;
    uVar33 = local_200;
    lVar25 = local_218;
    plVar23 = local_210;
    if (iVar28 + 1 < iVar13) {
      fVar38 = 0.0;
      uVar29 = (uVar21 & 0xffffffff) + 1;
      uVar1 = uVar21;
      do {
        uVar34 = uVar29;
        iVar28 = piVar6[uVar34];
        if (*(char *)((longlong)param_2 + 0x51) == '\0') {
          lVar26 = 0;
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 2);
            uVar8 = (uint)uVar5 << 0xd;
            if ((uVar8 & 0xf800000) == 0xf800000) {
              fVar41 = (float)(uVar8 | 0x70000000);
            }
            else if ((uVar8 & 0xf800000) == 0) {
              fVar41 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar41 = (float)((uVar8 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar26 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
            lVar26 = lVar26 + 1;
            pdVar20 = local_1e0;
            uVar33 = local_200;
            lVar25 = local_218;
            plVar23 = local_210;
          } while (lVar26 != 3);
        }
        else {
          lVar26 = 0;
          do {
            *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 4);
            lVar26 = lVar26 + 1;
          } while (lVar26 != 3);
        }
        local_1d0 = local_168;
        fVar41 = local_168 - fVar36;
        local_208 = CONCAT44(local_208._4_4_,local_170._4_4_);
        fVar42 = local_170._4_4_ - fVar43;
        fVar37 = (float)local_170 - fVar39;
        fVar44 = SQRT(fVar41 * fVar41 + fVar37 * fVar37 + fVar42 * fVar42);
        if ((DAT_14c76298c < fVar44) || ((int)uVar1 == iVar13 + -2)) {
          local_1d8 = CONCAT44(local_1d8._4_4_,(float)local_170);
          fVar39 = DAT_14c76298c;
          if (DAT_14c76298c <= fVar44) {
            fVar39 = fVar44;
          }
          fVar39 = 1.0 / fVar39;
          fVar37 = fVar37 * fVar39;
          fVar42 = fVar42 * fVar39;
          fVar41 = fVar41 * fVar39;
          fVar45 = fVar49 + fVar41;
          fVar43 = fVar52 + fVar42;
          fVar36 = fVar46 + fVar37;
          fVar39 = fVar45 * fVar45 + fVar36 * fVar36 + fVar43 * fVar43;
          if (((fVar39 != 1.0) || (fVar50 = fVar43, fVar47 = fVar36, fVar48 = fVar45, NAN(fVar39)))
             && (fVar50 = DAT_14c846330._4_4_, fVar47 = (float)DAT_14c846330, fVar48 = DAT_14c846338
                , 1e-08 <= fVar39)) {
            fVar39 = 1.0 / SQRT(fVar39);
            fVar50 = fVar43 * fVar39;
            fVar47 = fVar36 * fVar39;
            fVar48 = fVar45 * fVar39;
          }
          fVar39 = *(float *)(lVar25 + 0x124);
          if (0.99 <= fVar39) {
            fVar39 = 0.99;
          }
          lVar26 = param_3[3];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 3) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8) {
            local_1c8 = CONCAT44(local_1c8._4_4_,fVar52);
            local_1f4 = fVar40;
            local_1cc = fVar38;
            FUN_1447808da(local_1f0);
            uVar33 = local_200;
            lVar25 = local_218;
            plVar23 = local_210;
            fVar38 = local_1cc;
            fVar52 = (float)local_1c8;
            fVar40 = local_1f4;
          }
          fVar39 = 1.0 - fVar39;
          *(int *)(param_3[2] + (longlong)(int)lVar26 * 4) = piVar6[(int)uVar21];
          lVar26 = param_3[5];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            local_1c8 = CONCAT44(local_1c8._4_4_,fVar52);
            local_1f4 = fVar40;
            FUN_1449e2712();
            uVar33 = local_200;
            lVar25 = local_218;
            plVar23 = local_210;
            fVar52 = (float)local_1c8;
            fVar40 = local_1f4;
          }
          fVar38 = fVar38 + fVar40;
          lVar18 = param_3[4];
          lVar26 = (longlong)(int)lVar26 * 0x10;
          *(float *)(lVar18 + lVar26) = fVar47 * fVar39;
          *(float *)(lVar18 + 4 + lVar26) = fVar50 * fVar39;
          *(float *)(lVar18 + 8 + lVar26) = fVar48 * fVar39;
          *(float *)(lVar18 + 0xc + lVar26) = fVar38;
          *(float *)(param_3 + 0x15) = *(float *)(param_3 + 0x15) + fVar44;
          *(float *)((longlong)param_3 + 0xac) =
               fVar44 * fVar44 + *(float *)((longlong)param_3 + 0xac);
          fVar36 = fVar49 * fVar41 + fVar46 * fVar37 + fVar52 * fVar42;
          uVar8 = -(uint)(0.0 <= fVar36);
          fVar36 = ABS(fVar36);
          fVar43 = 1.0 - fVar36;
          fVar39 = 0.0;
          if (0.0 <= fVar43) {
            fVar39 = fVar43;
          }
          fVar39 = SQRT(fVar39) * (fVar36 * -0.156583 + 1.5707964);
          *(float *)(param_3 + 0x16) =
               (float)(~uVar8 & (uint)(3.1415927 - fVar39) | (uint)fVar39 & uVar8) * fVar44 +
               *(float *)(param_3 + 0x16);
          uVar21 = uVar34 & 0xffffffff;
          fVar46 = fVar37;
          fVar39 = (float)local_1d8;
          fVar43 = (float)local_208;
          fVar36 = local_1d0;
          fVar49 = fVar41;
          fVar52 = fVar42;
          fVar40 = fVar44;
        }
        iVar28 = (int)uVar21;
        uVar29 = uVar34 + 1;
        uVar1 = uVar34;
      } while ((int)(uVar34 + 1) < (int)uVar33);
    }
    else {
      fVar38 = 0.0;
    }
    iVar14 = (int)uVar33;
    iVar13 = (int)param_3[3];
    uVar19 = (uint)local_1e8;
    if (0.0 < fVar40) {
      *(uint *)(param_3 + 3) = iVar13 + 1U;
      if (*(uint *)((longlong)param_3 + 0x1c) < iVar13 + 1U) {
        FUN_1447808da(local_1f0);
        uVar33 = local_200;
        lVar25 = local_218;
        plVar23 = local_210;
      }
      fVar38 = fVar38 + fVar40;
      *(int *)(param_3[2] + (longlong)iVar13 * 4) = piVar6[iVar28];
      iVar28 = (int)param_3[5];
      *(uint *)(param_3 + 5) = iVar28 + 1U;
      if (*(uint *)((longlong)param_3 + 0x2c) < iVar28 + 1U) {
        FUN_1449e2712(plVar23,iVar28);
        uVar33 = local_200;
        lVar25 = local_218;
        plVar23 = local_210;
      }
      iVar14 = (int)uVar33;
      lVar26 = param_3[4];
      lVar18 = (longlong)iVar28 * 0x10;
      *(float *)(lVar26 + lVar18) = fVar46;
      *(float *)(lVar26 + 4 + lVar18) = fVar52;
      *(float *)(lVar26 + 8 + lVar18) = fVar49;
      *(float *)(lVar26 + 0xc + lVar18) = fVar38;
      iVar13 = (int)param_3[3];
      pdVar20 = local_1e0;
    }
    plVar30 = local_1f0;
    uVar8 = iVar13 - 1;
    iVar31 = uVar8 - uVar19;
    if (iVar31 == 0 || (int)uVar8 < (int)uVar19) goto LAB_143ab6075;
    if ((double *)param_3[0x13] != (double *)0x0) {
      pdVar20 = (double *)param_3[0x13];
    }
    iVar28 = *piVar6;
    uVar12 = (uint)local_1e8;
    if (*(char *)((longlong)param_2 + 0x51) == '\0') {
      lVar26 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar41 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar26 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
        lVar26 = lVar26 + 1;
        iVar14 = (int)local_200;
        lVar25 = local_218;
        plVar23 = local_210;
        uVar19 = uVar12;
      } while (lVar26 != 3);
    }
    else {
      lVar26 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 4);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
    }
    *pdVar20 = (double)(float)local_170;
    pdVar20[1] = (double)local_170._4_4_;
    pdVar20[2] = (double)local_168;
    iVar28 = piVar6[iVar14 + -1];
    if (*(char *)((longlong)param_2 + 0x51) == '\0') {
      lVar26 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar41 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar26 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
        lVar26 = lVar26 + 1;
        lVar25 = local_218;
        plVar23 = local_210;
      } while (lVar26 != 3);
    }
    else {
      lVar26 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar28 * 4);
        lVar26 = lVar26 + 1;
        uVar12 = uVar19;
      } while (lVar26 != 3);
    }
    pdVar20[3] = (double)(float)local_170;
    pdVar20[4] = (double)local_170._4_4_;
    pdVar20[5] = (double)local_168;
    *(int *)(pdVar20 + 6) = (int)param_3[1];
    *(int *)((longlong)pdVar20 + 0x34) = iVar31;
    if (iVar31 != 1) {
      lVar26 = *plVar23;
      lVar18 = local_1a8 * 0x10;
      fVar41 = *(float *)(lVar26 + 0x10 + lVar18);
      fVar37 = *(float *)(lVar26 + 4 + lVar18);
      fVar39 = *(float *)(lVar26 + 0x14 + lVar18);
      fVar43 = *(float *)(lVar26 + 8 + lVar18);
      fVar36 = *(float *)(lVar26 + 0x18 + lVar18);
      fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar41 + fVar37 * fVar39;
      fVar46 = fVar46 + fVar46;
      *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar41;
      *(float *)(lVar26 + 4 + lVar18) = fVar37 * fVar46 - fVar39;
      *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
      lVar26 = *plVar23;
      lVar18 = (longlong)(int)uVar8 * 0x10;
      lVar17 = (longlong)iVar13 * 0x10;
      fVar41 = *(float *)(lVar26 + 4 + lVar18);
      fVar37 = *(float *)(lVar26 + -0x20 + lVar17);
      fVar39 = *(float *)(lVar26 + -0x1c + lVar17);
      fVar43 = *(float *)(lVar26 + 8 + lVar18);
      fVar36 = *(float *)(lVar26 + -0x18 + lVar17);
      fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar37 + fVar41 * fVar39;
      fVar46 = fVar46 + fVar46;
      *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar37;
      *(float *)(lVar26 + 4 + lVar18) = fVar41 * fVar46 - fVar39;
      *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
    }
    uVar19 = uVar12;
    if ((int)uVar12 < (int)uVar8) {
      do {
        iVar28 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar28 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar28 + 1U) {
          FUN_1447808da(param_3,iVar28);
          lVar25 = local_218;
          plVar23 = local_210;
        }
        *(uint *)(*param_3 + (longlong)iVar28 * 4) = uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar8 != uVar19);
    }
    uVar19 = *(uint *)(lVar25 + 300);
    if ((uVar19 & 8) == 0) {
      local_228 = &local_14c;
      local_230 = &local_170;
      local_238 = &local_160;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,uVar12);
      local_250 = uVar8;
      local_248 = iVar31;
      local_240 = fVar38;
      FUN_1449d50c8(lVar25 + 0x130,plVar30,plVar23,local_1b0);
    }
    else {
      local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
      local_160 = (int *)CONCAT44(local_160._4_4_,0x3f800000);
      local_14c = 0x3f800000;
    }
    if ((uVar19 & 0x10) != 0) goto LAB_143ab5934;
LAB_143ab5832:
    local_240 = fVar38;
    local_228 = &local_158;
    local_230 = (undefined8 *)&local_150;
    local_238 = (undefined8 *)&local_154;
    uVar32 = (undefined4)local_1e8;
    local_258 = (longlong *)CONCAT44(local_258._4_4_,uVar32);
    local_250 = uVar8;
    local_248 = iVar31;
    FUN_1449d50c8(local_218 + 0x158,plVar30,local_210,local_1b0);
  }
  else {
    iVar28 = *local_148;
    cVar2 = *(char *)((longlong)param_2 + 0x51);
    lVar25 = 0;
    if (cVar2 == '\0') {
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar38 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar38 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar38 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar25 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar38;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    else {
      do {
        *(undefined4 *)((longlong)&local_170 + lVar25 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar25 * 2 + 0x16) + (longlong)iVar28 * 4);
        lVar25 = lVar25 + 1;
      } while (lVar25 != 3);
    }
    fVar37 = local_168;
    fVar38 = (float)local_170;
    fVar41 = local_170._4_4_;
    iVar28 = (int)uStack_140;
    if ((int)uStack_140 < 2) {
      uVar21 = 1;
      fVar43 = 0.0;
      fVar39 = 0.0;
      local_208 = local_208 & 0xffffffff00000000;
      fVar52 = DAT_14c846338;
      fVar36 = (float)local_170;
      fVar46 = local_170._4_4_;
      fVar49 = local_168;
      fVar42 = (float)DAT_14c846330;
      fVar40 = DAT_14c846330._4_4_;
    }
    else {
      cVar3 = *(char *)((longlong)param_2 + 0x91);
      lVar25 = *(longlong *)(param_2 + 0x26);
      cVar4 = *(char *)((longlong)param_2 + 0x81);
      lVar26 = *(longlong *)(param_2 + 0x22);
      uVar21 = 1;
      do {
        lVar17 = (longlong)local_148[uVar21];
        lVar18 = 0;
        if (cVar2 == '\0') {
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar18 * 2 + 0x16) + lVar17 * 2);
            uVar19 = (uint)uVar5 << 0xd;
            if ((uVar19 & 0xf800000) == 0xf800000) {
              fVar39 = (float)(uVar19 | 0x70000000);
            }
            else if ((uVar19 & 0xf800000) == 0) {
              fVar39 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar39 = (float)((uVar19 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar18 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar39;
            lVar18 = lVar18 + 1;
          } while (lVar18 != 3);
        }
        else {
          do {
            *(undefined4 *)((longlong)&local_170 + lVar18 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar18 * 2 + 0x16) + lVar17 * 4);
            lVar18 = lVar18 + 1;
          } while (lVar18 != 3);
        }
        fVar49 = local_168;
        fVar36 = (float)local_170;
        fVar46 = local_170._4_4_;
        if (cVar3 == '\0') {
          uVar5 = *(ushort *)(lVar25 + lVar17 * 2);
          uVar19 = (uint)uVar5 << 0xd;
          if ((uVar19 & 0xf800000) == 0xf800000) {
            fVar39 = (float)(uVar19 | 0x70000000);
          }
          else if ((uVar19 & 0xf800000) == 0) {
            fVar39 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar39 = (float)((uVar19 & 0xfffe000) + 0x38000000);
          }
          fVar39 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar39);
        }
        else {
          fVar39 = *(float *)(lVar25 + lVar17 * 4);
        }
        if (cVar4 == '\0') {
          uVar5 = *(ushort *)(lVar26 + lVar17 * 2);
          uVar19 = (uint)uVar5 << 0xd;
          if ((uVar19 & 0xf800000) == 0xf800000) {
            fVar43 = (float)(uVar19 | 0x70000000);
          }
          else if ((uVar19 & 0xf800000) == 0) {
            fVar43 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar43 = (float)((uVar19 & 0xfffe000) + 0x38000000);
          }
          fVar43 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar43);
        }
        else {
          fVar43 = *(float *)(lVar26 + lVar17 * 4);
        }
        fVar52 = local_168 - fVar37;
        fVar40 = local_170._4_4_ - fVar41;
        fVar42 = (float)local_170 - fVar38;
        fVar44 = SQRT(fVar52 * fVar52 + fVar42 * fVar42 + fVar40 * fVar40);
        if (DAT_14c76298c < fVar44) {
          local_208 = CONCAT44(local_208._4_4_,fVar44);
          fVar44 = 1.0 / fVar44;
          *(uint *)(param_3 + 3) = uVar8 + 1;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8 + 1) {
            FUN_1447808da(plVar23,local_1e8);
          }
          *(int *)(param_3[2] + local_1a8 * 4) = *piVar6;
          lVar25 = param_3[5];
          uVar8 = (int)lVar25 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          iVar28 = (int)local_200;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            FUN_1449e2712(local_210);
            iVar28 = (int)local_200;
          }
          lVar26 = *local_210;
          lVar25 = (longlong)(int)lVar25 * 0x10;
          *(float *)(lVar26 + lVar25) = fVar42 * fVar44;
          *(float *)(lVar26 + 4 + lVar25) = fVar40 * fVar44;
          *(float *)(lVar26 + 8 + lVar25) = fVar52 * fVar44;
          *(undefined4 *)(lVar26 + 0xc + lVar25) = 0;
          fVar52 = fVar52 * fVar44;
          fVar42 = fVar42 * fVar44;
          fVar40 = fVar40 * fVar44;
          goto LAB_143ab3636;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_200);
      local_208 = (ulonglong)local_208._4_4_ << 0x20;
      uVar21 = local_200;
    }
LAB_143ab3636:
    iVar13 = (int)uVar21;
    plVar23 = local_210;
    lVar25 = local_218;
    if (iVar13 + 1 < iVar28) {
      fVar38 = 0.0;
      uVar1 = (uVar21 & 0xffffffff) + 1;
      uVar33 = uVar21;
      do {
        uVar29 = uVar1;
        lVar26 = (longlong)piVar6[uVar29];
        if (*(char *)((longlong)param_2 + 0x51) == '\0') {
          lVar18 = 0;
          do {
            uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar18 * 2 + 0x16) + lVar26 * 2);
            uVar8 = (uint)uVar5 << 0xd;
            if ((uVar8 & 0xf800000) == 0xf800000) {
              fVar41 = (float)(uVar8 | 0x70000000);
            }
            else if ((uVar8 & 0xf800000) == 0) {
              fVar41 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar41 = (float)((uVar8 & 0xfffe000) + 0x38000000);
            }
            *(uint *)((longlong)&local_170 + lVar18 * 4) =
                 (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
            lVar18 = lVar18 + 1;
            pdVar20 = local_1e0;
            plVar23 = local_210;
            lVar25 = local_218;
          } while (lVar18 != 3);
        }
        else {
          lVar18 = 0;
          do {
            *(undefined4 *)((longlong)&local_170 + lVar18 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + lVar18 * 2 + 0x16) + lVar26 * 4);
            lVar18 = lVar18 + 1;
          } while (lVar18 != 3);
        }
        if (*(char *)((longlong)param_2 + 0x91) == '\x01') {
          local_1f4 = *(float *)(*(longlong *)(param_2 + 0x26) + lVar26 * 4);
        }
        else {
          uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x26) + lVar26 * 2);
          uVar8 = (uint)uVar5 << 0xd;
          if ((uVar8 & 0xf800000) == 0xf800000) {
            local_1f4 = (float)(uVar8 | 0x70000000);
          }
          else if ((uVar8 & 0xf800000) == 0) {
            local_1f4 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
          }
          else {
            local_1f4 = (float)((uVar8 & 0xfffe000) + 0x38000000);
          }
          local_1f4 = (float)((int)(short)uVar5 & 0x80000000U | (uint)local_1f4);
          pdVar20 = local_1e0;
          plVar23 = local_210;
          lVar25 = local_218;
        }
        if (*(char *)((longlong)param_2 + 0x81) == '\x01') {
          local_1cc = *(float *)(*(longlong *)(param_2 + 0x22) + lVar26 * 4);
        }
        else {
          uVar5 = *(ushort *)(*(longlong *)(param_2 + 0x22) + lVar26 * 2);
          uVar8 = (uint)uVar5 << 0xd;
          if ((uVar8 & 0xf800000) == 0xf800000) {
            local_1cc = (float)(uVar8 | 0x70000000);
          }
          else if ((uVar8 & 0xf800000) == 0) {
            local_1cc = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
          }
          else {
            local_1cc = (float)((uVar8 & 0xfffe000) + 0x38000000);
          }
          local_1cc = (float)((int)(short)uVar5 & 0x80000000U | (uint)local_1cc);
          pdVar20 = local_1e0;
          plVar23 = local_210;
          lVar25 = local_218;
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,local_168);
        fVar37 = local_168 - fVar49;
        local_1d8 = CONCAT44(local_1d8._4_4_,local_170._4_4_);
        fVar45 = local_170._4_4_ - fVar46;
        local_1d0 = (float)local_170;
        fVar44 = (float)local_170 - fVar36;
        fVar41 = SQRT(fVar37 * fVar37 + fVar44 * fVar44 + fVar45 * fVar45);
        if ((DAT_14c76298c < fVar41) || ((int)uVar33 == iVar28 + -2)) {
          fVar36 = DAT_14c76298c;
          if (DAT_14c76298c <= fVar41) {
            fVar36 = fVar41;
          }
          fVar36 = 1.0 / fVar36;
          fVar44 = fVar44 * fVar36;
          fVar45 = fVar45 * fVar36;
          fVar37 = fVar37 * fVar36;
          fVar50 = fVar52 + fVar37;
          fVar49 = fVar40 + fVar45;
          fVar46 = fVar42 + fVar44;
          fVar36 = fVar50 * fVar50 + fVar46 * fVar46 + fVar49 * fVar49;
          if (((fVar36 != 1.0) || (fVar47 = fVar46, fVar48 = fVar49, fVar51 = fVar50, NAN(fVar36)))
             && (fVar47 = (float)DAT_14c846330, fVar48 = DAT_14c846330._4_4_, fVar51 = DAT_14c846338
                , 1e-08 <= fVar36)) {
            fVar36 = 1.0 / SQRT(fVar36);
            fVar47 = fVar46 * fVar36;
            fVar48 = fVar49 * fVar36;
            fVar51 = fVar50 * fVar36;
          }
          fVar36 = *(float *)(lVar25 + 0x124);
          if (0.99 <= fVar36) {
            fVar36 = 0.99;
          }
          lVar26 = param_3[3];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 3) = uVar8;
          local_19c = fVar42;
          if (*(uint *)((longlong)param_3 + 0x1c) < uVar8) {
            local_1bc = fVar40;
            local_1b8 = fVar43;
            local_1b4 = fVar39;
            local_1a0 = fVar38;
            FUN_1447808da(local_1f0);
            plVar23 = local_210;
            lVar25 = local_218;
            fVar38 = local_1a0;
            fVar39 = local_1b4;
            fVar43 = local_1b8;
            fVar40 = local_1bc;
          }
          fVar36 = 1.0 - fVar36;
          *(int *)(param_3[2] + (longlong)(int)lVar26 * 4) = piVar6[(int)uVar21];
          lVar26 = param_3[5];
          uVar8 = (int)lVar26 + 1;
          *(uint *)(param_3 + 5) = uVar8;
          if (*(uint *)((longlong)param_3 + 0x2c) < uVar8) {
            local_1bc = fVar40;
            local_1b8 = fVar43;
            local_1b4 = fVar39;
            FUN_1449e2712();
            plVar23 = local_210;
            lVar25 = local_218;
            fVar39 = local_1b4;
            fVar43 = local_1b8;
            fVar40 = local_1bc;
          }
          fVar38 = fVar38 + (float)local_208;
          lVar18 = param_3[4];
          lVar26 = (longlong)(int)lVar26 * 0x10;
          *(float *)(lVar18 + lVar26) = fVar47 * fVar36;
          *(float *)(lVar18 + 4 + lVar26) = fVar48 * fVar36;
          *(float *)(lVar18 + 8 + lVar26) = fVar51 * fVar36;
          *(float *)(lVar18 + 0xc + lVar26) = fVar38;
          *(float *)(param_3 + 0x15) = *(float *)(param_3 + 0x15) + fVar41;
          *(float *)((longlong)param_3 + 0xac) =
               fVar41 * fVar41 + *(float *)((longlong)param_3 + 0xac);
          fVar49 = fVar52 * fVar37 + local_19c * fVar44 + fVar40 * fVar45;
          uVar8 = -(uint)(0.0 <= fVar49);
          fVar49 = ABS(fVar49);
          fVar46 = 1.0 - fVar49;
          fVar36 = 0.0;
          if (0.0 <= fVar46) {
            fVar36 = fVar46;
          }
          fVar36 = SQRT(fVar36) * (fVar49 * -0.156583 + 1.5707964);
          *(float *)(param_3 + 0x16) =
               (float)(~uVar8 & (uint)(3.1415927 - fVar36) | (uint)fVar36 & uVar8) * fVar41 +
               *(float *)(param_3 + 0x16);
          *(float *)((longlong)param_3 + 0xb4) =
               ABS(local_1f4 - fVar39) * fVar41 + *(float *)((longlong)param_3 + 0xb4);
          *(float *)(param_3 + 0x17) = fVar43 * fVar41 + *(float *)(param_3 + 0x17);
          uVar21 = uVar29 & 0xffffffff;
          local_208 = CONCAT44(local_208._4_4_,fVar41);
          fVar52 = fVar37;
          fVar40 = fVar45;
          fVar36 = local_1d0;
          fVar46 = (float)local_1d8;
          fVar49 = (float)local_1c8;
          fVar42 = fVar44;
          fVar39 = local_1f4;
          fVar43 = local_1cc;
        }
        else {
          fVar41 = (float)local_208;
        }
        iVar13 = (int)uVar21;
        uVar1 = uVar29 + 1;
        uVar33 = uVar29;
      } while ((int)(uVar29 + 1) < (int)local_200);
    }
    else {
      fVar38 = 0.0;
      fVar41 = (float)local_208;
    }
    iVar28 = (int)param_3[3];
    if (fVar41 <= 0.0) {
      iVar13 = (int)local_1e8;
    }
    else {
      *(uint *)(param_3 + 3) = iVar28 + 1U;
      if (*(uint *)((longlong)param_3 + 0x1c) < iVar28 + 1U) {
        FUN_1447808da(local_1f0);
        plVar23 = local_210;
        lVar25 = local_218;
      }
      fVar38 = fVar38 + fVar41;
      *(int *)(param_3[2] + (longlong)iVar28 * 4) = piVar6[iVar13];
      iVar28 = (int)param_3[5];
      *(uint *)(param_3 + 5) = iVar28 + 1U;
      iVar13 = (int)local_1e8;
      if (*(uint *)((longlong)param_3 + 0x2c) < iVar28 + 1U) {
        FUN_1449e2712(plVar23,iVar28);
        plVar23 = local_210;
        lVar25 = local_218;
      }
      lVar26 = param_3[4];
      lVar18 = (longlong)iVar28 * 0x10;
      *(float *)(lVar26 + lVar18) = fVar42;
      *(float *)(lVar26 + 4 + lVar18) = fVar40;
      *(float *)(lVar26 + 8 + lVar18) = fVar52;
      *(float *)(lVar26 + 0xc + lVar18) = fVar38;
      iVar28 = (int)param_3[3];
      pdVar20 = local_1e0;
    }
    plVar30 = local_1f0;
    uVar8 = iVar28 - 1;
    iVar31 = uVar8 - iVar13;
    if (iVar31 == 0 || (int)uVar8 < iVar13) goto LAB_143ab6075;
    if ((double *)param_3[0x13] != (double *)0x0) {
      pdVar20 = (double *)param_3[0x13];
    }
    iVar13 = *piVar6;
    if (*(char *)((longlong)param_2 + 0x51) == '\0') {
      lVar26 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar41 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar26 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
        lVar26 = lVar26 + 1;
        plVar23 = local_210;
        lVar25 = local_218;
      } while (lVar26 != 3);
    }
    else {
      lVar26 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 4);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
    }
    *pdVar20 = (double)(float)local_170;
    pdVar20[1] = (double)local_170._4_4_;
    pdVar20[2] = (double)local_168;
    iVar13 = piVar6[(int)local_200 + -1];
    if (*(char *)((longlong)param_2 + 0x51) == '\0') {
      lVar26 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 2);
        uVar19 = (uint)uVar5 << 0xd;
        if ((uVar19 & 0xf800000) == 0xf800000) {
          fVar41 = (float)(uVar19 | 0x70000000);
        }
        else if ((uVar19 & 0xf800000) == 0) {
          fVar41 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar41 = (float)((uVar19 & 0xfffe000) + 0x38000000);
        }
        *(uint *)((longlong)&local_170 + lVar26 * 4) =
             (int)(short)uVar5 & 0x80000000U | (uint)fVar41;
        lVar26 = lVar26 + 1;
        plVar23 = local_210;
        lVar25 = local_218;
      } while (lVar26 != 3);
    }
    else {
      lVar26 = 0;
      do {
        *(undefined4 *)((longlong)&local_170 + lVar26 * 4) =
             *(undefined4 *)(*(longlong *)(param_2 + lVar26 * 2 + 0x16) + (longlong)iVar13 * 4);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
    }
    pdVar20[3] = (double)(float)local_170;
    pdVar20[4] = (double)local_170._4_4_;
    pdVar20[5] = (double)local_168;
    *(int *)(pdVar20 + 6) = (int)param_3[1];
    *(int *)((longlong)pdVar20 + 0x34) = iVar31;
    if (iVar31 != 1) {
      lVar26 = *plVar23;
      lVar18 = local_1a8 * 0x10;
      fVar41 = *(float *)(lVar26 + 0x10 + lVar18);
      fVar37 = *(float *)(lVar26 + 4 + lVar18);
      fVar39 = *(float *)(lVar26 + 0x14 + lVar18);
      fVar43 = *(float *)(lVar26 + 8 + lVar18);
      fVar36 = *(float *)(lVar26 + 0x18 + lVar18);
      fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar41 + fVar37 * fVar39;
      fVar46 = fVar46 + fVar46;
      *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar41;
      *(float *)(lVar26 + 4 + lVar18) = fVar37 * fVar46 - fVar39;
      *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
      lVar26 = *plVar23;
      lVar18 = (longlong)(int)uVar8 * 0x10;
      lVar17 = (longlong)iVar28 * 0x10;
      fVar41 = *(float *)(lVar26 + 4 + lVar18);
      fVar37 = *(float *)(lVar26 + -0x20 + lVar17);
      fVar39 = *(float *)(lVar26 + -0x1c + lVar17);
      fVar43 = *(float *)(lVar26 + 8 + lVar18);
      fVar36 = *(float *)(lVar26 + -0x18 + lVar17);
      fVar46 = fVar43 * fVar36 + *(float *)(lVar26 + lVar18) * fVar37 + fVar41 * fVar39;
      fVar46 = fVar46 + fVar46;
      *(float *)(lVar26 + lVar18) = fVar46 * *(float *)(lVar26 + lVar18) - fVar37;
      *(float *)(lVar26 + 4 + lVar18) = fVar41 * fVar46 - fVar39;
      *(float *)(lVar26 + 8 + lVar18) = fVar43 * fVar46 - fVar36;
    }
    iVar28 = (int)local_1e8;
    if (iVar28 < (int)uVar8) {
      uVar21 = local_1e8 & 0xffffffff;
      do {
        iVar13 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
          FUN_1447808da(param_3,iVar13,plVar23);
          plVar23 = local_210;
          lVar25 = local_218;
        }
        *(int *)(*param_3 + (longlong)iVar13 * 4) = (int)uVar21;
        uVar19 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar19;
      } while (uVar8 != uVar19);
    }
    uVar19 = *(uint *)(lVar25 + 300);
    if ((uVar19 & 8) == 0) {
      local_228 = &local_14c;
      local_230 = &local_170;
      local_238 = &local_160;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,iVar28);
      local_250 = uVar8;
      local_248 = iVar31;
      local_240 = fVar38;
      FUN_1449d50c8(lVar25 + 0x130,plVar30,plVar23,local_1b0);
    }
    else {
      local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
      local_160 = (int *)CONCAT44(local_160._4_4_,0x3f800000);
      local_14c = 0x3f800000;
    }
    if ((uVar19 & 0x10) == 0) goto LAB_143ab5832;
LAB_143ab5934:
    local_150 = 0;
    local_158 = 0x3f800000;
    local_154 = 0x3f800000;
    uVar32 = (undefined4)local_1e8;
  }
  *(undefined4 *)(pdVar20 + 7) = (undefined4)local_160;
  *(float *)((longlong)pdVar20 + 0x3c) = (float)local_170;
  *(int *)(pdVar20 + 8) = local_14c;
  *(undefined4 *)((longlong)pdVar20 + 0x44) = local_154;
  *(undefined4 *)(pdVar20 + 9) = local_150;
  *(int *)((longlong)pdVar20 + 0x4c) = local_158;
  *(undefined4 *)(pdVar20 + 10) = uVar32;
  *(uint *)((longlong)pdVar20 + 0x54) = uVar8;
  lVar25 = local_218;
LAB_143ab6075:
  fVar38 = *(float *)(param_3 + 0x15);
  if (fVar38 <= 0.0) {
    *(undefined8 *)(lVar25 + 0x3c0) = 0;
    *(undefined8 *)(lVar25 + 0x3c8) = 0;
    *(undefined4 *)(lVar25 + 0x3d0) = 0;
  }
  else {
    fVar41 = 1.0;
    if (1.0 <= fVar38) {
      fVar41 = fVar38;
    }
    fVar41 = 1.0 / fVar41;
    fVar39 = *(float *)(lVar25 + 0x3d0) / (fVar38 + *(float *)(lVar25 + 0x3d0));
    *(float *)(lVar25 + 0x3d0) = fVar38;
    fVar38 = *(float *)(param_3 + 0x16);
    *(float *)(param_3 + 0x16) = fVar38 * fVar41;
    fVar43 = *(float *)((longlong)param_3 + 0xac) * fVar41;
    *(float *)((longlong)param_3 + 0xac) = fVar43;
    fVar37 = sinf(fVar38 * fVar41);
    fVar38 = 1e-08;
    if (1e-08 <= ABS(fVar37)) {
      fVar38 = ABS(fVar37);
    }
    fVar43 = fVar43 / fVar38;
    fVar38 = *(float *)(param_3 + 0x16);
    fVar37 = *(float *)(local_218 + 0x3c0);
    if (*(float *)(local_218 + 0x3c0) <= fVar38) {
      fVar37 = fVar38;
    }
    *(float *)(local_218 + 0x3c0) = (fVar37 - fVar38) * fVar39 + fVar38;
    fVar38 = *(float *)(local_218 + 0x3c4);
    if (*(float *)(local_218 + 0x3c4) <= fVar43) {
      fVar38 = fVar43;
    }
    *(float *)(local_218 + 0x3c4) = (fVar38 - fVar43) * fVar39 + fVar43;
    if ((*(byte *)(local_218 + 300) & 4) != 0) {
      fVar37 = *(float *)((longlong)param_3 + 0xb4) * fVar41;
      *(float *)((longlong)param_3 + 0xb4) = fVar37;
      *(float *)(param_3 + 0x17) = fVar41 * *(float *)(param_3 + 0x17);
      fVar38 = *(float *)(local_218 + 0x3c8);
      if (*(float *)(local_218 + 0x3c8) <= fVar37) {
        fVar38 = fVar37;
      }
      *(float *)(local_218 + 0x3c8) = (fVar38 - fVar37) * fVar39 + fVar37;
      fVar38 = *(float *)(param_3 + 0x17);
      fVar41 = *(float *)(local_218 + 0x3cc);
      if (*(float *)(local_218 + 0x3cc) <= fVar38) {
        fVar41 = fVar38;
      }
      *(float *)(local_218 + 0x3cc) = (fVar41 - fVar38) * fVar39 + fVar38;
    }
  }
  if (local_180 == '\0') {
    local_180 = '\x01';
    *(int *)(local_198 + 4) = *(int *)(local_198 + 4) + -1;
    if (local_188 != local_198[2]) {
      FUN_14004673c();
    }
    *local_198 = local_190;
    local_198[3] = local_178;
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ab62fc FUN_143ab62fc body=2766 status=ok
// SIG undefined FUN_143ab62fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ab62fc(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  undefined8 *local_348;
  undefined1 local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
  longlong local_310;
  undefined8 *local_308;
  longlong *local_300;
  undefined8 local_2f8;
  int *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 *local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  longlong local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  uint uStack_248;
  uint uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  byte bStack_22f;
  undefined2 uStack_22e;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 *local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  byte local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  longlong local_198;
  longlong local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(int *)(DAT_14cb42c00 + 4) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar17 = param_3[0x5f];
    if (lVar6 != 0 && lVar17 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x110);
      plVar12 = *(longlong **)(lVar6 + 0x28);
      if (plVar12 == (longlong *)0x0) {
        lVar8 = *(longlong *)(lVar6 + 0x20);
      }
      else {
        lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar7,0);
      }
      if ((((lVar8 != 0) && (DAT_14c762990 != 0)) && (*(char *)(lVar6 + 0x41) == '\0')) &&
         (((1 < *(uint *)(lVar8 + 0x120) && (*(char *)(lVar6 + 0x40) == '\0')) &&
          ((*(longlong *)(lVar6 + 0x48) != 0 && (0 < *(int *)(*(longlong *)(lVar6 + 0x48) + 8)))))))
      {
        local_2f0 = (int *)(lVar8 + 0x120);
        local_300 = (longlong *)(lVar6 + 0x48);
        local_318 = *(longlong **)(param_2 + 0x148);
        local_310 = local_318[1];
        local_1c8 = local_318[0x20b];
        local_1d8 = (undefined4)local_318[0x209];
        uStack_1d4 = *(undefined4 *)((longlong)local_318 + 0x104c);
        uStack_1d0 = (undefined4)local_318[0x20a];
        uStack_1cc = *(undefined4 *)((longlong)local_318 + 0x1054);
        local_338 = *(longlong **)(param_2 + 0xe8);
        puVar15 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xea8);
        puVar9 = (uint *)*puVar15;
        local_320 = uVar7;
        if (puVar9 != (uint *)0x0) goto LAB_143ab6463;
        while( true ) {
          FUN_14472e504(puVar15);
          puVar9 = (uint *)*puVar15;
LAB_143ab6463:
          puVar19 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          uVar16 = puVar9[0x12];
          if (puVar19 + 5 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar1 = *puVar9;
            *puVar9 = *puVar9 + uVar16 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar16) != 0xffffffff) break;
            puVar9 = (uint *)*puVar15;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar15 = puVar9;
            puVar19 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            uVar16 = 0;
            if (puVar19 + 5 <= puVar9 + 0x4000) {
              uVar16 = 1;
              goto LAB_143ab64db;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_143ab64db:
        *(undefined8 **)(puVar9 + 0x10) = puVar19 + 6;
        puVar9[0x12] = uVar16;
        *(int *)(puVar19 + -1) = ((int)puVar19 + -8) - (int)puVar9;
        *(undefined4 *)((longlong)puVar19 + -4) = 0x28;
        puVar19[1] = 0;
        *puVar19 = &PTR_FUN_14ae0ed60;
        lVar10 = *local_338;
        do {
          puVar19[1] = lVar10;
          LOCK();
          lVar11 = *local_338;
          bVar21 = lVar10 == lVar11;
          if (bVar21) {
            *local_338 = (longlong)puVar19;
            lVar11 = lVar10;
          }
          UNLOCK();
          lVar10 = lVar11;
        } while (!bVar21);
        local_308 = puVar19 + 2;
        FUN_141835b1a();
        local_330 = (longlong *)puVar19[3];
        plVar12 = (longlong *)FUN_14001cc68(0x1b8);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_14ae0ee20;
        memset(plVar12 + 3,0,0x1a0);
        *(undefined4 *)(plVar12 + 3) = 0xffffffff;
        *(undefined2 *)((longlong)plVar12 + 0x1c) = 0x105;
        plVar12[0x14] = 0;
        *(undefined4 *)((longlong)plVar12 + 0xac) = 8;
        plVar12[0x1b] = 0x200000000;
        plVar12[0x23] = 0x300000000;
        plVar12[0x24] = 0;
        plVar12[0x25] = 0;
        plVar12[0x26] = 0;
        *(undefined2 *)(plVar12 + 0x27) = 0xffff;
        *(undefined1 *)((longlong)plVar12 + 0x13a) = 0xff;
        plVar12[2] = (longlong)&PTR_FUN_14ae0ee40;
        plVar12[0x28] = 0;
        plVar12[0x29] = 0;
        plVar12[0x2a] = 0;
        plVar12[0x2b] = 0;
        plVar12[0x2c] = 0;
        plVar12[0x2d] = 0;
        plVar12[0x2e] = 0;
        plVar12[0x2f] = 0;
        plVar12[0x30] = 0;
        plVar12[0x31] = 0;
        plVar12[0x32] = 0;
        plVar12[0x33] = 0;
        plVar12[0x34] = 0;
        plVar12[0x35] = 0;
        *(undefined1 *)(plVar12 + 0x36) = 1;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_328 = plVar12 + 2;
        iVar4 = (int)local_330[1];
        *(uint *)(local_330 + 1) = iVar4 + 1U;
        local_338 = plVar12;
        if (*(uint *)((longlong)local_330 + 0xc) < iVar4 + 1U) {
          FUN_141835bf0(local_330,iVar4);
        }
        lVar10 = *local_330;
        *(longlong **)(lVar10 + (longlong)iVar4 * 0x10) = local_328;
        *(longlong **)(lVar10 + 8 + (longlong)iVar4 * 0x10) = local_338;
        if (local_338 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_338 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_338)(local_338);
            LOCK();
            piVar18 = (int *)((longlong)local_338 + 0xc);
            *piVar18 = *piVar18 + -1;
            UNLOCK();
            if (*piVar18 == 0) {
              (**(code **)(*local_338 + 0x10))();
            }
          }
        }
        local_350 = (longlong *)CONCAT71(local_350._1_7_,*(undefined1 *)(lVar6 + 0x40));
        local_358 = (longlong *)&local_1d8;
        local_360 = local_318;
        local_368 = param_3;
        FUN_143ab0db6(param_1,&local_138,local_300,lVar8);
        *(undefined4 *)(local_338 + 0x34) = local_118;
        *(undefined4 *)((longlong)local_338 + 0x1a4) = uStack_114;
        *(undefined4 *)(local_338 + 0x35) = uStack_110;
        *(undefined4 *)((longlong)local_338 + 0x1ac) = uStack_10c;
        *(undefined4 *)(local_338 + 0x32) = local_128;
        *(undefined4 *)((longlong)local_338 + 0x194) = uStack_124;
        *(undefined4 *)(local_338 + 0x33) = uStack_120;
        *(undefined4 *)((longlong)local_338 + 0x19c) = uStack_11c;
        *(undefined4 *)(local_338 + 0x30) = (undefined4)local_138;
        *(undefined4 *)((longlong)local_338 + 0x184) = local_138._4_4_;
        *(undefined4 *)(local_338 + 0x31) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)local_338 + 0x18c) = uStack_130._4_4_;
        if ((DAT_14cb2c8a1 & 4) != 0) {
          local_330 = local_338 + 0x30;
          local_2f8 = FUN_140c7d77a(lVar17);
          uVar2 = *(undefined1 *)(lVar6 + 0x40);
          local_138 = local_308[1];
          plVar12 = (longlong *)local_308[2];
          local_360 = &local_138;
          uStack_130 = plVar12;
          if (plVar12 == (longlong *)0x0) {
            local_368 = *(longlong **)(param_2 + 0x108);
            local_358 = (longlong *)CONCAT71(local_358._1_7_,uVar2);
            FUN_1402bcb02(param_1,local_320,lVar6,lVar8);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            local_368 = *(longlong **)(param_2 + 0x108);
            local_358 = (longlong *)CONCAT71(local_358._1_7_,uVar2);
            FUN_1402bcb02(param_1,local_320,lVar6,lVar8);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar12 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar18 = (int *)((longlong)plVar12 + 0xc);
                *piVar18 = *piVar18 + -1;
                UNLOCK();
                if (*piVar18 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          plVar20 = local_318;
          plVar14 = local_330;
          local_348 = (undefined8 *)&local_1d8;
          local_350 = local_318;
          local_358 = local_328;
          local_368 = local_330;
          local_360 = (longlong *)lVar6;
          FUN_14498c500(param_1,local_320,local_2f8,param_2);
          plVar12 = local_338;
          local_360 = local_338 + 0x2b;
          local_368 = param_3;
          FUN_1418343a2(param_1,plVar14,plVar20,local_310);
          if ((int)plVar12[0x35] != 0) {
            uStack_240 = 0;
            uStack_23c = 0;
            uStack_238 = 0;
            local_250 = 0;
            uStack_248 = 0;
            uStack_244 = 0;
            uStack_230 = 0xff;
            bStack_22f = bStack_22f & 0xe0;
            uStack_22e = 0;
            uStack_22c = 0x100;
            uStack_228 = 0;
            local_1e0 = 0;
            local_310 = param_1 + 0x40;
            local_220 = 0;
            uStack_218 = 0;
            uStack_214 = 0;
            local_210 = 0;
            uStack_20c = 0;
            uStack_208 = 0;
            local_200 = (undefined8 *)0x0;
            uStack_1f4 = 0;
            local_1f0 = 0;
            uStack_1ec = 0;
            uStack_1f8 = 1;
            local_258 = local_310;
            FUN_140518214(&local_200,0);
            puVar15 = &DAT_14c846400;
            puVar19 = local_200;
            for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
              *puVar19 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar19 = puVar19 + 1;
            }
            lVar17 = *(longlong *)(local_338[0x2c] + 0x10);
            lVar8 = *(longlong *)(param_1 + 0x80);
            if (lVar8 != lVar17) {
              *(longlong *)(param_1 + 0x80) = lVar17;
              if (lVar17 != 0) {
                LOCK();
                *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
                UNLOCK();
              }
              if (lVar8 != 0) {
                LOCK();
                puVar9 = (uint *)(lVar8 + 8);
                uVar16 = *puVar9;
                *puVar9 = *puVar9 - 1;
                UNLOCK();
                if ((uVar16 & 0x3fffffff) == 1) {
                  puVar9 = (uint *)(lVar8 + 8);
                  LOCK();
                  uVar16 = *puVar9;
                  *puVar9 = *puVar9 | 0x40000000;
                  UNLOCK();
                  if ((uVar16 >> 0x1e & 1) == 0) {
                    bVar3 = *(byte *)(lVar8 + 0xd);
                    plVar13 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar13[1] = lVar8;
                    plVar12 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c8;
                    plVar20 = local_318;
                    if ((bVar3 & 2) == 0) {
                      do {
                        *plVar13 = (longlong)plVar12;
                        LOCK();
                        bVar21 = plVar12 != DAT_14ca843c0;
                        plVar14 = plVar13;
                        if (bVar21) {
                          plVar12 = DAT_14ca843c0;
                          plVar14 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar14;
                        UNLOCK();
                      } while (bVar21);
                    }
                    else {
                      do {
                        *plVar13 = (longlong)plVar14;
                        LOCK();
                        bVar21 = plVar14 != DAT_14ca843c8;
                        plVar12 = plVar13;
                        if (bVar21) {
                          plVar14 = DAT_14ca843c8;
                          plVar12 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar12;
                        UNLOCK();
                      } while (bVar21);
                    }
                  }
                }
              }
            }
            *(int *)(param_1 + 0x88) =
                 *(int *)(*(longlong *)(local_338[0x2c] + 0x10) + 0x24) *
                 *(int *)(local_338[0x2c] + 0x18);
            FUN_1481d4e2a(&local_138);
            local_340 = *(undefined1 *)(lVar6 + 0x40);
            local_268 = local_308[1];
            plVar12 = (longlong *)local_308[2];
            local_368 = plVar20;
            local_360 = param_3;
            local_348 = &local_138;
            local_260 = plVar12;
            if (plVar12 == (longlong *)0x0) {
              local_350 = local_328;
              local_358 = &local_268;
              FUN_143ab1432(param_1,local_320,local_330,lVar6);
            }
            else {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              local_358 = &local_268;
              local_350 = local_328;
              FUN_143ab1432(param_1,local_320,local_330,lVar6);
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar12 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar18 = (int *)((longlong)plVar12 + 0xc);
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (*piVar18 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
              }
            }
            uVar16 = uStack_248;
            lVar17 = (longlong)(int)uStack_248;
            uStack_248 = uStack_248 + 1;
            if (uStack_244 < uStack_248) {
              FUN_147471df6(&local_250,uVar16);
            }
            iVar4 = local_88;
            lVar17 = lVar17 * 0xf0;
            lVar8 = local_250 + lVar17;
            *(undefined8 *)(local_250 + 0xa8 + lVar17) = 0;
            *(int *)(local_250 + 0xb0 + lVar17) = local_88;
            if (local_88 == 0) {
              *(undefined4 *)(lVar8 + 0xb4) = 1;
            }
            else {
              puVar15 = local_90;
              if (local_90 == (undefined8 *)0x0) {
                puVar15 = &local_138;
              }
              FUN_14473945a(lVar8,local_88,0);
              lVar17 = *(longlong *)(lVar8 + 0xa8);
              if (*(longlong *)(lVar8 + 0xa8) == 0) {
                lVar17 = lVar8;
              }
              FUN_1447393f1(lVar17,puVar15,iVar4);
            }
            uVar16 = uStack_248;
            lVar17 = local_250;
            *(undefined1 *)(lVar8 + 0xe8) = local_50;
            *(undefined4 *)(lVar8 + 0xd8) = local_60;
            *(undefined4 *)(lVar8 + 0xdc) = uStack_5c;
            *(undefined4 *)(lVar8 + 0xe0) = uStack_58;
            *(undefined4 *)(lVar8 + 0xe4) = uStack_54;
            *(undefined4 *)(lVar8 + 200) = local_70;
            *(undefined4 *)(lVar8 + 0xcc) = uStack_6c;
            *(undefined4 *)(lVar8 + 0xd0) = uStack_68;
            *(undefined4 *)(lVar8 + 0xd4) = uStack_64;
            *(undefined4 *)(lVar8 + 0xb8) = local_80;
            *(undefined4 *)(lVar8 + 0xbc) = uStack_7c;
            *(undefined4 *)(lVar8 + 0xc0) = uStack_78;
            *(undefined4 *)(lVar8 + 0xc4) = uStack_74;
            lVar8 = 0;
            if (*(int *)(param_1 + 0x28) != 0) {
              lVar8 = param_1 + 0x10;
            }
            local_1a8 = *(byte *)(lVar6 + 0x40);
            piVar18 = local_2f0;
            if (local_1a8 == 0) {
              piVar18 = (int *)(*local_300 + 0x18);
            }
            iVar4 = *piVar18;
            local_328 = (longlong *)CONCAT44(local_328._4_4_,(int)local_338[0x31]);
            iVar5 = *(int *)((longlong)local_338 + 0x18c);
            local_338 = (longlong *)CONCAT44(local_338._4_4_,*(undefined4 *)(param_1 + 0x254));
            local_1b8 = 0;
            local_1b0 = uStack_248;
            if (uStack_248 == 0) {
              local_1ac = 0;
            }
            else {
              FUN_147471e8a(&local_1b8,uStack_248,0);
              FUN_147471efc(local_1b8,lVar17,uVar16);
              local_1a8 = *(byte *)(lVar6 + 0x40);
            }
            local_1a0 = iVar4 * 0xc;
            if ((local_1a8 & 1) == 0) {
              puVar15 = local_90;
              if (local_90 == (undefined8 *)0x0) {
                puVar15 = &local_138;
              }
              local_19c = *(int *)((longlong)puVar15 + 0x5c);
            }
            else {
              local_19c = iVar5 * (int)local_328 * (int)local_338;
            }
            local_198 = local_310;
            local_188 = 1;
            local_184 = 0;
            local_178 = _DAT_14c846250;
            uStack_170 = DAT_14c846258;
            local_168 = _DAT_14c846260;
            uStack_160 = _DAT_14c846268;
            local_158 = _DAT_14c846270;
            uStack_150 = _DAT_14c846278;
            local_148 = DAT_14c846280;
            uStack_144 = DAT_14c846284;
            uStack_140 = DAT_14c846288;
            uStack_13c = DAT_14c84628c;
            local_1a4 = iVar4;
            local_190 = lVar8;
            FUN_147ceea5a(param_2);
            local_2e8 = local_258;
            uStack_2d8 = CONCAT44(uStack_244,uStack_248);
            local_2e0 = local_250;
            local_250 = 0;
            uStack_248 = 0;
            uStack_244 = 0;
            local_2d0 = CONCAT44(uStack_23c,uStack_240);
            uStack_2c0 = CONCAT22(uStack_22e,CONCAT11(bStack_22f,uStack_230));
            uStack_2bc = CONCAT22(uStack_22a,uStack_22c);
            _uStack_2c8 = CONCAT44(uStack_234,uStack_238);
            uStack_2b8 = uStack_228;
            local_2b0 = (undefined4)local_220;
            uStack_2ac = local_220._4_4_;
            uStack_2a8 = uStack_218;
            uStack_2a4 = uStack_214;
            local_220 = 0;
            uStack_218 = 0;
            uStack_214 = 0;
            local_2a0 = CONCAT44(uStack_20c,local_210);
            uStack_298 = CONCAT44(uStack_204,uStack_208);
            local_290 = local_200;
            local_200 = (undefined8 *)0x0;
            local_288 = uStack_1f8;
            local_284 = uStack_1f4;
            uStack_1f8 = 0;
            uStack_1f4 = 0;
            local_280 = local_1f0;
            uStack_27c = (undefined4)uStack_1ec;
            uStack_278 = uStack_1ec._4_4_;
            uStack_274 = uStack_1e4;
            local_270 = local_1e0;
            local_1e0 = 0;
            FUN_147cee9b0(param_2);
            puVar15 = &local_138;
            if (local_90 != (undefined8 *)0x0) {
              puVar15 = local_90;
            }
            FUN_1446fc26f(puVar15,local_88);
            if (local_90 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1472aaabe(&local_258);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ab6ea6 FUN_143ab6ea6 body=67 status=ok
// SIG undefined FUN_143ab6ea6(void)

void FUN_143ab6ea6(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (((-1 < (int)param_2) && (param_3 != (longlong *)0x0)) &&
     ((int)param_2 < *(int *)(param_1 + 0x78))) {
    uVar1 = (**(code **)(*param_3 + 0x2f0))(param_3);
    lVar2 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    *(undefined8 *)(lVar2 + (ulonglong)param_2 * 8) = uVar1;
  }
  return;
}



// FUNCTION 143ab6f64 FUN_143ab6f64 body=39 status=ok
// SIG undefined FUN_143ab6f64(void)

void FUN_143ab6f64(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) && (param_3 != (longlong *)0x0)) {
    uVar1 = (**(code **)(*param_3 + 0x2f0))(param_3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



// FUNCTION 143ab6f8c FUN_143ab6f8c body=29 status=ok
// SIG undefined FUN_143ab6f8c(void)

undefined8 FUN_143ab6f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab6fbe FUN_143ab6fbe body=93 status=ok
// SIG undefined FUN_143ab6fbe(void)

void FUN_143ab6fbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ab701c FUN_143ab701c body=93 status=ok
// SIG undefined FUN_143ab701c(void)

void FUN_143ab701c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ab707a FUN_143ab707a body=126 status=ok
// SIG undefined FUN_143ab707a(void)

void FUN_143ab707a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae0e8a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0e830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab70e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ab7102 FUN_143ab7102 body=20 status=ok
// SIG undefined FUN_143ab7102(void)

undefined1 FUN_143ab7102(longlong param_1)

{
  FUN_143ab7116(param_1 + 0x18);
  return 1;
}



// FUNCTION 143ab7116 FUN_143ab7116 body=166 status=ok
// SIG undefined FUN_143ab7116(void)

void FUN_143ab7116(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  lVar2 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xd0));
  iVar1 = *(int *)(lVar2 + 0xe0);
  *(uint *)(lVar2 + 0xe0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xe4) < iVar1 + 1U) {
    FUN_14493950a((longlong *)(lVar2 + 0xd8),iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xd8);
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = local_30;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = local_38;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143ab71b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xd0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab71be FUN_143ab71be body=29 status=ok
// SIG undefined FUN_143ab71be(void)

undefined8 FUN_143ab71be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab71f0 FUN_143ab71f0 body=93 status=ok
// SIG undefined FUN_143ab71f0(void)

void FUN_143ab71f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0e980;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ab724e FUN_143ab724e body=93 status=ok
// SIG undefined FUN_143ab724e(void)

void FUN_143ab724e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0e980;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ab72ac FUN_143ab72ac body=126 status=ok
// SIG undefined FUN_143ab72ac(void)

void FUN_143ab72ac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae0e980;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0e910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab731b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ab7334 FUN_143ab7334 body=20 status=ok
// SIG undefined FUN_143ab7334(void)

undefined1 FUN_143ab7334(longlong param_1)

{
  FUN_143ab7348(param_1 + 0x18);
  return 1;
}



// FUNCTION 143ab7348 FUN_143ab7348 body=170 status=ok
// SIG undefined FUN_143ab7348(void)

void FUN_143ab7348(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  lVar3 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd0));
  iVar2 = *(int *)(lVar3 + 0xf0);
  *(uint *)(lVar3 + 0xf0) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xf4) < iVar2 + 1U) {
    FUN_1402af03a((longlong *)(lVar3 + 0xe8),iVar2);
  }
  lVar4 = *(longlong *)(lVar3 + 0xe8);
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = local_38;
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143ab73e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab73f4 FUN_143ab73f4 body=29 status=ok
// SIG undefined FUN_143ab73f4(void)

undefined8 FUN_143ab73f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab7426 FUN_143ab7426 body=85 status=ok
// SIG undefined FUN_143ab7426(void)

void FUN_143ab7426(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e9f0;
  return;
}



// FUNCTION 143ab747c FUN_143ab747c body=85 status=ok
// SIG undefined FUN_143ab747c(void)

void FUN_143ab747c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0e9f0;
  return;
}



// FUNCTION 143ab74d2 FUN_143ab74d2 body=118 status=ok
// SIG undefined FUN_143ab74d2(void)

void FUN_143ab74d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0e9f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab7539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ab7550 FUN_143ab7550 body=19 status=ok
// SIG undefined FUN_143ab7550(void)

undefined1 FUN_143ab7550(undefined8 param_1,undefined8 param_2)

{
  FUN_143ab7564(param_2);
  return 1;
}



// FUNCTION 143ab7564 FUN_143ab7564 body=219 status=ok
// SIG undefined FUN_143ab7564(void)

void FUN_143ab7564(longlong *param_1)

{
  wint_t _C;
  bool bVar1;
  int iVar2;
  uint uVar3;
  wchar_t *_Str;
  bool bVar4;
  wint_t *pwVar5;
  
  if ((int)param_1[1] != 1) {
    if (((int)param_1[1] != 0) || (uVar3 = 0xffffffff, DAT_14c762938 == 0xffffffff)) {
      return;
    }
LAB_143ab7615:
    DAT_14c762948 = 0xffffffff;
    DAT_14cb425e8 = DAT_14c75b13c;
    DAT_14c762938 = uVar3;
    FUN_140809a92();
    return;
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    pwVar5 = &DAT_149dfb77a;
  }
  else {
    pwVar5 = *(wint_t **)*param_1;
  }
  if ((*pwVar5 == 0x2d) || (*pwVar5 == 0x2b)) {
    pwVar5 = pwVar5 + 1;
  }
  bVar4 = false;
  do {
    _C = *pwVar5;
    if (_C == 0x2e) {
      bVar1 = true;
      if (bVar4) {
        return;
      }
    }
    else {
      if (_C == 0) {
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)*param_1;
        }
        uVar3 = _wtoi(_Str);
        if (4 < uVar3) {
          return;
        }
        if (DAT_14c762938 == uVar3) {
          return;
        }
        goto LAB_143ab7615;
      }
      iVar2 = iswdigit(_C);
      bVar1 = bVar4;
      if (iVar2 == 0) {
        return;
      }
    }
    bVar4 = bVar1;
    pwVar5 = pwVar5 + 1;
  } while( true );
}



// FUNCTION 143ab7640 FUN_143ab7640 body=29 status=ok
// SIG undefined FUN_143ab7640(void)

undefined8 FUN_143ab7640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab7672 FUN_143ab7672 body=85 status=ok
// SIG undefined FUN_143ab7672(void)

void FUN_143ab7672(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0ea60;
  return;
}



// FUNCTION 143ab76c8 FUN_143ab76c8 body=85 status=ok
// SIG undefined FUN_143ab76c8(void)

void FUN_143ab76c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0ea60;
  return;
}



// FUNCTION 143ab771e FUN_143ab771e body=118 status=ok
// SIG undefined FUN_143ab771e(void)

void FUN_143ab771e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0ea60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab7785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ab779c FUN_143ab779c body=19 status=ok
// SIG undefined FUN_143ab779c(void)

undefined1 FUN_143ab779c(undefined8 param_1,undefined8 param_2)

{
  FUN_143ab77b0(param_2);
  return 1;
}



// FUNCTION 143ab77b0 FUN_143ab77b0 body=593 status=ok
// SIG undefined FUN_143ab77b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143ab77b0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _DAT_14cb425d0 = 0;
  local_48 = uVar6;
  if ((int)param_1[1] == 0) {
    if (DAT_14c762950 != -1) {
      FUN_140002266(&local_60,&DAT_149e063bc);
      puVar10 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar10 = local_60;
      }
      puVar9 = &DAT_149dfb77a;
      if (DAT_14c872b30 != 0) {
        puVar9 = DAT_14c872b28;
      }
      local_70 = 0;
      local_78 = 0;
      local_68 = 0;
      uVar6 = FUN_1412e8829(puVar9,L"fx.Niagara.QualityLevel",puVar10,0xff000000);
      if (local_60 != (undefined2 *)0x0) {
        uVar6 = FUN_1400020a8();
      }
    }
    DAT_14c762950 = -1;
  }
  else {
    lVar7 = FUN_140032b16(0);
    if ((longlong)*(int *)(lVar7 + 0x30) != 0) {
      plVar12 = *(longlong **)(lVar7 + 0x28);
      plVar1 = plVar12 + *(int *)(lVar7 + 0x30);
      do {
        lVar7 = *plVar12;
        if (lVar7 != 0) {
          lVar8 = FUN_14129a444();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            local_50 = *(undefined8 *)(lVar7 + 0x18);
            FUN_1400021e4(&local_50,&local_60);
            iVar5 = (int)((longlong *)*param_1)[1];
            if (local_58 == iVar5) {
              bVar13 = true;
              if (1 < local_58) {
                lVar8 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)local_60 + lVar8);
                  uVar4 = (uint)uVar2;
                  uVar3 = *(ushort *)(*(longlong *)*param_1 + lVar8);
                  uVar11 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143ab7891;
                    }
                    iVar5 = uVar4 - uVar11;
                    goto LAB_143ab78cc;
                  }
                  if (uVar2 == 0) break;
LAB_143ab7891:
                  lVar8 = lVar8 + 2;
                }
                iVar5 = 0;
LAB_143ab78cc:
                bVar13 = iVar5 == 0;
              }
            }
            else {
              bVar13 = iVar5 + local_58 == 1;
            }
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (bVar13) {
              FUN_1481d0893(lVar7);
              break;
            }
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar1);
    }
    uVar6 = (ulonglong)DAT_14cb425d4;
    if ((((DAT_14cb425d4 != 0) && (-1 < (int)DAT_14cb425d0)) && ((int)DAT_14cb425d0 < DAT_14c9647dc)
        ) && ((lVar7 = (ulonglong)((DAT_14cb425d0 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb425d0 >> 0x10) * 8),
              lVar7 != 0 && (*(uint *)(lVar7 + 0x10) == DAT_14cb425d4)))) {
      uVar6 = (ulonglong)*(uint *)(lVar7 + 8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab7a02 FUN_143ab7a02 body=256 status=ok
// SIG undefined FUN_143ab7a02(void)

void FUN_143ab7a02(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x390) != 0)) {
    lVar7 = *(longlong *)(param_2 + 0x388);
    lVar6 = (longlong)*(int *)(param_2 + 0x390) * 0x50 + lVar7;
    do {
      if (*(longlong *)(lVar7 + 0x40) != 0) {
        lVar2 = FUN_140d29022();
        lVar5 = *(longlong *)(lVar7 + 0x40);
        if ((((lVar5 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
           (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) && ((longlong)*(int *)(lVar5 + 0x50) != 0)))) {
          plVar3 = *(longlong **)(lVar5 + 0x48);
          plVar4 = plVar3 + (longlong)*(int *)(lVar5 + 0x50) * 6;
          lVar5 = DAT_14cb424a0;
          iVar8 = DAT_14cb424a8;
          do {
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              lVar2 = 0;
              do {
                if (*(longlong *)(lVar5 + lVar2) == *plVar3) {
                  *(undefined1 *)*param_1 = 1;
                  lVar5 = DAT_14cb424a0;
                  iVar8 = DAT_14cb424a8;
                  break;
                }
                lVar2 = lVar2 + 8;
              } while ((longlong)iVar8 * 8 != lVar2);
            }
            plVar3 = plVar3 + 6;
          } while (plVar3 != plVar4);
        }
      }
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 143ab7b02 FUN_143ab7b02 body=1232 status=ok
// SIG undefined FUN_143ab7b02(void)

void FUN_143ab7b02(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)((uint)*(byte *)(param_1 + 0x10) * 0x30));
  if (*(int *)(param_1 + 0x20) == 0) {
    local_58 = &DAT_149dfb77a;
  }
  else {
    local_58 = *(undefined2 **)(param_1 + 0x18);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)uVar5;
  uStack_97 = (undefined1)(uVar5 >> 8);
  uStack_96 = (undefined1)(uVar5 >> 0x10);
  uStack_95 = (undefined1)(uVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (uVar5 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x28);
  if (plVar10 == &local_a0) {
LAB_143ab7cc8:
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143ab7cc8;
    }
  }
  lVar6 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar5);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  _Dst = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar6,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2);
  }
  memset(_Dst,0,(ulonglong)uVar5);
  if (*(char *)(param_1 + 0x10) == '%') {
    *_Dst = *(undefined4 *)(param_1 + 0x38);
  }
  lVar6 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar6);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar6);
  }
  uStack_97 = *(undefined1 *)(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x28) & 0x10) == 0)) {
    local_b8 = &local_98;
    local_98 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_96 = 1;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  }
  else {
    local_b8 = &local_98;
    local_98 = 0;
    uStack_97 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_96 = 4;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  }
  plVar10 = (longlong *)(param_1 + 0x30);
  if (plVar10 != &local_a0) {
    lVar6 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar6 == 0) goto LAB_143ab7f27;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar6;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar6 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar6;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_143ab7f27:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ab7fd4 FUN_143ab7fd4 body=226 status=ok
// SIG undefined FUN_143ab7fd4(void)

void FUN_143ab7fd4(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar6);
      if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar1)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
          (**(code **)(*plVar5 + 0x420))(plVar5,0);
        }
      }
      lVar6 = lVar6 + 0x68;
    } while ((longlong)(int)lVar4 * 0x68 - lVar6 != 0);
  }
  if (((*(int *)((longlong)param_1 + 0x14) != 0) &&
      (uVar2 = *(uint *)(param_1 + 2), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x14))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)) {
      FUN_140aeefbc(*plVar5,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ab80cc FUN_143ab80cc body=69 status=ok
// SIG undefined FUN_143ab80cc(void)

undefined8 * FUN_143ab80cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae0eb30;
  FUN_141308248(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab8112 FUN_143ab8112 body=130 status=ok
// SIG undefined FUN_143ab8112(void)

void FUN_143ab8112(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f84a2(param_1,iVar2);
  }
  lVar4 = *param_1;
  FUN_1446f82e2(&local_38,uVar1,uVar3,1);
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab8196 FUN_143ab8196 body=29 status=ok
// SIG undefined FUN_143ab8196(void)

undefined8 FUN_143ab8196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab81c8 FUN_143ab81c8 body=93 status=ok
// SIG undefined FUN_143ab81c8(void)

void FUN_143ab81c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0ebd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0eb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ab8226 FUN_143ab8226 body=93 status=ok
// SIG undefined FUN_143ab8226(void)

void FUN_143ab8226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae0ebd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0eb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ab8284 FUN_143ab8284 body=126 status=ok
// SIG undefined FUN_143ab8284(void)

void FUN_143ab8284(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae0ebd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0eb60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab82f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ab830c FUN_143ab830c body=20 status=ok
// SIG undefined FUN_143ab830c(void)

undefined1 FUN_143ab830c(longlong param_1)

{
  FUN_143ab8320(param_1 + 0x18);
  return 1;
}



// FUNCTION 143ab8320 FUN_143ab8320 body=295 status=ok
// SIG undefined FUN_143ab8320(void)

void FUN_143ab8320(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char cVar12;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_3 + 0x10);
  uVar3 = param_3[8];
  uVar4 = param_3[9];
  uVar5 = param_3[10];
  uVar6 = param_3[0xb];
  uVar7 = param_3[0xd];
  uVar8 = param_3[0xe];
  uVar9 = param_3[0xf];
  *(undefined4 *)(lVar1 + 0xa0) = param_3[0xc];
  *(undefined4 *)(lVar1 + 0xa4) = uVar7;
  *(undefined4 *)(lVar1 + 0xa8) = uVar8;
  *(undefined4 *)(lVar1 + 0xac) = uVar9;
  *(undefined4 *)(lVar1 + 0x90) = uVar3;
  *(undefined4 *)(lVar1 + 0x94) = uVar4;
  *(undefined4 *)(lVar1 + 0x98) = uVar5;
  *(undefined4 *)(lVar1 + 0x9c) = uVar6;
  lVar1 = *(longlong *)(param_3 + 6);
  lVar10 = FUN_1447e4f80();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  lVar10 = *param_1;
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar1 + 0x18);
  *(char *)(lVar10 + 0x78) = cVar12;
  if ((*(longlong *)(*(longlong *)(param_3 + 6) + 8) == 0) ||
     (plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_3 + 6) + 8) + 0x178),
     plVar2 == (longlong *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  cVar12 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar12 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x80) = uVar11;
  *(char *)(lVar1 + 0x88) = cVar12;
  *(undefined4 *)(*param_1 + 0x210) = *param_3;
  lVar1 = *param_1;
  FUN_1438f9df6(param_2,lVar1 + 0x70,*(undefined4 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 0xc));
  return;
}



// FUNCTION 143ab8448 FUN_143ab8448 body=29 status=ok
// SIG undefined FUN_143ab8448(void)

undefined8 FUN_143ab8448(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab8466 FUN_143ab8466 body=92 status=ok
// SIG undefined FUN_143ab8466(void)

void FUN_143ab8466(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x10) != param_1 + 1) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x10) = param_1[1];
    param_1[1] = 0;
    *(int *)(lVar1 + 0x18) = (int)param_1[2];
    *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x14);
    param_1[2] = 0;
  }
  *(short *)(lVar1 + 0x24) = (short)param_1[3];
  *(undefined2 *)(lVar1 + 0x26) = *(undefined2 *)((longlong)param_1 + 0x1a);
  return;
}



// FUNCTION 143ab84cc FUN_143ab84cc body=29 status=ok
// SIG undefined FUN_143ab84cc(void)

void FUN_143ab84cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ab84ea FUN_143ab84ea body=57 status=ok
// SIG undefined FUN_143ab84ea(void)

undefined8 * FUN_143ab84ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae0ecb0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ab854a FUN_143ab854a body=282 status=ok
// SIG undefined FUN_143ab854a(void)

undefined8 * FUN_143ab854a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ab8523);
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



// FUNCTION 143ab8664 FUN_143ab8664 body=187 status=ok
// SIG undefined FUN_143ab8664(void)

void FUN_143ab8664(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if ((undefined8 *)(lVar2 + 0x10) != param_1 + 0x16) {
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar2 + 0x10) = param_1[0x16];
    param_1[0x16] = 0;
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_1 + 0x17);
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xbc);
    param_1[0x17] = 0;
  }
  *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(lVar2 + 0x26) = *(undefined2 *)((longlong)param_1 + 0xc2);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ab8714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143ab8720 FUN_143ab8720 body=254 status=ok
// SIG undefined FUN_143ab8720(void)

void FUN_143ab8720(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 143ab881e FUN_143ab881e body=1154 status=ok
// SIG undefined FUN_143ab881e(void)

void FUN_143ab881e(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  void *_Dst;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  undefined8 *puVar27;
  int *piVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar32 = *(uint *)(param_1 + 1);
  iVar25 = *(int *)((longlong)param_1 + 0x34);
  if (iVar25 < (int)uVar32) {
    iVar17 = 0;
    if (iVar25 != 0) {
      iVar21 = uVar32 - iVar25;
      iVar18 = iVar21;
      if ((int)param_1[6] != -1) {
        lVar4 = *param_1;
        iVar13 = (int)param_1[6];
        uVar24 = uVar32;
        do {
          iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar13 * 0x20);
          if (iVar13 < iVar21) {
            puVar27 = (undefined8 *)((longlong)iVar13 * 0x20 + lVar4);
            plVar22 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar22 = param_1 + 2;
            }
            puVar12 = (undefined8 *)((longlong)(int)(uVar24 - 1) * 0x20 + lVar4 + 0x20);
            uVar23 = uVar24;
            do {
              puVar30 = puVar12;
              uVar24 = uVar23 - 1;
              uVar31 = uVar23 + 0x1e;
              if (-1 < (int)uVar24) {
                uVar31 = uVar24;
              }
              puVar12 = puVar30 + -4;
              uVar23 = uVar24;
            } while ((*(uint *)((longlong)plVar22 + (longlong)((int)uVar31 >> 5) * 4) >>
                      (uVar24 & 0x1f) & 1) == 0);
            uVar5 = puVar30[-4];
            uVar6 = puVar30[-3];
            uVar7 = puVar30[-1];
            puVar27[2] = puVar30[-2];
            puVar27[3] = uVar7;
            *puVar27 = uVar5;
            puVar27[1] = uVar6;
            plVar22 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar22 = param_1 + 2;
            }
            iVar29 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar29 = iVar13;
            }
            puVar2 = (uint *)((longlong)plVar22 + (longlong)(iVar29 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
          }
          iVar13 = iVar3;
        } while (iVar3 != -1);
        iVar13 = (int)param_1[1] - uVar32;
        if (iVar13 != 0) {
          _Dst = (void *)((longlong)iVar21 * 0x20 + *param_1);
          memmove(_Dst,(void *)((longlong)iVar25 * 0x20 + (longlong)_Dst),(longlong)iVar13 << 5);
          iVar18 = (int)param_1[1] - iVar25;
        }
      }
      *(int *)(param_1 + 1) = iVar18;
      FUN_144a6134a(param_1 + 2,iVar21,iVar25);
      param_1[6] = 0xffffffff;
      uVar32 = *(uint *)((longlong)param_1 + 0xc);
      if (uVar32 != *(uint *)(param_1 + 1)) {
        FUN_1446f4a44(param_1);
        uVar32 = *(uint *)(param_1 + 1);
        iVar17 = *(int *)((longlong)param_1 + 0x34);
      }
    }
    uVar32 = uVar32 - iVar17;
    if (1 < (int)uVar32) {
      lVar4 = *param_1;
      memset(local_358,0,0x2f0);
      local_360 = (ulonglong)uVar32 * 0x20 + lVar4 + -0x20;
      local_368 = lVar4;
      fVar33 = logf((float)(int)uVar32);
      local_358[0] = (int)(longlong)(fVar33 + fVar33);
      plVar22 = &local_368;
      do {
        piVar16 = (int *)*plVar22;
        piVar26 = (int *)plVar22[1];
        iVar25 = (int)plVar22[2];
        iVar17 = (int)((ulonglong)((longlong)piVar26 - (longlong)piVar16) >> 5);
        if (iVar25 != 0) {
LAB_143ab8909:
          if (8 < (int)(iVar17 + 1U)) {
            uVar19 = (ulonglong)(iVar17 + 1U >> 1);
            uVar5 = *(undefined8 *)(piVar16 + uVar19 * 8);
            uVar6 = *(undefined8 *)(piVar16 + uVar19 * 8 + 2);
            uVar7 = *(undefined8 *)(piVar16 + uVar19 * 8 + 4);
            uVar8 = *(undefined8 *)(piVar16 + uVar19 * 8 + 4 + 2);
            uVar9 = *(undefined8 *)piVar16;
            uVar10 = *(undefined8 *)(piVar16 + 2);
            uVar11 = *(undefined8 *)(piVar16 + 6);
            *(undefined8 *)(piVar16 + uVar19 * 8 + 4) = *(undefined8 *)(piVar16 + 4);
            *(undefined8 *)(piVar16 + uVar19 * 8 + 4 + 2) = uVar11;
            *(undefined8 *)(piVar16 + uVar19 * 8) = uVar9;
            *(undefined8 *)(piVar16 + uVar19 * 8 + 2) = uVar10;
            *(undefined8 *)(piVar16 + 4) = uVar7;
            *(undefined8 *)(piVar16 + 6) = uVar8;
            *(undefined8 *)piVar16 = uVar5;
            *(undefined8 *)(piVar16 + 2) = uVar6;
            piVar20 = piVar26 + 8;
            piVar15 = piVar16;
            do {
              piVar15 = piVar15 + 8;
              if (piVar15 <= piVar26) {
                while (*piVar15 <= *piVar16) {
                  if (((*piVar16 == *piVar15) && (piVar16[1] < piVar15[1])) ||
                     (piVar15 = piVar15 + 8, piVar26 < piVar15)) break;
                }
              }
              piVar28 = piVar20 + -8;
              piVar14 = piVar20;
              if (piVar16 < piVar28) {
                while (*piVar16 <= piVar20[-8]) {
                  if (((piVar20[-8] == *piVar16) && (piVar14 = piVar20, piVar28[1] < piVar16[1])) ||
                     (piVar1 = piVar28 + -8, piVar20 = piVar28, piVar14 = piVar28, piVar28 = piVar1,
                     piVar1 <= piVar16)) goto LAB_143ab8b89;
                }
                piVar14 = piVar28 + 8;
              }
LAB_143ab8b89:
              piVar20 = piVar28;
              if (piVar20 < piVar15) goto LAB_143ab8bd6;
              uVar5 = *(undefined8 *)piVar15;
              uVar6 = *(undefined8 *)(piVar15 + 2);
              uVar7 = *(undefined8 *)(piVar15 + 4);
              uVar8 = *(undefined8 *)(piVar15 + 6);
              uVar9 = *(undefined8 *)piVar20;
              uVar10 = *(undefined8 *)(piVar20 + 2);
              uVar11 = *(undefined8 *)(piVar20 + 6);
              *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar20 + 4);
              *(undefined8 *)(piVar15 + 6) = uVar11;
              *(undefined8 *)piVar15 = uVar9;
              *(undefined8 *)(piVar15 + 2) = uVar10;
              *(undefined8 *)(piVar20 + 4) = uVar7;
              *(undefined8 *)(piVar20 + 6) = uVar8;
              *(undefined8 *)piVar20 = uVar5;
              *(undefined8 *)(piVar20 + 2) = uVar6;
            } while( true );
          }
          for (; piVar15 = piVar16, piVar20 = piVar16, piVar16 < piVar26; piVar26 = piVar26 + -8) {
            while (piVar20 = piVar20 + 8, piVar20 <= piVar26) {
              if ((*piVar15 < *piVar20) || ((*piVar15 == *piVar20 && (piVar15[1] < piVar20[1])))) {
                piVar15 = piVar20;
              }
            }
            local_68 = *(undefined8 *)piVar15;
            uStack_60 = *(undefined8 *)(piVar15 + 2);
            local_58 = *(undefined8 *)(piVar15 + 4);
            uStack_50 = *(undefined8 *)(piVar15 + 6);
            uVar8 = local_68;
            uVar9 = uStack_60;
            uVar5 = *(undefined8 *)piVar26;
            uVar6 = *(undefined8 *)(piVar26 + 2);
            uVar7 = *(undefined8 *)(piVar26 + 6);
            *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar26 + 4);
            *(undefined8 *)(piVar15 + 6) = uVar7;
            *(undefined8 *)piVar15 = uVar5;
            *(undefined8 *)(piVar15 + 2) = uVar6;
            local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(piVar26 + 4) = local_58;
            *(undefined8 *)(piVar26 + 6) = uStack_50;
            *piVar26 = (int)local_68;
            piVar26[1] = local_68._4_4_;
            piVar26[2] = (int)uStack_60;
            piVar26[3] = uStack_60._4_4_;
            local_68 = uVar8;
            uStack_60 = uVar9;
          }
          goto LAB_143ab8985;
        }
LAB_143ab8c97:
        FUN_1481da9ad(piVar16);
LAB_143ab8985:
        plVar22 = plVar22 + -3;
      } while (&local_368 <= plVar22);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143ab8bd6:
  local_68 = *(undefined8 *)piVar16;
  uStack_60 = *(undefined8 *)(piVar16 + 2);
  local_58 = *(undefined8 *)(piVar16 + 4);
  uStack_50 = *(undefined8 *)(piVar16 + 6);
  uVar8 = local_68;
  uVar9 = uStack_60;
  uVar5 = *(undefined8 *)piVar20;
  uVar6 = *(undefined8 *)(piVar20 + 2);
  uVar7 = *(undefined8 *)(piVar20 + 6);
  *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar20 + 4);
  *(undefined8 *)(piVar16 + 6) = uVar7;
  *(undefined8 *)piVar16 = uVar5;
  *(undefined8 *)(piVar16 + 2) = uVar6;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(piVar20 + 4) = local_58;
  *(undefined8 *)(piVar20 + 6) = uStack_50;
  *piVar20 = (int)local_68;
  piVar20[1] = local_68._4_4_;
  piVar20[2] = (int)uStack_60;
  piVar20[3] = uStack_60._4_4_;
  iVar25 = iVar25 + -1;
  piVar14 = piVar14 + -0x10;
  local_68 = uVar8;
  uStack_60 = uVar9;
  if ((longlong)piVar14 - (longlong)piVar16 < (longlong)piVar26 - (longlong)piVar15) {
    if (piVar15 < piVar26) {
      *plVar22 = (longlong)piVar15;
      plVar22[1] = (longlong)piVar26;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    if (piVar20 <= piVar16 + 8) goto LAB_143ab8985;
  }
  else {
    if (piVar16 + 8 < piVar20) {
      *plVar22 = (longlong)piVar16;
      plVar22[1] = (longlong)piVar14;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    piVar14 = piVar26;
    piVar16 = piVar15;
    if (piVar26 <= piVar15) goto LAB_143ab8985;
  }
  iVar17 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar16) >> 5);
  piVar26 = piVar14;
  if (iVar25 == 0) goto LAB_143ab8c97;
  goto LAB_143ab8909;
}



// FUNCTION 143ab8ca2 FUN_143ab8ca2 body=472 status=ok
// SIG undefined FUN_143ab8ca2(void)

void FUN_143ab8ca2(uint *param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  iVar2 = (int)param_4[1];
  if (iVar2 != 0) {
    iVar10 = iVar2 + -1;
    if (param_5 == 0) {
      iVar10 = 0;
    }
    iVar7 = -1;
    if (param_5 == 0) {
      iVar7 = iVar2;
    }
    uVar1 = *(uint *)(param_3 + 0x88);
    uVar5 = 2;
    if (2 < (int)uVar1 / 2) {
      uVar5 = (int)uVar1 / 2;
    }
    if ((int)uVar1 <= (int)uVar5) {
      uVar5 = uVar1;
    }
    uVar3 = *(uint *)(param_2 + 0xc);
    uVar4 = uVar1;
    do {
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        iVar2 = *(int *)(*param_4 + (longlong)iVar10 * 4);
        uVar11 = 0;
        do {
          uVar6 = uVar11 + 1;
          bVar14 = uVar11 == uVar3 - 1;
          uVar3 = uVar6;
          if (bVar14) {
            uVar3 = 0;
          }
          uVar12 = uVar11 << (*(byte *)(param_2 + 0x18) & 0x1f) |
                   iVar2 << (*(byte *)(param_2 + 0x10) & 0x1f);
          uVar11 = uVar3 << (*(byte *)(param_2 + 0x18) & 0x1f) |
                   (uint)bVar14 + iVar2 << (*(byte *)(param_2 + 0x10) & 0x1f);
          uVar3 = 0;
          if (uVar1 == 0) goto LAB_143ab8de6;
          do {
            lVar9 = *(longlong *)(param_3 + 0x80);
            if (*(longlong *)(param_3 + 0x80) == 0) {
              lVar9 = param_3;
            }
            uVar4 = *(uint *)(lVar9 + (longlong)(int)uVar3 * 4);
            uVar8 = *(uint *)(lVar9 + (longlong)(int)(uVar3 + 1) * 4);
            *param_1 = uVar4 | uVar12;
            uVar13 = uVar8 | uVar12;
            param_1[1] = uVar13;
            uVar4 = uVar4 | uVar11;
            param_1[2] = uVar4;
            param_1[3] = uVar13;
            param_1[4] = uVar8 | uVar11;
            param_1[5] = uVar4;
            param_1 = param_1 + 6;
            uVar3 = uVar3 + 2;
          } while (uVar3 < uVar5);
          while( true ) {
            uVar4 = *(uint *)(param_3 + 0x88);
LAB_143ab8de6:
            if (uVar4 <= uVar3) break;
            lVar9 = *(longlong *)(param_3 + 0x80);
            if (*(longlong *)(param_3 + 0x80) == 0) {
              lVar9 = param_3;
            }
            uVar4 = *(uint *)(lVar9 + (longlong)(int)uVar3 * 4);
            uVar8 = *(uint *)(lVar9 + (longlong)(int)(uVar3 + 1) * 4);
            uVar13 = uVar4 | uVar12;
            *param_1 = uVar13;
            param_1[1] = uVar8 | uVar12;
            uVar8 = uVar8 | uVar11;
            param_1[2] = uVar8;
            param_1[3] = uVar13;
            param_1[4] = uVar8;
            param_1[5] = uVar4 | uVar11;
            param_1 = param_1 + 6;
            uVar3 = uVar3 + 2;
          }
          uVar3 = *(uint *)(param_2 + 0xc);
          uVar11 = uVar6;
        } while (uVar6 < uVar3);
      }
      iVar10 = iVar10 + (-(uint)param_5 | 1);
    } while (iVar10 != iVar7);
  }
  return;
}



// FUNCTION 143ab8e7a FUN_143ab8e7a body=3634 status=ok
// SIG undefined FUN_143ab8e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ab8e7a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb421b0);
  if (cVar2 == '\0') {
    _DAT_14cb421b0 = 0;
    uRam000000014cb421b8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb421c0 = (ulonglong)uVar3;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae01c50,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae01d60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae01e90);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae025f0);
  FUN_1446f470e(&DAT_14cb42328,L"OnBeginTest",1);
  FUN_1446f470e(&DAT_14cb42338,L"OnEndTest",1);
  FUN_1446f470e(&DAT_14cb42348,L"OnOwnerTick",1);
  FUN_1446f470e(&DAT_14cb42358,L"OnTickTest",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae03d00,3,&PTR_FUN_14ae03cd0);
  local_58 = 4;
  ppuStack_60 = &PTR_FUN_14ae04dc0;
  local_68 = 6;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae04e40);
  DAT_14cb424a0 = 0;
  _DAT_14cb424a8 = 0;
  atexit((_func_5014 *)&LAB_143aa466b);
  DAT_14cb424d0 = 0;
  DAT_14cb424d8 = 0;
  DAT_14cb424b0 = 0;
  _DAT_14cb424b8 = 0;
  _DAT_14cb424dc = 0xffffffff00000080;
  DAT_14cb424e4 = 0;
  DAT_14cb424f0 = 0;
  DAT_14cb424f8 = 0;
  atexit(FUN_143aa467c);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb42500,4000);
  atexit((_func_5014 *)&LAB_143aa46a5);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42530,L"fx.NiagaraAllowRuntimeScalabilityChanges",&DAT_14cb42528,
                L"If > 0 this platform allows niagara scalability settings changes at runtime. \n");
  atexit(FUN_143aa46b3);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42540,L"fx.Niagara.PruneEmittersOnCook",&DAT_14c762930,
                L"If > 0 this platform will prune disabled emitters during cook. \n");
  atexit(FUN_143aa46f8);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14ae0e9f0;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_1415c7246(&DAT_14cb42550,L"fx.Niagara.SetOverrideQualityLevel",
                L"Sets which quality level we should override with, no args means clear the override and return to non overriden quality level). Valid levels are 0-4 (Low-Cinematic)"
                ,&local_50);
  if (local_48 == 0) {
LAB_143ab91fb:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143ab91fb;
  }
  atexit(FUN_143aa473d);
  local_68 = CONCAT44(local_68._4_4_,0x40);
  FUN_141471170(&DAT_14cb42560,L"fx.Niagara.QualityLevel",&DAT_14c762934,
                L"The quality level for Niagara Effects. \n");
  atexit(FUN_143aa4782);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_50 + 0x18) = FUN_140809a92;
  FUN_141253d16(&DAT_14cb42570,&local_50);
  if (local_48 == 0) {
LAB_143ab9306:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143ab9306;
  }
  local_68._0_4_ = 4;
  FUN_141471170(&DAT_14cb42588,L"fx.Niagara.QualityLevel.Min",&DAT_14c76293c,
                L"The minimum quality level for Niagara Effects. \n");
  atexit(FUN_143aa47c7);
  local_68._0_4_ = 4;
  FUN_141471170(&DAT_14cb42598,L"fx.Niagara.QualityLevel.Max",&DAT_14c762940,
                L"The Maximum quality level for Niagara Effects. \n");
  atexit(FUN_143aa480c);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb425b0,L"fx.Niagara.AllowAllDeviceProfiles",&DAT_14cb425a8,&DAT_14ad81004);
  atexit(FUN_143aa4851);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb425c0,L"fx.Niagara.LegacyDeviceProfile",&DAT_14c762944,
                L"This is a special case CVar that allows us to use CVar conditions to maintain behavior with legacy device profiles.\nDo not use directly for new content.\nLegacy device profiles can be given a specific value for this CVarand then CVar conditions used to enable / disable as appropriate to match with legacy assets with enabled / disabled content based on them. \n"
               );
  atexit(FUN_143aa4896);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14ae0ea60;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_1415c7246(&DAT_14cb425d8,L"fx.Niagara.SetOverridePlatformName",
                L"Sets which platform we should override with, no args means reset to default",
                &local_50);
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143ab94ad;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143ab94ad:
  atexit(FUN_143aa48db);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae05c70,1,0);
  FUN_1446f470e(&DAT_14cb42608,L"SetLabelText",1);
  FUN_1446f470e(&DAT_14cb42618,L"SetSystem",1);
  FUN_1446f470e(&DAT_14cb42640,L"ApplyToPreview",1);
  FUN_1446f470e(&DAT_14cb42650,&DAT_14a1c72e4,1);
  ppuStack_60 = &PTR_FUN_14ae09460;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae09480,10,0);
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42770,L"Niagara.RadixSortThreshold",&DAT_14c762954,
                L"Instance count at which radix sort gets used instead of introspective sort.\nSet to  -1 to never use radixsort. (default=400)"
               );
  atexit(FUN_143aa4c02);
  FUN_14588ab28(&DAT_14cb42780,0xd,L"NiagaraRenderer::DummyFloat");
  atexit(FUN_143aa4c47);
  FUN_14588ab28(&DAT_14cb427c0,0xf,L"NiagaraRenderer::DummyFloat2");
  atexit(FUN_143aa4c76);
  FUN_14588ab28(&DAT_14cb42800,1,L"NiagaraRenderer::DummyFloat4");
  atexit(FUN_143aa4ca5);
  FUN_146477c1a();
  atexit(FUN_143aa4cd4);
  FUN_14588ab28(&DAT_14cb42880,0x1d,L"NiagaraRenderer::DummyInt");
  atexit(FUN_143aa4d03);
  FUN_14588ab28(&DAT_14cb428c0,0x1c,L"NiagaraRenderer::DummyUInt");
  atexit(FUN_143aa4d32);
  FUN_14588ab28(&DAT_14cb42900,0x44,L"NiagaraRenderer::DummyUInt2");
  atexit(FUN_143aa4d61);
  FUN_14588ab28(&DAT_14cb42940,0x30,L"NiagaraRenderer::DummyUInt4");
  atexit(FUN_143aa4d90);
  FUN_14588ab28(&DAT_14cb42980,0x15,L"NiagaraRenderer::DummyHalf");
  atexit(FUN_143aa4dbf);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb429c0,L"fx.Niagara.WarnComponentRenderCount",&DAT_14c762958,
                L"The max number of components that a single system can spawn before a log warning is shown."
               );
  atexit(FUN_143aa516d);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb429d0,L"fx.Niagara.ComponentRenderPoolInactiveTimeLimit",&DAT_14c76295c,
                L"The time in seconds an inactive component can linger in the pool before being destroyed."
               );
  atexit(FUN_143aa51b2);
  local_50 = "UniqueID";
  local_48 = 8;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb429e0 = (ulonglong)uVar3;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb429e8,L"fx.Niagara.DecalRenderer.Enabled",&DAT_14c762964,
                L"If == 0, Niagara Decal Renderers are disabled.");
  atexit(FUN_143aa98e2);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb429f8,L"fx.EnableNiagaraLightRendering",&DAT_14c762968,
                L"If == 0, Niagara Light Renderers are disabled. \n");
  atexit(FUN_143aa9941);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42a08,L"fx.EnableNiagaraMeshRendering",&DAT_14c76296c,
                L"If == 0, Niagara Mesh Renderers are disabled. \n");
  atexit(FUN_143aab294);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42a18,L"fx.Niagara.MeshRenderer.CalcMeshUsedParticleCount",&DAT_14c762970,
                L"Optimization which will inspect renderer vis / mesh index to determine which set of meshes we can potential render with."
               );
  atexit(FUN_143aab2d9);
  local_50._0_4_ = 1;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb42a28,L"r.RayTracing.Geometry.NiagaraMeshes",&local_50,
                L"Include Niagara meshes in ray tracing effects (default = 1 (Niagara meshes enabled in ray tracing))"
               );
  atexit(FUN_143aab31e);
  ppuStack_60 = &PTR_FUN_14ae0b090;
  local_58 = 2;
  local_68 = 5;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae0b1a0,1,&PTR_FUN_14ae0b0d0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42b00,L"fx.Niagara.PSOPrecache.ReverseCulling",&DAT_14c762974,
                L"Also Precache PSOs with with reverse culling set when not 2 sided. (default 1)");
  atexit(FUN_143aaf848);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42b10,L"Niagara.Ribbon.Tessellation.Enabled",&DAT_14c762978,
                L"Determine if we allow tesellation on this platform or not.");
  atexit(FUN_143aaf932);
  local_68._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb42b20,L"Niagara.Ribbon.Tessellation.MinAngle",&DAT_14c76297c,
                L"Ribbon segment angle to tesselate in radian. (default=15 degrees)");
  atexit(FUN_143aaf977);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42b30,L"Niagara.Ribbon.Tessellation.MaxInterp",&DAT_14c762980,
                L"When TessellationAngle is > 0, this is the maximum tesselation factor. \nHigher values allow more evenly divided tesselation. \nWhen TessellationAngle is 0, this is the actually tesselation factor (default=16)."
               );
  atexit(FUN_143aaf9bc);
  local_68._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb42b40,L"Niagara.Ribbon.Tessellation.MaxErrorScreenPercentage",
                &DAT_14c762984,
                L"Screen percentage used to compute the tessellation factor. \nSmaller values will generate more tessellation, up to max tesselltion. (default=0.002)"
               );
  atexit(FUN_143aafa01);
  local_68._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb42b50,L"Niagara.Ribbon.Tessellation.MinAbsoluteError",&DAT_14c762988,
                L"Minimum absolute world size error when tessellating. \nPrevent over tessellating when distance gets really small. (default=0.5)"
               );
  atexit(FUN_143aafa46);
  local_68._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb42b60,L"Niagara.Ribbon.MinSegmentLength",&DAT_14c76298c,
                L"Min length of niagara ribbon segments. (default=1)");
  atexit(FUN_143aafa8b);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42b70,L"fx.EnableNiagaraRibbonRendering",&DAT_14c762990,
                L"If == 0, Niagara Ribbon Renderers are disabled. \n");
  atexit(FUN_143aafad0);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42b80,L"Niagara.Ribbon.GpuEnabled",&DAT_14c762994,
                L"Enable any GPU ribbon related code (including GPU init).");
  atexit(FUN_143aafb15);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb42b90,L"Niagara.Ribbon.GpuInitMode",&DAT_14cb42ba0,
                L"Modifies the GPU initialization mode used, i.e. offloading CPU calculations to the GPU.\n0 = Respect bUseGPUInit from properties (Default)\n1 = Force enabled\n2 = Force disabled"
               );
  atexit(FUN_143aafb5a);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42ba8,L"Niagara.Ribbon.GpuBufferCachePurgeCounter",&DAT_14cb42bb8,
                L"The number of frames we hold onto ribbon buffer for.Where 0 (Default) we purge them if not used next frame.Negative values will purge the buffers the same frame, essentially zero reusing."
               );
  atexit(FUN_143aafb9f);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42bc0,L"Niagara.Ribbon.GpuAllocateMaxCount",&DAT_14c762998,
                L"When enabled (default) we allocate the maximum number of required elements.This can result in memory bloat if the count is highly variable but will be more stable performance wise"
               );
  atexit(FUN_143aafbe4);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42bd0,L"Niagara.Ribbon.GpuBufferAlign",&DAT_14c76299c,
                L"When not allocating the maximum number of required elements we align up the request elements to this size to improve buffer reuse."
               );
  atexit(FUN_143aafc29);
  local_68._0_4_ = 0;
  FUN_14153156c(&DAT_14cb42be0,L"Niagara.Ribbon.ShareGeneratedData",&DAT_14c7629a0,
                L"Allow ribbons to share the generate data where possible.");
  atexit(FUN_143aafc6e);
  local_50 = (char *)((ulonglong)local_50._4_4_ << 0x20);
  local_68._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb42bf0,L"r.RayTracing.Geometry.NiagaraRibbons",&local_50,
                L"Include Niagara ribbons in ray tracing effects (default = 1 (Niagara ribbons enabled in ray tracing))"
               );
  atexit(FUN_143aafcb3);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42c08,L"Niagara.Ribbon.Gbx.MaxIndices",&DAT_14cb42c18,
                L"Prevent Rendering and/or dump diagnostics when index count is exceeded.");
  atexit(FUN_143aafcf8);
  local_68._0_4_ = 0;
  FUN_141471170(&DAT_14cb42c20,L"Niagara.Ribbon.Gbx.MaxIndices.WarnCount",&DAT_14cb42c30,
                L"Dump diagnostics when index count is exceeded.");
  atexit(FUN_143aafd3d);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_14153156c(&DAT_14cb42c38,L"Niagara.Ribbon.Gbx.MaxIndices.Suppress",&DAT_14cb42c48,
                L"Suppress ribbon rendering when index count is exceeded.");
  atexit(FUN_143aafd82);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ab9cb0 FUN_143ab9cb0 body=69 status=ok
// SIG undefined FUN_143ab9cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ab9cb0(void)

{
  _DAT_14cb42c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ab9cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42c90,1);
  return;
}



// FUNCTION 143ab9cf5 FUN_143ab9cf5 body=69 status=ok
// SIG undefined FUN_143ab9cf5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ab9cf5(void)

{
  _DAT_14cb42c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ab9d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42ca0,1);
  return;
}



// FUNCTION 143ab9d3a FUN_143ab9d3a body=1144 status=ok
// SIG undefined FUN_143ab9d3a(void)

void FUN_143ab9d3a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong lVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  
  lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x10);
  *param_6 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x120);
  *(undefined1 *)(param_6 + 1) = *(undefined1 *)(param_1 + 0x123);
  iVar26 = 0x14;
  if (*(int *)(*(longlong *)(param_2 + 8) + 0x58) == 2) {
    iVar26 = 0x28;
  }
  param_6[0xa8] = (iVar26 - (uint)((*(uint *)(param_1 + 0x13c) & 4) == 0)) + 0x82;
  *(undefined1 *)(param_6 + 0x1e) = *(undefined1 *)(param_2 + 0x17);
  param_6[0x22] = *(undefined4 *)(param_2 + 0x4c);
  param_6[0x23] = *(undefined4 *)(param_1 + 0x194);
  *(undefined8 *)(param_6 + 0x34) = *(undefined8 *)(param_1 + 0x150);
  if ((*(byte *)(param_1 + 0x13c) & 0x40) != 0) {
    uVar22 = (uint)*(ushort *)(lVar15 + (ulonglong)*(byte *)(param_2 + 0x15) * 2);
    uVar25 = 0xffffffff;
    if (uVar22 != 0xffff) {
      uVar25 = uVar22;
    }
    param_6[0x1f] = (uint)*(byte *)(lVar15 + 7) << 0x1f | uVar25;
  }
  *(undefined8 *)(param_6 + 0x16) = *(undefined8 *)(param_4 + 0x1058);
  uVar21 = *(undefined8 *)(param_4 + 0x1050);
  *(undefined8 *)(param_6 + 0x12) = *(undefined8 *)(param_4 + 0x1048);
  *(undefined8 *)(param_6 + 0x14) = uVar21;
  dVar4 = *(double *)(param_4 + 0xa00);
  dVar5 = *(double *)(param_4 + 0x9c0);
  dVar6 = *(double *)(param_4 + 0x9e0);
  *(double *)(param_6 + 0x18) = dVar5;
  *(double *)(param_6 + 0x1a) = dVar6;
  *(double *)(param_6 + 0x1c) = dVar4;
  if (((*(byte *)(param_1 + 0xf0) & 1) == 0) && (*(char *)(param_3 + 0x388) != '\x01')) {
    pfVar24 = (float *)&DAT_14c846330;
    if (*(float **)(param_3 + 0x2f0) != (float *)0x0) {
      pfVar24 = *(float **)(param_3 + 0x2f0);
    }
    fVar2 = pfVar24[2];
    fVar3 = pfVar24[1];
    *(double *)(param_6 + 0x12) = *(double *)(param_6 + 0x12) - (double)*pfVar24 * 65536.0;
    *(double *)(param_6 + 0x14) = *(double *)(param_6 + 0x14) - (double)fVar3 * 65536.0;
    *(double *)(param_6 + 0x16) = *(double *)(param_6 + 0x16) - (double)fVar2 * 65536.0;
  }
  else {
    dVar7 = *(double *)(param_6 + 0x16);
    dVar8 = *(double *)(param_6 + 0x12);
    dVar9 = *(double *)(param_6 + 0x14);
    dVar18 = *(double *)(param_3 + 0x308);
    dVar19 = *(double *)(param_3 + 0x328);
    dVar20 = *(double *)(param_3 + 0x348);
    dVar14 = *(double *)(param_3 + 0x368);
    dVar10 = *(double *)(param_3 + 0x350);
    dVar11 = *(double *)(param_3 + 0x330);
    dVar12 = *(double *)(param_3 + 0x310);
    dVar13 = *(double *)(param_3 + 0x370);
    *(double *)(param_6 + 0x12) =
         dVar7 * *(double *)(param_3 + 0x340) +
         dVar9 * *(double *)(param_3 + 800) + dVar8 * *(double *)(param_3 + 0x300) +
         *(double *)(param_3 + 0x360);
    *(double *)(param_6 + 0x14) = dVar7 * dVar20 + dVar9 * dVar19 + dVar8 * dVar18 + dVar14;
    *(double *)(param_6 + 0x16) = dVar8 * dVar12 + dVar9 * dVar11 + dVar7 * dVar10 + dVar13;
    dVar7 = *(double *)(param_3 + 0x120);
    dVar8 = *(double *)(param_3 + 0x128);
    dVar9 = *(double *)(param_3 + 0x130);
    dVar10 = *(double *)(param_3 + 0x138);
    dVar11 = *(double *)(param_3 + 0x158);
    dVar12 = *(double *)(param_3 + 0x150);
    dVar13 = *(double *)(param_3 + 0x148);
    dVar14 = *(double *)(param_3 + 0x140);
    *(double *)(param_6 + 0x18) =
         *(double *)(param_3 + 0x118) * 0.0 +
         dVar4 * *(double *)(param_3 + 0x110) +
         dVar6 * *(double *)(param_3 + 0x108) + dVar5 * *(double *)(param_3 + 0x100);
    *(double *)(param_6 + 0x1a) = dVar10 * 0.0 + dVar4 * dVar9 + dVar6 * dVar8 + dVar5 * dVar7;
    *(double *)(param_6 + 0x1c) = dVar5 * dVar14 + dVar6 * dVar13 + dVar4 * dVar12 + dVar11 * 0.0;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    lVar23 = *(longlong *)(param_3 + 0x2f8);
    lVar16 = *(longlong *)(param_2 + 0x28);
    lVar17 = *(longlong *)(param_6 + 4);
    if (lVar17 != lVar16) {
      *(longlong *)(param_6 + 4) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      if (lVar17 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar17 + 8);
        uVar25 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar25 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    lVar16 = *(longlong *)(param_2 + 0x30);
    lVar17 = *(longlong *)(param_6 + 6);
    if (lVar17 != lVar16) {
      *(longlong *)(param_6 + 6) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      if (lVar17 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar17 + 8);
        uVar25 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar25 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    lVar16 = *(longlong *)(param_2 + 0x38);
    lVar17 = *(longlong *)(param_6 + 8);
    if (lVar17 != lVar16) {
      *(longlong *)(param_6 + 8) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      if (lVar17 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar17 + 8);
        uVar25 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar25 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    param_6[10] = *(undefined4 *)(param_2 + 0x40);
    param_6[0xb] = *(undefined4 *)(param_2 + 0x44);
    param_6[0xc] = *(undefined4 *)(param_2 + 0x48);
    lVar23 = *(longlong *)(lVar23 + 0x68);
    if (lVar23 == 0) {
      lVar23 = DAT_14cb428f0;
    }
    lVar16 = *(longlong *)(param_6 + 0xe);
    if (lVar16 != lVar23) {
      *(longlong *)(param_6 + 0xe) = lVar23;
      if (lVar23 != 0) {
        LOCK();
        *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
        UNLOCK();
      }
      if (lVar16 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar16 + 8);
        uVar25 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar25 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    param_6[0x10] = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x5c);
  }
  if ((longlong)*(int *)(param_2 + 0x20) != -1) {
    lVar15 = lVar15 + (longlong)*(int *)(param_2 + 0x20) * 8;
    uVar22 = (uint)*(ushort *)(lVar15 + (ulonglong)*(byte *)(param_2 + 0x15) * 2);
    uVar25 = 0xffffffff;
    if (uVar22 != 0xffff) {
      uVar25 = uVar22;
    }
    param_6[2] = (uint)*(byte *)(lVar15 + 7) << 0x1f | uVar25;
  }
  return;
}



// FUNCTION 143aba1b2 FUN_143aba1b2 body=1396 status=ok
// SIG undefined FUN_143aba1b2(void)

void FUN_143aba1b2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 *param_6,uint param_7)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  
  uVar26 = 0;
  if ((-1 < (int)param_7) &&
     (uVar26 = 0, (int)param_7 < *(int *)(*(longlong *)(param_2 + 8) + 0x168))) {
    uVar26 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_2 + 8) + 0x160) + (ulonglong)param_7 * 4);
  }
  lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x10);
  *param_6 = uVar26;
  *(undefined1 *)(param_6 + 1) = *(undefined1 *)(param_1 + 0x123);
  iVar28 = 0x14;
  if (*(int *)(*(longlong *)(param_2 + 8) + 0x58) == 2) {
    iVar28 = 0x28;
  }
  param_6[0xa8] = (iVar28 - (uint)((*(uint *)(param_1 + 0x13c) & 4) == 0)) + 0x82;
  *(undefined1 *)(param_6 + 0x1e) = *(undefined1 *)(param_2 + 0x17);
  param_6[0x22] = *(undefined4 *)(param_2 + 0x4c);
  param_6[0x23] = *(undefined4 *)(param_1 + 0x194);
  *(undefined8 *)(param_6 + 0x34) = *(undefined8 *)(param_1 + 0x150);
  if ((*(byte *)(param_1 + 0x13c) & 0x40) != 0) {
    uVar21 = (uint)*(ushort *)(lVar14 + (ulonglong)*(byte *)(param_2 + 0x15) * 2);
    uVar27 = 0xffffffff;
    if (uVar21 != 0xffff) {
      uVar27 = uVar21;
    }
    param_6[0x1f] = (uint)*(byte *)(lVar14 + 7) << 0x1f | uVar27;
  }
  *(undefined8 *)(param_6 + 0x16) = *(undefined8 *)(param_4 + 0x1058);
  uVar20 = *(undefined8 *)(param_4 + 0x1050);
  *(undefined8 *)(param_6 + 0x12) = *(undefined8 *)(param_4 + 0x1048);
  *(undefined8 *)(param_6 + 0x14) = uVar20;
  dVar2 = *(double *)(param_4 + 0xa00);
  dVar3 = *(double *)(param_4 + 0x9c0);
  dVar4 = *(double *)(param_4 + 0x9e0);
  *(double *)(param_6 + 0x18) = dVar3;
  *(double *)(param_6 + 0x1a) = dVar4;
  *(double *)(param_6 + 0x1c) = dVar2;
  if (((*(byte *)(param_1 + 0xf0) & 1) != 0) || (*(char *)(param_3 + 0x388) == '\x01')) {
    dVar5 = *(double *)(param_6 + 0x16);
    dVar6 = *(double *)(param_6 + 0x12);
    dVar7 = *(double *)(param_6 + 0x14);
    dVar17 = *(double *)(param_3 + 0x308);
    dVar18 = *(double *)(param_3 + 0x328);
    dVar19 = *(double *)(param_3 + 0x348);
    dVar12 = *(double *)(param_3 + 0x368);
    dVar8 = *(double *)(param_3 + 0x350);
    dVar9 = *(double *)(param_3 + 0x330);
    dVar10 = *(double *)(param_3 + 0x310);
    dVar11 = *(double *)(param_3 + 0x370);
    *(double *)(param_6 + 0x12) =
         dVar5 * *(double *)(param_3 + 0x340) +
         dVar7 * *(double *)(param_3 + 800) + dVar6 * *(double *)(param_3 + 0x300) +
         *(double *)(param_3 + 0x360);
    *(double *)(param_6 + 0x14) = dVar5 * dVar19 + dVar7 * dVar18 + dVar6 * dVar17 + dVar12;
    *(double *)(param_6 + 0x16) = dVar6 * dVar10 + dVar7 * dVar9 + dVar5 * dVar8 + dVar11;
    dVar5 = *(double *)(param_3 + 0x120);
    dVar6 = *(double *)(param_3 + 0x128);
    dVar7 = *(double *)(param_3 + 0x130);
    dVar8 = *(double *)(param_3 + 0x138);
    dVar9 = *(double *)(param_3 + 0x158);
    dVar10 = *(double *)(param_3 + 0x150);
    dVar11 = *(double *)(param_3 + 0x148);
    dVar12 = *(double *)(param_3 + 0x140);
    *(double *)(param_6 + 0x18) =
         *(double *)(param_3 + 0x118) * 0.0 +
         dVar2 * *(double *)(param_3 + 0x110) +
         dVar4 * *(double *)(param_3 + 0x108) + dVar3 * *(double *)(param_3 + 0x100);
    *(double *)(param_6 + 0x1a) = dVar8 * 0.0 + dVar2 * dVar7 + dVar4 * dVar6 + dVar3 * dVar5;
    *(double *)(param_6 + 0x1c) = dVar3 * dVar12 + dVar4 * dVar11 + dVar2 * dVar10 + dVar9 * 0.0;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    lVar23 = *(longlong *)(param_3 + 0x2f8);
    lVar15 = *(longlong *)(param_2 + 0x28);
    lVar16 = *(longlong *)(param_6 + 4);
    if (lVar16 != lVar15) {
      *(longlong *)(param_6 + 4) = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      if (lVar16 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar16 + 8);
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar27 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar16 + 8);
          LOCK();
          uVar27 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar27 >> 0x1e & 1) == 0) {
            bVar13 = *(byte *)(lVar16 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = lVar16;
            plVar25 = DAT_14ca843c0;
            plVar24 = DAT_14ca843c8;
            if ((bVar13 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar25;
                LOCK();
                bVar29 = plVar25 != DAT_14ca843c0;
                plVar24 = plVar22;
                if (bVar29) {
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar24;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar29 = plVar24 != DAT_14ca843c8;
                plVar25 = plVar22;
                if (bVar29) {
                  plVar24 = DAT_14ca843c8;
                  plVar25 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar25;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
    }
    lVar15 = *(longlong *)(param_2 + 0x30);
    lVar16 = *(longlong *)(param_6 + 6);
    if (lVar16 != lVar15) {
      *(longlong *)(param_6 + 6) = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      if (lVar16 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar16 + 8);
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar27 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar16 + 8);
          LOCK();
          uVar27 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar27 >> 0x1e & 1) == 0) {
            bVar13 = *(byte *)(lVar16 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = lVar16;
            plVar25 = DAT_14ca843c0;
            plVar24 = DAT_14ca843c8;
            if ((bVar13 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar25;
                LOCK();
                bVar29 = plVar25 != DAT_14ca843c0;
                plVar24 = plVar22;
                if (bVar29) {
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar24;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar29 = plVar24 != DAT_14ca843c8;
                plVar25 = plVar22;
                if (bVar29) {
                  plVar24 = DAT_14ca843c8;
                  plVar25 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar25;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
    }
    lVar15 = *(longlong *)(param_2 + 0x38);
    lVar16 = *(longlong *)(param_6 + 8);
    if (lVar16 != lVar15) {
      *(longlong *)(param_6 + 8) = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      if (lVar16 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar16 + 8);
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar27 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar16 + 8);
          LOCK();
          uVar27 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar27 >> 0x1e & 1) == 0) {
            bVar13 = *(byte *)(lVar16 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = lVar16;
            plVar25 = DAT_14ca843c0;
            plVar24 = DAT_14ca843c8;
            if ((bVar13 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar25;
                LOCK();
                bVar29 = plVar25 != DAT_14ca843c0;
                plVar24 = plVar22;
                if (bVar29) {
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar24;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar29 = plVar24 != DAT_14ca843c8;
                plVar25 = plVar22;
                if (bVar29) {
                  plVar24 = DAT_14ca843c8;
                  plVar25 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar25;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
    }
    param_6[10] = *(undefined4 *)(param_2 + 0x40);
    param_6[0xb] = *(undefined4 *)(param_2 + 0x44);
    param_6[0xc] = *(undefined4 *)(param_2 + 0x48);
    lVar23 = *(longlong *)(lVar23 + 0x68);
    if (lVar23 == 0) {
      lVar23 = DAT_14cb428f0;
    }
    lVar15 = *(longlong *)(param_6 + 0xe);
    if (lVar15 != lVar23) {
      *(longlong *)(param_6 + 0xe) = lVar23;
      if (lVar23 != 0) {
        LOCK();
        *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
        UNLOCK();
      }
      if (lVar15 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar15 + 8);
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar27 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar15 + 8);
          LOCK();
          uVar27 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar27 >> 0x1e & 1) == 0) {
            bVar13 = *(byte *)(lVar15 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = lVar15;
            plVar25 = DAT_14ca843c0;
            plVar24 = DAT_14ca843c8;
            if ((bVar13 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar25;
                LOCK();
                bVar29 = plVar25 != DAT_14ca843c0;
                plVar24 = plVar22;
                if (bVar29) {
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar24;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar29 = plVar24 != DAT_14ca843c8;
                plVar25 = plVar22;
                if (bVar29) {
                  plVar24 = DAT_14ca843c8;
                  plVar25 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar25;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
    }
    uVar26 = 0xffffffff;
    if ((-1 < (int)param_7) && ((int)param_7 < *(int *)(*(longlong *)(param_2 + 8) + 0x178))) {
      uVar26 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_2 + 8) + 0x170) + (ulonglong)param_7 * 4);
    }
    param_6[0x10] = uVar26;
  }
  if ((longlong)*(int *)(param_2 + 0x20) != -1) {
    lVar14 = lVar14 + (longlong)*(int *)(param_2 + 0x20) * 8;
    uVar21 = (uint)*(ushort *)(lVar14 + (ulonglong)*(byte *)(param_2 + 0x15) * 2);
    uVar27 = 0xffffffff;
    if (uVar21 != 0xffff) {
      uVar27 = uVar21;
    }
    param_6[2] = (uint)*(byte *)(lVar14 + 7) << 0x1f | uVar27;
  }
  return;
}



// FUNCTION 143aba726 FUN_143aba726 body=1675 status=ok
// SIG undefined FUN_143aba726(void)

void FUN_143aba726(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined4 param_8,int param_9,
                  undefined1 param_10)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  uint local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_50 = 0;
  local_68 = param_3[5];
  local_60 = param_3[6];
  local_84 = *(uint *)(param_3 + 8);
  if (*(uint *)(param_3 + 8) < *(uint *)((longlong)param_3 + 0x44)) {
    local_84 = *(uint *)((longlong)param_3 + 0x44);
  }
  local_d0 = *(undefined8 *)(*param_3 + 0x30);
  local_88 = *(undefined4 *)(param_7 + 0x148);
  local_70 = *(longlong *)(param_7 + 0x150);
  if (*(longlong *)(param_7 + 0x150) == 0) {
    local_70 = DAT_14cb2be78;
  }
  local_80 = *(undefined4 *)(param_7 + 0x158);
  local_7c = *(undefined4 *)(param_7 + 0x15c);
  local_58 = *(longlong *)(param_7 + 0x160);
  if (*(longlong *)(param_7 + 0x160) == 0) {
    local_58 = DAT_14cb2d4c0;
  }
  local_78 = *(undefined4 *)(param_7 + 0x168);
  uVar13 = 0;
  if (param_9 == -1) {
    local_d8 = 0;
    lVar14 = 0;
  }
  else {
    local_d8 = 0;
    lVar14 = 0;
    if (*(char *)(param_1 + 0x120) == '\0') {
      local_f8 = *(undefined4 *)(param_3[1] + 0x58);
      if (*(char *)(param_5 + 0x23f2) == '\x01') {
        local_108 = *(int *)(param_5 + 0x1dd0) == 1;
      }
      else {
        local_108 = false;
      }
      local_118 = *(undefined4 *)(param_1 + 0x138);
      local_100 = param_10;
      local_110 = 0;
      FUN_1449a30d8(*(longlong *)(param_6 + 0x2f8) + 0x38,&local_c8,param_2);
      local_d8 = lStack_c0;
      lVar14 = local_c8;
      if ((uint)local_b8 != 0xffffffff) {
        local_50 = lStack_c0;
        local_e8 = (uint)local_b8;
        uVar13 = (uint)local_b8 >> 2;
        local_e4 = 0;
        goto LAB_143aba8ff;
      }
    }
  }
  local_e8 = 0xffffffff;
  local_e4 = (undefined4)CONCAT71((int7)((ulonglong)DAT_14cb2d4c0 >> 8),1);
  local_50 = DAT_14cb2d4c0;
LAB_143aba8ff:
  local_74 = uVar13;
  lVar3 = FUN_144aecbda();
  local_110 = 1;
  local_118 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_c8,&local_88,*(undefined8 *)(lVar3 + 0x48));
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
    if (local_c8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_c8 + 8);
      uVar13 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_c8 + 8);
        LOCK();
        uVar13 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(local_c8 + 0xd);
          local_e0 = param_2;
          plVar4 = (longlong *)FUN_14001cc68(0x10);
          plVar4[1] = local_c8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          param_2 = local_e0;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar15 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar15) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar15 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar15) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  lVar3 = *(longlong *)(param_7 + 0x130);
  *(longlong *)(param_7 + 0x130) = local_c8;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar13 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar13 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(lVar3 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10);
        plVar4[1] = lVar3;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar15 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar15) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar15 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar15) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  param_4[0x17] = param_7;
  uVar8 = 0;
  uVar13 = 0;
  if ((*(byte *)(param_6 + 0x70) & 1) != 0) {
    uVar13 = *(uint *)(param_1 + 0x13c) & 0x100;
  }
  uVar2 = *(uint *)((longlong)param_4 + 0xe4);
  *(uint *)((longlong)param_4 + 0xe4) = uVar2 & 0xfffffeff | uVar13;
  if ((*(byte *)(param_6 + 0x70) & 1) != 0) {
    uVar8 = (*(uint *)(param_1 + 0x13c) & 0x100) << 0x16;
  }
  *(uint *)((longlong)param_4 + 0xe4) = uVar2 & 0xbffff6ff | uVar13 | uVar8;
  uVar9 = (*(byte *)(param_6 + 0x6b) & 1) << 6;
  *(uint *)((longlong)param_4 + 0xe4) = uVar2 & 0xbffe36bf | uVar13 | uVar8 | uVar9;
  if (((*(byte *)(param_6 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_6 + 0xf0) != 0)) {
    uVar12 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_6 + 0xe8) + uVar12) == *(longlong *)(param_5 + 0x4c0)) {
        if ((int)(~uVar12 >> 3) != 0) {
          bVar7 = *(byte *)(param_6 + 0x6d) >> 3;
          goto LAB_143abaafa;
        }
        break;
      }
      uVar12 = uVar12 + 8;
    } while ((longlong)*(int *)(param_6 + 0xf0) * 8 != uVar12);
  }
  bVar7 = *(byte *)(param_6 + 0x6d);
LAB_143abaafa:
  uVar13 = (uVar2 & 0xbfe036bf | uVar13 | uVar8 | uVar9) + (bVar7 & 7) * 0x20000 + 0x100000;
  *(uint *)((longlong)param_4 + 0xe4) = uVar13;
  uVar8 = (uint)((*(byte *)(param_6 + 0x6c) & 6) != 0) << 0x15;
  *(uint *)((longlong)param_4 + 0xe4) = uVar13 & 0xffde37ff | uVar8;
  *(undefined4 *)(param_4 + 0x1b) = 0;
  param_4[0x18] = local_d0;
  *(uint *)((longlong)param_4 + 0xe4) =
       uVar13 & 0xffde17ff | uVar8 | (*(byte *)(param_6 + 0x77) & 0x40) << 7;
  puVar11 = (undefined8 *)param_4[0x15];
  if ((undefined8 *)param_4[0x15] == (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  puVar11[3] = &DAT_14caf6030;
  *(undefined4 *)(puVar11 + 0xb) = 0;
  *(uint *)((longlong)puVar11 + 0x5c) = *(uint *)(param_1 + 0x138) / 3;
  *(undefined4 *)(puVar11 + 0xc) = param_8;
  puVar11[0xd] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_98 = 0;
  if ((*(byte *)(param_1 + 0xf0) & 4) == 0) {
    lVar3 = FUN_1447fbca2(param_6,param_2,0,&local_c8);
    puVar10 = (undefined8 *)(lVar3 + 0x18);
  }
  else {
    puVar10 = (undefined8 *)(param_6 + 0x250);
  }
  lVar3 = local_d8;
  *puVar11 = *puVar10;
  if ((char)local_e4 == '\0') {
    puVar11[9] = lVar14;
    *(uint *)(puVar11 + 10) = local_e8;
    *(undefined4 *)((longlong)puVar11 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x188) == 8) {
    puVar11[3] = &DAT_14caf5b58;
  }
  if (local_d8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 8);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d8 + 8);
      LOCK();
      uVar13 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar13 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(local_d8 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar3;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar15 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar15) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar15 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar15) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  if (lVar14 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar14 + 8);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar14 + 8);
      LOCK();
      uVar13 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar13 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(lVar14 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar14;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar15 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar15) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar15 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar15) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143abadcf FUN_143abadcf body=69 status=ok
// SIG undefined FUN_143abadcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abadcf(void)

{
  _DAT_14cb42cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abae11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42cc8,1);
  return;
}



// FUNCTION 143abae14 FUN_143abae14 body=399 status=ok
// SIG undefined FUN_143abae14(void)

void FUN_143abae14(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  uint *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  local_38 = *(undefined8 *)(param_5 + 4);
  uVar7 = *param_5;
  if (DAT_14ca84e48 <= *param_5) {
    uVar7 = DAT_14ca84e48;
  }
  local_48 = uVar7 + (uVar7 == 0);
  uVar7 = DAT_14ca84e48;
  if (param_5[1] < DAT_14ca84e48) {
    uVar7 = param_5[1];
  }
  iStack_44 = uVar7 + (uVar7 == 0);
  uVar8 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar8 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar5) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x160);
    uVar8 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar8 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar5;
  FUN_1456bd266(uVar8,param_3,&local_48,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(param_2 + 0x188,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar8;
  *(int *)(uVar8 + 0x7c) = *(int *)(param_2 + 400) + -1;
  param_1[2] = uVar8;
  plVar6 = (longlong *)FUN_1449609de(param_2,uVar8);
  puVar3 = (undefined8 *)*plVar6;
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != puVar3) {
    *param_1 = (longlong)puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = param_4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143abafa4 FUN_143abafa4 body=49 status=ok
// SIG undefined FUN_143abafa4(void)

void FUN_143abafa4(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143abafd6 FUN_143abafd6 body=16 status=ok
// SIG undefined FUN_143abafd6(void)

void FUN_143abafd6(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143abafe6 FUN_143abafe6 body=55 status=ok
// SIG undefined FUN_143abafe6(void)

void FUN_143abafe6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42cd8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42cd8 = FUN_14171c317(FUN_146478627,uVar1,L"ENiagaraRibbonFacingMode");
  }
  return;
}



// FUNCTION 143abb01d FUN_143abb01d body=55 status=ok
// SIG undefined FUN_143abb01d(void)

void FUN_143abb01d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42cf0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42cf0 = FUN_14171c317(FUN_146478656,uVar1,L"ENiagaraRibbonAgeOffsetMode");
  }
  return;
}



// FUNCTION 143abb054 FUN_143abb054 body=55 status=ok
// SIG undefined FUN_143abb054(void)

void FUN_143abb054(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d08 = FUN_14171c317(FUN_146478685,uVar1,L"ENiagaraRibbonDrawDirection");
  }
  return;
}



// FUNCTION 143abb08b FUN_143abb08b body=55 status=ok
// SIG undefined FUN_143abb08b(void)

void FUN_143abb08b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d20 = FUN_14171c317(FUN_1464786b4,uVar1,L"ENiagaraRibbonShapeMode");
  }
  return;
}



// FUNCTION 143abb0c2 FUN_143abb0c2 body=55 status=ok
// SIG undefined FUN_143abb0c2(void)

void FUN_143abb0c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d50 = FUN_14171c317(FUN_14647877a,uVar1,L"ENiagaraRibbonTessellationMode");
  }
  return;
}



// FUNCTION 143abb0f9 FUN_143abb0f9 body=55 status=ok
// SIG undefined FUN_143abb0f9(void)

void FUN_143abb0f9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d68 = FUN_14171c317(FUN_1464787a9,uVar1,L"ENiagaraRibbonUVEdgeMode");
  }
  return;
}



// FUNCTION 143abb130 FUN_143abb130 body=55 status=ok
// SIG undefined FUN_143abb130(void)

void FUN_143abb130(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d80 = FUN_14171c317(FUN_1464787d8,uVar1,L"ENiagaraRibbonUVDistributionMode");
  }
  return;
}



// FUNCTION 143abb190 FUN_143abb190 body=69 status=ok
// SIG undefined FUN_143abb190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb190(void)

{
  _DAT_14cb42df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42df8,1);
  return;
}



// FUNCTION 143abb1d5 FUN_143abb1d5 body=69 status=ok
// SIG undefined FUN_143abb1d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb1d5(void)

{
  _DAT_14cb42e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e08,1);
  return;
}



// FUNCTION 143abb21a FUN_143abb21a body=69 status=ok
// SIG undefined FUN_143abb21a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb21a(void)

{
  _DAT_14cb42e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e18,1);
  return;
}



// FUNCTION 143abb25f FUN_143abb25f body=69 status=ok
// SIG undefined FUN_143abb25f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb25f(void)

{
  _DAT_14cb42e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e28,1);
  return;
}



// FUNCTION 143abb2a4 FUN_143abb2a4 body=69 status=ok
// SIG undefined FUN_143abb2a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb2a4(void)

{
  _DAT_14cb42e30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e38,1);
  return;
}



// FUNCTION 143abb2e9 FUN_143abb2e9 body=69 status=ok
// SIG undefined FUN_143abb2e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb2e9(void)

{
  _DAT_14cb42e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e48,1);
  return;
}



// FUNCTION 143abb32e FUN_143abb32e body=69 status=ok
// SIG undefined FUN_143abb32e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abb32e(void)

{
  _DAT_14cb42e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abb370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb42e60,1);
  return;
}



// FUNCTION 143abb374 FUN_143abb374 body=1969 status=ok
// SIG undefined FUN_143abb374(void)

void FUN_143abb374(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_d8 [32];
  longlong local_b8 [4];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_1[0x1b] == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
      plVar4 = param_1 + 0xc;
      if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0xd];
      }
      iVar10 = (int)param_1[0xe];
      iVar17 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar17 = iVar10;
      }
      if ((int)param_1[6] - *(int *)((longlong)param_1 + 0x5c) < iVar17 >> 2) {
        iVar10 = (int)param_1[10];
        if (iVar10 == 0) {
          uVar7 = 0;
          uVar16 = 1;
          iVar17 = 0;
          iVar12 = 0;
        }
        else {
          puVar14 = (uint *)param_1[9];
          if ((uint *)param_1[9] == (uint *)0x0) {
            puVar14 = (uint *)(param_1 + 7);
          }
          uVar11 = *puVar14;
          if (uVar11 == 0) {
            iVar17 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar17 = iVar10 + -1;
            }
            uVar7 = 0;
            uVar16 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar16 = uVar7;
            }
            iVar12 = 0;
            do {
              if (uVar16 == uVar7) goto LAB_143abb40d;
              iVar12 = iVar12 + 0x20;
              uVar11 = puVar14[uVar7 + 1];
              uVar7 = uVar7 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar7 = 0;
            iVar12 = 0;
          }
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar19 = uVar16 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar17 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar17) {
            iVar17 = iVar10;
          }
        }
        if (iVar17 != iVar10) {
          uVar11 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar4 + (longlong)*(int *)(param_1[5] + 0x14 + (longlong)iVar17 * 0x18) * 4
             ) = 0xffffffff;
            uVar11 = ~(uint)uVar16 & uVar11;
            puVar14 = (uint *)param_1[9];
            if ((uint *)param_1[9] == (uint *)0x0) {
              puVar14 = (uint *)(param_1 + 7);
            }
            iVar2 = (int)param_1[10];
            iVar17 = (int)uVar7;
            lVar6 = (longlong)iVar17;
            uVar3 = puVar14[lVar6] & uVar11;
            if (uVar3 == 0) {
              iVar20 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar20 = iVar2 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar21 = iVar20;
              if (iVar20 < iVar17) {
                iVar21 = iVar17;
              }
              if (iVar17 < iVar20) {
                lVar13 = 0;
                do {
                  uVar3 = puVar14[lVar6 + lVar13 + 1];
                  if (uVar3 != 0) {
                    uVar7 = (ulonglong)(iVar17 + (int)lVar13 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_143abb6be;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar21 - lVar6 != lVar13);
                uVar11 = 0xffffffff;
                lVar6 = (longlong)iVar21;
              }
              uVar7 = lVar6 + 1U & 0xffffffff;
              iVar17 = iVar2;
            }
            else {
LAB_143abb6be:
              uVar16 = (ulonglong)(-uVar3 & uVar3);
              uVar19 = uVar16 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar17 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar17) {
                iVar17 = iVar2;
              }
            }
          } while (iVar17 != iVar10);
        }
      }
      else if (0 < iVar10) {
        lVar6 = 0;
        do {
          *(undefined4 *)((longlong)plVar4 + lVar6 * 4) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_1[0xe]);
      }
LAB_143abb40d:
      *(undefined4 *)(param_1 + 6) = 0;
      if (*(int *)((longlong)param_1 + 0x34) < 0) {
        FUN_144727cd0(param_1 + 5);
      }
      param_1[0xb] = 0xffffffff;
      *(undefined4 *)(param_1 + 10) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x84) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_1481f1eba(param_1 + 0xf);
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (0 < (int)param_1[2]) {
      iVar10 = 0;
      do {
        FUN_1449a78be(param_1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)param_1[2]);
    }
  }
  uVar11 = DAT_14caf2f10;
  lVar6 = *param_1;
  if ((lVar6 == 0) || (DAT_14cb444a0 == '\x02')) {
    while ((int)param_1[2] != 0) {
      FUN_140388f74(*(undefined8 *)(param_1[1] + (longlong)((int)param_1[2] + -1) * 8));
    }
    param_1[0x11] = 0;
    goto LAB_143abb521;
  }
  if (param_4 != '\0') {
    if ((*(uint *)(lVar6 + 0x74) & 1) != 0) {
      local_98 = 0;
      local_90 = 0x8000000000;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_80 = 0x101;
      *(uint *)(lVar6 + 0x74) = *(uint *)(lVar6 + 0x74) & 0xfffffffe;
      local_88 = (ulonglong)uVar11 << 0x20;
      FUN_144774e32(param_1,param_2,local_b8);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
    }
    goto LAB_143abb521;
  }
  iVar10 = *(int *)(lVar6 + 0x2c);
  if (iVar10 == 0) goto LAB_143abb521;
  fVar23 = DAT_14c7629ac;
  if (((iVar10 != 1) && (fVar23 = DAT_14c7629b0, iVar10 != 2)) && (fVar23 = 0.0, iVar10 == 3)) {
    fVar23 = DAT_14c7629b4;
  }
  dVar1 = *(double *)(*(longlong *)(param_2 + 0x10) + 0x6d0);
  if (iVar10 == 4 || *(byte *)(param_1 + 0x12) != 0) {
LAB_143abb738:
    uVar9 = *(uint *)(param_1 + 2);
LAB_143abb73b:
    param_1[0x11] = (longlong)dVar1;
    *(undefined2 *)((longlong)param_1 + 0xd2) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    if (((int)DAT_14c7629bc < 1) || ((*(int *)(lVar6 + 0x2c) == 4 && (DAT_14cb42e68 != '\x01')))) {
      *(uint *)(param_1 + 0x19) = uVar9;
      goto LAB_143abb9c0;
    }
    uVar3 = uVar9;
    if (((1e-08 < fVar23) && (param_3 < fVar23)) &&
       (fVar23 = ((float)(int)uVar9 * param_3) / fVar23,
       uVar3 = -((int)ROUND(-0.5 - (fVar23 + fVar23)) >> 1), (int)uVar9 <= (int)uVar3)) {
      uVar3 = uVar9;
    }
    uVar15 = DAT_14c7629bc;
    if ((int)uVar3 < (int)DAT_14c7629bc) {
      uVar15 = uVar3;
    }
    uVar7 = (ulonglong)uVar15;
    *(uint *)(param_1 + 0x19) = uVar15;
    bVar5 = *(byte *)(param_1 + 0x12) | uVar15 == uVar9;
    *(byte *)((longlong)param_1 + 0xd1) = bVar5;
    if (bVar5 == 1) goto LAB_143abb9c7;
    *(uint *)(param_1 + 0x18) = uVar9;
    uVar9 = uVar9 + 0x1f;
    if (0x1f < uVar9) {
      uVar3 = uVar9 >> 5;
      if (*(int *)((longlong)param_1 + 0xc4) + 0x1fU >> 5 < uVar3) {
        if ((0x9f < uVar9) || (param_1[0x17] != 0)) {
          uVar15 = 0;
          if (0x9f < uVar9) {
            uVar15 = uVar3;
          }
          uVar7 = 0;
          FUN_1446efa72(param_1 + 0x17,0,uVar15,4);
        }
        *(uint *)((longlong)param_1 + 0xc4) = uVar9 & 0xffffffe0;
      }
      plVar4 = (longlong *)param_1[0x17];
      if ((longlong *)param_1[0x17] == (longlong *)0x0) {
        plVar4 = param_1 + 0x15;
      }
      uVar8 = (undefined7)(uVar7 >> 8);
      if (uVar9 < 0x120) {
        uVar3 = uVar9 >> 3 & 0x3c;
        iVar10 = (int)CONCAT71(uVar8,0xff);
      }
      else {
        uVar3 = uVar3 << 2;
        iVar10 = (int)CONCAT71(uVar8,0xff);
      }
      memset(plVar4,iVar10,(ulonglong)uVar3);
      iVar10 = (int)param_1[0x18];
      iVar17 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar17 = iVar10;
      }
      if (iVar10 % 0x20 != 0) {
        plVar4 = param_1 + 0x15;
        if ((longlong *)param_1[0x17] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[0x17];
        }
        bVar5 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar4 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar17 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
  }
  else {
    if (fVar23 <= (float)(dVar1 - (double)param_1[0x11])) {
      puVar14 = (uint *)(param_1 + 0x15);
      if ((uint *)param_1[0x17] != (uint *)0x0) {
        puVar14 = (uint *)param_1[0x17];
      }
      uVar3 = *(uint *)(param_1 + 0x18);
      if (0x1f < uVar3 + 0x1f) {
        lVar13 = 0;
LAB_143abba34:
        uVar9 = *puVar14;
        if (uVar9 == 0) goto code_r0x000143abba3c;
        iVar10 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
          }
        }
        if ((int)uVar3 <= iVar10 - (int)lVar13) goto LAB_143abb738;
        uVar9 = *(uint *)(param_1 + 2);
        if (iVar10 + 1 != (int)lVar13) goto LAB_143abb88c;
        goto LAB_143abb73b;
      }
      goto LAB_143abb738;
    }
    uVar9 = *(uint *)(param_1 + 2);
    uVar3 = *(uint *)(param_1 + 0x18);
LAB_143abb88c:
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x19) = 0;
      goto LAB_143abb9d1;
    }
    plVar4 = param_1 + 0x15;
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x17];
    }
    uVar15 = 0xffffffff >> (-(char)((int)uVar3 % 0x20) & 0x1fU);
    if ((int)uVar3 % 0x20 < 1) {
      uVar15 = 0xffffffff;
    }
    if ((int)uVar3 < 1) {
      uVar3 = 0;
    }
    else {
      uVar7 = (ulonglong)(uVar3 + 0x1f >> 5);
      uVar18 = 0xffffffff;
      if (uVar3 < 0x21) {
        uVar18 = uVar15;
      }
      uVar16 = 0;
      uVar3 = 0;
      do {
        uVar18 = uVar18 & *(uint *)((longlong)plVar4 + uVar16 * 4);
        uVar19 = (ulonglong)uVar18 - (ulonglong)(uVar18 >> 1 & 0x55555555);
        uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
        uVar3 = uVar3 + (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
        bVar22 = uVar7 - 2 == uVar16;
        uVar16 = uVar16 + 1;
        uVar18 = 0xffffffff;
        if (bVar22) {
          uVar18 = uVar15;
        }
      } while (uVar7 != uVar16);
    }
    if (0 < (int)DAT_14c7629bc) {
      if (((1e-08 < fVar23) && (param_3 < fVar23)) &&
         (fVar23 = ((float)(int)uVar3 * param_3) / fVar23,
         uVar15 = -((int)ROUND(-0.5 - (fVar23 + fVar23)) >> 1), (int)uVar15 < (int)uVar3)) {
        uVar3 = uVar15;
      }
      if ((int)DAT_14c7629bc <= (int)uVar3) {
        uVar3 = DAT_14c7629bc;
      }
    }
    *(uint *)(param_1 + 0x19) = uVar3;
    if (uVar3 != uVar9) goto LAB_143abb9d1;
LAB_143abb9c0:
    *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
LAB_143abb9c7:
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_143abb9d1:
  if ((int)param_1[0x19] != 0) {
    *(uint *)((longlong)param_1 + 0xcc) = uVar11;
    FUN_144774e32(param_1,param_2,param_1 + 0x13);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
LAB_143abb521:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143abba3c:
  lVar13 = lVar13 + -0x20;
  puVar14 = puVar14 + 1;
  if ((ulonglong)(uVar3 + 0x1f & 0xffffffe0) + lVar13 == 0) goto LAB_143abb738;
  goto LAB_143abba34;
}



// FUNCTION 143abbb26 FUN_143abbb26 body=55 status=ok
// SIG undefined FUN_143abbb26(void)

void FUN_143abbb26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42e90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42e90 = FUN_14171c317(FUN_146478a30,uVar1,L"EUnusedAttributeBehaviour");
  }
  return;
}



// FUNCTION 143abbb5d FUN_143abbb5d body=55 status=ok
// SIG undefined FUN_143abbb5d(void)

void FUN_143abbb5d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42ea8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42ea8 = FUN_14171c317(FUN_146478a5f,uVar1,L"ENiagaraModuleDependencyType");
  }
  return;
}



// FUNCTION 143abbb94 FUN_143abbb94 body=55 status=ok
// SIG undefined FUN_143abbb94(void)

void FUN_143abbb94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42ec0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42ec0 = FUN_14171c317(FUN_146478a8e,uVar1,L"ENiagaraModuleDependencyScriptConstraint");
  }
  return;
}



// FUNCTION 143abbbcb FUN_143abbbcb body=55 status=ok
// SIG undefined FUN_143abbbcb(void)

void FUN_143abbbcb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42ed8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42ed8 = FUN_14171c317(FUN_146478abd,uVar1,L"ENiagaraScriptLibraryVisibility");
  }
  return;
}



// FUNCTION 143abbc02 FUN_143abbc02 body=55 status=ok
// SIG undefined FUN_143abbc02(void)

void FUN_143abbc02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42ef0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42ef0 = FUN_14171c317(FUN_146478aec,uVar1,L"ENiagaraScriptTemplateSpecification");
  }
  return;
}



// FUNCTION 143abbc39 FUN_143abbc39 body=55 status=ok
// SIG undefined FUN_143abbc39(void)

void FUN_143abbc39(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f08 = FUN_14171c317(FUN_146478b1b,uVar1,L"ENiagaraEmitterDefaultSummaryState");
  }
  return;
}



// FUNCTION 143abbc70 FUN_143abbc70 body=55 status=ok
// SIG undefined FUN_143abbc70(void)

void FUN_143abbc70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f20 = FUN_14171c317(FUN_146478b4a,uVar1,L"ENiagaraModuleDependencyUsage");
  }
  return;
}



// FUNCTION 143abbca7 FUN_143abbca7 body=55 status=ok
// SIG undefined FUN_143abbca7(void)

void FUN_143abbca7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42fb0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42fb0 = FUN_14171c317(FUN_146478e6a,uVar1,L"ENiagaraInlineDynamicInputFormatTokenUsage")
    ;
  }
  return;
}



// FUNCTION 143abbcde FUN_143abbcde body=69 status=ok
// SIG undefined FUN_143abbcde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbcde(void)

{
  _DAT_14cb43018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43020,1);
  return;
}



// FUNCTION 143abbd23 FUN_143abbd23 body=69 status=ok
// SIG undefined FUN_143abbd23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbd23(void)

{
  _DAT_14cb43030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbd65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43038,1);
  return;
}



// FUNCTION 143abbd68 FUN_143abbd68 body=69 status=ok
// SIG undefined FUN_143abbd68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbd68(void)

{
  _DAT_14cb43048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbdaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43050,1);
  return;
}



// FUNCTION 143abbdad FUN_143abbdad body=69 status=ok
// SIG undefined FUN_143abbdad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbdad(void)

{
  _DAT_14cb43058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbdef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43060,1);
  return;
}



// FUNCTION 143abbdf2 FUN_143abbdf2 body=69 status=ok
// SIG undefined FUN_143abbdf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbdf2(void)

{
  _DAT_14cb43070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43078,1);
  return;
}



// FUNCTION 143abbe37 FUN_143abbe37 body=69 status=ok
// SIG undefined FUN_143abbe37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbe37(void)

{
  _DAT_14cb43080 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43088,1);
  return;
}



// FUNCTION 143abbe7c FUN_143abbe7c body=69 status=ok
// SIG undefined FUN_143abbe7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbe7c(void)

{
  _DAT_14cb43090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43098,1);
  return;
}



// FUNCTION 143abbec1 FUN_143abbec1 body=69 status=ok
// SIG undefined FUN_143abbec1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbec1(void)

{
  _DAT_14cb430a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbf03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb430a8,1);
  return;
}



// FUNCTION 143abbf06 FUN_143abbf06 body=69 status=ok
// SIG undefined FUN_143abbf06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abbf06(void)

{
  _DAT_14cb430b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abbf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb430c0,1);
  return;
}



// FUNCTION 143abbf4c FUN_143abbf4c body=11 status=ok
// SIG undefined FUN_143abbf4c(void)

bool FUN_143abbf4c(longlong param_1)

{
  return *(char *)(param_1 + 0x170) != '\0';
}



// FUNCTION 143abbf58 FUN_143abbf58 body=318 status=ok
// SIG undefined FUN_143abbf58(void)

void FUN_143abbf58(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_3;
  if (((((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) && (param_2[2] == piVar1[2])) &&
      ((((param_2[3] == piVar1[3] && ((char)param_2[4] == (char)piVar1[4])) &&
        ((param_2[5] == piVar1[5] && ((param_2[6] == piVar1[6] && (param_2[7] == piVar1[7])))))) &&
       (param_2[8] == piVar1[8])))) &&
     ((((((piVar1[9] ^ param_2[9]) & 0xfU) == 0 && (param_2[0x12] == piVar1[0x12])) &&
       (param_2[0x13] == piVar1[0x13])) &&
      ((param_2[0x14] == piVar1[0x14] && (param_2[0x15] == piVar1[0x15])))))) {
    if ((longlong *)(piVar1 + 0x16) != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = *(longlong *)(piVar1 + 0x16);
      piVar1[0x16] = 0;
      piVar1[0x17] = 0;
      *(int *)(param_1 + 1) = piVar1[0x18];
      *(int *)((longlong)param_1 + 0xc) = piVar1[0x19];
      piVar1[0x18] = 0;
      piVar1[0x19] = 0;
    }
    *(int *)(param_1 + 2) = piVar1[0x1a];
    lVar2 = *param_3;
    if (param_1 + 3 != (longlong *)(lVar2 + 0x70)) {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = *(longlong *)(lVar2 + 0x70);
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(int *)(param_1 + 4) = *(int *)(lVar2 + 0x78);
      *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar2 + 0x7c);
      *(undefined8 *)(lVar2 + 0x78) = 0;
    }
    *(int *)(param_1 + 5) = *(int *)(lVar2 + 0x80);
  }
  return;
}



// FUNCTION 143abc096 FUN_143abc096 body=1853 status=ok
// SIG undefined FUN_143abc096(void)

undefined8 * FUN_143abc096(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  byte bVar20;
  undefined1 uVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  uint *puVar26;
  undefined8 uVar27;
  uint uVar28;
  uint *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_98 [47];
  char local_69;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *(longlong *)(param_1 + 0x208);
  if (((*(char *)(param_1 + 0x348) == '\0') || (*(int *)(param_1 + 0x1e0) < 1)) ||
     (*(int *)(param_1 + 0x1e8) == -1)) {
    bVar20 = FUN_141838e88(param_1);
    if ((lVar9 == 0 & bVar20) != 0) goto LAB_143abc105;
  }
  else if (lVar9 == 0) {
LAB_143abc105:
    plVar24 = (longlong *)(param_1 + 0x1d8);
    plVar23 = (longlong *)FUN_14001cc68(0xd0);
    plVar23[1] = (longlong)&DAT_100000001;
    *plVar23 = (longlong)&PTR_FUN_14ae1de30;
    plVar1 = plVar23 + 9;
    memset(plVar1,0,0x88);
    *(undefined4 *)(plVar23 + 0xf) = 0xffffffff;
    plVar23[0x10] = 0;
    plVar23[0x11] = 0;
    *(undefined4 *)(plVar23 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)plVar23 + 0xc4) = 0x20;
    uVar6 = *(undefined4 *)(param_1 + 0x174);
    uVar7 = *(undefined4 *)(param_1 + 0x178);
    uVar11 = *(undefined4 *)(param_1 + 0x17c);
    uVar12 = *(undefined4 *)(param_1 + 0x180);
    uVar13 = *(undefined4 *)(param_1 + 0x184);
    uVar14 = *(undefined4 *)(param_1 + 0x188);
    uVar15 = *(undefined4 *)(param_1 + 0x18c);
    uVar16 = *(undefined4 *)(param_1 + 400);
    uVar17 = *(undefined4 *)(param_1 + 0x194);
    uVar18 = *(undefined4 *)(param_1 + 0x198);
    uVar19 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(plVar23 + 2) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)((longlong)plVar23 + 0x14) = uVar6;
    *(undefined4 *)(plVar23 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar23 + 0x1c) = uVar11;
    *(undefined4 *)(plVar23 + 4) = uVar12;
    *(undefined4 *)((longlong)plVar23 + 0x24) = uVar13;
    *(undefined4 *)(plVar23 + 5) = uVar14;
    *(undefined4 *)((longlong)plVar23 + 0x2c) = uVar15;
    *(undefined4 *)(plVar23 + 6) = uVar16;
    *(undefined4 *)((longlong)plVar23 + 0x34) = uVar17;
    *(undefined4 *)(plVar23 + 7) = uVar18;
    *(undefined4 *)((longlong)plVar23 + 0x3c) = uVar19;
    plVar23[8] = *(longlong *)(param_1 + 0x1a0);
    if (plVar1 != (longlong *)(param_1 + 0x1a8)) {
      iVar22 = *(int *)(param_1 + 0x1b0);
      pvVar10 = *(void **)(param_1 + 0x1a8);
      *(int *)(plVar23 + 10) = iVar22;
      if ((longlong)iVar22 == 0) {
        *(undefined4 *)((longlong)plVar23 + 0x54) = 0;
      }
      else {
        FUN_1447a127e(plVar1,iVar22,0);
        memcpy((void *)*plVar1,pvVar10,(longlong)iVar22);
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0x1bc);
    uVar7 = *(undefined4 *)(param_1 + 0x1c0);
    uVar11 = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(plVar23 + 0xb) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)((longlong)plVar23 + 0x5c) = uVar6;
    *(undefined4 *)(plVar23 + 0xc) = uVar7;
    *(undefined4 *)((longlong)plVar23 + 100) = uVar11;
    plVar1 = plVar23 + 0xd;
    if (plVar1 != plVar24) {
      iVar22 = *(int *)(param_1 + 0x1e0);
      pvVar10 = *(void **)(param_1 + 0x1d8);
      *(int *)(plVar23 + 0xe) = iVar22;
      if (iVar22 == 0 && *(int *)((longlong)plVar23 + 0x74) == 0) {
        *(undefined4 *)((longlong)plVar23 + 0x74) = 0;
      }
      else {
        FUN_1447a127e(plVar1,iVar22);
        if (iVar22 != 0) {
          memcpy((void *)*plVar1,pvVar10,(longlong)iVar22);
        }
      }
    }
    *(undefined4 *)(plVar23 + 0xf) = *(undefined4 *)(param_1 + 0x1e8);
    uVar21 = FUN_141838e88(param_1);
    *(undefined1 *)(plVar23 + 0x19) = uVar21;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb430e0) && (FUN_144b3d300(&DAT_14cb430e0), DAT_14cb430e0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb430d8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"vm.FreeUnoptimizedByteCode",1);
      _Init_thread_footer(&DAT_14cb430e0);
    }
    if (DAT_14cb430d8 == (longlong *)0x0) {
      bVar32 = false;
    }
    else {
      iVar22 = (**(code **)(*DAT_14cb430d8 + 0xb0))();
      bVar32 = iVar22 != 0;
    }
    *(bool *)((longlong)plVar23 + 0xc9) = bVar32;
    iVar22 = *(int *)(param_1 + 0x2a8);
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar22);
    }
    plVar1 = plVar23 + 0x13;
    local_69 = param_3;
    local_68 = param_2;
    local_60 = plVar24;
    if (*(int *)((longlong)plVar23 + 0xc4) < iVar22) {
      FUN_145cc8ff4(plVar1);
      iVar22 = *(int *)(param_1 + 0x2a8);
    }
    if (iVar22 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x2a0);
      lVar31 = 0;
      do {
        uVar6 = *(undefined4 *)(lVar9 + 0x20 + lVar31);
        uVar7 = *(undefined4 *)(lVar9 + 0x18 + lVar31);
        iVar8 = (int)plVar23[0x18];
        *(uint *)(plVar23 + 0x18) = iVar8 + 1U;
        if (*(uint *)((longlong)plVar23 + 0xc4) < iVar8 + 1U) {
          FUN_1481d9b96(plVar1,iVar8);
        }
        plVar24 = (longlong *)plVar23[0x17];
        if ((longlong *)plVar23[0x17] == (longlong *)0x0) {
          plVar24 = plVar1;
        }
        *(char *)((longlong)plVar24 + (longlong)iVar8) = (char)uVar6 + (char)uVar7;
        lVar31 = lVar31 + 0x58;
      } while ((longlong)iVar22 * 0x58 - lVar31 != 0);
    }
    plVar1 = plVar23 + 2;
    if (local_69 == '\0') {
      if (plVar23 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x208) = 0x10;
        plVar24 = *(longlong **)(param_1 + 0x210);
        if (plVar24 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x210) = 0;
LAB_143abc47d:
          LOCK();
          plVar3 = plVar24 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar2 = (int *)((longlong)plVar24 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar22 = *piVar2;
            UNLOCK();
joined_r0x000143abc46d:
            if (iVar22 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x208) = plVar1;
        plVar24 = *(longlong **)(param_1 + 0x210);
        if (plVar23 == plVar24) {
          LOCK();
          plVar24 = plVar23 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar2 = (int *)((longlong)plVar23 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar22 = *piVar2;
            UNLOCK();
            plVar24 = plVar23;
            goto joined_r0x000143abc46d;
          }
        }
        else {
          *(longlong **)(param_1 + 0x210) = plVar23;
          if (plVar24 != (longlong *)0x0) goto LAB_143abc47d;
        }
      }
      puVar4 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar26 = (uint *)*puVar4;
      if (puVar26 != (uint *)0x0) goto LAB_143abc53c;
      while( true ) {
        uVar28 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar28 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar28 | 1;
          __tlregdtor(&LAB_143abf8aa);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar25 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar25 == (undefined4 *)0x0) {
          puVar25 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar25 = 0xffffffff;
        *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
        puVar25[0x12] = 0;
        *puVar4 = puVar25;
        FUN_140217a48(puVar4);
        puVar26 = (uint *)*puVar4;
LAB_143abc53c:
        puVar30 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar29 = (uint *)(puVar30 + 0x17);
        uVar28 = puVar26[0x12];
        if (puVar29 <= puVar26 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
          LOCK();
          uVar5 = *puVar26;
          *puVar26 = *puVar26 + uVar28 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar28) != 0xffffffff) break;
          puVar26 = (uint *)*puVar4;
          *puVar26 = 0xffffffff;
          *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
          puVar26[0x12] = 0;
          *puVar4 = puVar26;
          puVar30 = (undefined8 *)((longlong)puVar26 + 0x5fU & 0xfffffffffffffff8);
          puVar29 = (uint *)(puVar30 + 0x17);
          uVar28 = 0;
          if (puVar29 <= puVar26 + 0x4000) {
            uVar28 = 1;
            goto LAB_143abc5bc;
          }
        }
      }
      uVar28 = uVar28 + 1;
LAB_143abc5bc:
      *(uint **)(puVar26 + 0x10) = puVar29;
      puVar26[0x12] = uVar28;
      FUN_1447247dc(puVar30,0);
      param_2 = local_68;
      *puVar30 = &PTR_FUN_14ae1de48;
      if (plVar23 == (longlong *)0x0) {
        puVar30[0x15] = 0x10;
        puVar30[0x16] = 0;
      }
      else {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        puVar30[0x15] = plVar1;
        puVar30[0x16] = plVar23;
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar23 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar2 = (int *)((longlong)plVar23 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
      }
      puVar30[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar30[9] = puVar30;
      puVar30[10] = puVar30;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar30[0xf] = uVar27;
      puVar30[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar30 + 0x1c) = 0;
      *param_2 = puVar30;
      if (puVar30 == (undefined8 *)0x0) {
        uVar27 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
        UNLOCK();
        uVar27 = *param_2;
      }
      local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
      FUN_1447439e4(uVar27);
    }
    else {
      FUN_140a493f8(plVar1);
      local_58 = plVar1;
      local_50 = plVar23;
      if (plVar23 == (longlong *)0x0) {
        FUN_143abbf58(local_60,param_1 + 0x170,&local_58);
        param_2 = local_68;
      }
      else {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        FUN_143abbf58(local_60,param_1 + 0x170);
        param_2 = local_68;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar23 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar2 = (int *)((longlong)plVar23 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
      }
      *param_2 = 0;
    }
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar23 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar2 = (int *)((longlong)plVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    goto LAB_143abc3de;
  }
  *param_2 = 0;
LAB_143abc3de:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143abc7d4 FUN_143abc7d4 body=1385 status=ok
// SIG undefined FUN_143abc7d4(void)

void FUN_143abc7d4(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_218 = 0;
    uStack_210 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar6 = FUN_1400439fc(param_1,0,&local_1e8);
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_1f8 = 0xfcf57afa;
  uStack_1f4 = 0x50764283;
  uStack_1f0 = 0xb9a9e658;
  uStack_1ec = 0xffa02d32;
  FUN_1448a256a(param_1);
  FUN_1400563e2(param_1 + 9,param_1);
  plVar3 = param_1 + 0x1a;
  FUN_1400563e2(plVar3,param_1);
  if ((longlong)(int)param_1[0x2d] != 0) {
    lVar13 = param_1[0xe];
    lVar5 = param_1[0x1f];
    lVar14 = (longlong)(int)param_1[0x2d] * 0x14;
    lVar16 = param_1[0x2c] + 8;
    do {
      plVar10 = (longlong *)FUN_144741050(lVar16);
      uVar8 = *(ushort *)((longlong)plVar10 + 0xc);
      if (uVar8 == 0xffff) {
        uVar8 = 0;
        if ((*plVar10 != 0) && (uVar8 = 0, (short)plVar10[1] != 1)) {
          lVar11 = FUN_144a811ba(plVar10);
          sVar4 = (short)*(undefined4 *)(lVar11 + 0x5c);
          uVar8 = -sVar4 & ((short)*(undefined4 *)(lVar11 + 0x58) + sVar4) - 1U;
        }
        *(ushort *)((longlong)plVar10 + 0xc) = uVar8;
      }
      if (((int)lVar13 < *(int *)(lVar16 + 4) + (int)(short)uVar8) ||
         ((int)lVar5 < (int)(short)uVar8 + *(int *)(lVar16 + 8))) {
        FUN_1403d2730(&local_1e8);
        FUN_1481de8c8(param_1 + 0x3b,&local_1e8);
        FUN_1401b516e(&local_1e8);
        goto LAB_143abcac8;
      }
      lVar16 = lVar16 + 0x14;
      lVar14 = lVar14 + -0x14;
    } while (lVar14 != 0);
  }
  FUN_1448b09be(param_1 + 9,plVar3,param_1 + 0x2c);
  *(byte *)((longlong)param_1 + 0x15c) = *(byte *)((longlong)param_1 + 0x15c) | 1;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (*(int *)((longlong)param_1 + 0x16c) != 0) {
    FUN_1481d72c2(param_1 + 0x2c,0);
  }
  if (*(byte *)(param_1 + 6) - 3 < 6) {
    FUN_144842084(param_1,&local_1e8);
    if ((local_1e8 == 0) || (lVar14 = (longlong)*(int *)(local_1e8 + 0x50), lVar14 == 0))
    goto LAB_143abca7c;
    if (*(char *)(local_1e8 + 0x40) != '\0') {
      lVar13 = *(longlong *)(local_1e8 + 0x48);
      if (((local_1dc == 0 && local_1e0 == 0) && local_1d8 == 0) && local_1d4 == 0) {
        lVar14 = lVar14 * 0x368;
        do {
          if ((((*(int *)(lVar13 + 8) == *(int *)(local_1e8 + 0x30)) &&
               (*(int *)(lVar13 + 0xc) == *(int *)(local_1e8 + 0x34))) &&
              (*(int *)(lVar13 + 0x10) == *(int *)(local_1e8 + 0x38))) &&
             (*(int *)(lVar13 + 0x14) == *(int *)(local_1e8 + 0x3c))) goto LAB_143abc8e3;
          lVar13 = lVar13 + 0x368;
          lVar14 = lVar14 + -0x368;
        } while (lVar14 != 0);
      }
      else {
        lVar14 = lVar14 * 0x368;
        do {
          if (((*(int *)(lVar13 + 8) == local_1e0) && (*(int *)(lVar13 + 0xc) == local_1dc)) &&
             ((*(int *)(lVar13 + 0x10) == local_1d8 && (*(int *)(lVar13 + 0x14) == local_1d4))))
          goto LAB_143abc8e3;
          lVar13 = lVar13 + 0x368;
          lVar14 = lVar14 + -0x368;
        } while (lVar14 != 0);
      }
      goto LAB_143abca7c;
    }
    lVar13 = *(longlong *)(local_1e8 + 0x48);
LAB_143abc8e3:
    if (lVar13 == 0) goto LAB_143abca7c;
    cVar6 = *(char *)(lVar13 + 0x3c);
    if (cVar6 == '\0') goto LAB_143abc903;
  }
  else {
    if (3 < *(byte *)(param_1 + 6) - 9) goto LAB_143abca7c;
LAB_143abc903:
    if ((char)param_1[0x69] == '\0') goto LAB_143abca7c;
    cVar6 = '\0';
  }
  iVar2 = (int)param_1[0x55];
  if (iVar2 == 0) goto LAB_143abca7c;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  FUN_14006c0c4(param_1[0x56],(int)param_1[0x57]);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (*(int *)((longlong)param_1 + 700) != iVar2) {
    FUN_141839660(param_1 + 0x56,iVar2);
  }
  if (*(byte *)(param_1 + 6) - 3 < 6) {
    FUN_144842084(param_1,&local_1e8);
    if ((local_1e8 != 0) && (lVar14 = (longlong)*(int *)(local_1e8 + 0x50), lVar14 != 0)) {
      if (*(char *)(local_1e8 + 0x40) == '\0') {
        lVar13 = *(longlong *)(local_1e8 + 0x48);
LAB_143abc9a6:
        if (lVar13 != 0) {
          cVar7 = *(char *)(lVar13 + 0x3c);
          if (cVar7 == '\0') goto LAB_143abc9c4;
          goto LAB_143abc9d3;
        }
      }
      else {
        lVar13 = *(longlong *)(local_1e8 + 0x48);
        if (((local_1dc == 0 && local_1e0 == 0) && local_1d8 == 0) && local_1d4 == 0) {
          lVar14 = lVar14 * 0x368;
          do {
            if ((((*(int *)(lVar13 + 8) == *(int *)(local_1e8 + 0x30)) &&
                 (*(int *)(lVar13 + 0xc) == *(int *)(local_1e8 + 0x34))) &&
                (*(int *)(lVar13 + 0x10) == *(int *)(local_1e8 + 0x38))) &&
               (*(int *)(lVar13 + 0x14) == *(int *)(local_1e8 + 0x3c))) goto LAB_143abc9a6;
            lVar13 = lVar13 + 0x368;
            lVar14 = lVar14 + -0x368;
          } while (lVar14 != 0);
        }
        else {
          lVar14 = lVar14 * 0x368;
          do {
            if (((*(int *)(lVar13 + 8) == local_1e0) && (*(int *)(lVar13 + 0xc) == local_1dc)) &&
               ((*(int *)(lVar13 + 0x10) == local_1d8 && (*(int *)(lVar13 + 0x14) == local_1d4))))
            goto LAB_143abc9a6;
            lVar13 = lVar13 + 0x368;
            lVar14 = lVar14 + -0x368;
          } while (lVar14 != 0);
        }
      }
    }
LAB_143abcd02:
    plVar10 = (longlong *)0x0;
  }
  else {
    if (3 < *(byte *)(param_1 + 6) - 9) goto LAB_143abcd02;
LAB_143abc9c4:
    cVar7 = '\0';
    if ((char)param_1[0x69] == '\0') goto LAB_143abcd02;
LAB_143abc9d3:
    plVar10 = (longlong *)0x0;
    if (cVar7 == cVar6) {
      plVar10 = plVar3;
    }
  }
  if ((longlong)(int)param_1[0x55] != 0) {
    lVar14 = param_1[0x54];
    local_208 = (longlong)(int)param_1[0x55] * 0x58 + lVar14;
    uVar15 = (ulonglong)*(uint *)(plVar10 + 7);
    if ((int)*(uint *)(param_1 + 0x53) < (int)*(uint *)(plVar10 + 7)) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x53);
    }
    do {
      uVar9 = FUN_14025f15c(param_1 + 0x56);
      if (0 < (int)uVar15) {
        lVar13 = 8;
        uVar12 = 0;
        do {
          if (((*(int *)(param_1[0x52] + lVar13) == -1) &&
              (*(longlong *)(param_1[0x52] + -8 + lVar13) == *(longlong *)(lVar14 + 8))) &&
             (plVar3 = *(longlong **)(plVar10[6] + uVar12 * 8), plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 800))(plVar3,lVar14,0,uVar9);
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x48;
        } while (uVar15 != uVar12);
      }
      lVar14 = lVar14 + 0x58;
    } while (lVar14 != local_208);
  }
LAB_143abca7c:
  if (param_1[0x39] != 0) {
    FUN_1438fa7e8(param_1[0x39],param_1 + 0x5e);
  }
  if ((DAT_14c7629c0 == '\0') &&
     (FUN_143abc096(param_1,&local_200,1), local_200 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_200 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_200)(local_200,1);
    }
  }
LAB_143abcac8:
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143abcd4a FUN_143abcd4a body=69 status=ok
// SIG undefined FUN_143abcd4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abcd4a(void)

{
  _DAT_14cb430e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abcd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb430f0,1);
  return;
}



// FUNCTION 143abcd8f FUN_143abcd8f body=69 status=ok
// SIG undefined FUN_143abcd8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abcd8f(void)

{
  _DAT_14cb430f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143abcdd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43100,1);
  return;
}



// FUNCTION 143abcdd4 FUN_143abcdd4 body=216 status=ok
// SIG undefined FUN_143abcdd4(void)

void FUN_143abcdd4(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *(longlong *)(param_1 + 0x10);
  local_58 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    local_58 = *(longlong *)(param_1 + 0x210);
  }
  local_50 = *(undefined4 *)(param_1 + 0x218);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  local_38 = *(undefined8 *)(param_1 + 0x28);
  local_30 = *(undefined4 *)(param_1 + 0x30);
  local_20 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    local_20 = param_3;
  }
  local_18 = param_3 + 0x70;
  if (*(longlong *)(param_3 + 0xa0) != 0) {
    local_18 = *(longlong *)(param_3 + 0xa0);
  }
  local_10 = *(undefined4 *)(param_3 + 0x68);
  local_28 = param_2;
  if (local_60 != 0) {
    FUN_14803191c(local_70,0,0);
  }
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143abceae FUN_143abceae body=2170 status=ok
// SIG undefined FUN_143abceae(void)

undefined8 FUN_143abceae(longlong param_1,longlong param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong unaff_R12;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  uint local_e4;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar8 = *(uint *)(param_1 + 0xb8);
  if (((((uVar8 & 2) == 0) || (lVar14 = *(longlong *)(param_1 + 8), lVar14 == 0)) ||
      (param_3 != '\0')) || (*(char *)(lVar14 + 0x348) == '\0')) {
LAB_143abd54c:
    plVar24 = (longlong *)(param_1 + 0x38);
    if ((uVar8 & 8) != 0 && param_2 != 0) {
      fVar1 = *(float *)(param_2 + 0x14);
      fVar2 = *(float *)(param_2 + 0x10);
      fVar3 = *(float *)(param_2 + 0xc);
      uVar8 = uVar8 & 0xfffffff7;
      *(uint *)(param_1 + 0xb8) = uVar8;
      iVar7 = *(int *)(param_1 + 0x90);
      if ((longlong)iVar7 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x88);
        lVar19 = 0;
        do {
          local_b8 = *(longlong *)(lVar14 + lVar19);
          uVar9 = FUN_144830b78(&uStack_b0,&DAT_14cb42130);
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
          local_a8 = 0;
          uStack_a0 = 0;
          piVar12 = (int *)(**(code **)(*plVar24 + 0x58))(plVar24,&local_b8,0);
          if ((piVar12 != (int *)0x0) && (lVar13 = (longlong)*piVar12, lVar13 != -1)) {
            dVar4 = *(double *)(lVar14 + 0x10 + lVar19);
            dVar5 = *(double *)(lVar14 + 0x18 + lVar19);
            lVar16 = *(longlong *)(param_1 + 0x58);
            *(float *)(lVar16 + lVar13) =
                 (float)(*(double *)(lVar14 + 8 + lVar19) - (double)fVar3 * 65536.0);
            *(float *)(lVar16 + 4 + lVar13) = (float)(dVar4 - (double)fVar2 * 65536.0);
            *(float *)(lVar16 + 8 + lVar13) = (float)(dVar5 - (double)fVar1 * 65536.0);
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          lVar19 = lVar19 + 0x20;
        } while ((longlong)iVar7 * 0x20 != lVar19);
        uVar8 = *(uint *)(param_1 + 0xb8);
      }
      uVar8 = uVar8 | 1;
      *(uint *)(param_1 + 0xb8) = uVar8;
    }
    if ((0 < *(int *)(param_1 + 0xa0)) && ((uVar8 & 7) != 0)) {
      FUN_14004222e(plVar24);
      uVar8 = *(uint *)(param_1 + 0xb8);
    }
    *(uint *)(param_1 + 0xb8) = uVar8 & 0xfffffff8;
    uVar11 = CONCAT71((uint7)(uint3)((uVar8 & 0xfffffff8) >> 8),1);
  }
  else {
    if (*(int *)(lVar14 + 0x298) == *(int *)(param_1 + 0x70)) {
      if (*(byte *)(lVar14 + 0x30) - 3 < 6) {
        FUN_144842084(lVar14);
        if ((local_b8 != 0) && (lVar19 = (longlong)*(int *)(local_b8 + 0x50), lVar19 != 0)) {
          if (*(char *)(local_b8 + 0x40) == '\0') {
            lVar13 = *(longlong *)(local_b8 + 0x48);
LAB_143abcf7b:
            if (((lVar13 != 0) && (*(char *)(lVar13 + 0x3c) == '\0')) &&
               (*(char *)(lVar14 + 0x348) != '\0')) goto LAB_143abcfa8;
          }
          else {
            lVar13 = *(longlong *)(local_b8 + 0x48);
            if (((uStack_b0._4_4_ == 0 && (int)uStack_b0 == 0) && (int)local_a8 == 0) &&
                local_a8._4_4_ == 0) {
              lVar19 = lVar19 * 0x368;
              do {
                if (((*(int *)(lVar13 + 8) == *(int *)(local_b8 + 0x30)) &&
                    (*(int *)(lVar13 + 0xc) == *(int *)(local_b8 + 0x34))) &&
                   ((*(int *)(lVar13 + 0x10) == *(int *)(local_b8 + 0x38) &&
                    (*(int *)(lVar13 + 0x14) == *(int *)(local_b8 + 0x3c))))) goto LAB_143abcf7b;
                lVar13 = lVar13 + 0x368;
                lVar19 = lVar19 + -0x368;
              } while (lVar19 != 0);
            }
            else {
              lVar19 = lVar19 * 0x368;
              do {
                if ((((*(int *)(lVar13 + 8) == (int)uStack_b0) &&
                     (*(int *)(lVar13 + 0xc) == uStack_b0._4_4_)) &&
                    (*(int *)(lVar13 + 0x10) == (int)local_a8)) &&
                   (*(int *)(lVar13 + 0x14) == local_a8._4_4_)) goto LAB_143abcf7b;
                lVar13 = lVar13 + 0x368;
                lVar19 = lVar19 + -0x368;
              } while (lVar19 != 0);
            }
          }
        }
LAB_143abd056:
        local_f8 = 0;
      }
      else {
        if (3 < *(byte *)(lVar14 + 0x30) - 9) goto LAB_143abd056;
LAB_143abcfa8:
        local_f8 = lVar14 + 0xd0;
      }
      if (param_2 != 0) {
        FUN_141838f4a();
        iVar7 = *(int *)(param_1 + 0x70);
        if (0 < iVar7) {
          lVar19 = 0;
LAB_143abd084:
          lVar13 = (longlong)*(int *)(*(longlong *)(lVar14 + 0x290) + 8 + lVar19 * 0x48);
          if (lVar13 == -1) goto LAB_143abd15f;
          if ((longlong)*(int *)(param_2 + 0x170) != 0) {
            puVar18 = *(uint **)(param_2 + 0x168);
            lVar16 = (longlong)*(int *)(param_2 + 0x170) * 0xc;
            do {
              if ((puVar18[1] == 0) || (uVar8 = *puVar18, (int)uVar8 < 0)) {
LAB_143abd131:
                lVar23 = 0;
              }
              else {
                lVar23 = 0;
                if ((int)uVar8 < DAT_14c9647dc) {
                  plVar24 = (longlong *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                  if (((plVar24 == (longlong *)0x0) || (*(uint *)(plVar24 + 2) != puVar18[1])) ||
                     ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) goto LAB_143abd131;
                  lVar23 = *plVar24;
                }
              }
              if (lVar23 == *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar19 * 8))
              goto LAB_143abd136;
              puVar18 = puVar18 + 3;
              uVar11 = 0;
              lVar16 = lVar16 + -0xc;
              if (lVar16 == 0) goto LAB_143abd5b6;
            } while( true );
          }
          goto LAB_143abd606;
        }
      }
LAB_143abd16e:
      uVar8 = *(uint *)(lVar14 + 0x2a8);
      uVar15 = (ulonglong)uVar8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar15);
      }
      plVar24 = (longlong *)(param_1 + 0x18);
      iVar7 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (iVar7 < (int)uVar8) {
        FUN_141839752(plVar24);
        iVar22 = *(int *)(param_1 + 0x20);
        iVar7 = *(int *)(param_1 + 0x24);
      }
      else {
        iVar22 = 0;
      }
      *(uint *)(param_1 + 0x20) = iVar22 + uVar8;
      local_d8 = param_2;
      if ((uint)(iVar7 - iVar22) < uVar8) {
        FUN_1481f234c(plVar24);
      }
      memset((void *)((longlong)iVar22 * 8 + *(longlong *)(param_1 + 0x18)),0,uVar15 * 8);
      local_f0 = (longlong *)(param_1 + 0x298);
      iVar7 = *(int *)(param_1 + 0x2a4);
      FUN_14006c0c4(*(undefined8 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x2a0));
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      if ((iVar7 < 0) && (*(int *)(param_1 + 0x2a4) != 0)) {
        FUN_141839660(local_f0,0);
      }
      local_b8 = 0;
      uStack_b0 = 0;
      if (uVar15 == 0) {
        uVar20 = 1;
        param_2 = local_d8;
      }
      else {
        local_e0 = plVar24;
        FUN_14481578e(&local_b8,uVar8);
        uVar20 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
        uVar17 = 0;
        local_d0 = uVar15;
        do {
          lVar19 = uVar17 * 0x58 + *(longlong *)(lVar14 + 0x2a0);
          local_c8 = (longlong *)0x0;
          local_c0 = 0;
          cVar6 = FUN_141830bb2(lVar19);
          if (((cVar6 == '\0') || (local_c8 == (longlong *)0x0 || local_c0 == 0)) ||
             (cVar6 = (**(code **)(*local_c8 + 0x30))(), cVar6 == '\0')) {
            if (0 < (longlong)*(int *)(lVar14 + 0x298)) {
              piVar12 = (int *)(*(longlong *)(lVar14 + 0x290) + 8);
              lVar13 = 0;
              do {
                if (*(longlong *)(piVar12 + -2) == *(longlong *)(lVar19 + 8)) {
                  local_e4 = (uint)uVar20;
                  plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x68) + lVar13 * 8);
                  if ((((longlong)uVar17 < (longlong)*(int *)(lVar14 + 0x2b8)) &&
                      ((int)lVar13 < *(int *)(local_f8 + 0x38))) &&
                     (plVar24 == *(longlong **)(*(longlong *)(local_f8 + 0x30) + lVar13 * 8))) {
                    if (*(int *)(*(longlong *)(lVar14 + 0x2b0) + 8 + uVar17 * 0x10) != 0) {
                      plVar21 = (longlong *)(*(longlong *)(lVar14 + 0x2b0) + uVar17 * 0x10);
                      plVar10 = (longlong *)*plVar21;
                      if ((plVar10 != (longlong *)0x0) &&
                         (cVar6 = (**(code **)(*plVar10 + 0x30))(), cVar6 != '\0')) {
                        *(longlong **)(*local_e0 + uVar17 * 8) = plVar21;
                        uVar20 = (ulonglong)local_e4;
                        break;
                      }
                    }
                  }
                  if ((longlong)*piVar12 == -1) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar12 * 8)
                    ;
                  }
                  plVar10 = (longlong *)FUN_14025f15c(local_f0);
                  uVar15 = uStack_b0;
                  lVar13 = (longlong)(int)uStack_b0;
                  uVar8 = (int)uStack_b0 + 1;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
                  if (uStack_b0._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_b8,uVar15 & 0xffffffff);
                  }
                  *(int *)(local_b8 + lVar13 * 4) = (int)uVar17;
                  if (plVar24 != (longlong *)0x0) {
                    (**(code **)(*plVar24 + 800))(plVar24,lVar19,uVar11,plVar10);
                  }
                  if ((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) {
                    uVar20 = 0;
                    uVar15 = local_d0;
                  }
                  else {
                    uVar11 = (**(code **)(*(longlong *)*plVar10 + 0x30))();
                    uVar20 = CONCAT71((int7)((ulonglong)uVar11 >> 8),(byte)uVar11 & (byte)local_e4)
                             & 0xffffffff;
                    uVar15 = local_d0;
                  }
                  break;
                }
                lVar13 = lVar13 + 1;
                piVar12 = piVar12 + 0x12;
              } while (*(int *)(lVar14 + 0x298) != lVar13);
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0x2a0);
            *(uint *)(param_1 + 0x2a0) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x2a4) < iVar7 + 1U) {
              FUN_14025f1a8(local_f0,iVar7);
            }
            lVar19 = *local_f0;
            lVar13 = (longlong)iVar7 * 0x10;
            *(undefined8 *)(lVar19 + lVar13) = 0;
            *(undefined4 *)(lVar19 + 8 + lVar13) = 0;
            FUN_1412f8090(lVar19 + lVar13);
            lVar19 = (longlong)(int)uStack_b0;
            uVar8 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
            if (uStack_b0._4_4_ < uVar8) {
              FUN_1446f48e2(&local_b8);
            }
            *(int *)(local_b8 + lVar19 * 4) = (int)uVar17;
          }
          if (local_c0 == 0) {
LAB_143abd45f:
            if (local_c8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_c8 != (longlong *)0x0) {
            (**(code **)*local_c8)();
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
            goto LAB_143abd45f;
          }
          param_2 = local_d8;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar15);
        if (0 < (longlong)(int)uStack_b0) {
          lVar19 = 0;
          lVar14 = 0;
          do {
            *(longlong *)(*local_e0 + (longlong)*(int *)(local_b8 + lVar14 * 4) * 8) =
                 *local_f0 + lVar19;
            lVar14 = lVar14 + 1;
            lVar19 = lVar19 + 0x10;
          } while ((int)uStack_b0 != lVar14);
        }
        if (((uVar20 & 1) == 0) &&
           (*(undefined4 *)(param_1 + 0x20) = 0, *(int *)(param_1 + 0x24) != 0)) {
          FUN_141839752(local_e0,0);
        }
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if ((uVar20 & 1) != 0) {
        uVar8 = *(uint *)(param_1 + 0xb8);
        goto LAB_143abd54c;
      }
    }
LAB_143abd606:
    uVar11 = 0;
  }
LAB_143abd5b6:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
LAB_143abd136:
  if ((puVar18 == (uint *)0x0) ||
     (lVar16 = (longlong)(int)puVar18[2] + *(longlong *)(param_2 + 0x138), lVar16 == 0))
  goto LAB_143abd606;
  *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13 * 8) = lVar16;
  iVar7 = *(int *)(param_1 + 0x70);
  unaff_R12 = param_2;
LAB_143abd15f:
  lVar19 = lVar19 + 1;
  if (iVar7 <= lVar19) goto LAB_143abd16e;
  goto LAB_143abd084;
}



// FUNCTION 143abd72a FUN_143abd72a body=2338 status=ok
// SIG undefined FUN_143abd72a(void)

ulonglong FUN_143abd72a(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined4 uVar12;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined1 auStack_128 [32];
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*(byte *)(param_1 + 0xb8) & 2) != 0) && (lVar13 = *(longlong *)(param_1 + 8), lVar13 != 0))
     && (*(char *)(lVar13 + 0x348) != '\0')) {
    uVar17 = *(uint *)(lVar13 + 0x2a8);
    uVar16 = (ulonglong)uVar17;
    local_108 = lVar13;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar16);
    }
    plVar15 = (longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar9 = uVar17;
    if (*(uint *)(param_1 + 0x24) != uVar17) {
      FUN_141839752(plVar15,uVar17);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar7 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar7 + 1U) {
        FUN_1481f234c(plVar15,iVar7);
      }
      *(undefined8 *)(*plVar15 + (longlong)iVar7 * 8) = 0;
    }
    local_e8 = (longlong *)(param_1 + 0x298);
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    FUN_14032e7c6(*(undefined8 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x2a0));
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    if (*(uint *)(param_1 + 0x2a4) != uVar17) {
      FUN_141839892(local_e8,uVar17);
    }
    if (uVar17 != 0) {
      do {
        iVar7 = *(int *)(param_1 + 0x2a0);
        *(uint *)(param_1 + 0x2a0) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x2a4) < iVar7 + 1U) {
          FUN_1481f23d2(local_e8,iVar7);
        }
        lVar13 = *local_e8;
        lVar21 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar13 + lVar21) = 0;
        *(undefined4 *)(lVar13 + 8 + lVar21) = 0;
        FUN_1412f8090(lVar13 + lVar21,&local_b8);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if ((int)uStack_b0 != 0) {
        if (local_b8 == (undefined8 *)0x0) goto LAB_143abd8f7;
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
      }
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143abd8f7:
    lVar13 = *(longlong *)(param_1 + 8);
    local_100 = uVar16;
    local_e0 = plVar15;
    local_c8 = param_2;
    if (*(byte *)(lVar13 + 0x30) - 3 < 6) {
      FUN_144842084(lVar13,&local_b8);
      if ((local_b8 != (undefined8 *)0x0) &&
         (lVar21 = (longlong)*(int *)(local_b8 + 10), lVar21 != 0)) {
        if (*(char *)(local_b8 + 8) == '\0') {
          lVar18 = local_b8[9];
LAB_143abd946:
          if ((lVar18 != 0) && (*(char *)(lVar18 + 0x3c) == '\0')) goto LAB_143abd969;
        }
        else {
          lVar18 = local_b8[9];
          uVar16 = local_100;
          if (((uStack_b0._4_4_ == 0 && (int)uStack_b0 == 0) && (int)local_a8 == 0) &&
              local_a8._4_4_ == 0) {
            lVar21 = lVar21 * 0x368;
            do {
              if (((*(int *)(lVar18 + 8) == *(int *)(local_b8 + 6)) &&
                  (*(int *)(lVar18 + 0xc) == *(int *)((longlong)local_b8 + 0x34))) &&
                 ((*(int *)(lVar18 + 0x10) == *(int *)(local_b8 + 7) &&
                  (*(int *)(lVar18 + 0x14) == *(int *)((longlong)local_b8 + 0x3c)))))
              goto LAB_143abd946;
              lVar18 = lVar18 + 0x368;
              lVar21 = lVar21 + -0x368;
            } while (lVar21 != 0);
          }
          else {
            lVar21 = lVar21 * 0x368;
            do {
              if ((((*(int *)(lVar18 + 8) == (int)uStack_b0) &&
                   (*(int *)(lVar18 + 0xc) == uStack_b0._4_4_)) &&
                  (*(int *)(lVar18 + 0x10) == (int)local_a8)) &&
                 (*(int *)(lVar18 + 0x14) == local_a8._4_4_)) goto LAB_143abd946;
              lVar18 = lVar18 + 0x368;
              lVar21 = lVar21 + -0x368;
            } while (lVar21 != 0);
          }
        }
      }
LAB_143abd951:
      local_f8 = 0;
    }
    else {
      if (3 < *(byte *)(lVar13 + 0x30) - 9) goto LAB_143abd951;
LAB_143abd969:
      if (*(char *)(lVar13 + 0x348) == '\0') {
        local_f8 = 0;
      }
      else {
        local_f8 = lVar13 + 0xd0;
      }
    }
    if ((int)uVar16 != 0) {
      local_c0 = param_1 + 0x28;
      local_d0 = param_1 + 0x2a8;
      uVar20 = 0;
      local_ec = 0;
      lVar13 = local_108;
      do {
        lVar21 = uVar20 * 0x58 + *(longlong *)(lVar13 + 0x2a0);
        lVar18 = uVar20 * 0x10;
        plVar15 = (longlong *)(*local_e8 + lVar18);
        cVar11 = FUN_141830bb2(lVar21,plVar15);
        if (((cVar11 == '\0') || ((int)plVar15[1] == 0)) ||
           (((longlong *)*plVar15 == (longlong *)0x0 ||
            (cVar11 = (**(code **)(*(longlong *)*plVar15 + 0x30))(), cVar11 == '\0')))) {
          FUN_141838f4a(local_c0,*(undefined4 *)(lVar13 + 0x244));
          if (0 < (longlong)*(int *)(lVar13 + 0x298)) {
            plVar22 = *(longlong **)(lVar13 + 0x290);
            lVar19 = 0;
            do {
              if (*plVar22 == *(longlong *)(lVar21 + 8)) {
                lVar13 = *(longlong *)(*(longlong *)(local_f8 + 0x30) + lVar19 * 8);
                local_d8 = *(longlong **)(*(longlong *)(param_1 + 0x68) + lVar19 * 8);
                cVar11 = FUN_144aed7fa(plVar22);
                if (cVar11 == '\0') {
                  if (((((longlong)uVar20 < (longlong)*(int *)(local_108 + 0x2b8)) && (lVar13 != 0))
                      && (local_d8 == *(longlong **)(*(longlong *)(local_f8 + 0x30) + lVar19 * 8)))
                     && (*(int *)(*(longlong *)(local_108 + 0x2b0) + 8 + lVar18) != 0)) {
                    plVar23 = (longlong *)(*(longlong *)(local_108 + 0x2b0) + lVar18);
                    plVar22 = (longlong *)*plVar23;
                    if ((plVar22 != (longlong *)0x0) &&
                       (cVar11 = (**(code **)(*plVar22 + 0x30))(), cVar11 != '\0')) {
                      FUN_1412f8090(plVar15,plVar23);
                      lVar13 = local_108;
                      uVar16 = local_100;
                      break;
                    }
                  }
                  (**(code **)(*local_d8 + 800))(local_d8,lVar21,0,plVar15);
                  lVar13 = local_108;
                  uVar16 = local_100;
                  break;
                }
                if (*(char *)(param_1 + 0x268) == '\x01') {
                  uVar6 = *(undefined1 *)(param_1 + 0x260);
                  lVar13 = plVar22[1];
                  local_b8 = (undefined8 *)0x0;
                  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
                  FUN_1446efa72(&local_b8,0,3,0x10);
                  *local_b8 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar18 = DAT_14c758608 + 1;
                  lVar21 = DAT_14c758608 + 1;
                  if (lVar18 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar18 = DAT_14c758608 + 2;
                    lVar21 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar21;
                  local_b8[2] = lVar18;
                  *local_b8 = &PTR_FUN_14ae1de80;
                  local_b8[3] = local_d0;
                  *(undefined1 *)(local_b8 + 4) = uVar6;
                  *(int *)((longlong)local_b8 + 0x24) = local_ec;
                  *(int *)(local_b8 + 5) = (int)lVar13;
                }
                else {
                  lVar13 = plVar22[1];
                  local_b8 = (undefined8 *)0x0;
                  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
                  FUN_1446efa72(&local_b8,0,3,0x10);
                  *local_b8 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar18 = DAT_14c758608 + 1;
                  lVar21 = DAT_14c758608 + 1;
                  if (lVar18 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar18 = DAT_14c758608 + 2;
                    lVar21 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar21;
                  local_b8[2] = lVar18;
                  *local_b8 = &PTR_FUN_14ae1def0;
                  local_b8[3] = param_1;
                  *(int *)(local_b8 + 4) = local_ec;
                  *(int *)((longlong)local_b8 + 0x24) = (int)lVar13;
                }
                puVar10 = local_b8;
                uVar16 = local_100;
                lVar13 = local_108;
                local_b8 = (undefined8 *)0x0;
                uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
                if ((int)plVar15[1] == 0) {
LAB_143abdc04:
                  if (*plVar15 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  puVar8 = (undefined8 *)*plVar15;
                  if (puVar8 != (undefined8 *)0x0) {
                    (**(code **)*puVar8)(puVar8,0);
                    FUN_1446efa72(plVar15,0,0,0x10);
                    *(undefined4 *)(plVar15 + 1) = 0;
                    goto LAB_143abdc04;
                  }
                }
                *plVar15 = (longlong)puVar10;
                *(undefined4 *)(plVar15 + 1) = 3;
                if ((int)uStack_b0 == 0) {
LAB_143abdc4d:
                  if (local_b8 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_b8 != (undefined8 *)0x0) {
                  (**(code **)*local_b8)(local_b8,0);
                  FUN_1446efa72(&local_b8,0,0,0x10);
                  uStack_b0 = uStack_b0 & 0xffffffff00000000;
                  goto LAB_143abdc4d;
                }
                local_ec = local_ec + 1;
                break;
              }
              lVar19 = lVar19 + 1;
              plVar22 = plVar22 + 9;
              uVar16 = local_100;
            } while (*(int *)(lVar13 + 0x298) != lVar19);
          }
          if ((((int)plVar15[1] == 0) || ((longlong *)*plVar15 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*(longlong *)*plVar15 + 0x30))(), cVar11 == '\0'))
          goto LAB_143abde55;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar16);
    }
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x2a0)) {
LAB_143abde55:
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        FUN_141839752(local_e0,0);
      }
      goto LAB_143abde03;
    }
    param_2 = local_c8;
    if (0 < *(int *)(param_1 + 0x20)) {
      lVar13 = 0;
      lVar21 = 0;
      do {
        *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar21 * 8) =
             *(longlong *)(param_1 + 0x298) + lVar13;
        lVar21 = lVar21 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar21 < *(int *)(param_1 + 0x20));
    }
  }
  plVar15 = (longlong *)(param_1 + 0x38);
  uVar17 = *(uint *)(param_1 + 0xb8);
  if ((uVar17 & 8) != 0 && param_2 != 0) {
    fVar1 = *(float *)(param_2 + 0x14);
    fVar2 = *(float *)(param_2 + 0x10);
    fVar3 = *(float *)(param_2 + 0xc);
    uVar17 = uVar17 & 0xfffffff7;
    *(uint *)(param_1 + 0xb8) = uVar17;
    iVar7 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar7 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x88);
      lVar21 = 0;
      do {
        local_b8 = *(undefined8 **)(lVar13 + lVar21);
        uVar12 = FUN_144830b78(&uStack_b0,&DAT_14cb42130);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar12);
        local_a8 = 0;
        uStack_a0 = 0;
        piVar14 = (int *)(**(code **)(*plVar15 + 0x58))(plVar15,&local_b8,0);
        if ((piVar14 != (int *)0x0) && (lVar18 = (longlong)*piVar14, lVar18 != -1)) {
          dVar4 = *(double *)(lVar13 + 0x10 + lVar21);
          dVar5 = *(double *)(lVar13 + 0x18 + lVar21);
          lVar19 = *(longlong *)(param_1 + 0x58);
          *(float *)(lVar19 + lVar18) =
               (float)(*(double *)(lVar13 + 8 + lVar21) - (double)fVar3 * 65536.0);
          *(float *)(lVar19 + 4 + lVar18) = (float)(dVar4 - (double)fVar2 * 65536.0);
          *(float *)(lVar19 + 8 + lVar18) = (float)(dVar5 - (double)fVar1 * 65536.0);
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        lVar21 = lVar21 + 0x20;
      } while ((longlong)iVar7 * 0x20 != lVar21);
      uVar17 = *(uint *)(param_1 + 0xb8);
    }
    uVar17 = uVar17 | 1;
    *(uint *)(param_1 + 0xb8) = uVar17;
  }
  if ((0 < *(int *)(param_1 + 0xa0)) && ((uVar17 & 7) != 0)) {
    FUN_14004222e(plVar15);
    uVar17 = *(uint *)(param_1 + 0xb8);
  }
  *(uint *)(param_1 + 0xb8) = uVar17 & 0xfffffff8;
  uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_143abde03:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 143abe04e FUN_143abe04e body=1171 status=ok
// SIG undefined FUN_143abe04e(void)

undefined8 FUN_143abe04e(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = *(longlong *)(param_1 + 8);
  local_a0 = param_3;
  if ((byte)(*(char *)(lVar10 + 0x30) - 3U) < 6) {
    FUN_144842084(lVar10,&local_80);
    lVar10 = *(longlong *)(param_1 + 8);
  }
  if (*(int *)(lVar10 + 0x2a8) < 1) {
LAB_143abe4a9:
    uVar7 = 1;
LAB_143abe4ab:
    if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar7;
  }
  local_98 = (longlong *)(param_2 + 0x1e8);
  local_a8 = 0;
  local_90 = lVar10;
  local_88 = param_2;
LAB_143abe0d2:
  iVar4 = *(int *)(lVar10 + 0x298);
  if (0 < iVar4) {
    lVar14 = local_a8 * 0x58 + *(longlong *)(lVar10 + 0x2a0);
    lVar13 = 0x20;
    lVar9 = 0;
    lVar15 = 0;
    do {
      lVar2 = *(longlong *)(lVar10 + 0x290);
      if (*(longlong *)(lVar2 + lVar9) == *(longlong *)(lVar14 + 8)) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x388);
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x68) + lVar15 * 8);
        cVar3 = FUN_144aed7fa(lVar2 + lVar9);
        if ((cVar3 != '\0') || (cVar3 = FUN_144aed6f4(lVar10 + lVar13 + -0x20), cVar3 != '\0')) {
          iVar4 = (int)local_a0[1];
          *(uint *)(local_a0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_a0 + 0xc) < iVar4 + 1U) {
            FUN_141839966(local_a0,iVar4);
          }
          local_b0 = (longlong *)((longlong)iVar4 * 0x18 + *local_a0);
          FUN_143ac046e(local_b0);
          local_80 = *(undefined8 *)(lVar2 + lVar9);
          local_78[0] = FUN_144830b78(local_78);
          local_70 = 0;
          uStack_68 = 0;
          piVar5 = (int *)(**(code **)(*local_98 + 0x58))(local_98,&local_80,0);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          lVar9 = local_88;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)(**(code **)(*local_98 + 0x58))(local_98,lVar10 + lVar13,0);
            if (piVar5 == (int *)0x0) {
              if ((longlong)*(int *)(lVar9 + 0x170) == 0) {
                lVar10 = 0;
                goto LAB_143abe44f;
              }
              puVar6 = *(uint **)(lVar9 + 0x168);
              lVar10 = (longlong)*(int *)(lVar9 + 0x170) * 0xc;
              goto LAB_143abe3cd;
            }
            iVar4 = *piVar5;
            plVar11 = local_b0;
            if ((((longlong)iVar4 < 0) || (*(int *)(lVar9 + 0x220) <= iVar4)) ||
               (plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x218) + (longlong)iVar4 * 8),
               plVar8 == (longlong *)0x0)) goto LAB_143abe46a;
            if ((longlong)*(int *)(lVar9 + 0x170) != 0) {
              puVar6 = *(uint **)(lVar9 + 0x168);
              lVar10 = (longlong)*(int *)(lVar9 + 0x170) * 0xc;
              goto LAB_143abe334;
            }
          }
          else {
            iVar4 = *piVar5;
            plVar11 = local_b0;
            if ((((longlong)iVar4 < 0) || (*(int *)(local_88 + 0x220) <= iVar4)) ||
               (plVar8 = *(longlong **)(*(longlong *)(local_88 + 0x218) + (longlong)iVar4 * 8),
               plVar8 == (longlong *)0x0)) goto LAB_143abe46a;
            if ((longlong)*(int *)(local_88 + 0x170) != 0) {
              puVar6 = *(uint **)(local_88 + 0x168);
              lVar10 = (longlong)*(int *)(local_88 + 0x170) * 0xc;
              goto LAB_143abe255;
            }
          }
          lVar10 = 0;
          goto LAB_143abe454;
        }
        iVar4 = *(int *)(local_90 + 0x298);
        lVar10 = local_90;
      }
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + 0x50;
      lVar9 = lVar9 + 0x48;
    } while (lVar15 < iVar4);
  }
  goto LAB_143abe48c;
  while( true ) {
    puVar6 = puVar6 + 3;
    lVar10 = lVar10 + -0xc;
    if (lVar10 == 0) break;
LAB_143abe3cd:
    if ((puVar6[1] == 0) || (uVar1 = *puVar6, (int)uVar1 < 0)) {
LAB_143abe426:
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)0x0;
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar12 == (undefined8 *)0x0) || (*(uint *)(puVar12 + 2) != puVar6[1])) ||
           ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143abe426;
        plVar11 = (longlong *)*puVar12;
      }
    }
    if (plVar11 == plVar8) goto LAB_143abe42b;
  }
  goto LAB_143abe43d;
  while( true ) {
    puVar6 = puVar6 + 3;
    lVar10 = lVar10 + -0xc;
    if (lVar10 == 0) break;
LAB_143abe334:
    if ((puVar6[1] == 0) || (uVar1 = *puVar6, (int)uVar1 < 0)) {
LAB_143abe394:
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)0x0;
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar12 == (undefined8 *)0x0) || (*(uint *)(puVar12 + 2) != puVar6[1])) ||
           ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143abe394;
        plVar11 = (longlong *)*puVar12;
      }
    }
    if (plVar11 == plVar8) goto LAB_143abe42b;
  }
  goto LAB_143abe43d;
  while( true ) {
    puVar6 = puVar6 + 3;
    lVar10 = lVar10 + -0xc;
    if (lVar10 == 0) break;
LAB_143abe255:
    if ((puVar6[1] == 0) || (uVar1 = *puVar6, (int)uVar1 < 0)) {
LAB_143abe2b5:
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)0x0;
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar12 == (undefined8 *)0x0) || (*(uint *)(puVar12 + 2) != puVar6[1])) ||
           ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143abe2b5;
        plVar11 = (longlong *)*puVar12;
      }
    }
    if (plVar11 == plVar8) goto LAB_143abe42b;
  }
LAB_143abe43d:
  lVar10 = 0;
LAB_143abe44f:
  plVar11 = local_b0;
  if (plVar8 != (longlong *)0x0) {
LAB_143abe454:
    plVar11 = local_b0;
    (**(code **)(*plVar8 + 800))(plVar8,lVar14,lVar10,local_b0);
    plVar11[2] = lVar10;
  }
LAB_143abe46a:
  uVar7 = 0;
  if (((int)plVar11[1] == 0) || ((longlong *)*plVar11 == (longlong *)0x0)) goto LAB_143abe4ab;
  cVar3 = (**(code **)(*(longlong *)*plVar11 + 0x30))();
  lVar10 = local_90;
  if (cVar3 == '\0') {
    uVar7 = 0;
    goto LAB_143abe4ab;
  }
LAB_143abe48c:
  local_a8 = local_a8 + 1;
  if (*(int *)(lVar10 + 0x2a8) <= local_a8) goto LAB_143abe4a9;
  goto LAB_143abe0d2;
LAB_143abe42b:
  if (puVar6 != (uint *)0x0) {
    lVar10 = (longlong)(int)puVar6[2] + *(longlong *)(lVar9 + 0x138);
    goto LAB_143abe44f;
  }
  goto LAB_143abe43d;
}



// FUNCTION 143abe4e2 FUN_143abe4e2 body=55 status=ok
// SIG undefined FUN_143abe4e2(void)

void FUN_143abe4e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43178 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43178 = FUN_14171c317(FUN_1464792a4,uVar1,L"ENiagaraSimCacheAttributeCaptureMode");
  }
  return;
}



// FUNCTION 143abe51a FUN_143abe51a body=557 status=ok
// SIG undefined FUN_143abe51a(void)

void FUN_143abe51a(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  local_1c0 = &local_1c8;
  local_1d8 = &PTR_FUN_149e37810;
  local_1c8 = &local_1d8;
  local_1d0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  iVar3 = FUN_1448332aa(param_2,&DAT_14ad42464);
  if (0x53 < iVar3) {
    lVar9 = *(longlong *)(param_1 + 400);
    iVar3 = *(int *)(param_1 + 0x198);
    lVar6 = (longlong)iVar3 * 0x160 + lVar9;
    if ((*(byte *)(param_1 + 0x6c) & 0x10) == 0) {
      if (iVar3 == 0) goto LAB_143abe71a;
      local_1e0 = param_1 + 200;
      bVar4 = 1;
      do {
        bVar2 = FUN_1481e2802(lVar9 + 0xb0,param_2,local_1e0);
        bVar4 = bVar2 & bVar4;
        if (0 < *(int *)(param_1 + 0x188)) {
          lVar7 = 0x40;
          lVar5 = 0;
          lVar8 = 0;
          do {
            bVar2 = FUN_1481e2802(*(longlong *)(lVar9 + 0x148) + lVar7,param_2,
                                  *(longlong *)(param_1 + 0x180) + lVar5);
            bVar4 = bVar4 & bVar2;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + 0xb8;
            lVar7 = lVar7 + 0xd8;
          } while (lVar8 < *(int *)(param_1 + 0x188));
        }
        lVar9 = lVar9 + 0x160;
      } while (lVar9 != lVar6);
    }
    else {
      if (iVar3 == 0) goto LAB_143abe71a;
      local_1e0 = param_1 + 200;
      bVar4 = 1;
      do {
        bVar2 = FUN_1481e2900(lVar9 + 0xb0,param_2,param_1,local_1e0);
        bVar4 = bVar2 & bVar4;
        if (0 < *(int *)(param_1 + 0x188)) {
          lVar7 = 0x40;
          lVar5 = 0;
          lVar8 = 0;
          do {
            bVar2 = FUN_1481e2900(*(longlong *)(lVar9 + 0x148) + lVar7,param_2,param_1,
                                  *(longlong *)(param_1 + 0x180) + lVar5);
            bVar4 = bVar4 & bVar2;
            lVar8 = lVar8 + 1;
            lVar5 = lVar5 + 0xb8;
            lVar7 = lVar7 + 0xd8;
          } while (lVar8 < *(int *)(param_1 + 0x188));
        }
        lVar9 = lVar9 + 0x160;
      } while (lVar9 != lVar6);
    }
    if (bVar4 != 0) goto LAB_143abe71a;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x50);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
LAB_143abe71a:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143abe748 FUN_143abe748 body=49 status=ok
// SIG undefined FUN_143abe748(void)

void FUN_143abe748(void)

{
  FUN_144760e21(DAT_14cb43300,DAT_14cb43308);
  if (DAT_14cb43300 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143abe779 FUN_143abe779 body=49 status=ok
// SIG undefined FUN_143abe779(void)

void FUN_143abe779(void)

{
  FUN_144760e21(DAT_14cb433c8,DAT_14cb433d0);
  if (DAT_14cb433c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143abe7aa FUN_143abe7aa body=72 status=ok
// SIG undefined FUN_143abe7aa(void)

void FUN_143abe7aa(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143abe7f2 FUN_143abe7f2 body=635 status=ok
// SIG undefined FUN_143abe7f2(void)

void FUN_143abe7f2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int local_b4;
  undefined4 *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x27) != '\0') {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar5 = *(uint *)(param_3 + 0x58);
    if ((longlong)(int)uVar5 != 0) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar5);
      }
      FUN_140ab2830(&local_98,uVar5);
      iVar3 = 1;
      if (3 < uVar5) {
        uVar5 = (uVar5 | 1) + 0xe;
        iVar3 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 1 << ((byte)iVar3 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar3)) {
        local_50 = iVar3;
        FUN_140264164();
      }
      local_b4 = 0;
      if (0 < *(int *)(param_3 + 0x58)) {
        do {
          local_b8 = *(undefined4 *)(*(longlong *)(param_3 + 0x50) + (longlong)local_b4 * 4);
          local_b0 = &local_b8;
          local_a8 = &local_b4;
          FUN_14172ee82(&local_98,local_9c,&local_b0,0);
          local_b4 = local_b4 + 1;
        } while (local_b4 < *(int *)(param_3 + 0x58));
      }
    }
    if (0 < *(int *)(param_2 + 0x58)) {
      lVar4 = 0;
      do {
        uVar6 = 0xffffffff;
        if ((int)uStack_90 != local_64) {
          uVar5 = *(uint *)(*(longlong *)(param_2 + 0x50) + lVar4 * 4);
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar3 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar5) * 4);
          while (iVar3 != -1) {
            lVar1 = local_98 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_98 + (longlong)iVar3 * 0x10) == uVar5) {
              if ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0 && lVar1 != 0) {
                uVar6 = *(undefined4 *)(lVar1 + 4);
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 8);
          }
        }
        *(undefined4 *)(*(longlong *)(param_2 + 0x50) + lVar4 * 4) = uVar6;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_2 + 0x58));
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = uStack_90 >> 0x20;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_14472eb64(&local_98,0);
    }
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      FUN_1446efbd8(local_88,0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143abea6e FUN_143abea6e body=3257 status=ok
// SIG undefined FUN_143abea6e(void)

void FUN_143abea6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int *param_10)

{
  int *piVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  int *piVar25;
  undefined1 auStack_1a8 [32];
  code **local_188;
  void *local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158 [12];
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int *local_d8;
  code *local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_5 + 0xd4) == 4) goto LAB_143abec61;
  LOCK();
  *param_10 = *param_10 + 1;
  UNLOCK();
  if (param_6[0x90] == (code)0x0) {
    piVar25 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    param_6[0x90] = (code)0x0;
    local_c8 = param_6;
    FUN_1481eda46(&local_c0,param_6 + 0x70);
    piVar25 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar13 = *piVar25;
    if (DAT_14c86a9fc == 0) {
      if (iVar13 != 2) {
        if (iVar13 != 1) goto LAB_143abecf2;
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_143abecfb;
        goto LAB_143abf1a6;
      }
LAB_143abecfb:
      pcVar5 = local_c8;
      ppvVar2 = (void **)(local_c8 + 0x98);
      if (ppvVar2 != &local_c0) {
        iVar13 = (int)local_b8;
        lVar21 = (longlong)(int)local_b8;
        *(int *)(local_c8 + 0xa0) = (int)local_b8;
        if ((int)local_b8 == 0 && *(int *)(local_c8 + 0xa4) == 0) {
          *(undefined4 *)(local_c8 + 0xa4) = 0;
        }
        else {
          local_180 = local_c0;
          FUN_140817052(ppvVar2,(ulonglong)local_b8 & 0xffffffff);
          if (iVar13 != 0) {
            memcpy(*ppvVar2,local_180,lVar21 * 2);
          }
        }
      }
      pvVar6 = local_b0;
      ppvVar2 = (void **)(pcVar5 + 0xa8);
      if (ppvVar2 != &local_b0) {
        iVar13 = (int)local_a8;
        lVar21 = (longlong)(int)local_a8;
        *(int *)(pcVar5 + 0xb0) = (int)local_a8;
        if ((int)local_a8 == 0 && *(int *)(pcVar5 + 0xb4) == 0) {
          *(undefined4 *)(pcVar5 + 0xb4) = 0;
        }
        else {
          FUN_1481ed52a(ppvVar2,local_a8 & 0xffffffff);
          if (iVar13 != 0) {
            memcpy(*ppvVar2,pvVar6,lVar21 << 4);
          }
        }
      }
    }
    else {
LAB_143abecf2:
      if (iVar13 == 0x10) goto LAB_143abecfb;
LAB_143abf1a6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar25 == 2)) goto LAB_143abecfb;
        if (*piVar25 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_143abecfb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar18 = (uint *)*puVar3;
        if (puVar18 != (uint *)0x0) goto LAB_143abf3af;
        do {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143abf8aa);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar17 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar17 = 0xffffffff;
          *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar3 = puVar17;
          FUN_140217a48(puVar3);
          puVar18 = (uint *)*puVar3;
LAB_143abf3af:
          uVar23 = *(longlong *)(puVar18 + 0x10) + 7;
          uVar20 = puVar18[0x12];
          while( true ) {
            puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
            if (puVar24 + 0x1a <= puVar18 + 0x4000) {
              *(undefined8 **)(puVar18 + 0x10) = puVar24 + 0x1a;
              puVar18[0x12] = uVar20 + 1;
              iVar13 = 0;
              FUN_1447247dc(puVar24,0);
              *puVar24 = &PTR_FUN_14ae1dd38;
              puVar24[0x15] = local_c8;
              puVar24[0x16] = local_c0;
              local_c0 = (void *)0x0;
              *(int *)(puVar24 + 0x17) = (int)local_b8;
              *(undefined4 *)((longlong)puVar24 + 0xbc) = local_b8._4_4_;
              local_b8 = (longlong *)0x0;
              puVar24[0x18] = local_b0;
              local_b0 = (void *)0x0;
              *(int *)(puVar24 + 0x19) = (int)local_a8;
              *(undefined4 *)((longlong)puVar24 + 0xcc) = local_a8._4_4_;
              local_a8 = 0;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar20 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
                  uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
                }
                else {
                  uVar23 = 2;
                }
              }
              else {
                iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar23 = 5;
              }
              if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
              }
              puVar24[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar24[9] = puVar24;
              puVar24[10] = puVar24;
              lVar21 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar21 == 0) {
                uVar12 = 1;
                if ((char)uVar23 != '\x06') {
                  uVar12 = uVar23;
                }
                uVar23 = uVar12;
                uVar19 = 0;
              }
              else {
                if ((char)uVar23 == '\x06') {
                  uVar23 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
                }
                uVar19 = *(undefined8 *)(lVar21 + 0x30);
              }
              puVar24[0xf] = uVar19;
              puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar24 + 0x1c) = iVar13;
              if (puVar24 == (undefined8 *)0x0) {
                local_178 = (code *)CONCAT71(local_178._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                UNLOCK();
                local_178 = (code *)CONCAT71(local_178._1_7_,1);
                FUN_1447439e4(puVar24);
                LOCK();
                piVar1 = (int *)(puVar24 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
              goto LAB_143abf2ce;
            }
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
            LOCK();
            uVar4 = *puVar18;
            *puVar18 = *puVar18 + uVar20 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar20) != 0xffffffff) break;
            puVar18 = (uint *)*puVar3;
            *puVar18 = 0xffffffff;
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar3 = puVar18;
            uVar23 = (longlong)puVar18 + 0x5f;
            uVar20 = 0;
          }
        } while( true );
      }
      local_178 = (code *)0x0;
      local_168 = (longlong *)0x0;
      local_168 = (longlong *)FUN_14001cc68(0x30,8);
      pvVar9 = local_b0;
      pvVar6 = local_c0;
      *local_168 = (longlong)&PTR_LAB_14ae1dcd0;
      local_c0 = (void *)0x0;
      uVar7 = (int)local_b8;
      uVar8 = local_b8._4_4_;
      local_b8 = (longlong *)0x0;
      local_b0 = (void *)0x0;
      uVar10 = (int)local_a8;
      uVar11 = local_a8._4_4_;
      local_a8 = 0;
      local_168[1] = (longlong)local_c8;
      local_168[2] = (longlong)pvVar6;
      *(undefined4 *)(local_168 + 3) = uVar7;
      *(undefined4 *)((longlong)local_168 + 0x1c) = uVar8;
      local_168[4] = (longlong)pvVar9;
      *(undefined4 *)(local_168 + 5) = uVar10;
      *(undefined4 *)((longlong)local_168 + 0x2c) = uVar11;
      if (local_168 + 1 != (longlong *)0x0) {
        local_178 = FUN_1481f0e0c;
      }
      local_188 = &local_178;
      FUN_14005a792(&DAT_14ca9a440,L"NiagaraSimCacheGpuUpdateReadInfo",&DAT_14cb433c0);
      if (local_178 != (code *)0x0) {
        plVar16 = local_168;
        if (local_168 == (longlong *)0x0) {
          plVar16 = local_158;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
    }
LAB_143abf2ce:
    if (local_b0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_178 = *(code **)(*(longlong *)(param_5 + 8) + 0x870);
  local_170 = *(undefined8 *)(param_5 + 0x18);
  local_168 = (longlong *)CONCAT44(param_2,param_1);
  plVar16 = local_158;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *plVar16 = *param_4;
    param_4 = param_4 + 1;
    plVar16 = plVar16 + 1;
  }
  local_f8 = param_6;
  local_e8 = param_8;
  local_e0 = param_9;
  local_d8 = param_10;
  iVar13 = *piVar25;
  local_160 = param_3;
  local_f0 = param_7;
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_143abeb81;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_143abf10e;
      goto LAB_143abeb8a;
    }
  }
  else {
LAB_143abeb81:
    if (iVar13 != 0x10) {
LAB_143abeb8a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar25 == 2)) goto LAB_143abf10e;
        if (*piVar25 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_143abf10e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar18 = (uint *)*puVar3;
        if (puVar18 != (uint *)0x0) goto LAB_143abee0b;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143abf8aa);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar17 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar17 = 0xffffffff;
          *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar3 = puVar17;
          FUN_140217a48(puVar3);
          puVar18 = (uint *)*puVar3;
LAB_143abee0b:
          puVar24 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar22 = (uint *)(puVar24 + 0x2c);
          uVar20 = puVar18[0x12];
          if (puVar22 <= puVar18 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
            LOCK();
            uVar4 = *puVar18;
            *puVar18 = *puVar18 + uVar20 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar20) != 0xffffffff) break;
            puVar18 = (uint *)*puVar3;
            *puVar18 = 0xffffffff;
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar3 = puVar18;
            puVar24 = (undefined8 *)((longlong)puVar18 + 0x67U & 0xfffffffffffffff0);
            puVar22 = (uint *)(puVar24 + 0x2c);
            uVar20 = 0;
            if (puVar22 <= puVar18 + 0x4000) {
              uVar20 = 1;
              goto LAB_143abee8b;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_143abee8b:
        *(uint **)(puVar18 + 0x10) = puVar22;
        puVar18[0x12] = uVar20;
        iVar13 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14ae1dda8;
        memcpy(puVar24 + 0x16,&local_178,0xb0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
            iVar13 = 0;
          }
          else {
            uVar23 = 2;
          }
        }
        else {
          iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar23 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar21 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar21 == 0) {
          uVar12 = 1;
          if ((char)uVar23 != '\x06') {
            uVar12 = uVar23;
          }
          uVar23 = uVar12;
          uVar19 = 0;
        }
        else {
          if ((char)uVar23 == '\x06') {
            uVar23 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
          }
          uVar19 = *(undefined8 *)(lVar21 + 0x30);
        }
        puVar24[0xf] = uVar19;
        puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar13;
        if (puVar24 == (undefined8 *)0x0) {
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar25 = (int *)(puVar24 + 1);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_c8 = (code *)0x0;
        plVar16 = (longlong *)FUN_14001cc68(0xc0,0x10);
        *plVar16 = (longlong)&PTR_LAB_14ae1dd50;
        local_b8 = plVar16;
        memcpy(plVar16 + 2,&local_178,0xb0);
        if (plVar16 != (longlong *)&DAT_fffffffffffffff0) {
          local_c8 = (code *)&LAB_1481f15e2;
        }
        local_188 = &local_c8;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraSimCacheGpuReadFrame",&DAT_14cb433c4);
        if (local_c8 != (code *)0x0) {
          plVar16 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar16 = &local_a8;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_143abec61;
    }
  }
LAB_143abf10e:
  FUN_1481f0f4a(&local_178,&DAT_14ca85100);
LAB_143abec61:
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143abf8d2 FUN_143abf8d2 body=282 status=ok
// SIG undefined FUN_143abf8d2(void)

undefined8 * FUN_143abf8d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143abf8aa);
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



// FUNCTION 143abf9ec FUN_143abf9ec body=282 status=ok
// SIG undefined FUN_143abf9ec(void)

undefined8 * FUN_143abf9ec(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143abf8aa);
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



// FUNCTION 143abfb06 FUN_143abfb06 body=249 status=ok
// SIG undefined FUN_143abfb06(void)

undefined8 * FUN_143abfb06(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_143abfb3c;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_143abfb3c:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 4 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 4 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_143abfbb2;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143abfbb2:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 5;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x20;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14ae1de28;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 143abfc00 FUN_143abfc00 body=258 status=ok
// SIG undefined FUN_143abfc00(void)

undefined8 * FUN_143abfc00(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_143abfc36;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_143abfc36:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x1c <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x67U & 0xfffffffffffffff0);
      uVar7 = 0;
      if (puVar6 + 0x1c <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_143abfcb2;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143abfcb2:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x1d;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0xe0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14ae0eee8;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 143abfd02 FUN_143abfd02 body=282 status=ok
// SIG undefined FUN_143abfd02(void)

undefined8 * FUN_143abfd02(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143abf8aa);
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



// FUNCTION 143abfe1c FUN_143abfe1c body=29 status=ok
// SIG undefined FUN_143abfe1c(void)

undefined8 FUN_143abfe1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143abfe4e FUN_143abfe4e body=101 status=ok
// SIG undefined FUN_143abfe4e(void)

void FUN_143abfe4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1de80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143abfeb4 FUN_143abfeb4 body=101 status=ok
// SIG undefined FUN_143abfeb4(void)

void FUN_143abfeb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1de80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143abff1a FUN_143abff1a body=134 status=ok
// SIG undefined FUN_143abff1a(void)

void FUN_143abff1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae1de80;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143abff91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143abffaa FUN_143abffaa body=20 status=ok
// SIG undefined FUN_143abffaa(void)

undefined1 FUN_143abffaa(longlong param_1)

{
  FUN_143abffbe(param_1 + 0x18);
  return 1;
}



// FUNCTION 143abffbe FUN_143abffbe body=225 status=ok
// SIG undefined FUN_143abffbe(void)

void FUN_143abffbe(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong local_48;
  
  iVar2 = *(int *)(param_1 + 2);
  lVar8 = (longlong)iVar2;
  if (lVar8 == -1) {
    local_48 = 0;
  }
  else {
    local_48 = *(longlong *)(*(longlong *)(param_2 + 0x48) + lVar8 * 8);
  }
  bVar1 = *(byte *)(param_1 + 1);
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  param_1 = (undefined8 *)*param_1;
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x68) + 0x3c);
  iVar5 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x3c) = 1;
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(int *)(param_2 + 0x44) = iVar9;
      puVar6 = (undefined8 *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)*param_1 + (longlong)(iVar4 + iVar9 + *(int *)(param_2 + 0x38)) * 8
                   ) + 0x1c8 + (ulonglong)bVar1 * 0x10) + (longlong)iVar3 * 0x18);
      if (iVar2 != -1) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar8 * 8) = puVar6[2];
      }
      if (*(int *)(puVar6 + 1) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)*puVar6;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2);
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  if (local_48 != 0) {
    *(longlong *)(*(longlong *)(param_2 + 0x48) + lVar8 * 8) = local_48;
  }
  return;
}



// FUNCTION 143ac00a0 FUN_143ac00a0 body=29 status=ok
// SIG undefined FUN_143ac00a0(void)

undefined8 FUN_143ac00a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ac00d2 FUN_143ac00d2 body=93 status=ok
// SIG undefined FUN_143ac00d2(void)

void FUN_143ac00d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1def0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ac0130 FUN_143ac0130 body=93 status=ok
// SIG undefined FUN_143ac0130(void)

void FUN_143ac0130(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1def0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ac018e FUN_143ac018e body=126 status=ok
// SIG undefined FUN_143ac018e(void)

void FUN_143ac018e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae1def0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ac01fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ac020c FUN_143ac020c body=304 status=ok
// SIG undefined FUN_143ac020c(void)

void FUN_143ac020c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  lVar10 = *(longlong *)(param_2 + 0x80);
  iVar3 = *(int *)(*(longlong *)(lVar10 + 0x50) + 0x3c);
  iVar4 = *(int *)(lVar10 + 0x48);
  iVar5 = *(int *)(lVar10 + 0x40);
  uVar7 = *(undefined8 *)(lVar10 + 0x10);
  *(undefined4 *)(lVar10 + 0x40) = 1;
  if (0 < (longlong)iVar5) {
    lVar10 = (longlong)iVar4 + (longlong)iVar3;
    lVar11 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x10) = uVar7;
      *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c) = (int)lVar11;
      puVar8 = (undefined8 *)
               (*(longlong *)
                 (*(longlong *)(**(longlong **)(lVar6 + 0x2a8) + lVar10 * 8 + lVar11 * 8) + 0x1c8 +
                 (ulonglong)*(byte *)(lVar6 + 0x260) * 0x10) + (longlong)iVar2 * 0x18);
      if (iVar1 != -1) {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38) + (longlong)iVar1 * 8) =
             puVar8[2];
      }
      *(int *)(*(longlong *)(param_2 + 0x80) + 0x48) = (int)lVar11 + (int)lVar10;
      if (*(int *)(puVar8 + 1) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*puVar8;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,param_2);
      lVar11 = lVar11 + 1;
    } while (iVar5 != lVar11);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0x80) + 0x4c) = 0;
  *(int *)(*(longlong *)(param_2 + 0x80) + 0x48) = iVar4;
  *(int *)(*(longlong *)(param_2 + 0x80) + 0x40) = iVar5;
  return;
}



// FUNCTION 143ac033c FUN_143ac033c body=306 status=ok
// SIG undefined FUN_143ac033c(void)

undefined8 FUN_143ac033c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  lVar10 = *(longlong *)(param_2 + 0x80);
  iVar3 = *(int *)(*(longlong *)(lVar10 + 0x50) + 0x3c);
  iVar4 = *(int *)(lVar10 + 0x48);
  iVar5 = *(int *)(lVar10 + 0x40);
  uVar7 = *(undefined8 *)(lVar10 + 0x10);
  *(undefined4 *)(lVar10 + 0x40) = 1;
  if (0 < (longlong)iVar5) {
    lVar10 = (longlong)iVar4 + (longlong)iVar3;
    lVar11 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x10) = uVar7;
      *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c) = (int)lVar11;
      puVar8 = (undefined8 *)
               (*(longlong *)
                 (*(longlong *)(**(longlong **)(lVar6 + 0x2a8) + lVar10 * 8 + lVar11 * 8) + 0x1c8 +
                 (ulonglong)*(byte *)(lVar6 + 0x260) * 0x10) + (longlong)iVar2 * 0x18);
      if (iVar1 != -1) {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38) + (longlong)iVar1 * 8) =
             puVar8[2];
      }
      *(int *)(*(longlong *)(param_2 + 0x80) + 0x48) = (int)lVar11 + (int)lVar10;
      if (*(int *)(puVar8 + 1) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*puVar8;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,param_2);
      lVar11 = lVar11 + 1;
    } while (iVar5 != lVar11);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0x80) + 0x4c) = 0;
  *(int *)(*(longlong *)(param_2 + 0x80) + 0x48) = iVar4;
  lVar6 = *(longlong *)(param_2 + 0x80);
  *(int *)(lVar6 + 0x40) = iVar5;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 143ac046e FUN_143ac046e body=15 status=ok
// SIG undefined FUN_143ac046e(void)

void FUN_143ac046e(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143ac047e FUN_143ac047e body=186 status=ok
// SIG undefined FUN_143ac047e(void)

undefined8 FUN_143ac047e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    lVar1 = *param_1;
    uVar2 = FUN_1458bcb8e();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_30,*param_2);
      if ((longlong)local_28 != 0) {
        lVar4 = (longlong)local_28 * 0xc;
        lVar5 = local_30;
        do {
          FUN_140721fbe(lVar1 + 0xb0,lVar5);
          lVar5 = lVar5 + 0xc;
          lVar4 = lVar4 + -0xc;
        } while (lVar4 != 0);
      }
      if (local_30 != 0) {
        FUN_1400020a8(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143ac0564 FUN_143ac0564 body=29 status=ok
// SIG undefined FUN_143ac0564(void)

undefined8 FUN_143ac0564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ac0582 FUN_143ac0582 body=1518 status=ok
// SIG undefined FUN_143ac0582(void)

undefined8 FUN_143ac0582(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = *param_3;
  lVar2 = *param_1;
  if ((longlong)*(int *)(lVar2 + 0xb8) == 0) {
LAB_143ac05db:
    if (lVar9 != 0) {
      uVar4 = FUN_1458bcb8e();
      plVar5 = (longlong *)FUN_144718840(lVar9,uVar4);
      if (plVar5 != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[1];
        lVar14 = *param_2;
        puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
        if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
          uVar3 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar16 = (uint)lVar14 & 0xffff;
          uVar11 = (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar16) +
                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4);
          uVar1 = (ushort)puVar6[1];
          uVar3 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          uVar3 = (uint)(uVar1 >> 0xd) ^ (uVar3 >> 0x10 ^ uVar3) - (uint)uVar1;
          uVar16 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - (uint)uVar1;
          uVar18 = uVar16 >> 0xd ^ (uVar1 - uVar3) - uVar16;
          uVar3 = uVar18 >> 0xc ^ (uVar3 - uVar16) - uVar18;
          uVar16 = uVar3 << 0x10 ^ (uVar16 - uVar18) - uVar3;
          uVar18 = uVar16 >> 5 ^ (uVar18 - uVar3) - uVar16;
          uVar19 = uVar18 >> 3 ^ (uVar3 - uVar16) - uVar18;
          uVar3 = uVar19 << 10 ^ (uVar16 - uVar18) - uVar19;
          uVar3 = uVar3 >> 0xf ^ uVar18 - (uVar19 + uVar3);
          iVar10 = uVar3 - *(byte *)((longlong)puVar6 + 10);
          uVar16 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar3;
          uVar18 = uVar16 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar16;
          uVar3 = uVar18 >> 0xc ^ (iVar10 - uVar16) - uVar18;
          uVar16 = uVar3 << 0x10 ^ (uVar16 - uVar18) - uVar3;
          uVar19 = uVar16 >> 5 ^ (uVar18 - uVar3) - uVar16;
          uVar18 = uVar19 >> 3 ^ (uVar3 - uVar16) - uVar19;
          uVar3 = uVar18 << 10 ^ (uVar16 - uVar19) - uVar18;
          uVar18 = uVar11 >> 0xd ^ (uVar3 >> 0xf ^ uVar19 - (uVar18 + uVar3)) - uVar11;
          uVar16 = uVar18 << 8 ^ (-0x61c88647 - uVar11) - uVar18;
          uVar3 = uVar16 >> 0xd ^ (uVar11 - uVar18) - uVar16;
          uVar11 = uVar3 >> 0xc ^ (uVar18 - uVar16) - uVar3;
          uVar18 = uVar11 << 0x10 ^ (uVar16 - uVar3) - uVar11;
          uVar16 = uVar18 >> 5 ^ (uVar3 - uVar11) - uVar18;
          uVar3 = uVar16 >> 3 ^ (uVar11 - uVar18) - uVar16;
          uVar18 = uVar3 << 10 ^ (uVar18 - uVar16) - uVar3;
          plVar7 = plVar13 + 7;
          if ((longlong *)plVar13[8] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar13[8];
          }
          iVar10 = *(int *)((longlong)plVar7 +
                           (ulonglong)
                           ((int)plVar13[9] - 1U & (uVar18 >> 0xf ^ uVar16 - (uVar3 + uVar18))) * 4)
          ;
          if (iVar10 != -1) {
            lVar14 = *plVar13;
            do {
              lVar15 = (longlong)iVar10;
              if ((*(longlong *)(lVar14 + lVar15 * 0x14) == *param_2) &&
                 (*(int *)(lVar14 + lVar15 * 0x14 + 8) == (int)param_2[1])) goto LAB_143ac05e0;
              iVar10 = *(int *)(lVar14 + lVar15 * 0x14 + 0xc);
            } while (iVar10 != -1);
          }
        }
        FUN_1481f2a10(param_1[1],local_4c,param_2);
        lVar14 = *(longlong *)(param_1[2] + 8);
        if ((longlong)*(int *)(lVar14 + 0x170) == 0) {
LAB_143ac0927:
          lVar17 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar14 + 0x168);
          lVar15 = (longlong)*(int *)(lVar14 + 0x170) * 0xc;
          lVar17 = 0;
          do {
            if ((puVar8[1] == 0) || (uVar3 = *puVar8, (int)uVar3 < 0)) {
LAB_143ac0911:
              lVar12 = 0;
            }
            else {
              lVar12 = 0;
              if ((int)uVar3 < DAT_14c9647dc) {
                plVar13 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if (((plVar13 == (longlong *)0x0) || (*(uint *)(plVar13 + 2) != puVar8[1])) ||
                   ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143ac0911;
                lVar12 = *plVar13;
              }
            }
            if (lVar12 == lVar9) {
              if (puVar8 == (uint *)0x0) goto LAB_143ac0927;
              lVar17 = (longlong)(int)puVar8[2] + *(longlong *)(lVar14 + 0x138);
              break;
            }
            puVar8 = puVar8 + 3;
            lVar15 = lVar15 + -0xc;
          } while (lVar15 != 0);
        }
        local_58 = param_1[3];
        lVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar2,lVar14,lVar17);
        if (lVar9 != 0) {
          lVar14 = *param_2;
          uVar3 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar16 = (uint)lVar14 & 0xffff;
          uVar19 = ((uint)lVar14 << 0x10 | uVar16) + (int)((ulonglong)lVar14 >> 0x20) +
                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4);
          puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
          uVar1 = (ushort)puVar6[1];
          uVar3 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          uVar3 = (uint)(uVar1 >> 0xd) ^ (uVar3 >> 0x10 ^ uVar3) - (uint)uVar1;
          uVar16 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - (uint)uVar1;
          uVar18 = uVar16 >> 0xd ^ (uVar1 - uVar3) - uVar16;
          uVar3 = uVar18 >> 0xc ^ (uVar3 - uVar16) - uVar18;
          uVar16 = uVar3 << 0x10 ^ (uVar16 - uVar18) - uVar3;
          uVar18 = uVar16 >> 5 ^ (uVar18 - uVar3) - uVar16;
          uVar11 = uVar18 >> 3 ^ (uVar3 - uVar16) - uVar18;
          uVar3 = uVar11 << 10 ^ (uVar16 - uVar18) - uVar11;
          uVar3 = uVar3 >> 0xf ^ uVar18 - (uVar11 + uVar3);
          iVar10 = uVar3 - *(byte *)((longlong)puVar6 + 10);
          uVar16 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar3;
          uVar18 = uVar16 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar16;
          uVar3 = uVar18 >> 0xc ^ (iVar10 - uVar16) - uVar18;
          uVar16 = uVar3 << 0x10 ^ (uVar16 - uVar18) - uVar3;
          uVar11 = uVar16 >> 5 ^ (uVar18 - uVar3) - uVar16;
          uVar18 = uVar11 >> 3 ^ (uVar3 - uVar16) - uVar11;
          uVar3 = uVar18 << 10 ^ (uVar16 - uVar11) - uVar18;
          uVar18 = uVar19 >> 0xd ^ (uVar3 >> 0xf ^ uVar11 - (uVar18 + uVar3)) - uVar19;
          uVar16 = uVar18 << 8 ^ (-0x61c88647 - uVar19) - uVar18;
          uVar3 = uVar16 >> 0xd ^ (uVar19 - uVar18) - uVar16;
          uVar18 = uVar3 >> 0xc ^ (uVar18 - uVar16) - uVar3;
          uVar11 = uVar18 << 0x10 ^ (uVar16 - uVar3) - uVar18;
          uVar16 = uVar11 >> 5 ^ (uVar3 - uVar18) - uVar11;
          uVar3 = uVar16 >> 3 ^ (uVar18 - uVar11) - uVar16;
          uVar18 = uVar3 << 10 ^ (uVar11 - uVar16) - uVar3;
          plVar5 = (longlong *)
                   FUN_1481f2fd0(lVar2 + 0x1a0,uVar18 >> 0xf ^ uVar16 - (uVar3 + uVar18),param_2);
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar9);
          }
          *plVar5 = lVar9;
        }
      }
    }
  }
  else {
    lVar14 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + lVar14) == *param_2) goto LAB_143ac05db;
      lVar14 = lVar14 + 8;
    } while ((longlong)*(int *)(lVar2 + 0xb8) * 8 != lVar14);
  }
LAB_143ac05e0:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143ac0b72 FUN_143ac0b72 body=70 status=ok
// SIG undefined FUN_143ac0b72(void)

undefined8 * FUN_143ac0b72(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ae1df80;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143ac0bbe FUN_143ac0bbe body=29 status=ok
// SIG undefined FUN_143ac0bbe(void)

void FUN_143ac0bbe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ac0bdc FUN_143ac0bdc body=29 status=ok
// SIG undefined FUN_143ac0bdc(void)

undefined8 FUN_143ac0bdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ac0bfa FUN_143ac0bfa body=1719 status=ok
// SIG undefined FUN_143ac0bfa(void)

undefined8 FUN_143ac0bfa(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_3;
  lVar3 = *param_1;
  lVar7 = *param_2;
  puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
  if (*(int *)(lVar3 + 0x1a8) != *(int *)(lVar3 + 0x1d4)) {
    uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar15 = (uint)lVar7 & 0xffff;
    uVar18 = (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar15) +
             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4);
    uVar1 = (ushort)puVar6[1];
    uVar5 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = (uint)(uVar1 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - (uint)uVar1;
    uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - (uint)uVar1;
    uVar16 = uVar15 >> 0xd ^ (uVar1 - uVar5) - uVar15;
    uVar5 = uVar16 >> 0xc ^ (uVar5 - uVar15) - uVar16;
    uVar15 = uVar5 << 0x10 ^ (uVar15 - uVar16) - uVar5;
    uVar16 = uVar15 >> 5 ^ (uVar16 - uVar5) - uVar15;
    uVar17 = uVar16 >> 3 ^ (uVar5 - uVar15) - uVar16;
    uVar5 = uVar17 << 10 ^ (uVar15 - uVar16) - uVar17;
    uVar5 = uVar5 >> 0xf ^ uVar16 - (uVar17 + uVar5);
    iVar10 = uVar5 - *(byte *)((longlong)puVar6 + 10);
    uVar15 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar5;
    uVar16 = uVar15 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar15;
    uVar5 = uVar16 >> 0xc ^ (iVar10 - uVar15) - uVar16;
    uVar15 = uVar5 << 0x10 ^ (uVar15 - uVar16) - uVar5;
    uVar17 = uVar15 >> 5 ^ (uVar16 - uVar5) - uVar15;
    uVar16 = uVar17 >> 3 ^ (uVar5 - uVar15) - uVar17;
    uVar5 = uVar16 << 10 ^ (uVar15 - uVar17) - uVar16;
    uVar16 = uVar18 >> 0xd ^ (uVar5 >> 0xf ^ uVar17 - (uVar16 + uVar5)) - uVar18;
    uVar15 = uVar16 << 8 ^ (-0x61c88647 - uVar18) - uVar16;
    uVar5 = uVar15 >> 0xd ^ (uVar18 - uVar16) - uVar15;
    uVar17 = uVar5 >> 0xc ^ (uVar16 - uVar15) - uVar5;
    uVar16 = uVar17 << 0x10 ^ (uVar15 - uVar5) - uVar17;
    uVar15 = uVar16 >> 5 ^ (uVar5 - uVar17) - uVar16;
    uVar5 = uVar15 >> 3 ^ (uVar17 - uVar16) - uVar15;
    uVar16 = uVar5 << 10 ^ (uVar16 - uVar15) - uVar5;
    lVar7 = lVar3 + 0x1d8;
    if (*(longlong *)(lVar3 + 0x1e0) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x1e0);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(lVar3 + 0x1e8) - 1U &
                              (uVar16 >> 0xf ^ uVar15 - (uVar5 + uVar16))) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x1a0);
      lVar7 = *param_2;
      do {
        lVar12 = (longlong)iVar10;
        lVar13 = lVar3 + lVar12 * 0x20;
        if ((*(longlong *)(lVar3 + lVar12 * 0x20) == lVar7) &&
           (*(int *)(lVar3 + (lVar12 * 4 + 1) * 8) == (int)param_2[1])) {
          if (lVar13 == 0) break;
          lVar3 = *(longlong *)(lVar13 + 0x10);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c(lVar3);
            lVar7 = *param_2;
          }
          else if (lVar3 == 0) break;
          plVar9 = (longlong *)param_1[1];
          puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
          if ((int)plVar9[1] == *(int *)((longlong)plVar9 + 0x34)) goto LAB_143ac110b;
          uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
          uVar15 = (uint)lVar7 & 0xffff;
          uVar18 = (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar15) +
                   (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4);
          uVar1 = (ushort)puVar6[1];
          uVar5 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          uVar5 = (uint)(uVar1 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - (uint)uVar1;
          uVar15 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - (uint)uVar1;
          uVar16 = uVar15 >> 0xd ^ (uVar1 - uVar5) - uVar15;
          uVar5 = uVar16 >> 0xc ^ (uVar5 - uVar15) - uVar16;
          uVar15 = uVar5 << 0x10 ^ (uVar15 - uVar16) - uVar5;
          uVar16 = uVar15 >> 5 ^ (uVar16 - uVar5) - uVar15;
          uVar17 = uVar16 >> 3 ^ (uVar5 - uVar15) - uVar16;
          uVar5 = uVar17 << 10 ^ (uVar15 - uVar16) - uVar17;
          uVar5 = uVar5 >> 0xf ^ uVar16 - (uVar17 + uVar5);
          iVar10 = uVar5 - *(byte *)((longlong)puVar6 + 10);
          uVar15 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar5;
          uVar16 = uVar15 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar15;
          uVar5 = uVar16 >> 0xc ^ (iVar10 - uVar15) - uVar16;
          uVar15 = uVar5 << 0x10 ^ (uVar15 - uVar16) - uVar5;
          uVar17 = uVar15 >> 5 ^ (uVar16 - uVar5) - uVar15;
          uVar16 = uVar17 >> 3 ^ (uVar5 - uVar15) - uVar17;
          uVar5 = uVar16 << 10 ^ (uVar15 - uVar17) - uVar16;
          uVar16 = uVar18 >> 0xd ^ (uVar5 >> 0xf ^ uVar17 - (uVar16 + uVar5)) - uVar18;
          uVar15 = uVar16 << 8 ^ (-0x61c88647 - uVar18) - uVar16;
          uVar5 = uVar15 >> 0xd ^ (uVar18 - uVar16) - uVar15;
          uVar17 = uVar5 >> 0xc ^ (uVar16 - uVar15) - uVar5;
          uVar16 = uVar17 << 0x10 ^ (uVar15 - uVar5) - uVar17;
          uVar15 = uVar16 >> 5 ^ (uVar5 - uVar17) - uVar16;
          uVar5 = uVar15 >> 3 ^ (uVar17 - uVar16) - uVar15;
          uVar16 = uVar5 << 10 ^ (uVar16 - uVar15) - uVar5;
          plVar19 = plVar9 + 7;
          if ((longlong *)plVar9[8] != (longlong *)0x0) {
            plVar19 = (longlong *)plVar9[8];
          }
          iVar10 = *(int *)((longlong)plVar19 +
                           (ulonglong)
                           ((int)plVar9[9] - 1U & (uVar16 >> 0xf ^ uVar15 - (uVar5 + uVar16))) * 4);
          if (iVar10 == -1) goto LAB_143ac110b;
          lVar7 = *plVar9;
          goto LAB_143ac10e5;
        }
        iVar10 = *(int *)(lVar13 + 0x18);
      } while (iVar10 != -1);
    }
  }
  goto LAB_143ac1289;
  while (iVar10 = *(int *)(lVar7 + lVar13 * 0x14 + 0xc), iVar10 != -1) {
LAB_143ac10e5:
    lVar13 = (longlong)iVar10;
    if ((*(longlong *)(lVar7 + lVar13 * 0x14) == *param_2) &&
       (*(int *)(lVar7 + lVar13 * 0x14 + 8) == (int)param_2[1])) goto LAB_143ac1289;
  }
LAB_143ac110b:
  FUN_1481f2a10(param_1[1],&local_50,param_2);
  uVar8 = FUN_1458bcb8e();
  plVar9 = (longlong *)FUN_144718840(lVar2,uVar8);
  lVar7 = *(longlong *)(param_1[2] + 8);
  if ((longlong)*(int *)(lVar7 + 0x170) == 0) {
LAB_143ac11e3:
    local_78 = 0;
  }
  else {
    puVar11 = *(uint **)(lVar7 + 0x168);
    lVar13 = (longlong)*(int *)(lVar7 + 0x170) * 0xc;
    local_78 = 0;
    do {
      if ((puVar11[1] == 0) || (uVar5 = *puVar11, (int)uVar5 < 0)) {
LAB_143ac11bc:
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar19 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar19 == (longlong *)0x0) || (*(uint *)(plVar19 + 2) != puVar11[1])) ||
             ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_143ac11bc;
          lVar12 = *plVar19;
        }
      }
      if (lVar12 == lVar2) {
        if (puVar11 == (uint *)0x0) goto LAB_143ac11e3;
        local_78 = (longlong)(int)puVar11[2] + *(longlong *)(lVar7 + 0x138);
        break;
      }
      puVar11 = puVar11 + 3;
      lVar13 = lVar13 + -0xc;
    } while (lVar13 != 0);
  }
  local_70 = param_1[4];
  cVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,lVar3,*(undefined4 *)param_1[3]);
  if (cVar4 == '\0') {
    *(undefined1 *)param_1[5] = 0;
    local_50 = *(longlong *)(lVar2 + 0x18);
    FUN_1400021e4(&local_50,&local_60);
    puVar14 = local_60;
    if (local_58 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,&DAT_149f9c75e,puVar14);
    iVar10 = local_48 + -1;
    if (local_48 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(param_1[6],local_50,iVar10);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ac1289:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143ac12b2 FUN_143ac12b2 body=86 status=ok
// SIG undefined FUN_143ac12b2(void)

undefined8 * FUN_143ac12b2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14ae1dfa0;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143ac130e FUN_143ac130e body=29 status=ok
// SIG undefined FUN_143ac130e(void)

void FUN_143ac130e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ac132c FUN_143ac132c body=29 status=ok
// SIG undefined FUN_143ac132c(void)

undefined8 FUN_143ac132c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ac134a FUN_143ac134a body=1607 status=ok
// SIG undefined FUN_143ac134a(void)

undefined8 FUN_143ac134a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_3;
  lVar3 = *param_1;
  lVar16 = *param_2;
  puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
  if (*(int *)(lVar3 + 0x1a8) != *(int *)(lVar3 + 0x1d4)) {
    uVar5 = (uint)((ulonglong)lVar16 >> 0x10);
    uVar12 = (uint)lVar16 & 0xffff;
    uVar18 = (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar12) +
             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
    uVar1 = (ushort)puVar6[1];
    uVar5 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = (uint)(uVar1 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - (uint)uVar1;
    uVar12 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - (uint)uVar1;
    uVar14 = uVar12 >> 0xd ^ (uVar1 - uVar5) - uVar12;
    uVar5 = uVar14 >> 0xc ^ (uVar5 - uVar12) - uVar14;
    uVar12 = uVar5 << 0x10 ^ (uVar12 - uVar14) - uVar5;
    uVar14 = uVar12 >> 5 ^ (uVar14 - uVar5) - uVar12;
    uVar15 = uVar14 >> 3 ^ (uVar5 - uVar12) - uVar14;
    uVar5 = uVar15 << 10 ^ (uVar12 - uVar14) - uVar15;
    uVar5 = uVar5 >> 0xf ^ uVar14 - (uVar15 + uVar5);
    iVar10 = uVar5 - *(byte *)((longlong)puVar6 + 10);
    uVar12 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar5;
    uVar14 = uVar12 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar12;
    uVar5 = uVar14 >> 0xc ^ (iVar10 - uVar12) - uVar14;
    uVar12 = uVar5 << 0x10 ^ (uVar12 - uVar14) - uVar5;
    uVar15 = uVar12 >> 5 ^ (uVar14 - uVar5) - uVar12;
    uVar14 = uVar15 >> 3 ^ (uVar5 - uVar12) - uVar15;
    uVar5 = uVar14 << 10 ^ (uVar12 - uVar15) - uVar14;
    uVar14 = uVar18 >> 0xd ^ (uVar5 >> 0xf ^ uVar15 - (uVar14 + uVar5)) - uVar18;
    uVar12 = uVar14 << 8 ^ (-0x61c88647 - uVar18) - uVar14;
    uVar5 = uVar12 >> 0xd ^ (uVar18 - uVar14) - uVar12;
    uVar15 = uVar5 >> 0xc ^ (uVar14 - uVar12) - uVar5;
    uVar14 = uVar15 << 0x10 ^ (uVar12 - uVar5) - uVar15;
    uVar12 = uVar14 >> 5 ^ (uVar5 - uVar15) - uVar14;
    uVar5 = uVar12 >> 3 ^ (uVar15 - uVar14) - uVar12;
    uVar14 = uVar5 << 10 ^ (uVar14 - uVar12) - uVar5;
    lVar16 = lVar3 + 0x1d8;
    if (*(longlong *)(lVar3 + 0x1e0) != 0) {
      lVar16 = *(longlong *)(lVar3 + 0x1e0);
    }
    iVar10 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(lVar3 + 0x1e8) - 1U &
                               (uVar14 >> 0xf ^ uVar12 - (uVar5 + uVar14))) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x1a0);
      do {
        lVar13 = (longlong)iVar10;
        lVar16 = lVar3 + lVar13 * 0x20;
        if ((*(longlong *)(lVar3 + lVar13 * 0x20) == *param_2) &&
           (*(int *)(lVar3 + (lVar13 * 4 + 1) * 8) == (int)param_2[1])) {
          if (lVar16 == 0) break;
          lVar3 = *(longlong *)(lVar16 + 0x10);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c(lVar3);
            if (lVar2 == 0) break;
          }
          else if (lVar3 == 0 || lVar2 == 0) break;
          uVar7 = FUN_1458bcb8e();
          plVar8 = (longlong *)FUN_144718840(lVar2,uVar7);
          if (plVar8 != (longlong *)0x0) {
            plVar17 = (longlong *)param_1[1];
            lVar16 = *param_2;
            puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
            if ((int)plVar17[1] == *(int *)((longlong)plVar17 + 0x34)) goto LAB_143ac189a;
            uVar5 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar12 = (uint)lVar16 & 0xffff;
            uVar15 = (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar12) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
            uVar1 = (ushort)puVar6[1];
            uVar5 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            uVar5 = (uint)(uVar1 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - (uint)uVar1;
            uVar12 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - (uint)uVar1;
            uVar14 = uVar12 >> 0xd ^ (uVar1 - uVar5) - uVar12;
            uVar5 = uVar14 >> 0xc ^ (uVar5 - uVar12) - uVar14;
            uVar12 = uVar5 << 0x10 ^ (uVar12 - uVar14) - uVar5;
            uVar14 = uVar12 >> 5 ^ (uVar14 - uVar5) - uVar12;
            uVar18 = uVar14 >> 3 ^ (uVar5 - uVar12) - uVar14;
            uVar5 = uVar18 << 10 ^ (uVar12 - uVar14) - uVar18;
            uVar5 = uVar5 >> 0xf ^ uVar14 - (uVar18 + uVar5);
            iVar10 = uVar5 - *(byte *)((longlong)puVar6 + 10);
            uVar12 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar5;
            uVar14 = uVar12 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar12;
            uVar5 = uVar14 >> 0xc ^ (iVar10 - uVar12) - uVar14;
            uVar12 = uVar5 << 0x10 ^ (uVar12 - uVar14) - uVar5;
            uVar18 = uVar12 >> 5 ^ (uVar14 - uVar5) - uVar12;
            uVar14 = uVar18 >> 3 ^ (uVar5 - uVar12) - uVar18;
            uVar5 = uVar14 << 10 ^ (uVar12 - uVar18) - uVar14;
            uVar14 = uVar15 >> 0xd ^ (uVar5 >> 0xf ^ uVar18 - (uVar14 + uVar5)) - uVar15;
            uVar12 = uVar14 << 8 ^ (-0x61c88647 - uVar15) - uVar14;
            uVar5 = uVar12 >> 0xd ^ (uVar15 - uVar14) - uVar12;
            uVar15 = uVar5 >> 0xc ^ (uVar14 - uVar12) - uVar5;
            uVar14 = uVar15 << 0x10 ^ (uVar12 - uVar5) - uVar15;
            uVar12 = uVar14 >> 5 ^ (uVar5 - uVar15) - uVar14;
            uVar5 = uVar12 >> 3 ^ (uVar15 - uVar14) - uVar12;
            uVar14 = uVar5 << 10 ^ (uVar14 - uVar12) - uVar5;
            plVar9 = plVar17 + 7;
            if ((longlong *)plVar17[8] != (longlong *)0x0) {
              plVar9 = (longlong *)plVar17[8];
            }
            iVar10 = *(int *)((longlong)plVar9 +
                             (ulonglong)
                             ((int)plVar17[9] - 1U & (uVar14 >> 0xf ^ uVar12 - (uVar5 + uVar14))) *
                             4);
            if (iVar10 == -1) goto LAB_143ac189a;
            lVar16 = *plVar17;
            goto LAB_143ac1874;
          }
          break;
        }
        iVar10 = *(int *)(lVar16 + 0x18);
      } while (iVar10 != -1);
    }
  }
  goto LAB_143ac1601;
  while (iVar10 = *(int *)(lVar16 + lVar13 * 0x14 + 0xc), iVar10 != -1) {
LAB_143ac1874:
    lVar13 = (longlong)iVar10;
    if ((*(longlong *)(lVar16 + lVar13 * 0x14) == *param_2) &&
       (*(int *)(lVar16 + lVar13 * 0x14 + 8) == (int)param_2[1])) goto LAB_143ac1601;
  }
LAB_143ac189a:
  FUN_1481f2a10(param_1[1],local_4c,param_2);
  local_60 = *(longlong *)(param_1[2] + 8);
  if ((longlong)*(int *)(local_60 + 0x170) == 0) {
LAB_143ac1952:
    local_58 = 0;
  }
  else {
    puVar11 = *(uint **)(local_60 + 0x168);
    lVar16 = (longlong)*(int *)(local_60 + 0x170) * 0xc;
    local_58 = 0;
    do {
      if ((puVar11[1] == 0) || (uVar5 = *puVar11, (int)uVar5 < 0)) {
LAB_143ac193b:
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar17 == (longlong *)0x0) || (*(uint *)(plVar17 + 2) != puVar11[1])) ||
             ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143ac193b;
          lVar13 = *plVar17;
        }
      }
      if (lVar13 == lVar2) {
        if (puVar11 == (uint *)0x0) goto LAB_143ac1952;
        local_58 = (longlong)(int)puVar11[2] + *(longlong *)(local_60 + 0x138);
        break;
      }
      puVar11 = puVar11 + 3;
      lVar16 = lVar16 + -0xc;
    } while (lVar16 != 0);
  }
  local_68 = *(undefined4 *)param_1[6];
  bVar4 = (**(code **)(*plVar8 + 0x28))
                    (plVar8,lVar3,*(undefined4 *)param_1[4],*(undefined4 *)param_1[5]);
  *(byte *)param_1[3] = *(byte *)param_1[3] & bVar4;
LAB_143ac1601:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143ac1992 FUN_143ac1992 body=86 status=ok
// SIG undefined FUN_143ac1992(void)

undefined8 * FUN_143ac1992(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14ae1dfc0;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143ac19ee FUN_143ac19ee body=29 status=ok
// SIG undefined FUN_143ac19ee(void)

void FUN_143ac19ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ac1a0c FUN_143ac1a0c body=29 status=ok
// SIG undefined FUN_143ac1a0c(void)

undefined8 FUN_143ac1a0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ac1a29 FUN_143ac1a29 body=1674 status=ok
// SIG undefined FUN_143ac1a29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac1a29(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb42c74);
  if (cVar1 == '\0') {
    _DAT_14cb42c74 = 0;
    uRam000000014cb42c7c = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78._0_4_ = 0;
  FUN_141471170(&DAT_14cb42c88,L"fx.EnableNiagaraSpriteRendering",&DAT_14c7629a4,
                L"If == 0, Niagara Sprite Renderers are disabled. \n");
  atexit(FUN_143ab9cb0);
  local_60 = (char *)CONCAT44(local_60._4_4_,1);
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb42c98,L"r.RayTracing.Geometry.NiagaraSprites",&local_60,
                L"Include Niagara sprites in ray tracing effects (default = 1 (Niagara sprites enabled in ray tracing))"
               );
  atexit(FUN_143ab9cf5);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14153156c(&DAT_14cb42cc0,L"fx.Niagara.VolumeRenderer.Enabled",&DAT_14c7629a8,
                L"If == 0, Niagara Volume Renderers are disabled.");
  atexit(FUN_143abadcf);
  uStack_68 = 7;
  ppuStack_70 = &PTR_FUN_14ae11640;
  local_78 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae11770,1,&PTR_FUN_14ae11720);
  local_60 = "UniqueID";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb42dc0 = (ulonglong)uVar2;
  DAT_14cb42dc8 = 0;
  _DAT_14cb42dd0 = 0;
  atexit((_func_5014 *)&LAB_143abb167);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae11910);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb42df0,L"fx.NiagaraScalabilityUpdateTime_Low",&DAT_14c7629ac,
                L"Time in seconds between updates to scalability states for Niagara systems set to update at Low frequency. \n"
               );
  atexit(FUN_143abb190);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb42e00,L"fx.NiagaraScalabilityUpdateTime_Medium",&DAT_14c7629b0,
                L"Time in seconds between updates to scalability states for Niagara systems set to update at Medium frequency. \n"
               );
  atexit(FUN_143abb1d5);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb42e10,L"fx.NiagaraScalabilityUpdateTime_High",&DAT_14c7629b4,
                L"Time in seconds between updates to scalability states for Niagara systems set to update at High frequency. \n"
               );
  atexit(FUN_143abb21a);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42e20,L"fx.ScalabilityManParallelThreshold",&DAT_14c7629b8,
                L"Number of instances required for a niagara significance manger to go parallel for it\'s update. \n"
               );
  atexit(FUN_143abb25f);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42e30,L"fx.ScalabilityMaxUpdatesPerFrame",&DAT_14c7629bc,
                L"Number of instances that can be processed per frame when updating scalability state. -1 for all of them. \n"
               );
  atexit(FUN_143abb2a4);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb42e40,L"fx.Niagara.Scalability.ApplyInstanceCountsRigidly",&DAT_14cb42e50,
                L"If true we\'ll apply instance counts more rigidly. Un-culled Systems wil not be able to activate until overall systems fall below the instance count. \n"
               );
  atexit(FUN_143abb2e9);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb42e58,L"gbx.fx.ScalabilityContinuousThrottle",&DAT_14cb42e68,
                L"Should Continuous scalability update systems also be throttled\n");
  atexit(FUN_143abb32e);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae12460,1,0);
  uStack_68 = 8;
  ppuStack_70 = &PTR_FUN_14ae14790;
  local_78 = 7;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae149b0,1,&PTR_FUN_14ae14890);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb43018,L"fx.DumpGraphKeyGen",&DAT_14cb43010,
                L"If > 0 the key generation will be dumped to the log. \n");
  atexit(FUN_143abbcde);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb43030,L"fx.ForceSafeScriptAttributeTrim",&DAT_14cb43028,
                L"If > 0 attribute trimming will use a less aggressive algorithm for removing script attributes. \n"
               );
  atexit(FUN_143abbd23);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb43048,L"fx.Niagara.CompressScriptByteCode",&DAT_14cb43040,
                L"Should we compress script bytecode to save memory. Will be uncompressed on demand."
               );
  atexit(FUN_143abbd68);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb43058,L"fx.Niagara.DelayScriptAsyncOptimization",&DAT_14c7629c0,
                L"Should we delay the async optimization until the emitter is activated?");
  atexit(FUN_143abbdad);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb43070,L"fx.LogCompileStaticVars",&DAT_14cb43068,
                L"If > 0 all compile id generation dealing with static variables will be logged.  \n"
               );
  atexit(FUN_143abbdf2);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb43080,L"fx.Niagara.EventSpawnsUpdateAttributeInitialValues",&DAT_14c7629c4,
                L"If > 0 Niagara Event Spawn Scripts will update the Initial.* values for particle attributes. \n"
               );
  atexit(FUN_143abbe37);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb43090,L"fx.Niagara.CompileHashAllDataInterfaces",&DAT_14c7629c8,
                L"Forces Niagara to include all data interfaces as part of compile hash generation.\n0 = Disabled.\n1 = Enabled, but hash once, better for perf.\n2 = Enabled, generated hash always good for iteration on Niagara work."
               );
  atexit(FUN_143abbe7c);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb430a0,L"fx.Niagara.StripByteCodeOverride",&DAT_14cb430b0,
                L"Overrides project settings to strip byte code from the script on load..\n-1 = Enabled, strips Experimental VM.\n0 = Disabled.\n1 = Enabled, strips original VM.\n"
               );
  atexit(FUN_143abbec1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb430b8,L"fx.Niagara.GpuScriptsCompiledBySystem",&DAT_14c7629cc,
                L"If true GPU shaders for Niagara scripts will be compiled along with the NiagaraSystem (when using AsyncTask compilation mode). \n"
               );
  atexit(FUN_143abbf06);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb430e8,L"fx.ExecVMScripts",&DAT_14c7629d0,
                L"If > 0 VM scripts will be executed, otherwise they won\'t, useful for looking at the bytecode for a crashing compiled script. \n"
               );
  atexit(FUN_143abcd4a);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb430f8,L"fx.ForceExecVMPath",&DAT_14cb43108,
                L"If < 0, the legacy VM path will be used, if > 0 the experimental version will be used, and the default if 0. \n"
               );
  atexit(FUN_143abcd8f);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae15a10);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ae15c80);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14ae19820;
  local_78 = 8;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae19980,1,&PTR_FUN_14ae19840);
  DAT_14cb43300 = 0;
  _DAT_14cb43308 = 0;
  _DAT_14cb43310 = 2;
  atexit(FUN_143abe748);
  DAT_14cb433c8 = 0;
  _DAT_14cb433d0 = 0;
  _DAT_14cb433d8 = 2;
  atexit(FUN_143abe779);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ae1b130,2,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac20b4 FUN_143ac20b4 body=1198 status=ok
// SIG undefined FUN_143ac20b4(void)

void FUN_143ac20b4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143ac20f2;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143ac20f7;
      goto LAB_143ac2146;
    }
  }
  else {
LAB_143ac20f2:
    if (iVar6 != 0x10) {
LAB_143ac2146:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143ac20f7;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143ac20f7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143ac229f;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143ac229f:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143ac231f;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143ac231f:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ae264f0;
        puVar16[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ae26480;
        local_68[0] = &LAB_143acab24;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraSimCacheGpuResource_FDeletor",&DAT_14cb4398c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143ac21dd;
    }
  }
LAB_143ac20f7:
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_143ac21dd:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac257c FUN_143ac257c body=1891 status=ok
// SIG undefined FUN_143ac257c(void)

void FUN_143ac257c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  size_t sVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar24 = *(int *)(param_2 + 0x198);
  *(int *)(param_1 + 0x10) = iVar24;
  iVar3 = *(int *)(param_2 + 0x188);
  *(int *)(param_1 + 0x14) = iVar3;
  uVar16 = iVar24 * iVar3 * 4;
  local_98 = 0;
  lVar23 = *(longlong *)(param_2 + 400);
  iVar24 = *(int *)(param_2 + 0x198);
  lVar9 = (longlong)iVar24;
  uVar14 = uVar16;
  if (lVar9 != 0) {
    lVar20 = lVar23;
    do {
      if ((longlong)*(int *)(lVar20 + 0x150) != 0) {
        lVar18 = *(longlong *)(lVar20 + 0x148);
        lVar22 = 0;
        do {
          uVar14 = (*(int *)(lVar18 + 0x68 + lVar22) + 3U >> 2) +
                   (*(int *)(lVar18 + 0x58 + lVar22) + 3U >> 2) +
                   (*(int *)(lVar18 + 0x78 + lVar22) + 3U >> 2) + uVar14;
          lVar22 = lVar22 + 0xd8;
        } while ((longlong)*(int *)(lVar20 + 0x150) * 0xd8 - lVar22 != 0);
      }
      lVar20 = lVar20 + 0x160;
    } while (lVar20 != lVar9 * 0x160 + lVar23);
  }
  uStack_90 = (ulonglong)uVar14;
  if (uVar14 != 0) {
    FUN_1447808da(&local_98,0);
    lVar23 = *(longlong *)(param_2 + 400);
    iVar24 = *(int *)(param_2 + 0x198);
    lVar9 = (longlong)iVar24;
  }
  if (iVar24 != 0) {
    lVar9 = lVar9 * 0x160 + lVar23;
    iVar24 = 0;
    do {
      iVar3 = *(int *)(lVar23 + 0x150);
      if ((longlong)iVar3 != 0) {
        lVar20 = *(longlong *)(lVar23 + 0x148);
        lVar18 = 0;
        do {
          *(undefined4 *)(local_98 + (longlong)iVar24 * 4) = *(undefined4 *)(lVar20 + 0x40 + lVar18)
          ;
          *(uint *)(local_98 + (longlong)(iVar24 + 1) * 4) = uVar16;
          sVar21 = (size_t)*(int *)(lVar20 + 0x78 + lVar18);
          if (0 < (longlong)sVar21) {
            memcpy((void *)((longlong)(int)uVar16 * 4 + local_98),*(void **)(lVar20 + 0x70 + lVar18)
                   ,sVar21);
            uVar16 = uVar16 + (*(int *)(lVar20 + 0x78 + lVar18) + 3U >> 2);
          }
          *(uint *)(local_98 + (longlong)(iVar24 + 2) * 4) = uVar16;
          sVar21 = (size_t)*(int *)(lVar20 + 0x58 + lVar18);
          if (0 < (longlong)sVar21) {
            memcpy((void *)((longlong)(int)uVar16 * 4 + local_98),*(void **)(lVar20 + 0x50 + lVar18)
                   ,sVar21);
            uVar16 = uVar16 + (*(int *)(lVar20 + 0x58 + lVar18) + 3U >> 2);
          }
          *(uint *)(local_98 + (longlong)(iVar24 + 3) * 4) = uVar16;
          sVar21 = (size_t)*(int *)(lVar20 + 0x68 + lVar18);
          if (0 < (longlong)sVar21) {
            memcpy((void *)((longlong)(int)uVar16 * 4 + local_98),*(void **)(lVar20 + 0x60 + lVar18)
                   ,sVar21);
            uVar16 = uVar16 + (*(int *)(lVar20 + 0x68 + lVar18) + 3U >> 2);
          }
          lVar18 = lVar18 + 0xd8;
          iVar24 = iVar24 + 4;
        } while ((longlong)iVar3 * 0xd8 - lVar18 != 0);
      }
      lVar23 = lVar23 + 0x160;
    } while (lVar23 != lVar9);
  }
  lVar9 = local_98;
  uStack_b0 = *(undefined4 *)(param_1 + 0x10);
  uStack_ac = *(undefined4 *)(param_1 + 0x14);
  local_a8 = local_98;
  local_98 = 0;
  uVar4 = (undefined4)uStack_90;
  uVar5 = uStack_90._4_4_;
  local_a0 = uStack_90;
  uStack_90 = 0;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar24 = *(int *)(lVar23 + 0xc60);
  local_b8 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar24 != 2) {
      if (iVar24 != 1) goto LAB_143ac27f0;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143ac27f5;
      goto LAB_143ac2826;
    }
  }
  else {
LAB_143ac27f0:
    if (iVar24 != 0x10) {
LAB_143ac2826:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar24 = *(int *)(lVar23 + 0xc60), iVar24 == 2))
        goto LAB_143ac27f5;
        if (iVar24 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143ac27f5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143ac29dc;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar23 + 0x310);
          *(undefined8 *)(lVar23 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143ac29dc:
          puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar19 + 0x19);
          uVar14 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar16 = *puVar11;
            *puVar11 = *puVar11 + uVar14 + 1;
            UNLOCK();
            if ((uVar16 ^ uVar14) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar19 + 0x19);
            uVar14 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar14 = 1;
              goto LAB_143ac2a5c;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143ac2a5c:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar14;
        iVar24 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14ae26608;
        *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar19 + 0xac) = local_b8._4_4_;
        *(undefined4 *)(puVar19 + 0x16) = uStack_b0;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_ac;
        puVar19[0x17] = local_a8;
        local_a8 = 0;
        *(undefined4 *)(puVar19 + 0x18) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = local_a0._4_4_;
        local_a0 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar24 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar23 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar23 + 0x30);
        }
        puVar19[0xf] = uVar12;
        puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar24;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14ae26590;
        local_a8 = 0;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_b8._4_4_;
        *(undefined4 *)(local_78 + 2) = uStack_b0;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_ac;
        local_78[3] = lVar9;
        *(undefined4 *)(local_78 + 4) = uVar4;
        *(undefined4 *)((longlong)local_78 + 0x24) = uVar5;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_143acae24;
        }
        local_c8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraSimCacheGpuResource_BuildResource",&DAT_14cb43990);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar13 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar13 = local_68;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_143ac28f0;
    }
  }
LAB_143ac27f5:
  FUN_143acace0(&local_b8,&DAT_14ca85100);
LAB_143ac28f0:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac2ce0 FUN_143ac2ce0 body=69 status=ok
// SIG undefined FUN_143ac2ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac2ce0(void)

{
  _DAT_14cb43430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac2d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43438,1);
  return;
}



// FUNCTION 143ac2d25 FUN_143ac2d25 body=69 status=ok
// SIG undefined FUN_143ac2d25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac2d25(void)

{
  _DAT_14cb43440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac2d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43448,1);
  return;
}



// FUNCTION 143ac2d6a FUN_143ac2d6a body=120 status=ok
// SIG undefined FUN_143ac2d6a(void)

void FUN_143ac2d6a(void)

{
  longlong lVar1;
  
  lVar1 = 0x100;
  do {
    *(undefined ***)(&DAT_14cb43430 + lVar1) = FAutoConsoleObject::vftable;
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0xc0))
              (DAT_14c8407a8,*(undefined8 *)((longlong)&DAT_14cb43438 + lVar1),1);
    if (*(longlong *)(&DAT_14cb43420 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)&DAT_14cb43410 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143ac2df3 FUN_143ac2df3 body=542 status=ok
// SIG undefined FUN_143ac2df3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac2df3(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  wchar_t *_Str;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb43590 == '\0') {
    DAT_14cb43590 = '\x01';
    DAT_14cb435a0 = 1;
    uRam000000014cb435a4 = 1;
    _DAT_14cb435a8 = 1;
    uRam000000014cb435ac = 1;
    _DAT_14cb435b0 = 1;
    uRam000000014cb435b4 = 1;
    _DAT_14cb435b8 = 1;
    uRam000000014cb435bc = 1;
  }
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_1403de9f2(&DAT_14cb43550,&local_78,&DAT_149e06196,1);
  uVar4 = FUN_14786402d();
  if ((longlong)(int)uStack_70 == 0) {
    uVar7 = 0;
  }
  else {
    plVar11 = local_78 + (longlong)(int)uStack_70 * 2;
    uVar7 = 0;
    plVar8 = local_78;
    do {
      iVar1 = (int)plVar8[1];
      if ((longlong)iVar1 != 0) {
        lVar6 = (longlong)iVar1 * 2;
        lVar13 = 0;
        do {
          if (*(short *)(*plVar8 + lVar13 * 2) == 0x3a) {
            uVar2 = iVar1 - 1;
            if (iVar1 == 0) {
              uVar2 = 0;
            }
            uVar3 = (uint)lVar13;
            if ((uVar3 != 0xffffffff) && ((int)uVar3 < (int)uVar2)) {
              if ((int)uVar3 < 0) {
                local_88[0] = 0;
                local_88[1] = 0;
              }
              else {
                uVar10 = (longlong)(int)uVar2;
                if ((longlong)(ulonglong)(uVar3 & 0x7fffffff) < (longlong)(int)uVar2) {
                  uVar10 = (ulonglong)(uVar3 & 0x7fffffff);
                }
                if ((longlong)uVar10 < 1) {
                  uVar10 = uVar7;
                }
                FUN_14006620a(local_88,*plVar8,uVar10);
              }
              uVar2 = FUN_1401e9588(uVar4,local_88,0);
              if (uVar2 < 8) {
                puVar5 = &DAT_149dfb77a;
                uVar9 = 0;
                if ((int)plVar8[1] != 0) {
                  puVar5 = (undefined2 *)*plVar8;
                  uVar9 = (int)plVar8[1] - 1;
                }
                uVar12 = uVar3 + 1;
                if ((int)uVar9 <= (int)(uVar3 + 1)) {
                  uVar12 = uVar9;
                }
                uVar10 = (ulonglong)uVar12;
                if ((int)uVar12 < 1) {
                  uVar10 = uVar7;
                }
                FUN_14006620a(&local_98,puVar5 + uVar10);
                _Str = L"";
                if (local_90 != 0) {
                  _Str = local_98;
                }
                uVar3 = _wtoi(_Str);
                if (local_98 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (2 < (int)uVar3) {
                  uVar3 = 3;
                }
                uVar10 = (ulonglong)uVar3;
                if ((int)uVar3 < 1) {
                  uVar10 = uVar7;
                }
                (&DAT_14cb435a0)[uVar2] = (int)uVar10;
              }
              if (local_88[0] != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          lVar13 = lVar13 + 1;
          lVar6 = lVar6 + -2;
        } while (lVar6 != 0);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar11);
    uVar7 = uStack_70 & 0xffffffff;
  }
  FUN_1447a1747(local_78,uVar7);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ac3012 FUN_143ac3012 body=69 status=ok
// SIG undefined FUN_143ac3012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac3012(void)

{
  _DAT_14cb43560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac3054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43568,1);
  return;
}



// FUNCTION 143ac3057 FUN_143ac3057 body=69 status=ok
// SIG undefined FUN_143ac3057(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac3057(void)

{
  _DAT_14cb43570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac3099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43578,1);
  return;
}



// FUNCTION 143ac309c FUN_143ac309c body=69 status=ok
// SIG undefined FUN_143ac309c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac309c(void)

{
  _DAT_14cb43580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac30de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43588,1);
  return;
}



// FUNCTION 143ac30e1 FUN_143ac30e1 body=55 status=ok
// SIG undefined FUN_143ac30e1(void)

void FUN_143ac30e1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb435c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb435c8 = FUN_14171c317(FUN_14647a131,uVar1,L"ENiagaraSpriteAlignment");
  }
  return;
}



// FUNCTION 143ac3118 FUN_143ac3118 body=55 status=ok
// SIG undefined FUN_143ac3118(void)

void FUN_143ac3118(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb435e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb435e0 = FUN_14171c317(FUN_14647a160,uVar1,L"ENiagaraSpriteFacingMode");
  }
  return;
}



// FUNCTION 143ac314f FUN_143ac314f body=55 status=ok
// SIG undefined FUN_143ac314f(void)

void FUN_143ac314f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb435f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb435f8 = FUN_14171c317(FUN_14647a18f,uVar1,L"ENiagaraRendererPixelCoverageMode");
  }
  return;
}



// FUNCTION 143ac3197 FUN_143ac3197 body=69 status=ok
// SIG undefined FUN_143ac3197(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac3197(void)

{
  _DAT_14cb43730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac31d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43738,1);
  return;
}



// FUNCTION 143ac31dc FUN_143ac31dc body=69 status=ok
// SIG undefined FUN_143ac31dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac31dc(void)

{
  _DAT_14cb43740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac321e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43748,1);
  return;
}



// FUNCTION 143ac3221 FUN_143ac3221 body=69 status=ok
// SIG undefined FUN_143ac3221(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ac3221(void)

{
  _DAT_14cb43750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ac3263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb43758,1);
  return;
}


