// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14318a7aa FUN_14318a7aa body=72 status=ok
// SIG undefined FUN_14318a7aa(void)

undefined8
FUN_14318a7aa(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_143189b94(param_3,0);
  }
  FUN_14318a5ce(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 14318a824 FUN_14318a824 body=26 status=ok
// SIG undefined FUN_14318a824(void)

undefined8 FUN_14318a824(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143189b94(*param_2,0);
  }
  return 0;
}



// FUNCTION 14318a83e FUN_14318a83e body=70 status=ok
// SIG undefined FUN_14318a83e(void)

undefined8
FUN_14318a83e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_143189b94(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a355410;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14318a884 FUN_14318a884 body=179 status=ok
// SIG undefined FUN_14318a884(void)

void FUN_14318a884(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_143189f40(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143185bb0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014318a8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14318a946 FUN_14318a946 body=164 status=ok
// SIG undefined FUN_14318a946(void)

void FUN_14318a946(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = param_1[1];
  lVar9 = (longlong)*param_2 * (longlong)*(int *)*param_1;
  iVar8 = (int)lVar9;
  iVar5 = *(int *)*param_1 + iVar8;
  iVar7 = *(int *)(lVar2 + 0x28);
  if (iVar5 < *(int *)(lVar2 + 0x28)) {
    iVar7 = iVar5;
  }
  if (iVar8 < iVar7) {
    do {
      lVar6 = *(longlong *)(lVar2 + 0x20);
      plVar3 = *(longlong **)(lVar6 + lVar9 * 8);
      if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        if ((char)plVar3[1] == '\x01') {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (puVar4 != (undefined8 *)0x0 && *piVar1 == 0) {
LAB_14318a9a5:
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        else if (puVar4 != (undefined8 *)0x0) goto LAB_14318a9a5;
        FUN_1400020a8(plVar3);
        lVar6 = *(longlong *)(lVar2 + 0x20);
      }
      *(undefined8 *)(lVar6 + lVar9 * 8) = 0;
      lVar9 = lVar9 + 1;
      iVar7 = *(int *)*param_1 + iVar8;
      if (*(int *)(lVar2 + 0x28) <= *(int *)*param_1 + iVar8) {
        iVar7 = *(int *)(lVar2 + 0x28);
      }
    } while (lVar9 < iVar7);
  }
  return;
}



// FUNCTION 14318a9ea FUN_14318a9ea body=29 status=ok
// SIG undefined FUN_14318a9ea(void)

undefined8 FUN_14318a9ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318aa24 FUN_14318aa24 body=93 status=ok
// SIG undefined FUN_14318aa24(void)

void FUN_14318aa24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a355450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14318aa82 FUN_14318aa82 body=93 status=ok
// SIG undefined FUN_14318aa82(void)

void FUN_14318aa82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a355450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14318aae0 FUN_14318aae0 body=126 status=ok
// SIG undefined FUN_14318aae0(void)

void FUN_14318aae0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a355450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014318ab4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14318ab6a FUN_14318ab6a body=21 status=ok
// SIG undefined FUN_14318ab6a(void)

undefined8 FUN_14318ab6a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14318ab80 FUN_14318ab80 body=346 status=ok
// SIG undefined FUN_14318ab80(void)

void FUN_14318ab80(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14318ac12;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14318ac12:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14318acda FUN_14318acda body=173 status=ok
// SIG undefined FUN_14318acda(void)

void FUN_14318acda(longlong *param_1,undefined8 *param_2,void *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_348 [32];
  undefined1 local_328 [768];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  plVar1 = (longlong *)*param_2;
  uVar2 = *(undefined8 *)(*param_1 + 0x1e8);
  memcpy(local_328,param_3,0x300);
  lVar3 = *plVar1;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  plVar1 = *(longlong **)(lVar3 + 0x20);
  local_28 = uVar2;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14073c5d9((undefined8 *)(lVar3 + 0x20),uVar4,local_328);
  *(uint *)(lVar3 + 0x38) = (uint)(*(longlong *)(lVar3 + 0x20) == 0) * 2;
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318ada6 FUN_14318ada6 body=12 status=ok
// SIG undefined FUN_14318ada6(void)

void FUN_14318ada6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318adaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14318adb2 FUN_14318adb2 body=29 status=ok
// SIG undefined FUN_14318adb2(void)

undefined8 FUN_14318adb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318add0 FUN_14318add0 body=161 status=ok
// SIG undefined FUN_14318add0(void)

void FUN_14318add0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(*param_1 + 0x1e8);
  puVar6 = local_88;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  plVar4 = *(longlong **)(lVar1 + 0x20);
  local_28 = uVar2;
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1405e97d3((undefined8 *)(lVar1 + 0x20),uVar3,local_88);
  *(uint *)(lVar1 + 0x38) = (uint)(*(longlong *)(lVar1 + 0x20) == 0) * 2;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318ae90 FUN_14318ae90 body=12 status=ok
// SIG undefined FUN_14318ae90(void)

void FUN_14318ae90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318ae99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14318ae9c FUN_14318ae9c body=29 status=ok
// SIG undefined FUN_14318ae9c(void)

undefined8 FUN_14318ae9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318aeb9 FUN_14318aeb9 body=1450 status=ok
// SIG undefined FUN_14318aeb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318aeb9(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14ca77424);
  if (cVar1 == '\0') {
    _DAT_14ca77424 = 0;
    uRam000000014ca7742c = 0;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_50 = CONCAT44(local_50._4_4_,0x42700000);
  local_58 = 4;
  FUN_140a6b41e(&DAT_14ca77448,L"r.gbx.SuspendTerminateGPUCrash.TimeOut",&local_50,
                L"Maximum seconds to wait on aftermath completion (-1 to disable)");
  atexit(FUN_14317d20a);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77460);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77460,4000);
  atexit((_func_5014 *)&LAB_14317d3f0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77488);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77488,4000);
  DAT_14ca774d0 = 0;
  DAT_14ca774d8 = 0;
  DAT_14ca774b0 = 0;
  _DAT_14ca774b8 = 0;
  _DAT_14ca774dc = 0xffffffff00000080;
  _DAT_14ca774e4 = 0;
  DAT_14ca774f0 = 0;
  _DAT_14ca774f8 = 0;
  atexit((_func_5014 *)&LAB_14317dee8);
  local_58 = 4;
  FUN_141471170(&DAT_14ca77500,L"r.D3D12.NumViewportBuffers",&DAT_14c760be8,
                L"The number of viewport buffers to allocate for the RHI viewport.");
  atexit(FUN_14317e060);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca778c0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca778c0,4000);
  atexit((_func_5014 *)&LAB_14317e0a5);
  local_58 = 0x20;
  FUN_14153156c(&DAT_14ca77540,L"wg.ShaderBundle.SkipDispatch",&DAT_14ca77550,
                L"Whether to dispatch the built shader bundle pipeline (for debugging)");
  atexit(FUN_14317ec57);
  local_58 = 4;
  FUN_14153156c(&DAT_14ca77558,L"r.Gbx.D3D12.EnableRHIGarbageThread",&DAT_14ca77551,
                L"(Windows D3D12 only) Moves the deletion of lengthy RHI deletions from the RHI thread to a garbage collection thread.\n"
               );
  atexit(FUN_14318008c);
  local_58 = 4;
  FUN_14153156c(&DAT_14ca77570,L"r.Gbx.D3D12.EnablePSOGarbageThread",&DAT_14ca77568,
                L"(Windows D3D12 only) Moves the deletion of GraphicsPSO\'s from the RHI thread to a garbage collection thread.\n"
               );
  atexit(FUN_1431800d1);
  local_58 = 4;
  FUN_141471170(&DAT_14ca77580,L"r.Gbx.D3D12.RHIPSOGarbageThreadPriority",&DAT_14c760bec,
                L"Thread Priority for RHI Garbage Thread as per EThreadPriority enum: 0 (Normal), 2 (BelowNormal/Default) or 4 (Lowest)"
               );
  atexit(FUN_143180116);
  local_58 = 4;
  FUN_141471170(&DAT_14ca77590,L"r.Gbx.D3D12.RHIPSOGarbageShutdownThreads",&DAT_14c760bf0,
                L"Sets the number of threads used for massively parallized RHI and PSO deletion used to more quickly shutdown the app."
               );
  atexit(FUN_14318015b);
  local_50 = 0x800000014a351230;
  local_3c = 8;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14631a3f2(&local_50);
  local_58 = 0x24;
  FUN_141471170(&DAT_14ca775b8,L"r.D3D12.DXR.MinimumWindowsBuildVersion",&DAT_14ca775b0,
                L"Sets the minimum Windows build version required to enable ray tracing.");
  atexit(FUN_1431806d6);
  local_58 = 0x24;
  FUN_141471170(&DAT_14ca775d0,L"r.D3D12.DXR.MinimumDriverVersionNVIDIA",&DAT_14ca775c8,
                L"Sets the minimum driver version required to enable ray tracing on NVIDIA GPUs.");
  atexit(FUN_14318071b);
  local_58 = 0x24;
  FUN_141471170(&DAT_14ca775e8,L"r.D3D12.DXR.MinimumDriverVersionAMD",&DAT_14ca775e0,
                L"Sets the minimum driver version required to enable ray tracing on AMD GPUs.");
  atexit(FUN_143180760);
  local_58 = 4;
  FUN_141471170(&DAT_14ca77600,L"r.D3D12.DevDisableD3DRuntimeBackgroundThreads",&DAT_14ca775f8,
                L"If > 0, disables the background threads created by the D3D runtime for background shader optimization. Only available when Windows developer mode is enabled. (default = 0)."
               );
  atexit(FUN_1431807a5);
  local_58 = 0x24;
  FUN_14153156c(&DAT_14ca77610,L"r.Gbx.GbxUseSkyCorruptionWorkaroundAMD",&DAT_14c760bf4,
                L"Control whether we want to use the workaround to fix the Sky corruption issue we saw on specific AMD graphic cards"
               );
  atexit(FUN_1431807ea);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca77620,L"r.Gbx.ClearPSODriverCacheOnVersionChange",&local_50,
                L"Whether to invalidate the pso cache when installing a newer version of the game or not \n1: Clear PSO Driver cache for all GPU vendors \n2: Clear PSO Driver cache only for Nvidia GPUs"
               );
  atexit(FUN_14318082f);
  FUN_140056680(&local_50,&DAT_149dfb77a);
  local_58 = 4;
  FUN_140f510cc(&DAT_14ca77638,L"r.Gbx.NvidiaDriverPSOCacheExeHashMap",&local_50,
                L"Comma separated exe name to Nvidia driver PSO hash");
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143180874);
  local_50 = local_50 & 0xffffffff00000000;
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca77650,L"r.Gbx.NvidiaMaxDriverMajorVersionForCacheClear",&local_50,
                L"The max driver date at which we will stop clearing PSOs automatically when the game is updated."
               );
  atexit(FUN_1431808b9);
  local_50._0_4_ = 0x41f00000;
  local_58 = 4;
  FUN_140a6b41e(&DAT_14ca77668,L"r.Gbx.PSOCacheBootWait",&local_50,
                L"How many seconds to wait for the driver PSO cache files to be unlocked by other processes before continuing (0 wait when not locked)."
               );
  atexit(FUN_1431808fe);
  local_50._0_4_ = 0;
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca77698,L"D3D12.PSO.DiskCache",&local_50,
                L"Enables a disk cache for Pipeline State Objects (PSOs).\nPSO descs are cached to disk so subsequent runs can create PSOs at load-time instead of at run-time.\nThis cache contains data that is independent of hardware, driver, or machine that it was created on. It can be distributed with shipping content.\n0 to disable the pipeline state disk cache\n1 to enable the pipeline state disk cache (default)\n"
               );
  atexit(FUN_143184ce9);
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  local_58 = 4;
  FUN_14078dbce(&DAT_14ca776b0,L"D3D12.PSO.DriverOptimizedDiskCache",&local_50,
                L"Enables a disk cache for driver-optimized Pipeline State Objects (PSOs).\nPSO descs are cached to disk so subsequent runs can create PSOs at load-time instead of at run-time.\nThis cache contains data specific to the hardware, driver, and machine that it was created on.\n0 to disable the driver-optimized pipeline state disk cache\n1 to enable the driver-optimized pipeline state disk cache\n"
               );
  atexit(FUN_143184d2e);
  local_58 = 0x24;
  FUN_141471170(&DAT_14ca776c8,L"r.D3D12.UseAllowTearing",&DAT_14c760bf8,
                L"Enable new dxgi flip mode with d3d12");
  atexit(FUN_1431856ce);
  FUN_140056680(&local_50,&DAT_149dfb77a);
  local_58 = 0;
  FUN_140f510cc(&DAT_14ca776d8,L"r.D3D12.GbxActualSwapChainProvider",&local_50,
                L"Set by code, do not modify through console or ini");
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143185713);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318b464 FUN_14318b464 body=44 status=ok
// SIG undefined FUN_14318b464(void)

void FUN_14318b464(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca77900;
  if (DAT_14ca77900 == 0) {
    return;
  }
  FUN_1456f2d1c(DAT_14ca77900);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14318b4b8 FUN_14318b4b8 body=178 status=ok
// SIG undefined FUN_14318b4b8(void)

void FUN_14318b4b8(void)

{
  if (((DAT_14ca77900 == (undefined8 *)0x0) && (DAT_14c872bf0 == '\0')) &&
     ((DAT_14ca9a35c & 1) != 0)) {
    DAT_14ca77900 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *DAT_14ca77900 = 0;
    DAT_14ca77900[1] = 0;
    *(undefined4 *)(DAT_14ca77900 + 2) = 2;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x14) = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x1c) = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x24) = 0x200000000;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x2c) = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x34) = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x3c) = 0xffffffff00000000;
    DAT_14ca77900[0x11] = 0;
    *(undefined2 *)(DAT_14ca77900 + 0x12) = 0;
    DAT_14ca77900[0x13] = 0;
    *(undefined4 *)(DAT_14ca77900 + 0x14) = 0;
    *(undefined1 *)((longlong)DAT_14ca77900 + 0xa4) = 0;
    DAT_14ca77900[9] = 0;
    DAT_14ca77900[10] = 0;
    DAT_14ca77900[0xb] = 0;
    DAT_14ca77900[0xc] = 0;
    DAT_14ca77900[0xd] = 0;
    DAT_14ca77900[0xe] = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x71) = 0;
    *(undefined8 *)((longlong)DAT_14ca77900 + 0x79) = 0;
  }
  return;
}



// FUNCTION 14318b56a FUN_14318b56a body=1217 status=ok
// SIG undefined FUN_14318b56a(void)

void FUN_14318b56a(longlong param_1,LARGE_INTEGER param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined1 local_231;
  float local_230;
  float local_22c;
  float local_228;
  float fStack_224;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong *local_200;
  LARGE_INTEGER local_1f8 [53];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (((*(char *)(param_1 + 0x80) != '\0') || (DAT_14c872bf0 != '\0')) || ((DAT_14ca9a35c & 1) == 0)
     ) goto LAB_14318b66e;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  lVar4 = DAT_14cb0d2b0;
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 == '\x01') {
      bVar3 = DAT_14c8442b8 & 1;
      goto joined_r0x00014318b613;
    }
  }
  else {
joined_r0x00014318b613:
    if (bVar3 == 0) {
      if (DAT_14cb0d2b0 == 0) {
LAB_14318b70c:
        thunk_FUN_16260e056(&local_208);
      }
      else {
        lVar7 = FUN_1413f862e();
        if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
           ((*(longlong *)(lVar4 + 0x1360) == 0 ||
            ((plVar8 = *(longlong **)(lVar4 + 0x1368), plVar8 == (longlong *)0x0 ||
             ((int)plVar8[1] < 1)))))) goto LAB_14318b70c;
        iVar6 = (int)plVar8[1];
        local_208 = 0;
        do {
          if (iVar6 == 0) {
            local_200 = (longlong *)0x0;
            goto LAB_14318b716;
          }
          LOCK();
          iVar5 = (int)plVar8[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        local_208 = *(undefined8 *)(lVar4 + 0x1360);
        local_200 = plVar8;
      }
LAB_14318b716:
      FUN_140761ace(local_1f8);
      FUN_140c2d2b0(local_208,&local_230);
      local_48 = (double)(fStack_224 - local_22c);
      local_50 = (double)(local_228 - local_230);
      local_248 = &local_231;
      FUN_140763374(&local_230,"SVirtualWindow",
                    ".\\Runtime/PreLoadScreen/Private/PreLoadScreenManager.cpp",100);
      FUN_140761c10(&local_230,&local_218,local_1f8);
      plVar8 = local_210;
      if (local_210 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x70) = local_218;
        plVar9 = *(longlong **)(param_1 + 0x78);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x78) = 0;
LAB_14318b803:
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
joined_r0x00014318b7f6:
            if (iVar6 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_210 + 1) = (int)local_210[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x70) = local_218;
        plVar9 = *(longlong **)(param_1 + 0x78);
        if (local_210 == plVar9) {
          LOCK();
          plVar9 = local_210 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_210)(local_210);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar9 = plVar8;
            goto joined_r0x00014318b7f6;
          }
        }
        else {
          *(longlong **)(param_1 + 0x78) = local_210;
          if (plVar9 != (longlong *)0x0) goto LAB_14318b803;
        }
      }
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_210 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar1 = (int *)((longlong)local_210 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_210 + 0x10))(local_210);
          }
        }
      }
      plVar8 = (longlong *)CONCAT44(fStack_224,local_228);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      FUN_140a4ff8c(local_1f8);
      plVar9 = local_200;
      *(undefined8 *)(param_1 + 0x60) = local_208;
      plVar8 = *(longlong **)(param_1 + 0x68);
      if (plVar8 != local_200) {
        if (local_200 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_200 + 0xc) = *(int *)((longlong)local_200 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(param_1 + 0x68);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        *(longlong **)(param_1 + 0x68) = plVar9;
      }
      local_1f8[0] = param_2;
      plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
      FUN_145ec151c(plVar8,&local_208,param_1 + 0x70,local_1f8);
      if (plVar8 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0x10;
        plVar9 = *(longlong **)(param_1 + 0x58);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x58) = 0;
LAB_14318b91f:
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          if (plVar8 != (longlong *)0x0) goto LAB_14318b960;
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x50) = plVar8 + 2;
        plVar9 = *(longlong **)(param_1 + 0x58);
        if (plVar8 == plVar9) {
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0x58) = plVar8;
          if (plVar9 != (longlong *)0x0) goto LAB_14318b91f;
        }
LAB_14318b960:
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      plVar8 = local_200;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_200 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
  }
  QueryPerformanceCounter(local_1f8);
  *(double *)(param_1 + 0x98) = (double)local_1f8[0].QuadPart * DAT_14c83f420 + 16777216.0;
  QueryPerformanceCounter(local_1f8);
  *(double *)(param_1 + 0x48) = (double)local_1f8[0].QuadPart * DAT_14c83f420 + 16777216.0;
LAB_14318b66e:
  if ((local_40 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14318ba2c FUN_14318ba2c body=1385 status=ok
// SIG undefined FUN_14318ba2c(void)

void FUN_14318ba2c(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c872bf0 != '\0') || ((DAT_14ca9a35c & 1) == 0)) goto LAB_14318bd15;
  iVar8 = *(int *)(param_1 + 0x40);
  if ((-1 < (longlong)iVar8) &&
     ((iVar8 < *(int *)(param_1 + 0x38) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10) != 0))))
  goto LAB_14318bd15;
  *(uint *)(param_1 + 0x40) = param_2;
  if (-1 < (int)param_2) {
    iVar8 = *(int *)(param_1 + 0x38);
    if (((int)param_2 < iVar8) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 0x10) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
      lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x10;
      DAT_14ca77930 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar9);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8 + lVar9);
      plVar10 = DAT_14ca77938;
      if (DAT_14ca77938 != plVar4) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
        }
        plVar3 = DAT_14ca77938;
        plVar10 = plVar4;
        if (DAT_14ca77938 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)DAT_14ca77938 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      DAT_14ca77938 = plVar10;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
      param_2 = *(uint *)(param_1 + 0x40);
      if ((int)param_2 < 0) goto LAB_14318bcd2;
      iVar8 = *(int *)(param_1 + 0x38);
    }
    if (((int)param_2 < iVar8) &&
       (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 0x10),
       plVar4 != (longlong *)0x0)) {
      cVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
      if (cVar7 == '\x01') {
        iVar8 = *(int *)(param_1 + 0x40);
        if (((((longlong)iVar8 < 0) || (*(int *)(param_1 + 0x38) <= iVar8)) ||
            (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10),
            plVar4 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar4 + 0x50))(), cVar7 != '\x01')) goto LAB_14318bd15;
        iVar8 = *(int *)(param_1 + 0x40);
        if ((((longlong)iVar8 < 0) || (*(int *)(param_1 + 0x38) <= iVar8)) ||
           (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10),
           plVar4 == (longlong *)0x0)) goto LAB_14318bd15;
        local_58 = *(undefined8 *)(param_1 + 0x60);
        plStack_50 = *(longlong **)(param_1 + 0x68);
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_50 + 0xc) = *(int *)((longlong)plStack_50 + 0xc) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
        plVar10 = *(longlong **)(param_1 + 0x68);
        if (plVar10 != (longlong *)0x0) {
          iVar8 = (int)plVar10[1];
          do {
            if (iVar8 == 0) goto LAB_14318be7a;
            LOCK();
            iVar6 = (int)plVar10[1];
            bVar12 = iVar8 == iVar6;
            if (bVar12) {
              *(int *)(plVar10 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar12);
          lVar9 = *(longlong *)(param_1 + 0x60);
          if (lVar9 != 0) {
            (**(code **)(*plVar4 + 0x68))(plVar4,&local_68);
            plVar3 = plStack_60;
            lVar5 = local_68;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_60 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (lVar5 != 0) {
              (**(code **)(*plVar4 + 0x68))(plVar4,&local_78);
              local_68 = local_78;
              plStack_60 = plStack_70;
              local_78 = 0;
              plStack_70 = (longlong *)0x0;
              FUN_140763be6(lVar9);
              plVar3 = plStack_70;
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_70 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
            }
          }
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
LAB_14318be7a:
        while (cVar7 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar7 == '\0') {
          FUN_14738d9e2(param_1);
        }
      }
      else {
        cVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
        if (cVar7 == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
        }
        cVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
        if (cVar7 != '\0') {
          FUN_140033559(".\\Runtime/PreLoadScreen/Private/PreLoadScreenManager.cpp",0xc1,
                        L"Attempting to play an Active PreLoadScreen type that hasn\'t been implemented inside of PreLoadScreenmanager!"
                       );
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
        }
        iVar8 = *(int *)(param_1 + 0x40);
        if (((((longlong)iVar8 < 0) || (*(int *)(param_1 + 0x38) <= iVar8)) ||
            (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10),
            plVar4 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar4 + 0x50))(), cVar7 != '\0'))
        goto LAB_14318bd15;
        iVar8 = *(int *)(param_1 + 0x40);
        if (((((longlong)iVar8 < 0) || (*(int *)(param_1 + 0x38) <= iVar8)) ||
            ((plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x10),
             plVar4 == (longlong *)0x0 ||
             ((*(longlong *)(param_1 + 0x60) == 0 ||
              (plVar10 = *(longlong **)(param_1 + 0x68), plVar10 == (longlong *)0x0)))))) ||
           ((int)plVar10[1] < 1)) goto LAB_14318bd15;
        iVar8 = (int)plVar10[1];
        do {
          if (iVar8 == 0) {
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            (**(code **)(*plVar4 + 0x30))(plVar4);
            goto LAB_14318bea8;
          }
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar12 = iVar8 == iVar6;
          if (bVar12) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar12);
        local_58 = *(undefined8 *)(param_1 + 0x60);
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plStack_50 = plVar10;
        (**(code **)(*plVar4 + 0x30))(plVar4);
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
LAB_14318bea8:
        (**(code **)(*plVar4 + 0x68))(plVar4,&local_68);
        plVar10 = plStack_60;
        lVar9 = local_68;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (lVar9 != 0) {
          plVar10 = *(longlong **)(param_1 + 0x68);
          bVar12 = true;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            uVar11 = 0;
          }
          else {
            iVar8 = (int)plVar10[1];
            uVar11 = 0;
            do {
              if (iVar8 == 0) {
                plVar10 = (longlong *)0x0;
                goto LAB_14318bf1c;
              }
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar13 = iVar8 == iVar6;
              if (bVar13) {
                *(int *)(plVar10 + 1) = iVar8 + 1;
                iVar6 = iVar8;
              }
              iVar8 = iVar6;
              UNLOCK();
            } while (!bVar13);
            uVar11 = *(undefined8 *)(param_1 + 0x60);
            bVar12 = false;
          }
LAB_14318bf1c:
          (**(code **)(*plVar4 + 0x68))(plVar4,&local_78);
          local_68 = local_78;
          plStack_60 = plStack_70;
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
          FUN_140763be6(uVar11);
          plVar3 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_70 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (!bVar12) {
            LOCK();
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
        while (cVar7 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar7 == '\0') {
          FUN_14738d9e2(param_1);
        }
      }
      FUN_14738da5e(param_1);
      goto LAB_14318bd15;
    }
  }
LAB_14318bcd2:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  plVar4 = DAT_14ca77938;
  DAT_14ca77930 = 0;
  DAT_14ca77938 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
LAB_14318bd15:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14318bfae FUN_14318bfae body=2726 status=ok
// SIG undefined FUN_14318bfae(void)

void FUN_14318bfae(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  uint *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_c8 [32];
  code **local_a8;
  code *local_98;
  undefined4 local_90;
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  float local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((DAT_14c760bfc & 1) == 0) || (DAT_14c98e618 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
  }
  plVar21 = *(longlong **)
             (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x40) * 0x10);
  if (plVar21 == (longlong *)0x0) goto LAB_14318c6ad;
  uVar10 = (**(code **)(*plVar21 + 0x20))();
  cVar9 = (char)uVar10;
  if (*(char *)(param_1 + 0x90) != cVar9) {
    *(char *)(param_1 + 0x90) = cVar9;
    FUN_140898514(param_1 + 0x18,uVar10);
  }
  lVar6 = DAT_14c98e618;
  if (cVar9 == '\0') goto LAB_14318c6ad;
  fVar25 = (float)(*(double *)(DAT_14c98e618 + 0x3e0) - *(double *)(DAT_14c98e618 + 1000));
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar11 = *piVar2;
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_14318c079;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_14318c07e;
      goto LAB_14318c0fd;
    }
LAB_14318c07e:
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
    plVar21 = DAT_14ca77938;
    if (DAT_14ca77938 == (longlong *)0x0) {
LAB_14318c525:
      plVar21 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)DAT_14ca77938[1];
      do {
        if (iVar11 == 0) goto LAB_14318c525;
        LOCK();
        iVar8 = (int)plVar21[1];
        bVar24 = iVar11 == iVar8;
        if (bVar24) {
          *(int *)(plVar21 + 1) = iVar11 + 1;
          iVar8 = iVar11;
        }
        iVar11 = iVar8;
        UNLOCK();
      } while (!bVar24);
    }
LAB_14318c527:
    plVar18 = (longlong *)0x0;
    if (plVar21 != (longlong *)0x0) {
      plVar18 = DAT_14ca77930;
    }
    if (((plVar18 != (longlong *)0x0 & DAT_14c760bfc) == 1) && (*(char *)(param_1 + 0x91) == '\0'))
    {
      DAT_14c7590b0 = DAT_14c7590b0 + 1;
      *(undefined1 *)(param_1 + 0x91) = 1;
      (**(code **)(*plVar18 + 0x28))(plVar18,fVar25);
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar21 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  }
  else {
LAB_14318c079:
    if (iVar11 == 0x10) goto LAB_14318c07e;
LAB_14318c0fd:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (*piVar2 != 2)) {
        if (*piVar2 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_14318c4f9;
        }
        goto LAB_14318c128;
      }
LAB_14318c4f9:
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
      plVar21 = DAT_14ca77938;
      if (DAT_14ca77938 == (longlong *)0x0) goto LAB_14318c525;
      iVar11 = (int)DAT_14ca77938[1];
      do {
        if (iVar11 == 0) goto LAB_14318c525;
        LOCK();
        iVar8 = (int)plVar21[1];
        bVar24 = iVar11 == iVar8;
        if (bVar24) {
          *(int *)(plVar21 + 1) = iVar11 + 1;
          iVar8 = iVar11;
        }
        iVar11 = iVar8;
        UNLOCK();
      } while (!bVar24);
      goto LAB_14318c527;
    }
LAB_14318c128:
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar3;
      if (puVar16 != (uint *)0x0) goto LAB_14318c240;
      do {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_14318d3f9);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar15 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar15 = 0xffffffff;
        *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar3 = puVar15;
        FUN_140217a48(puVar3);
        puVar16 = (uint *)*puVar3;
LAB_14318c240:
        uVar22 = *(longlong *)(puVar16 + 0x10) + 7;
        uVar17 = puVar16[0x12];
        while( true ) {
          puVar23 = (undefined8 *)(uVar22 & 0xfffffffffffffff8);
          if (puVar23 + 0x17 <= puVar16 + 0x4000) {
            *(undefined8 **)(puVar16 + 0x10) = puVar23 + 0x17;
            puVar16[0x12] = uVar17 + 1;
            iVar11 = 0;
            FUN_1447247dc(puVar23,0);
            *puVar23 = &PTR_FUN_14a3562e0;
            puVar23[0x15] = param_1;
            *(float *)(puVar23 + 0x16) = fVar25;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar17 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
                uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
                iVar11 = 0;
              }
              else {
                uVar22 = 2;
              }
            }
            else {
              iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar22 = 5;
            }
            if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
            }
            puVar23[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar23[9] = puVar23;
            puVar23[10] = puVar23;
            lVar5 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar5 == 0) {
              uVar7 = 1;
              if ((char)uVar22 != '\x06') {
                uVar7 = uVar22;
              }
              uVar22 = uVar7;
              uVar14 = 0;
            }
            else {
              if ((char)uVar22 == '\x06') {
                uVar22 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
              }
              uVar14 = *(undefined8 *)(lVar5 + 0x30);
            }
            puVar23[0xf] = uVar14;
            puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar23 + 0x1c) = iVar11;
            if (puVar23 == (undefined8 *)0x0) {
              local_98 = (code *)CONCAT71(local_98._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
              UNLOCK();
              local_98 = (code *)CONCAT71(local_98._1_7_,1);
              FUN_1447439e4(puVar23);
              LOCK();
              piVar1 = (int *)(puVar23 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar23)(puVar23,1);
              }
            }
            goto LAB_14318c594;
          }
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar4 = *puVar16;
          *puVar16 = *puVar16 + uVar17 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar17) != 0xffffffff) break;
          puVar16 = (uint *)*puVar3;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          uVar22 = (longlong)puVar16 + 0x5f;
          uVar17 = 0;
        }
      } while( true );
    }
    local_a8 = &local_98;
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_14a356290;
    local_98 = FUN_14318d314;
    local_70 = param_1;
    local_68 = fVar25;
    FUN_14005a792(&DAT_14ca9a440,L"BeginPreLoadScreenFrame",&DAT_14ca77998);
    if (local_98 != (code *)0x0) {
      pppuVar19 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar19 = &local_78;
      }
      (*(code *)(*pppuVar19)[2])();
    }
  }
LAB_14318c594:
  FUN_1405d28f8(lVar6,7);
  (**(code **)(**(longlong **)(lVar6 + 0x20) + 200))();
  iVar11 = *piVar2;
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_14318c5b7;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_14318c5bc;
      goto LAB_14318c61c;
    }
  }
  else {
LAB_14318c5b7:
    if (iVar11 != 0x10) {
LAB_14318c61c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar2 == 2)) goto LAB_14318c5bc;
        if (*piVar2 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_14318c5bc;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar3;
        if (puVar16 != (uint *)0x0) goto LAB_14318c77d;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_14318d3f9);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14318c77d:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar23 + 0x16);
          uVar17 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar4 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar23 + 0x16);
            uVar17 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar17 = 1;
              goto LAB_14318c7fd;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_14318c7fd:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar17;
        iVar11 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14a356348;
        puVar23[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar11 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar7 = 1;
          if ((char)uVar22 != '\x06') {
            uVar7 = uVar22;
          }
          uVar22 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar23[0xf] = uVar14;
        puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar11;
        if (puVar23 == (undefined8 *)0x0) {
          local_98 = (code *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_98 = (code *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar2 = (int *)(puVar23 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_a8 = &local_98;
        local_88 = (undefined ***)0x0;
        local_78 = &PTR_LAB_14a3562f0;
        local_98 = FUN_14318d626;
        local_70 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FinishPreLoadScreenFrame",&DAT_14ca7799c);
        if (local_98 != (code *)0x0) {
          pppuVar19 = local_88;
          if (local_88 == (undefined ***)0x0) {
            pppuVar19 = &local_78;
          }
          (*(code *)(*pppuVar19)[2])();
        }
      }
      goto LAB_14318c6ad;
    }
  }
LAB_14318c5bc:
  *(undefined1 *)(param_1 + 0x91) = 0;
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_98,7);
LAB_14318c6ad:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318ca76 FUN_14318ca76 body=172 status=ok
// SIG undefined FUN_14318ca76(void)

void FUN_14318ca76(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = DAT_14cb0d2b0;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x68) + 8) < 1) {
    return;
  }
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = FUN_1413f862e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_14318cacb;
  }
  lVar5 = 0;
LAB_14318cacb:
  lVar4 = *(longlong *)(param_1 + 0x60);
  if ((((lVar4 != 0) && (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 != 0)) && (lVar5 != 0)) &&
     (0 < *(int *)(lVar2 + 8))) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(lVar5 + 0x1368);
    *(longlong *)(lVar5 + 0x1360) = lVar4;
    *(longlong *)(lVar5 + 0x1368) = lVar2;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014318cb16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14318cb44 FUN_14318cb44 body=1871 status=ok
// SIG undefined FUN_14318cb44(void)

void FUN_14318cb44(byte *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  undefined7 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auStack_158 [32];
  LARGE_INTEGER *local_138;
  undefined8 *local_130;
  int *local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 *local_110;
  longlong *local_108;
  longlong local_100;
  LARGE_INTEGER local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  byte *local_d0;
  undefined ***local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  QueryPerformanceCounter(local_f8);
  LVar5 = local_f8[0];
  dVar4 = DAT_14c83f420;
  pppuVar9 = (undefined ***)FUN_1405d8a54(0);
  if (((*param_1 & 1) != 0) && ((DAT_14c872bd8 & 1) == 0)) {
    dVar4 = (double)LVar5.QuadPart * dVar4 + 16777216.0;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_130 = (undefined8 *)(lVar15 + 0x308);
    local_110 = (undefined8 *)(lVar15 + 0x310);
    local_100 = 0x527800b400;
    local_128 = (int *)(lVar15 + 0xc60);
    local_108 = (longlong *)(lVar15 + 0x2b8);
    do {
      QueryPerformanceCounter(local_f8);
      dVar24 = (double)local_f8[0].QuadPart * DAT_14c83f420 + 16777216.0;
      dVar22 = (dVar4 - dVar24) + 0.016666666666666666;
      dVar4 = dVar24;
      if (0.0 < dVar22) {
        auVar23._0_8_ = dVar22 * 10000000.0 + 0.5;
        auVar23._8_8_ = 0;
        auVar23 = roundpd(auVar23,auVar23,1);
        lVar15 = (longlong)auVar23._0_8_ / 10000;
        if (0xfffffffe < lVar15) {
          lVar15 = 0xffffffff;
        }
        if (lVar15 < 1) {
          lVar15 = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                  (*(longlong **)(param_1 + 0x18),lVar15,0);
        QueryPerformanceCounter(local_f8);
        dVar4 = (double)local_f8[0].QuadPart * DAT_14c83f420 + 16777216.0;
      }
      if (((((DAT_14ca83900 != (longlong *)0x0 & ~DAT_14c872bd8 & *param_1) == 1) &&
           (cVar6 = (**(code **)(*DAT_14ca83900 + 0x390))(), cVar6 == '\0')) &&
          ((*param_1 & 1) != 0)) && (((DAT_14c872bd8 & 1) == 0 && ((DAT_14c760bfc & 1) != 0)))) {
        FUN_147391a86(*(undefined8 *)(param_1 + 0x20));
        iVar3 = *local_128;
        if (DAT_14c86a9fc == 0) {
          if (iVar3 != 2) {
            if (iVar3 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              bVar21 = DVar7 == DVar8;
            }
            else {
              bVar21 = iVar3 == 0x10;
            }
            if (!bVar21) goto LAB_14318ce0d;
          }
LAB_14318cdb7:
          if ((((*param_1 & 1) != 0) && ((DAT_14c872bd8 & 1) == 0)) && (DAT_14ca77900 != 0)) {
            FUN_14738dc80();
          }
          ppuVar10 = *pppuVar9;
          pppuVar14 = pppuVar9;
LAB_14318ceb0:
          (*(code *)ppuVar10[2])(pppuVar14);
        }
        else {
          if (iVar3 == 0x10) goto LAB_14318cdb7;
LAB_14318ce0d:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*local_128 == 2)) goto LAB_14318cdb7;
            if (*local_128 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              if (DVar7 == DVar8) goto LAB_14318cdb7;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar12 = (uint *)*local_130;
            if (puVar12 != (uint *)0x0) goto LAB_14318cf48;
            do {
              puVar20 = local_110;
              uVar18 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar18 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar18 | 1;
                __tlregdtor(&LAB_14318d3f9);
              }
              puVar11 = (undefined4 *)*puVar20;
              *puVar20 = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar11 = 0xffffffff;
              *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *local_130 = puVar11;
              FUN_140217a48();
              puVar12 = (uint *)*local_130;
LAB_14318cf48:
              uVar19 = *(longlong *)(puVar12 + 0x10) + 7;
              uVar18 = puVar12[0x12];
              while( true ) {
                puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
                if (puVar20 + 0x17 <= puVar12 + 0x4000) {
                  *(undefined8 **)(puVar12 + 0x10) = puVar20 + 0x17;
                  puVar12[0x12] = uVar18 + 1;
                  uVar13 = 0;
                  FUN_1447247dc(puVar20,0);
                  *puVar20 = &PTR_FUN_14a356520;
                  puVar20[0x15] = param_1;
                  puVar20[0x16] = pppuVar9;
                  uVar16 = (undefined7)((ulonglong)uVar13 >> 8);
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar18 = DAT_14c7585c8 >> 10 & 3;
                    uVar17 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
                      uVar19 = CONCAT71(uVar16,(&DAT_149e38edc)[uVar18]);
                    }
                    else {
                      uVar19 = CONCAT71(uVar16,2);
                    }
                  }
                  else {
                    uVar17 = (ulonglong)
                             ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                    uVar19 = CONCAT71(uVar16,5);
                  }
                  if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
                    local_120 = uVar19;
                    local_118 = uVar17;
                    (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
                    uVar19 = local_120;
                    uVar17 = local_118;
                  }
                  puVar20[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar20[9] = puVar20;
                  puVar20[10] = puVar20;
                  lVar15 = *local_108;
                  cVar6 = (char)uVar19;
                  if (lVar15 == 0) {
                    uVar19 = uVar19 & 0xff;
                    if (cVar6 == '\x06') {
                      uVar19 = 1;
                    }
                    uVar13 = 0;
                  }
                  else {
                    if (cVar6 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar15 + 0x30);
                  }
                  puVar20[0xf] = uVar13;
                  puVar20[0x10] = (uVar19 << 0x3b) + local_100 | 0xc000000000000000;
                  *(int *)((longlong)puVar20 + 0x1c) = (int)uVar17;
                  if (puVar20 == (undefined8 *)0x0) {
                    local_f8[0].s.LowPart._0_1_ = 1;
                    FUN_1447439e4(0,local_f8);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                    UNLOCK();
                    local_f8[0].s.LowPart._0_1_ = 1;
                    FUN_1447439e4(puVar20,local_f8);
                    LOCK();
                    piVar1 = (int *)(puVar20 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar20)(puVar20,1);
                    }
                  }
                  goto LAB_14318ceb3;
                }
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                LOCK();
                uVar2 = *puVar12;
                *puVar12 = *puVar12 + uVar18 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar18) != 0xffffffff) break;
                puVar12 = (uint *)*local_130;
                *puVar12 = 0xffffffff;
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                puVar12[0x12] = 0;
                *local_130 = puVar12;
                uVar19 = (longlong)puVar12 + 0x5f;
                uVar18 = 0;
              }
            } while( true );
          }
          local_e8 = (undefined ***)0x0;
          local_d8 = &PTR_LAB_14a3564d0;
          local_f8[0].QuadPart = (LONGLONG)FUN_14318d8f2;
          local_138 = local_f8;
          local_d0 = param_1;
          local_c8 = pppuVar9;
          FUN_14005a792(&DAT_14ca9a440,L"PreLoadScreenRenderTick");
          if ((code *)local_f8[0].QuadPart != (code *)0x0) {
            pppuVar14 = local_e8;
            if (local_e8 == (undefined ***)0x0) {
              pppuVar14 = &local_d8;
            }
            ppuVar10 = *pppuVar14;
            goto LAB_14318ceb0;
          }
        }
LAB_14318ceb3:
        (*(code *)(*pppuVar9)[4])(pppuVar9,0xffffffff);
      }
    } while (((*param_1 & 1) != 0) && ((DAT_14c872bd8 & 1) == 0));
  }
  FUN_14018802a(pppuVar9);
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318d2a2 FUN_14318d2a2 body=114 status=ok
// SIG undefined FUN_14318d2a2(void)

undefined8 * FUN_14318d2a2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = param_1 + -0x4d;
  param_1[-0x4d] = &PTR_FUN_14a355fd0;
  *param_1 = &PTR_FUN_14a356230;
  plVar4 = (longlong *)param_1[0x83];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1402bbc34(puVar3);
  if (param_2 != 0) {
    FUN_1400020a8(puVar3);
  }
  return puVar3;
}



// FUNCTION 14318d314 FUN_14318d314 body=178 status=ok
// SIG undefined FUN_14318d314(void)

void FUN_14318d314(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  plVar6 = DAT_14ca77938;
  if (DAT_14ca77938 == (longlong *)0x0) {
LAB_14318d34d:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)DAT_14ca77938[1];
    do {
      if (iVar4 == 0) goto LAB_14318d34d;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
  }
  plVar5 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = DAT_14ca77930;
  }
  if (((plVar5 != (longlong *)0x0 & DAT_14c760bfc) == 1) && (*(char *)(lVar2 + 0x91) == '\0')) {
    DAT_14c7590b0 = DAT_14c7590b0 + 1;
    *(undefined1 *)(lVar2 + 0x91) = 1;
    (**(code **)(*plVar5 + 0x28))(plVar5,(int)param_1[1]);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014318d3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  return;
}



// FUNCTION 14318d3d0 FUN_14318d3d0 body=12 status=ok
// SIG undefined FUN_14318d3d0(void)

void FUN_14318d3d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318d3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14318d3dc FUN_14318d3dc body=29 status=ok
// SIG undefined FUN_14318d3dc(void)

undefined8 FUN_14318d3dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318d420 FUN_14318d420 body=282 status=ok
// SIG undefined FUN_14318d420(void)

undefined8 * FUN_14318d420(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14318d3f9);
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



// FUNCTION 14318d53a FUN_14318d53a body=236 status=ok
// SIG undefined FUN_14318d53a(void)

void FUN_14318d53a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  plVar6 = DAT_14ca77938;
  if (DAT_14ca77938 == (longlong *)0x0) {
LAB_14318d586:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)DAT_14ca77938[1];
    do {
      if (iVar4 == 0) goto LAB_14318d586;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
  }
  plVar5 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = DAT_14ca77930;
  }
  if (((plVar5 != (longlong *)0x0 & DAT_14c760bfc) == 1) && (*(char *)(lVar2 + 0x91) == '\0')) {
    DAT_14c7590b0 = DAT_14c7590b0 + 1;
    *(undefined1 *)(lVar2 + 0x91) = 1;
    (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined4 *)(param_1 + 0x16));
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014318d61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14318d626 FUN_14318d626 body=113 status=ok
// SIG undefined FUN_14318d626(void)

void FUN_14318d626(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(*param_1 + 0x91) = 0;
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,7);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318d6a2 FUN_14318d6a2 body=12 status=ok
// SIG undefined FUN_14318d6a2(void)

void FUN_14318d6a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318d6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14318d6ae FUN_14318d6ae body=29 status=ok
// SIG undefined FUN_14318d6ae(void)

undefined8 FUN_14318d6ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318d6cc FUN_14318d6cc body=282 status=ok
// SIG undefined FUN_14318d6cc(void)

undefined8 * FUN_14318d6cc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14318d3f9);
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



// FUNCTION 14318d7e6 FUN_14318d7e6 body=246 status=ok
// SIG undefined FUN_14318d7e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318d7e6(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    *(undefined1 *)(_DAT_000000a8 + 0x91) = 0;
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,7);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x91) = 0;
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,7);
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



// FUNCTION 14318d8f2 FUN_14318d8f2 body=61 status=ok
// SIG undefined FUN_14318d8f2(void)

void FUN_14318d8f2(undefined8 *param_1)

{
  if ((((*(byte *)*param_1 & 1) != 0) && ((DAT_14c872bd8 & 1) == 0)) && (DAT_14ca77900 != 0)) {
    FUN_14738dc80();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318d924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[1] + 0x10))();
  return;
}



// FUNCTION 14318d93a FUN_14318d93a body=12 status=ok
// SIG undefined FUN_14318d93a(void)

void FUN_14318d93a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318d943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14318d946 FUN_14318d946 body=29 status=ok
// SIG undefined FUN_14318d946(void)

undefined8 FUN_14318d946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14318d964 FUN_14318d964 body=282 status=ok
// SIG undefined FUN_14318d964(void)

undefined8 * FUN_14318d964(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14318d3f9);
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



// FUNCTION 14318da7e FUN_14318da7e body=117 status=ok
// SIG undefined FUN_14318da7e(void)

void FUN_14318da7e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if ((((*(byte *)param_1[0x15] & 1) != 0) && ((DAT_14c872bd8 & 1) == 0)) && (DAT_14ca77900 != 0)) {
    FUN_14738dc80();
  }
  (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014318dae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14318daf3 FUN_14318daf3 body=366 status=ok
// SIG undefined FUN_14318daf3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318daf3(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14ca778ec);
  if (cVar1 == '\0') {
    _DAT_14ca778ec = 0;
    uRam000000014ca778f4 = 0;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = -0x7ffffffeb5caa33c;
  local_24 = 0xd;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14171c728(&DAT_14ca778fc,&local_38);
  DAT_14ca77900 = 0;
  atexit(FUN_14318b464);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77908);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77908,4000);
  atexit((_func_5014 *)&LAB_14318b490);
  DAT_14ca77930 = 0;
  DAT_14ca77938 = 0;
  atexit((_func_5014 *)&LAB_14318b49e);
  FUN_140056680(&DAT_14ca77940,L"SYSTEM");
  atexit((_func_5014 *)&LAB_14318cb22);
  FUN_140056680(&DAT_14ca77950,L"InitialLoad");
  atexit((_func_5014 *)&LAB_14318cb33);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77970);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77970,4000);
  atexit((_func_5014 *)&LAB_14318d294);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318dc64 FUN_14318dc64 body=69 status=ok
// SIG undefined FUN_14318dc64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318dc64(void)

{
  _DAT_14ca779b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318dca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca779c0,1);
  return;
}



// FUNCTION 14318dca9 FUN_14318dca9 body=69 status=ok
// SIG undefined FUN_14318dca9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318dca9(void)

{
  _DAT_14ca779c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca779d0,1);
  return;
}



// FUNCTION 14318dcee FUN_14318dcee body=69 status=ok
// SIG undefined FUN_14318dcee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318dcee(void)

{
  _DAT_14ca779d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318dd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca779e0,1);
  return;
}



// FUNCTION 14318dd33 FUN_14318dd33 body=69 status=ok
// SIG undefined FUN_14318dd33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318dd33(void)

{
  _DAT_14ca779e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318dd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca779f0,1);
  return;
}



// FUNCTION 14318dd78 FUN_14318dd78 body=1823 status=ok
// SIG undefined FUN_14318dd78(void)

void FUN_14318dd78(longlong param_1,longlong param_2,char *param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  char *pcVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  undefined1 local_b0;
  char local_9a;
  char local_99;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  int local_7c;
  char *local_78;
  char *local_70;
  char *local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_9a = *param_3;
  local_99 = param_3[1];
  pcVar15 = (char *)(-DAT_14ca84ab8 & param_2 + DAT_14ca84ab8);
  uVar19 = 0;
  pcVar15[0x38] = '\0';
  pcVar15[0x39] = '\0';
  pcVar15[0x3a] = '\0';
  pcVar15[0x3b] = '\0';
  pcVar15[0x3c] = '\0';
  pcVar15[0x3d] = '\0';
  pcVar15[0x3e] = '\0';
  pcVar15[0x3f] = '\0';
  pcVar15[0x40] = '\0';
  pcVar15[0x41] = '\0';
  pcVar15[0x42] = '\0';
  pcVar15[0x43] = '\0';
  pcVar15[0x44] = '\x01';
  pcVar15[0x45] = '\0';
  pcVar15[0x46] = '\0';
  pcVar15[0x47] = '\0';
  pcVar15[0x108] = '\0';
  pcVar15[0x109] = '\0';
  pcVar15[0x10a] = '\0';
  pcVar15[0x10b] = '\0';
  pcVar15[0x10c] = '\0';
  pcVar15[0x10d] = '\0';
  pcVar15[0x10e] = '\0';
  pcVar15[0x10f] = '\0';
  pcVar15[0x110] = '\0';
  pcVar15[0x111] = '\0';
  pcVar15[0x112] = '\0';
  pcVar15[0x113] = '\0';
  pcVar15[0x114] = '\x02';
  pcVar15[0x115] = '\0';
  pcVar15[0x116] = '\0';
  pcVar15[0x117] = '\0';
  pcVar15[0x150] = '\0';
  pcVar15[0x151] = '\0';
  pcVar15[0x152] = '\0';
  pcVar15[0x153] = '\0';
  pcVar15[0x154] = '\0';
  pcVar15[0x155] = '\0';
  pcVar15[0x156] = '\0';
  pcVar15[0x157] = '\0';
  pcVar15[0x158] = '\0';
  pcVar15[0x159] = '\0';
  pcVar15[0x15a] = '\0';
  pcVar15[0x15b] = '\0';
  pcVar15[0x15c] = '\x02';
  pcVar15[0x15d] = '\0';
  pcVar15[0x15e] = '\0';
  pcVar15[0x15f] = '\0';
  pcVar15[0x118] = '\0';
  pcVar15[0x119] = '\0';
  pcVar15[0x11a] = '\0';
  pcVar15[0x11b] = '\0';
  pcVar15[0x11c] = '\0';
  pcVar15[0x11d] = '\0';
  pcVar15[0x11e] = '\0';
  pcVar15[0x11f] = '\0';
  pcVar15[0x120] = '\0';
  pcVar15[0x121] = '\0';
  pcVar15[0x122] = '\0';
  pcVar15[0x123] = '\0';
  pcVar15[0x124] = '\0';
  pcVar15[0x125] = '\0';
  pcVar15[0x126] = '\0';
  pcVar15[0x127] = '\0';
  pcVar15[0x128] = '\0';
  pcVar15[0x129] = '\0';
  pcVar15[0x12a] = '\0';
  pcVar15[299] = '\0';
  pcVar15[300] = '\0';
  pcVar15[0x12d] = '\0';
  pcVar15[0x12e] = '\0';
  pcVar15[0x12f] = '\0';
  *pcVar15 = local_9a;
  pcVar15[1] = local_99;
  local_94 = 0xffffffff;
  local_98 = 0xffffffff;
  if (local_9a != local_99) {
    uVar12 = FUN_14001cc68(0x28,0x10);
    FUN_1473a911e(uVar12,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(pcVar15 + 0x128) = uVar12;
    local_94 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1a70) + 8);
    uVar14 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1a78) + 8);
    local_98 = uVar14;
    if (local_9a == '\x01') {
      local_98 = local_94;
      local_94 = uVar14;
    }
  }
  iVar3 = *(int *)(param_3 + 0x10);
  iVar13 = 0;
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_3 + 8);
    lVar16 = 0;
    uVar19 = 0;
    iVar13 = 0;
    do {
      plVar17 = *(longlong **)(lVar6 + 0x10 + lVar16);
      if ((plVar17 != (longlong *)0x0) && (*(int *)(lVar6 + 0x20 + lVar16) != 0x40000)) {
        cVar2 = *(char *)(lVar6 + 0x18 + lVar16);
        if (cVar2 == '\x03') {
          uVar19 = (ulonglong)(((int)uVar19 + 1) - (uint)(*(byte *)(plVar17 + 3) < 2));
          if (*(byte *)(plVar17 + 3) < 2) goto LAB_14318de92;
        }
        else if (cVar2 == '\x01') {
          lVar8 = (**(code **)(*plVar17 + 0x30))();
          uVar19 = (ulonglong)((int)uVar19 + (uint)(*(longlong *)(lVar8 + 0x108) == 0));
        }
        else {
LAB_14318de92:
          iVar13 = iVar13 + 1;
        }
      }
      lVar16 = lVar16 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar16 != 0);
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar19);
    }
  }
  local_68 = pcVar15 + 0x48;
  if (*(int *)(pcVar15 + 0x114) < (int)uVar19) {
    FUN_14739d132(local_68,uVar19);
  }
  local_70 = pcVar15 + 0x130;
  if (*(int *)(pcVar15 + 0x15c) < (int)uVar19) {
    FUN_14739d242(local_70,uVar19);
  }
  local_78 = pcVar15 + 0x118;
  if (local_9a != local_99) {
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (*(int *)(pcVar15 + 0x124) < iVar13) {
      FUN_14739d326(local_78,iVar13);
    }
  }
  iVar3 = *(int *)(param_3 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_3 + 8);
    lVar16 = 0;
    do {
      plVar17 = *(longlong **)(lVar6 + 0x10 + lVar16);
      if ((plVar17 != (longlong *)0x0) && (*(int *)(lVar6 + 0x20 + lVar16) != 0x40000)) {
        bVar18 = *(byte *)(lVar6 + 0x18 + lVar16);
        uVar7 = bVar18 - 1;
        if (3 < uVar7) goto LAB_14318df3e;
        plVar9 = (longlong *)
                 ((longlong)&switchD_14318df5a::switchdataD_14a3588f0 +
                 (longlong)(int)(&switchD_14318df5a::switchdataD_14a3588f0)[uVar7]);
        switch((uint)bVar18) {
        case 1:
          plVar9 = (longlong *)(**(code **)(*plVar17 + 0x30))(plVar17);
          if (plVar9[0x21] != 0) {
            bVar18 = 1;
            goto LAB_14318dfbf;
          }
LAB_14318df8f:
          bVar18 = 1;
          if (plVar9 == (longlong *)0x0) {
            uVar14 = 0;
            local_90 = 1;
            plVar17 = (longlong *)0x0;
            goto LAB_14318dfd1;
          }
          local_88 = plVar9;
          if ((*(byte *)(plVar9 + 0x20) & 6) == 0) {
            lVar8 = (**(code **)(*plVar9 + 8))(plVar9);
            if ((*(byte *)((longlong)&DAT_14c873430 +
                          (ulonglong)((uint)*(byte *)(lVar8 + 0x33) * 0x30) + 1) & 2) == 0) {
              local_90 = 0;
              uVar14 = 0;
              plVar17 = (longlong *)0x0;
              uVar19 = 0;
            }
            else {
              uVar19 = CONCAT71((int7)((ulonglong)plVar9 >> 8),(char)plVar9[0x14]) &
                       0xffffffffffffff04;
              uVar19 = CONCAT71((int7)(uVar19 >> 8),(byte)uVar19 >> 2);
              local_90 = 0;
              uVar14 = 0;
              plVar17 = (longlong *)0x0;
            }
            goto LAB_14318dfd4;
          }
          uVar4 = *(uint *)(lVar6 + 0x1c + lVar16);
          uVar7 = 0;
          uVar19 = 0;
          if ((((uVar4 & 0xfffbffff) != 0) && (uVar19 = 6, -1 < (char)uVar4)) &&
             (uVar19 = 7, (uVar4 >> 0xd & 1) == 0)) {
            uVar19 = (ulonglong)(-1 < (short)uVar4 ^ 0x3b9f9491);
          }
          local_5c = (uint)uVar19;
          uVar5 = *(uint *)(lVar6 + 0x20 + lVar16);
          if ((((uVar5 & 0xfffbffff) != 0) && (uVar7 = 6, -1 < (char)uVar5)) &&
             (uVar7 = 7, (uVar5 >> 0xd & 1) == 0)) {
            uVar7 = -1 < (short)uVar5 ^ 0x3b9f9491;
          }
          local_60 = uVar7;
          FUN_14318e499(uVar4,&local_4c,&local_54);
          FUN_14318e499(*(undefined4 *)(lVar6 + 0x20 + lVar16),&local_50,&local_58);
          if (local_9a == local_99) {
            bVar20 = true;
            plVar17 = (longlong *)0x0;
            goto LAB_14318e144;
          }
          goto LAB_14318e09a;
        case 3:
          pbVar1 = (byte *)(plVar17 + 3);
          plVar17 = (longlong *)plVar17[2];
          if (1 < *pbVar1) {
            plVar9 = (longlong *)(**(code **)(*plVar17 + 0x30))(plVar17);
            goto LAB_14318df8f;
          }
          break;
        case 4:
LAB_14318dfbf:
          plVar17 = (longlong *)0x0;
          uVar14 = 0;
          goto LAB_14318dfc1;
        }
        uVar14 = (undefined4)plVar17[9];
        bVar18 = 2;
LAB_14318dfc1:
        local_90 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
LAB_14318dfd1:
        local_88 = (longlong *)0x0;
        uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
LAB_14318dfd4:
        local_b8 = &local_5c;
        local_c0 = &local_54;
        local_c8 = &local_4c;
        local_b0 = 1;
        FUN_14318e53c(*(undefined4 *)(lVar6 + 0x1c + lVar16),bVar18,uVar14,uVar19 & 0xffffffff);
        local_b8 = &local_60;
        local_c0 = &local_58;
        local_c8 = &local_50;
        local_b0 = 0;
        FUN_14318e53c(*(undefined4 *)(lVar6 + 0x20 + lVar16),bVar18,uVar14,uVar19 & 0xffffffff);
        if ((local_4c >> 0xb & 1) == 0) {
          local_50 = local_50 & 0xffffffb7;
        }
        if (local_9a == local_99) {
          if ((char)local_90 == '\0') {
            uVar19 = (ulonglong)local_5c;
            bVar20 = false;
            uVar7 = local_60;
LAB_14318e144:
            if (((uint)uVar19 != uVar7) || (DAT_14c760c00 == 0)) goto LAB_14318e08d;
          }
          else if (DAT_14c760c00 == 0) goto LAB_14318e08b;
          local_c8 = (uint *)CONCAT44(local_c8._4_4_,local_50);
          FUN_14739445e(pcVar15,local_54,local_58,local_4c);
        }
        else {
LAB_14318e08b:
          bVar20 = false;
LAB_14318e08d:
          if (plVar17 == (longlong *)0x0) {
            if (bVar20) {
LAB_14318e09a:
              iVar13 = *(int *)(lVar6 + 8 + lVar16);
              uVar14 = 0;
              if (iVar13 == -1) {
                uVar14 = 6;
              }
              if (iVar13 == 0) {
                uVar14 = 2;
              }
              if (iVar13 == 1) {
                uVar14 = 4;
              }
            }
            else {
              uVar14 = (undefined4)local_88[0x20];
            }
            iVar13 = *(int *)(lVar6 + lVar16);
            uVar7 = *(uint *)(lVar6 + 4 + lVar16);
            bVar20 = iVar13 != -1;
            local_90 = CONCAT44(local_90._4_4_,(bVar20 - 1) + (uint)bVar20);
            if (!bVar20) {
              iVar13 = 0;
            }
            uVar4 = uVar7;
            if (uVar7 == 0xffffffff) {
              uVar4 = 0;
            }
            uVar19 = (ulonglong)uVar4;
            local_7c = (uint)(uVar7 != 0xffffffff) * 2 + -1;
            puVar10 = (undefined4 *)FUN_14739450c(local_68);
            *puVar10 = 0x3b9f9492;
            *(undefined8 *)(puVar10 + 2) = 0;
            *(ulonglong *)(puVar10 + 4) = (ulonglong)local_4c;
            *(ulonglong *)(puVar10 + 8) = (ulonglong)local_50;
            *(ulonglong *)(puVar10 + 6) = (ulonglong)local_54;
            *(ulonglong *)(puVar10 + 10) = (ulonglong)local_58;
            puVar10[0xc] = local_5c;
            puVar10[0xd] = local_60;
            *(undefined8 *)(puVar10 + 0x10) = 0;
            puVar10[0x12] = uVar14;
            puVar10[0x13] = iVar13;
            puVar10[0x14] = (undefined4)local_90;
            puVar10[0x15] = uVar4;
            puVar10[0x16] = local_7c;
            puVar10[0xe] = local_98;
            puVar10[0xf] = local_94;
            puVar11 = (undefined8 *)FUN_14739455a(local_70);
            *puVar11 = local_88;
            *(bool *)(puVar11 + 1) = *(int *)(lVar6 + 0x1c + lVar16) == 0x40000;
          }
          else {
            puVar10 = (undefined4 *)FUN_1473944d6(local_78);
            *puVar10 = 0x3b9f9491;
            *(undefined8 *)(puVar10 + 2) = 0;
            *(ulonglong *)(puVar10 + 4) = (ulonglong)local_4c;
            *(ulonglong *)(puVar10 + 8) = (ulonglong)local_50;
            *(ulonglong *)(puVar10 + 6) = (ulonglong)local_54;
            *(ulonglong *)(puVar10 + 10) = (ulonglong)local_58;
            puVar10[0xc] = local_98;
            puVar10[0xd] = local_94;
            *(longlong *)(puVar10 + 0xe) = plVar17[10];
            *(undefined8 *)(puVar10 + 0x10) = 0;
            *(undefined8 *)(puVar10 + 0x12) = 0xffffffffffffffff;
          }
        }
      }
LAB_14318df3e:
      lVar16 = lVar16 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar16 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318e499 FUN_14318e499 body=163 status=ok
// SIG undefined FUN_14318e499(void)

void FUN_14318e499(uint param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  
  if ((param_1 & 0xfffbffff) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 1;
    param_2[3] = 0;
    uVar1 = 0x18000;
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_3 = 0;
    if ((param_1 >> 0xe & 1) != 0) {
      param_2[1] = param_2[1] | 4;
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 1;
    }
    if ((short)param_1 < 0) {
      param_2[1] = param_2[1] | 3;
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 6;
    }
    if ((param_1 >> 9 & 1) != 0) {
      param_2[1] = param_2[1] | 3;
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 2;
    }
    if ((param_1 & 0x60) != 0) {
      *param_2 = *param_2 | 0x80;
      *(byte *)param_3 = (byte)*param_3 | 0x20;
    }
    if ((param_1 >> 0xb & 1) != 0) {
      *param_2 = *param_2 | 0x80;
      *(byte *)param_3 = (byte)*param_3 | 0x60;
    }
    if ((param_1 & 0x10) != 0) {
      param_2[1] = param_2[1] | 8;
      *(byte *)param_3 = (byte)*param_3 | 0x20;
    }
    if ((param_1 >> 10 & 1) != 0) {
      param_2[1] = param_2[1] | 8;
      *(byte *)param_3 = (byte)*param_3 | 0x60;
    }
    if ((char)param_1 < '\0') {
      param_2[1] = param_2[1] | 0x10;
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 8;
    }
    if ((param_1 >> 0xd & 1) == 0) {
      return;
    }
    param_2[1] = param_2[1] | 0x10;
    uVar1 = *param_3 | 0x1000;
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14318e53c FUN_14318e53c body=739 status=ok
// SIG undefined FUN_14318e53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318e53c(uint param_1,char param_2,uint param_3,byte param_4,uint *param_5,uint *param_6,
                  int *param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0x1000;
  if (param_1 != 0x5000) {
    uVar2 = param_1;
  }
  uVar1 = uVar2 & 0xffffff8f;
  if ((uVar2 >> 0x10 & 1) == 0) {
    uVar1 = uVar2;
  }
  *param_7 = 0;
  iVar3 = (uint)param_4 * 4 + 1;
  if ((int)uVar1 < 0x2000) {
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) {
        *param_5 = 0x10000;
        *param_6 = 0x18000;
        return;
      }
      if (uVar1 == 1) {
        *param_5 = 0x4000;
        *param_6 = 0x2000;
        *param_7 = 1;
        return;
      }
    }
    else {
      if (uVar1 == 2) {
        uVar2 = 0x2000;
        if (param_8 != '\0') {
          uVar2 = 1;
        }
        *param_5 = uVar2;
        *param_6 = 0x400;
LAB_14318e672:
        *param_7 = 2;
        return;
      }
      if (uVar1 == 0x1000) {
        *param_5 = 0x400;
        *param_6 = 0x180;
        goto LAB_14318e672;
      }
    }
  }
  else if ((int)uVar1 < 0x10000) {
    if ((uVar1 == 0x2000) || (uVar1 == 0x4000)) {
      *param_5 = 0x1000;
      *param_6 = 0x1000;
      *param_7 = 7;
      return;
    }
  }
  else {
    if (uVar1 == 0x10000) {
      *param_5 = 0x2000800;
      *param_5 = (uint)DAT_14ca84ef5 << 0x15 | 0x2000800;
      *param_6 = 0x200000;
      return;
    }
    if (uVar1 == 0x20000) {
      *param_5 = 0x2000800;
      *param_5 = (uint)DAT_14ca84ef5 << 0x15 | 0x2000800;
      *param_6 = 0x400000;
      return;
    }
    if (uVar1 == 0x40000) {
      *param_5 = 0x10000;
      *param_6 = 0x18000;
      if (param_8 != '\0') {
        iVar3 = 0;
      }
      *param_7 = iVar3;
      return;
    }
  }
  if ((short)uVar1 < 0) {
    *param_5 = 0x300;
    *param_6 = 0x600;
    *param_7 = 0x3b9f9491;
    return;
  }
  *param_5 = 0;
  *param_6 = 0;
  if ((uVar1 & 4) != 0) {
    *(byte *)param_5 = (byte)*param_5 | 2;
    *(byte *)param_6 = (byte)*param_6 | 1;
  }
  if (((uVar1 & 8) != 0) && (*(byte *)param_5 = (byte)*param_5 | 4, param_2 == '\x02')) {
    if ((param_3 & 0x40) != 0) {
      *(byte *)param_6 = (byte)*param_6 | 2;
    }
    if ((char)param_3 < '\0') {
      *(byte *)param_6 = (byte)*param_6 | 4;
    }
  }
  if ((uVar1 >> 9 & 1) != 0) {
    *(byte *)((longlong)param_5 + 1) = *(byte *)((longlong)param_5 + 1) | 3;
    *(byte *)((longlong)param_6 + 1) = *(byte *)((longlong)param_6 + 1) | 2;
    *param_7 = 0x3b9f9490;
  }
  if ((uVar1 & 0x60) != 0) {
    *param_5 = *param_5 | _DAT_14ca788d4 & 0xfffff7ff;
    *param_6 = (param_3 & 0x10) >> 1 | *param_6 | 0x20;
    *param_7 = iVar3;
  }
  if ((uVar1 & 0x10) != 0) {
    *(byte *)((longlong)param_5 + 1) = *(byte *)((longlong)param_5 + 1) | 8;
    *(byte *)param_6 = (byte)*param_6 | 0x20;
    *param_7 = iVar3;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    *param_5 = *param_5 | _DAT_14ca788d4 & 0xfffff7ff;
    *(byte *)param_6 = (byte)*param_6 | 0x60;
    *param_7 = 1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    *(byte *)((longlong)param_5 + 1) = *(byte *)((longlong)param_5 + 1) | 8;
    *(byte *)param_6 = (byte)*param_6 | 0x60;
    *param_7 = 1;
  }
  if ((uVar1 & 0x180) == 0) goto LAB_14318e7d2;
  if (param_2 == '\x01') {
    if (*param_7 == 0) {
      *param_7 = 6;
      goto LAB_14318e7c4;
    }
    *param_7 = 1;
    *(byte *)((longlong)param_5 + 1) = *(byte *)((longlong)param_5 + 1) | 0x10;
    uVar2 = *param_6 | 0x800;
  }
  else {
LAB_14318e7c4:
    *param_5 = 0x1000;
    uVar2 = 0x800;
  }
  *param_6 = uVar2;
LAB_14318e7d2:
  if (((uVar1 >> 0x13 & 1) != 0) && ((byte)(DAT_14ca84f48 - 1U) < 2)) {
    if (DAT_14ca84f48 == '\x01') {
      *param_5 = 0x400000;
      *param_6 = 0x800000;
      *param_7 = 0x3b9d4aa3;
      if (DAT_14ca84f48 != '\x02') {
        return;
      }
    }
    *param_5 = 0x800000;
    *param_6 = 0x1000000;
    *param_7 = 0x3b9e1d90;
  }
  return;
}



// FUNCTION 14318e81f FUN_14318e81f body=211 status=ok
// SIG undefined FUN_14318e81f(void)

void FUN_14318e81f(longlong param_1,longlong *param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  iVar4 = *(int *)(param_1 + 8) + iVar2;
  if (-1 < iVar4) {
    if (*(int *)(param_1 + 0xc) < iVar4) {
      FUN_14739d5ba(param_1);
      iVar2 = (int)param_2[1];
    }
    if (iVar2 != 0) {
      lVar1 = *param_2;
      lVar5 = 0;
      do {
        puVar3 = (undefined4 *)FUN_14739d760(param_1);
        *puVar3 = 0x2c;
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar1 + 8 + lVar5);
        puVar3[4] = *(undefined4 *)(lVar1 + 0x18 + lVar5);
        puVar3[5] = *(undefined4 *)(lVar1 + 0x28 + lVar5);
        puVar3[6] = *(undefined4 *)(lVar1 + 0x30 + lVar5);
        puVar3[7] = *(undefined4 *)(lVar1 + 0x34 + lVar5);
        *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(lVar1 + 0x38 + lVar5);
        *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(lVar1 + 0x40 + lVar5);
        *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(lVar1 + 0x48 + lVar5);
        *param_3 = *param_3 | *(uint *)(lVar1 + 0x10 + lVar5);
        *param_4 = *param_4 | *(uint *)(lVar1 + 0x20 + lVar5);
        lVar5 = lVar5 + 0x50;
      } while ((longlong)iVar2 * 0x50 != lVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 14318e8f3 FUN_14318e8f3 body=166 status=ok
// SIG undefined FUN_14318e8f3(void)

undefined8 FUN_14318e8f3(int param_1)

{
  if (0x3b9d4aa2 < param_1) {
    if (param_1 < 0x3b9e7768) {
      if (param_1 == 0x3b9d4aa3) {
        return 0x800000;
      }
      if (param_1 != 0x3b9e1d90) {
        return 0;
      }
      return 0x1000000;
    }
    switch(param_1) {
    case 0x3b9e7768:
    case 0x3b9e776a:
      goto switchD_14318e913_caseD_3;
    case 0x3b9e7769:
    case 0x3b9e776b:
switchD_14318e913_caseD_4:
      return 0x220;
    default:
      if (param_1 != 0x3b9f9490) {
        if (param_1 == 0x3b9f9491) {
          return 0x600;
        }
        return 0;
      }
LAB_14318e986:
      return 0x20;
    }
  }
  switch(param_1) {
  case 2:
    return 0x100;
  case 3:
switchD_14318e913_caseD_3:
    return 0x600;
  case 4:
    goto switchD_14318e913_caseD_4;
  case 5:
    goto LAB_14318e986;
  case 6:
    return 0x800;
  case 7:
    return 0x1000;
  default:
    if (1 < param_1 + 0xc4636cf8U) {
      return 0;
    }
    return 0x620;
  }
}



// FUNCTION 14318e999 FUN_14318e999 body=173 status=ok
// SIG undefined FUN_14318e999(void)

undefined8 FUN_14318e999(int param_1)

{
  if (param_1 < 0x3b9d4aa3) {
    switch(param_1) {
    case 0:
    case 1:
      return 1;
    case 2:
      return 0x400;
    case 3:
      goto switchD_14318e9c4_caseD_3b9e7768;
    case 4:
      break;
    case 5:
      return 0x80;
    case 6:
    case 7:
      return 0x1000;
    default:
      if (1 < param_1 + 0xc4636cf8U) {
        if (param_1 != 0x3b9acdea) {
          return 0;
        }
        return 0x2000;
      }
    }
  }
  else {
    if (param_1 < 0x3b9e7768) {
      if (param_1 == 0x3b9d4aa3) {
        return 0x400000;
      }
      if (param_1 != 0x3b9e1d90) {
        return 0;
      }
      return 0x800000;
    }
    switch(param_1) {
    case 0x3b9e7768:
    case 0x3b9e776a:
switchD_14318e9c4_caseD_3b9e7768:
      return 0x300;
    case 0x3b9e7769:
    case 0x3b9e776b:
      break;
    default:
      if (param_1 != 0x3b9f9490) {
        if (param_1 == 0x3b9f9491) {
          return 0x300;
        }
        return 0;
      }
    }
  }
  return 0x380;
}



// FUNCTION 14318ea46 FUN_14318ea46 body=179 status=ok
// SIG undefined FUN_14318ea46(void)

longlong * FUN_14318ea46(longlong *param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar6 = 0;
    lVar5 = DAT_14ca84ab8;
    do {
      pbVar7 = (byte *)(-lVar5 & *(longlong *)(lVar3 + lVar6) + lVar5);
      if ((*(longlong *)(pbVar7 + 0x128) != 0) &&
         (((param_3 == 0 || (bVar1 = *pbVar7, bVar1 != param_3)) || ((pbVar7[1] & bVar1) != bVar1)))
         ) {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14739d94a(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(pbVar7 + 0x128);
        lVar5 = DAT_14ca84ab8;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return param_1;
}



// FUNCTION 14318eafa FUN_14318eafa body=797 status=ok
// SIG undefined FUN_14318eafa(void)

void FUN_14318eafa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  LARGE_INTEGER local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_1473999ec(param_1);
  local_68 = 0;
  uStack_60 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1 + 1);
  }
  if (iVar1 < 0) {
    plVar10 = (longlong *)*param_2;
    plVar7 = plVar10 + -1;
  }
  else {
    FUN_1473a0e3a(&local_68);
    if ((longlong)(int)param_2[1] == 0) goto LAB_14318ebb3;
    plVar10 = (longlong *)*param_2;
    plVar7 = plVar10 + (int)param_2[1];
  }
  do {
    uVar4 = uStack_60;
    uVar2 = *(undefined8 *)(*plVar10 + 0x18);
    lVar9 = (longlong)(int)(uint)uStack_60;
    uVar5 = (uint)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
    if (uStack_60._4_4_ < uVar5) {
      FUN_1473a0e48(&local_68,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_68 + lVar9 * 8) = uVar2;
    plVar10 = plVar10 + 1;
  } while (plVar10 != plVar7);
LAB_14318ebb3:
  lVar9 = *(longlong *)(param_1 + 0x78);
  if ((byte)(*(char *)(lVar9 + 0x74) - 1U) < 2) {
    if (*(char *)(lVar9 + 0x74) != '\x01') {
      (*DAT_14ca790e0)(*(undefined8 *)(lVar9 + 0x88));
      *(undefined1 *)(lVar9 + 0x74) = 1;
      lVar9 = *(longlong *)(param_1 + 0x78);
    }
    FUN_147399046(lVar9);
    if (DAT_14ca77b70 == 0) {
      FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                    uStack_60 & 0xffffffff,local_68);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc0);
      if ((longlong)iVar1 != 0) {
        lVar9 = *(longlong *)(param_1 + 0xb8);
        lVar8 = 0;
        do {
          local_48 = *(undefined8 *)(lVar9 + lVar8);
          local_50 = 1;
          local_58.QuadPart = (LONGLONG)&local_48;
          FUN_1473965d8(*(undefined8 *)(param_1 + 0x78),1,&local_58);
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar1 * 8 != lVar8);
      }
      uVar4 = uStack_60;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
      lVar9 = (longlong)(int)(uint)uStack_60;
      uVar5 = (uint)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
      if (uStack_60._4_4_ < uVar5) {
        FUN_1473a0e48(&local_68,uVar4 & 0xffffffff);
        uVar5 = (uint)uStack_60;
      }
      *(undefined8 *)(local_68 + lVar9 * 8) = uVar2;
      FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),uVar5);
      iVar1 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
        FUN_14739d94a(param_1 + 0xa0,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8) =
           *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (*(int *)(param_1 + 0xc4) != 0) {
        FUN_1473a0dda(param_1 + 0xb8,0);
      }
    }
    QueryPerformanceCounter(&local_58);
    *(double *)(*(longlong *)(param_1 + 0x78) + 0x90) =
         (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((DAT_14ca77b70 != 0) &&
     (puVar3 = *(undefined8 **)(param_1 + 0x98), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (local_68 != 0) {
    piVar6 = (int *)((local_68 + -8) - (ulonglong)*(uint *)(local_68 + -8));
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        lVar9 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar9 = FUN_145bdc178();
        }
        FUN_140028df4(lVar9,piVar6);
      }
      else {
        FUN_144705e74(piVar6);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14318ee18 FUN_14318ee18 body=41 status=ok
// SIG undefined FUN_14318ee18(void)

void FUN_14318ee18(void)

{
  DAT_14ca77a40 = 0;
  if (DAT_14ca77a38 != 0) {
    FUN_1400020a8();
  }
  FUN_145d70108();
  return;
}



// FUNCTION 14318ee4f FUN_14318ee4f body=69 status=ok
// SIG undefined FUN_14318ee4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318ee4f(void)

{
  _DAT_14ca77a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318ee91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77a80,1);
  return;
}



// FUNCTION 14318ee94 FUN_14318ee94 body=112 status=ok
// SIG undefined FUN_14318ee94(void)

longlong *
FUN_14318ee94(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x88,0x10);
  FUN_147397b42(lVar1,*(undefined8 *)(param_1 + 0x48),param_4,param_6,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14318ef04 FUN_14318ef04 body=35 status=ok
// SIG undefined FUN_14318ef04(void)

void FUN_14318ef04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_147397ed8(param_3,param_2,param_6,param_5,param_4);
  return;
}



// FUNCTION 14318ef30 FUN_14318ef30 body=35 status=ok
// SIG undefined FUN_14318ef30(void)

void FUN_14318ef30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_147397ed8(param_3,param_2,param_6,param_5,param_4);
  return;
}



// FUNCTION 14318ef5c FUN_14318ef5c body=69 status=ok
// SIG undefined FUN_14318ef5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318ef5c(void)

{
  _DAT_14ca77a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318ef9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77a90,1);
  return;
}



// FUNCTION 14318efa1 FUN_14318efa1 body=69 status=ok
// SIG undefined FUN_14318efa1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318efa1(void)

{
  _DAT_14ca77aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318efe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77aa8,1);
  return;
}



// FUNCTION 14318efe6 FUN_14318efe6 body=69 status=ok
// SIG undefined FUN_14318efe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318efe6(void)

{
  _DAT_14ca77ab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ab8,1);
  return;
}



// FUNCTION 14318f02b FUN_14318f02b body=69 status=ok
// SIG undefined FUN_14318f02b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f02b(void)

{
  _DAT_14ca77ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ac8,1);
  return;
}



// FUNCTION 14318f070 FUN_14318f070 body=69 status=ok
// SIG undefined FUN_14318f070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f070(void)

{
  _DAT_14ca77ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ad8,1);
  return;
}



// FUNCTION 14318f0b5 FUN_14318f0b5 body=69 status=ok
// SIG undefined FUN_14318f0b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f0b5(void)

{
  _DAT_14ca77ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ae8,1);
  return;
}



// FUNCTION 14318f108 FUN_14318f108 body=44 status=ok
// SIG undefined FUN_14318f108(void)

void FUN_14318f108(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca77b20;
  if (DAT_14ca77b20 == 0) {
    return;
  }
  FUN_14739e5a0(DAT_14ca77b20);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14318f134 FUN_14318f134 body=69 status=ok
// SIG undefined FUN_14318f134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f134(void)

{
  _DAT_14ca77b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b30,1);
  return;
}



// FUNCTION 14318f179 FUN_14318f179 body=69 status=ok
// SIG undefined FUN_14318f179(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f179(void)

{
  _DAT_14ca77b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f1bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b48,1);
  return;
}



// FUNCTION 14318f1be FUN_14318f1be body=69 status=ok
// SIG undefined FUN_14318f1be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f1be(void)

{
  _DAT_14ca77b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b58,1);
  return;
}



// FUNCTION 14318f203 FUN_14318f203 body=69 status=ok
// SIG undefined FUN_14318f203(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f203(void)

{
  _DAT_14ca77b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b68,1);
  return;
}



// FUNCTION 14318f248 FUN_14318f248 body=227 status=ok
// SIG undefined FUN_14318f248(void)

void FUN_14318f248(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1473a0266(param_1);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1473a0344(param_1 + 0x40);
  }
  local_30 = 0x28;
  local_2c = 0;
  uStack_24 = 0;
  uStack_18 = 0;
  local_14 = 1;
  uStack_20 = (undefined4)**(undefined8 **)(param_1 + 0xf0);
  uStack_1c = (undefined4)((ulonglong)**(undefined8 **)(param_1 + 0xf0) >> 0x20);
  iVar1 = (*DAT_14ca78fe8)(**(undefined8 **)(param_1 + 0x80),&local_30,param_1 + 0x88);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkAllocateCommandBuffers(Device->GetInstanceHandle(), &CreateCmdBufInfo, &CommandBufferHandle)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp",0x62);
  }
  *(byte *)(param_1 + 0x75) = (*(byte *)(param_1 + 0x75) & 0xe0) + 1;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318f32c FUN_14318f32c body=377 status=ok
// SIG undefined FUN_14318f32c(void)

void FUN_14318f32c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80) + 0x640;
  if (*(char *)(param_1 + 0x74) == '\x04') {
    FUN_1473a8a18(lVar1,param_1 + 0xd8,33000000);
  }
  else {
    FUN_1473a88a0(lVar1,param_1 + 0xd8);
  }
  if (*(char *)(param_1 + 0x74) != '\x05') {
    (*DAT_14ca78ff0)(**(undefined8 **)(param_1 + 0x80),**(undefined8 **)(param_1 + 0xf0),1,
                     param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x74) = 5;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1473d9d2e();
    lVar1 = *(longlong *)(param_1 + 0xf8);
    if (lVar1 != 0) {
      while (*(undefined8 **)(lVar1 + 0x38) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x38) = **(undefined8 **)(lVar1 + 0x38);
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_14739cca0(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_14739cd58(param_1 + 0x108);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14318f4a6 FUN_14318f4a6 body=557 status=ok
// SIG undefined FUN_14318f4a6(void)

void FUN_14318f4a6(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_3 == '\0') {
    QueryPerformanceCounter(&local_78);
    dVar5 = (double)local_78.QuadPart * DAT_14c83f420;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x18));
    lVar1 = *(longlong *)(param_2 + 0x40);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x18));
    iVar9 = *(int *)(param_1 + 2);
    if (0 < (longlong)iVar9) {
      lVar2 = param_1[10];
      local_80 = param_1 + 3;
      iVar10 = -iVar9;
      uVar8 = (longlong)iVar9;
      do {
        lVar3 = *(longlong *)(param_1[1] + -8 + uVar8 * 8);
        if (((lVar3 != lVar1) &&
            (((*(char *)(lVar3 + 0x74) == '\x06' || (*(char *)(lVar3 + 0x74) == '\0')) &&
             (10.0 < (dVar5 + 16777216.0) - *(double *)(lVar3 + 0x90))))) &&
           ((*(longlong *)(param_1[10] + 0xef0) == 0 ||
            (cVar6 = FUN_1473ba5ba(*(longlong *)(param_1[10] + 0xef0),lVar3), cVar6 == '\0')))) {
          FUN_1473a8c28(lVar2 + 0x590,lVar3);
          (*DAT_14ca78ff0)(**(undefined8 **)(lVar3 + 0x80),**(undefined8 **)(lVar3 + 0xf0),1,
                           lVar3 + 0x88);
          *(undefined8 *)(lVar3 + 0x88) = 0;
          *(undefined1 *)(lVar3 + 0x74) = 5;
          uVar7 = *(uint *)(param_1 + 2);
          if (uVar8 != uVar7) {
            iVar9 = iVar10 + uVar7;
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove((void *)(param_1[1] + uVar8 * 8 + -8),
                    (void *)(param_1[1] + (longlong)(int)(uVar7 - iVar9) * 8),(longlong)iVar9 << 3);
            uVar7 = *(uint *)(param_1 + 2);
          }
          *(uint *)(param_1 + 2) = uVar7 - 1;
          iVar9 = *(int *)(param_1 + 4);
          *(uint *)(param_1 + 4) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
            FUN_1473a0f3a(local_80,iVar9);
          }
          *(longlong *)(*local_80 + (longlong)iVar9 * 8) = lVar3;
        }
        iVar10 = iVar10 + 1;
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar4);
    }
  }
  else {
    (*DAT_14ca78fe0)(*(undefined8 *)param_1[10],*param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14318f6d4 FUN_14318f6d4 body=69 status=ok
// SIG undefined FUN_14318f6d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f6d4(void)

{
  _DAT_14ca77b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b80,1);
  return;
}



// FUNCTION 14318f719 FUN_14318f719 body=69 status=ok
// SIG undefined FUN_14318f719(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318f719(void)

{
  _DAT_14ca77b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318f75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77b98,1);
  return;
}



// FUNCTION 14318f75e FUN_14318f75e body=231 status=ok
// SIG undefined FUN_14318f75e(void)

void FUN_14318f75e(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = *(uint *)(lVar2 + 0x17c);
  if (uVar6 != 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar5 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar4 = (byte)uVar5 & 0x1f;
      uVar6 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar6;
      if (uVar6 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
    } while (uVar6 != 0);
  }
  FUN_147399e0e(param_1);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170));
  (*DAT_14ca79058)(uVar3,*(undefined8 *)(param_2 + 0x50),param_3 + *(int *)(param_2 + 0x60),1,0x10);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14318f846 FUN_14318f846 body=282 status=ok
// SIG undefined FUN_14318f846(void)

void FUN_14318f846(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = *(uint *)(lVar2 + 0x17c);
  if (uVar6 != 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar5 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar4 = (byte)uVar5 & 0x1f;
      uVar6 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar6;
      if (uVar6 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
    } while (uVar6 != 0);
  }
  FUN_147399e0e(param_1);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170));
  (*DAT_14ca79040)(uVar3,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x60),
                   *(int *)(param_2 + 0x24) == 4);
  (*DAT_14ca79060)(uVar3,*(undefined8 *)(param_3 + 0x50),
                   (ulonglong)*(uint *)(param_3 + 0x60) + (longlong)param_4 * 0x14,1,0x14);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14318f960 FUN_14318f960 body=290 status=ok
// SIG undefined FUN_14318f960(void)

void FUN_14318f960(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar7 = *(uint *)(lVar2 + 0x17c);
  if (uVar7 != 0) {
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      piVar1 = (int *)(lVar2 + 0x248 + (ulonglong)uVar6 * 0x18);
      *piVar1 = *piVar1 + 1;
      bVar4 = (byte)uVar6 & 0x1f;
      uVar7 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar7;
      if (uVar7 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
  }
  FUN_147399e0e(param_1);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170));
  (*DAT_14ca79040)(uVar3,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x60),
                   *(int *)(param_2 + 0x24) == 4);
  iVar5 = -param_5;
  if (-param_5 < 0) {
    iVar5 = param_5;
  }
  (*DAT_14ca79060)(uVar3,*(undefined8 *)(param_3 + 0x50),
                   (param_4 & 0xffffffff) + (ulonglong)*(uint *)(param_3 + 0x60),iVar5,0x14);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14318fa82 FUN_14318fa82 body=69 status=ok
// SIG undefined FUN_14318fa82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318fa82(void)

{
  _DAT_14ca77ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318fac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ba8,1);
  return;
}



// FUNCTION 14318fac8 FUN_14318fac8 body=132 status=ok
// SIG undefined FUN_14318fac8(void)

void FUN_14318fac8(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  (*DAT_14ca79208)(**(undefined8 **)(DAT_14ca79348 + 0x48),*(undefined8 *)(param_1 + 0x20),0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 6;
  LOCK();
  DAT_14ca77b18 = DAT_14ca77b18 - *(int *)(param_1 + 0x84);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014318fb49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  return;
}



// FUNCTION 14318fb60 FUN_14318fb60 body=107 status=ok
// SIG undefined FUN_14318fb60(void)

void FUN_14318fb60(longlong param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
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
  longlong lVar13;
  
  lVar13 = *(longlong *)(param_1 + 0x10);
  if ((char)*(byte *)(lVar13 + 0x6b) < '\0' && (*(byte *)(lVar13 + 0x6b) & 0x7f) != 0) {
    FUN_1473a73fe(*(longlong *)(lVar13 + 0x40) + 0x3d8,lVar13 + 0x50,0);
    lVar13 = *(longlong *)(param_1 + 0x10);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(lVar13 + 0x74) = uVar10;
  *(undefined4 *)(lVar13 + 0x78) = uVar11;
  *(undefined4 *)(lVar13 + 0x7c) = uVar12;
  *(undefined4 *)(lVar13 + 0x60) = uVar6;
  *(undefined4 *)(lVar13 + 100) = uVar7;
  *(undefined4 *)(lVar13 + 0x68) = uVar8;
  *(undefined4 *)(lVar13 + 0x6c) = uVar9;
  *(undefined4 *)(lVar13 + 0x50) = uVar2;
  *(undefined4 *)(lVar13 + 0x54) = uVar3;
  *(undefined4 *)(lVar13 + 0x58) = uVar4;
  *(undefined4 *)(lVar13 + 0x5c) = uVar5;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6b);
  *pbVar1 = *pbVar1 | 0x80;
                    /* WARNING: Could not recover jumptable at 0x00014318fbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + 8))
            (*(longlong *)(param_1 + 0x10) + 0x30);
  return;
}



// FUNCTION 14318fbcc FUN_14318fbcc body=377 status=ok
// SIG undefined FUN_14318fbcc(void)

void FUN_14318fbcc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  local_38 = lVar1;
  FUN_1473a80a4(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x10));
  if ((int)param_1[3] == 1) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x150);
    if (*(longlong *)(lVar2 + 0x80) != 0) {
      FUN_14739859c(lVar2,0,0);
    }
    lVar2 = *(longlong *)(lVar2 + 0x78);
    uVar3 = *(undefined8 *)(lVar2 + 0x88);
    local_98 = &local_50;
    local_50 = 0;
    local_40 = (ulonglong)*(uint *)((longlong)param_1 + 0x14);
    local_48 = (ulonglong)(uint)(*(int *)(*param_1 + 0x60) + (int)param_1[2]);
    (*DAT_14ca793f0)(uVar3,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(*param_1 + 0x50),1);
    local_90 = &local_68;
    local_58 = 0x1800000001000;
    local_68 = 0x2e;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,1);
    (*DAT_14ca79290)(uVar3,0x1000,0x10000,0);
    FUN_1473a2c42(*(longlong *)(*param_1 + 0x40) + 0x5d0,lVar2,&local_38);
    (**(code **)(*(longlong *)(*param_1 + 0x30) + 8))(*param_1 + 0x30);
  }
  else if ((int)param_1[3] == 0) {
    FUN_1473a2c42(*(longlong *)(*param_1 + 0x40) + 0x5d0,0,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318fd50 FUN_14318fd50 body=3046 status=ok
// SIG undefined FUN_14318fd50(void)

void FUN_14318fd50(PSRWLOCK param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  PSRWLOCK SRWLock;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  ulonglong uVar18;
  code *pcVar19;
  undefined2 *puVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  PSRWLOCK local_188;
  undefined1 local_179;
  longlong *local_178;
  ulonglong uStack_170;
  code *local_168;
  int local_160;
  longlong *local_158;
  int local_150;
  code *local_148;
  int local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined2 *local_120;
  int local_118;
  longlong local_108;
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  AcquireSRWLockExclusive(param_1);
  FUN_143190937(&local_148);
  FUN_143190af7();
  local_88 = local_148;
  local_80 = local_140 + -1;
  if (local_140 == 0) {
    local_80 = 0;
  }
  local_78 = local_158;
  local_70 = local_150 + -1;
  if (local_150 == 0) {
    local_70 = 0;
  }
  FUN_140bee87a(&local_168,&local_88,2);
  plVar11 = (longlong *)FUN_1400dbadc();
  plVar12 = (longlong *)*plVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)FUN_140e92164();
    *plVar11 = (longlong)plVar12;
  }
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  plVar11 = (longlong *)FUN_14054d1d4();
  pcVar19 = local_148;
  lVar24 = (longlong)local_140;
  local_88 = (code *)0x0;
  local_80 = local_140;
  FUN_1446dd670(&local_88,local_140 + (uint)(lVar24 == 0) + 2,0);
  if (lVar24 != 0) {
    memcpy(local_88,pcVar19,lVar24 * 2);
  }
  FUN_1401aebe8(&local_88,&DAT_149e060b2,1);
  pcVar19 = local_88;
  if (local_80 == 0) {
    pcVar19 = (code *)&DAT_149dfb77a;
  }
  local_198 = 1;
  local_188 = param_1;
  (**(code **)(*plVar11 + 0x78))(plVar11,&local_178,pcVar19);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar18 = 0;
  if ((longlong)(int)uStack_170 != 0) {
    plVar13 = local_178 + (longlong)(int)uStack_170 * 2;
    plVar11 = local_178;
    do {
      iVar10 = local_140;
      pcVar19 = local_148;
      iVar9 = (int)plVar11[1] + -1;
      if ((int)plVar11[1] == 0) {
        iVar9 = 0;
      }
      lVar24 = (longlong)local_140;
      iVar9 = iVar9 + 1 + (uint)(lVar24 == 0);
      local_88 = (code *)0x0;
      local_80 = local_140;
      if (iVar9 == 0 && local_140 == 0) {
        local_7c = 0;
      }
      else {
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9 + local_140);
        }
        FUN_1446dd670(&local_88,iVar9 + local_140,0);
        if (iVar10 != 0) {
          memcpy(local_88,pcVar19,lVar24 * 2);
        }
      }
      FUN_1401aebe8(&local_88,*plVar11);
      pcVar19 = (code *)&DAT_149dfb77a;
      if (local_80 != 0) {
        pcVar19 = local_88;
      }
      bVar8 = (**(code **)(*plVar12 + 0x108))(plVar12,pcVar19);
      iVar9 = (int)plVar11[1];
      if (iVar9 == local_150) {
        bVar26 = true;
        if (1 < iVar9) {
          lVar24 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*plVar11 + lVar24);
            uVar17 = (uint)uVar3;
            uVar4 = *(ushort *)((longlong)local_158 + lVar24);
            uVar23 = (uint)uVar4;
            if (uVar3 != uVar4) {
              if ((uVar4 | uVar3) < 0x80) {
                uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14318ffa6;
              }
              iVar9 = uVar17 - uVar23;
              goto LAB_14318ffdf;
            }
            if (uVar3 == 0) break;
LAB_14318ffa6:
            lVar24 = lVar24 + 2;
          }
          iVar9 = 0;
LAB_14318ffdf:
          bVar26 = iVar9 == 0;
        }
      }
      else {
        bVar26 = local_150 + iVar9 == 1;
      }
      if ((bVar8 & bVar26) == 0) {
        pcVar19 = (code *)&DAT_149dfb77a;
        if (local_80 != 0) {
          pcVar19 = local_88;
        }
        lVar24 = 0x88;
        if (bVar8 != 0) {
          lVar24 = 0x1d0;
        }
        (**(code **)(*plVar12 + lVar24))(plVar12,pcVar19);
      }
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar13);
    uVar18 = uStack_170 & 0xffffffff;
  }
  uVar7 = uStack_170;
  FUN_1447a1747(local_178,uVar18);
  uVar18 = uStack_170 >> 0x20;
  uStack_170 = uStack_170 & 0xffffffff00000000;
  if (((longlong)uVar7 < 0) && ((int)uVar18 != 0)) {
    FUN_1408be2c4(&local_178,0);
  }
  plVar11 = (longlong *)FUN_14054d1d4();
  pcVar19 = local_168;
  lVar24 = (longlong)local_160;
  local_88 = (code *)0x0;
  local_80 = local_160;
  FUN_1446dd670(&local_88,local_160 + (uint)(lVar24 == 0) + 2,0);
  if (lVar24 != 0) {
    memcpy(local_88,pcVar19,lVar24 * 2);
  }
  FUN_1401aebe8(&local_88,&DAT_149e060b2,1);
  pcVar19 = local_88;
  if (local_80 == 0) {
    pcVar19 = (code *)&DAT_149dfb77a;
  }
  local_198 = 0;
  (**(code **)(*plVar11 + 0x78))(plVar11,&local_178,pcVar19,1);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar11 = local_178;
  lVar24 = (longlong)(int)uStack_170;
  if (lVar24 != 0) {
    lVar25 = 0;
    do {
      FUN_14739e8ec();
      FUN_140056680(&local_88,L"VulkanPSOChunks");
      pcVar19 = local_88;
      iVar9 = *(int *)((longlong)plVar11 + lVar25 + 8);
      if (iVar9 == local_80) {
        bVar26 = true;
        if (1 < iVar9) {
          iVar9 = wcscmp(*(wchar_t **)((longlong)plVar11 + lVar25),(wchar_t *)local_88);
          bVar26 = iVar9 == 0;
        }
      }
      else {
        bVar26 = local_80 + iVar9 == 1;
      }
      if (pcVar19 != (code *)0x0) {
        FUN_1400020a8(pcVar19);
      }
      if (!bVar26) {
        local_88 = local_168;
        local_80 = local_160 + -1;
        if (local_160 == 0) {
          local_80 = 0;
        }
        local_78 = *(longlong **)((longlong)plVar11 + lVar25);
        iVar9 = *(int *)((longlong)plVar11 + lVar25 + 8);
        local_70 = iVar9 + -1;
        if (iVar9 == 0) {
          local_70 = 0;
        }
        FUN_140bee87a(&local_120,&local_88,2);
        puVar20 = &DAT_149dfb77a;
        if (local_118 != 0) {
          puVar20 = local_120;
        }
        (**(code **)(*plVar12 + 0x88))(plVar12,puVar20);
        if (local_120 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar25 = lVar25 + 0x10;
    } while (lVar24 * 0x10 != lVar25);
  }
  local_179 = 0;
  FUN_14739e8ec();
  SRWLock = local_188;
  local_c8 = thunk_FUN_14739e9f6;
  local_b8 = (longlong *)0x0;
  local_a8 = &PTR_LAB_14a357fb0;
  uStack_a0 = local_188;
  local_98 = &local_179;
  FUN_14739f468();
  puVar20 = DAT_14ca77c08;
  local_f8 = (undefined2 *)0x0;
  lVar24 = (longlong)DAT_14ca77c10;
  local_f0 = DAT_14ca77c10;
  if (lVar24 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,DAT_14ca77c10,0);
    memcpy(local_f8,puVar20,lVar24 * 2);
  }
  plVar11 = (longlong *)FUN_1400dbadc();
  plVar12 = (longlong *)*plVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)FUN_140e92164();
    *plVar11 = (longlong)plVar12;
  }
  puVar20 = local_f8;
  if (local_f0 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar12 + 0x120))(plVar12,&local_120,puVar20);
  if ((longlong)DAT_14c760c18 * 0x100000 <= local_108) {
    FUN_14739f468();
    cVar21 = '\x10';
    cVar22 = '\0';
    goto LAB_143190647;
  }
  plVar12 = (longlong *)FUN_14054d1d4();
  puVar20 = local_f8;
  if (local_f0 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x18))(plVar12,puVar20,4);
  local_138 = 0;
  local_128 = 0;
  cVar22 = '\0';
  local_130 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    local_88 = thunk_FUN_14739e9f6;
    local_78 = (longlong *)0x0;
    local_b8 = (longlong *)0x0;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    local_c8 = (code *)0x0;
    FUN_14739f468();
    puVar20 = DAT_14ca77c08;
    local_d8 = (undefined2 *)0x0;
    lVar24 = (longlong)DAT_14ca77c10;
    local_d0 = DAT_14ca77c10;
    if (lVar24 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,DAT_14ca77c10,0);
      memcpy(local_d8,puVar20,lVar24 * 2);
    }
    puVar5 = (ulonglong *)plVar12[1];
    piVar1 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar1) {
      if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar12 + 0x170))(plVar12,&local_dc,4);
      }
      else {
        FUN_14572512c(plVar12,&local_dc);
      }
    }
    else {
      local_dc = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar1;
    }
    if (local_dc == 5) {
      puVar5 = (ulonglong *)plVar12[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar12 + 0x170))(plVar12,&local_e0,4);
        }
        else {
          FUN_14572512c(plVar12,&local_e0);
        }
      }
      else {
        local_e0 = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar1;
      }
      if (local_e0 != 3) goto LAB_1431905dc;
      puVar5 = (ulonglong *)plVar12[1];
      piVar1 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar1) {
        if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar12 + 0x170))(plVar12,&local_e4,4);
        }
        else {
          FUN_14572512c(plVar12,&local_e4);
        }
      }
      else {
        local_e4 = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar1;
      }
      puVar5 = (ulonglong *)plVar12[1];
      puVar2 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)plVar12 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar12 + 0x170))(plVar12,&local_e8,4);
        }
        else {
          FUN_14572512c(plVar12,&local_e8);
        }
      }
      else {
        local_e8 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      iVar9 = local_e4;
      if (local_e8 == 0) goto LAB_1431905dc;
      cVar22 = '\0';
      iVar10 = (*(code *)PTR_FUN_14c75b148)(&DAT_14c760c10,4,0);
      if (iVar9 == iVar10) {
        if ((DAT_14c760c20 & 1) != 0) {
          plVar13 = (longlong *)FUN_1400dbadc();
          plVar11 = (longlong *)*plVar13;
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)FUN_140e92164();
            *plVar13 = (longlong)plVar11;
          }
          puVar20 = local_d8;
          if (local_d0 == 0) {
            puVar20 = &DAT_149dfb77a;
          }
          puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x188))(plVar11,puVar20);
          puVar14 = DAT_14ca77be0;
          if (DAT_14ca77be0 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)*DAT_14ca77be0;
            DAT_14ca77be0 = puVar15;
            (*(code *)*puVar6)(puVar14,1);
            puVar15 = DAT_14ca77be0;
          }
          DAT_14ca77be0 = puVar15;
          FUN_14739f7c4(local_e8);
        }
        lVar24 = (**(code **)(*plVar12 + 0x28))(plVar12);
        cVar22 = '\x01';
        if (lVar24 < (longlong)(ulonglong)local_e8) {
          do {
            pcVar19 = local_88;
            plVar11 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar11 = (longlong *)&local_68;
            }
            uVar16 = (**(code **)(*plVar11 + 8))();
            (*pcVar19)(uVar16,&local_138);
            lVar24 = (**(code **)(*plVar12 + 0x28))(plVar12);
          } while (lVar24 < (longlong)(ulonglong)local_e8);
        }
      }
    }
    else {
LAB_1431905dc:
      cVar22 = '\0';
    }
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (code *)0x0) {
      plVar12 = (longlong *)&local_68;
      if (local_78 != (longlong *)0x0) {
        plVar12 = local_78;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  FUN_14739f78c(local_128);
  if (local_130 != (longlong *)0x0) {
    (**(code **)*local_130)(local_130,1);
  }
  FUN_14739f468();
  cVar21 = cVar22 * '\b' + '\x10';
LAB_143190647:
  plVar12 = (longlong *)FUN_14054d1d4();
  puVar20 = DAT_14ca77c08;
  if (DAT_14ca77c10 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,puVar20,cVar21);
  puVar14 = DAT_14ca77bf8;
  if (DAT_14ca77bf8 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*DAT_14ca77bf8;
    DAT_14ca77bf8 = plVar12;
    (*(code *)*puVar15)(puVar14,1);
    plVar12 = DAT_14ca77bf8;
  }
  DAT_14ca77bf8 = plVar12;
  plVar12 = DAT_14ca77bf8;
  if (cVar22 == '\0' && DAT_14ca77bf8 != (longlong *)0x0) {
    FUN_14739f5fc(DAT_14ca77bf8,0);
    (**(code **)(*DAT_14ca77bf8 + 0x1f0))();
  }
  puVar14 = DAT_14ca77be0;
  if (((DAT_14c760c20 & 1) != 0) && (DAT_14ca77be0 == (undefined8 *)0x0)) {
    plVar13 = (longlong *)FUN_1400dbadc();
    plVar11 = (longlong *)*plVar13;
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)FUN_140e92164();
      *plVar13 = (longlong)plVar11;
    }
    puVar20 = local_f8;
    if (local_f0 == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar11 + 0x188))(plVar11,puVar20);
    puVar15 = DAT_14ca77be0;
    if (DAT_14ca77be0 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*DAT_14ca77be0;
      DAT_14ca77be0 = puVar14;
      (*(code *)*puVar6)(puVar15,1);
      puVar14 = DAT_14ca77be0;
    }
  }
  DAT_14ca77be0 = puVar14;
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    plVar11 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar11 = local_b8;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (plVar12 == (longlong *)0x0) {
    DAT_14ca77a98 = 0;
  }
  FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (code *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143190937 FUN_143190937 body=446 status=ok
// SIG undefined FUN_143190937(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143190937(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77bc0) {
    FUN_144b3d300(&DAT_14ca77bc0);
    if (DAT_14ca77bc0 == -1) {
      puVar5 = (undefined8 *)FUN_14047ac8c();
      iVar1 = *(int *)(puVar5 + 1);
      lVar7 = (longlong)iVar1;
      local_38 = (void *)0x0;
      pvVar2 = (void *)*puVar5;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      FUN_1446dd670(&local_38,(uint)(lVar7 == 0) + iVar1 + 9,0);
      if (lVar7 != 0) {
        memcpy(local_38,pvVar2,lVar7 * 2);
      }
      FUN_1401aebe8(&local_38,L"RHICache",8);
      iVar1 = (int)local_30;
      iVar4 = ((int)local_30 == 0) + 7;
      DAT_14ca77bb0 = local_38;
      local_38 = (void *)0x0;
      DAT_14ca77bb8 = (int)local_30;
      iVar3 = local_30._4_4_;
      _DAT_14ca77bbc = local_30._4_4_;
      local_30 = 0;
      iVar6 = iVar4 + iVar1;
      if (iVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (iVar3 < iVar6) {
        FUN_1446f8c06(&DAT_14ca77bb0);
      }
      FUN_1401aebe8(&DAT_14ca77bb0,&DAT_14a3588aa,6);
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143190cea);
      _Init_thread_footer(&DAT_14ca77bc0);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14ca77bb8;
  pvVar2 = DAT_14ca77bb0;
  lVar7 = (longlong)DAT_14ca77bb8;
  *(int *)(param_1 + 1) = DAT_14ca77bb8;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,lVar7 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143190af7 FUN_143190af7 body=498 status=ok
// SIG undefined FUN_143190af7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143190af7(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  void *_Src;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77bd8) {
    FUN_144b3d300(&DAT_14ca77bd8);
    if (DAT_14ca77bd8 == -1) {
      DAT_14ca77bc8 = (void *)0x0;
      _DAT_14ca77bd0 = 0;
      atexit((_func_5014 *)&LAB_143190cfb);
      _Init_thread_footer(&DAT_14ca77bd8);
    }
  }
  iVar5 = DAT_14ca77bd0;
  if (DAT_14ca77bd0 < 2) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77af0);
    if (DAT_14ca77bd0 < 2) {
      local_40 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)DAT_14ca85550 * 0x3c);
      FUN_1400021e4(&local_40,&local_38);
      iVar5 = local_30 + -1;
      if (local_30 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(&DAT_14ca77bc8,local_38,iVar5);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      lVar3 = *(longlong *)(DAT_14ca79348 + 0x48);
      uVar1 = *(undefined4 *)(lVar3 + 0xaf8);
      uVar2 = *(undefined4 *)(lVar3 + 0xafc);
      uVar4 = (*(code *)PTR_FUN_14c75b148)(lVar3 + 0xc04,0x10,0);
      local_48 = uVar2;
      FUN_140002266(&local_38,L".%x.%x.%x",uVar4,uVar1);
      iVar5 = local_30 + -1;
      if (local_30 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(&DAT_14ca77bc8,local_38,iVar5);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77af0);
    iVar5 = DAT_14ca77bd0;
    *param_1 = 0;
    _Src = DAT_14ca77bc8;
    *(int *)(param_1 + 1) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_143190c87;
    }
  }
  else {
    *param_1 = 0;
    _Src = DAT_14ca77bc8;
    *(int *)(param_1 + 1) = iVar5;
  }
  FUN_1446dd670(param_1,iVar5,0);
  memcpy((void *)*param_1,_Src,(longlong)iVar5 * 2);
LAB_143190c87:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143190d12 FUN_143190d12 body=125 status=ok
// SIG undefined FUN_143190d12(void)

void FUN_143190d12(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  uVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_14739ec40(param_1,param_2,param_3,0);
  *(undefined4 *)(param_1 + 0xc0) = 6;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000143190d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  return;
}



// FUNCTION 143190d90 FUN_143190d90 body=217 status=ok
// SIG undefined FUN_143190d90(void)

void FUN_143190d90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xa0) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x98);
  }
  FUN_140002266(local_30,L"FVulkanChunkedPipelineCacheManager: CreateVKCacheInternal %s ",puVar2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0x11;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  local_38 = *param_2;
  local_40 = (longlong)*(int *)(param_2 + 1);
  iVar1 = (*DAT_14ca79210)(**(undefined8 **)(DAT_14ca79348 + 0x48),&local_58,0,param_1 + 0x20);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreatePipelineCache(UE::Vulkan::GetVulkanDeviceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheObj)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanChunkedPipelineCache.cpp",0x2ed);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143190e7c FUN_143190e7c body=922 status=ok
// SIG undefined FUN_143190e7c(void)

undefined4 FUN_143190e7c(longlong param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  int iVar1;
  code *pcVar2;
  DWORD DVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined4 local_b4;
  longlong local_b0 [2];
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  PSRWLOCK local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  DVar3 = GetCurrentThreadId();
  FUN_140002266(local_70,
                L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO  tot %d ",
                DVar3);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  LOCK();
  *(ulonglong *)(param_1 + 0xb0) = (ulonglong)DAT_14c75b13c;
  UNLOCK();
  SRWLock = (PSRWLOCK)(param_1 + 0x10);
  AcquireSRWLockShared(SRWLock);
  SRWLock_00 = (PSRWLOCK)(param_1 + 0x18);
  AcquireSRWLockShared(SRWLock_00);
  iVar1 = *(int *)(param_1 + 0xc0);
  ReleaseSRWLockShared(SRWLock_00);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 == 6) {
    AcquireSRWLockExclusive(SRWLock);
    AcquireSRWLockExclusive(SRWLock_00);
    if (*(int *)(param_1 + 0xc0) == 6) {
      FUN_14739ff6e(param_1);
    }
    ReleaseSRWLockExclusive(SRWLock_00);
    ReleaseSRWLockExclusive(SRWLock);
  }
  DVar3 = GetCurrentThreadId();
  FUN_140002266(local_80,
                L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO(lock  tot %d "
                ,DVar3);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x4b8);
  if (param_3 == 0) {
    AcquireSRWLockShared(SRWLock_00);
    ReleaseSRWLockShared(SRWLock_00);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    local_90 = 1;
    pcVar2 = (code *)*param_4;
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    local_a0 = param_2;
    local_88 = SRWLock;
    uVar8 = (**(code **)(*plVar9 + 8))();
    uVar4 = (*pcVar2)(uVar8);
  }
  else {
    uVar4 = 0;
    if (param_3 == 2) {
      local_98 = *(undefined8 *)(param_1 + 0x20);
      local_90 = 1;
      pcVar2 = (code *)*param_4;
      plVar9 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_4[2];
      }
      local_a0 = param_2;
      local_88 = SRWLock;
      uVar7 = (**(code **)(*plVar9 + 8))();
      uVar4 = (*pcVar2)(uVar7,&local_a0);
      goto LAB_1431911aa;
    }
  }
  AcquireSRWLockExclusive(SRWLock_00);
  uVar5 = FUN_14493c560();
  if (uVar5 == 0) {
    uVar6 = 0;
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    uVar11 = (ulonglong)(uVar5 >> 0xe);
    uVar6 = uVar5 & 0x3fff;
    lVar10 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar11 * 8);
  }
  *(undefined8 *)(lVar10 + 8) = uVar7;
  local_b4 = uVar4;
  do {
    local_a0 = *(ulonglong *)(param_1 + 0x40);
    local_c0 = (local_a0 & 0xfffffffffc000000) + 0x4000000;
    if (local_c0 >> 0x1a < local_a0 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar4 = local_b4;
    local_c0 = local_c0 & 0xfffffffffc000000 | (ulonglong)uVar5;
    if (uVar5 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(&DAT_14c833b00 + uVar11 * 8) + (ulonglong)(uVar6 * 0x18);
    }
    *(uint *)(lVar10 + 0x10) = (uint)local_a0 & 0x3ffffff;
    LOCK();
    bVar12 = local_a0 == *(ulonglong *)(param_1 + 0x40);
    if (bVar12) {
      *(ulonglong *)(param_1 + 0x40) = local_c0;
    }
    UNLOCK();
  } while (!bVar12);
  LOCK();
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  UNLOCK();
  if (param_3 == 0) {
    DVar3 = GetCurrentThreadId();
    FUN_140002266(local_b0,
                  L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO AddTo tot %d "
                  ,DVar3);
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    LOCK();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    UNLOCK();
    LOCK();
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -1;
    UNLOCK();
    if ((*(int *)(param_1 + 0xc0) == 3) && (*(longlong *)(param_1 + 0xb8) == 0)) {
      FUN_14739feac(param_1);
    }
  }
  ReleaseSRWLockExclusive(SRWLock_00);
LAB_1431911aa:
  if (*param_4 != 0) {
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143191218 FUN_143191218 body=300 status=ok
// SIG undefined FUN_143191218(void)

void FUN_143191218(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  local_50 = 0x11;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  iVar1 = (*DAT_14ca79210)(**(undefined8 **)(DAT_14ca79348 + 0x48),&local_50,0,param_1 + 0x20);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreatePipelineCache(UE::Vulkan::GetVulkanDeviceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheObj)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanChunkedPipelineCache.cpp",0x1d2);
  }
  *(undefined4 *)(param_1 + 0xc0) = 2;
  FUN_14739fdee(&local_60);
  if ((longlong *)(param_1 + 0x98) == &local_60) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x98) = local_60;
    local_60 = 0;
    *(undefined4 *)(param_1 + 0xa0) = local_58;
    *(undefined4 *)(param_1 + 0xa4) = local_54;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143191346 FUN_143191346 body=162 status=ok
// SIG undefined FUN_143191346(void)

void FUN_143191346(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  SRWLock = (PSRWLOCK)(param_1 + 0x18);
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 1;
  UNLOCK();
  iVar1 = *(int *)(param_1 + 0x90);
  lVar2 = *(longlong *)(param_1 + 0xb8);
  uVar3 = (ulonglong)DAT_14c760c10;
  ReleaseSRWLockShared(SRWLock);
  if (uVar3 <= (ulonglong)(iVar1 + lVar2)) {
    AcquireSRWLockExclusive(SRWLock);
    if ((ulonglong)(longlong)DAT_14c760c10 <=
        (ulonglong)((longlong)*(int *)(param_1 + 0x90) + *(longlong *)(param_1 + 0xb8))) {
      *(undefined4 *)(param_1 + 0xc0) = 3;
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431913e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return;
}



// FUNCTION 1431913f6 FUN_1431913f6 body=760 status=ok
// SIG undefined FUN_1431913f6(void)

void FUN_1431913f6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70 [2];
  longlong local_60 [2];
  ulonglong local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xa0) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x98);
  }
  FUN_140002266(local_38,L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal TOT %s ",puVar4)
  ;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x98);
  }
  FUN_140002266(local_60,L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal get vk data %s "
                ,puVar4);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  (*DAT_14ca79220)(**(undefined8 **)(DAT_14ca79348 + 0x48),*(undefined8 *)(param_1 + 0x20),&local_50
                   ,0);
  FUN_140393c76(&local_48,local_50 & 0xffffffff,1);
  (*DAT_14ca79220)(**(undefined8 **)(DAT_14ca79348 + 0x48),*(undefined8 *)(param_1 + 0x20),&local_50
                   ,local_48);
  *(int *)(param_1 + 0x84) = (int)local_50;
  if (*(int *)(param_1 + 0xa0) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x98);
  }
  FUN_140002266(local_70,
                L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal serialize %s %zu ",puVar4
               );
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar3;
  local_74 = *(undefined4 *)(param_1 + 0x90);
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_74,4);
    }
    else {
      FUN_14572512c(param_2,&local_74);
    }
  }
  else {
    local_74 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_78 = (undefined4)uStack_40;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
    }
    else {
      FUN_14572512c(param_2,&local_78);
    }
  }
  else {
    local_78 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  (**(code **)(*param_2 + 0x170))(param_2,local_48,local_78);
  local_88 = 0;
  uStack_80 = 0;
  FUN_1473a01e4(param_1 + 0x40,&local_88);
  local_8c = (int)uStack_80;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_8c,4);
    }
    else {
      FUN_14572512c(param_2,&local_8c);
    }
  }
  else {
    local_8c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  (**(code **)(*param_2 + 0x170))(param_2,local_88,(longlong)(int)uStack_80 << 3);
  *(undefined4 *)(param_1 + 0xc0) = 5;
  LOCK();
  DAT_14ca77b18 = DAT_14ca77b18 + *(int *)(param_1 + 0x84);
  UNLOCK();
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431916f0 FUN_1431916f0 body=450 status=ok
// SIG undefined FUN_1431916f0(void)

void FUN_1431916f0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14319180b:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_143191848:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_143191746;
LAB_14319173b:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_143191746:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000143191772;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1431917c8:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_143191848;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14319180b;
code_r0x000143191772:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1431917c8;
    }
  }
  goto LAB_14319173b;
}



// FUNCTION 1431918b2 FUN_1431918b2 body=1198 status=ok
// SIG undefined FUN_1431918b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431918b2(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14ca779a4);
  if (cVar1 == '\0') {
    _DAT_14ca779a4 = 0;
    uRam000000014ca779ac = 0;
  }
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  FUN_141471170(&DAT_14ca779b8,L"r.Vulkan.UseMemoryBarrierOpt",&DAT_14c760c00,
                L"Simplify buffer barriers and image barriers without layout transitions to a memory barrier.\n 0: Do not collapse to a single memory barrier, useful for tracking single resource transitions in external tools\n 1: Collapse to a memory barrier when appropriate (default)"
               );
  atexit(FUN_14318dc64);
  local_48 = 0;
  FUN_141471170(&DAT_14ca779c8,L"r.Vulkan.AutoCorrectExpectedLayouts",&DAT_14c760c04,
                L"Will use layout tracking to correct mismatched layouts when setting expected layouts.  \nThis is unsafe for multi-threaded command buffer generations\n 0: Do not correct layouts.\n 1: Correct the layouts using layout tracking. (default)"
               );
  atexit(FUN_14318dca9);
  local_48 = 0;
  FUN_141471170(&DAT_14ca779d8,L"r.Vulkan.AutoCorrectUnknownLayouts",&DAT_14c760c08,
                L"Will use layout tracking to correct unknown layouts.  \nThis is unsafe for multi-threaded command buffer generations\n 0: Do not correct layouts.\n 1: Correct the layouts using layout tracking. (default)"
               );
  atexit(FUN_14318dcee);
  local_48 = 0;
  FUN_141471170(&DAT_14ca779e8,L"r.Vulkan.MaxBarriersPerBatch",&DAT_14c760c0c,
                L"Will limit the number of barriers sent per batch\n <=0: Do not limit (default)\n >0: Limit to the specified number\n"
               );
  atexit(FUN_14318dd33);
  DAT_14ca77a18 = 0;
  DAT_14ca77a20 = 0;
  DAT_14ca779f8 = 0;
  _DAT_14ca77a00 = 0;
  _DAT_14ca77a24 = 0xffffffff00000080;
  DAT_14ca77a2c = 0;
  DAT_14ca77a38 = 0;
  DAT_14ca77a40 = 0;
  atexit(FUN_14318ee18);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77a48,4000);
  atexit((_func_5014 *)&LAB_14318ee41);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca77a78,L"r.Vulkan.ForceStagingBufferOnLock",&DAT_14ca77a70,
                L"When nonzero, non-volatile buffer locks will always use staging buffers. Useful for debugging.\ndefault: 0"
               );
  atexit(FUN_14318ee4f);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca77a88,L"r.Vulkan.UseChunkedPSOCache",&DAT_14ca77a98,&DAT_149e01f72);
  atexit(FUN_14318ef5c);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca77aa0,L"r.Vulkan.ChunkedPSOCache.MaxSingleCachePSOCount",&DAT_14c760c10,
                L"The target PSO count for an individual PSO cache.\nexisting caches with different PSO counts are discarded at startup.\n(default) 20"
               );
  atexit(FUN_14318efa1);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca77ab0,L"r.Vulkan.ChunkedPSOCache.TargetResidentCacheSizeMb",&DAT_14c760c14,
                L"A target resident cache size in MB, if the combined memory usage of all the currently loaded cache chunks is above this threshold\nthe least recently used chunks will be considered for eviction.\n(default) 40"
               );
  atexit(FUN_14318efe6);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca77ac0,L"r.Vulkan.ChunkedPSOCache.MaxTotalCacheSizeMb",&DAT_14c760c18,
                L"At startup, if the entire cache is above this threshold the cache will be deleted\nand rebuilt during the subsequent run.\n(default) 300\n0 to disable cache size limit, note that the cache will grow indefinitely."
               );
  atexit(FUN_14318f02b);
  local_48 = 0x24;
  FUN_14153156c(&DAT_14ca77ad0,L"r.Vulkan.MemoryMapChunkedPSOCache",&DAT_14c760c20,
                L"If true enabled memory mapping of the chunked vulkan PSO cache. (default)\n\n");
  atexit(FUN_14318f070);
  local_48 = 0x24;
  FUN_141471170(&DAT_14ca77ae0,L"r.Vulkan.ChunkedPSOCache.ChunkEvictTime",&DAT_14c760c1c,
                L"Time in seconds for a cache chunk to be unused before it can be evicted from ram.\n(default) 60"
               );
  atexit(FUN_14318f0b5);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77af0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77af0,4000);
  atexit((_func_5014 *)&LAB_14318f0fa);
  DAT_14ca77b20 = 0;
  atexit(FUN_14318f108);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77b28,L"r.Vulkan.UseSingleQueue",&DAT_14ca77b38,
                L"Forces using the same queue for uploads and graphics.\n 0: Uses multiple queues(default)\n 1: Always uses the gfx queue for submissions"
               );
  atexit(FUN_14318f134);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77b40,L"r.Vulkan.ProfileCmdBuffers",&DAT_14ca77b3c,
                L"Insert GPU timing queries in every cmd buffer\n");
  atexit(FUN_14318f179);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77b50,L"r.Vulkan.UseCmdBufferTimingForGPUTime",&DAT_14ca77c50,
                L"Use the profile command buffers for GPU time\n");
  atexit(FUN_14318f1be);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77b60,L"r.Vulkan.UploadCmdBufferSemaphore",&DAT_14ca77b70,
                L"Whether command buffers for uploads and graphics can be executed simultaneously.\n 0: The buffers are submitted without any synch(default)\n 1: Graphics buffers will not overlap with the upload buffers"
               );
  atexit(FUN_14318f203);
  local_40 = 0;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14ca77b78,L"r.Vulkan.SubmitOnDispatch",&local_40,
                L"0 to not do anything special on dispatch(default)\n1 to submit the cmd buffer after each dispatch"
               );
  atexit(FUN_14318f6d4);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77b90,L"r.Vulkan.SubmitAfterEveryEndRenderPass",&DAT_14ca77c4c,
                L"Forces a submit after every end render pass.\n 0: Don\'t(default)\n 1: Enable submitting"
               );
  atexit(FUN_14318f719);
  local_48 = 0;
  FUN_14627302a(&DAT_14ca77ba0,L"r.Vulkan.UniqueValidationMessages",1,
                L"Filter out validation errors with the same code (only when r.Vulkan.EnableValidation is non zero)"
               );
  atexit(FUN_14318fa82);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143191d64 FUN_143191d64 body=69 status=ok
// SIG undefined FUN_143191d64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191d64(void)

{
  _DAT_14ca77c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77c70,1);
  return;
}



// FUNCTION 143191da9 FUN_143191da9 body=69 status=ok
// SIG undefined FUN_143191da9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191da9(void)

{
  _DAT_14ca77c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77c80,1);
  return;
}



// FUNCTION 143191dee FUN_143191dee body=69 status=ok
// SIG undefined FUN_143191dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191dee(void)

{
  _DAT_14ca77c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77c90,1);
  return;
}



// FUNCTION 143191e33 FUN_143191e33 body=69 status=ok
// SIG undefined FUN_143191e33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191e33(void)

{
  _DAT_14ca77c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ca0,1);
  return;
}



// FUNCTION 143191e78 FUN_143191e78 body=69 status=ok
// SIG undefined FUN_143191e78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191e78(void)

{
  _DAT_14ca77ca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77cb0,1);
  return;
}



// FUNCTION 143191ebd FUN_143191ebd body=69 status=ok
// SIG undefined FUN_143191ebd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191ebd(void)

{
  _DAT_14ca77cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77cc0,1);
  return;
}



// FUNCTION 143191f02 FUN_143191f02 body=69 status=ok
// SIG undefined FUN_143191f02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191f02(void)

{
  _DAT_14ca77cc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77cd0,1);
  return;
}



// FUNCTION 143191f47 FUN_143191f47 body=69 status=ok
// SIG undefined FUN_143191f47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191f47(void)

{
  _DAT_14ca77cd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ce0,1);
  return;
}



// FUNCTION 143191f8c FUN_143191f8c body=69 status=ok
// SIG undefined FUN_143191f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143191f8c(void)

{
  _DAT_14ca77ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143191fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77cf0,1);
  return;
}



// FUNCTION 143191fd2 FUN_143191fd2 body=354 status=ok
// SIG undefined FUN_143191fd2(void)

undefined8 FUN_143191fd2(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = FUN_141434525(DAT_14ca85550,L"BindlessResources",&DAT_14ca83b38);
  if ((((iVar2 != 0) ||
       (iVar2 = FUN_141434525(DAT_14ca85550,L"BindlessSamplers",&DAT_14ca83b58), iVar2 != 0)) &&
      (iVar2 = FUN_141434525(DAT_14ca85550,L"BindlessResources",&DAT_14ca83b38), iVar2 == 1)) &&
     ((iVar2 = FUN_141434525(DAT_14ca85550,L"BindlessSamplers",&DAT_14ca83b58), iVar2 == 1 &&
      ((~*(ulonglong *)(param_1 + 0x20f8) & 0x440008000) == 0)))) {
    if (*(uint *)(param_1 + 0xc58) < 9) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x2340) < 9) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x2344) < 8) {
      return 0;
    }
    if (*(int *)(param_1 + 0x2348) == 0) {
      return 0;
    }
    iVar2 = 7;
    if (*(char *)(param_1 + 0x390) == '\0') {
      cVar1 = FUN_1473dd576();
      if ((cVar1 != '\0') && ((ulonglong)*(uint *)(param_1 + 0x170) != 0)) {
        uVar3 = 0;
        do {
          if (*(int *)(param_1 + 0x174 + uVar3 * 8) == 7) goto LAB_1431920aa;
          uVar3 = uVar3 + 1;
        } while (*(uint *)(param_1 + 0x170) != uVar3);
      }
      iVar2 = 6;
    }
LAB_1431920aa:
    if ((ulonglong)*(uint *)(param_1 + 0x170) != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(param_1 + 0x174 + uVar3 * 8) == iVar2) {
          (**(code **)(*DAT_14ca793a0 + 0xb0))();
          if (DAT_14c760c48 == 0) {
            return 1;
          }
          DAT_14c760c48 = 0;
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while (*(uint *)(param_1 + 0x170) != uVar3);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143192134 FUN_143192134 body=257 status=ok
// SIG undefined FUN_143192134(void)

undefined4 FUN_143192134(longlong param_1,uint param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  lVar4 = DAT_14ca77d20;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar6 = 0;
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  if (param_2 < 8) {
    iVar1 = *(int *)(lVar4 + uVar5 * 4);
    switch(param_2) {
    case 0:
      lVar4 = 0x2380;
      break;
    case 1:
      goto switchD_1431921a5_caseD_1;
    case 2:
      lVar4 = 0x2390;
      break;
    case 3:
      lVar4 = 0x2398;
      break;
    case 4:
      lVar4 = (ulonglong)(0 < iVar1) * 8 + 0x23a0;
      break;
    case 5:
      lVar4 = (ulonglong)(0 < iVar1) * 8 + 0x23b0;
      break;
    case 6:
      lVar4 = (ulonglong)(0 < iVar1) * 8 + 0x23c0;
      break;
    case 7:
      lVar4 = (ulonglong)(0 < iVar1) * 8 + 0x23d0;
    }
  }
  else {
    if (param_2 != 0x3b9d13f0) {
      return 0;
    }
    lVar4 = 0x23e8;
  }
  uVar6 = *(undefined4 *)(param_1 + lVar4);
switchD_1431921a5_caseD_1:
  return uVar6;
}



// FUNCTION 143192236 FUN_143192236 body=98 status=ok
// SIG undefined FUN_143192236(void)

int FUN_143192236(undefined8 param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_2 + 0x40) == -1) || (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 4))) {
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    piVar1 = (int *)(param_2 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0x40) =
         *(undefined4 *)
          (*(longlong *)(param_2 + 0x60) + (longlong)(*(int *)(param_2 + 0x44) * iVar2));
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar2;
}



// FUNCTION 143192298 FUN_143192298 body=811 status=ok
// SIG undefined FUN_143192298(void)

undefined8 * FUN_143192298(LPCRITICAL_SECTION param_1,ulonglong param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  HANDLE pvVar5;
  longlong *_Dst;
  LPCRITICAL_SECTION p_Var6;
  HANDLE pvVar7;
  undefined8 *unaff_RBX;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  int local_90;
  LPCRITICAL_SECTION local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  int iStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  param_2 = param_2 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == 8) {
    uVar9 = (ulonglong)*(uint *)((longlong)param_1[2].LockSemaphore + 0xe08);
    uVar12 = (param_2 + uVar9) - 1;
    param_2 = (ulonglong)(uint)((int)uVar12 - (int)(uVar12 % uVar9));
  }
  uVar11 = param_3 | 3;
  if ((param_3 & 3) == 0) {
    uVar11 = param_3;
  }
  uVar1 = *(uint *)((longlong)param_1[2].LockSemaphore + 0x20f8);
  EnterCriticalSection(param_1);
  uVar3 = *(uint *)&param_1[2].DebugInfo;
  iVar4 = (int)param_2;
  if ((int)uVar3 < 1) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
    uVar9 = 0;
    _Dst = (longlong *)param_1[1].SpinCount;
    do {
      unaff_RBX = (undefined8 *)*_Dst;
      if ((*(int *)((longlong)unaff_RBX + 0x44) == iVar4) && (*(int *)(unaff_RBX + 8) == param_4)) {
        if (uVar3 - 1 != (int)uVar9) {
          iVar10 = (uVar3 - 1) - (int)uVar9;
          iVar8 = 1;
          if (iVar10 < 1) {
            iVar8 = iVar10;
          }
          memmove(_Dst,(longlong *)param_1[1].SpinCount + (ulonglong)(uVar3 - iVar8) * 2,
                  (longlong)iVar8 << 4);
          uVar3 = *(uint *)&param_1[2].DebugInfo;
        }
        *(uint *)&param_1[2].DebugInfo = uVar3 - 1;
        p_Var6 = param_1 + 1;
        iVar8 = param_1[1].LockCount;
        param_1[1].LockCount = iVar8 + 1U;
        if ((uint)param_1[1].RecursionCount < iVar8 + 1U) {
          local_88 = p_Var6;
          FUN_1473ae7ac(p_Var6,iVar8);
          p_Var6 = local_88;
        }
        *(undefined8 **)(&p_Var6->DebugInfo->Type + (longlong)iVar8 * 4) = unaff_RBX;
        break;
      }
      uVar9 = uVar9 + 1;
      bVar13 = uVar9 < uVar3;
      _Dst = _Dst + 2;
    } while (uVar3 != uVar9);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (!bVar13) {
    unaff_RBX = (undefined8 *)FUN_14001cc68(0x48,0x10);
    puVar2 = param_1[2].LockSemaphore;
    *unaff_RBX = &PTR_FUN_14a35cb28;
    *(undefined4 *)(unaff_RBX + 1) = 0;
    *unaff_RBX = &PTR_FUN_14a35c5e8;
    unaff_RBX[2] = puVar2;
    unaff_RBX[7] = 0;
    unaff_RBX[3] = 0;
    unaff_RBX[4] = 0;
    *(undefined8 *)((longlong)unaff_RBX + 0x24) = 0;
    *(undefined8 *)((longlong)unaff_RBX + 0x2c) = 0;
    *(int *)(unaff_RBX + 8) = param_4;
    *(int *)((longlong)unaff_RBX + 0x44) = iVar4;
    local_80 = 0xc;
    local_6c = 0;
    local_7c = 0;
    uStack_74 = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_4c = 0;
    uStack_64 = 0;
    iStack_68 = iVar4;
    uStack_60 = uVar1 >> 0xd & 0x20000 | uVar11;
    iVar4 = (*DAT_14ca793e8)(*puVar2,&local_80,0,unaff_RBX + 7);
    if (iVar4 != 0) {
      FUN_1431b4552(iVar4,
                    "VulkanRHI::vkCreateBuffer(Device->GetInstanceHandle(), &StagingBufferCreateInfo, VULKAN_CPU_ALLOCATOR, &StagingBuffer->Buffer)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x110e);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca77fb4) && (FUN_144b3d300(&DAT_14ca77fb4), DAT_14ca77fb4 == -1)) {
      DAT_14ca77fb0 = *(int *)((longlong)param_1[2].LockSemaphore + 0xaf8) == 0x1002;
      _Init_thread_footer(&DAT_14ca77fb4);
    }
    if ((param_4 == 8) || (DAT_14ca77fb0 != '\0')) {
      pvVar7 = param_1[2].LockSemaphore;
      uVar9 = (ulonglong)*(uint *)((longlong)pvVar7 + 0xe08) + 0xf;
      local_90 = (int)uVar9 - (int)(uVar9 % (ulonglong)*(uint *)((longlong)pvVar7 + 0xe08));
    }
    else {
      pvVar7 = param_1[2].LockSemaphore;
      local_90 = 0x10;
    }
    FUN_14319eeca((longlong)pvVar7 + 0x3d8,unaff_RBX + 3,unaff_RBX[7],(param_4 == 8) + 0x81);
    EnterCriticalSection(param_1);
    iVar4 = param_1[1].LockCount;
    param_1[1].LockCount = iVar4 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar4 + 1U) {
      FUN_1473ae7ac(param_1 + 1,iVar4);
    }
    *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar4 * 4) = unaff_RBX;
    pvVar5 = (HANDLE)((ulonglong)*(uint *)((longlong)unaff_RBX + 0x44) +
                     (longlong)param_1[2].OwningThread);
    pvVar7 = *(HANDLE *)&param_1[2].LockCount;
    if (*(HANDLE *)&param_1[2].LockCount <= pvVar5) {
      pvVar7 = pvVar5;
    }
    param_1[2].OwningThread = pvVar5;
    *(HANDLE *)&param_1[2].LockCount = pvVar7;
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX;
}



// FUNCTION 1431925c4 FUN_1431925c4 body=186 status=ok
// SIG undefined FUN_1431925c4(void)

void FUN_1431925c4(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  longlong lStack_3c;
  undefined4 local_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar2 = param_2 >> 0x20 & 0xff;
    iVar1 = *(int *)((longlong)param_1 + uVar2 * 0x70 + 0x5c);
    uVar3 = iVar1 * (int)param_2;
    local_48 = 0x3b9f9c64;
    local_44 = 0;
    local_34 = 0;
    lStack_3c = (ulonglong)*(uint *)(param_1 + uVar2 * 0xe + 3) << 0x20;
    local_30 = &local_50;
    (*DAT_14ca78de8)(*(undefined8 *)*param_1,&local_48,iVar1,
                     param_1[uVar2 * 0xe + 0xf] + (longlong)(int)uVar3);
    memcpy((void *)((ulonglong)uVar3 + param_1[uVar2 * 0xe + 0xe]),
           (void *)((longlong)(int)uVar3 + param_1[uVar2 * 0xe + 0xf]),
           (ulonglong)*(uint *)((longlong)param_1 + uVar2 * 0x70 + 0x5c));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14319267f FUN_14319267f body=69 status=ok
// SIG undefined FUN_14319267f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319267f(void)

{
  _DAT_14ca77cf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431926c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77d00,1);
  return;
}



// FUNCTION 1431926c4 FUN_1431926c4 body=69 status=ok
// SIG undefined FUN_1431926c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431926c4(void)

{
  _DAT_14ca77fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143192706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ff0,1);
  return;
}



// FUNCTION 143192709 FUN_143192709 body=69 status=ok
// SIG undefined FUN_143192709(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143192709(void)

{
  _DAT_14ca77d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319274b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77d18,1);
  return;
}



// FUNCTION 14319274e FUN_14319274e body=69 status=ok
// SIG undefined FUN_14319274e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319274e(void)

{
  _DAT_14ca77d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143192790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77d30,1);
  return;
}



// FUNCTION 143192793 FUN_143192793 body=69 status=ok
// SIG undefined FUN_143192793(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143192793(void)

{
  _DAT_14ca77d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431927d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77d48,1);
  return;
}



// FUNCTION 1431927d8 FUN_1431927d8 body=791 status=ok
// SIG undefined FUN_1431927d8(void)

undefined8 * FUN_1431927d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_3b8 [32];
  undefined4 local_398;
  undefined1 local_394 [4];
  undefined8 *local_390;
  undefined1 local_388 [824];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  *param_1 = 0;
  FUN_1473a3438(param_1 + 1);
  FUN_1473a34c4(param_1 + 0x7b,param_1);
  param_1[0xb2] = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb3),4000);
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xba));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xba),4000);
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc9),4000);
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  FUN_1473a358a(param_1 + 0xd7);
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = param_3;
  param_1[0x343] = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  memset(param_1 + 0x1de,0,600);
  param_1[0x33f] = 0;
  param_1[0x340] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a24) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a2c) = 0;
  param_1[0x347] = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  param_1[0x413] = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1aa4) = 0;
  param_1[0x40f] = 0;
  param_1[0x410] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20ac) = 0;
  param_1[0x417] = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e9) = 0;
  param_1[0x41b] = 0;
  param_1[0x41c] = 0;
  param_1[0x419] = 0;
  param_1[0x41a] = 0;
  memset(param_1 + 0x41f,0,0x4f8);
  param_1[0x41d] = param_2;
  memset(param_1 + 0x15e,0,0x338);
  memset(param_1 + 0x229,0,0x8ac);
  memset(param_1 + 0x355,0,0x5d0);
  *(undefined4 *)(param_1 + 0x1d2) = 0x3b9bdf5c;
  *(undefined8 *)((longlong)param_1 + 0xe94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xebc) = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  *(undefined4 *)(param_1 + 0x1da) = 0x3b9c3930;
  *(undefined8 *)((longlong)param_1 + 0xed4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xedc) = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  local_398 = 0x3b9bb079;
  memset(local_394,0,0x344);
  param_1[0x1d3] = param_1 + 0x1da;
  local_390 = param_1 + 0x1d2;
  (*DAT_14ca79370)(param_3,&local_398);
  memcpy(param_1 + 0x15e,local_388,0x338);
  uVar1 = FUN_147364bce(*(undefined4 *)(param_1 + 0x15f));
  *(undefined4 *)((longlong)param_1 + 0x1a94) = uVar1;
  if ((local_50 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143192af0 FUN_143192af0 body=516 status=ok
// SIG undefined FUN_143192af0(void)

void FUN_143192af0(longlong param_1,byte param_2,undefined8 *param_3,undefined4 *param_4,
                  uint param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  ulonglong local_78;
  undefined4 *local_70;
  undefined1 local_68 [12];
  uint local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined4 *)*param_3;
  lVar10 = param_3[1];
  local_78 = (ulonglong)param_2;
  uVar6 = (ulonglong)((uint)param_2 * 0x30);
  local_70 = param_4;
  FUN_1473a3e50(param_1,(longlong)&DAT_14c873410 + uVar6,local_78,*puVar2);
  uVar11 = (uint)((ulonglong)(lVar10 - (longlong)puVar2) >> 2);
  if (0 < (int)uVar11) {
    uVar12 = (ulonglong)(uVar11 & 0x7fffffff);
    lVar10 = 0;
    do {
      uVar1 = puVar2[lVar10];
      puVar7 = (uint *)FUN_1473a3d30(param_1,uVar1);
      uVar11 = *puVar7;
      if (((uVar11 & 1) != 0) || (uVar9 = 0, (puVar7[1] & 1) != 0)) {
        uVar9 = 0x31e;
      }
      if (((uVar11 >> 9 & 1) != 0) || ((*(byte *)((longlong)puVar7 + 5) & 2) != 0)) {
        uVar9 = uVar9 | 0x40;
      }
      if (((char)uVar11 < '\0') || ((puVar7[1] & 0x80) != 0)) {
        uVar9 = uVar9 | 0x20;
      }
      if (((uVar11 >> 8 & 1) != 0) || ((*(byte *)((longlong)puVar7 + 5) & 1) != 0)) {
        uVar9 = uVar9 | 0x1000;
      }
      if (((uVar11 & 2) != 0) || ((puVar7[1] & 2) != 0)) {
        uVar9 = uVar9 | 0x702000;
      }
      if (((uVar11 & 4) != 0) || ((puVar7[1] & 4) != 0)) {
        uVar9 = uVar9 | 0x800;
      }
      if (((uVar11 >> 0xc & 1) != 0) || ((*(byte *)((longlong)puVar7 + 5) & 0x10) != 0)) {
        uVar9 = uVar9 | 0x800000;
      }
      if ((~uVar9 & 0x1e) == 0) {
        uVar11 = uVar9 | 0x400;
        if (*(int *)(param_1 + 0xf68) == 0) {
          uVar11 = uVar9;
        }
        local_88 = local_68;
        local_90 = 0;
        local_98 = 4;
        iVar5 = (*DAT_14ca78e60)(*(undefined8 *)(param_1 + 0xae8),uVar1,1,0);
        uVar9 = uVar11 | 0x80;
        if (local_5c < 2) {
          uVar9 = uVar11;
        }
        if (iVar5 != 0) {
          uVar9 = uVar11;
        }
      }
      if ((param_5 & ~uVar9) == 0) {
        *(undefined4 *)((longlong)&DAT_14c873434 + uVar6) = uVar1;
        *(uint *)((longlong)&DAT_14c873430 + uVar6) =
             *(uint *)((longlong)&DAT_14c873430 + uVar6) | uVar9;
        break;
      }
      lVar10 = lVar10 + 1;
    } while (uVar12 + (uVar12 == 0) != lVar10);
  }
  bVar8 = 1;
  if ((param_5 & ~*(uint *)((longlong)&DAT_14c873430 + uVar6)) != 0) {
    bVar8 = (byte)(*(uint *)((longlong)&DAT_14c873430 + uVar6) >> 0xe) & 1;
  }
  (&DAT_14c873438)[uVar6] = (&DAT_14c873438)[uVar6] & 0xfe | bVar8;
  if (bVar8 != 0) {
    uVar1 = local_70[1];
    uVar3 = local_70[2];
    uVar4 = local_70[3];
    puVar2 = (undefined4 *)(param_1 + 0x1aa8 + (ulonglong)(uint)((int)local_78 << 4));
    *puVar2 = *local_70;
    puVar2[1] = uVar1;
    puVar2[2] = uVar3;
    puVar2[3] = uVar4;
    if (0 < param_6) {
      *(int *)((longlong)&DAT_14c873428 + uVar6) = param_6;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143192cf6 FUN_143192cf6 body=19217 status=ok
// SIG undefined FUN_143192cf6(void)

/* WARNING: Removing unreachable block (ram,0x0001431971a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143192cf6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  undefined1 auVar22 [8];
  code *pcVar23;
  longlong *plVar24;
  longlong *plVar25;
  char *pcVar26;
  char *pcVar27;
  undefined1 *puVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  ulonglong uVar34;
  char *_Str1;
  char *pcVar35;
  longlong lVar36;
  uint uVar37;
  void *pvVar38;
  ulonglong uVar39;
  byte bVar40;
  int iVar41;
  longlong lVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  bool bVar46;
  float fVar47;
  undefined1 auStack_688 [32];
  undefined8 local_668;
  undefined4 local_660;
  undefined8 *local_650;
  undefined8 *local_648;
  int *local_640;
  longlong *local_638;
  longlong *local_630;
  undefined8 *local_628;
  char *local_620;
  uint local_618;
  undefined4 uStack_614;
  uint local_610;
  uint local_60c;
  longlong local_608;
  undefined8 uStack_600;
  undefined8 *local_5f8;
  undefined8 uStack_5f0;
  uint local_5dc;
  char *local_5d8;
  ulonglong uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  int iStack_5b4;
  int iStack_5b0;
  uint uStack_5ac;
  int iStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined2 uStack_598;
  undefined1 uStack_596;
  undefined1 uStack_595;
  undefined1 local_594;
  undefined1 uStack_593;
  undefined2 uStack_592;
  undefined8 local_590;
  wchar_t *local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined1 local_278 [8];
  undefined8 uStack_270;
  ulonglong local_268;
  undefined1 local_260;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_688;
  local_5dc = 0;
  (*DAT_14ca78e08)(param_1[0x15d],&local_5dc,0);
  local_630 = param_1 + 0x227;
  iVar7 = *(int *)(param_1 + 0x228);
  *(uint *)(param_1 + 0x228) = iVar7 + local_5dc;
  if ((uint)(*(int *)((longlong)param_1 + 0x1144) - iVar7) < local_5dc) {
    FUN_1473aa570(local_630);
  }
  (*DAT_14ca78e08)(param_1[0x15d],&local_5dc,param_1[0x227]);
  local_628 = param_1 + 0x1df;
  FUN_1473a32fa(local_628,param_1[0x15d],*(undefined4 *)(param_1[0x41d] + 0x1c));
  local_648 = (undefined8 *)CONCAT44(local_648._4_4_,*(undefined4 *)(param_1[0x41d] + 0x1c));
  local_5f8 = (undefined8 *)0x0;
  uStack_5f0 = 0;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar15[1] = "VK_KHR_swapchain";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = param_1;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  uStack_5f0._0_4_ = 1;
  FUN_1473aa8ae(&local_5f8,0);
  *local_5f8 = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  iVar7 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_memory_budget";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = param_1;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a076a;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  local_650 = param_1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,iVar7);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar9 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_memory_priority";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a076e;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar9);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_create_renderpass2";
  puVar15[2] = 0x1000100402000;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a0772;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  uVar9 = (uint)local_648;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_deferred_host_operations";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a0778;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_spirv_1_4";
  puVar15[2] = 0x1000100402000;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a077e;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_shader_float_controls";
  puVar15[2] = 0x1000100402000;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a0784;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_image_format_list";
  puVar15[2] = 0x1000100402000;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a078a;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_validation_cache";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a0790;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_load_store_op_none";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a0794;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_QCOM_render_pass_shader_resolve";
  puVar15[2] = 0x10001ffffffff;
  *puVar15 = &PTR_FUN_14a35ec40;
  puVar15[3] = local_650;
  puVar15[4] = &LAB_1473aa934;
  puVar15[6] = 0;
  puVar15[8] = &PTR_LAB_14a35ec20;
  puVar15[9] = &LAB_1431a079a;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15 = local_650;
  puVar16[1] = "VK_KHR_driver_properties";
  puVar16[2] = 0x1000100402000;
  puVar16[3] = local_650;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35cb50;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_KHR_maintenance4";
  puVar16[2] = 0x1000100403000;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35cba0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_KHR_maintenance5";
  puVar16[2] = 0x10001ffffffff;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35cbf0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473aab40(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473aac68(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_EXT_scalar_block_layout";
  puVar16[2] = 0x1000100402000;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35ccf0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_EXT_shader_viewport_index_layer";
  puVar16[2] = 0x1000100402000;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35cd50;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473aaeb6(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473aafe2(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0xd0,0x10);
  FUN_1473ab10e(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x90,0x10);
  FUN_1473ab2a8(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x70,0x10);
  FUN_1473ab412(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar15 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_multiview";
  puVar15[2] = 0x1000100401000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35cf40;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_get_memory_requirements2";
  puVar15[2] = 0x1000100401000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35cf90;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_descriptor_indexing";
  puVar15[2] = 0x1000100402000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35cfe0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473ab716(uVar17,local_650);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_subgroup_size_control";
  puVar15[2] = 0x1000100403000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d080;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_calibrated_timestamps";
  puVar15[2] = 0x10001ffffffff;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d0d0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  uVar17 = FUN_14001cc68(0x90,0x10);
  FUN_1473abc84(uVar17,local_650);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_device_fault";
  puVar15[2] = 0x10001ffffffff;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d170;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_shader_demote_to_helper_invocation";
  puVar15[2] = 0x1000100403000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d1d0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  uVar17 = FUN_14001cc68(0x90,0x10);
  FUN_1473abf1a(uVar17,local_650);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473ac056(uVar17,local_650);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_depth_stencil_resolve";
  puVar15[2] = 0x10001ffffffff;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d2c0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_EXT_pipeline_creation_cache_control";
  puVar15[2] = 0x1000100403000;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d320;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_KHR_fragment_shader_barycentric";
  puVar15[2] = 0x10001ffffffff;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d380;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar15 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15[1] = "VK_NV_compute_shader_derivatives";
  puVar15[2] = 0x10001ffffffff;
  puVar15[3] = local_650;
  puVar15[4] = 0;
  puVar15[6] = 0;
  *(undefined1 *)(puVar15 + 0xc) = 1;
  *puVar15 = &PTR_FUN_14a35d3e0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar15;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar15 = local_650;
  puVar16[1] = "VK_KHR_sampler_ycbcr_conversion";
  puVar16[2] = 0x1000100401000;
  puVar16[3] = local_650;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35d430;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_KHR_timeline_semaphore";
  puVar16[2] = 0x10001ffffffff;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35d480;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_EXT_mesh_shader";
  puVar16[2] = 0x10001ffffffff;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35d4d0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  puVar16 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_KHR_buffer_device_address";
  puVar16[2] = 0x1000100402000;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35d520;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  uVar17 = FUN_14001cc68(0x90,0x10);
  FUN_1473ac73e(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x90,0x10);
  FUN_1473ac8e0(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473aca8a(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x80,0x10);
  FUN_1473acbce(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x70,0x10);
  FUN_1473accfa(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0x70,0x10);
  FUN_1473acda4(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  uVar17 = FUN_14001cc68(0xa0,0x10);
  FUN_1473ace4e(uVar17,puVar15);
  uVar31 = (uint)uStack_5f0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = uVar17;
  puVar16 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar31 = (uint)uStack_5f0;
  puVar16[1] = "VK_NV_ray_tracing_validation";
  puVar16[2] = 0x10000ffffffff;
  puVar16[3] = puVar15;
  puVar16[4] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 0xc) = 1;
  *puVar16 = &PTR_FUN_14a35d7e0;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  uStack_5f0._0_4_ = (uint)uStack_5f0 + 1;
  if (uStack_5f0._4_4_ < (uint)uStack_5f0) {
    FUN_1473aa8ae(&local_5f8,uVar31);
  }
  local_5f8[lVar42] = puVar16;
  FUN_1473dd46c(puVar15);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145af9b74(&local_5c8);
  iVar7 = (**(code **)(DAT_14c8337f0 + 0x18))
                    (&DAT_14c8337f0,CONCAT44(local_5c8._4_4_,(undefined4)local_5c8));
  plVar18 = DAT_14ca77fe0;
  if (0 < iVar7) {
    plVar18 = (longlong *)FUN_147364b50();
    (**(code **)(*plVar18 + 0x88))(plVar18,&local_5c8);
    plVar24 = DAT_14ca77fe0;
    DAT_14ca77fd8 = (longlong *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
    plVar25 = (longlong *)CONCAT44(uStack_5c0._4_4_,(uint)uStack_5c0);
    local_5c8._0_4_ = 0;
    local_5c8._4_4_ = 0;
    if (plVar25 != DAT_14ca77fe0) {
      uStack_5c0._0_4_ = 0;
      uStack_5c0._4_4_ = 0;
      plVar18 = plVar25;
      if (DAT_14ca77fe0 == (longlong *)0x0) goto LAB_143194522;
      LOCK();
      plVar18 = DAT_14ca77fe0 + 1;
      DAT_14ca77fe0 = plVar25;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar32 = (int *)((longlong)plVar24 + 0xc);
        *piVar32 = *piVar32 + -1;
        UNLOCK();
        if (*piVar32 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
      plVar25 = (longlong *)CONCAT44(uStack_5c0._4_4_,(uint)uStack_5c0);
    }
    plVar18 = DAT_14ca77fe0;
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar25 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      plVar18 = DAT_14ca77fe0;
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar32 = (int *)((longlong)plVar25 + 0xc);
        *piVar32 = *piVar32 + -1;
        UNLOCK();
        plVar18 = DAT_14ca77fe0;
        if (*piVar32 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          plVar18 = DAT_14ca77fe0;
        }
      }
    }
  }
LAB_143194522:
  DAT_14ca77fe0 = plVar18;
  if (DAT_14ca77fd8 != (longlong *)0x0) {
    local_5c8._0_4_ = 0;
    local_5c8._4_4_ = 0;
    uStack_5c0._0_4_ = 0;
    uStack_5c0._4_4_ = 0;
    (**(code **)(*DAT_14ca77fd8 + 8))(DAT_14ca77fd8,puVar15[0x15d],&local_5c8);
    local_278 = (undefined1  [8])0x0;
    lVar42 = (longlong)(int)(uint)uStack_5c0;
    pvVar38 = (void *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
    uStack_270 = (int *)CONCAT44(uStack_270._4_4_,(uint)uStack_5c0);
    if (lVar42 == 0) {
      uStack_270 = (int *)(ulonglong)(uint)uStack_5c0;
    }
    else {
      FUN_1473ad136(local_278,(uint)uStack_5c0,0);
      memcpy((void *)local_278,pvVar38,lVar42 << 3);
      if ((longlong)(int)uStack_270 != 0) {
        puVar15 = (undefined8 *)((longlong)local_278 + (longlong)(int)uStack_270 * 8);
        auVar22 = local_278;
        do {
          uVar39 = uStack_5f0;
          puVar16 = local_5f8;
          pcVar43 = *(char **)auVar22;
          iVar7 = (uint)uStack_5f0;
          lVar42 = (longlong)(int)(uint)uStack_5f0;
          if (0 < lVar42) {
            lVar29 = 0;
            do {
              iVar8 = strcmp(*(char **)(puVar16[lVar29] + 8),pcVar43);
              if (iVar8 == 0) {
                *(undefined1 *)(puVar16[lVar29] + 0x16) = 1;
                goto LAB_14319466a;
              }
              lVar29 = lVar29 + 1;
            } while (lVar42 != lVar29);
          }
          puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
          puVar16[1] = pcVar43;
          puVar16[2] = 0x10001ffffffff;
          *puVar16 = &PTR_FUN_14a35ec40;
          puVar16[3] = local_650;
          puVar16[4] = 0;
          puVar16[6] = 0;
          *(undefined1 *)(puVar16 + 0xc) = 1;
          uStack_5f0 = CONCAT44(uStack_5f0._4_4_,iVar7 + 1U);
          if (uStack_5f0._4_4_ < iVar7 + 1U) {
            FUN_1473aa8ae(&local_5f8,uVar39 & 0xffffffff);
          }
          local_5f8[lVar42] = puVar16;
LAB_14319466a:
          auVar22 = (undefined1  [8])((longlong)auVar22 + 8);
        } while (auVar22 != (undefined1  [8])puVar15);
        puVar15 = local_650;
        uVar9 = (uint)local_648;
      }
      if (local_278 != (undefined1  [8])0x0) {
        FUN_1400020a8(local_278);
      }
    }
    if (CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) != 0) {
      FUN_1400020a8();
    }
  }
  pvVar38 = DAT_14ca77df8;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  lVar42 = (longlong)DAT_14ca77e00;
  uStack_5c0._0_4_ = DAT_14ca77e00;
  if (lVar42 == 0) {
    uStack_5c0._4_4_ = 0;
  }
  else {
    FUN_1473ad136(&local_5c8,DAT_14ca77e00,0);
    memcpy((void *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8),pvVar38,lVar42 << 3);
    puVar16 = (undefined8 *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
    if ((longlong)(int)(uint)uStack_5c0 != 0) {
      puVar15 = puVar16 + (int)(uint)uStack_5c0;
      do {
        uVar39 = uStack_5f0;
        puVar19 = local_5f8;
        pcVar43 = (char *)*puVar16;
        iVar7 = (uint)uStack_5f0;
        lVar42 = (longlong)(int)(uint)uStack_5f0;
        if (0 < lVar42) {
          lVar29 = 0;
          do {
            iVar8 = strcmp(*(char **)(puVar19[lVar29] + 8),pcVar43);
            if (iVar8 == 0) {
              *(undefined1 *)(puVar19[lVar29] + 0x16) = 1;
              goto LAB_1431947d6;
            }
            lVar29 = lVar29 + 1;
          } while (lVar42 != lVar29);
        }
        puVar19 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar19[1] = pcVar43;
        puVar19[2] = 0x10001ffffffff;
        *puVar19 = &PTR_FUN_14a35ec40;
        puVar19[3] = local_650;
        puVar19[4] = 0;
        puVar19[6] = 0;
        *(undefined1 *)(puVar19 + 0xc) = 1;
        uStack_5f0 = CONCAT44(uStack_5f0._4_4_,iVar7 + 1U);
        if (uStack_5f0._4_4_ < iVar7 + 1U) {
          FUN_1473aa8ae(&local_5f8,uVar39 & 0xffffffff);
        }
        local_5f8[lVar42] = puVar19;
LAB_1431947d6:
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar15);
      puVar16 = (undefined8 *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
      puVar15 = local_650;
      uVar9 = (uint)local_648;
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1400020a8(puVar16);
    }
  }
  FUN_143197b82(&local_5d8,puVar15[0x15d],0);
  puVar15 = local_5f8;
  if ((longlong)(int)uStack_5d0 != 0) {
    iVar7 = (uint)uStack_5f0;
    uVar39 = uStack_5f0 & 0xffffffff;
    pcVar43 = local_5d8;
    do {
      if (0 < iVar7) {
        uVar34 = 0;
        do {
          iVar8 = strcmp(*(char **)(puVar15[uVar34] + 8),pcVar43);
          if (iVar8 == 0) {
            *(undefined1 *)(puVar15[uVar34] + 0x15) = 1;
            *(bool *)(puVar15[uVar34] + 0x17) = *(uint *)(puVar15[uVar34] + 0x10) <= uVar9;
            break;
          }
          uVar34 = uVar34 + 1;
        } while (uVar39 != uVar34);
      }
      pcVar43 = pcVar43 + 0x104;
    } while (pcVar43 != local_5d8 + (longlong)(int)uStack_5d0 * 0x104);
  }
  if (local_5d8 != (char *)0x0) {
    FUN_1400020a8(local_5d8);
  }
  uVar17 = local_650[0x15d];
  local_608 = 0;
  uStack_600 = 0;
  local_5d8 = (char *)0x0;
  uStack_5d0 = 0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  uStack_5c0._0_4_ = 0;
  uStack_5c0._4_4_ = 0;
  local_618 = 0;
  iVar7 = (*DAT_14ca78e80)(uVar17,&local_618,0);
  if (iVar7 < 0 && iVar7 != -3) {
    FUN_1431b4552(iVar7,"VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, nullptr)",
                  ".\\Runtime/VulkanRHI/Private/VulkanLayers.cpp",0x78);
  }
  lVar42 = (longlong)(int)local_618;
  if (lVar42 != 0) {
    lVar29 = (longlong)(int)(uint)uStack_5c0;
    iVar7 = (uint)uStack_5c0 + local_618;
    uVar9 = uStack_5c0._4_4_ - (uint)uStack_5c0;
    uStack_5c0._0_4_ = iVar7;
    if (uVar9 < local_618) {
      FUN_1473ad31a(&local_5c8);
    }
    memset((void *)(lVar29 * 0x208 + CONCAT44(local_5c8._4_4_,(undefined4)local_5c8)),0,
           lVar42 * 0x208);
    iVar7 = (*DAT_14ca78e80)(uVar17,&local_618,CONCAT44(local_5c8._4_4_,(undefined4)local_5c8));
    if (iVar7 < 0 && iVar7 != -3) {
      FUN_1431b4552(iVar7,
                    "VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, TempLayerProperties.GetData())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanLayers.cpp",0x7c);
    }
    FUN_1473ad2a0(&local_5d8);
    if (local_618 != 0) {
      uVar9 = 0;
      do {
        pvVar38 = (void *)((longlong)(int)uVar9 * 0x208 +
                          CONCAT44(local_5c8._4_4_,(undefined4)local_5c8));
        lVar42 = (longlong)(int)uVar9 * 0x218;
        memcpy(local_5d8 + lVar42,pvVar38,0x208);
        FUN_143197b82(local_278,uVar17,pvVar38);
        pcVar43 = local_5d8;
        plVar18 = (longlong *)(local_5d8 + lVar42 + 0x208);
        if (plVar18 != (longlong *)local_278) {
          if (*plVar18 != 0) {
            FUN_1400020a8();
          }
          *plVar18 = (longlong)local_278;
          local_278 = (undefined1  [8])0x0;
          *(int *)(pcVar43 + lVar42 + 0x210) = (int)uStack_270;
          *(int *)(pcVar43 + lVar42 + 0x214) = uStack_270._4_4_;
          uStack_270 = (int *)0x0;
        }
        if (local_278 != (undefined1  [8])0x0) {
          FUN_1400020a8();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_618);
    }
  }
  if (CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) != 0) {
    FUN_1400020a8();
  }
  pcVar43 = local_5d8;
  iVar7 = (int)uStack_5d0;
  lVar42 = (longlong)(int)uStack_5d0;
  if (1 < lVar42) {
    memset(&local_5b8,0,0x2f0);
    local_5c8._0_4_ = SUB84(pcVar43,0);
    local_5c8._4_4_ = (undefined4)((ulonglong)pcVar43 >> 0x20);
    uStack_5c0 = pcVar43 + lVar42 * 0x218 + -0x218;
    fVar47 = logf((float)iVar7);
    local_5b8 = (int)(longlong)(fVar47 + fVar47);
    plVar18 = &local_5c8;
    do {
      pcVar45 = (char *)*plVar18;
      pcVar35 = (char *)plVar18[1];
      iVar7 = (int)plVar18[2];
      iVar8 = (int)((ulonglong)((longlong)pcVar35 - (longlong)pcVar45) >> 3) * 0x7a44c6b;
      uVar39 = (ulonglong)(iVar8 + 1);
      pcVar27 = pcVar45;
      _Str1 = pcVar45;
      pcVar43 = pcVar35;
      local_638 = plVar18;
      if (iVar7 != 0) {
LAB_143194b4a:
        if (8 < (int)(uint)uVar39) {
          local_648 = (undefined8 *)CONCAT44(local_648._4_4_,iVar7);
          local_640 = (int *)pcVar35;
          local_620 = pcVar27;
          memcpy(local_278,_Str1 + (ulonglong)((uint)uVar39 >> 1) * 0x218,0x218);
          memcpy(_Str1 + (ulonglong)((uint)uVar39 >> 1) * 0x218,_Str1,0x218);
          memcpy(_Str1,local_278,0x218);
          pcVar27 = pcVar43 + 0x218;
          pcVar45 = _Str1;
          do {
            pcVar35 = pcVar45 + 0x218;
            pcVar4 = pcVar45 + 0x218;
            do {
              pcVar45 = pcVar4;
              pcVar26 = pcVar35;
              if (pcVar43 < pcVar45) break;
              iVar7 = strcmp(_Str1,pcVar45);
              pcVar35 = pcVar26 + 0x218;
              pcVar4 = pcVar45 + 0x218;
            } while (-1 < iVar7);
            pcVar4 = pcVar27 + -0x430;
            do {
              pcVar44 = pcVar27;
              pcVar35 = pcVar4;
              pcVar27 = pcVar44 + -0x218;
              if (pcVar27 <= _Str1) break;
              iVar7 = strcmp(pcVar27,_Str1);
              pcVar4 = pcVar35 + -0x218;
            } while (-1 < iVar7);
            if (pcVar27 < pcVar45) goto LAB_143194c5a;
            memcpy(local_278,pcVar45,0x218);
            memcpy(pcVar45,pcVar27,0x218);
            memcpy(pcVar27,local_278,0x218);
          } while( true );
        }
        for (; plVar18 = local_638, pcVar35 = _Str1, pcVar45 = _Str1, _Str1 < pcVar43;
            pcVar43 = pcVar43 + -0x218) {
          while (pcVar27 = pcVar35, pcVar45 = pcVar45 + 0x218, pcVar45 <= pcVar43) {
            iVar7 = strcmp(pcVar27,pcVar45);
            pcVar35 = pcVar45;
            if (-1 < iVar7) {
              pcVar35 = pcVar27;
            }
          }
          memcpy(local_278,pcVar27,0x218);
          memcpy(pcVar27,pcVar43,0x218);
          memcpy(pcVar43,local_278,0x218);
        }
        goto LAB_143195046;
      }
LAB_143194d4a:
      iVar7 = (int)uVar39;
      plVar18 = local_638;
      if (iVar7 != 0) {
        uVar9 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_648 = (undefined8 *)(ulonglong)uVar9;
          uVar34 = (ulonglong)local_648;
          while (uVar31 = uVar9 * 2 + 1, (int)uVar31 < iVar7) {
            uVar30 = uVar9 * 2 + 2;
            uVar9 = uVar31;
            if ((int)uVar30 < iVar7) {
              iVar8 = strcmp(pcVar45 + (longlong)(int)uVar30 * 0x218,
                             pcVar45 + (longlong)(int)uVar31 * 0x218);
              if (-1 < iVar8) {
                uVar9 = uVar30;
              }
            }
            pcVar35 = pcVar45 + (longlong)(int)uVar34 * 0x218;
            pcVar43 = pcVar45 + (longlong)(int)uVar9 * 0x218;
            iVar8 = strcmp(pcVar35,pcVar43);
            if (-1 < iVar8) break;
            memcpy(local_278,pcVar35,0x218);
            memcpy(pcVar35,pcVar43,0x218);
            memcpy(pcVar43,local_278,0x218);
            uVar34 = (ulonglong)uVar9;
          }
          uVar9 = (int)local_648 - 1;
        } while ((int)local_648 != 0);
        plVar18 = local_638;
        if (1 < iVar7) {
          memcpy(local_278,pcVar45,0x218);
          memcpy(pcVar45,pcVar45 + (uVar39 - 1) * 0x218,0x218);
          memcpy(pcVar45 + (uVar39 - 1) * 0x218,local_278,0x218);
          plVar18 = local_638;
          uVar39 = uVar39 - 1;
          if (iVar7 != 2) {
            do {
              iVar7 = 0;
              iVar10 = 1;
              iVar8 = 0;
              do {
                iVar7 = iVar7 + 2;
                iVar41 = iVar10;
                if ((longlong)iVar7 < (longlong)uVar39) {
                  iVar10 = strcmp(pcVar45 + (longlong)iVar7 * 0x218,
                                  pcVar45 + (longlong)iVar10 * 0x218);
                  if (-1 < iVar10) {
                    iVar41 = iVar7;
                  }
                }
                pcVar35 = pcVar45 + (longlong)iVar8 * 0x218;
                pcVar43 = pcVar45 + (longlong)iVar41 * 0x218;
                iVar7 = strcmp(pcVar35,pcVar43);
                if (-1 < iVar7) break;
                memcpy(local_278,pcVar35,0x218);
                memcpy(pcVar35,pcVar43,0x218);
                memcpy(pcVar43,local_278,0x218);
                iVar7 = iVar41 * 2;
                iVar10 = iVar41 * 2 + 1;
                iVar8 = iVar41;
              } while ((longlong)iVar10 < (longlong)uVar39);
              memcpy(local_278,pcVar45,0x218);
              memcpy(pcVar45,pcVar45 + (uVar39 - 1) * 0x218,0x218);
              memcpy(pcVar45 + (uVar39 - 1) * 0x218,local_278,0x218);
              bVar46 = 2 < uVar39;
              plVar18 = local_638;
              uVar39 = uVar39 - 1;
            } while (bVar46);
          }
        }
      }
LAB_143195046:
      plVar18 = plVar18 + -3;
    } while (&local_5c8 <= plVar18);
  }
  if ((longlong)DAT_14ca77e48 != 0) {
    local_648 = DAT_14ca77e40 + DAT_14ca77e48;
    puVar15 = DAT_14ca77e40;
    do {
      pcVar43 = local_5d8;
      lVar42 = (longlong)(int)uStack_5d0;
      if (0 < lVar42) {
        pcVar45 = (char *)*puVar15;
        lVar29 = 0;
        do {
          iVar7 = strcmp(pcVar43 + lVar29,pcVar45);
          uVar39 = uStack_600;
          if (iVar7 == 0) {
            lVar42 = (longlong)(int)uStack_600;
            uVar9 = (int)uStack_600 + 1;
            uStack_600 = CONCAT44(uStack_600._4_4_,uVar9);
            if (uStack_600._4_4_ < uVar9) {
              FUN_140ca86cc(&local_608,uVar39 & 0xffffffff);
            }
            puVar16 = local_5f8;
            *(char **)(local_608 + lVar42 * 8) = pcVar45;
            if ((longlong)*(int *)(local_5d8 + lVar29 + 0x210) != 0) {
              pcVar43 = *(char **)(local_5d8 + lVar29 + 0x208);
              pcVar45 = pcVar43 + (longlong)*(int *)(local_5d8 + lVar29 + 0x210) * 0x104;
              iVar7 = (uint)uStack_5f0;
              lVar42 = (longlong)(int)(uint)uStack_5f0;
              do {
                if (iVar7 != 0) {
                  lVar29 = 0;
                  do {
                    lVar36 = *(longlong *)((longlong)puVar16 + lVar29);
                    iVar8 = strcmp(*(char **)(lVar36 + 8),pcVar43);
                    if (iVar8 == 0) {
                      *(undefined1 *)(lVar36 + 0x15) = 1;
                      break;
                    }
                    lVar29 = lVar29 + 8;
                  } while (lVar42 << 3 != lVar29);
                }
                pcVar43 = pcVar43 + 0x104;
              } while (pcVar43 != pcVar45);
            }
            break;
          }
          lVar29 = lVar29 + 0x218;
        } while (lVar42 * 0x218 - lVar29 != 0);
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != local_648);
  }
  local_640 = (int *)(longlong)(int)uStack_600;
  if ((longlong)local_640 < 1) {
    local_648 = (undefined8 *)local_608;
  }
  else {
    local_648 = (undefined8 *)local_608;
    if ((int)uStack_600 == 1) {
      local_640 = (int *)0x1;
    }
    else {
      uVar9 = (int)uStack_600 - 2;
      uVar39 = (ulonglong)local_640;
      iVar7 = (int)uStack_600;
      do {
        iVar7 = iVar7 + -1;
        uVar34 = uVar39 - 1;
        puVar16 = (undefined8 *)((longlong)local_648 + uVar39 * 8 + -8);
        pcVar43 = (char *)*puVar16;
        puVar15 = (undefined8 *)((longlong)local_648 + (ulonglong)uVar9 * 8);
        iVar8 = iVar7;
        do {
          iVar10 = strcmp(pcVar43,(char *)*puVar15);
          if (iVar10 == 0) {
            iVar8 = (int)local_640;
            if (uVar39 != ((ulonglong)local_640 & 0xffffffff)) {
              iVar10 = iVar8 - (int)uVar39;
              if (0 < iVar10) {
                iVar10 = 1;
              }
              memmove(puVar16,(void *)((longlong)local_648 + (longlong)(iVar8 - iVar10) * 8),
                      (longlong)iVar10 << 3);
              local_648 = (undefined8 *)local_608;
              iVar8 = (int)uStack_600;
            }
            local_640 = (int *)(ulonglong)(iVar8 - 1U);
            uStack_600 = CONCAT44(uStack_600._4_4_,iVar8 - 1U);
            break;
          }
          iVar8 = iVar8 + -1;
          puVar15 = puVar15 + -1;
        } while (0 < iVar8);
        uVar9 = uVar9 - 1;
        uVar39 = uVar34;
      } while (1 < uVar34);
    }
  }
  FUN_1473ad5a6(local_648,local_640);
  FUN_1473ad502(local_5d8);
  if (local_5d8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_5c8._0_4_ = 0x3b9bb078;
  memset((void *)((longlong)&local_5c8 + 4),0,0xec);
  puVar15 = local_5f8;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  if (lVar42 != 0) {
    lVar29 = 0;
    do {
      plVar18 = *(longlong **)((longlong)puVar15 + lVar29);
      if (((*(char *)((longlong)plVar18 + 0x14) == '\x01') &&
          (*(char *)((longlong)plVar18 + 0x15) == '\x01')) &&
         (*(char *)((longlong)plVar18 + 0x16) == '\x01')) {
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_5c8);
      }
      lVar29 = lVar29 + 8;
    } while (lVar42 * 8 != lVar29);
  }
  (*DAT_14ca79400)(local_650[0x15d]);
  puVar15 = local_5f8;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  iVar7 = 0;
  if (lVar42 != 0) {
    lVar29 = 0;
    do {
      plVar18 = *(longlong **)((longlong)puVar15 + lVar29);
      if (((*(char *)((longlong)plVar18 + 0x14) == '\x01') &&
          (*(char *)((longlong)plVar18 + 0x15) == '\x01')) &&
         (*(char *)((longlong)plVar18 + 0x16) == '\x01')) {
        (**(code **)(*plVar18 + 0x20))();
      }
      lVar29 = lVar29 + 8;
    } while (lVar42 * 8 != lVar29);
    iVar7 = (uint)uStack_5f0;
  }
  puVar15 = local_5f8;
  local_5c8._0_4_ = 0x3b9bb079;
  memset((void *)((longlong)&local_5c8 + 4),0,0x344);
  uStack_5c0 = (char *)(local_650 + 0x1d2);
  *(undefined4 *)(local_650 + 0x1d2) = 0x3b9bdf5c;
  local_650[0x1d8] = 0;
  local_650[0x1d9] = 0;
  *(undefined8 *)((longlong)local_650 + 0xeb4) = 0;
  *(undefined8 *)((longlong)local_650 + 0xebc) = 0;
  *(undefined8 *)((longlong)local_650 + 0xea4) = 0;
  *(undefined8 *)((longlong)local_650 + 0xeac) = 0;
  *(undefined8 *)((longlong)local_650 + 0xe94) = 0;
  *(undefined8 *)((longlong)local_650 + 0xe9c) = 0;
  if (iVar7 != 0) {
    lVar42 = 0;
    do {
      plVar18 = *(longlong **)((longlong)puVar15 + lVar42);
      if (((*(char *)((longlong)plVar18 + 0x14) == '\x01') &&
          (*(char *)((longlong)plVar18 + 0x15) == '\x01')) &&
         (*(char *)((longlong)plVar18 + 0x16) == '\x01')) {
        (**(code **)(*plVar18 + 8))(plVar18,&local_5c8);
      }
      lVar42 = lVar42 + 8;
    } while ((longlong)iVar7 * 8 != lVar42);
  }
  (*DAT_14ca79370)(local_650[0x15d],&local_5c8);
  puVar15 = local_5f8;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  if (lVar42 != 0) {
    lVar29 = 0;
    do {
      plVar18 = *(longlong **)((longlong)puVar15 + lVar29);
      if (((*(char *)((longlong)plVar18 + 0x14) == '\x01') &&
          (*(char *)((longlong)plVar18 + 0x15) == '\x01')) &&
         (*(char *)((longlong)plVar18 + 0x16) == '\x01')) {
        (**(code **)(*plVar18 + 0x10))();
      }
      lVar29 = lVar29 + 8;
    } while (lVar42 * 8 != lVar29);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar18 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Vulkan.VRSFormat",1);
  if (plVar18 == (longlong *)0x0) {
    lVar42 = 0;
  }
  else {
    lVar42 = (**(code **)(*plVar18 + 0x68))(plVar18);
  }
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar29 + 0xc60);
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar39 = 0;
  }
  else if (iVar7 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar39 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar39 = 1;
  }
  puVar15 = local_5f8;
  uVar34 = local_650[0x41f];
  if ((uVar34 & 0x10) == 0) {
    if (*(int *)(local_650 + 0x498) == 1) {
      local_650[0x49b] = 0;
      *(undefined4 *)(local_650 + 0x49c) = 0;
      local_650[0x41f] = uVar34 & 0xffffffffffffffcf;
      *(undefined4 *)(local_650 + 0x49f) = 0;
    }
  }
  else if ((*(int *)(local_650 + 0x498) == 1) && (*(int *)(lVar42 + uVar39 * 4) < 3)) {
    local_650[0x49b] = 0;
    *(undefined4 *)(local_650 + 0x49c) = 0;
    local_650[0x41f] = uVar34 & 0xffffffffffffffcf;
    *(undefined4 *)(local_650 + 0x49f) = 0;
  }
  else {
    *(undefined4 *)(local_650 + 0x498) = 0;
    local_650[0x497] = 0;
    _DAT_14ca84f32 = 0;
  }
  local_5c8._0_4_ = 3;
  local_5c8._4_4_ = 0;
  uStack_5c0._0_4_ = 0;
  uStack_5c0._4_4_ = 0;
  local_5b8 = 0;
  iStack_5b4 = 0;
  iStack_5b0 = 0;
  uStack_5ac = 0;
  iStack_5a8 = 0;
  uStack_5a4 = 0;
  uStack_5a0 = 0;
  uStack_59c = 0;
  uStack_598 = 0;
  uStack_596 = 0;
  uStack_595 = 0;
  local_594 = 0;
  uStack_593 = 0;
  uStack_592 = 0;
  local_590 = 0;
  local_588 = (wchar_t *)local_628;
  lVar42 = (longlong)(int)(uint)uStack_5f0;
  plVar18 = local_630;
  if (lVar42 != 0) {
    plVar25 = local_650 + 0x4ba;
    lVar36 = 0;
    do {
      lVar3 = *(longlong *)((longlong)puVar15 + lVar36);
      if (((*(char *)(lVar3 + 0x14) == '\x01') && (*(char *)(lVar3 + 0x15) == '\x01')) &&
         (*(char *)(lVar3 + 0x16) == '\x01')) {
        uVar17 = *(undefined8 *)(lVar3 + 8);
        iVar7 = *(int *)(local_650 + 0x4bb);
        *(uint *)(local_650 + 0x4bb) = iVar7 + 1U;
        if (*(uint *)((longlong)local_650 + 0x25dc) < iVar7 + 1U) {
          FUN_140ca86cc(plVar25,iVar7);
        }
        *(undefined8 *)(*plVar25 + (longlong)iVar7 * 8) = uVar17;
        plVar18 = *(longlong **)((longlong)puVar15 + lVar36);
        (**(code **)(*plVar18 + 0x28))(plVar18,&local_5c8);
        plVar18 = local_630;
      }
      lVar36 = lVar36 + 8;
    } while (lVar42 * 8 != lVar36);
  }
  uVar12 = *(undefined4 *)(local_650 + 0x4bb);
  uStack_598 = (undefined2)uVar12;
  uStack_596 = (undefined1)((uint)uVar12 >> 0x10);
  uStack_595 = (undefined1)((uint)uVar12 >> 0x18);
  local_590 = local_650[0x4ba];
  iStack_5a8 = (int)uStack_600;
  lVar42 = local_608;
  if ((int)uStack_600 == 0) {
    lVar42 = 0;
  }
  piVar32 = (int *)(lVar29 + 0xc60);
  uStack_5a0 = (undefined4)lVar42;
  uStack_59c = (undefined4)((ulonglong)lVar42 >> 0x20);
  local_278 = (undefined1  [8])0x0;
  uStack_270 = (int *)0x0;
  puVar15 = local_650;
  local_640 = piVar32;
  if (*(int *)(local_650 + 0x228) < 1) {
    local_5d8 = (char *)0x0;
    uStack_5d0 = 0;
    uVar30 = 0xffffffff;
    uVar31 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  else {
    lVar42 = 0;
    uVar30 = 0xffffffff;
    uVar39 = 0;
    uVar31 = 0xffffffff;
    uVar9 = 0xffffffff;
    uVar33 = 0;
    do {
      lVar36 = DAT_14ca77d08;
      lVar29 = *plVar18;
      bVar40 = uVar30 == 0xffffffff & (byte)*(uint *)(lVar29 + lVar42);
      uVar37 = (uint)uVar39;
      uVar11 = uVar37;
      if (bVar40 == 0) {
        uVar11 = uVar30;
      }
      uVar30 = uVar11;
      if (((*(uint *)(lVar29 + lVar42) & 2) == 0) || (uVar31 != 0xffffffff)) {
LAB_1431957e3:
        if (((*(uint *)(lVar29 + lVar42) & 4) == 0) || (uVar9 != 0xffffffff)) {
          if (bVar40 != 0) goto LAB_143195811;
        }
        else {
          uVar11 = *(uint *)(lVar29 + lVar42) & 3;
          uVar9 = -(uint)(uVar11 != 0) | uVar37;
          if (uVar11 == 0 || bVar40 != 0) goto LAB_143195811;
        }
      }
      else {
        iVar7 = *piVar32;
        if (iVar7 == 0x40000002) {
          uVar34 = 0;
        }
        else {
          bVar46 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
            if (iVar7 == 1) {
              uVar12 = FUN_140ad26c0();
              local_648 = (undefined8 *)CONCAT44(local_648._4_4_,uVar12);
              DVar13 = GetCurrentThreadId();
              bVar46 = (uint)local_648 == DVar13;
              piVar32 = local_640;
              plVar18 = local_630;
            }
            else {
              bVar46 = false;
            }
          }
          uVar34 = (ulonglong)(bVar46 ^ 1);
        }
        lVar3 = DAT_14ca77ff8;
        if (*(int *)(lVar36 + uVar34 * 4) == 0) {
          iVar7 = *piVar32;
          if (iVar7 == 0x40000002) {
            uVar34 = 0;
          }
          else {
            bVar46 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                local_648 = (undefined8 *)CONCAT44(local_648._4_4_,uVar33);
                uVar12 = FUN_140ad26c0();
                local_620 = (char *)CONCAT44(local_620._4_4_,uVar12);
                DVar13 = GetCurrentThreadId();
                bVar46 = (DWORD)local_620 == DVar13;
                piVar32 = local_640;
                plVar18 = local_630;
                uVar33 = (uint)local_648;
              }
              else {
                bVar46 = false;
              }
            }
            uVar34 = (ulonglong)(bVar46 ^ 1);
          }
          uVar31 = 0xffffffff;
          puVar15 = local_650;
          if (*(int *)(lVar3 + uVar34 * 4) == 0) goto LAB_1431957e3;
        }
        uVar31 = 0xffffffff;
        puVar15 = local_650;
        if (uVar39 == uVar30) goto LAB_1431957e3;
        uVar31 = uVar37;
        if (((*(uint *)(lVar29 + lVar42) & 4) != 0) && (uVar9 == 0xffffffff)) {
          uVar9 = -(uint)((*(uint *)(lVar29 + lVar42) & 3) != 0) | uVar37;
        }
LAB_143195811:
        uVar34 = (ulonglong)uStack_270;
        iVar7 = (int)uStack_270;
        lVar36 = (longlong)(int)uStack_270;
        uStack_270 = (int *)CONCAT44(uStack_270._4_4_,(int)uStack_270 + 1);
        if (uStack_270._4_4_ == iVar7) {
          local_648 = (undefined8 *)CONCAT44(local_648._4_4_,uVar33);
          FUN_1473a9efe(local_278,uVar34 & 0xffffffff);
          piVar32 = local_640;
          plVar18 = local_630;
          uVar33 = (uint)local_648;
        }
        puVar16 = (undefined8 *)((longlong)local_278 + lVar36 * 0x28);
        *puVar16 = 0;
        puVar16[1] = 0;
        puVar16 = (undefined8 *)((longlong)local_278 + 0x10 + lVar36 * 0x28);
        *puVar16 = 0;
        puVar16[1] = 0;
        *(undefined8 *)((longlong)local_278 + 0x20 + lVar36 * 0x28) = 0;
        *(undefined4 *)((longlong)local_278 + lVar36 * 0x28) = 2;
        *(uint *)((longlong)local_278 + 0x14 + lVar36 * 0x28) = uVar37;
        iVar7 = *(int *)(lVar29 + 4 + lVar42);
        *(int *)((longlong)local_278 + 0x18 + lVar36 * 0x28) = iVar7;
        uVar33 = uVar33 + iVar7;
      }
      uVar39 = uVar39 + 1;
      lVar42 = lVar42 + 0x18;
    } while ((longlong)uVar39 < (longlong)*(int *)(puVar15 + 0x228));
    local_5d8 = (char *)0x0;
    uStack_5d0 = (ulonglong)uVar33;
    if (uVar33 != 0) {
      FUN_14475e4ac(&local_5d8,0);
      plVar18 = local_630;
    }
  }
  if (0 < (int)uStack_270) {
    lVar42 = 0;
    pcVar43 = local_5d8;
    do {
      *(char **)((longlong)local_278 + 0x20 + lVar42 * 0x28) = pcVar43;
      lVar36 = (longlong)*(int *)((longlong)local_278 + 0x14 + lVar42 * 0x28);
      lVar29 = *plVar18;
      if (0 < *(int *)(lVar29 + 4 + lVar36 * 0x18)) {
        iVar7 = 0;
        do {
          pcVar43[0] = '\0';
          pcVar43[1] = '\0';
          pcVar43[2] = -0x80;
          pcVar43[3] = '?';
          pcVar43 = pcVar43 + 4;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar29 + lVar36 * 0x18 + 4));
      }
      lVar42 = lVar42 + 1;
    } while (lVar42 < (int)uStack_270);
  }
  iStack_5b4 = (int)uStack_270;
  iStack_5b0 = local_278._0_4_;
  uStack_5ac = local_278._4_4_;
  iVar7 = (*DAT_14ca79418)(puVar15[0x15d],&local_5c8,0,puVar15);
  if (iVar7 == -3) {
    FUN_14682f732(0,
                  L"Cannot create a Vulkan device. Try updating your video driver to a more recent version.\n"
                  ,L"Vulkan device creation failed");
    FUN_142797bc0(1,1,0);
LAB_143195a0a:
    FUN_1431b4552(iVar7,"Result",".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x18e);
  }
  else if (iVar7 < 0) goto LAB_143195a0a;
  uVar17 = FUN_14001cc68(0xc0,0x10);
  FUN_1473b8618(uVar17,puVar15,uVar30);
  puVar15[0x34e] = uVar17;
  lVar42 = DAT_14ca77d08;
  uVar33 = uVar30;
  if (uVar31 != 0xffffffff) {
    iVar7 = *local_640;
    if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
      uVar39 = 0;
    }
    else if (iVar7 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar39 = (ulonglong)(DVar13 != DVar14);
    }
    else {
      uVar39 = 1;
    }
    puVar15 = local_650;
    uVar33 = uVar31;
    if (*(int *)(lVar42 + uVar39 * 4) != 0) {
      *(undefined1 *)(local_650 + 0x352) = 1;
    }
  }
  uVar17 = FUN_14001cc68(0xc0,0x10);
  FUN_1473b8618(uVar17,puVar15,uVar33);
  puVar15[0x34f] = uVar17;
  if (uVar9 == 0xffffffff) {
    uVar9 = uVar33;
  }
  uVar17 = FUN_14001cc68(0xc0,0x10);
  FUN_1473b8618(uVar17,puVar15,uVar9);
  puVar15[0x350] = uVar17;
  iVar7 = *(int *)(puVar15[0x227] + 8 + (longlong)(int)uVar30 * 0x18);
  if (iVar7 != 0) {
    uVar39 = 0xffffffffffffffff;
    if (iVar7 != 0x40) {
      uVar39 = ~(-1L << ((byte)iVar7 & 0x3f));
    }
    puVar15[0x34d] = uVar39;
  }
  if ((*(byte *)(puVar15 + 0x41f) & 0x40) != 0) {
    local_618 = 0;
    (*DAT_14ca78df8)(puVar15[0x15d],&local_618,0);
    if (local_618 != 0) {
      FUN_1473a3ce8(puVar15 + 0x1c5);
      if (local_618 != 0) {
        uVar9 = 0;
        do {
          lVar42 = puVar15[0x1c5];
          lVar29 = (longlong)(int)uVar9 * 0x20;
          *(undefined4 *)(lVar42 + lVar29) = 0x3b9e3cd4;
          puVar16 = (undefined8 *)(lVar42 + 4 + lVar29);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar42 + 0x10 + lVar29);
          *puVar16 = 0;
          puVar16[1] = 0;
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_618);
      }
      (*DAT_14ca78df8)(puVar15[0x15d],&local_618,puVar15[0x1c5]);
      uVar39 = 0;
      do {
        uVar9 = 1 << ((byte)(uVar39 >> 2) & 0x1f);
        uVar31 = 1 << ((byte)uVar39 & 3);
        puVar28 = &DAT_100000001;
        if (uVar39 != 0) {
          if ((longlong)*(int *)(puVar15 + 0x1c6) == 0) {
            uVar30 = 1;
            uVar34 = 1;
          }
          else {
            uVar33 = 1;
            lVar42 = 0;
            uVar11 = 1;
            do {
              uVar37 = *(uint *)(puVar15[0x1c5] + 0x14 + lVar42);
              uVar2 = *(uint *)(puVar15[0x1c5] + 0x18 + lVar42);
              if ((uVar37 == uVar9) && (uVar2 == uVar31)) {
                uVar34 = (ulonglong)uVar31;
                uVar30 = uVar9;
                break;
              }
              if ((((uVar37 < uVar11) || (uVar9 < uVar37)) ||
                  ((uVar31 < uVar2 || (uVar30 = uVar37, uVar5 = uVar2, uVar2 < uVar33)))) &&
                 (uVar30 = uVar11, uVar5 = uVar33,
                 (uVar11 <= uVar37 && uVar37 <= uVar9) && (uVar2 <= uVar31 && uVar33 <= uVar2))) {
                uVar30 = uVar37;
                uVar5 = uVar2;
              }
              uVar33 = uVar5;
              uVar34 = (ulonglong)uVar33;
              lVar42 = lVar42 + 0x20;
              uVar11 = uVar30;
            } while ((longlong)*(int *)(puVar15 + 0x1c6) * 0x20 != lVar42);
          }
          puVar28 = (undefined1 *)((ulonglong)uVar30 | uVar34 << 0x20);
          puVar15 = local_650;
        }
        puVar15[uVar39 + 0x1c7] = puVar28;
        uVar39 = uVar39 + 1;
      } while (uVar39 != 0xb);
    }
  }
  lVar42 = DAT_14ca77d50;
  iVar7 = *local_640;
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar39 = 0;
  }
  else if (iVar7 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar39 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar39 = 1;
  }
  iVar7 = *(int *)(lVar42 + uVar39 * 4);
  DAT_14c760c6c = (uint)(iVar7 == 2) * 2;
  if (iVar7 == 1) {
    DAT_14c760c6c = 1;
  }
  if (local_5d8 != (char *)0x0) {
    FUN_1400020a8();
  }
  puVar15 = local_650;
  if (local_278 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  puVar16 = puVar15 + 0x229;
  uVar39 = 0;
  do {
    *(undefined4 *)(puVar16 + 1) = 0;
    *puVar16 = 0;
    (*DAT_14ca78e00)(puVar15[0x15d],uVar39 & 0xffffffff);
    uVar39 = uVar39 + 1;
    puVar16 = (undefined8 *)((longlong)puVar16 + 0xc);
  } while (uVar39 != 0xb9);
  pbVar20 = &DAT_14c873438;
  lVar42 = 0;
  do {
    pbVar20[-4] = 0;
    pbVar20[-3] = 0;
    pbVar20[-2] = 0;
    pbVar20[-1] = 0;
    *pbVar20 = *pbVar20 & 0xfe;
    *(undefined4 *)((longlong)&DAT_14ca78010 + lVar42) = 0;
    puVar21 = (undefined4 *)((longlong)puVar15 + lVar42 * 4 + 0x1aa8);
    *puVar21 = 3;
    puVar21[1] = 4;
    puVar21[2] = 5;
    puVar21[3] = 6;
    lVar42 = lVar42 + 4;
    pbVar20 = pbVar20 + 0x30;
  } while (lVar42 != 0x174);
  puVar15 = (undefined8 *)(local_278 + 4);
  local_278._0_4_ = 0x2c;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x14ca78002,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 9;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,3,&local_5c8,&DAT_14a3598d4);
  local_278 = (undefined1  [8])0x5a0000007a;
  uStack_270 = (int *)CONCAT44(uStack_270._4_4_,0x61);
  uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x220;
  local_5c8 = local_278;
  FUN_143192af0(local_650,9,&local_5c8,&DAT_14a3598b4);
  local_278._0_4_ = 0x61;
  local_660 = 8;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,10,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x7c;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0xc,&local_5c8,&DAT_14a3598e4);
  local_278._0_4_ = 0x67;
  local_660 = 8;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x11,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x6d;
  local_660 = 0x10;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,1,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x530000004d;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)&uStack_270;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0xe,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x53;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0xf,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x53;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x10,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x4a;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x20,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 0x4b;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x21,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 0x62;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x1c,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 99;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x1d,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 0xd;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar15;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x39,&local_5c8,&DAT_14a3598d4);
  local_5c8._0_4_ = 0x7d;
  local_5c8._4_4_ = 0x81;
  uStack_5c0._0_4_ = 0x80;
  uStack_5c0._4_4_ = 0x7e;
  local_5b8 = 0x82;
  uStack_270 = &iStack_5b4;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_278 = (undefined1  [8])&local_5c8;
  FUN_143192af0(local_650,0x14,local_278,&DAT_14a359904);
  local_278._0_4_ = 0x4c;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x15,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 0x4c;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x16,&local_5c8,&DAT_14a3598d4);
  local_278 = (undefined1  [8])0x5a0000007a;
  uStack_270._0_4_ = 0x61;
  uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x220;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x1a,&local_5c8,&DAT_14a3598b4);
  local_278._0_4_ = 0x40;
  local_660 = 4;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x12,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x610000005b;
  local_660 = 8;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)&uStack_270;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x13,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 9;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x1b,&local_5c8,&DAT_14a3598f4);
  local_278._0_4_ = 4;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x24,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x600000008;
  uStack_270 = (int *)CONCAT44(uStack_270._4_4_,0x2c);
  uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x48,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x25;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x25,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x29;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x3c,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x26;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x3d,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x51;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x31,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x52;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x5c,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x5f;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x22,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x60;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x23,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x65;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x44,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x6b;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x30,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x610000005c;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)&uStack_270;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x3f,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x610000005b;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)&uStack_270;
  local_5c8 = local_278;
  FUN_143192af0(local_650,0x3e,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x10;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x28,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x10;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x18,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 100;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0xd,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 9;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x47,&local_5c8,&DAT_14a3598d4);
  local_278._0_4_ = 0x4e;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x4e,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x14;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x4f,&local_5c8,&DAT_14a3598c4);
  local_278._0_4_ = 0x68;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x50,&local_5c8,&DAT_14a3598b4);
  local_278._0_4_ = 0x69;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x51,&local_5c8,&DAT_14a3598b4);
  local_278._0_4_ = 0x6a;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x52,&local_5c8,&DAT_14a3598b4);
  puVar16 = local_650;
  local_278._0_4_ = 0xe;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  uStack_5c0 = (char *)puVar15;
  FUN_143192af0(local_650,0x53,&local_5c8,&DAT_14a3598d4);
  if (2 < DAT_14c760db4) {
    local_278 = (undefined1  [8])0x650000006e;
    uStack_5c0 = (char *)&uStack_270;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x100800;
    local_5c8 = local_278;
    FUN_143192af0(puVar16,0x54,&local_5c8,&DAT_14a3598d4);
    uVar31 = DAT_14c8743f0 & 0xfffffde1;
    uVar9 = DAT_14c8743f0 >> 0x14;
    DAT_14c8743f0 = uVar31;
    if (((uVar9 & 1) == 0 & DAT_14ca84e0a) == 1) {
      DAT_14ca84e0a = 0;
    }
  }
  lVar42 = DAT_14ca77d38;
  iVar7 = *local_640;
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar39 = 0;
  }
  else if (iVar7 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar39 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar39 = 1;
  }
  puVar15 = local_650;
  if (*(int *)(lVar42 + uVar39 * 4) == 0) {
    local_278 = (undefined1  [8])0x8100000082;
    uStack_270._0_4_ = 0x80;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
    local_5c8 = local_278;
    FUN_143192af0(local_650,0xb,&local_5c8,&DAT_14a3598e4);
    local_278 = (undefined1  [8])0x8100000082;
    uStack_270 = (int *)CONCAT44(uStack_270._4_4_,0x80);
    local_660 = 0xffffffff;
    local_668 = CONCAT44(local_668._4_4_,0x200);
    uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
    local_5c8 = local_278;
    FUN_143192af0(puVar15,0x2c,&local_5c8,&DAT_14a359914);
  }
  else {
    local_278 = (undefined1  [8])0x8200000081;
    uStack_270._0_4_ = 0x80;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
    local_5c8 = local_278;
    FUN_143192af0(local_650,0xb,&local_5c8,&DAT_14a3598e4);
    local_278 = (undefined1  [8])0x8200000081;
    uStack_270 = (int *)CONCAT44(uStack_270._4_4_,0x80);
    local_660 = 0xffffffff;
    local_668 = CONCAT44(local_668._4_4_,0x200);
    uStack_5c0 = (char *)((longlong)&uStack_270 + 4);
    local_5c8 = local_278;
    FUN_143192af0(puVar15,0x2c,&local_5c8,&DAT_14a359914);
    DAT_14c873648 = DAT_14c873648 | 2;
  }
  local_278._0_4_ = 0x83;
  puVar16 = (undefined8 *)(local_278 + 4);
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,5,&local_5c8,&DAT_14a3598b4);
  local_278._0_4_ = 0x87;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,6,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x89;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,7,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x8b;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,0x27,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x8d;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,0x17,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x8f;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,0x37,&local_5c8,&DAT_14a3598a4);
  local_278._0_4_ = 0x91;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  uStack_5c0 = (char *)puVar16;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,0x38,&local_5c8,&DAT_14a3598a4);
  local_278 = (undefined1  [8])0x4c00000046;
  uStack_5c0 = (char *)&uStack_270;
  local_660 = 0xffffffff;
  local_668._0_4_ = 0x200;
  local_5c8 = local_278;
  FUN_143192af0(puVar15,4,&local_5c8,&DAT_14a3598d4);
  puVar19 = local_650;
  uVar39 = puVar15[0x41f];
  if ((uVar39 >> 0x28 & 1) != 0) {
    local_278._0_4_ = 0x3b9bcbd0;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)puVar16;
    local_5c8 = local_278;
    FUN_143192af0(local_650,0x49,&local_5c8,&DAT_14a3598a4);
    local_278._0_4_ = 0x3b9bcbd4;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)puVar16;
    local_5c8 = local_278;
    FUN_143192af0(puVar19,0x4a,&local_5c8,&DAT_14a3598a4);
    local_278._0_4_ = 0x3b9bcbd7;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)puVar16;
    local_5c8 = local_278;
    FUN_143192af0(puVar19,0x4b,&local_5c8,&DAT_14a3598a4);
    local_278._0_4_ = 0x3b9bcbdb;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)puVar16;
    local_5c8 = local_278;
    FUN_143192af0(puVar19,0x4c,&local_5c8,&DAT_14a3598a4);
    local_278._0_4_ = 0x3b9bcbdd;
    local_660 = 0xffffffff;
    local_668._0_4_ = 0x200;
    uStack_5c0 = (char *)puVar16;
    local_5c8 = local_278;
    FUN_143192af0(puVar19,0x4d,&local_5c8,&DAT_14a3598a4);
    uVar39 = puVar19[0x41f];
  }
  if (((uint)uVar39 >> 0x16 & 1) != 0) {
    DAT_14c873430._1_1_ = DAT_14c873430._1_1_ | 2;
  }
  iVar7 = 1;
  do {
    switch(iVar7) {
    case 1:
      uVar17 = 100;
      break;
    case 2:
      uVar17 = 0x67;
      break;
    case 3:
      uVar17 = 0x6a;
      break;
    case 4:
      uVar17 = 0x6d;
      break;
    case 5:
      uVar17 = 0x26;
      break;
    case 6:
      uVar17 = 0x29;
      break;
    case 7:
      uVar17 = 0x25;
      break;
    case 8:
      uVar17 = 0x2c;
      break;
    case 9:
      uVar17 = 0x52;
      break;
    case 10:
      uVar17 = 0x60;
      break;
    case 0xb:
      uVar17 = 0x4e;
      break;
    case 0xc:
      uVar17 = 0x53;
      break;
    case 0xd:
      uVar17 = 0x61;
      break;
    case 0xe:
      uVar17 = 0x5c;
      break;
    case 0xf:
      uVar17 = 0x51;
      break;
    case 0x10:
      uVar17 = 0x5f;
      break;
    case 0x11:
      uVar17 = 0x4d;
      break;
    case 0x12:
      uVar17 = 0x5b;
      break;
    case 0x13:
      uVar17 = 0x40;
      break;
    case 0x14:
      goto switchD_143196c58_caseD_14;
    default:
      uVar17 = 0;
    }
    FUN_1473a3d30(local_650,uVar17);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x15);
switchD_143196c58_caseD_14:
  pbVar20 = &DAT_14c873438;
  lVar42 = 0;
  do {
    iVar7 = 0;
    if ((*pbVar20 & 1) != 0) {
      iVar7 = *(int *)(pbVar20 + -4);
      if (iVar7 < 0x2c) {
        if (iVar7 < 0x17) {
          if (iVar7 == 9) {
            iVar8 = 9;
            if (1 < DAT_14c760db4) {
              iVar8 = 0xf;
            }
          }
          else {
            if (iVar7 != 0x10) goto switchD_143196d3d_caseD_84;
            iVar8 = 0x16;
          }
        }
        else if (iVar7 == 0x17) {
          iVar8 = 0x1d;
        }
        else {
          if (iVar7 != 0x25) goto switchD_143196d3d_caseD_84;
          iVar8 = 0x2b;
        }
      }
      else {
        switch(iVar7) {
        case 0x83:
          iVar8 = 0x84;
          break;
        case 0x84:
        case 0x86:
        case 0x88:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x8f:
        case 0x90:
        case 0x92:
        case 0x94:
        case 0x96:
        case 0x98:
        case 0x99:
        case 0x9a:
        case 0x9b:
        case 0x9c:
        case 0x9e:
        case 0xa0:
        case 0xa2:
        case 0xa4:
        case 0xa6:
        case 0xa8:
        case 0xaa:
        case 0xac:
        case 0xae:
        case 0xb0:
        case 0xb2:
        case 0xb4:
        case 0xb6:
          goto switchD_143196d3d_caseD_84;
        case 0x85:
          iVar8 = 0x86;
          break;
        case 0x87:
          iVar8 = 0x88;
          break;
        case 0x89:
          iVar8 = 0x8a;
          break;
        case 0x91:
          iVar8 = 0x92;
          break;
        case 0x93:
          iVar8 = 0x94;
          break;
        case 0x95:
          iVar8 = 0x96;
          break;
        case 0x97:
          iVar8 = 0x98;
          break;
        case 0x9d:
          iVar8 = 0x9e;
          break;
        case 0x9f:
          iVar8 = 0xa0;
          break;
        case 0xa1:
          iVar8 = 0xa2;
          break;
        case 0xa3:
          iVar8 = 0xa4;
          break;
        case 0xa5:
          iVar8 = 0xa6;
          break;
        case 0xa7:
          iVar8 = 0xa8;
          break;
        case 0xa9:
          iVar8 = 0xaa;
          break;
        case 0xab:
          iVar8 = 0xac;
          break;
        case 0xad:
          iVar8 = 0xae;
          break;
        case 0xaf:
          iVar8 = 0xb0;
          break;
        case 0xb1:
          iVar8 = 0xb2;
          break;
        case 0xb3:
          iVar8 = 0xb4;
          break;
        case 0xb5:
          iVar8 = 0xb6;
          break;
        case 0xb7:
          iVar8 = 0xb8;
          break;
        default:
          if (iVar7 == 0x2c) {
            iVar8 = 0x32;
          }
          else {
            if (iVar7 != 0x33) goto switchD_143196d3d_caseD_84;
            iVar8 = 0x39;
          }
        }
      }
      if (iVar8 != iVar7) {
        lVar29 = FUN_1473a3d30(local_650,iVar8);
        if ((*(byte *)(lVar29 + 4) & 1) != 0) {
          iVar7 = iVar8;
        }
      }
    }
switchD_143196d3d_caseD_84:
    puVar15 = local_650;
    *(int *)((longlong)&DAT_14ca781f0 + lVar42) = iVar7;
    lVar42 = lVar42 + 4;
    pbVar20 = pbVar20 + 0x30;
  } while (lVar42 != 0x174);
  puVar16 = local_650 + 1;
  FUN_1473a3ec0(puVar16,local_650);
  FUN_1473a3fa6(puVar15 + 0x7b);
  puVar15[200] = puVar15;
  puVar15[199] = puVar15;
  cVar6 = FUN_1474121fd();
  if (cVar6 != '\0') {
    local_5c8._0_4_ = 0xc;
    iStack_5b4 = 0;
    local_5c8._4_4_ = 0;
    uStack_5c0._0_4_ = 0;
    uStack_5c0._4_4_ = 0;
    local_5b8 = 0;
    uStack_5a4 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_598 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    local_594 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    iStack_5b0 = 0x2000;
    uStack_5ac = 0;
    iStack_5a8 = 2;
    iVar7 = (*DAT_14ca793e8)(*puVar15,&local_5c8,0,puVar15 + 0x353);
    if (iVar7 != 0) {
      FUN_1431b4552(iVar7,
                    "VulkanRHI::vkCreateBuffer(Device, &CreateInfo, VULKAN_CPU_ALLOCATOR, &CrashMarker.Buffer)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x4ab);
    }
    local_278 = (undefined1  [8])0x0;
    uStack_270 = (int *)0x0;
    local_268 = 0;
    (*DAT_14ca78e10)(*puVar15,puVar15[0x353],local_278);
    uVar17 = FUN_1473a4480(puVar16,CONCAT44(uStack_5ac,iStack_5b0),local_268 & 0xffffffff);
    puVar15[0x354] = uVar17;
    puVar21 = (undefined4 *)FUN_1473a4520(uVar17,0xffffffffffffffff);
    *puVar21 = 0;
    iVar7 = (*DAT_14ca78e18)(*puVar15,puVar15[0x353],*(undefined8 *)(puVar15[0x354] + 0x10),0);
    if (iVar7 != 0) {
      FUN_1431b4552(iVar7,
                    "VulkanRHI::vkBindBufferMemory(Device, CrashMarker.Buffer, CrashMarker.Allocation->GetHandle(), 0)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x4b8);
    }
  }
  uVar17 = FUN_14001cc68(0xb8,0x10);
  FUN_1473a457e(uVar17,puVar15);
  puVar15[0xd2] = uVar17;
  if (DAT_14c760db4 < 2) {
    uVar17 = FUN_14001cc68(0x28,0x10);
    FUN_1473b1012(uVar17,puVar15);
    puVar15[0xd4] = uVar17;
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar16 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar16 + 2),4000);
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar15[0xd5] = puVar16;
  *puVar16 = puVar15;
  uVar17 = FUN_14001cc68(0x4d8,0x10);
  FUN_1473a19e6(uVar17,puVar15);
  puVar15[0xd6] = uVar17;
  FUN_1473a1c0a(uVar17);
  uVar17 = FUN_14001cc68(0x310,0x10);
  FUN_1473b1e9a(uVar17,puVar15);
  puVar15[0x4bd] = uVar17;
  FUN_1473a45f8(&local_618);
  puVar15 = (undefined8 *)FUN_14047ac8c();
  uStack_5c0._0_4_ = *(uint *)(puVar15 + 1);
  lVar42 = (longlong)(int)(uint)uStack_5c0;
  local_5c8._0_4_ = 0;
  local_5c8._4_4_ = 0;
  pvVar38 = (void *)*puVar15;
  FUN_1446dd670(&local_5c8,(lVar42 == 0) + (uint)uStack_5c0 + 0x10,0);
  if (lVar42 != 0) {
    memcpy((void *)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8),pvVar38,lVar42 * 2);
  }
  FUN_1401aebe8(&local_5c8,L"VulkanPSO.cache",0xf);
  uVar9 = local_610;
  lVar42 = (longlong)(int)local_610;
  local_610 = local_610 + 1;
  if (local_60c < local_610) {
    FUN_1447a1bd6(&local_618,uVar9);
  }
  puVar16 = local_650;
  lVar29 = CONCAT44(uStack_614,local_618);
  lVar42 = lVar42 * 0x10;
  *(undefined8 *)(lVar29 + lVar42) = 0;
  *(ulonglong *)(lVar29 + lVar42) = CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
  *(uint *)(lVar29 + 8 + lVar42) = (uint)uStack_5c0;
  *(int *)(lVar29 + 0xc + lVar42) = uStack_5c0._4_4_;
  uStack_5c0._4_4_ = 0;
  uStack_5c0._0_4_ = 0;
  local_5c8._4_4_ = 0;
  local_5c8._0_4_ = 0;
  puVar15 = (undefined8 *)FUN_14001cc68(0x588,0x10);
  local_668 = 0;
  FUN_1473be18c(puVar15,DAT_14ca79348,puVar16,puVar16[0x34e]);
  *puVar15 = &PTR_FUN_14a3622e0;
  puVar16[0x419] = puVar15;
  lVar42 = DAT_14ca77d08;
  if (*(int *)(puVar16[0x34e] + 8) != *(int *)(puVar16[0x34f] + 8)) {
    iVar7 = *local_640;
    if (iVar7 == 0x40000002) {
      uVar39 = 0;
    }
    else {
      bVar46 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar46 = DVar13 == DVar14;
        }
        else {
          bVar46 = false;
        }
      }
      uVar39 = (ulonglong)(bVar46 ^ 1);
    }
    if (*(int *)(lVar42 + uVar39 * 4) == 0) {
      puVar15 = (undefined8 *)local_650[0x419];
      puVar16 = local_650;
    }
    else {
      puVar15 = (undefined8 *)FUN_14001cc68(0x588,0x10);
      puVar16 = local_650;
      local_668 = 0;
      FUN_1473be18c(puVar15,DAT_14ca79348,local_650,local_650[0x34f]);
      *puVar15 = &PTR_FUN_14a3622e0;
    }
  }
  puVar16[0x41a] = puVar15;
  iVar7 = (**(code **)(*DAT_14ca788e0 + 0xb0))();
  if ((1 < iVar7) && (iVar7 = (**(code **)(*DAT_14c82b500 + 0x20))(), 0 < iVar7)) {
    do {
      uVar17 = FUN_14001cc68(0x588,0x10);
      local_668 = puVar16[0x419];
      FUN_1473be18c(uVar17,DAT_14ca79348,puVar16,puVar16[0x34e]);
      iVar8 = *(int *)(puVar16 + 0x41c);
      *(uint *)(puVar16 + 0x41c) = iVar8 + 1U;
      if (*(uint *)((longlong)puVar16 + 0x20e4) < iVar8 + 1U) {
        FUN_1473aa638(puVar16 + 0x41b,iVar8);
      }
      *(undefined8 *)(puVar16[0x41b] + (longlong)iVar8 * 8) = uVar17;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((*(byte *)(puVar16 + 0x41f) & 1) == 0) goto LAB_1431974d2;
  uVar17 = *puVar16;
  local_5c8._0_4_ = 0x3b9d3b00;
  local_5c8._4_4_ = 0;
  uStack_5c0._0_4_ = 0;
  uStack_5c0._4_4_ = 0;
  local_5b8 = 0;
  iStack_5b4 = 0;
  iStack_5b0 = 0;
  uStack_5ac = 0;
  local_278 = (undefined1  [8])0x0;
  uStack_270 = (int *)0x0;
  puVar15 = (undefined8 *)FUN_14047ac8c();
  iVar7 = *(int *)(puVar15 + 1);
  lVar42 = (longlong)iVar7;
  local_5d8 = (char *)0x0;
  pvVar38 = (void *)*puVar15;
  uStack_5d0 = CONCAT44(uStack_5d0._4_4_,iVar7);
  FUN_1446dd670(&local_5d8,(uint)(lVar42 == 0) + iVar7 + 0x17,0);
  if (lVar42 != 0) {
    memcpy(local_5d8,pvVar38,lVar42 * 2);
  }
  FUN_1401aebe8(&local_5d8,L"VulkanValidation.cache",0x16);
  pcVar43 = local_5d8;
  if ((int)uStack_5d0 == 0) {
    pcVar43 = "";
  }
  bVar40 = FUN_14158b496(local_278,pcVar43,2);
  if ((0 < (int)uStack_270 & bVar40) == 1) {
    if ((*(int *)local_278 < 1) ||
       (auVar22 = local_278, iVar7 = (int)uStack_270, *(int *)((longlong)local_278 + 4) != 1)) {
      bVar46 = (longlong)uStack_270 < 0;
      uStack_270 = (int *)((ulonglong)uStack_270 & 0xffffffff00000000);
      auVar22 = (undefined1  [8])(int *)0x0;
      iVar7 = 0;
      if (bVar46) {
        FUN_144893a1c(local_278);
        goto LAB_14319745d;
      }
    }
    uStack_5ac = 0;
    iStack_5b0 = iVar7;
  }
  else {
LAB_14319745d:
    uStack_5ac = (int)uStack_270 >> 0x1f;
    auVar22 = local_278;
    iStack_5b0 = (int)uStack_270;
    if ((int)uStack_270 < 1) {
      auVar22 = (undefined1  [8])(int *)0x0;
    }
  }
  iStack_5a8 = SUB84(auVar22,0);
  uStack_5a4 = (undefined4)((ulonglong)auVar22 >> 0x20);
  pcVar23 = (code *)(*DAT_14ca79378)(uVar17,"vkCreateValidationCacheEXT");
  if (pcVar23 != (code *)0x0) {
    (*pcVar23)(uVar17,&local_5c8,0,puVar16 + 0x4bc);
  }
  if (local_5d8 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (local_278 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
LAB_1431974d2:
  FUN_1473988c8();
  FUN_1431a2c26(puVar16[0x4bd],&local_618);
  local_278 = (undefined1  [8])0x0;
  uStack_270 = (int *)0x7f7fffff00000000;
  local_268 = 0;
  local_260 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_5c8);
  lVar42 = CONCAT44(local_5c8._4_4_,(undefined4)local_5c8);
  puVar16[0x15b] = lVar42;
  if (lVar42 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar42 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar42 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar40 = *(byte *)(lVar42 + 0xd);
        plVar24 = (longlong *)FUN_14001cc68(0x10,8);
        plVar24[1] = lVar42;
        plVar18 = DAT_14ca843c0;
        plVar25 = DAT_14ca843c8;
        if ((bVar40 & 2) == 0) {
          do {
            *plVar24 = (longlong)plVar18;
            LOCK();
            bVar46 = plVar18 != DAT_14ca843c0;
            plVar25 = plVar24;
            if (bVar46) {
              plVar18 = DAT_14ca843c0;
              plVar25 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar25;
            UNLOCK();
          } while (bVar46);
        }
        else {
          do {
            *plVar24 = (longlong)plVar25;
            LOCK();
            bVar46 = plVar25 != DAT_14ca843c8;
            plVar18 = plVar24;
            if (bVar46) {
              plVar25 = DAT_14ca843c8;
              plVar18 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar18;
            UNLOCK();
          } while (bVar46);
        }
      }
    }
  }
  uStack_5ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_580 = 0;
  uStack_578 = 0;
  local_570 = 0;
  uStack_5c0._4_4_ = DAT_14ca8508c;
  local_5b8 = DAT_14ca85090;
  iStack_5b4 = DAT_14ca85094;
  iStack_5b0 = DAT_14ca85098;
  uStack_596 = 0;
  local_5c8._0_4_ = 9;
  local_5c8._4_4_ = 0;
  uStack_595 = 2;
  local_594 = 0;
  uStack_5a4 = 1;
  uStack_5a0 = 1;
  uStack_59c = 0x10001;
  uStack_598 = 0x101;
  uStack_5c0._0_4_ = DAT_14ca85088;
  iStack_5a8 = 0;
  uStack_593 = 0xff;
  local_590 = CONCAT44(local_590._4_4_,0x70);
  local_588 = L"FVulkanDevice_DefaultImage";
  uVar17 = FUN_14001cc68(0x118,0x10);
  puVar15 = local_650;
  local_668 = 0;
  FUN_1431b6a70(uVar17,0,local_650,&local_5c8);
  puVar15[0x15c] = uVar17;
  if (((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0x3c + 2) & 0x40) != 0) &&
     ((~puVar15[0x41f] & 0x5c0002400) == 0 && (puVar15[0x41f] & 0x1800) != 0)) {
    uVar17 = FUN_14001cc68(0x78,0x10);
    FUN_1473ba492(uVar17,puVar15);
    puVar15[0x1de] = uVar17;
  }
  FUN_1447a1747(CONCAT44(uStack_614,local_618),local_610);
  if (CONCAT44(uStack_614,local_618) != 0) {
    FUN_1400020a8();
  }
  if (local_608 != 0) {
    FUN_1400020a8();
  }
  FUN_1473aa604(local_5f8,uStack_5f0 & 0xffffffff);
  if (local_5f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143194c5a:
  memcpy(local_278,_Str1,0x218);
  memcpy(_Str1,pcVar27,0x218);
  memcpy(pcVar27,local_278,0x218);
  iVar7 = (uint)local_648 + -1;
  pcVar44 = pcVar44 + -0x430;
  if ((longlong)pcVar35 - (longlong)local_620 < (longlong)local_640 - (longlong)pcVar26) {
    plVar18 = local_638;
    if (pcVar45 < pcVar43) {
      *local_638 = (longlong)pcVar45;
      local_638[1] = (longlong)pcVar43;
      *(int *)(local_638 + 2) = iVar7;
      plVar18 = local_638 + 3;
    }
    pcVar45 = _Str1;
    if (pcVar27 <= _Str1 + 0x218) goto LAB_143195046;
  }
  else {
    if (_Str1 + 0x218 < pcVar27) {
      *local_638 = (longlong)_Str1;
      local_638[1] = (longlong)pcVar44;
      *(int *)(local_638 + 2) = iVar7;
      local_638 = local_638 + 3;
    }
    plVar18 = local_638;
    pcVar35 = pcVar43;
    _Str1 = pcVar26;
    pcVar44 = pcVar43;
    if (pcVar43 <= pcVar45) goto LAB_143195046;
  }
  local_638 = plVar18;
  iVar8 = (int)((ulonglong)((longlong)pcVar35 - (longlong)_Str1) >> 3) * 0x7a44c6b;
  uVar39 = (ulonglong)(iVar8 + 1);
  pcVar27 = _Str1;
  _Str1 = pcVar45;
  pcVar43 = pcVar44;
  if (iVar7 == 0) goto LAB_143194d4a;
  goto LAB_143194b4a;
}



// FUNCTION 143197808 FUN_143197808 body=368 status=ok
// SIG undefined FUN_143197808(void)

void FUN_143197808(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  uVar3 = *(uint *)((undefined8 *)*param_2 + 4);
  if ((uVar3 >> 0xc & 1) == 0) {
    local_40 = *(undefined8 *)*param_2;
    local_48[0] = uVar3 & 0xff;
    uVar3 = (*(code *)PTR_FUN_14c75b148)(&local_40,8,0);
    iVar4 = (*(code *)PTR_FUN_14c75b148)(local_48,4,0);
    uVar7 = uVar3 >> 0xd ^ iVar4 - uVar3;
    uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar3) - uVar7;
    uVar3 = uVar5 >> 0xd ^ (uVar3 - uVar7) - uVar5;
    uVar7 = uVar3 >> 0xc ^ (uVar7 - uVar5) - uVar3;
    uVar5 = uVar7 << 0x10 ^ (uVar5 - uVar3) - uVar7;
    uVar3 = uVar5 >> 5 ^ (uVar3 - uVar7) - uVar5;
    uVar7 = uVar3 >> 3 ^ (uVar7 - uVar5) - uVar3;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar3) - uVar7;
    lVar6 = FUN_1473ad9f6(param_1,uVar5 >> 0xf ^ uVar3 - (uVar7 + uVar5),local_48);
    uVar2 = DAT_14c7590b0;
    lVar1 = *param_2;
    iVar4 = *(int *)(lVar6 + 0x18);
    *(uint *)(lVar6 + 0x18) = iVar4 + 1U;
    if (*(uint *)(lVar6 + 0x1c) < iVar4 + 1U) {
      FUN_1473ae0f8((longlong *)(lVar6 + 0x10),iVar4);
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar1;
    *(undefined4 *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = uVar2;
  }
  else {
    FUN_14319d6a4(param_1);
  }
  *param_2 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143197987 FUN_143197987 body=69 status=ok
// SIG undefined FUN_143197987(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143197987(void)

{
  _DAT_14ca77d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431979c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77d88,1);
  return;
}



// FUNCTION 1431979cc FUN_1431979cc body=69 status=ok
// SIG undefined FUN_1431979cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431979cc(void)

{
  _DAT_14ca77d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143197a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77da0,1);
  return;
}



// FUNCTION 143197a11 FUN_143197a11 body=69 status=ok
// SIG undefined FUN_143197a11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143197a11(void)

{
  _DAT_14ca77fb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143197a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77fc0,1);
  return;
}



// FUNCTION 143197a56 FUN_143197a56 body=69 status=ok
// SIG undefined FUN_143197a56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143197a56(void)

{
  _DAT_14ca77db0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143197a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77db8,1);
  return;
}



// FUNCTION 143197a9b FUN_143197a9b body=69 status=ok
// SIG undefined FUN_143197a9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143197a9b(void)

{
  _DAT_14ca77dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143197add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77dd0,1);
  return;
}



// FUNCTION 143197ae0 FUN_143197ae0 body=69 status=ok
// SIG undefined FUN_143197ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143197ae0(void)

{
  _DAT_14ca77de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143197b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77de8,1);
  return;
}



// FUNCTION 143197b25 FUN_143197b25 body=59 status=ok
// SIG undefined FUN_143197b25(void)

void FUN_143197b25(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14ca77fe0;
  if (DAT_14ca77fe0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14ca77fe0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143197b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143197b82 FUN_143197b82 body=1828 status=ok
// SIG undefined FUN_143197b82(void)

longlong * FUN_143197b82(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar9;
  longlong *plVar10;
  char *_Str2;
  char *_Str1;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  float fVar19;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  ulonglong local_480;
  longlong *local_478;
  char *local_470;
  char *local_468;
  uint local_45c;
  longlong local_458;
  longlong local_450;
  undefined4 local_448 [191];
  undefined1 local_14c [260];
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_45c = 0;
  iVar4 = (*DAT_14ca79388)(param_2,param_3,&local_45c,0);
  if (iVar4 < 0 && iVar4 != -3) {
    FUN_1431b4552(iVar4,
                  "VulkanRHI::vkEnumerateDeviceExtensionProperties(Gpu, LayerName, &Count, nullptr)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanExtensions.cpp",0x7e);
  }
  lVar11 = (longlong)(int)local_45c;
  if (lVar11 != 0) {
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + local_45c;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < local_45c) {
      FUN_1473aa816(param_1);
    }
    memset((void *)((longlong)iVar4 * 0x104 + *param_1),0,lVar11 * 0x104);
    iVar4 = (*DAT_14ca79388)(param_2,param_3,&local_45c,*param_1);
    if (iVar4 < 0 && iVar4 != -3) {
      FUN_1431b4552(iVar4,
                    "VulkanRHI::vkEnumerateDeviceExtensionProperties(Gpu, LayerName, &Count, OutDeviceExtensions.GetData())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanExtensions.cpp",0x82);
    }
  }
  iVar4 = (int)param_1[1];
  if (1 < (longlong)iVar4) {
    lVar11 = *param_1;
    local_478 = param_1;
    memset(local_448,0,0x2f0);
    local_450 = (longlong)iVar4 * 0x104 + lVar11 + -0x104;
    local_458 = lVar11;
    fVar19 = logf((float)iVar4);
    local_448[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_458;
    do {
      _Str1 = (char *)*plVar10;
      pcVar14 = (char *)plVar10[1];
      iVar4 = (int)plVar10[2];
      iVar5 = (int)((ulonglong)((longlong)pcVar14 - (longlong)_Str1) >> 2) * -0x3f03f03f;
      uVar13 = (ulonglong)(iVar5 + 1);
      pcVar18 = _Str1;
      pcVar17 = pcVar14;
      local_488 = plVar10;
      if (iVar4 != 0) {
LAB_143197d1f:
        if (8 < (int)(uint)uVar13) {
          local_480 = CONCAT44(local_480._4_4_,iVar4);
          local_470 = pcVar18;
          local_468 = pcVar17;
          memcpy(local_14c,_Str1 + (ulonglong)((uint)uVar13 >> 1) * 0x104,0x104);
          memcpy(_Str1 + (ulonglong)((uint)uVar13 >> 1) * 0x104,_Str1,0x104);
          memcpy(_Str1,local_14c,0x104);
          pcVar9 = pcVar14 + 0x104;
          _Str2 = _Str1;
          do {
            pcVar17 = _Str2 + 0x104;
            pcVar3 = _Str2 + 0x104;
            do {
              _Str2 = pcVar3;
              pcVar18 = pcVar17;
              if (pcVar14 < _Str2) break;
              iVar4 = strcmp(_Str1,_Str2);
              pcVar17 = pcVar18 + 0x104;
              pcVar3 = _Str2 + 0x104;
            } while (-1 < iVar4);
            pcVar3 = pcVar9 + -0x208;
            do {
              pcVar12 = pcVar9;
              pcVar17 = pcVar3;
              pcVar9 = pcVar12 + -0x104;
              if (pcVar9 <= _Str1) break;
              iVar4 = strcmp(pcVar9,_Str1);
              pcVar3 = pcVar17 + -0x104;
            } while (-1 < iVar4);
            if (pcVar9 < _Str2) goto LAB_143197e35;
            memcpy(local_14c,_Str2,0x104);
            memcpy(_Str2,pcVar9,0x104);
            memcpy(pcVar9,local_14c,0x104);
          } while( true );
        }
        for (; plVar10 = local_488, pcVar17 = _Str1, pcVar18 = _Str1, _Str1 < pcVar14;
            pcVar14 = pcVar14 + -0x104) {
          while (pcVar9 = pcVar17, pcVar18 = pcVar18 + 0x104, pcVar18 <= pcVar14) {
            iVar4 = strcmp(pcVar9,pcVar18);
            pcVar17 = pcVar18;
            if (-1 < iVar4) {
              pcVar17 = pcVar9;
            }
          }
          memcpy(local_14c,pcVar9,0x104);
          memcpy(pcVar9,pcVar14,0x104);
          memcpy(pcVar14,local_14c,0x104);
        }
        goto LAB_14319824f;
      }
LAB_143197f22:
      iVar4 = (int)uVar13;
      plVar10 = local_488;
      if (iVar4 != 0) {
        uVar6 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar8 = (ulonglong)uVar6;
          local_480 = uVar8;
          while (uVar2 = uVar6 * 2 + 1, (int)uVar2 < iVar4) {
            uVar15 = uVar6 * 2 + 2;
            uVar6 = uVar2;
            if (((int)uVar15 < iVar4) &&
               (iVar5 = strcmp(_Str1 + (longlong)(int)uVar15 * 0x104,
                               _Str1 + (longlong)(int)uVar2 * 0x104), -1 < iVar5)) {
              uVar6 = uVar15;
            }
            pcVar18 = _Str1 + (longlong)(int)uVar8 * 0x104;
            pcVar14 = _Str1 + (longlong)(int)uVar6 * 0x104;
            iVar5 = strcmp(pcVar18,pcVar14);
            if (-1 < iVar5) break;
            memcpy(local_14c,pcVar18,0x104);
            memcpy(pcVar18,pcVar14,0x104);
            memcpy(pcVar14,local_14c,0x104);
            uVar8 = (ulonglong)uVar6;
          }
          uVar6 = (int)local_480 - 1;
        } while ((int)local_480 != 0);
        plVar10 = local_488;
        if (1 < iVar4) {
          memcpy(local_14c,_Str1,0x104);
          memcpy(_Str1,_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,0x104);
          memcpy(_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,local_14c,0x104);
          plVar10 = local_488;
          uVar13 = uVar13 - 1;
          if (iVar4 != 2) {
            do {
              iVar4 = 0;
              iVar7 = 1;
              iVar5 = 0;
              do {
                iVar4 = iVar4 + 2;
                iVar16 = iVar7;
                if (((longlong)iVar4 < (longlong)uVar13) &&
                   (iVar7 = strcmp(_Str1 + (longlong)iVar4 * 0x104,_Str1 + (longlong)iVar7 * 0x104),
                   -1 < iVar7)) {
                  iVar16 = iVar4;
                }
                pcVar18 = _Str1 + (longlong)iVar5 * 0x104;
                pcVar14 = _Str1 + (longlong)iVar16 * 0x104;
                iVar4 = strcmp(pcVar18,pcVar14);
                if (-1 < iVar4) break;
                memcpy(local_14c,pcVar18,0x104);
                memcpy(pcVar18,pcVar14,0x104);
                memcpy(pcVar14,local_14c,0x104);
                iVar4 = iVar16 * 2;
                iVar7 = iVar16 * 2 + 1;
                iVar5 = iVar16;
              } while ((longlong)iVar7 < (longlong)uVar13);
              memcpy(local_14c,_Str1,0x104);
              memcpy(_Str1,_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,0x104);
              memcpy(_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,local_14c,0x104);
              bVar1 = 2 < uVar13;
              plVar10 = local_488;
              uVar13 = uVar13 - 1;
            } while (bVar1);
          }
        }
      }
LAB_14319824f:
      plVar10 = plVar10 + -3;
      param_1 = local_478;
    } while (&local_458 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_143197e35:
  memcpy(local_14c,_Str1,0x104);
  memcpy(_Str1,pcVar9,0x104);
  memcpy(pcVar9,local_14c,0x104);
  iVar4 = (int)local_480 + -1;
  pcVar12 = pcVar12 + -0x208;
  if ((longlong)pcVar17 - (longlong)local_470 < (longlong)local_468 - (longlong)pcVar18) {
    if (_Str2 < pcVar14) {
      *local_488 = (longlong)_Str2;
      local_488[1] = (longlong)pcVar14;
      *(int *)(local_488 + 2) = iVar4;
      local_488 = local_488 + 3;
    }
    plVar10 = local_488;
    pcVar18 = _Str1;
    if (pcVar9 <= _Str1 + 0x104) goto LAB_14319824f;
  }
  else {
    plVar10 = local_488;
    if (_Str1 + 0x104 < pcVar9) {
      *local_488 = (longlong)_Str1;
      local_488[1] = (longlong)pcVar12;
      *(int *)(local_488 + 2) = iVar4;
      plVar10 = local_488 + 3;
    }
    pcVar12 = pcVar14;
    _Str1 = _Str2;
    pcVar17 = pcVar14;
    if (pcVar14 <= _Str2) goto LAB_14319824f;
  }
  local_488 = plVar10;
  iVar5 = (int)((ulonglong)((longlong)pcVar17 - (longlong)pcVar18) >> 2) * -0x3f03f03f;
  uVar13 = (ulonglong)(iVar5 + 1);
  pcVar14 = pcVar12;
  if (iVar4 == 0) goto LAB_143197f22;
  goto LAB_143197d1f;
}



// FUNCTION 1431982a8 FUN_1431982a8 body=1815 status=ok
// SIG undefined FUN_1431982a8(void)

longlong * FUN_1431982a8(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar9;
  longlong *plVar10;
  char *_Str2;
  char *_Str1;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  float fVar19;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  ulonglong local_480;
  longlong *local_478;
  char *local_470;
  char *local_468;
  uint local_45c;
  longlong local_458;
  longlong local_450;
  undefined4 local_448 [191];
  undefined1 local_14c [260];
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_45c = 0;
  iVar4 = (*DAT_14ca79368)(param_2,&local_45c,0);
  if (iVar4 < 0 && iVar4 != -3) {
    FUN_1431b4552(iVar4,
                  "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, nullptr)",
                  ".\\Runtime/VulkanRHI/Private/VulkanExtensions.cpp",0x8c);
  }
  lVar11 = (longlong)(int)local_45c;
  if (lVar11 != 0) {
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + local_45c;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < local_45c) {
      FUN_1473aa816(param_1);
    }
    memset((void *)((longlong)iVar4 * 0x104 + *param_1),0,lVar11 * 0x104);
    iVar4 = (*DAT_14ca79368)(param_2,&local_45c,*param_1);
    if (iVar4 < 0 && iVar4 != -3) {
      FUN_1431b4552(iVar4,
                    "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, OutInstanceExtensions.GetData())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanExtensions.cpp",0x90);
    }
  }
  iVar4 = (int)param_1[1];
  if (1 < (longlong)iVar4) {
    lVar11 = *param_1;
    local_478 = param_1;
    memset(local_448,0,0x2f0);
    local_450 = (longlong)iVar4 * 0x104 + lVar11 + -0x104;
    local_458 = lVar11;
    fVar19 = logf((float)iVar4);
    local_448[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_458;
    do {
      _Str1 = (char *)*plVar10;
      pcVar14 = (char *)plVar10[1];
      iVar4 = (int)plVar10[2];
      iVar5 = (int)((ulonglong)((longlong)pcVar14 - (longlong)_Str1) >> 2) * -0x3f03f03f;
      uVar13 = (ulonglong)(iVar5 + 1);
      pcVar18 = _Str1;
      pcVar17 = pcVar14;
      local_488 = plVar10;
      if (iVar4 != 0) {
LAB_143198439:
        if (8 < (int)(uint)uVar13) {
          local_480 = CONCAT44(local_480._4_4_,iVar4);
          local_470 = pcVar18;
          local_468 = pcVar17;
          memcpy(local_14c,_Str1 + (ulonglong)((uint)uVar13 >> 1) * 0x104,0x104);
          memcpy(_Str1 + (ulonglong)((uint)uVar13 >> 1) * 0x104,_Str1,0x104);
          memcpy(_Str1,local_14c,0x104);
          pcVar9 = pcVar14 + 0x104;
          _Str2 = _Str1;
          do {
            pcVar17 = _Str2 + 0x104;
            pcVar3 = _Str2 + 0x104;
            do {
              _Str2 = pcVar3;
              pcVar18 = pcVar17;
              if (pcVar14 < _Str2) break;
              iVar4 = strcmp(_Str1,_Str2);
              pcVar17 = pcVar18 + 0x104;
              pcVar3 = _Str2 + 0x104;
            } while (-1 < iVar4);
            pcVar3 = pcVar9 + -0x208;
            do {
              pcVar12 = pcVar9;
              pcVar17 = pcVar3;
              pcVar9 = pcVar12 + -0x104;
              if (pcVar9 <= _Str1) break;
              iVar4 = strcmp(pcVar9,_Str1);
              pcVar3 = pcVar17 + -0x104;
            } while (-1 < iVar4);
            if (pcVar9 < _Str2) goto LAB_14319854f;
            memcpy(local_14c,_Str2,0x104);
            memcpy(_Str2,pcVar9,0x104);
            memcpy(pcVar9,local_14c,0x104);
          } while( true );
        }
        for (; plVar10 = local_488, pcVar17 = _Str1, pcVar18 = _Str1, _Str1 < pcVar14;
            pcVar14 = pcVar14 + -0x104) {
          while (pcVar9 = pcVar17, pcVar18 = pcVar18 + 0x104, pcVar18 <= pcVar14) {
            iVar4 = strcmp(pcVar9,pcVar18);
            pcVar17 = pcVar18;
            if (-1 < iVar4) {
              pcVar17 = pcVar9;
            }
          }
          memcpy(local_14c,pcVar9,0x104);
          memcpy(pcVar9,pcVar14,0x104);
          memcpy(pcVar14,local_14c,0x104);
        }
        goto LAB_143198969;
      }
LAB_14319863c:
      iVar4 = (int)uVar13;
      plVar10 = local_488;
      if (iVar4 != 0) {
        uVar6 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar8 = (ulonglong)uVar6;
          local_480 = uVar8;
          while (uVar2 = uVar6 * 2 + 1, (int)uVar2 < iVar4) {
            uVar15 = uVar6 * 2 + 2;
            uVar6 = uVar2;
            if (((int)uVar15 < iVar4) &&
               (iVar5 = strcmp(_Str1 + (longlong)(int)uVar15 * 0x104,
                               _Str1 + (longlong)(int)uVar2 * 0x104), -1 < iVar5)) {
              uVar6 = uVar15;
            }
            pcVar18 = _Str1 + (longlong)(int)uVar8 * 0x104;
            pcVar14 = _Str1 + (longlong)(int)uVar6 * 0x104;
            iVar5 = strcmp(pcVar18,pcVar14);
            if (-1 < iVar5) break;
            memcpy(local_14c,pcVar18,0x104);
            memcpy(pcVar18,pcVar14,0x104);
            memcpy(pcVar14,local_14c,0x104);
            uVar8 = (ulonglong)uVar6;
          }
          uVar6 = (int)local_480 - 1;
        } while ((int)local_480 != 0);
        plVar10 = local_488;
        if (1 < iVar4) {
          memcpy(local_14c,_Str1,0x104);
          memcpy(_Str1,_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,0x104);
          memcpy(_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,local_14c,0x104);
          plVar10 = local_488;
          uVar13 = uVar13 - 1;
          if (iVar4 != 2) {
            do {
              iVar4 = 0;
              iVar7 = 1;
              iVar5 = 0;
              do {
                iVar4 = iVar4 + 2;
                iVar16 = iVar7;
                if (((longlong)iVar4 < (longlong)uVar13) &&
                   (iVar7 = strcmp(_Str1 + (longlong)iVar4 * 0x104,_Str1 + (longlong)iVar7 * 0x104),
                   -1 < iVar7)) {
                  iVar16 = iVar4;
                }
                pcVar18 = _Str1 + (longlong)iVar5 * 0x104;
                pcVar14 = _Str1 + (longlong)iVar16 * 0x104;
                iVar4 = strcmp(pcVar18,pcVar14);
                if (-1 < iVar4) break;
                memcpy(local_14c,pcVar18,0x104);
                memcpy(pcVar18,pcVar14,0x104);
                memcpy(pcVar14,local_14c,0x104);
                iVar4 = iVar16 * 2;
                iVar7 = iVar16 * 2 + 1;
                iVar5 = iVar16;
              } while ((longlong)iVar7 < (longlong)uVar13);
              memcpy(local_14c,_Str1,0x104);
              memcpy(_Str1,_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,0x104);
              memcpy(_Str1 + (uVar13 - 1) * 0x100 + uVar13 * 4 + -4,local_14c,0x104);
              bVar1 = 2 < uVar13;
              plVar10 = local_488;
              uVar13 = uVar13 - 1;
            } while (bVar1);
          }
        }
      }
LAB_143198969:
      plVar10 = plVar10 + -3;
      param_1 = local_478;
    } while (&local_458 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_14319854f:
  memcpy(local_14c,_Str1,0x104);
  memcpy(_Str1,pcVar9,0x104);
  memcpy(pcVar9,local_14c,0x104);
  iVar4 = (int)local_480 + -1;
  pcVar12 = pcVar12 + -0x208;
  if ((longlong)pcVar17 - (longlong)local_470 < (longlong)local_468 - (longlong)pcVar18) {
    if (_Str2 < pcVar14) {
      *local_488 = (longlong)_Str2;
      local_488[1] = (longlong)pcVar14;
      *(int *)(local_488 + 2) = iVar4;
      local_488 = local_488 + 3;
    }
    plVar10 = local_488;
    pcVar18 = _Str1;
    if (pcVar9 <= _Str1 + 0x104) goto LAB_143198969;
  }
  else {
    plVar10 = local_488;
    if (_Str1 + 0x104 < pcVar9) {
      *local_488 = (longlong)_Str1;
      local_488[1] = (longlong)pcVar12;
      *(int *)(local_488 + 2) = iVar4;
      plVar10 = local_488 + 3;
    }
    pcVar12 = pcVar14;
    _Str1 = _Str2;
    pcVar17 = pcVar14;
    if (pcVar14 <= _Str2) goto LAB_143198969;
  }
  local_488 = plVar10;
  iVar5 = (int)((ulonglong)((longlong)pcVar17 - (longlong)pcVar18) >> 2) * -0x3f03f03f;
  uVar13 = (ulonglong)(iVar5 + 1);
  pcVar14 = pcVar12;
  if (iVar4 == 0) goto LAB_14319863c;
  goto LAB_143198439;
}



// FUNCTION 1431989c0 FUN_1431989c0 body=1514 status=ok
// SIG undefined FUN_1431989c0(void)

longlong * FUN_1431989c0(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  void *_Src;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  char *_Str2;
  char *pcVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  int local_60;
  undefined4 local_5c;
  char *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar7[1] = "VK_KHR_surface";
  puVar7[2] = 0x10001ffffffff;
  *puVar7 = &PTR_FUN_14a35ec10;
  puVar7[4] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1473ad198(param_1,0);
  *(undefined8 **)*param_1 = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar7[1] = "VK_EXT_swapchain_colorspace";
  puVar7[2] = 0x10001ffffffff;
  *puVar7 = &PTR_FUN_14a35ec10;
  puVar7[4] = 0;
  puVar7[6] = 0;
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1473ad198(param_1,iVar5);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar7[1] = "VK_EXT_debug_utils";
  puVar7[2] = 0xffffffff;
  *puVar7 = &PTR_FUN_14a35ec10;
  puVar7[4] = 0;
  puVar7[6] = 0;
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1473ad198(param_1,iVar5);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar7[1] = "VK_EXT_validation_features";
  puVar7[2] = 0xffffffff;
  puVar7[4] = 0;
  puVar7[6] = 0;
  *puVar7 = &PTR_FUN_14a35d830;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1473ad198(param_1,iVar5);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar5 * 8) = puVar7;
  FUN_1473dd3a0(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145af9b74(&local_58);
  iVar5 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_58);
  if (0 < iVar5) {
    plVar8 = (longlong *)FUN_147364b50();
    (**(code **)(*plVar8 + 0x88))(plVar8,&local_58);
    plVar8 = plStack_50;
    plVar2 = DAT_14ca77fe0;
    DAT_14ca77fd8 = local_58;
    local_58 = (char *)0x0;
    if (plStack_50 != DAT_14ca77fe0) {
      plStack_50 = (longlong *)0x0;
      DAT_14ca77fe0 = plVar8;
      if (plVar2 == (longlong *)0x0) goto LAB_143198b9c;
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
LAB_143198b9c:
  if (DAT_14ca77fd8 != (char *)0x0) {
    local_58 = (char *)0x0;
    plStack_50 = (longlong *)0x0;
    (*(code *)**(undefined8 **)DAT_14ca77fd8)(DAT_14ca77fd8,&local_58);
    pcVar4 = local_58;
    local_68 = (undefined8 *)0x0;
    lVar10 = (longlong)(int)plStack_50;
    local_60 = (int)plStack_50;
    if (lVar10 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1473ad136(&local_68,(ulonglong)plStack_50 & 0xffffffff,0);
      memcpy(local_68,pcVar4,lVar10 << 3);
      if ((longlong)local_60 != 0) {
        puVar7 = local_68 + local_60;
        puVar11 = local_68;
        do {
          pcVar4 = (char *)*puVar11;
          iVar5 = (int)param_1[1];
          lVar10 = (longlong)iVar5;
          if (0 < lVar10) {
            lVar3 = *param_1;
            lVar12 = 0;
            do {
              iVar6 = strcmp(*(char **)(*(longlong *)(lVar3 + lVar12 * 8) + 8),pcVar4);
              if (iVar6 == 0) {
                *(undefined1 *)(*(longlong *)(lVar3 + lVar12 * 8) + 0x16) = 1;
                goto LAB_143198f17;
              }
              lVar12 = lVar12 + 1;
            } while (lVar10 != lVar12);
          }
          puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
          puVar9[1] = pcVar4;
          puVar9[2] = 0x10001ffffffff;
          *puVar9 = &PTR_FUN_14a35ec10;
          puVar9[4] = 0;
          puVar9[6] = 0;
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1473ad198(param_1,iVar5);
          }
          *(undefined8 **)(*param_1 + lVar10 * 8) = puVar9;
LAB_143198f17:
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar7);
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8(local_68);
      }
    }
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  _Src = DAT_14ca77e08;
  local_78 = (undefined8 *)0x0;
  lVar10 = (longlong)DAT_14ca77e10;
  local_70 = DAT_14ca77e10;
  if (lVar10 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1473ad136(&local_78,DAT_14ca77e10,0);
    memcpy(local_78,_Src,lVar10 << 3);
    if ((longlong)local_70 != 0) {
      puVar7 = local_78 + local_70;
      puVar11 = local_78;
      do {
        pcVar4 = (char *)*puVar11;
        iVar5 = (int)param_1[1];
        lVar10 = (longlong)iVar5;
        if (0 < lVar10) {
          lVar3 = *param_1;
          lVar12 = 0;
          do {
            iVar6 = strcmp(*(char **)(*(longlong *)(lVar3 + lVar12 * 8) + 8),pcVar4);
            if (iVar6 == 0) {
              *(undefined1 *)(*(longlong *)(lVar3 + lVar12 * 8) + 0x16) = 1;
              goto LAB_143198e3a;
            }
            lVar12 = lVar12 + 1;
          } while (lVar10 != lVar12);
        }
        puVar9 = (undefined8 *)FUN_14001cc68(0x60,0x10);
        puVar9[1] = pcVar4;
        puVar9[2] = 0x10001ffffffff;
        *puVar9 = &PTR_FUN_14a35ec10;
        puVar9[4] = 0;
        puVar9[6] = 0;
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1473ad198(param_1,iVar5);
        }
        *(undefined8 **)(*param_1 + lVar10 * 8) = puVar9;
LAB_143198e3a:
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar7);
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  FUN_1431982a8(&local_58,0);
  pcVar4 = local_58;
  if ((longlong)(int)plStack_50 != 0) {
    pcVar13 = local_58 + (longlong)(int)plStack_50 * 0x104;
    _Str2 = local_58;
    do {
      lVar10 = param_1[1];
      if (0 < (longlong)(int)lVar10) {
        lVar3 = *param_1;
        lVar12 = 0;
        do {
          iVar5 = strcmp(*(char **)(*(longlong *)(lVar3 + lVar12 * 8) + 8),_Str2);
          if (iVar5 == 0) {
            *(undefined1 *)(*(longlong *)(lVar3 + lVar12 * 8) + 0x15) = 1;
            lVar10 = *(longlong *)(*param_1 + lVar12 * 8);
            *(bool *)(lVar10 + 0x17) = *(uint *)(lVar10 + 0x10) <= param_2;
            break;
          }
          lVar12 = lVar12 + 1;
        } while ((int)lVar10 != lVar12);
      }
      _Str2 = _Str2 + 0x104;
    } while (_Str2 != pcVar13);
  }
  if (pcVar4 != (char *)0x0) {
    FUN_1400020a8(pcVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143198fab FUN_143198fab body=69 status=ok
// SIG undefined FUN_143198fab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143198fab(void)

{
  _DAT_14ca77e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143198fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e20,1);
  return;
}



// FUNCTION 143198ff0 FUN_143198ff0 body=7364 status=ok
// SIG undefined FUN_143198ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_143198ff0(undefined8 param_1)

{
  bool bVar1;
  
  if (DAT_14ca79380 == (code *)0x0) {
    bVar1 = false;
  }
  else {
    DAT_14ca79358 = (*DAT_14ca79380)(param_1,"vkDestroyInstance");
    DAT_14ca79420 = (*DAT_14ca79380)(param_1,"vkEnumeratePhysicalDevices");
    DAT_14ca78e58 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures");
    DAT_14ca78e00 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties");
    DAT_14ca79408 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties2");
    DAT_14ca78e60 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceImageFormatProperties");
    DAT_14ca78e68 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties");
    DAT_14ca78e08 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
    DAT_14ca79410 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
    DAT_14ca78e70 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceMemoryProperties");
    DAT_14ca79370 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties2");
    DAT_14ca79400 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures2");
    DAT_14ca78e78 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceMemoryProperties2");
    DAT_14ca79418 = (*DAT_14ca79380)(param_1,"vkCreateDevice");
    DAT_14ca78e28 = (*DAT_14ca79380)(param_1,"vkDestroyDevice");
    DAT_14ca79388 = (*DAT_14ca79380)(param_1,"vkEnumerateDeviceExtensionProperties");
    DAT_14ca78e80 = (*DAT_14ca79380)(param_1,"vkEnumerateDeviceLayerProperties");
    DAT_14ca792b8 = (*DAT_14ca79380)(param_1,"vkGetDeviceQueue");
    DAT_14ca792c0 = (*DAT_14ca79380)(param_1,"vkQueueSubmit");
    DAT_14ca78e88 = (*DAT_14ca79380)(param_1,"vkQueueWaitIdle");
    DAT_14ca78e30 = (*DAT_14ca79380)(param_1,"vkDeviceWaitIdle");
    DAT_14ca78e90 = (*DAT_14ca79380)(param_1,"vkAllocateMemory");
    DAT_14ca78e98 = (*DAT_14ca79380)(param_1,"vkFreeMemory");
    DAT_14ca78ea0 = (*DAT_14ca79380)(param_1,"vkMapMemory");
    DAT_14ca78ea8 = (*DAT_14ca79380)(param_1,"vkUnmapMemory");
    DAT_14ca78eb0 = (*DAT_14ca79380)(param_1,"vkFlushMappedMemoryRanges");
    DAT_14ca78eb8 = (*DAT_14ca79380)(param_1,"vkInvalidateMappedMemoryRanges");
    DAT_14ca78ec0 = (*DAT_14ca79380)(param_1,"vkGetDeviceMemoryCommitment");
    DAT_14ca78e18 = (*DAT_14ca79380)(param_1,"vkBindBufferMemory");
    DAT_14ca78ec8 = (*DAT_14ca79380)(param_1,"vkBindImageMemory");
    DAT_14ca78ed0 = (*DAT_14ca79380)(param_1,"vkBindBufferMemory2");
    DAT_14ca78ed8 = (*DAT_14ca79380)(param_1,"vkBindImageMemory2");
    DAT_14ca78e10 = (*DAT_14ca79380)(param_1,"vkGetBufferMemoryRequirements");
    DAT_14ca78ee0 = (*DAT_14ca79380)(param_1,"vkGetImageMemoryRequirements");
    DAT_14ca78ee8 = (*DAT_14ca79380)(param_1,"vkGetImageSparseMemoryRequirements");
    DAT_14ca78ef0 = (*DAT_14ca79380)(param_1,"vkGetImageMemoryRequirements2");
    DAT_14ca78ef8 = (*DAT_14ca79380)(param_1,"vkGetBufferMemoryRequirements2");
    DAT_14ca78f00 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties");
    DAT_14ca78f08 = (*DAT_14ca79380)(param_1,"vkQueueBindSparse");
    DAT_14ca78f10 = (*DAT_14ca79380)(param_1,"vkCreateFence");
    DAT_14ca78f18 = (*DAT_14ca79380)(param_1,"vkDestroyFence");
    DAT_14ca78f20 = (*DAT_14ca79380)(param_1,"vkResetFences");
    DAT_14ca78f28 = (*DAT_14ca79380)(param_1,"vkGetFenceStatus");
    DAT_14ca78f30 = (*DAT_14ca79380)(param_1,"vkWaitForFences");
    DAT_14ca78f38 = (*DAT_14ca79380)(param_1,"vkCreateSemaphore");
    DAT_14ca78f40 = (*DAT_14ca79380)(param_1,"vkDestroySemaphore");
    DAT_14ca79258 = (*DAT_14ca79380)(param_1,"vkCreateEvent");
    DAT_14ca79268 = (*DAT_14ca79380)(param_1,"vkDestroyEvent");
    DAT_14ca79270 = (*DAT_14ca79380)(param_1,"vkGetEventStatus");
    DAT_14ca78f48 = (*DAT_14ca79380)(param_1,"vkSetEvent");
    DAT_14ca79280 = (*DAT_14ca79380)(param_1,"vkResetEvent");
    DAT_14ca79248 = (*DAT_14ca79380)(param_1,"vkCreateQueryPool");
    DAT_14ca79260 = (*DAT_14ca79380)(param_1,"vkDestroyQueryPool");
    DAT_14ca79278 = (*DAT_14ca79380)(param_1,"vkGetQueryPoolResults");
    DAT_14ca793e8 = (*DAT_14ca79380)(param_1,"vkCreateBuffer");
    DAT_14ca78e20 = (*DAT_14ca79380)(param_1,"vkDestroyBuffer");
    DAT_14ca78f50 = (*DAT_14ca79380)(param_1,"vkCreateBufferView");
    DAT_14ca78f58 = (*DAT_14ca79380)(param_1,"vkDestroyBufferView");
    DAT_14ca78f60 = (*DAT_14ca79380)(param_1,"vkCreateImage");
    DAT_14ca78f68 = (*DAT_14ca79380)(param_1,"vkDestroyImage");
    DAT_14ca78f70 = (*DAT_14ca79380)(param_1,"vkGetImageSubresourceLayout");
    DAT_14ca78f78 = (*DAT_14ca79380)(param_1,"vkCreateImageView");
    DAT_14ca78f80 = (*DAT_14ca79380)(param_1,"vkDestroyImageView");
    DAT_14ca78f88 = (*DAT_14ca79380)(param_1,"vkCreateShaderModule");
    DAT_14ca78f90 = (*DAT_14ca79380)(param_1,"vkDestroyShaderModule");
    DAT_14ca79210 = (*DAT_14ca79380)(param_1,"vkCreatePipelineCache");
    DAT_14ca79208 = (*DAT_14ca79380)(param_1,"vkDestroyPipelineCache");
    DAT_14ca79220 = (*DAT_14ca79380)(param_1,"vkGetPipelineCacheData");
    DAT_14ca79218 = (*DAT_14ca79380)(param_1,"vkMergePipelineCaches");
    DAT_14ca79228 = (*DAT_14ca79380)(param_1,"vkCreateGraphicsPipelines");
    DAT_14ca79230 = (*DAT_14ca79380)(param_1,"vkCreateComputePipelines");
    DAT_14ca79238 = (*DAT_14ca79380)(param_1,"vkDestroyPipeline");
    DAT_14ca78dd0 = (*DAT_14ca79380)(param_1,"vkCreatePipelineLayout");
    DAT_14ca78dc8 = (*DAT_14ca79380)(param_1,"vkDestroyPipelineLayout");
    DAT_14ca78f98 = (*DAT_14ca79380)(param_1,"vkCreateSampler");
    DAT_14ca79350 = (*DAT_14ca79380)(param_1,"vkDestroySampler");
    DAT_14ca79390 = (*DAT_14ca79380)(param_1,"vkCreateDescriptorSetLayout");
    DAT_14ca79200 = (*DAT_14ca79380)(param_1,"vkDestroyDescriptorSetLayout");
    DAT_14ca791b8 = (*DAT_14ca79380)(param_1,"vkCreateDescriptorPool");
    DAT_14ca791c0 = (*DAT_14ca79380)(param_1,"vkDestroyDescriptorPool");
    DAT_14ca791c8 = (*DAT_14ca79380)(param_1,"vkResetDescriptorPool");
    DAT_14ca791d0 = (*DAT_14ca79380)(param_1,"vkAllocateDescriptorSets");
    DAT_14ca78fa0 = (*DAT_14ca79380)(param_1,"vkFreeDescriptorSets");
    DAT_14ca791f8 = (*DAT_14ca79380)(param_1,"vkUpdateDescriptorSets");
    DAT_14ca78fa8 = (*DAT_14ca79380)(param_1,"vkCreateFramebuffer");
    DAT_14ca78fb0 = (*DAT_14ca79380)(param_1,"vkDestroyFramebuffer");
    DAT_14ca79438 = (*DAT_14ca79380)(param_1,"vkCreateRenderPass");
    DAT_14ca78fb8 = (*DAT_14ca79380)(param_1,"vkDestroyRenderPass");
    DAT_14ca78fc0 = (*DAT_14ca79380)(param_1,"vkGetRenderAreaGranularity");
    DAT_14ca78fc8 = (*DAT_14ca79380)(param_1,"vkCreateCommandPool");
    DAT_14ca78fd0 = (*DAT_14ca79380)(param_1,"vkDestroyCommandPool");
    DAT_14ca78fd8 = (*DAT_14ca79380)(param_1,"vkResetCommandPool");
    DAT_14ca78fe0 = (*DAT_14ca79380)(param_1,"vkTrimCommandPool");
    DAT_14ca78fe8 = (*DAT_14ca79380)(param_1,"vkAllocateCommandBuffers");
    DAT_14ca78ff0 = (*DAT_14ca79380)(param_1,"vkFreeCommandBuffers");
    DAT_14ca78ff8 = (*DAT_14ca79380)(param_1,"vkBeginCommandBuffer");
    DAT_14ca79000 = (*DAT_14ca79380)(param_1,"vkEndCommandBuffer");
    DAT_14ca79008 = (*DAT_14ca79380)(param_1,"vkResetCommandBuffer");
    DAT_14ca79318 = (*DAT_14ca79380)(param_1,"vkCmdBindPipeline");
    DAT_14ca791e0 = (*DAT_14ca79380)(param_1,"vkCmdSetViewport");
    DAT_14ca791e8 = (*DAT_14ca79380)(param_1,"vkCmdSetScissor");
    DAT_14ca79010 = (*DAT_14ca79380)(param_1,"vkCmdSetLineWidth");
    DAT_14ca79018 = (*DAT_14ca79380)(param_1,"vkCmdSetDepthBias");
    DAT_14ca79020 = (*DAT_14ca79380)(param_1,"vkCmdSetBlendConstants");
    DAT_14ca79028 = (*DAT_14ca79380)(param_1,"vkCmdSetDepthBounds");
    DAT_14ca79030 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilCompareMask");
    DAT_14ca79038 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilWriteMask");
    DAT_14ca791f0 = (*DAT_14ca79380)(param_1,"vkCmdSetStencilReference");
    DAT_14ca793b0 = (*DAT_14ca79380)(param_1,"vkCmdBindDescriptorSets");
    DAT_14ca79040 = (*DAT_14ca79380)(param_1,"vkCmdBindIndexBuffer");
    DAT_14ca791d8 = (*DAT_14ca79380)(param_1,"vkCmdBindVertexBuffers");
    DAT_14ca79048 = (*DAT_14ca79380)(param_1,"vkCmdDraw");
    DAT_14ca79050 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndexed");
    DAT_14ca79058 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndirect");
    DAT_14ca79060 = (*DAT_14ca79380)(param_1,"vkCmdDrawIndexedIndirect");
    DAT_14ca79068 = (*DAT_14ca79380)(param_1,"vkCmdDispatch");
    DAT_14ca79070 = (*DAT_14ca79380)(param_1,"vkCmdDispatchIndirect");
    DAT_14ca793f0 = (*DAT_14ca79380)(param_1,"vkCmdCopyBuffer");
    DAT_14ca79078 = (*DAT_14ca79380)(param_1,"vkCmdCopyImage");
    DAT_14ca79080 = (*DAT_14ca79380)(param_1,"vkCmdBlitImage");
    DAT_14ca79088 = (*DAT_14ca79380)(param_1,"vkCmdCopyBufferToImage");
    DAT_14ca79330 = (*DAT_14ca79380)(param_1,"vkCmdCopyImageToBuffer");
    DAT_14ca79090 = (*DAT_14ca79380)(param_1,"vkCmdUpdateBuffer");
    DAT_14ca79338 = (*DAT_14ca79380)(param_1,"vkCmdFillBuffer");
    DAT_14ca79098 = (*DAT_14ca79380)(param_1,"vkCmdClearColorImage");
    DAT_14ca790a0 = (*DAT_14ca79380)(param_1,"vkCmdClearDepthStencilImage");
    DAT_14ca790a8 = (*DAT_14ca79380)(param_1,"vkCmdClearAttachments");
    DAT_14ca790b0 = (*DAT_14ca79380)(param_1,"vkCmdResolveImage");
    DAT_14ca79298 = (*DAT_14ca79380)(param_1,"vkCmdSetEvent");
    DAT_14ca790b8 = (*DAT_14ca79380)(param_1,"vkCmdResetEvent");
    DAT_14ca790c0 = (*DAT_14ca79380)(param_1,"vkCmdWaitEvents");
    DAT_14ca79290 = (*DAT_14ca79380)(param_1,"vkCmdPipelineBarrier");
    DAT_14ca792a0 = (*DAT_14ca79380)(param_1,"vkCmdBeginQuery");
    DAT_14ca792a8 = (*DAT_14ca79380)(param_1,"vkCmdEndQuery");
    DAT_14ca79288 = (*DAT_14ca79380)(param_1,"vkCmdResetQueryPool");
    DAT_14ca792b0 = (*DAT_14ca79380)(param_1,"vkCmdWriteTimestamp");
    DAT_14ca790c8 = (*DAT_14ca79380)(param_1,"vkCmdCopyQueryPoolResults");
    DAT_14ca790d0 = (*DAT_14ca79380)(param_1,"vkCmdPushConstants");
    DAT_14ca790d8 = (*DAT_14ca79380)(param_1,"vkCmdBeginRenderPass");
    DAT_14ca79340 = (*DAT_14ca79380)(param_1,"vkCmdNextSubpass");
    DAT_14ca790e0 = (*DAT_14ca79380)(param_1,"vkCmdEndRenderPass");
    DAT_14ca790e8 = (*DAT_14ca79380)(param_1,"vkCmdExecuteCommands");
    DAT_14ca78e48 = (*DAT_14ca79380)(param_1,"vkCreateSwapchainKHR");
    DAT_14ca78e50 = (*DAT_14ca79380)(param_1,"vkDestroySwapchainKHR");
    DAT_14ca790f0 = (*DAT_14ca79380)(param_1,"vkGetSwapchainImagesKHR");
    DAT_14ca790f8 = (*DAT_14ca79380)(param_1,"vkAcquireNextImageKHR");
    DAT_14ca78e40 = (*DAT_14ca79380)(param_1,"vkQueuePresentKHR");
    DAT_14ca79100 = (*DAT_14ca79380)(param_1,"vkCreateSamplerYcbcrConversion");
    _DAT_14ca78188 = (*DAT_14ca79380)(param_1,"vkDestroySamplerYcbcrConversion");
    bVar1 = ((((((((((((DAT_14ca78e78 != 0 && DAT_14ca79400 != 0) && DAT_14ca79370 != 0) &&
                     DAT_14ca78e70 != 0) && DAT_14ca79410 != 0) && DAT_14ca78e08 != 0) &&
                  DAT_14ca78e68 != 0) && DAT_14ca78e60 != 0) && DAT_14ca79408 != 0) &&
               DAT_14ca78e00 != 0) && DAT_14ca78e58 != 0) && DAT_14ca79420 != 0) &&
            DAT_14ca79358 != 0) &&
            ((((((((((((((((DAT_14ca78e18 != 0 && DAT_14ca78ec0 != 0) && DAT_14ca78eb8 != 0) &&
                         DAT_14ca78eb0 != 0) && DAT_14ca78ea8 != 0) && DAT_14ca78ea0 != 0) &&
                      DAT_14ca78e98 != 0) && DAT_14ca78e90 != 0) && DAT_14ca78e30 != 0) &&
                   DAT_14ca78e88 != 0) && DAT_14ca792c0 != 0) && DAT_14ca792b8 != 0) &&
                DAT_14ca78e80 != 0) && DAT_14ca79388 != 0) && DAT_14ca78e28 != 0) &&
             DAT_14ca79418 != 0) &&
            (((((((((((((((DAT_14ca78f30 != 0 && DAT_14ca78f28 != 0) && DAT_14ca78f20 != 0) &&
                        DAT_14ca78f18 != 0) && DAT_14ca78f10 != 0) && DAT_14ca78f08 != 0) &&
                     DAT_14ca78f00 != 0) && DAT_14ca78ef8 != 0) && DAT_14ca78ef0 != 0) &&
                  DAT_14ca78ee8 != 0) && DAT_14ca78ee0 != 0) && DAT_14ca78e10 != 0) &&
               DAT_14ca78ed8 != 0) && DAT_14ca78ed0 != 0) && DAT_14ca78ec8 != 0) &&
            ((((((((((((((DAT_14ca78f58 != 0 && DAT_14ca78f50 != 0) && DAT_14ca78e20 != 0) &&
                       DAT_14ca793e8 != 0) && DAT_14ca79278 != 0) && DAT_14ca79260 != 0) &&
                    DAT_14ca79248 != 0) && DAT_14ca79280 != 0) && DAT_14ca78f48 != 0) &&
                 DAT_14ca79270 != 0) && DAT_14ca79268 != 0) && DAT_14ca79258 != 0) &&
              DAT_14ca78f40 != 0) && DAT_14ca78f38 != 0) &&
            (((((((((((((DAT_14ca79230 != 0 && DAT_14ca79228 != 0) && DAT_14ca79218 != 0) &&
                      DAT_14ca79220 != 0) && DAT_14ca79208 != 0) && DAT_14ca79210 != 0) &&
                   DAT_14ca78f90 != 0) && DAT_14ca78f88 != 0) && DAT_14ca78f80 != 0) &&
                DAT_14ca78f78 != 0) && DAT_14ca78f70 != 0) && DAT_14ca78f68 != 0) &&
             DAT_14ca78f60 != 0) &&
            ((((((((((((DAT_14ca78fa0 != 0 && DAT_14ca791d0 != 0) && DAT_14ca791c8 != 0) &&
                     DAT_14ca791c0 != 0) && DAT_14ca791b8 != 0) && DAT_14ca79200 != 0) &&
                  DAT_14ca79390 != 0) && DAT_14ca79350 != 0) && DAT_14ca78f98 != 0) &&
               DAT_14ca78dc8 != 0) && DAT_14ca78dd0 != 0) && DAT_14ca79238 != 0) &&
            (((((((((((DAT_14ca78fe8 != 0 && DAT_14ca78fe0 != 0) && DAT_14ca78fd8 != 0) &&
                    DAT_14ca78fd0 != 0) && DAT_14ca78fc8 != 0) && DAT_14ca78fc0 != 0) &&
                 DAT_14ca78fb8 != 0) && DAT_14ca79438 != 0) && DAT_14ca78fb0 != 0) &&
              DAT_14ca78fa8 != 0) && DAT_14ca791f8 != 0) &&
            ((((((((((DAT_14ca79020 != 0 && DAT_14ca79018 != 0) && DAT_14ca79010 != 0) &&
                   DAT_14ca791e8 != 0) && DAT_14ca791e0 != 0) && DAT_14ca79318 != 0) &&
                DAT_14ca79008 != 0) && DAT_14ca79000 != 0) && DAT_14ca78ff8 != 0) &&
             DAT_14ca78ff0 != 0) &&
            (((((((((DAT_14ca79050 != 0 && DAT_14ca79048 != 0) && DAT_14ca791d8 != 0) &&
                  DAT_14ca79040 != 0) && DAT_14ca793b0 != 0) && DAT_14ca791f0 != 0) &&
               DAT_14ca79038 != 0) && DAT_14ca79030 != 0) && DAT_14ca79028 != 0) &&
            ((((((((DAT_14ca79088 != 0 && DAT_14ca79080 != 0) && DAT_14ca79078 != 0) &&
                 DAT_14ca793f0 != 0) && DAT_14ca79070 != 0) && DAT_14ca79068 != 0) &&
              DAT_14ca79060 != 0) && DAT_14ca79058 != 0) &&
            (((((((DAT_14ca790b0 != 0 && DAT_14ca790a8 != 0) && DAT_14ca790a0 != 0) &&
                DAT_14ca79098 != 0) && DAT_14ca79338 != 0) && DAT_14ca79090 != 0) &&
             DAT_14ca79330 != 0) &&
            ((((((DAT_14ca792a8 != 0 && DAT_14ca792a0 != 0) && DAT_14ca79290 != 0) &&
               DAT_14ca790c0 != 0) && DAT_14ca790b8 != 0) && DAT_14ca79298 != 0) &&
            (((((DAT_14ca790d8 != 0 && DAT_14ca790d0 != 0) && DAT_14ca790c8 != 0) &&
              DAT_14ca792b0 != 0) && DAT_14ca79288 != 0) &&
            ((((DAT_14ca78e48 != 0 && DAT_14ca790e8 != 0) && DAT_14ca790e0 != 0) &&
             DAT_14ca79340 != 0) &&
            (((DAT_14ca790f8 != 0 && DAT_14ca790f0 != 0) && DAT_14ca78e50 != 0) &&
            ((DAT_14ca79100 != 0 && DAT_14ca78e40 != 0) && _DAT_14ca78188 != 0)))))))))))))));
    DAT_14ca792c8 = (*DAT_14ca79380)(param_1,"vkCreateAccelerationStructureKHR");
    DAT_14ca79110 = (*DAT_14ca79380)(param_1,"vkDestroyAccelerationStructureKHR");
    DAT_14ca792e0 = (*DAT_14ca79380)(param_1,"vkCmdBuildAccelerationStructuresKHR");
    DAT_14ca793e0 = (*DAT_14ca79380)(param_1,"vkGetAccelerationStructureBuildSizesKHR");
    DAT_14ca792d0 = (*DAT_14ca79380)(param_1,"vkGetAccelerationStructureDeviceAddressKHR");
    DAT_14ca79320 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysKHR");
    DAT_14ca79328 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysIndirectKHR");
    _DAT_14ca78190 = (*DAT_14ca79380)(param_1,"vkCmdTraceRaysIndirect2KHR");
    DAT_14ca792f0 = (*DAT_14ca79380)(param_1,"vkCreateRayTracingPipelinesKHR");
    DAT_14ca793f8 = (*DAT_14ca79380)(param_1,"vkGetRayTracingShaderGroupHandlesKHR");
    DAT_14ca79310 = (*DAT_14ca79380)(param_1,"vkCmdWriteAccelerationStructuresPropertiesKHR");
    DAT_14ca792d8 = (*DAT_14ca79380)(param_1,"vkCmdCopyAccelerationStructureKHR");
    DAT_14ca79430 = (*DAT_14ca79380)(param_1,"vkCreateRenderPass2KHR");
    DAT_14ca79120 = (*DAT_14ca79380)(param_1,"vkCmdBeginRenderPass2KHR");
    DAT_14ca79128 = (*DAT_14ca79380)(param_1,"vkGetDeviceImageMemoryRequirementsKHR");
    _DAT_14ca78198 = (*DAT_14ca79380)(param_1,"vkGetDeviceBufferMemoryRequirementsKHR");
    DAT_14ca79250 = (*DAT_14ca79380)(param_1,"vkResetQueryPoolEXT");
    DAT_14ca78df0 = (*DAT_14ca79380)(param_1,"vkCmdPipelineBarrier2KHR");
    _DAT_14ca781a0 = (*DAT_14ca79380)(param_1,"vkCmdResetEvent2KHR");
    _DAT_14ca781a8 = (*DAT_14ca79380)(param_1,"vkCmdSetEvent2KHR");
    _DAT_14ca781b0 = (*DAT_14ca79380)(param_1,"vkCmdWaitEvents2KHR");
    _DAT_14ca781b8 = (*DAT_14ca79380)(param_1,"vkQueueSubmit2KHR");
    _DAT_14ca781c0 = (*DAT_14ca79380)(param_1,"vkCreateSharedSwapchainsKHR");
    DAT_14ca79160 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
    DAT_14ca78e38 = (*DAT_14ca79380)(param_1,"vkGetCalibratedTimestampsEXT");
    DAT_14ca79240 = (*DAT_14ca79380)(param_1,"vkGetBufferDeviceAddressKHR");
    DAT_14ca79168 = (*DAT_14ca79380)(param_1,"vkGetDescriptorSetLayoutSizeEXT");
    _DAT_14ca781c8 = (*DAT_14ca79380)(param_1,"vkGetDescriptorSetLayoutBindingOffsetEXT");
    DAT_14ca78dd8 = (*DAT_14ca79380)(param_1,"vkCmdBindDescriptorBuffersEXT");
    DAT_14ca78de0 = (*DAT_14ca79380)(param_1,"vkCmdSetDescriptorBufferOffsetsEXT");
    DAT_14ca78de8 = (*DAT_14ca79380)(param_1,"vkGetDescriptorEXT");
    DAT_14ca792e8 = (*DAT_14ca79380)(param_1,"vkCreateDeferredOperationKHR");
    DAT_14ca79308 = (*DAT_14ca79380)(param_1,"vkDestroyDeferredOperationKHR");
    DAT_14ca79428 = (*DAT_14ca79380)(param_1,"vkDeferredOperationJoinKHR");
    DAT_14ca792f8 = (*DAT_14ca79380)(param_1,"vkGetDeferredOperationMaxConcurrencyKHR");
    DAT_14ca79300 = (*DAT_14ca79380)(param_1,"vkGetDeferredOperationResultKHR");
    DAT_14ca79178 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksEXT");
    _DAT_14ca781d0 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksIndirectCountEXT");
    DAT_14ca79188 = (*DAT_14ca79380)(param_1,"vkCmdDrawMeshTasksIndirectEXT");
    _DAT_14ca781d8 = (*DAT_14ca79380)(param_1,"vkCmdWriteBufferMarkerAMD");
    _DAT_14ca781e0 = (*DAT_14ca79380)(param_1,"vkCmdSetCheckpointNV");
    DAT_14ca791a0 = (*DAT_14ca79380)(param_1,"vkGetQueueCheckpointDataNV");
    DAT_14ca78df8 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
    DAT_14ca791a8 = (*DAT_14ca79380)(param_1,"vkGetDeviceFaultInfoEXT");
  }
  return bVar1;
}



// FUNCTION 14319acd6 FUN_14319acd6 body=2633 status=ok
// SIG undefined FUN_14319acd6(void)

longlong * FUN_14319acd6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  char *_Str1;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  longlong lVar20;
  char *pcVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined1 auStack_5f8 [40];
  longlong *local_5d0;
  ulonglong local_5c8;
  char *local_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  longlong local_5a8;
  char *local_5a0;
  wchar_t *local_598;
  undefined4 local_590;
  longlong local_588;
  ulonglong uStack_580;
  uint local_56c;
  longlong local_568;
  undefined8 uStack_560;
  undefined4 local_558 [190];
  longlong local_260;
  undefined8 local_258;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  local_598 = L"instance";
  local_590 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_56c = 0;
  local_5b0 = param_3;
  local_5a8 = param_1;
  iVar5 = (*DAT_14ca791b0)(&local_56c,0);
  if (iVar5 < 0 && iVar5 != -3) {
    FUN_1431b4552(iVar5,"VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, nullptr)",
                  ".\\Runtime/VulkanRHI/Private/VulkanLayers.cpp",0x50);
  }
  lVar13 = (longlong)(int)local_56c;
  if (lVar13 != 0) {
    iVar5 = (int)uStack_560;
    lVar20 = (longlong)(int)uStack_560;
    uStack_560 = CONCAT44(uStack_560._4_4_,(int)uStack_560 + local_56c);
    if ((uint)(uStack_560._4_4_ - iVar5) < local_56c) {
      FUN_1473ad31a(&local_568);
    }
    memset((void *)(lVar20 * 0x208 + local_568),0,lVar13 * 0x208);
    iVar5 = (*DAT_14ca791b0)(&local_56c,local_568);
    if (iVar5 < 0 && iVar5 != -3) {
      FUN_1431b4552(iVar5,
                    "VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, TempLayerProperties.GetData())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanLayers.cpp",0x54);
    }
    FUN_1473ad2a0(&local_588);
    if (local_56c != 0) {
      uVar10 = 0;
      do {
        lVar13 = (longlong)(int)uVar10 * 0x218;
        memcpy((void *)(local_588 + lVar13),(void *)((longlong)(int)uVar10 * 0x208 + local_568),
               0x208);
        FUN_1431982a8(&local_260);
        lVar13 = local_588 + lVar13;
        plVar14 = (longlong *)(lVar13 + 0x208);
        if (plVar14 != &local_260) {
          if (*plVar14 != 0) {
            FUN_1400020a8();
          }
          *plVar14 = local_260;
          local_260 = 0;
          *(undefined4 *)(lVar13 + 0x210) = (undefined4)local_258;
          *(undefined4 *)(lVar13 + 0x214) = local_258._4_4_;
          local_258 = 0;
        }
        if (local_260 != 0) {
          FUN_1400020a8();
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_56c);
    }
  }
  local_5b8 = param_2;
  if (local_568 != 0) {
    FUN_1400020a8();
  }
  lVar13 = local_588;
  iVar5 = (int)uStack_580;
  lVar20 = (longlong)(int)uStack_580;
  if (1 < lVar20) {
    memset(local_558,0,0x2f0);
    local_568 = lVar13;
    uStack_560 = lVar20 * 0x218 + lVar13 + -0x218;
    fVar25 = logf((float)iVar5);
    local_558[0] = (int)(longlong)(fVar25 + fVar25);
    plVar14 = &local_568;
    do {
      pcVar9 = (char *)*plVar14;
      pcVar19 = (char *)plVar14[1];
      iVar5 = (int)plVar14[2];
      iVar6 = (int)((ulonglong)((longlong)pcVar19 - (longlong)pcVar9) >> 3) * 0x7a44c6b;
      uVar11 = (ulonglong)(iVar6 + 1);
      _Str1 = pcVar9;
      pcVar17 = pcVar19;
      pcVar16 = pcVar9;
      local_5d0 = plVar14;
      if (iVar5 != 0) {
LAB_14319afa2:
        if (8 < (int)(uint)uVar11) {
          local_5c8 = CONCAT44(local_5c8._4_4_,iVar5);
          local_5c0 = pcVar19;
          local_5a0 = pcVar9;
          memcpy(&local_260,_Str1 + (ulonglong)((uint)uVar11 >> 1) * 0x218,0x218);
          memcpy(_Str1 + (ulonglong)((uint)uVar11 >> 1) * 0x218,_Str1,0x218);
          memcpy(_Str1,&local_260,0x218);
          pcVar9 = pcVar17 + 0x218;
          pcVar16 = _Str1;
          do {
            pcVar19 = pcVar16 + 0x218;
            pcVar4 = pcVar16 + 0x218;
            do {
              pcVar16 = pcVar4;
              pcVar8 = pcVar19;
              if (pcVar17 < pcVar16) break;
              iVar5 = strcmp(_Str1,pcVar16);
              pcVar19 = pcVar8 + 0x218;
              pcVar4 = pcVar16 + 0x218;
            } while (-1 < iVar5);
            pcVar4 = pcVar9 + -0x430;
            do {
              pcVar21 = pcVar9;
              pcVar19 = pcVar4;
              pcVar9 = pcVar21 + -0x218;
              if (pcVar9 <= _Str1) break;
              iVar5 = strcmp(pcVar9,_Str1);
              pcVar4 = pcVar19 + -0x218;
            } while (-1 < iVar5);
            if (pcVar9 < pcVar16) goto LAB_14319b0b1;
            memcpy(&local_260,pcVar16,0x218);
            memcpy(pcVar16,pcVar9,0x218);
            memcpy(pcVar9,&local_260,0x218);
          } while( true );
        }
        for (; plVar14 = local_5d0, pcVar19 = _Str1, pcVar9 = _Str1, _Str1 < pcVar17;
            pcVar17 = pcVar17 + -0x218) {
          while (pcVar16 = pcVar19, pcVar9 = pcVar9 + 0x218, pcVar9 <= pcVar17) {
            iVar5 = strcmp(pcVar16,pcVar9);
            pcVar19 = pcVar9;
            if (-1 < iVar5) {
              pcVar19 = pcVar16;
            }
          }
          memcpy(&local_260,pcVar16,0x218);
          memcpy(pcVar16,pcVar17,0x218);
          memcpy(pcVar17,&local_260,0x218);
        }
        goto LAB_14319b494;
      }
LAB_14319b19e:
      iVar5 = (int)uVar11;
      plVar14 = local_5d0;
      if (iVar5 != 0) {
        uVar10 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_5c8 = (ulonglong)uVar10;
          uVar12 = local_5c8;
          while (uVar3 = uVar10 * 2 + 1, (int)uVar3 < iVar5) {
            uVar18 = uVar10 * 2 + 2;
            uVar10 = uVar3;
            if (((int)uVar18 < iVar5) &&
               (iVar6 = strcmp(pcVar16 + (longlong)(int)uVar18 * 0x218,
                               pcVar16 + (longlong)(int)uVar3 * 0x218), -1 < iVar6)) {
              uVar10 = uVar18;
            }
            pcVar9 = pcVar16 + (longlong)(int)uVar12 * 0x218;
            pcVar17 = pcVar16 + (longlong)(int)uVar10 * 0x218;
            iVar6 = strcmp(pcVar9,pcVar17);
            if (-1 < iVar6) break;
            memcpy(&local_260,pcVar9,0x218);
            memcpy(pcVar9,pcVar17,0x218);
            memcpy(pcVar17,&local_260,0x218);
            uVar12 = (ulonglong)uVar10;
          }
          uVar10 = (int)local_5c8 - 1;
        } while ((int)local_5c8 != 0);
        plVar14 = local_5d0;
        if (1 < iVar5) {
          memcpy(&local_260,pcVar16,0x218);
          memcpy(pcVar16,pcVar16 + (uVar11 - 1) * 0x218,0x218);
          memcpy(pcVar16 + (uVar11 - 1) * 0x218,&local_260,0x218);
          plVar14 = local_5d0;
          uVar11 = uVar11 - 1;
          if (iVar5 != 2) {
            do {
              iVar5 = 0;
              iVar7 = 1;
              iVar6 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar15 = iVar7;
                if (((longlong)iVar5 < (longlong)uVar11) &&
                   (iVar7 = strcmp(pcVar16 + (longlong)iVar5 * 0x218,
                                   pcVar16 + (longlong)iVar7 * 0x218), -1 < iVar7)) {
                  iVar15 = iVar5;
                }
                pcVar9 = pcVar16 + (longlong)iVar6 * 0x218;
                pcVar17 = pcVar16 + (longlong)iVar15 * 0x218;
                iVar5 = strcmp(pcVar9,pcVar17);
                if (-1 < iVar5) break;
                memcpy(&local_260,pcVar9,0x218);
                memcpy(pcVar9,pcVar17,0x218);
                memcpy(pcVar17,&local_260,0x218);
                iVar5 = iVar15 * 2;
                iVar7 = iVar15 * 2 + 1;
                iVar6 = iVar15;
              } while ((longlong)iVar7 < (longlong)uVar11);
              memcpy(&local_260,pcVar16,0x218);
              memcpy(pcVar16,pcVar16 + (uVar11 - 1) * 0x218,0x218);
              memcpy(pcVar16 + (uVar11 - 1) * 0x218,&local_260,0x218);
              bVar2 = 2 < uVar11;
              plVar14 = local_5d0;
              uVar11 = uVar11 - 1;
            } while (bVar2);
          }
        }
      }
LAB_14319b494:
      plVar14 = plVar14 + -3;
    } while (&local_568 <= plVar14);
  }
  if ((longlong)DAT_14ca77e38 != 0) {
    puVar22 = DAT_14ca77e30 + DAT_14ca77e38;
    puVar24 = DAT_14ca77e30;
    do {
      lVar13 = local_588;
      lVar20 = (longlong)(int)uStack_580;
      if (0 < lVar20) {
        pcVar17 = (char *)*puVar24;
        lVar23 = 0;
        do {
          iVar5 = strcmp((char *)(lVar13 + lVar23),pcVar17);
          plVar14 = local_5b8;
          if (iVar5 == 0) {
            iVar5 = (int)local_5b8[1];
            *(uint *)(local_5b8 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)local_5b8 + 0xc) < iVar5 + 1U) {
              FUN_140ca86cc(local_5b8,iVar5);
            }
            *(char **)(*plVar14 + (longlong)iVar5 * 8) = pcVar17;
            lVar13 = (longlong)*(int *)(local_588 + 0x210 + lVar23);
            if (lVar13 != 0) {
              pcVar17 = *(char **)(local_588 + 0x208 + lVar23);
              pcVar9 = pcVar17 + lVar13 * 0x104;
              do {
                lVar13 = local_5b0[1];
                if ((longlong)(int)lVar13 != 0) {
                  lVar20 = *local_5b0;
                  lVar23 = 0;
                  do {
                    lVar1 = *(longlong *)(lVar20 + lVar23);
                    iVar5 = strcmp(*(char **)(lVar1 + 8),pcVar17);
                    if (iVar5 == 0) {
                      *(undefined1 *)(lVar1 + 0x15) = 1;
                      break;
                    }
                    lVar23 = lVar23 + 8;
                  } while ((longlong)(int)lVar13 * 8 != lVar23);
                }
                pcVar17 = pcVar17 + 0x104;
              } while (pcVar17 != pcVar9);
            }
            break;
          }
          lVar23 = lVar23 + 0x218;
        } while (lVar20 * 0x218 - lVar23 != 0);
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar22);
  }
  plVar14 = local_5b8;
  FUN_1473a5802(&local_598,&local_588,local_5b0,local_5b8);
  iVar5 = (int)plVar14[1];
  local_5c0 = (char *)(longlong)iVar5;
  if ((longlong)local_5c0 < 1) {
    local_5c8 = *plVar14;
  }
  else {
    local_5c8 = *plVar14;
    if (iVar5 == 1) {
      local_5c0 = (char *)0x1;
    }
    else {
      uVar10 = iVar5 - 2;
      uVar11 = (ulonglong)local_5c0;
      do {
        iVar5 = iVar5 + -1;
        uVar12 = uVar11 - 1;
        puVar24 = (undefined8 *)(local_5c8 + uVar11 * 8 + -8);
        pcVar17 = (char *)*puVar24;
        puVar22 = (undefined8 *)(local_5c8 + (ulonglong)uVar10 * 8);
        iVar6 = iVar5;
        do {
          iVar7 = strcmp(pcVar17,(char *)*puVar22);
          if (iVar7 == 0) {
            iVar6 = (int)local_5c0;
            if (uVar11 != ((ulonglong)local_5c0 & 0xffffffff)) {
              iVar7 = iVar6 - (int)uVar11;
              if (0 < iVar7) {
                iVar7 = 1;
              }
              memmove(puVar24,(void *)(local_5c8 + (longlong)(iVar6 - iVar7) * 8),
                      (longlong)iVar7 << 3);
              iVar6 = (int)local_5b8[1];
              local_5c8 = *local_5b8;
            }
            local_5c0 = (char *)(ulonglong)(iVar6 - 1U);
            *(uint *)(local_5b8 + 1) = iVar6 - 1U;
            break;
          }
          puVar22 = puVar22 + -1;
          iVar6 = iVar6 + -1;
        } while (0 < iVar6);
        uVar10 = uVar10 - 1;
        uVar11 = uVar12;
        plVar14 = local_5b8;
      } while (1 < uVar12);
    }
  }
  FUN_1473ad5a6(local_5c8,local_5c0);
  FUN_1473ad502(local_588,uStack_580 & 0xffffffff);
  if (local_588 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_5a8 + 0x84) = local_590;
  if ((local_48 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar14;
LAB_14319b0b1:
  memcpy(&local_260,_Str1,0x218);
  memcpy(_Str1,pcVar9,0x218);
  memcpy(pcVar9,&local_260,0x218);
  iVar5 = (int)local_5c8 + -1;
  pcVar21 = pcVar21 + -0x430;
  if ((longlong)pcVar19 - (longlong)local_5a0 < (longlong)local_5c0 - (longlong)pcVar8) {
    if (pcVar16 < pcVar17) {
      *local_5d0 = (longlong)pcVar16;
      local_5d0[1] = (longlong)pcVar17;
      *(int *)(local_5d0 + 2) = iVar5;
      local_5d0 = local_5d0 + 3;
    }
    plVar14 = local_5d0;
    pcVar16 = _Str1;
    if (pcVar9 <= _Str1 + 0x218) goto LAB_14319b494;
  }
  else {
    plVar14 = local_5d0;
    if (_Str1 + 0x218 < pcVar9) {
      *local_5d0 = (longlong)_Str1;
      local_5d0[1] = (longlong)pcVar21;
      *(int *)(local_5d0 + 2) = iVar5;
      plVar14 = local_5d0 + 3;
    }
    _Str1 = pcVar8;
    pcVar19 = pcVar17;
    pcVar21 = pcVar17;
    if (pcVar17 <= pcVar16) goto LAB_14319b494;
  }
  local_5d0 = plVar14;
  iVar6 = (int)((ulonglong)((longlong)pcVar19 - (longlong)_Str1) >> 3) * 0x7a44c6b;
  uVar11 = (ulonglong)(iVar6 + 1);
  pcVar9 = _Str1;
  _Str1 = pcVar16;
  pcVar17 = pcVar21;
  if (iVar5 == 0) goto LAB_14319b19e;
  goto LAB_14319afa2;
}



// FUNCTION 14319b720 FUN_14319b720 body=289 status=ok
// SIG undefined FUN_14319b720(void)

ulonglong FUN_14319b720(char *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  
  uVar6 = (ulonglong)(int)param_2[1];
  if ((longlong)uVar6 < 1) {
LAB_14319b78d:
    uVar6 = 0;
  }
  else {
    pcVar5 = (char *)*param_2;
    iVar3 = strcmp(pcVar5,param_1);
    if (iVar3 == 0) {
      uVar6 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
      uVar7 = 0;
    }
    else {
      pcVar5 = pcVar5 + 0x218;
      uVar7 = 0;
      do {
        if (uVar6 - 1 == uVar7) goto LAB_14319b78d;
        iVar3 = strcmp(pcVar5,param_1);
        pcVar5 = pcVar5 + 0x218;
        uVar7 = uVar7 + 1;
      } while (iVar3 != 0);
      uVar6 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),uVar7 < uVar6);
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_140ca86cc(param_4,iVar3);
    }
    *(char **)(*param_4 + (longlong)iVar3 * 8) = param_1;
    lVar4 = (longlong)*(int *)(*param_2 + 0x210 + uVar7 * 0x218);
    if (lVar4 != 0) {
      pcVar5 = *(char **)(*param_2 + 0x208 + uVar7 * 0x218);
      pcVar9 = pcVar5 + lVar4 * 0x104;
      do {
        lVar4 = param_3[1];
        if ((longlong)(int)lVar4 != 0) {
          lVar1 = *param_3;
          lVar8 = 0;
          do {
            lVar2 = *(longlong *)(lVar1 + lVar8);
            iVar3 = strcmp(*(char **)(lVar2 + 8),pcVar5);
            if (iVar3 == 0) {
              *(undefined1 *)(lVar2 + 0x15) = 1;
              break;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar8);
        }
        pcVar5 = pcVar5 + 0x104;
      } while (pcVar5 != pcVar9);
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14319b841 FUN_14319b841 body=69 status=ok
// SIG undefined FUN_14319b841(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b841(void)

{
  _DAT_14ca77e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e58,1);
  return;
}



// FUNCTION 14319b886 FUN_14319b886 body=69 status=ok
// SIG undefined FUN_14319b886(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b886(void)

{
  _DAT_14ca77e60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e68,1);
  return;
}



// FUNCTION 14319b8cb FUN_14319b8cb body=69 status=ok
// SIG undefined FUN_14319b8cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b8cb(void)

{
  _DAT_14ca77e70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e78,1);
  return;
}



// FUNCTION 14319b910 FUN_14319b910 body=69 status=ok
// SIG undefined FUN_14319b910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b910(void)

{
  _DAT_14ca77e80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e88,1);
  return;
}



// FUNCTION 14319b955 FUN_14319b955 body=69 status=ok
// SIG undefined FUN_14319b955(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b955(void)

{
  _DAT_14ca77e90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77e98,1);
  return;
}



// FUNCTION 14319b99a FUN_14319b99a body=69 status=ok
// SIG undefined FUN_14319b99a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b99a(void)

{
  _DAT_14ca77ea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319b9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ea8,1);
  return;
}



// FUNCTION 14319b9df FUN_14319b9df body=69 status=ok
// SIG undefined FUN_14319b9df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319b9df(void)

{
  _DAT_14ca77eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319ba21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ec0,1);
  return;
}



// FUNCTION 14319ba24 FUN_14319ba24 body=69 status=ok
// SIG undefined FUN_14319ba24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319ba24(void)

{
  _DAT_14ca77ed0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319ba66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ed8,1);
  return;
}



// FUNCTION 14319ba69 FUN_14319ba69 body=69 status=ok
// SIG undefined FUN_14319ba69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319ba69(void)

{
  _DAT_14ca77ee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319baab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77ef0,1);
  return;
}



// FUNCTION 14319baae FUN_14319baae body=69 status=ok
// SIG undefined FUN_14319baae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319baae(void)

{
  _DAT_14ca77ef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f00,1);
  return;
}



// FUNCTION 14319baf3 FUN_14319baf3 body=69 status=ok
// SIG undefined FUN_14319baf3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319baf3(void)

{
  _DAT_14ca77f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f18,1);
  return;
}



// FUNCTION 14319bb38 FUN_14319bb38 body=69 status=ok
// SIG undefined FUN_14319bb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bb38(void)

{
  _DAT_14ca77f20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bb7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f28,1);
  return;
}



// FUNCTION 14319bb7d FUN_14319bb7d body=69 status=ok
// SIG undefined FUN_14319bb7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bb7d(void)

{
  _DAT_14ca77f38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f40,1);
  return;
}



// FUNCTION 14319bbc2 FUN_14319bbc2 body=69 status=ok
// SIG undefined FUN_14319bbc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bbc2(void)

{
  _DAT_14ca77f50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f58,1);
  return;
}



// FUNCTION 14319bc07 FUN_14319bc07 body=69 status=ok
// SIG undefined FUN_14319bc07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bc07(void)

{
  _DAT_14ca77f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bc49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f68,1);
  return;
}



// FUNCTION 14319bc4c FUN_14319bc4c body=69 status=ok
// SIG undefined FUN_14319bc4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bc4c(void)

{
  _DAT_14ca77f78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bc8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f80,1);
  return;
}



// FUNCTION 14319bc91 FUN_14319bc91 body=69 status=ok
// SIG undefined FUN_14319bc91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bc91(void)

{
  _DAT_14ca77f88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bcd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77f90,1);
  return;
}



// FUNCTION 14319bcd6 FUN_14319bcd6 body=69 status=ok
// SIG undefined FUN_14319bcd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14319bcd6(void)

{
  _DAT_14ca77f98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014319bd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77fa0,1);
  return;
}



// FUNCTION 14319bd1c FUN_14319bd1c body=295 status=ok
// SIG undefined FUN_14319bd1c(void)

void FUN_14319bd1c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined1 local_244 [4];
  longlong local_240;
  undefined1 local_238 [520];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((*(byte *)(lVar1 + 0x20f8) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x3b9e67c8;
    lVar2 = 0;
    memset((void *)(param_1 + 0x5c),0,0x10c);
    local_248 = 0x3b9bb07e;
    memset(local_244,0,0x214);
    local_240 = param_1 + 0x58;
    (*DAT_14ca78e78)(*(undefined8 *)(lVar1 + 0xae8),&local_248);
    memcpy((void *)(param_1 + 0x168),local_238,0x208);
    lVar1 = (longlong)DAT_14c760c60;
    do {
      *(ulonglong *)(param_1 + 0x68 + lVar2 * 8) =
           (ulonglong)(*(longlong *)(param_1 + 0x68 + lVar2 * 8) * lVar1) / 100;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_268);
  }
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014319bd8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca78e70)(*(undefined8 *)(lVar1 + 0xae8),param_1 + 0x168,DAT_14ca78e70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_268);
}



// FUNCTION 14319be54 FUN_14319be54 body=839 status=ok
// SIG undefined FUN_14319be54(void)

void FUN_14319be54(longlong *param_1,char param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75));
  uVar4 = DAT_14c7590b0;
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar19 = 1;
    uVar17 = 0;
    iVar8 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar19 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar19 = uVar17;
      }
      iVar8 = 0;
      do {
        if (uVar19 == uVar17) goto LAB_14319bf15;
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar8 = 0;
    }
    uVar19 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar8 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar15 = 0xffffffff;
    do {
      lVar16 = *param_1;
      lVar7 = (longlong)iVar5 * 0x38;
      iVar5 = *(int *)(lVar16 + 0x28 + lVar7);
      if (0 < iVar5) {
        lVar1 = lVar16 + lVar7;
        uVar12 = (uint)(*(ulonglong *)(lVar16 + 0x18 + lVar7) < 0x800001) * 5 + 5;
        plVar18 = (longlong *)(lVar16 + lVar7 + 0x20);
        uVar10 = 0;
        uVar9 = 0;
        do {
          lVar16 = (longlong)(int)uVar9 * 0x10;
          iVar11 = *(int *)(*plVar18 + 8 + lVar16);
          if ((iVar11 + 100U < uVar4) || (param_2 != '\0')) {
            FUN_14319d6a4(param_1,*(undefined8 *)(*plVar18 + lVar16));
            iVar5 = *(int *)(lVar1 + 0x28);
            if (~uVar9 + iVar5 != 0) {
              memmove((void *)(*(longlong *)(lVar1 + 0x20) + lVar16),
                      (void *)(*(longlong *)(lVar1 + 0x20) + lVar16 + 0x10),
                      (longlong)(int)(~uVar9 + iVar5) << 4);
              iVar5 = *(int *)(lVar1 + 0x28);
            }
            *(int *)(lVar1 + 0x28) = iVar5 + -1;
            FUN_1473adfd6(plVar18);
            iVar5 = *(int *)(lVar1 + 0x28);
          }
          else {
            uVar10 = uVar10 + (iVar11 + 10U < uVar4);
            uVar9 = uVar9 + 1;
          }
        } while ((int)uVar9 < iVar5);
        iVar11 = uVar10 - uVar12;
        if (((uVar12 <= uVar10 && iVar11 != 0) && (0 < iVar5)) && (iVar11 != 0)) {
          uVar9 = 0;
          do {
            lVar16 = (longlong)(int)uVar9 * 0x10;
            if (*(int *)(*plVar18 + 8 + lVar16) + 10U < uVar4) {
              FUN_14319d6a4(param_1,*(undefined8 *)(*plVar18 + lVar16));
              iVar5 = *(int *)(lVar1 + 0x28);
              if (~uVar9 + iVar5 != 0) {
                memmove((void *)(*(longlong *)(lVar1 + 0x20) + lVar16),
                        (void *)(*(longlong *)(lVar1 + 0x20) + lVar16 + 0x10),
                        (longlong)(int)(~uVar9 + iVar5) << 4);
                iVar5 = *(int *)(lVar1 + 0x28);
              }
              *(int *)(lVar1 + 0x28) = iVar5 + -1;
              FUN_1473adfd6(plVar18);
              iVar11 = iVar11 + -1;
              iVar5 = *(int *)(lVar1 + 0x28);
            }
            else {
              uVar9 = uVar9 + 1;
            }
          } while (((int)uVar9 < iVar5) && (iVar11 != 0));
        }
      }
      uVar15 = uVar15 & ~(uint)uVar19;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar11 = (int)param_1[5];
      iVar5 = (int)uVar17;
      lVar16 = (longlong)iVar5;
      uVar9 = puVar6[lVar16] & uVar15;
      if (uVar9 == 0) {
        iVar13 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar13 = iVar11 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar5) {
          iVar14 = iVar5;
        }
        if (iVar5 < iVar13) {
          lVar7 = 0;
          do {
            uVar9 = puVar6[lVar16 + lVar7 + 1];
            if (uVar9 != 0) {
              uVar17 = (ulonglong)(iVar5 + (int)lVar7 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14319c135;
            }
            iVar8 = iVar8 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar14 - lVar16 != lVar7);
          uVar15 = 0xffffffff;
          iVar5 = iVar14;
        }
        uVar17 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar11;
      }
      else {
LAB_14319c135:
        uVar19 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar5) {
          iVar5 = iVar11;
        }
      }
    } while (iVar5 != iVar3);
  }
LAB_14319bf15:
                    /* WARNING: Could not recover jumptable at 0x00014319bf2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75));
  return;
}



// FUNCTION 14319c19c FUN_14319c19c body=1446 status=ok
// SIG undefined FUN_14319c19c(void)

ulonglong *
FUN_14319c19c(longlong param_1,char param_2,ulonglong param_3,uint param_4,undefined4 *param_5,
             uint param_6,char param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined1 auStack_118 [32];
  double local_f8;
  uint local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  uint local_c8 [12];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  longlong lStack_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  uVar4 = uStack_54;
  uVar2 = uStack_58;
  uStack_58 = (undefined4)param_3;
  uVar3 = uStack_58;
  uStack_54 = (undefined4)(param_3 >> 0x20);
  uVar5 = uStack_54;
  if (param_5 == (undefined4 *)0x0) {
    local_c8[0] = param_4;
    local_c8[2] = uStack_58;
    local_c8[3] = uStack_54;
    uStack_58 = uVar2;
    uStack_54 = uVar4;
    uVar8 = (*(code *)PTR_FUN_14c75b148)(local_c8 + 2,8,0);
    iVar9 = (*(code *)PTR_FUN_14c75b148)(local_c8,4,0);
    uVar15 = uVar8 >> 0xd ^ iVar9 - uVar8;
    uVar10 = uVar15 << 8 ^ (-0x61c88647 - uVar8) - uVar15;
    uVar8 = uVar10 >> 0xd ^ (uVar8 - uVar15) - uVar10;
    uVar15 = uVar8 >> 0xc ^ (uVar15 - uVar10) - uVar8;
    uVar10 = uVar15 << 0x10 ^ (uVar10 - uVar8) - uVar15;
    uVar8 = uVar10 >> 5 ^ (uVar8 - uVar15) - uVar10;
    uVar15 = uVar8 >> 3 ^ (uVar15 - uVar10) - uVar8;
    uVar10 = uVar15 << 10 ^ (uVar10 - uVar8) - uVar15;
    lVar13 = FUN_1473ad9f6(param_1,uVar10 >> 0xf ^ uVar8 - (uVar15 + uVar10),local_c8);
    iVar9 = *(int *)(lVar13 + 0x18);
    if (0 < (longlong)iVar9) {
      puVar12 = *(ulonglong **)(*(longlong *)(lVar13 + 0x10) + -0x10 + (longlong)iVar9 * 0x10);
      *(int *)(lVar13 + 0x18) = iVar9 + -1;
      FUN_1473adfd6(lVar13 + 0x10);
      goto LAB_14319c40b;
    }
  }
  local_68 = 5;
  local_64 = 0;
  uStack_50 = (ulonglong)param_4;
  if ((*(byte *)(*(longlong *)(param_1 + 0x378) + 0x20f8) & 2) == 0) {
    uStack_60 = (undefined4 *)0x0;
  }
  else {
    uStack_60 = &local_80;
    local_80 = 0x3b9e6bb1;
    local_7c = 0;
    local_6c = 0;
    lStack_74 = (ulonglong)param_6 << 0x20;
  }
  if (param_5 != (undefined4 *)0x0) {
    *(undefined4 **)(param_5 + 2) = uStack_60;
    uStack_60 = param_5;
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = 0;
  uStack_84 = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  puVar11 = uStack_60;
  uStack_58 = uVar3;
  uStack_54 = uVar5;
  if (param_7 != '\0') {
    puVar11 = &local_98;
    local_98 = 0x3b9be342;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_84 = 0;
    local_c8[0] = 0x3b9be729;
    local_c8[1] = 0;
    local_c8[4] = 0;
    local_c8[5] = 0;
    local_c8[2] = (uint)uStack_60;
    local_c8[3] = (uint)((ulonglong)uStack_60 >> 0x20);
    local_c8[6] = 0x10000000;
    local_c8[7] = 0;
    cVar6 = FUN_145dccdc7(6,2,0);
    puVar14 = (uint *)0x0;
    if (cVar6 != '\0') {
      puVar14 = local_c8;
    }
    uStack_90 = SUB84(puVar14,0);
    uStack_8c = (undefined4)((ulonglong)puVar14 >> 0x20);
    bVar7 = FUN_145dccdc7(6,2,0);
    local_88 = (uint)(bVar7 ^ 1) * 2 + 2;
  }
  uStack_60 = puVar11;
  if ((*(byte *)(*(longlong *)(param_1 + 0x378) + 0x20fb) & 0x40) != 0) {
    uStack_60 = &local_e0;
    local_e0 = 0x3b9bb460;
    local_dc = 0;
    local_cc = 0;
    uStack_d0 = 2;
    uStack_d8 = SUB84(puVar11,0);
    uStack_d4 = (undefined4)((ulonglong)puVar11 >> 0x20);
  }
  uVar8 = (*DAT_14ca78e90)(*(undefined8 *)(param_1 + 0x370),&local_68,0,&local_e8);
  if (uVar8 < 0xfffffffe) {
    if (uVar8 != 0) {
      FUN_1431b4552(uVar8,"Result",".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x3a2);
    }
  }
  else {
    if (param_2 != '\0') {
      puVar12 = (ulonglong *)0x0;
      goto LAB_14319c40b;
    }
    pwVar18 = L"Local";
    if ((uVar8 & 1) != 0) {
      pwVar18 = L"Host";
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    FUN_14742fd5e(&DAT_14ca9a3e8,&DAT_14c872ee0);
    FUN_14319c744(*(longlong *)(param_1 + 0x378) + 0x3d8,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    FUN_146816410(&DAT_14c872ee0);
    local_f8 = (double)((float)param_3 * 0.0009765625);
    local_f0 = param_4;
    FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x39e,
                  L"Out of %s Memory, Requested%.2fKB MemTypeIndex=%d\n",pwVar18);
  }
  puVar12 = (ulonglong *)FUN_14001cc68(0x28,0x10);
  puVar12[3] = 0;
  puVar12[1] = *(ulonglong *)(param_1 + 0x370);
  puVar12[2] = local_e8;
  *puVar12 = param_3;
  *(uint *)(puVar12 + 4) =
       (*(uint *)(param_1 + 0x16c + (ulonglong)param_4 * 8) & 0xe) << 7 |
       (uint)(param_5 != (undefined4 *)0x0) << 0xc | param_4 & 0xff;
  uVar8 = *(int *)(param_1 + 0x380) + 1;
  *(uint *)(param_1 + 0x380) = uVar8;
  if (uVar8 < *(uint *)(param_1 + 900)) {
    uVar8 = *(uint *)(param_1 + 900);
  }
  *(uint *)(param_1 + 900) = uVar8;
  lVar17 = (longlong)*(int *)(param_1 + 0x170 + (ulonglong)param_4 * 8) * 0x20;
  lVar13 = *(longlong *)(param_1 + 0x390) + lVar17;
  iVar9 = *(int *)(lVar13 + 0x18);
  *(uint *)(lVar13 + 0x18) = iVar9 + 1U;
  if (*(uint *)(lVar13 + 0x1c) < iVar9 + 1U) {
    FUN_1473ae072((longlong *)(lVar13 + 0x10),iVar9);
  }
  *(ulonglong **)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar9 * 8) = puVar12;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x390) + lVar17);
  *plVar1 = *plVar1 + param_3;
  lVar13 = *(longlong *)(param_1 + 0x390);
  uVar16 = *(ulonglong *)(lVar13 + 8 + lVar17);
  if (uVar16 < *(ulonglong *)(lVar13 + lVar17)) {
    uVar16 = *(ulonglong *)(lVar13 + lVar17);
  }
  *(ulonglong *)(lVar13 + 8 + lVar17) = uVar16;
LAB_14319c40b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14319c744 FUN_14319c744 body=3935 status=ok
// SIG undefined FUN_14319c744(void)

void FUN_14319c744(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined *puVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  longlong *local_1e0;
  char local_1d1;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  uint *local_1b0;
  longlong local_1a8;
  LPCRITICAL_SECTION local_1a0;
  ulonglong local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  void *local_170;
  int local_168;
  undefined4 local_164;
  void *local_160;
  int local_158;
  undefined4 local_154;
  void *local_150;
  int local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [23];
  undefined1 local_119;
  void *local_118;
  int local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint *local_80;
  undefined1 *local_78;
  uint *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1a0 = (LPCRITICAL_SECTION)(param_1 + 4);
  local_1d1 = param_2;
  EnterCriticalSection(local_1a0);
  plVar26 = (longlong *)param_1[1];
  local_98 = 0;
  uStack_90 = 0;
  local_1e0 = param_1;
  FUN_1473a5c60(&local_98,*(undefined4 *)((longlong)plVar26 + 0x26c));
  plVar1 = local_1e0;
  if (*(int *)((longlong)plVar26 + 0x26c) != 0) {
    uVar7 = 0;
    do {
      *(undefined4 *)(local_98 + 0x40 + (longlong)(int)uVar7 * 0x48) = 0;
      uVar32 = *(uint *)((longlong)plVar26 + 0x168);
      if (uVar32 != 0) {
        uVar22 = 0;
        do {
          if (*(uint *)((longlong)plVar26 + 0x170 + uVar22 * 8) == uVar7) {
            puVar13 = (uint *)(local_98 + 0x40 + (longlong)(int)uVar7 * 0x48);
            *puVar13 = *puVar13 | *(uint *)((longlong)plVar26 + 0x16c + uVar22 * 8);
            uVar32 = *(uint *)((longlong)plVar26 + 0x168);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar32);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((longlong)plVar26 + 0x26c));
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_1c0 = (longlong)(int)local_1e0[3];
  local_1b0 = (uint *)((longlong)plVar26 + 0x168);
  FUN_1473a5c60(&local_a8,(int)local_1e0[3] + 0x11);
  iVar8 = (int)plVar1[3];
  if (0 < iVar8) {
    lVar23 = 0;
    local_1c8 = plVar26;
    do {
      plVar1 = local_1c8;
      lVar18 = *(longlong *)(local_1e0[2] + lVar23 * 8);
      if (lVar18 != 0) {
        local_1b8 = (ulonglong)*(ushort *)(lVar18 + 0x60);
        *(undefined4 *)(local_a8 + 0x40 + lVar23 * 0x48) =
             *(undefined4 *)((longlong)plVar26 + 0x16c + local_1b8 * 8);
        lVar11 = lVar23 * 0x48 + local_a8;
        lVar18 = *(longlong *)(local_1e0[2] + lVar23 * 8);
        plVar26 = (longlong *)(lVar18 + 0xa8);
        lVar16 = 0xa8;
        lVar25 = 0;
        do {
          if (lVar25 < *(int *)(lVar18 + 0x50)) {
            bVar6 = *(byte *)(lVar18 + 0xc + lVar25 * 0x10) & 1;
          }
          else {
            bVar6 = 0;
          }
          if (0 < (int)plVar26[1]) {
            lVar27 = *(longlong *)(lVar11 + 0x20);
            lVar28 = *(longlong *)(lVar11 + 0x28);
            lVar10 = (ulonglong)(bVar6 ^ 1) * 8;
            lVar19 = *(longlong *)(lVar11 + 0x10 + lVar10);
            lVar4 = *(longlong *)(lVar11 + 0x30 + lVar10);
            lVar14 = *(longlong *)(lVar11 + (ulonglong)bVar6 * 8);
            lVar17 = 0;
            do {
              *(longlong *)(lVar11 + 0x28) = lVar28 + 1 + lVar17;
              lVar27 = lVar27 + (ulonglong)*(uint *)(*(longlong *)(*plVar26 + lVar17 * 8) + 0x48);
              *(longlong *)(lVar11 + 0x20) = lVar27;
              lVar19 = lVar19 + *(longlong *)(*(longlong *)(*plVar26 + lVar17 * 8) + 0x58);
              *(longlong *)(lVar11 + lVar10 + 0x10) = lVar19;
              lVar14 = lVar14 + (ulonglong)*(uint *)(*(longlong *)(*plVar26 + lVar17 * 8) + 0x84);
              *(longlong *)(lVar11 + (ulonglong)bVar6 * 8) = lVar14;
              *(longlong *)(lVar11 + lVar10 + 0x30) = lVar4 + 1 + lVar17;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)plVar26[1]);
          }
          lVar25 = lVar25 + 1;
          plVar26 = (longlong *)(lVar18 + lVar16 + 0x10);
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != 0xf8);
        local_1d0 = lVar23;
        FUN_1473a7dc6((longlong)*(int *)((longlong)local_1c8 + 0x170 + local_1b8 * 8) * 0x48 +
                      local_98,lVar23 * 0x48 + local_a8);
        iVar8 = (int)local_1e0[3];
        plVar26 = plVar1;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar8);
  }
  iVar8 = (int)local_1c0;
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar8 + 0x10);
  local_1c8 = local_1e0 + 0x19;
  lVar23 = 0;
  do {
    plVar1 = (longlong *)(local_a8 + (longlong)(iVar8 + (int)lVar23) * 0x48);
    plVar2 = (longlong *)(local_a8 + (longlong)(iVar8 + 8 + (int)lVar23) * 0x48);
    if (0 < (int)local_1e0[lVar23 * 2 + 0x1a]) {
      lVar18 = 0;
      do {
        lVar11 = *(longlong *)(local_1c8[lVar23 * 2] + lVar18 * 8);
        plVar15 = plVar1;
        if ((*(byte *)(lVar11 + 0x3c) & 1) == 0) {
          plVar15 = plVar2;
        }
        plVar15[5] = plVar15[5] + 1;
        plVar15[7] = plVar15[7] + 1;
        plVar15[4] = plVar15[4] + (ulonglong)*(uint *)(lVar11 + 0x48);
        *(uint *)(plVar15 + 8) = *(uint *)(plVar15 + 8) | *(uint *)(lVar11 + 0x3c);
        lVar16 = (longlong)
                 *(int *)((longlong)plVar26 + 0x170 + (ulonglong)*(uint *)(lVar11 + 0x38) * 8);
        plVar15 = (longlong *)(local_98 + 0x28 + lVar16 * 0x48);
        *plVar15 = *plVar15 + 1;
        plVar15 = (longlong *)(local_98 + 0x38 + lVar16 * 0x48);
        *plVar15 = *plVar15 + 1;
        plVar15 = (longlong *)(local_98 + 0x20 + lVar16 * 0x48);
        *plVar15 = *plVar15 + (ulonglong)*(uint *)(lVar11 + 0x48);
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)(local_1c8 + lVar23 * 2)[1]);
    }
    plVar15 = local_1e0 + lVar23 * 2 + 9;
    if (0 < (int)plVar15[1]) {
      lVar18 = 0;
      do {
        lVar11 = *(longlong *)(*plVar15 + lVar18 * 8);
        plVar20 = plVar1;
        if ((*(byte *)(lVar11 + 0x3c) & 1) == 0) {
          plVar20 = plVar2;
        }
        plVar20[5] = plVar20[5] + 1;
        plVar20[7] = plVar20[7] + 1;
        plVar20[3] = plVar20[3] + *(longlong *)(lVar11 + 0x58);
        plVar20[4] = plVar20[4] + (ulonglong)*(uint *)(lVar11 + 0x48);
        *plVar20 = *plVar20 + (ulonglong)*(uint *)(lVar11 + 0x84);
        *(uint *)(plVar20 + 8) = *(uint *)(plVar20 + 8) | *(uint *)(lVar11 + 0x3c);
        lVar16 = (longlong)
                 *(int *)((longlong)plVar26 + 0x170 + (ulonglong)*(uint *)(lVar11 + 0x38) * 8);
        plVar20 = (longlong *)(local_98 + 0x28 + lVar16 * 0x48);
        *plVar20 = *plVar20 + 1;
        plVar20 = (longlong *)(local_98 + 0x38 + lVar16 * 0x48);
        *plVar20 = *plVar20 + 1;
        plVar20 = (longlong *)(local_98 + 0x18 + lVar16 * 0x48);
        *plVar20 = *plVar20 + *(longlong *)(lVar11 + 0x58);
        plVar20 = (longlong *)(local_98 + 0x20 + lVar16 * 0x48);
        *plVar20 = *plVar20 + (ulonglong)*(uint *)(lVar11 + 0x48);
        plVar20 = (longlong *)(local_98 + lVar16 * 0x48);
        *plVar20 = *plVar20 + (ulonglong)*(uint *)(lVar11 + 0x84);
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)plVar15[1]);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 8);
  iVar21 = (int)local_1e0[3];
  local_1a8 = (longlong)(iVar8 + 0x10);
  if (0 < iVar21) {
    lVar23 = local_1a8 * 0x48 + local_a8;
    lVar18 = 0;
    do {
      lVar11 = *(longlong *)(local_1e0[2] + lVar18 * 8);
      if (lVar11 != 0) {
        if ((longlong)*(int *)(lVar11 + 0x100) == 0) {
          lVar25 = 0;
          lVar27 = 0;
          lVar28 = 0;
          lVar16 = 0;
        }
        else {
          lVar19 = (longlong)*(int *)(lVar11 + 0x100) << 3;
          lVar16 = 0;
          lVar28 = 0;
          lVar27 = 0;
          lVar25 = 0;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0xf8) + lVar16 * 8);
            lVar16 = lVar16 + 1;
            lVar25 = lVar25 + (ulonglong)*(uint *)(lVar4 + 0x48);
            lVar27 = lVar27 + *(longlong *)(lVar4 + 0x58);
            lVar28 = lVar28 + (ulonglong)*(uint *)(lVar4 + 0x84);
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        lVar11 = (longlong)
                 *(int *)((longlong)plVar26 + 0x170 + (ulonglong)*(ushort *)(lVar11 + 0x60) * 8);
        plVar1 = (longlong *)(local_98 + 8 + lVar11 * 0x48);
        *plVar1 = *plVar1 + lVar28;
        plVar1 = (longlong *)(local_98 + 0x10 + lVar11 * 0x48);
        *plVar1 = *plVar1 + lVar27;
        plVar1 = (longlong *)(local_98 + 0x20 + lVar11 * 0x48);
        *plVar1 = *plVar1 + lVar25;
        plVar1 = (longlong *)(local_98 + 0x28 + lVar11 * 0x48);
        *plVar1 = *plVar1 + lVar16;
        *(longlong *)(lVar23 + 8) = *(longlong *)(lVar23 + 8) + lVar28;
        *(longlong *)(lVar23 + 0x10) = *(longlong *)(lVar23 + 0x10) + lVar27;
        *(longlong *)(lVar23 + 0x20) = *(longlong *)(lVar23 + 0x20) + lVar25;
        *(longlong *)(lVar23 + 0x28) = *(longlong *)(lVar23 + 0x28) + lVar16;
        iVar21 = (int)local_1e0[3];
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar21);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_b8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  lVar23 = *local_1e0;
  FUN_1473a7e08(lVar23 + 0x5d0);
  FUN_1473a5994(lVar23 + 8,&local_108);
  if (0 < (int)uStack_100) {
    lVar23 = 0x40;
    uVar22 = 0;
    do {
      lVar18 = local_108;
      FUN_140002266(&local_118,L"Device Heap %d",uVar22 & 0xffffffff);
      if (*(int *)(lVar18 + lVar23) == 0) {
        FUN_140056680(&local_70,&DAT_149dfb77a);
      }
      else {
        FUN_140002266(&local_80,&DAT_149e061aa);
        puVar13 = (uint *)&DAT_149dfb77a;
        if ((int)local_78 != 0) {
          puVar13 = local_80;
        }
        FUN_140056680(&local_70,puVar13);
        if (local_80 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0x48;
    } while ((longlong)uVar22 < (longlong)(int)uStack_100);
  }
  if ((int)uStack_a0 < 1) {
    FUN_140056680(&local_118,L"TotalHost");
    uVar7 = 0;
  }
  else {
    local_1b8 = local_1d0 & 0xffffffff;
    local_198 = (ulonglong)(uint)-(int)local_1c0;
    uVar22 = 0;
    lVar23 = 0x40;
    uVar7 = 0;
    uVar32 = 0;
    do {
      lVar18 = local_a8;
      uVar3 = *(uint *)(local_a8 + lVar23);
      uVar30 = 0;
      if ((uVar3 & 1) == 0) {
        uVar30 = uVar3;
      }
      local_1d0 = CONCAT44(local_1d0._4_4_,uVar3);
      if (local_1b8 == uVar22) {
        FUN_140056680(&local_118,L"Dedicated Pages");
      }
      else {
        if ((longlong)uVar22 < local_1a8 && local_1c0 <= (longlong)uVar22) {
          uVar9 = (int)local_198 + (int)uVar22 & 7;
          uVar31 = 0xffffffff;
          if (uVar9 != 7) {
            uVar31 = (ulonglong)(uint)(&DAT_14a35ba40)[uVar9];
          }
          pwVar12 = L"Pool %d";
        }
        else {
          pwVar12 = L"ResourceHeap %d";
          uVar31 = uVar22 & 0xffffffff;
        }
        FUN_140002266(&local_118,pwVar12,uVar31);
      }
      if (*(int *)(lVar18 + lVar23) == 0) {
        FUN_140056680(&local_70,&DAT_149dfb77a);
      }
      else {
        FUN_140002266(&local_80,&DAT_149e061aa);
        puVar13 = (uint *)&DAT_149dfb77a;
        if ((int)local_78 != 0) {
          puVar13 = local_80;
        }
        FUN_140056680(&local_70,puVar13);
        if (local_80 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar32 = uVar32 | uVar30;
      uVar7 = uVar7 | -(uVar3 & 1) & (uint)local_1d0;
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0x48;
    } while ((longlong)uVar22 < (longlong)(int)uStack_a0);
    FUN_140056680(&local_118,L"TotalHost");
    if (uVar32 != 0) {
      FUN_140002266(&local_80,&DAT_149e061aa,uVar32);
      puVar13 = local_80;
      if ((int)local_78 == 0) {
        puVar13 = (uint *)&DAT_149dfb77a;
      }
      FUN_140056680(&local_70,puVar13);
      if (local_80 != (uint *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14319cf6f;
    }
  }
  FUN_140056680(&local_70,&DAT_149dfb77a);
LAB_14319cf6f:
  if (local_70 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_118,L"TotalLocal");
  if (uVar7 == 0) {
    FUN_140056680(&local_70,&DAT_149dfb77a);
  }
  else {
    FUN_140002266(&local_80,&DAT_149e061aa,uVar7);
    puVar13 = local_80;
    if ((int)local_78 == 0) {
      puVar13 = (uint *)&DAT_149dfb77a;
    }
    FUN_140056680(&local_70,puVar13);
    if (local_80 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_80,L"Total");
  FUN_140056680(&local_70,&DAT_149dfb77a);
  if (local_70 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (0 < (int)uStack_90) {
    puVar29 = (undefined8 *)((longlong)plVar26 + 0x270);
    lVar23 = 0x40;
    uVar22 = 0;
    do {
      lVar18 = local_98;
      *(undefined8 *)(local_98 + -0x20 + lVar23) = *puVar29;
      FUN_140002266(&local_118,L"Allocated Device Heap %d",uVar22 & 0xffffffff);
      if (*(int *)(lVar18 + lVar23) == 0) {
        FUN_140056680(&local_70,&DAT_149dfb77a);
      }
      else {
        FUN_140002266(&local_80,&DAT_149e061aa);
        puVar13 = (uint *)&DAT_149dfb77a;
        if ((int)local_78 != 0) {
          puVar13 = local_80;
        }
        FUN_140056680(&local_70,puVar13);
        if (local_80 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 + 1;
      puVar29 = puVar29 + 2;
      lVar23 = lVar23 + 0x48;
    } while ((longlong)uVar22 < (longlong)(int)uStack_90);
  }
  FUN_140056680(&local_118,L"Staging");
  if (local_b8 == 0) {
    FUN_140056680(&local_70,&DAT_149dfb77a);
    puVar13 = local_1b0;
  }
  else {
    FUN_140002266(&local_80,&DAT_149e061aa);
    puVar13 = (uint *)&DAT_149dfb77a;
    if ((int)local_78 != 0) {
      puVar13 = local_80;
    }
    FUN_140056680(&local_70,puVar13);
    puVar13 = local_1b0;
    if (local_80 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_78 = &local_119;
  iVar8 = (int)local_1e0[3];
  local_80 = puVar13;
  local_70 = puVar13;
  local_68 = local_78;
  if (0 < iVar8) {
    uVar22 = 0;
    do {
      if (*(longlong *)(local_1e0[2] + uVar22 * 8) != 0) {
        lVar23 = 0xa8;
        uVar31 = 0;
        do {
          lVar18 = *(longlong *)(local_1e0[2] + uVar22 * 8);
          puVar24 = &DAT_14a35cb10;
          if (uVar31 < *(uint *)(lVar18 + 0x50)) {
            uVar7 = *(int *)(lVar18 + -0x9c + lVar23) - 1;
            puVar24 = &DAT_14a35cb10;
            if (uVar7 < 3) {
              puVar24 = (&PTR_DAT_14a35ec70)[uVar7];
            }
          }
          local_1e8 = (undefined4)uVar31;
          FUN_140002266(local_130,L"Page[%s] - ResTypeHeaps[%d] ActivePages[%d]",puVar24,
                        uVar22 & 0xffffffff);
          FUN_14319f92a(&local_70,local_130,lVar18 + lVar23);
          plVar26 = local_1e0;
          uVar31 = uVar31 + 1;
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != 0xf8);
        lVar23 = *(longlong *)(local_1e0[2] + uVar22 * 8);
        FUN_140002266(local_140,L"UsedDedicatedImagePages - ResTypeHeaps[%d]",uVar22 & 0xffffffff);
        FUN_14319f92a(&local_70,local_140,lVar23 + 0xf8);
        iVar8 = (int)plVar26[3];
      }
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)iVar8);
  }
  uVar22 = 0;
  do {
    FUN_140002266(&local_118,L"PoolUsed %d",uVar22 & 0xffffffff);
    FUN_140002266(&local_150,L"PoolFree %d",uVar22 & 0xffffffff);
    pvVar5 = local_118;
    local_160 = (void *)0x0;
    lVar23 = (longlong)local_110;
    local_158 = local_110;
    if (lVar23 == 0) {
      local_154 = 0;
    }
    else {
      FUN_1446dd670(&local_160,local_110,0);
      memcpy(local_160,pvVar5,lVar23 * 2);
    }
    FUN_14319f92a(&local_70,&local_160,local_1c8 + -0x10);
    pvVar5 = local_150;
    local_170 = (void *)0x0;
    lVar23 = (longlong)local_148;
    local_168 = local_148;
    if (lVar23 == 0) {
      local_164 = 0;
    }
    else {
      FUN_1446dd670(&local_170,local_148,0);
      memcpy(local_170,pvVar5,lVar23 * 2);
    }
    plVar26 = local_1c8;
    FUN_14319f92a(&local_70,&local_170,local_1c8);
    if (local_150 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar22 = uVar22 + 1;
    local_1c8 = plVar26 + 2;
  } while (uVar22 != 8);
  if ((local_1d1 != '\0') && (iVar8 = (int)local_1e0[3], 0 < iVar8)) {
    uVar22 = 0;
    do {
      if (*(longlong *)(local_1e0[2] + uVar22 * 8) != 0) {
        lVar23 = 0xa8;
        uVar31 = 0;
        do {
          lVar18 = *(longlong *)(local_1e0[2] + uVar22 * 8);
          puVar24 = &DAT_14a35cb10;
          if (uVar31 < *(uint *)(lVar18 + 0x50)) {
            uVar7 = *(int *)(lVar18 + -0x9c + lVar23) - 1;
            puVar24 = &DAT_14a35cb10;
            if (uVar7 < 3) {
              puVar24 = (&PTR_DAT_14a35ec70)[uVar7];
            }
          }
          local_1e8 = (undefined4)uVar31;
          FUN_140002266(local_180,L"Page[%s] - ResTypeHeaps[%d] ActivePages[%d]",puVar24,
                        uVar22 & 0xffffffff);
          FUN_14319fa60(&local_80,local_180,lVar18 + lVar23);
          plVar26 = local_1e0;
          uVar31 = uVar31 + 1;
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != 0xf8);
        lVar23 = *(longlong *)(local_1e0[2] + uVar22 * 8);
        FUN_140002266(local_190,L"UsedDedicatedImagePages - ResTypeHeaps[%d]",uVar22 & 0xffffffff);
        FUN_14319fa60(&local_80,local_190,lVar23 + 0xf8);
        iVar8 = (int)plVar26[3];
      }
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)iVar8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_14626bd28(&DAT_14c872ee0);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_1a0);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14319d6a4 FUN_14319d6a4 body=166 status=ok
// SIG undefined FUN_14319d6a4(void)

void FUN_14319d6a4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  (*DAT_14ca78e98)(*(undefined8 *)(param_1 + 0x370),param_2[2],0);
  *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + -1;
  lVar2 = (longlong)*(int *)(param_1 + 0x170 + (ulonglong)*(byte *)(param_2 + 4) * 8) * 0x20;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x390) + lVar2);
  *plVar1 = *plVar1 - *param_2;
  FUN_1473a58d4(*(longlong *)(param_1 + 0x390) + lVar2 + 0x10,&local_28);
  *(byte *)((longlong)param_2 + 0x21) = *(byte *)((longlong)param_2 + 0x21) | 8;
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14319d75a FUN_14319d75a body=72 status=ok
// SIG undefined FUN_14319d75a(void)

void FUN_14319d75a(longlong param_1)

{
  FUN_1473a7004();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14319d7a2 FUN_14319d7a2 body=2278 status=ok
// SIG undefined FUN_14319d7a2(void)

void FUN_14319d7a2(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong *puVar32;
  int iVar33;
  longlong *plVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_408 [32];
  undefined4 local_3e8;
  undefined1 local_3e0;
  int local_3d8;
  int local_3d4;
  longlong local_3d0;
  longlong local_3c8;
  LPCRITICAL_SECTION local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_384;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  local_3d4 = param_4;
  local_3b8 = param_2;
  EnterCriticalSection(lpCriticalSection);
  plVar34 = (longlong *)(param_1 + 0xa8);
  lVar11 = 0xa8;
  lVar30 = 0;
  plVar12 = plVar34;
  do {
    if (0 < (longlong)(int)plVar12[1]) {
      lVar20 = 0;
      do {
        lVar31 = *(longlong *)(*plVar12 + lVar20 * 8);
        if (*(char *)(lVar31 + 0x80) != '\0') {
          lVar30 = lVar31;
        }
        lVar20 = lVar20 + 1;
      } while ((int)plVar12[1] != lVar20);
    }
    plVar12 = (longlong *)(param_1 + lVar11 + 0x10);
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0xf8);
  uStack_390 = CONCAT44(uStack_390._4_4_,(undefined4)uStack_390);
  if ((DAT_14ca77eb0 == 0) &&
     (uStack_390 = CONCAT44(uStack_390._4_4_,(undefined4)uStack_390), lVar30 == 0)) {
    if ((DAT_14c760c54 <= 0.0) && (DAT_14ca77f70 != 1)) goto LAB_14319dc0d;
    local_3d8 = DAT_14c7590b0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    lVar30 = 0xa8;
    local_3d0 = param_1;
    local_3c8 = param_3;
    local_3c0 = lpCriticalSection;
    do {
      if (0 < (longlong)(int)plVar34[1]) {
        lVar11 = 0;
        uVar17 = 0;
        do {
          lVar20 = *(longlong *)(*plVar34 + lVar11 * 8);
          if ((*(byte *)(lVar20 + 0x7c) & 2) == 0) {
            uVar17 = (uVar17 + *(int *)(lVar20 + 0x48)) - *(int *)(lVar20 + 0x58);
          }
          lVar11 = lVar11 + 1;
        } while ((int)plVar34[1] != lVar11);
        lVar11 = 0;
        do {
          lVar20 = *(longlong *)(*plVar34 + lVar11 * 8);
          if ((*(byte *)(lVar20 + 0x7c) & 2) == 0) {
            iVar24 = *(int *)(lVar20 + 0xa8);
            if ((longlong)iVar24 != 0) {
              lVar31 = *(longlong *)(lVar20 + 0xa0);
              lVar16 = 0;
              do {
                if ((*(int *)(lVar31 + lVar16) == 1) &&
                   ((puVar4 = *(undefined8 **)(lVar31 + 0x18 + lVar16), puVar4 == (undefined8 *)0x0
                    || (cVar8 = (**(code **)*puVar4)(), cVar8 == '\0')))) goto LAB_14319d9f8;
                lVar16 = lVar16 + 0x28;
              } while ((longlong)iVar24 * 0x28 != lVar16);
            }
            uVar3 = *(uint *)(lVar20 + 0x58);
            if ((((uVar3 <= uVar17 && uVar17 - uVar3 != 0) &&
                 (fVar36 = (float)uVar3, DAT_14c760c54 * fVar36 < (float)(uVar17 - uVar3))) &&
                (uVar3 = *(uint *)(lVar20 + 0x48), fVar36 < DAT_14c760c58 * (float)uVar3)) &&
               (uVar19 = local_3d8 - *(int *)(lVar20 + 0x54), DAT_14c760c5c < uVar19)) {
              lVar31 = (longlong)(int)uStack_3a0;
              uVar9 = (int)uStack_3a0 + 1;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar9);
              if (uStack_3a0._4_4_ < uVar9) {
                FUN_1431a087c(&local_3a8);
              }
              *(ulonglong *)(local_3a8 + lVar31 * 0x10) =
                   CONCAT44(uVar19,(int)((1.0 - fVar36 / (float)uVar3) * 65535.0)) &
                   0xffffffff0000ffff;
              *(longlong *)(local_3a8 + 8 + lVar31 * 0x10) = lVar20;
            }
          }
LAB_14319d9f8:
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)plVar34[1]);
      }
      lVar11 = local_3a8;
      plVar34 = (longlong *)(local_3d0 + lVar30 + 0x10);
      lVar30 = lVar30 + 0x10;
    } while (lVar30 != 0xf8);
    iVar24 = (int)uStack_3a0;
    uVar21 = uStack_3a0 & 0xffffffff;
    if (uVar21 == 0) {
      lVar30 = 0;
    }
    else {
      if (1 < (int)uStack_3a0) {
        memset(&uStack_388,0,0x2f0);
        local_398 = lVar11;
        uStack_390 = uVar21 * 0x10 + lVar11 + -0x10;
        fVar36 = logf((float)iVar24);
        uStack_388 = (int)(longlong)(fVar36 + fVar36);
        plVar34 = &local_398;
        do {
          puVar14 = (ulonglong *)*plVar34;
          puVar18 = (ulonglong *)plVar34[1];
          iVar24 = (int)plVar34[2];
          iVar33 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar14) >> 4);
          uVar21 = (ulonglong)(iVar33 + 1);
          puVar15 = puVar14;
          puVar22 = puVar18;
          if (iVar24 != 0) {
LAB_14319dcde:
            if (8 < (int)(uint)uVar21) {
              uVar27 = (ulonglong)((uint)uVar21 >> 1);
              uVar21 = puVar14[uVar27 * 2];
              uVar2 = (puVar14 + uVar27 * 2)[1];
              uVar5 = puVar14[1];
              puVar14[uVar27 * 2] = *puVar14;
              (puVar14 + uVar27 * 2)[1] = uVar5;
              *puVar14 = uVar21;
              puVar14[1] = uVar2;
              puVar28 = puVar22 + 2;
              puVar13 = puVar14;
              do {
                puVar7 = puVar13 + 2;
                puVar23 = puVar13 + 2;
                do {
                  puVar13 = puVar23;
                  puVar32 = puVar7;
                  if (puVar22 < puVar13) break;
                  puVar7 = puVar32 + 2;
                  puVar23 = puVar13 + 2;
                } while (*puVar13 <= *puVar14);
                puVar7 = puVar28 + -4;
                do {
                  puVar23 = puVar28;
                  puVar29 = puVar7;
                  puVar28 = puVar23 + -2;
                  if (puVar28 <= puVar14) break;
                  puVar7 = puVar29 + -2;
                } while (*puVar14 <= *puVar28);
                if (puVar28 < puVar13) goto LAB_14319dd88;
                uVar21 = *puVar13;
                uVar2 = puVar13[1];
                uVar5 = puVar23[-1];
                *puVar13 = *puVar28;
                puVar13[1] = uVar5;
                *puVar28 = uVar21;
                puVar23[-1] = uVar2;
              } while( true );
            }
            if (puVar14 < puVar22) {
              do {
                puVar18 = puVar14;
                if (puVar14 + 2 <= puVar22) {
                  uVar21 = *puVar14;
                  puVar15 = puVar14 + 2;
                  do {
                    uVar2 = *puVar15;
                    bVar35 = uVar21 < uVar2;
                    if (uVar21 <= uVar2) {
                      uVar21 = uVar2;
                    }
                    if (bVar35) {
                      puVar18 = puVar15;
                    }
                    puVar15 = puVar15 + 2;
                  } while (puVar15 <= puVar22);
                }
                local_98 = *puVar18;
                uStack_90 = puVar18[1];
                uVar2 = local_98;
                uVar5 = uStack_90;
                uVar21 = puVar22[1];
                *puVar18 = *puVar22;
                puVar18[1] = uVar21;
                local_98._4_4_ = (undefined4)(local_98 >> 0x20);
                uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
                *(undefined4 *)puVar22 = (undefined4)local_98;
                *(undefined4 *)((longlong)puVar22 + 4) = local_98._4_4_;
                *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_90._4_4_;
                puVar22 = puVar22 + -2;
                local_98 = uVar2;
                uStack_90 = uVar5;
              } while (puVar14 < puVar22);
            }
            goto LAB_14319e045;
          }
LAB_14319de33:
          iVar24 = (int)uVar21;
          if (iVar24 != 0) {
            iVar33 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
            iVar10 = iVar33;
joined_r0x00014319de5a:
            do {
              iVar26 = iVar33 * 2 + 1;
              if (iVar26 < iVar24) {
                iVar25 = iVar33 * 2 + 2;
                if ((iVar25 < iVar24) &&
                   (puVar14[(longlong)iVar26 * 2] <= puVar14[(longlong)iVar25 * 2])) {
                  iVar26 = iVar25;
                }
                if (puVar14[(longlong)iVar33 * 2] < puVar14[(longlong)iVar26 * 2]) {
                  puVar22 = puVar14 + (longlong)iVar33 * 2;
                  puVar18 = puVar14 + (longlong)iVar26 * 2;
                  local_98 = *puVar22;
                  uStack_90 = puVar22[1];
                  uVar5 = local_98;
                  uVar27 = uStack_90;
                  uVar2 = puVar18[1];
                  *puVar22 = *puVar18;
                  puVar22[1] = uVar2;
                  local_98._4_4_ = (undefined4)(local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
                  *(undefined4 *)puVar18 = (undefined4)local_98;
                  *(undefined4 *)((longlong)puVar18 + 4) = local_98._4_4_;
                  *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_90._4_4_;
                  iVar33 = iVar26;
                  local_98 = uVar5;
                  uStack_90 = uVar27;
                  goto joined_r0x00014319de5a;
                }
              }
              bVar35 = iVar10 != 0;
              iVar33 = iVar10 + -1;
              iVar10 = iVar33;
            } while (bVar35);
            if (1 < iVar24) {
              uVar21 = uVar21 - 1;
              local_98 = *puVar14;
              uStack_90 = puVar14[1];
              uVar5 = local_98;
              uVar27 = uStack_90;
              uVar2 = (puVar14 + uVar21 * 2)[1];
              *puVar14 = puVar14[uVar21 * 2];
              puVar14[1] = uVar2;
              local_98._4_4_ = (undefined4)(local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
              puVar22 = puVar14 + uVar21 * 2;
              *(undefined4 *)puVar22 = (undefined4)local_98;
              *(undefined4 *)((longlong)puVar22 + 4) = local_98._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_90._4_4_;
              local_98 = uVar5;
              uStack_90 = uVar27;
              if (iVar24 != 2) {
                do {
                  iVar24 = 0;
                  iVar10 = 1;
                  iVar33 = 0;
                  do {
                    iVar24 = iVar24 + 2;
                    iVar26 = iVar10;
                    if (((longlong)iVar24 < (longlong)uVar21) &&
                       (puVar14[(longlong)iVar10 * 2] <= puVar14[(longlong)iVar24 * 2])) {
                      iVar26 = iVar24;
                    }
                    if (puVar14[(longlong)iVar26 * 2] <= puVar14[(longlong)iVar33 * 2]) break;
                    puVar22 = puVar14 + (longlong)iVar33 * 2;
                    puVar18 = puVar14 + (longlong)iVar26 * 2;
                    uVar2 = *puVar22;
                    uVar5 = puVar22[1];
                    uVar27 = puVar18[1];
                    *puVar22 = *puVar18;
                    puVar22[1] = uVar27;
                    *puVar18 = uVar2;
                    puVar18[1] = uVar5;
                    iVar24 = iVar26 * 2;
                    iVar10 = iVar26 * 2 + 1;
                    iVar33 = iVar26;
                  } while ((longlong)iVar10 < (longlong)uVar21);
                  uVar2 = uVar21 - 1;
                  local_98 = *puVar14;
                  uStack_90 = puVar14[1];
                  uVar27 = local_98;
                  uVar6 = uStack_90;
                  uVar5 = (puVar14 + uVar2 * 2)[1];
                  *puVar14 = puVar14[uVar2 * 2];
                  puVar14[1] = uVar5;
                  local_98._4_4_ = (undefined4)(local_98 >> 0x20);
                  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
                  puVar22 = puVar14 + uVar2 * 2;
                  *(undefined4 *)puVar22 = (undefined4)local_98;
                  *(undefined4 *)((longlong)puVar22 + 4) = local_98._4_4_;
                  *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_90._4_4_;
                  bVar35 = 2 < uVar21;
                  uVar21 = uVar2;
                  local_98 = uVar27;
                  uStack_90 = uVar6;
                } while (bVar35);
              }
            }
          }
LAB_14319e045:
          plVar34 = plVar34 + -3;
        } while (&local_398 <= plVar34);
      }
      lVar11 = local_3d0;
      lVar30 = *(longlong *)(local_3a8 + 8);
      FUN_1473a65f0(local_3d0,lVar30);
      *(undefined1 *)(lVar11 + 0x66) = 3;
    }
    lpCriticalSection = local_3c0;
    param_3 = local_3c8;
    param_1 = local_3d0;
    if (local_3a8 != 0) {
      FUN_1400020a8(local_3a8);
      param_1 = local_3d0;
    }
  }
  if (lVar30 != 0) {
    *(int *)(lVar30 + 0x54) = DAT_14c7590b0;
    *(undefined1 *)(lVar30 + 0x7f) = 1;
    local_3d0 = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar30 + 0xb8));
    iVar24 = *(int *)(lVar30 + 0xa8);
    if ((longlong)iVar24 == 0) {
      iVar33 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar30 + 0xa0);
      local_3c0 = (LPCRITICAL_SECTION)(local_3b8 + 0x3d8);
      lVar20 = 0;
      iVar33 = 0;
      iVar10 = local_3d4;
      local_3c8 = param_3;
      do {
        if (*(int *)(lVar11 + lVar20) == 1) {
          if (*(char *)(lVar11 + 5 + lVar20) == '\x05') {
            plVar34 = *(longlong **)(lVar11 + 0x18 + lVar20);
            local_3d8 = iVar33;
            local_3d4 = iVar10;
            local_3b0 = (**(code **)(*plVar34 + 0x20))(plVar34);
            lVar31 = FUN_1473a8308(*(longlong *)(local_3c8 + 0x128) + 0x60,
                                   *(undefined8 *)(local_3b0 + 0x98));
            iVar10 = local_3d4;
            iVar33 = local_3d8;
            if (((lVar31 != 0) && (*(int *)(lVar31 + 0x18) == 0)) && (*(int *)(lVar31 + 0xc) != 0))
            {
              uStack_388 = 0;
              uStack_384 = 0;
              local_398 = 0;
              uStack_390._0_4_ = 0;
              uStack_390._4_4_ = 0;
              local_3e0 = *(undefined1 *)(lVar11 + 5 + lVar20);
              local_3e8 = *(undefined4 *)(lVar11 + 0x20 + lVar20);
              cVar8 = FUN_1473a666e(local_3d0,&local_398,plVar34,
                                    *(undefined4 *)(lVar11 + 8 + lVar20));
              if (cVar8 == '\0') {
                *(undefined1 *)(lVar30 + 0x7f) = 0;
                iVar33 = local_3d8;
                goto LAB_14319dbce;
              }
              (**(code **)(*(longlong *)(local_3b0 + 0x60) + 0x18))
                        (local_3b0 + 0x60,local_3b8,local_3c8,&local_398);
              iVar33 = local_3d8 + 1;
              FUN_1473a73fe(local_3c0,&local_398,0);
              iVar10 = local_3d4;
            }
          }
          if (iVar10 < 2) break;
          iVar10 = iVar10 + -1;
        }
        lVar20 = lVar20 + 0x28;
      } while ((longlong)iVar24 * 0x28 != lVar20);
    }
    *(undefined1 *)(lVar30 + 0x7f) = 0;
LAB_14319dbce:
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar30 + 0xb8));
    if (iVar33 < 1) {
      pcVar1 = (char *)(local_3d0 + 0x66);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        if (DAT_14ca77ec8 != 0) {
          DAT_14ca77eb0 = 1;
        }
        *(undefined1 *)(lVar30 + 0x80) = 0;
      }
    }
    else {
      *(undefined1 *)(local_3d0 + 0x66) = 3;
    }
  }
LAB_14319dc0d:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_80 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14319dd88:
  local_98 = *puVar14;
  uStack_90 = puVar14[1];
  uVar2 = local_98;
  uVar5 = uStack_90;
  uVar21 = puVar23[-1];
  *puVar14 = *puVar28;
  puVar14[1] = uVar21;
  local_98._4_4_ = (undefined4)(local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)(uStack_90 >> 0x20);
  *(undefined4 *)puVar28 = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar23 + -0xc) = local_98._4_4_;
  *(undefined4 *)(puVar23 + -1) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar23 + -4) = uStack_90._4_4_;
  iVar24 = iVar24 + -1;
  puVar23 = puVar23 + -4;
  local_98 = uVar2;
  uStack_90 = uVar5;
  if ((longlong)puVar29 - (longlong)puVar15 < (longlong)puVar18 - (longlong)puVar32) {
    if (puVar13 < puVar22) {
      *plVar34 = (longlong)puVar13;
      plVar34[1] = (longlong)puVar22;
      *(int *)(plVar34 + 2) = iVar24;
      plVar34 = plVar34 + 3;
    }
    puVar32 = puVar14;
    puVar18 = puVar29;
    if (puVar28 <= puVar14 + 2) goto LAB_14319e045;
  }
  else {
    if (puVar14 + 2 < puVar28) {
      *plVar34 = (longlong)puVar14;
      plVar34[1] = (longlong)puVar23;
      *(int *)(plVar34 + 2) = iVar24;
      plVar34 = plVar34 + 3;
    }
    puVar14 = puVar13;
    puVar23 = puVar22;
    puVar18 = puVar22;
    if (puVar22 <= puVar13) goto LAB_14319e045;
  }
  iVar33 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar32) >> 4);
  uVar21 = (ulonglong)(iVar33 + 1);
  puVar15 = puVar32;
  puVar22 = puVar23;
  if (iVar24 == 0) goto LAB_14319de33;
  goto LAB_14319dcde;
}



// FUNCTION 14319e08a FUN_14319e08a body=771 status=ok
// SIG undefined FUN_14319e08a(void)

undefined4
FUN_14319e08a(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
             undefined4 param_6,char param_7,byte param_8,char param_9,undefined1 param_10)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  double local_98;
  uint local_90;
  int local_88;
  char local_75;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  LPCRITICAL_SECTION local_60;
  undefined1 local_58 [8];
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  local_70 = param_2;
  local_68 = param_3;
  EnterCriticalSection(lpCriticalSection);
  param_8 = DAT_14ca77f30 != 0 | param_8;
  lVar11 = **(longlong **)(param_1 + 0x58);
  local_98 = (double)CONCAT71(local_98._1_7_,param_8);
  local_74 = FUN_1473a6062(param_1,local_58,param_4,param_5);
  local_75 = param_4 == 0;
  cVar9 = '\0';
  if (*(char *)(lVar11 + 0x390) == '\0') {
    cVar9 = (param_9 == '\x06') * '\x02';
  }
  lVar1 = param_1 + (ulonglong)local_74 * 0x10;
  plVar12 = (longlong *)(lVar1 + 0xa8);
  uVar6 = param_5;
  if (param_8 == 0) {
    if ((param_5 < local_50) && (iVar8 = *(int *)(lVar1 + 0xb0), 0 < iVar8)) {
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(*plVar12 + lVar10 * 8);
        if (*(char *)(lVar2 + 0x7c) == (char)(cVar9 + param_7)) {
          local_90 = CONCAT31(local_90._1_3_,param_9);
          local_98 = (double)CONCAT44(local_98._4_4_,param_6);
          cVar3 = FUN_1473a6778(lVar2,local_70,local_68,param_5);
          if (cVar3 != '\0') {
            uVar5 = 1;
            goto LAB_14319e22c;
          }
          iVar8 = *(int *)(lVar1 + 0xb0);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar8);
    }
    uVar6 = local_50;
    if (local_50 <= param_5) {
      uVar6 = param_5;
    }
  }
  lVar11 = lVar11 + 8;
  uVar7 = (ulonglong)uVar6;
  local_88 = CONCAT31(local_88._1_3_,param_10);
  local_90 = 0x3f800000;
  local_98 = 0.0;
  local_60 = lpCriticalSection;
  lVar10 = FUN_14319c19c(lVar11,1,uVar7,*(undefined2 *)(param_1 + 0x60));
  if (lVar10 == 0) {
    if (uVar6 == param_5) {
      local_98 = (double)((float)param_5 * 9.536743e-07);
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x7cb,
                    L"Out of memory on Vulkan; MemoryTypeIndex=%d, AllocSize=%0.3fMB",
                    *(undefined2 *)(param_1 + 0x60));
      lVar10 = 0;
    }
    else {
      local_88 = CONCAT31(local_88._1_3_,param_10);
      local_90 = 0x3f800000;
      local_98 = 0.0;
      lVar10 = FUN_14319c19c(lVar11,1,param_5,*(undefined2 *)(param_1 + 0x60));
      if (lVar10 == 0) {
        uVar5 = 0;
        lpCriticalSection = local_60;
        goto LAB_14319e22c;
      }
    }
  }
  if (param_7 != '\0') {
    FUN_1473a4520(lVar10,uVar7);
  }
  local_75 = local_75 + '\x02';
  iVar8 = 0;
  if (DAT_14c760db4 < 2) {
    LOCK();
    UNLOCK();
    iVar8 = (int)DAT_14ca788f0 + 1;
    DAT_14ca788f0 = DAT_14ca788f0 + 1;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  lVar11 = FUN_14001cc68(0xe0,0x10);
  local_90 = (uint)*(ushort *)(param_1 + 0x60);
  local_98 = (double)lVar10;
  local_88 = iVar8;
  FUN_1473a6924(lVar11,local_75,*(undefined8 *)(param_1 + 0x58),cVar9 + param_7);
  FUN_1473a6a42(*(undefined8 *)(param_1 + 0x58),lVar11);
  *(char *)(lVar11 + 0x7d) = (char)local_74;
  iVar8 = *(int *)(lVar1 + 0xb0);
  *(uint *)(lVar1 + 0xb0) = iVar8 + 1U;
  if (*(uint *)(lVar1 + 0xb4) < iVar8 + 1U) {
    FUN_1473ae4a4(plVar12,iVar8);
  }
  *(longlong *)(*plVar12 + (longlong)iVar8 * 8) = lVar11;
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + uVar7;
  uVar4 = *(uint *)(param_1 + 0x6c);
  if (*(uint *)(param_1 + 0x6c) < uVar6) {
    uVar4 = uVar6;
  }
  *(uint *)(param_1 + 0x6c) = uVar4;
  local_90 = CONCAT31(local_90._1_3_,param_9);
  local_98 = (double)CONCAT44(local_98._4_4_,param_6);
  uVar5 = FUN_1473a6778(lVar11,local_70,local_68,param_5);
  lpCriticalSection = local_60;
LAB_14319e22c:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14319e38e FUN_14319e38e body=359 status=ok
// SIG undefined FUN_14319e38e(void)

void FUN_14319e38e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_1473a6e3e(param_1,1);
  plVar2 = param_1 + 9;
  lVar3 = 0x48;
  do {
    if (0 < (longlong)(int)plVar2[1]) {
      uVar4 = (longlong)(int)plVar2[1] + 1;
      do {
        lVar5 = *(longlong *)(*plVar2 + -0x10 + uVar4 * 8);
        FUN_1473a7004(lVar5);
        if (*(longlong *)(lVar5 + 0x68) != 0) {
          (*DAT_14ca78e20)(*(undefined8 *)*param_1,*(longlong *)(lVar5 + 0x68),0);
          *(undefined8 *)(lVar5 + 0x68) = 0;
        }
        FUN_143197808(*param_1 + 8,lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_14319d75a(lVar5);
          FUN_1400020a8(lVar5);
        }
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
    *(undefined4 *)(plVar2 + 1) = 0;
    if (*(int *)((longlong)plVar2 + 0xc) != 0) {
      FUN_1473ae600(plVar2);
    }
    plVar2 = (longlong *)((longlong)param_1 + lVar3 + 0x10);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 200);
  plVar2 = param_1 + 0x19;
  lVar3 = 200;
  do {
    if (0 < (int)plVar2[1]) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*plVar2 + lVar5 * 8);
        if (*(longlong *)(lVar1 + 0x68) != 0) {
          (*DAT_14ca78e20)(*(undefined8 *)*param_1,*(longlong *)(lVar1 + 0x68),0);
          *(undefined8 *)(lVar1 + 0x68) = 0;
        }
        FUN_143197808(*param_1 + 8,lVar1 + 0x40);
        if (lVar1 != 0) {
          FUN_14319d75a(lVar1);
          FUN_1400020a8(lVar1);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)plVar2[1]);
    }
    *(undefined4 *)(plVar2 + 1) = 0;
    if (*(int *)((longlong)plVar2 + 0xc) != 0) {
      FUN_1473ae600(plVar2);
    }
    plVar2 = (longlong *)((longlong)param_1 + lVar3 + 0x10);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x148);
  return;
}



// FUNCTION 14319e4f6 FUN_14319e4f6 body=361 status=ok
// SIG undefined FUN_14319e4f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14319e4f6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)*(int *)(lVar2 + 0x3a0);
  if (lVar3 < 0) {
    lVar4 = 0;
    dVar6 = 1.0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x390) + lVar3 * 0x20);
    if ((*(byte *)(*(longlong *)(lVar2 + 0x378) + 0x20f8) & 4) != 0) {
      QueryPerformanceCounter(&local_30);
      if (1.0 <= ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0) -
                 *(double *)(lVar2 + 0x50)) {
        QueryPerformanceCounter(&local_30);
        *(double *)(lVar2 + 0x50) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
        FUN_14319bd1c(lVar2);
      }
    }
    lVar3 = (ulonglong)*(uint *)(lVar2 + 0x3a0) * 0x10;
    uVar1 = *(undefined8 *)(lVar2 + 0x270 + lVar3);
    dVar6 = ((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) - 1.9342813113834067e+25);
  }
  dVar5 = (double)_DAT_14c760c64;
  if (*(char *)(param_1 + 0x170) != '\0') {
    dVar5 = dVar5 * (double)(DAT_14c760c68 / 100.0);
  }
  lVar4 = lVar4 - *(longlong *)(param_1 + 0x168);
  auVar7._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
  auVar7._0_8_ = lVar4;
  auVar7._12_4_ = 0x45300000;
  dVar6 = ((((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
           (auVar7._8_8_ - 1.9342813113834067e+25)) * 100.0) / dVar6;
  *(bool *)(param_1 + 0x170) = dVar5 < dVar6;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),dVar5 < dVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14319e660 FUN_14319e660 body=343 status=ok
// SIG undefined FUN_14319e660(void)

void FUN_14319e660(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  int local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_2 + 0x14) * 0x28);
  if (*piVar1 == 4) {
    *piVar1 = 2;
    iVar3 = *(int *)(param_2 + 0x14);
    lVar4 = (longlong)iVar3 * 0x28;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x24 + lVar4) = *(undefined4 *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar4) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  local_2c = piVar1[3];
  uVar6 = (ulonglong)local_2c;
  local_30 = piVar1[4];
  piVar2 = (int *)(param_1 + (ulonglong)*(byte *)(param_2 + 0x1a) * 4);
  *piVar2 = *piVar2 - local_2c;
  *piVar1 = 2;
  iVar3 = *(int *)(param_2 + 0x14);
  lVar4 = (longlong)iVar3 * 0x28;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x24 + lVar4) = *(undefined4 *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar3;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar4) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  FUN_1473a5fe8(param_1 + 0x90);
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) - uVar6;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  cVar5 = FUN_1473a7004(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  if (cVar5 == '\0') {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14319e7e0 FUN_14319e7e0 body=1769 status=ok
// SIG undefined FUN_14319e7e0(void)

ulonglong FUN_14319e7e0(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                       uint param_5,uint param_6,uint param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint7 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  char cVar20;
  ulonglong uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  uint local_130;
  uint local_128;
  undefined8 local_120;
  undefined4 local_118;
  int local_110;
  uint local_108;
  undefined4 local_100;
  undefined4 local_f4;
  ulonglong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_cc;
  ulonglong local_c8;
  LPCRITICAL_SECTION local_c0;
  undefined8 local_b8;
  uint local_b0;
  uint local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar17 = *param_1;
  if ((param_6 & 0x2c) == 0) {
    uVar5 = 0x10;
    if ((param_6 & 0xc0) != 0) goto LAB_14319e85f;
    uVar7 = DAT_14ca84f00;
    if ((param_6 >> 0x14 & 1) == 0) {
      if ((param_6 & 0x10) == 0) goto LAB_14319e85f;
      uVar7 = *(uint *)(lVar17 + 0xd58);
    }
  }
  else {
    uVar7 = *(uint *)(lVar17 + 0xd60);
    if (*(uint *)(lVar17 + 0xd60) < *(uint *)(lVar17 + 0xd50)) {
      uVar7 = *(uint *)(lVar17 + 0xd50);
    }
  }
  uVar5 = 0x10;
  if (0x10 < uVar7) {
    uVar5 = uVar7;
  }
LAB_14319e85f:
  if (param_5 < uVar5) {
    param_5 = uVar5;
  }
  if ((param_6 & 0x108) == 0) {
    if ((param_6 & 0x180424) == 0) {
      if ((param_6 & 0xc0) == 0) {
        uVar23 = *(undefined4 *)(&DAT_14a3589e0 + (ulonglong)((param_6 & 0x10) == 0) * 4);
      }
      else {
        uVar23 = 0;
      }
    }
    else {
      uVar23 = 0x3f000000;
    }
  }
  else {
    uVar23 = 0x3f800000;
  }
  if (DAT_14ca77ee0 != 0) {
    puVar8 = &DAT_14a35ba40;
    uVar16 = 0;
    do {
      if (param_4 <= *puVar8) {
        param_4 = *puVar8;
        local_f4 = (undefined4)uVar16;
        goto LAB_14319e903;
      }
      uVar16 = uVar16 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar16 != 7);
  }
  local_f4 = 7;
  uVar16 = 7;
LAB_14319e903:
  uVar18 = (ulonglong)param_4;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  local_e0 = param_2;
  local_d8 = param_3;
  EnterCriticalSection(lpCriticalSection);
  local_f0 = uVar16 & 0xff;
  uVar5 = (int)local_f0 << 4;
  plVar19 = (longlong *)((longlong)param_1 + (ulonglong)uVar5 + 0x48);
  iVar6 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x50);
  uVar13 = (uint7)(uint3)(param_6 >> 8);
  if (0 < iVar6) {
    lVar17 = 0;
    do {
      lVar1 = *(longlong *)(*plVar19 + lVar17 * 8);
      if (((param_6 & ~*(uint *)(lVar1 + 0x60)) == 0) && ((param_7 & ~*(uint *)(lVar1 + 0x3c)) == 0)
         ) {
        local_130 = CONCAT31(local_130._1_3_,param_8);
        local_138 = CONCAT44(local_138._4_4_,param_5);
        cVar4 = FUN_1473a6778(lVar1,local_e0,local_d8,uVar18);
        if (cVar4 != '\0') {
          uVar16 = CONCAT71(uVar13,1);
          goto LAB_14319ee6d;
        }
        iVar6 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x50);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar6);
  }
  uVar16 = (ulonglong)(uint)((int)local_f0 << 4);
  iVar6 = *(int *)((longlong)param_1 + uVar16 + 0xd0);
  local_e8 = param_1;
  local_c0 = lpCriticalSection;
  if (0 < iVar6) {
    plVar15 = (longlong *)((longlong)param_1 + uVar16 + 200);
    lVar17 = 0;
    do {
      lVar1 = *(longlong *)(*plVar15 + lVar17 * 8);
      if (((param_6 & ~*(uint *)(lVar1 + 0x60)) == 0) && ((param_7 & ~*(uint *)(lVar1 + 0x3c)) == 0)
         ) {
        local_130 = CONCAT31(local_130._1_3_,param_8);
        local_138 = CONCAT44(local_138._4_4_,param_5);
        cVar4 = FUN_1473a6778(lVar1,local_e0,local_d8,uVar18);
        if (cVar4 != '\0') {
          iVar6 = *(int *)((longlong)param_1 + uVar16 + 0xd0);
          if (iVar6 + -1 != (int)lVar17) {
            iVar11 = (iVar6 + -1) - (int)lVar17;
            iVar22 = 1;
            if (iVar11 < 1) {
              iVar22 = iVar11;
            }
            lVar2 = *plVar15;
            memmove((void *)(lVar2 + lVar17 * 8),(void *)(lVar2 + (longlong)(iVar6 - iVar22) * 8),
                    (longlong)iVar22 << 3);
            iVar6 = *(int *)((longlong)param_1 + uVar16 + 0xd0);
          }
          *(int *)((longlong)param_1 + uVar16 + 0xd0) = iVar6 + -1;
          iVar6 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x50);
          *(uint *)((longlong)param_1 + (ulonglong)uVar5 + 0x50) = iVar6 + 1U;
          if (*(uint *)((longlong)param_1 + (ulonglong)uVar5 + 0x54) < iVar6 + 1U) {
            FUN_1473ae4a4(plVar19,iVar6);
          }
          *(longlong *)(*plVar19 + (longlong)iVar6 * 8) = lVar1;
          uVar16 = CONCAT71(uVar13,1);
          lpCriticalSection = local_c0;
          goto LAB_14319ee6d;
        }
        iVar6 = *(int *)((longlong)param_1 + uVar16 + 0xd0);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar6);
  }
  plVar15 = local_e8;
  local_c8 = (ulonglong)*(uint *)(&DAT_14a35ba60 + local_f0 * 4);
  if (*(uint *)(&DAT_14a35ba60 + local_f0 * 4) <= param_4) {
    local_c8 = uVar18;
  }
  local_a0 = 0xc;
  local_8c = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  uStack_88 = (undefined4)local_c8;
  uStack_84 = 0;
  uStack_80 = param_6;
  if ((*(byte *)(*local_e8 + 0x20fb) & 0x40) != 0) {
    uStack_80 = param_6 | 0x20000;
  }
  uVar16 = 0;
  iVar6 = (*DAT_14ca793e8)(*(undefined8 *)*local_e8,&local_a0,0,&local_68);
  if (iVar6 != 0) {
    FUN_1431b4552(iVar6,
                  "VulkanRHI::vkCreateBuffer(Device->GetInstanceHandle(), &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &Buffer)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xadf);
  }
  (*DAT_14ca78e10)(*(undefined8 *)*plVar15,local_68,&local_b8);
  local_cc = local_b0;
  if (local_b0 < param_5) {
    local_cc = param_5;
  }
  uVar9 = (ulonglong)*(uint *)(*plVar15 + 0x170);
  if (local_a8 != 0 && uVar9 != 0) {
    uVar16 = 0;
    uVar7 = local_a8;
    do {
      if (((uVar7 & 1) != 0) && ((param_7 & ~*(uint *)(*plVar15 + 0x174 + uVar16 * 8)) == 0))
      goto LAB_14319eb7c;
      uVar16 = uVar16 + 1;
    } while ((uVar16 < uVar9) && (bVar3 = 1 < uVar7, uVar7 = uVar7 >> 1, bVar3));
  }
  FUN_1431b4552(0xfffffff8,
                "Device->GetDeviceMemoryManager().GetMemoryTypeFromProperties(MemReqs.memoryTypeBits, MemoryPropertyFlags, &MemoryTypeIndex)"
                ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xae7);
LAB_14319eb7c:
  uVar14 = (undefined4)uVar16;
  cVar4 = *(char *)(plVar15[1] + 0x388);
  local_128 = local_128 & 0xffffff00;
  local_138 = 0;
  local_130 = uVar23;
  uVar9 = FUN_14319c19c(plVar15[1],1,local_b8,uVar16 & 0xffffffff);
  if (uVar9 == 0) {
    param_7 = param_7 & 0xfffffffe;
    if (DAT_14c760c50 != 0) {
      uVar9 = (ulonglong)local_a8;
      uVar12 = (ulonglong)*(uint *)(*plVar15 + 0x170);
      if (uVar12 != 0 && local_a8 != 0) {
        uVar21 = 0;
        while (((uVar7 = (uint)uVar9, (uVar9 & 1) == 0 || ((uVar16 & 0xffffffff) == uVar21)) ||
               ((*(uint *)(*plVar15 + 0x174 + uVar21 * 8) & param_7) != param_7))) {
          uVar21 = uVar21 + 1;
          if ((uVar12 <= uVar21) || (uVar9 = uVar9 >> 1, uVar7 < 2)) goto LAB_14319eccb;
        }
        local_128 = local_128 & 0xffffff00;
        local_138 = 0;
        local_130 = uVar23;
        uVar9 = FUN_14319c19c(plVar15[1],0,local_b8,uVar21 & 0xffffffff);
        uVar14 = (undefined4)uVar21;
        if (uVar9 != 0) goto LAB_14319ed01;
      }
    }
LAB_14319eccb:
    local_138 = local_138 & 0xffffffff00000000;
    uVar9 = 0;
    FUN_1473a780e(plVar15,0,0,0);
  }
LAB_14319ed01:
  iVar22 = 0;
  local_f0 = uVar9;
  iVar6 = (*DAT_14ca78e18)(*(undefined8 *)*plVar15,local_68,*(undefined8 *)(uVar9 + 0x10),0);
  if (iVar6 != 0) {
    FUN_1431b4552(iVar6,
                  "VulkanRHI::vkBindBufferMemory(Device->GetInstanceHandle(), Buffer, DeviceMemoryAllocation->GetHandle(), 0)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xaf9);
  }
  cVar20 = (param_8 == '\x06') * '\x02';
  if (cVar4 != '\0') {
    cVar20 = '\0';
  }
  if ((*(byte *)(local_f0 + 0x21) & 1) != 0) {
    FUN_1473a4520(local_f0,local_c8);
  }
  if (DAT_14c760db4 < 2) {
    LOCK();
    UNLOCK();
    iVar22 = (int)DAT_14ca788f0 + 1;
    DAT_14ca788f0 = DAT_14ca788f0 + 1;
  }
  uVar10 = FUN_14001cc68(0xe0,0x10);
  plVar15 = local_e8;
  local_100 = local_f4;
  local_108 = param_6;
  local_118 = (undefined4)local_c8;
  local_120 = local_68;
  local_128 = local_b0;
  local_138 = CONCAT44(local_138._4_4_,uVar14);
  local_130 = param_7;
  local_110 = iVar22;
  FUN_1473a765a(uVar10,local_e8,cVar20,local_f0);
  FUN_1473a6a42(plVar15,uVar10);
  iVar6 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x50);
  *(uint *)((longlong)param_1 + (ulonglong)uVar5 + 0x50) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + (ulonglong)uVar5 + 0x54) < iVar6 + 1U) {
    FUN_1473ae4a4(plVar19,iVar6);
  }
  *(undefined8 *)(*plVar19 + (longlong)iVar6 * 8) = uVar10;
  local_130 = CONCAT31(local_130._1_3_,param_8);
  local_138 = CONCAT44(local_138._4_4_,local_cc);
  uVar5 = FUN_1473a6778(uVar10,local_e0,local_d8,uVar18);
  lpCriticalSection = local_c0;
  uVar16 = (ulonglong)uVar5;
  if ((char)uVar5 == '\0') {
    local_138 = local_138 & 0xffffffff00000000;
    FUN_1473a780e(local_e8,0,0,0);
  }
LAB_14319ee6d:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 14319eeca FUN_14319eeca body=1607 status=ok
// SIG undefined FUN_14319eeca(void)

bool FUN_14319eeca(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,uint param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_218 [32];
  uint local_1f8;
  uint local_1f0;
  uint local_1e8;
  short *local_1e0;
  short *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  int local_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  short local_160 [8];
  undefined8 local_150;
  undefined8 local_148;
  ulonglong local_140;
  longlong local_60;
  short *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_178 = 0x3b9d0450;
  local_16c = 0;
  local_174 = 0;
  puStack_1b0 = &local_190;
  local_190 = 0x3b9cba18;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_1b8 = 0x3b9d0453;
  local_1b4 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  local_194 = 0;
  local_1c0 = param_3;
  local_168 = param_3;
  (*DAT_14ca78ef8)(*(undefined8 *)*param_1,&local_178,&local_1b8);
  uVar4 = CONCAT44(uStack_19c,uStack_1a0);
  if (CONCAT44(uStack_19c,uStack_1a0) < (ulonglong)param_6) {
    uVar4 = (ulonglong)param_6;
  }
  uVar14 = param_4 | 8;
  if (uStack_184._4_4_ == 0 && local_17c == 0) {
    uVar14 = param_4;
  }
  uStack_1a0 = (undefined4)uVar4;
  uStack_19c = (undefined4)(uVar4 >> 0x20);
  lVar5 = param_1[1];
  uVar6 = 10;
  if ((uVar14 & 2) == 0) {
    if ((uVar14 & 1) == 0) {
      uVar6 = 1;
      if (*(char *)(lVar5 + 0x388) != '\0') {
        uVar6 = 7;
      }
    }
    else {
      uVar6 = 7 - ((uVar14 & 4) == 0);
    }
  }
  uVar11 = 0x10;
  if ((uVar14 & 0x20) == 0) {
    uVar11 = uVar6;
  }
  uVar4 = (ulonglong)*(uint *)(lVar5 + 0x168);
  if (uStack_198 != 0 && uVar4 != 0) {
    uVar12 = 0;
    uVar6 = uStack_198;
    do {
      if (((uVar6 & 1) != 0) && ((uVar11 & ~*(uint *)(lVar5 + 0x16c + uVar12 * 8)) == 0)) {
        uVar9 = (undefined1)((uVar11 & 2) >> 1);
        lVar8 = *(longlong *)(param_1[2] + uVar12 * 8);
        uVar6 = (uint)uVar12;
        if (lVar8 == 0) goto LAB_14319f044;
        uVar13 = uVar12 & 0xffffffff;
        goto LAB_14319f21b;
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 < uVar4) && (bVar1 = 1 < uVar6, uVar6 = uVar6 >> 1, bVar1));
  }
  uVar9 = (undefined1)((uVar11 & 2) >> 1);
  uVar12 = 0xffffffff;
  uVar6 = 0;
LAB_14319f044:
  uVar11 = 7 - ((~uVar11 & 7) == 0) & uVar11;
  if (uStack_198 != 0 && uVar4 != 0) {
    uVar13 = 0;
    uVar7 = uStack_198;
    do {
      if ((((uVar7 & 1) != 0) && (uVar12 != uVar13)) &&
         ((*(uint *)(lVar5 + 0x16c + uVar13 * 8) & uVar11) == uVar11)) goto LAB_14319f134;
      uVar13 = uVar13 + 1;
    } while ((uVar13 < uVar4) && (bVar1 = 1 < uVar7, uVar7 = uVar7 >> 1, bVar1));
  }
  local_1e0 = local_160;
  local_60 = 0;
  local_50 = 0x2c;
  lVar5 = 0;
  do {
    local_160[lVar5] = (short)".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp"[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x2d);
  local_1f0 = uStack_198;
  local_1f8 = uStack_1a8;
  local_1d8 = (short *)CONCAT44(local_1d8._4_4_,0xbf4);
  local_1e8 = uVar11;
  local_58 = local_1e0;
  FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xbb9,
                L"Unable to find alternate type for index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                ,uVar6);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  uVar13 = (ulonglong)uVar6;
LAB_14319f134:
  uVar12 = (ulonglong)(int)uVar13;
  lVar8 = *(longlong *)(param_1[2] + uVar12 * 8);
  if (lVar8 == 0) {
    FUN_14319c744(param_1,1);
    local_1d8 = local_160;
    local_60 = 0;
    local_50 = 0x2c;
    lVar5 = 0;
    do {
      local_160[lVar5] = (short)".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp"[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x2d);
    local_1e0 = (short *)CONCAT44(local_1e0._4_4_,uVar11);
    local_1e8 = uStack_198;
    local_1f0 = uStack_1a8;
    local_1d0 = 0xbf4;
    local_1f8 = uVar6;
    local_58 = local_1d8;
    FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xbbe,
                  L"Missing memory type index %d (originally requested %d), MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                  ,uVar13 & 0xffffffff);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar8 = *(longlong *)(param_1[2] + uVar12 * 8);
  }
LAB_14319f21b:
  local_1e8 = CONCAT31(local_1e8._1_3_,uVar9);
  local_1f0 = uStack_1a0;
  local_1f8 = uStack_1a8;
  local_1d0 = CONCAT31(local_1d0._1_3_,(char)((uVar14 & 0x10) >> 4));
  local_1e0 = (short *)CONCAT71(local_1e0._1_7_,(char)((uVar14 & 8) >> 3));
  local_1d8 = (short *)CONCAT71(local_1d8._1_7_,9);
  cVar2 = FUN_14319e08a(lVar8,param_2,0,1);
  if (cVar2 == '\0') {
    uVar4 = (ulonglong)*(uint *)(param_1[1] + 0x168);
    if (uStack_198 != 0 && uVar4 != 0) {
      uVar10 = 0;
      uVar6 = uStack_198;
      do {
        if ((((uVar6 & 1) != 0) && ((uVar13 & 0xffffffff) != uVar10)) &&
           ((*(uint *)(param_1[1] + 0x16c + uVar10 * 8) & uVar11) == uVar11)) {
          uVar13 = uVar10 & 0xffffffff;
          goto LAB_14319f2ea;
        }
        uVar10 = uVar10 + 1;
      } while ((uVar10 < uVar4) && (bVar1 = 1 < uVar6, uVar6 = uVar6 >> 1, bVar1));
    }
    FUN_1431b4552(0xfffffff8,
                  "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, TypeIndex, &TypeIndex)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xbc7);
    uVar10 = uVar12;
LAB_14319f2ea:
    lVar5 = *(longlong *)(param_1[2] + uVar10 * 8);
    if (lVar5 == 0) {
      local_1e0 = local_160;
      local_60 = 0;
      local_50 = 0x2c;
      lVar5 = 0;
      do {
        local_160[lVar5] = (short)".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp"[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x2d);
      local_1f0 = uStack_198;
      local_1f8 = uStack_1a8;
      local_1d8 = (short *)CONCAT44(local_1d8._4_4_,0xbf4);
      local_1e8 = uVar11;
      local_58 = local_1e0;
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xbcb,
                    L"Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                    ,uVar13 & 0xffffffff);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar5 = *(longlong *)(param_1[2] + uVar10 * 8);
    }
    local_1f0 = uStack_1a0;
    local_1f8 = uStack_1a8;
    local_1e8 = CONCAT31(local_1e8._1_3_,(char)((uVar11 & 2) >> 1));
    local_1d0 = CONCAT31(local_1d0._1_3_,(char)((uVar14 & 0x10) >> 4));
    local_1e0 = (short *)CONCAT71(local_1e0._1_7_,(char)((uVar14 & 8) >> 3));
    local_1d8 = (short *)CONCAT71(local_1d8._1_7_,9);
    cVar2 = FUN_14319e08a(lVar5,param_2,0,1);
    if (cVar2 == '\0') {
      FUN_14319c744(param_1,1);
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xbd0,
                    L"Out Of Memory, trying to allocate %d bytes\n",CONCAT44(uStack_1a4,uStack_1a8))
      ;
    }
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    if ((uVar14 & 0x40) == 0) {
      local_1f8 = 0;
      FUN_1473a780e(param_1,0,-1 - (uint)((uVar14 & 3) == 0),CONCAT44(uStack_1a4,uStack_1a8));
    }
  }
  else if ((char)uVar14 < '\0') {
    local_160[0] = 0x2f48;
    local_160[1] = 0x3b9d;
    local_160[2] = 0;
    local_160[3] = 0;
    local_160[4] = 0;
    local_160[5] = 0;
    local_160[6] = 0;
    local_160[7] = 0;
    local_150 = local_1c0;
    local_148 = FUN_1473a7d76(param_2,*param_1);
    local_140 = (ulonglong)*(uint *)(param_2 + 0x10);
    iVar3 = (*DAT_14ca78ed0)(*(undefined8 *)*param_1,1,local_160);
    if (iVar3 != 0) {
      FUN_1431b4552(iVar3,
                    "VulkanRHI::vkBindBufferMemory2(Device->GetInstanceHandle(), 1, &BindBufferMemoryInfo)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xc00);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(int *)(param_2 + 0xc) != 0;
}



// FUNCTION 14319f512 FUN_14319f512 body=1046 status=ok
// SIG undefined FUN_14319f512(void)

ulonglong FUN_14319f512(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,uint *param_5,uint param_6,undefined1 param_7,undefined1 param_8,
                       char *param_9,undefined4 param_10)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  size_t sVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_218 [32];
  uint local_1f8;
  uint local_1f0;
  uint local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  int local_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_178 = 0x3b9d0451;
  local_16c = 0;
  local_174 = 0;
  puStack_1b0 = &local_190;
  local_190 = 0x3b9cba18;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_1b8 = 0x3b9d0453;
  local_1b4 = 0;
  uStack_1a8 = 0;
  local_1a4 = 0;
  uStack_19c = 0;
  local_194 = 0;
  local_1c0 = param_4;
  local_168 = param_4;
  (*DAT_14ca78ef0)(*(undefined8 *)*param_1);
  if (local_17c == 0 && uStack_184._4_4_ == 0) {
    local_1d8 = param_10;
    local_1e0 = param_9;
    local_1e8._0_1_ = param_8;
    local_1f0 = CONCAT31(local_1f0._1_3_,param_7);
    local_1f8 = param_6;
    uVar13 = FUN_1473a7960(param_1,param_2,param_3,param_5);
    uVar8 = (ulonglong)uVar13;
  }
  else {
    uVar8 = (ulonglong)param_5[4];
    uVar6 = (ulonglong)*(uint *)(param_1[1] + 0x168);
    if (param_5[4] != 0 && uVar6 != 0) {
      uVar12 = 0;
      do {
        if (((uVar8 & 1) != 0) && ((param_6 & ~*(uint *)(param_1[1] + 0x16c + uVar12 * 8)) == 0))
        goto LAB_14319f649;
        uVar12 = uVar12 + 1;
      } while ((uVar12 < uVar6) && (uVar13 = (uint)uVar8, uVar8 = uVar8 >> 1, 1 < uVar13));
    }
    FUN_1431b4552(0xfffffff8,
                  "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, &TypeIndex)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xc29);
    uVar12 = 0;
LAB_14319f649:
    lVar7 = *(longlong *)(param_1[2] + (longlong)(int)uVar12 * 8);
    if (lVar7 == 0) {
      local_60 = (undefined1 *)0x0;
      local_1d0 = param_2;
      local_1c8 = param_3;
      if (param_9 == (char *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
      }
      else {
        sVar4 = strlen(param_9);
        iVar9 = (int)sVar4;
        uVar13 = iVar9 + 1;
        local_50 = iVar9;
        if (uVar13 < 0x81) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          FUN_1446efa72(&local_60,0,uVar13,2);
          puVar5 = local_60;
        }
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = local_160;
        }
        local_58 = puVar5;
        if (-1 < iVar9) {
          uVar8 = 0;
          do {
            *(short *)(puVar5 + uVar8 * 2) = (short)param_9[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar13 != uVar8);
        }
      }
      param_3 = local_1c8;
      param_2 = local_1d0;
      local_1f8 = *param_5;
      local_1f0 = param_5[4];
      local_1e8 = param_6;
      local_1e0 = local_58;
      local_1d8 = param_10;
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xc2e,
                    L"Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                    ,uVar12 & 0xffffffff);
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = *(longlong *)(param_1[2] + (longlong)(int)uVar12 * 8);
    }
    uVar2 = local_1c0;
    local_1f8 = *param_5;
    local_1f0 = param_5[2];
    local_1e0 = (char *)CONCAT71(local_1e0._1_7_,param_8);
    local_1e8._0_1_ = param_7;
    cVar3 = FUN_1473a6ae4(lVar7,param_2,param_3,local_1c0);
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (cVar3 == '\0') {
      uVar13 = param_6 & 0xfffffffe;
      if (DAT_14c760c50 == 0) {
        uVar13 = param_6;
      }
      uVar6 = (ulonglong)*(uint *)(param_1[1] + 0x168);
      if (param_5[4] != 0 && uVar6 != 0) {
        uVar11 = 1;
        uVar10 = param_5[4];
        do {
          if ((((uVar10 & 1) != 0) && (uVar11 - (uVar12 & 0xffffffff) != 1)) &&
             ((*(uint *)(param_1[1] + 0x164 + uVar11 * 8) & uVar13) == uVar13)) {
            local_1f8 = *param_5;
            local_1f0 = param_5[2];
            local_1e0 = (char *)CONCAT71(local_1e0._1_7_,param_8);
            local_1e8._0_1_ = param_7;
            cVar3 = FUN_1473a6ae4(*(undefined8 *)(param_1[2] + -8 + uVar11 * 8),param_2,param_3,
                                  uVar2);
            if (cVar3 != '\0') goto LAB_14319f857;
            break;
          }
          if (uVar6 <= uVar11) break;
          uVar11 = uVar11 + 1;
          bVar1 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar1);
      }
      uVar8 = 0;
    }
  }
LAB_14319f857:
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14319f92a FUN_14319f92a body=308 status=ok
// SIG undefined FUN_14319f92a(void)

void FUN_14319f92a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_3[1];
  local_70 = param_1;
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_3;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((*(int *)(lVar2 + 0x3c) == 0) &&
         (*(int *)(*local_70 + 4 + (ulonglong)*(uint *)(lVar2 + 0x38) * 8) == 0)) {
        FUN_140056680(local_58,&DAT_149dfb77a);
      }
      else {
        FUN_140002266(&local_68,&DAT_149e061aa);
        puVar4 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar4 = local_68;
        }
        FUN_140056680(local_58,puVar4);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar4 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar4 = (undefined2 *)*param_2;
      }
      FUN_140002266(&local_68,L"%s [%4d]",puVar4,*(undefined4 *)(lVar2 + 0x78));
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14319fa60 FUN_14319fa60 body=1845 status=ok
// SIG undefined FUN_14319fa60(void)

void FUN_14319fa60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 **ppuVar11;
  longlong *plVar12;
  uint *puVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint *puVar20;
  longlong lVar21;
  uint *puVar22;
  undefined2 *puVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint *puVar30;
  longlong lVar31;
  uint *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3f8 [44];
  int local_3cc;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong local_3a8 [2];
  longlong local_398 [2];
  undefined2 *local_388;
  undefined8 uStack_380;
  undefined2 *local_378;
  undefined2 *local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3c8 = param_1;
  if ((longlong)(int)param_3[1] != 0) {
    plVar12 = (longlong *)*param_3;
    local_3c0 = plVar12 + (int)param_3[1];
    local_3cc = 0;
    local_3b8 = param_2;
    do {
      lVar5 = *plVar12;
      local_3b0 = plVar12;
      if ((*(int *)(lVar5 + 0x3c) == 0) &&
         (*(int *)(*local_3c8 + 4 + (ulonglong)*(uint *)(lVar5 + 0x38) * 8) == 0)) {
        FUN_140056680(local_398,&DAT_149dfb77a);
      }
      else {
        FUN_140002266(&local_378,&DAT_149e061aa);
        puVar23 = &DAT_149dfb77a;
        if ((int)local_370 != 0) {
          puVar23 = local_378;
        }
        FUN_140056680(local_398,puVar23);
        if (local_378 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar23 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar23 = (undefined2 *)*param_2;
      }
      FUN_140002266(local_3a8,L"%s %d",puVar23,local_3cc);
      local_388 = (undefined2 *)0x0;
      uStack_380 = 0;
      iVar26 = *(int *)(lVar5 + 0xa8);
      if ((longlong)iVar26 != 0) {
        lVar21 = *(longlong *)(lVar5 + 0xa0);
        lVar18 = 0;
        do {
          if (*(int *)(lVar21 + lVar18) != 0) {
            lVar15 = *(longlong *)(lVar5 + 0xa0);
            uVar2 = *(undefined4 *)(lVar21 + 0xc + lVar18);
            uVar3 = *(undefined4 *)(lVar21 + 0x10 + lVar18);
            lVar31 = (longlong)(int)uStack_380;
            uVar10 = (int)uStack_380 + 1;
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar10);
            if (uStack_380._4_4_ < uVar10) {
              FUN_1431a0982(&local_388);
            }
            *(undefined4 *)(local_388 + lVar31 * 8) = uVar3;
            *(undefined4 *)(local_388 + lVar31 * 8 + 2) = uVar2;
            *(undefined4 *)(local_388 + lVar31 * 8 + 4) = 0xffffffff;
            *(int *)(local_388 + lVar31 * 8 + 6) =
                 (int)((ulonglong)((lVar21 + lVar18) - lVar15) >> 3) * -0x33333333;
          }
          lVar18 = lVar18 + 0x28;
        } while ((longlong)iVar26 * 0x28 != lVar18);
      }
      if ((longlong)*(int *)(lVar5 + 0x98) != 0) {
        puVar19 = *(undefined4 **)(lVar5 + 0x90);
        puVar34 = puVar19 + (longlong)*(int *)(lVar5 + 0x98) * 2;
        puVar33 = puVar19;
        do {
          lVar21 = *(longlong *)(lVar5 + 0x90);
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          lVar18 = (longlong)(int)uStack_380;
          uVar10 = (int)uStack_380 + 1;
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar10);
          if (uStack_380._4_4_ < uVar10) {
            FUN_1431a0982(&local_388);
          }
          *(undefined4 *)(local_388 + lVar18 * 8) = uVar2;
          *(undefined4 *)(local_388 + lVar18 * 8 + 2) = uVar3;
          *(int *)(local_388 + lVar18 * 8 + 4) = (int)((ulonglong)((longlong)puVar33 - lVar21) >> 3)
          ;
          *(undefined4 *)(local_388 + lVar18 * 8 + 6) = 0xffffffff;
          puVar19 = puVar19 + 2;
          puVar33 = puVar33 + 2;
        } while (puVar19 != puVar34);
      }
      puVar23 = local_388;
      iVar26 = (int)uStack_380;
      lVar21 = (longlong)(int)uStack_380;
      if (1 < lVar21) {
        memset(local_368,0,0x2f0);
        local_378 = puVar23;
        local_370 = puVar23 + lVar21 * 8 + -8;
        fVar36 = logf((float)iVar26);
        local_368[0] = (int)(longlong)(fVar36 + fVar36);
        ppuVar11 = &local_378;
        do {
          puVar14 = (uint *)*ppuVar11;
          puVar22 = (uint *)ppuVar11[1];
          iVar26 = *(int *)(ppuVar11 + 2);
          iVar29 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar14) >> 4);
          uVar10 = iVar29 + 1;
          puVar20 = puVar14;
          puVar24 = puVar22;
          if (iVar26 != 0) {
LAB_14319fd1a:
            if (8 < (int)uVar10) {
              uVar6 = *(undefined8 *)(puVar14 + (ulonglong)(uVar10 >> 1) * 4);
              uVar7 = *(undefined8 *)(puVar14 + (ulonglong)(uVar10 >> 1) * 4 + 2);
              uVar8 = *(undefined8 *)(puVar14 + 2);
              *(undefined8 *)(puVar14 + (ulonglong)(uVar10 >> 1) * 4) = *(undefined8 *)puVar14;
              *(undefined8 *)(puVar14 + (ulonglong)(uVar10 >> 1) * 4 + 2) = uVar8;
              *(undefined8 *)puVar14 = uVar6;
              *(undefined8 *)(puVar14 + 2) = uVar7;
              puVar30 = puVar24 + 4;
              puVar13 = puVar14;
              do {
                puVar9 = puVar13 + 4;
                puVar25 = puVar13 + 4;
                do {
                  puVar32 = puVar25;
                  puVar13 = puVar9;
                  if (puVar24 < puVar13) break;
                  puVar9 = puVar13 + 4;
                  puVar25 = puVar32 + 4;
                } while (*puVar13 <= *puVar14);
                puVar9 = puVar30 + -8;
                do {
                  puVar25 = puVar30;
                  puVar17 = puVar9;
                  puVar30 = puVar25 + -4;
                  if (puVar30 <= puVar14) break;
                  puVar9 = puVar17 + -4;
                } while (*puVar14 <= *puVar30);
                if (puVar30 < puVar13) goto LAB_14319fdc1;
                uVar6 = *(undefined8 *)puVar13;
                uVar7 = *(undefined8 *)(puVar13 + 2);
                uVar8 = *(undefined8 *)(puVar25 + -2);
                *(undefined8 *)puVar13 = *(undefined8 *)puVar30;
                *(undefined8 *)(puVar13 + 2) = uVar8;
                *(undefined8 *)puVar30 = uVar6;
                *(undefined8 *)(puVar25 + -2) = uVar7;
              } while( true );
            }
            if (puVar14 < puVar24) {
              do {
                puVar22 = puVar14;
                if (puVar14 + 4 <= puVar24) {
                  uVar10 = *puVar14;
                  puVar20 = puVar14 + 4;
                  do {
                    uVar4 = *puVar20;
                    bVar35 = uVar10 < uVar4;
                    if (uVar10 <= uVar4) {
                      uVar10 = uVar4;
                    }
                    if (bVar35) {
                      puVar22 = puVar20;
                    }
                    puVar20 = puVar20 + 4;
                  } while (puVar20 <= puVar24);
                }
                local_78 = *(undefined8 *)puVar22;
                uStack_70 = *(undefined8 *)(puVar22 + 2);
                uVar7 = local_78;
                uVar8 = uStack_70;
                uVar6 = *(undefined8 *)(puVar24 + 2);
                *(undefined8 *)puVar22 = *(undefined8 *)puVar24;
                *(undefined8 *)(puVar22 + 2) = uVar6;
                local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
                *puVar24 = (uint)local_78;
                puVar24[1] = local_78._4_4_;
                puVar24[2] = (uint)uStack_70;
                puVar24[3] = uStack_70._4_4_;
                puVar24 = puVar24 + -4;
                local_78 = uVar7;
                uStack_70 = uVar8;
              } while (puVar14 < puVar24);
            }
            goto LAB_1431a0075;
          }
LAB_14319fe69:
          if (uVar10 != 0) {
            iVar26 = (iVar29 - (iVar29 + -1 >> 0x1f)) + -1 >> 1;
            iVar29 = iVar26;
joined_r0x00014319fe8c:
            do {
              iVar28 = iVar26 * 2 + 1;
              if (iVar28 < (int)uVar10) {
                iVar27 = iVar26 * 2 + 2;
                if ((iVar27 < (int)uVar10) &&
                   (puVar14[(longlong)iVar28 * 4] <= puVar14[(longlong)iVar27 * 4])) {
                  iVar28 = iVar27;
                }
                if (puVar14[(longlong)iVar26 * 4] < puVar14[(longlong)iVar28 * 4]) {
                  puVar24 = puVar14 + (longlong)iVar26 * 4;
                  puVar22 = puVar14 + (longlong)iVar28 * 4;
                  local_78 = *(undefined8 *)puVar24;
                  uStack_70 = *(undefined8 *)(puVar24 + 2);
                  uVar7 = local_78;
                  uVar8 = uStack_70;
                  uVar6 = *(undefined8 *)(puVar22 + 2);
                  *(undefined8 *)puVar24 = *(undefined8 *)puVar22;
                  *(undefined8 *)(puVar24 + 2) = uVar6;
                  local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
                  *puVar22 = (uint)local_78;
                  puVar22[1] = local_78._4_4_;
                  puVar22[2] = (uint)uStack_70;
                  puVar22[3] = uStack_70._4_4_;
                  iVar26 = iVar28;
                  local_78 = uVar7;
                  uStack_70 = uVar8;
                  goto joined_r0x00014319fe8c;
                }
              }
              bVar35 = iVar29 != 0;
              iVar26 = iVar29 + -1;
              iVar29 = iVar26;
            } while (bVar35);
            if (1 < (int)uVar10) {
              uVar16 = (ulonglong)uVar10 - 1;
              local_78 = *(undefined8 *)puVar14;
              uStack_70 = *(undefined8 *)(puVar14 + 2);
              uVar7 = local_78;
              uVar8 = uStack_70;
              uVar6 = *(undefined8 *)(puVar14 + uVar16 * 4 + 2);
              *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + uVar16 * 4);
              *(undefined8 *)(puVar14 + 2) = uVar6;
              local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
              puVar24 = puVar14 + uVar16 * 4;
              *puVar24 = (uint)local_78;
              puVar24[1] = local_78._4_4_;
              puVar24[2] = (uint)uStack_70;
              puVar24[3] = uStack_70._4_4_;
              local_78 = uVar7;
              uStack_70 = uVar8;
              if (uVar10 != 2) {
                do {
                  iVar26 = 0;
                  iVar28 = 1;
                  iVar29 = 0;
                  do {
                    iVar26 = iVar26 + 2;
                    iVar27 = iVar28;
                    if (((longlong)iVar26 < (longlong)uVar16) &&
                       (puVar14[(longlong)iVar28 * 4] <= puVar14[(longlong)iVar26 * 4])) {
                      iVar27 = iVar26;
                    }
                    if (puVar14[(longlong)iVar27 * 4] <= puVar14[(longlong)iVar29 * 4]) break;
                    puVar24 = puVar14 + (longlong)iVar29 * 4;
                    puVar22 = puVar14 + (longlong)iVar27 * 4;
                    uVar6 = *(undefined8 *)puVar24;
                    uVar7 = *(undefined8 *)(puVar24 + 2);
                    uVar8 = *(undefined8 *)(puVar22 + 2);
                    *(undefined8 *)puVar24 = *(undefined8 *)puVar22;
                    *(undefined8 *)(puVar24 + 2) = uVar8;
                    *(undefined8 *)puVar22 = uVar6;
                    *(undefined8 *)(puVar22 + 2) = uVar7;
                    iVar26 = iVar27 * 2;
                    iVar28 = iVar27 * 2 + 1;
                    iVar29 = iVar27;
                  } while ((longlong)iVar28 < (longlong)uVar16);
                  uVar1 = uVar16 - 1;
                  local_78 = *(undefined8 *)puVar14;
                  uStack_70 = *(undefined8 *)(puVar14 + 2);
                  uVar7 = local_78;
                  uVar8 = uStack_70;
                  uVar6 = *(undefined8 *)(puVar14 + uVar1 * 4 + 2);
                  *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + uVar1 * 4);
                  *(undefined8 *)(puVar14 + 2) = uVar6;
                  local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
                  puVar24 = puVar14 + uVar1 * 4;
                  *puVar24 = (uint)local_78;
                  puVar24[1] = local_78._4_4_;
                  puVar24[2] = (uint)uStack_70;
                  puVar24[3] = uStack_70._4_4_;
                  bVar35 = 2 < uVar16;
                  uVar16 = uVar1;
                  local_78 = uVar7;
                  uStack_70 = uVar8;
                } while (bVar35);
              }
            }
          }
LAB_1431a0075:
          ppuVar11 = ppuVar11 + -3;
        } while (&local_378 <= ppuVar11);
      }
      puVar23 = local_388;
      if ((int)uStack_380 != 0) {
        lVar18 = (longlong)(int)uStack_380;
        lVar21 = 0;
        do {
          if (*(int *)((longlong)puVar23 + lVar21 + 8) < 0) {
            lVar15 = (longlong)*(int *)((longlong)puVar23 + lVar21 + 0xc);
            if (((*(int *)(*(longlong *)(lVar5 + 0xa0) + lVar15 * 0x28) == 1) &&
                (lVar15 = *(longlong *)(lVar5 + 0xa0) + lVar15 * 0x28,
                *(char *)(lVar15 + 5) == '\x05')) &&
               (lVar15 = (**(code **)(**(longlong **)(lVar15 + 0x18) + 0x20))(), lVar15 != 0)) {
              local_78 = *(undefined8 *)(lVar15 + 0x10);
              FUN_1400021e4(&local_78,&local_378);
              if (local_378 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          lVar21 = lVar21 + 0x10;
        } while (lVar18 * 0x10 != lVar21);
      }
      param_2 = local_3b8;
      if (local_388 != (undefined2 *)0x0) {
        FUN_1400020a8(local_388);
      }
      if (local_3a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_398[0] != 0) {
        FUN_1400020a8();
      }
      local_3cc = local_3cc + 1;
      plVar12 = local_3b0 + 1;
    } while (plVar12 != local_3c0);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14319fdc1:
  local_78 = *(undefined8 *)puVar14;
  uStack_70 = *(undefined8 *)(puVar14 + 2);
  uVar7 = local_78;
  uVar8 = uStack_70;
  uVar6 = *(undefined8 *)(puVar25 + -2);
  *(undefined8 *)puVar14 = *(undefined8 *)puVar30;
  *(undefined8 *)(puVar14 + 2) = uVar6;
  local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
  *puVar30 = (uint)local_78;
  puVar25[-3] = local_78._4_4_;
  puVar25[-2] = (uint)uStack_70;
  puVar25[-1] = uStack_70._4_4_;
  iVar26 = iVar26 + -1;
  puVar25 = puVar25 + -8;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar17 - (longlong)puVar20 < (longlong)puVar22 - (longlong)puVar32) {
    if (puVar13 < puVar24) {
      *ppuVar11 = (undefined2 *)puVar13;
      ppuVar11[1] = (undefined2 *)puVar24;
      *(int *)(ppuVar11 + 2) = iVar26;
      ppuVar11 = ppuVar11 + 3;
    }
    puVar22 = puVar17;
    puVar32 = puVar14;
    if (puVar30 <= puVar14 + 4) goto LAB_1431a0075;
  }
  else {
    if (puVar14 + 4 < puVar30) {
      *ppuVar11 = (undefined2 *)puVar14;
      ppuVar11[1] = (undefined2 *)puVar25;
      *(int *)(ppuVar11 + 2) = iVar26;
      ppuVar11 = ppuVar11 + 3;
    }
    puVar14 = puVar13;
    puVar25 = puVar24;
    puVar22 = puVar24;
    if (puVar24 <= puVar13) goto LAB_1431a0075;
  }
  iVar29 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar32) >> 4);
  uVar10 = iVar29 + 1;
  puVar20 = puVar32;
  puVar24 = puVar25;
  if (iVar26 == 0) goto LAB_14319fe69;
  goto LAB_14319fd1a;
}



// FUNCTION 1431a0196 FUN_1431a0196 body=84 status=ok
// SIG undefined FUN_1431a0196(void)

void FUN_1431a0196(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14319e7e0(param_1,param_2,0,param_3,0,0x12,6,1);
  if (cVar1 == '\0') {
    FUN_1473a780e(param_1,0,0,0,0);
  }
  return;
}



// FUNCTION 1431a01ea FUN_1431a01ea body=207 status=ok
// SIG undefined FUN_1431a01ea(void)

void FUN_1431a01ea(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)*(byte *)((longlong)param_2 + 0x1b) < '\0' &&
      (*(byte *)((longlong)param_2 + 0x1b) & 0x7f) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
    FUN_1473a6cb6(param_1,0);
    puVar8 = (undefined8 *)FUN_1473a7f8c(param_1 + 0x1a0);
    puVar8[4] = (ulonglong)DAT_14c7590b0;
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[3];
    puVar8[2] = param_2[2];
    puVar8[3] = uVar7;
    *puVar8 = uVar5;
    puVar8[1] = uVar6;
    local_48._0_4_ = (undefined4)uVar1;
    local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar2;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_38._0_4_ = (undefined4)uVar3;
    local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar4;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
    *(undefined4 *)param_2 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
    uVar9 = *(uint *)(param_1 + 0x1b0);
    if (*(uint *)(param_1 + 0x1b0) < *(uint *)(param_1 + 0x1a8)) {
      uVar9 = *(uint *)(param_1 + 0x1a8);
    }
    *(uint *)(param_1 + 0x1b0) = uVar9;
    local_48 = uVar1;
    uStack_40 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a02cc FUN_1431a02cc body=725 status=ok
// SIG undefined FUN_1431a02cc(void)

void FUN_1431a02cc(longlong *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_98 [40];
  LPCRITICAL_SECTION local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (LPCRITICAL_SECTION)(param_1 + 1);
  EnterCriticalSection(local_70);
  uVar9 = (ulonglong)(int)param_1[7];
  if (0 < (longlong)uVar9) {
    uVar2 = *(undefined8 *)*param_1;
    iVar10 = -(int)param_1[7];
    lVar7 = uVar9 * 0x48 + -8;
    do {
      lVar3 = param_1[6];
      if ((param_2 != '\0') ||
         ((*(int *)(lVar3 + -0x3c + lVar7) + 2U < DAT_14ca77fd0 &&
          ((lVar4 = *(longlong *)(lVar3 + -0x30 + lVar7), lVar4 == 0 ||
           (*(ulonglong *)(lVar3 + -0x38 + lVar7) < *(ulonglong *)(lVar4 + 0xe0))))))) {
        switch(*(undefined4 *)(lVar3 + -0x40 + lVar7)) {
        case 0:
          (*DAT_14ca78fb8)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 1:
          (*DAT_14ca78e20)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 2:
          (*DAT_14ca78f58)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 3:
          (*DAT_14ca78f68)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 4:
          (*DAT_14ca78f80)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 5:
          (*DAT_14ca79238)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 6:
          (*DAT_14ca78dc8)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 7:
          (*DAT_14ca78fb0)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 8:
          (*DAT_14ca79200)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 9:
          (*DAT_14ca79350)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 10:
          (*DAT_14ca78f40)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 0xb:
          (*DAT_14ca78f90)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 0xc:
          (*DAT_14ca79268)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7));
          break;
        case 0xd:
          puVar1 = (undefined4 *)(lVar3 + -0x20 + lVar7);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          puVar1 = (undefined4 *)(lVar3 + -0x10 + lVar7);
          local_58 = *puVar1;
          uStack_54 = puVar1[1];
          uStack_4c = puVar1[3];
          uStack_50 = puVar1[2] | 0x80000000;
          FUN_1473a73fe(*param_1 + 0x3d8,&local_68);
          break;
        case 0xe:
          FUN_143197808(*param_1 + 8,lVar3 + lVar7);
          break;
        case 0x10:
          (*DAT_14ca79110)(uVar2,*(undefined8 *)(lVar3 + -0x28 + lVar7),0);
          break;
        case 0x11:
          FUN_1473a3066(*(undefined8 *)(*param_1 + 0x6b0),
                        *(ulonglong *)(lVar3 + -0x28 + lVar7) & 0xffffffffff);
        }
        uVar6 = *(uint *)(param_1 + 7);
        if (uVar9 != uVar6) {
          iVar8 = uVar6 + iVar10;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          memmove((void *)(param_1[6] + lVar7 + -0x40),
                  (void *)(param_1[6] + (longlong)(int)(uVar6 - iVar8) * 0x48),
                  (longlong)iVar8 * 0x48);
          uVar6 = *(uint *)(param_1 + 7);
        }
        *(uint *)(param_1 + 7) = uVar6 - 1;
      }
      iVar10 = iVar10 + 1;
      lVar7 = lVar7 + -0x48;
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001431a0595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a05a2 FUN_1431a05a2 body=343 status=ok
// SIG undefined FUN_1431a05a2(void)

undefined8 * FUN_1431a05a2(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  local_50 = 0xc;
  local_4c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_2c = 0;
  uStack_24 = 0;
  local_1c = 0;
  uStack_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = 0;
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  iVar1 = (*DAT_14ca793e8)(**(undefined8 **)(param_1 + 8),&local_50,0,puVar2 + 4);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateBuffer(Device->GetInstanceHandle(), &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &NewBlock->Buffer)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x1358);
  }
  local_60 = *(undefined4 *)(param_1 + 0x14);
  FUN_14319eeca(*(longlong *)(param_1 + 8) + 0x3d8,puVar2,puVar2[4],0x8d);
  uVar3 = FUN_1473a804a(puVar2,*(undefined8 *)(param_1 + 8));
  puVar2[5] = uVar3;
  if (((*(byte *)(param_1 + 0x1a) & 2) != 0) &&
     ((*(byte *)((longlong)*(undefined8 **)(param_1 + 8) + 0x20fb) & 0x40) != 0)) {
    local_50 = 0x3b9e8321;
    local_4c = 0;
    uStack_44 = 0;
    uStack_40 = (undefined4)puVar2[4];
    uStack_3c = (undefined4)((ulonglong)puVar2[4] >> 0x20);
    uVar3 = (*DAT_14ca79240)(**(undefined8 **)(param_1 + 8));
    puVar2[6] = uVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a06fa FUN_1431a06fa body=111 status=ok
// SIG undefined FUN_1431a06fa(void)

void FUN_1431a06fa(undefined8 *param_1,longlong param_2)

{
  (*DAT_14ca78e20)(*param_1,*(undefined8 *)(param_2 + 0x20),0);
  FUN_1473a73fe(param_1 + 0x7b,param_2,1);
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1473a9e08(param_2 + 0x38);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 1431a07f8 FUN_1431a07f8 body=108 status=ok
// SIG undefined FUN_1431a07f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a07f8(longlong param_1)

{
  int iVar1;
  
  if ((DAT_14ca84f34 == '\x01') && (iVar1 = (**(code **)(*DAT_14ca77de8 + 0xb0))(), iVar1 < 3)) {
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    DAT_14ca84f34 = '\x01';
    DAT_14ca84f40 = *(undefined4 *)(param_1 + 0x78);
    _DAT_14ca84f44 = *(undefined4 *)(param_1 + 0x7c);
    _DAT_14ca84f38 = *(undefined4 *)(param_1 + 0x80);
    _DAT_14ca84f3c = *(undefined4 *)(param_1 + 0x84);
    _DAT_14ca84f48 = 0x2802;
  }
  return;
}



// FUNCTION 1431a087c FUN_1431a087c body=262 status=ok
// SIG undefined FUN_1431a087c(void)

void FUN_1431a087c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1431a0982 FUN_1431a0982 body=262 status=ok
// SIG undefined FUN_1431a0982(void)

void FUN_1431a0982(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1431a0a88 FUN_1431a0a88 body=2254 status=ok
// SIG undefined FUN_1431a0a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a0a88(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14ca77c54);
  if (cVar1 == '\0') {
    _DAT_14ca77c54 = 0;
    uRam000000014ca77c5c = 0;
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  local_68 = 4;
  FUN_141471170(&DAT_14ca77c68,L"r.Vulkan.Bindless.MaxSamplerDescriptorCount",&DAT_14c760c24,
                L"Maximum bindless sampler descriptor count");
  atexit(FUN_143191d64);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77c78,L"r.Vulkan.Bindless.MaxResourceSampledImageCount",&DAT_14c760c28,
                L"Maximum bindless Sampled Image descriptor count");
  atexit(FUN_143191da9);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77c88,L"r.Vulkan.Bindless.MaxResourceStorageImageCount",&DAT_14c760c2c,
                L"Maximum bindless Storage Image descriptor count");
  atexit(FUN_143191dee);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77c98,L"r.Vulkan.Bindless.MaxResourceUniformTexelBufferCount",
                &DAT_14c760c30,L"Maximum bindless Uniform Texel Buffer descriptor count");
  atexit(FUN_143191e33);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77ca8,L"r.Vulkan.Bindless.MaxResourceStorageTexelBufferCount",
                &DAT_14c760c34,L"Maximum bindless Storage Texel Buffer descriptor count");
  atexit(FUN_143191e78);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77cb8,L"r.Vulkan.Bindless.MaxResourceUniformBufferCount",&DAT_14c760c38,
                L"Maximum bindless Uniform Buffer descriptor count");
  atexit(FUN_143191ebd);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77cc8,L"r.Vulkan.Bindless.MaxResourceStorageBufferCount",&DAT_14c760c3c,
                L"Maximum bindless Storage Buffer descriptor count");
  atexit(FUN_143191f02);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77cd8,L"r.Vulkan.Bindless.MaxResourceAccelerationStructureCount",
                &DAT_14c760c40,L"Maximum bindless Acceleration Structure descriptor count");
  atexit(FUN_143191f47);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77ce8,L"r.Vulkan.Bindless.BlockSize",&DAT_14c760c44,
                L"Block size to use for single use ub. (default: 1MB)");
  atexit(FUN_143191f8c);
  local_60 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca77cf8,L"r.Vulkan.AllowAsyncCompute",&local_60,
                L"0 to disable async compute queue(if available)1 to allow async compute queue");
  atexit(FUN_14319267f);
  local_60 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca77fe8,L"r.Vulkan.AllowPresentOnComputeQueue",&local_60,
                L"0 to present on the graphics queue1 to allow presenting on the compute queue if available"
               );
  atexit(FUN_1431926c4);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77d10,L"r.Vulkan.RobustBufferAccess",&local_60,
                L"0 to disable robust buffer access1 to enable (default)");
  atexit(FUN_143192709);
  local_60 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77d28,L"r.Vulkan.Depth24Bit",&local_60,
                L"0: Use 32-bit float depth buffer (default)\n1: Use 24-bit fixed point depth buffer\n"
               );
  atexit(FUN_14319274e);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77d40,L"r.Vulkan.DelayAcquireBackBuffer",&local_60,
                L"Whether to delay acquiring the back buffer \n 0: acquire next image on frame start \n 1: acquire next image just before presenting, rendering is done to intermediate image which is then copied to a real backbuffer (default) \n 2: acquire next image on first use"
               );
  atexit(FUN_143192793);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77d58);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77d58,4000);
  atexit((_func_5014 *)&LAB_143197979);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77d80,L"r.Vulkan.Allow64bitShaderAtomics",&local_60,
                L"Whether to enable 64bit buffer/image atomics required by Nanite\n0 to disable 64bit atomics\n1 to enable (default)"
               );
  atexit(FUN_143197987);
  local_60 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77d98,L"r.Vulkan.Allow16bitOps",&local_60,
                L"Whether to enable 16bit ops to speeds up TSR\n0 to disable (default)\n1 to enable"
               );
  atexit(FUN_1431979cc);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77fb8,L"r.Vulkan.RayTracing",&local_60,
                L"0: Do not enable Vulkan ray tracing extensions\n1: Enable experimental ray tracing support (default)"
               );
  atexit(FUN_143197a11);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77db0,L"r.Vulkan.AllowHostQueryReset",&local_60,
                L"0: Do not enable support for Host Query Reset extension\n1: Enable Host Query Reset (default)"
               );
  atexit(FUN_143197a56);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77dc8,L"r.Vulkan.AllowSynchronization2",&local_60,
                L"Enables the use of advanced barriers that combine the use of the VK_KHR_separate_depth_stencil_layouts \nand VK_KHR_synchronization2 to reduce the reliance on layout tracking (except for defragging).\nThis is necessary in order to support parallel command buffer generation.\n0: Do not enable support for sync2 barriers.\n1: Enable sync2 barriers (default)"
               );
  atexit(FUN_143197a9b);
  local_60 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77de0,L"r.Vulkan.VRSFormat",&local_60,
                L"Allows to choose the preferred Variable Rate Shading option. \n0: Prefer Fragment Shading Rate if both Fragment Shading Rate and Fragment Density Map are available.\n1: Use Fragment Shading Rate if available. A message will be reported if not available. \n2: Require Fragment Shading Rate. Will generate an error if the extension is not available. \n3: Prefer Fragment Density Map if both Fragment Shading Rate and Fragment Density Map are available.\n4: Use Fragment Density Map if available. A message will be reported if not available.\n5: Require Fragment Density Map. Will generate an error if the extension is not available."
               );
  atexit(FUN_143197ae0);
  DAT_14ca77fd8 = 0;
  DAT_14ca77fe0 = 0;
  atexit(FUN_143197b25);
  DAT_14ca77df8 = 0;
  _DAT_14ca77e00 = 0;
  atexit((_func_5014 *)&LAB_143197b60);
  DAT_14ca77e08 = 0;
  _DAT_14ca77e10 = 0;
  atexit((_func_5014 *)&LAB_143197b71);
  local_60 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca77e18,L"r.Vulkan.UseProfileCheck",&local_60,
                L"0 to assume all requested feature levels are supported.\n1 to verify feature level support using a profile check (default)\n"
               );
  atexit(FUN_143198fab);
  DAT_14ca77e30 = 0;
  _DAT_14ca77e38 = 0;
  atexit((_func_5014 *)&LAB_14319acb4);
  DAT_14ca77e40 = 0;
  _DAT_14ca77e48 = 0;
  atexit((_func_5014 *)&LAB_14319acc5);
  local_68 = 0;
  FUN_141471170(&DAT_14ca77e50,L"r.vulkan.LogDefrag",&DAT_14ca78000,
                L"Whether to log all defrag moves & evictions\n0: Off\n1: On\n");
  atexit(FUN_14319b841);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77e60,L"r.Vulkan.MemoryBacktrace",&DAT_14c760c4c,
                L"0: Disable, store __FILE__ and __LINE__\nN: Enable, n is # of steps to go back\n")
  ;
  atexit(FUN_14319b886);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77e70,L"r.Vulkan.MemoryFallbackToHost",&DAT_14c760c50,
                L"0: Legacy, will crash when oom for rendertargets\n1: Fallback to Host memory on oom\n"
               );
  atexit(FUN_14319b8cb);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14ca77e80,L"r.Vulkan.DefragSizeFactor",&DAT_14c760c54,
                L"Amount of space required to be free, on other pages, before attempting to do a defrag of a page"
               );
  atexit(FUN_14319b910);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14ca77e90,L"r.Vulkan.DefragSizeFraction",&DAT_14c760c58,
                L"Fill threshold, dont attempt defrag if free space is less than this fraction\n");
  atexit(FUN_14319b955);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77ea0,L"r.Vulkan.DefragAgeDelay",&DAT_14c760c5c,
                L"Delay in Frames that needs to pass before attempting to defrag a page again\n");
  atexit(FUN_14319b99a);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77eb8,L"r.Vulkan.DefragPaused",&DAT_14ca77eb0,
                L"Pause Any defragging. Only for debugging defragmentation code");
  atexit(FUN_14319b9df);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77ed0,L"r.Vulkan.DefragAutoPause",&DAT_14ca77ec8,
                L"Automatically Pause defragging after a single page has been defragged. Only for debugging the defragmentation code."
               );
  atexit(FUN_14319ba24);
  local_68 = 4;
  FUN_141471170(&DAT_14ca77ee8,L"r.Vulkan.UseBufferBinning",&DAT_14ca77ee0,
                L"Enable binning sub-allocations within buffers to help reduce fragmentation at the expense of higher high watermark [read-only]\n"
               );
  atexit(FUN_14319ba69);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77ef8,L"r.Vulkan.LogEvictStatus",&DAT_14ca77f08,
                L"Log Eviction status every frame");
  atexit(FUN_14319baae);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f10,L"r.Vulkan.BudgetScale",&DAT_14c760c60,
                L"Percentage Scaling of MemoryBudget. Valid range is [0-100]. Only has an effect if VK_EXT_memory_budget is available"
               );
  atexit(FUN_14319baf3);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f20,L"r.Vulkan.EnableDedicatedImageMemory",&DAT_14c760c70,
                L"Enable to use Dedidcated Image memory on devices that prefer it.");
  atexit(FUN_14319bb38);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f38,L"r.Vulkan.SingleAllocationPerResource",&DAT_14ca77f30,
                L"Enable to do a single allocation per resource");
  atexit(FUN_14319bb7d);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f50,L"r.Vulkan.EvictOnePageDebug",&DAT_14ca77f48,
                L"Set to 1 to test evict one page to host");
  atexit(FUN_14319bbc2);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f60,L"r.Vulkan.EnableDefrag",&DAT_14c760c48,
                L"Whether to enable defrag moves & evictions\n0: Off\n1: On\n");
  atexit(FUN_14319bc07);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca77f78,L"r.Vulkan.DefragOnceDebug",&DAT_14ca77f70,L"Set to 1 to test defrag"
               );
  atexit(FUN_14319bc4c);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14ca77f88,L"r.Vulkan.EvictionLimitPercentage",&DAT_14c760c64,
                L"When more than x% of local memory is used, evict resources to host memory");
  atexit(FUN_14319bc91);
  local_68 = 0x20;
  FUN_1415c789c(&DAT_14ca77f98,L"r.Vulkan.EvictionLimitPercentageRenableLimit",&DAT_14c760c68,
                L"After eviction has occurred, only start using local mem for textures after memory usage is less than this(Relative to Eviction percentage)"
               );
  atexit(FUN_14319bcd6);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a1358 FUN_1431a1358 body=392 status=ok
// SIG undefined FUN_1431a1358(void)

undefined8 * FUN_1431a1358(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  int *local_a8;
  int local_a0 [22];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = param_2;
  iVar5 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  *(int *)(param_1 + 1) = param_4;
  local_48 = 0xb00000000;
  do {
    iVar2 = FUN_1473af3b4(param_1[3],iVar5);
    uVar1 = local_48;
    if (iVar2 != 0) {
      lVar4 = (longlong)(int)(uint)local_48;
      uVar3 = (uint)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar3);
      if (local_48._4_4_ < uVar3) {
        FUN_1473c6c5a(local_a0,uVar1 & 0xffffffff);
      }
      local_a0[lVar4 * 2] = iVar5;
      local_a0[lVar4 * 2 + 1] = iVar2 * param_4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xb);
  iVar5 = FUN_1473af3b4(param_1[3],0x3b9d13f0);
  if (iVar5 != 0) {
    lVar4 = (longlong)(int)(uint)local_48;
    uVar3 = (uint)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,uVar3);
    if (local_48._4_4_ < uVar3) {
      FUN_1473c6c5a(local_a0);
    }
    (local_a0 + lVar4 * 2)[0] = 0x3b9d13f0;
    (local_a0 + lVar4 * 2)[1] = 0;
    local_a0[lVar4 * 2 + 1] = iVar5 * param_4;
  }
  local_c8 = 0x21;
  uStack_c4 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  uStack_b0 = (ulonglong)(uint)local_48;
  uStack_b4 = *(undefined4 *)(param_1 + 1);
  local_a8 = local_a0;
  iVar5 = (*DAT_14ca791b8)(*(undefined8 *)*param_1,&local_c8,0,param_1 + 4);
  if (iVar5 != 0) {
    FUN_1431b4552(iVar5,
                  "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanPendingState.cpp",0x40);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a14e2 FUN_1431a14e2 body=98 status=ok
// SIG undefined FUN_1431a14e2(void)

void FUN_1431a14e2(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  while (plVar3 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*plVar3;
    plVar2 = (longlong *)plVar3[1];
    if (puVar1 != (undefined8 *)0x0) {
      if (puVar1[4] != 0) {
        (*DAT_14ca791c0)(*(undefined8 *)*puVar1,puVar1[4],0);
      }
      FUN_1400020a8(puVar1);
    }
    FUN_1400020a8(plVar3);
    plVar3 = plVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1431a1544 FUN_1431a1544 body=69 status=ok
// SIG undefined FUN_1431a1544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1544(void)

{
  _DAT_14ca78378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78380,1);
  return;
}



// FUNCTION 1431a1589 FUN_1431a1589 body=69 status=ok
// SIG undefined FUN_1431a1589(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1589(void)

{
  _DAT_14ca78388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a15cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78390,1);
  return;
}



// FUNCTION 1431a15ce FUN_1431a15ce body=308 status=ok
// SIG undefined FUN_1431a15ce(void)

undefined8 * FUN_1431a15ce(undefined8 *param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  int *local_80;
  int local_78 [22];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  iVar1 = 0;
  param_1[2] = 0;
  local_78[0x14] = 0;
  local_78[0x15] = 0;
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0x12] = 0;
  local_78[0x13] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  lVar2 = 0;
  do {
    fVar3 = *(float *)((longlong)&DAT_14a35f1b0 + lVar2) * (float)param_3;
    if (fVar3 <= 4.0) {
      fVar3 = 4.0;
    }
    fVar4 = *(float *)(param_4 + lVar2) * (float)param_3;
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    *(int *)((longlong)param_1 + lVar2 + 0x18) = (int)(longlong)fVar4;
    *(int *)((longlong)local_78 + lVar2 * 2) = iVar1;
    *(int *)((longlong)local_78 + lVar2 * 2 + 4) = (int)(longlong)fVar4;
    lVar2 = lVar2 + 4;
    iVar1 = iVar1 + 1;
  } while (lVar2 != 0x2c);
  local_a0 = 0x21;
  uStack_9c = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_88 = 0xb;
  local_80 = local_78;
  uStack_8c = param_3;
  iVar1 = (*DAT_14ca791b8)(*param_2,&local_a0,0,param_1 + 2);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanPendingState.cpp",0x283);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a1704 FUN_1431a1704 body=929 status=ok
// SIG undefined FUN_1431a1704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1704(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  float local_e8 [14];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < DAT_14c760c78) {
    lVar8 = 0;
    do {
      if (*(int *)(param_1 + 2) <= lVar8) break;
      cVar3 = FUN_1473b1174(*(undefined8 *)(param_1[1] + lVar8 * 8),param_2,param_5);
      if (cVar3 != '\0') goto LAB_1431a1a4a;
      lVar8 = lVar8 + 1;
    } while (lVar8 < DAT_14c760c78);
  }
  local_f8 = param_5;
  cVar3 = FUN_1473b11e2(*(undefined8 *)param_1[1],param_2,param_3,param_4);
  if (cVar3 == '\0') {
    puVar1 = param_1 + 1;
    do {
      plVar4 = (longlong *)param_1[1];
      lVar8 = *plVar4;
      fVar10 = (float)(-(uint)(0.0 < *(float *)(param_1 + 4)) & 0x40000000);
      fVar11 = (float)(*(int *)(lVar8 + 0xa8) - *(int *)(lVar8 + 0xd4)) /
               (float)*(uint *)(lVar8 + 0x10);
      fVar12 = 0.5;
      if (0.5 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar12 = (fVar10 * *(float *)(param_1 + 4) + fVar12) / (fVar10 + 1.0);
      *(float *)(param_1 + 4) = fVar12;
      fVar12 = (float)_DAT_14c760c74 / fVar12;
      auVar9 = blendps(ZEXT416((uint)fVar12),ZEXT816(0),0xe);
      if (0.0 <= fVar12) {
        auVar9 = roundps(auVar9,auVar9,2);
        fVar12 = auVar9._0_4_;
      }
      else {
        auVar9 = roundps(auVar9,auVar9,1);
        fVar12 = auVar9._0_4_;
      }
      lVar8 = param_1[3];
      if (lVar8 == 0) {
LAB_1431a1986:
        lVar8 = *plVar4;
        iVar6 = *(int *)(lVar8 + 0xa8) - *(int *)(lVar8 + 0xd4);
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        lVar7 = 0;
        do {
          local_e8[lVar7] = (float)*(uint *)(lVar8 + 0xf4 + lVar7 * 4) / (float)iVar6;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xb);
        uVar5 = FUN_14001cc68(0x120,0x10);
        FUN_1473b1516(uVar5,*param_1,(longlong)fVar12 & 0xffffffff,local_e8);
        uVar2 = *(uint *)(param_1 + 2);
        *(uint *)(param_1 + 2) = uVar2 + 1;
        if (*(uint *)((longlong)param_1 + 0x14) == uVar2) {
          FUN_1473c737a(puVar1,uVar2);
        }
        memmove((void *)((longlong)*puVar1 + 8),(void *)*puVar1,(ulonglong)uVar2 << 3);
        *(undefined8 *)*puVar1 = uVar5;
      }
      else {
        fVar10 = (float)((longlong)fVar12 & 0xffffffff);
        fVar10 = ((float)*(uint *)(lVar8 + 0x10) - fVar10) / fVar10;
        if ((fVar10 < -0.1) || (0.5 < fVar10)) {
          param_1[3] = 0;
          *(undefined4 *)(lVar8 + 0xe8) = 0;
          if (*(longlong *)(lVar8 + 0xe0) != 0) {
            FUN_1400020a8();
          }
          FUN_1473c7076(lVar8 + 0xa0);
          *(undefined4 *)(lVar8 + 0x98) = 0;
          if (*(longlong *)(lVar8 + 0x90) != 0) {
            FUN_1400020a8();
          }
          FUN_1473c71f8(lVar8 + 0x50);
          if (*(longlong *)(lVar8 + 0x18) != 0) {
            (*DAT_14ca791c0)(**(undefined8 **)(lVar8 + 8),*(longlong *)(lVar8 + 0x18),0);
          }
          FUN_1400020a8(lVar8);
          plVar4 = (longlong *)*puVar1;
          goto LAB_1431a1986;
        }
        FUN_1473b10d0(lVar8);
        uVar2 = *(uint *)(param_1 + 2);
        *(uint *)(param_1 + 2) = uVar2 + 1;
        if (*(uint *)((longlong)param_1 + 0x14) == uVar2) {
          FUN_1473c737a(puVar1,uVar2);
        }
        memmove((void *)((longlong)param_1[1] + 8),(void *)param_1[1],(ulonglong)uVar2 << 3);
        *(undefined8 *)param_1[1] = param_1[3];
        param_1[3] = 0;
      }
      local_f8 = param_5;
      cVar3 = FUN_1473b11e2(*(undefined8 *)*puVar1,param_2,param_3,param_4);
    } while (cVar3 == '\0');
  }
LAB_1431a1a4a:
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a1aa6 FUN_1431a1aa6 body=761 status=ok
// SIG undefined FUN_1431a1aa6(void)

undefined8 * FUN_1431a1aa6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined1 *)(param_3 + 0x1a);
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 5;
  uVar5 = 0;
  memset(param_1 + 3,0,0x8c);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe9) = uVar1;
  *param_1 = &PTR_FUN_14a3606a0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = param_3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x11] = *(longlong *)(param_3 + 0x318) + 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_2 = param_2 + 0x6b8;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar4 = FUN_1473b6016(param_2);
    uVar2 = *(uint *)(lVar4 + 0xec);
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x1f);
      *(uint *)(param_1 + 0x1f) = iVar3 + uVar2;
      uVar5 = 1;
      if ((uint)(*(int *)((longlong)param_1 + 0xfc) - iVar3) < uVar2) {
        FUN_1447403be(param_1 + 0x1e);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)(*(int *)(lVar4 + 0xc0) != 0);
  }
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar4 = FUN_1473b60d8(param_2);
    uVar2 = *(uint *)(lVar4 + 0xec);
    uVar5 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x21);
      *(uint *)(param_1 + 0x21) = iVar3 + uVar2;
      uVar5 = 1;
      if ((uint)(*(int *)((longlong)param_1 + 0x10c) - iVar3) < uVar2) {
        FUN_1447403be(param_1 + 0x20);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x144) = uVar5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)(*(int *)(lVar4 + 0xc0) != 0) * 2;
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    lVar4 = FUN_1473b61a6(param_2);
    uVar2 = *(uint *)(lVar4 + 0xec);
    uVar5 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x25);
      *(uint *)(param_1 + 0x25) = iVar3 + uVar2;
      uVar5 = 1;
      if ((uint)(*(int *)((longlong)param_1 + 300) - iVar3) < uVar2) {
        FUN_1447403be(param_1 + 0x24);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x14c) = uVar5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)(*(int *)(lVar4 + 0xc0) != 0) << 3
    ;
  }
  if (*(longlong *)(param_3 + 0x40) != 0) {
    lVar4 = FUN_1473b6274(param_2);
    uVar2 = *(uint *)(lVar4 + 0xec);
    uVar5 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x27);
      *(uint *)(param_1 + 0x27) = iVar3 + uVar2;
      uVar5 = 1;
      if ((uint)(*(int *)((longlong)param_1 + 0x13c) - iVar3) < uVar2) {
        FUN_1447403be(param_1 + 0x26);
      }
    }
    *(undefined4 *)(param_1 + 0x2a) = uVar5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)(*(int *)(lVar4 + 0xc0) != 0) << 4
    ;
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    lVar4 = FUN_1473b6342(param_2);
    uVar2 = *(uint *)(lVar4 + 0xec);
    uVar5 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x23);
      *(uint *)(param_1 + 0x23) = iVar3 + uVar2;
      uVar5 = 1;
      if ((uint)(*(int *)((longlong)param_1 + 0x11c) - iVar3) < uVar2) {
        FUN_1447403be(param_1 + 0x22);
      }
    }
    *(undefined4 *)(param_1 + 0x29) = uVar5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)(*(int *)(lVar4 + 0xc0) != 0) << 2
    ;
  }
  FUN_1473b595a(param_1);
  LOCK();
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1431a1d9f FUN_1431a1d9f body=69 status=ok
// SIG undefined FUN_1431a1d9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1d9f(void)

{
  _DAT_14ca78398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca783a0,1);
  return;
}



// FUNCTION 1431a1de4 FUN_1431a1de4 body=69 status=ok
// SIG undefined FUN_1431a1de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1de4(void)

{
  _DAT_14ca783b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca783b8,1);
  return;
}



// FUNCTION 1431a1e29 FUN_1431a1e29 body=69 status=ok
// SIG undefined FUN_1431a1e29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1e29(void)

{
  _DAT_14ca783c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca783d0,1);
  return;
}



// FUNCTION 1431a1e6e FUN_1431a1e6e body=69 status=ok
// SIG undefined FUN_1431a1e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1e6e(void)

{
  _DAT_14ca783e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca783e8,1);
  return;
}



// FUNCTION 1431a1eb3 FUN_1431a1eb3 body=69 status=ok
// SIG undefined FUN_1431a1eb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1eb3(void)

{
  _DAT_14ca783f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78400,1);
  return;
}



// FUNCTION 1431a1ef8 FUN_1431a1ef8 body=69 status=ok
// SIG undefined FUN_1431a1ef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1ef8(void)

{
  _DAT_14ca78410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78418,1);
  return;
}



// FUNCTION 1431a1f3d FUN_1431a1f3d body=69 status=ok
// SIG undefined FUN_1431a1f3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1f3d(void)

{
  _DAT_14ca78428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78430,1);
  return;
}



// FUNCTION 1431a1f82 FUN_1431a1f82 body=69 status=ok
// SIG undefined FUN_1431a1f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1f82(void)

{
  _DAT_14ca78440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a1fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78448,1);
  return;
}



// FUNCTION 1431a1fc7 FUN_1431a1fc7 body=69 status=ok
// SIG undefined FUN_1431a1fc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a1fc7(void)

{
  _DAT_14ca78458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a2009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78460,1);
  return;
}



// FUNCTION 1431a200c FUN_1431a200c body=69 status=ok
// SIG undefined FUN_1431a200c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a200c(void)

{
  _DAT_14ca78468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a204e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78470,1);
  return;
}



// FUNCTION 1431a2051 FUN_1431a2051 body=69 status=ok
// SIG undefined FUN_1431a2051(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a2051(void)

{
  _DAT_14ca78480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a2093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78488,1);
  return;
}



// FUNCTION 1431a2096 FUN_1431a2096 body=69 status=ok
// SIG undefined FUN_1431a2096(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a2096(void)

{
  _DAT_14ca78498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a20d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca784a0,1);
  return;
}



// FUNCTION 1431a20dc FUN_1431a20dc body=244 status=ok
// SIG undefined FUN_1431a20dc(void)

void FUN_1431a20dc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a3601a8;
  param_1[5] = &PTR_FUN_14a3601b0;
  FUN_1473a4bda(param_1[2],param_1);
  param_1[5] = &PTR_FUN_14a1e4950;
  lVar4 = param_1[7];
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
  param_1[5] = &PTR_FUN_14a37f858;
  *param_1 = &PTR_FUN_14a3601a0;
  if (param_1[3] != 0) {
    FUN_1473a8b5a(param_1[2] + 0x590,5);
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1431a21d0 FUN_1431a21d0 body=348 status=ok
// SIG undefined FUN_1431a21d0(void)

void FUN_1431a21d0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14a3601c0;
  plVar3 = *(longlong **)(param_1[100] + 0x25e8);
  if ((*(longlong *)(*plVar3 + 0x20c8) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(*plVar3 + 0x20c8) + 0x170), lVar6 != 0)) {
    FUN_1473a9692(lVar6 + 0x98,param_1);
  }
  cVar2 = *(char *)((longlong)param_1 + 0x19);
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0x3d));
  plVar1 = plVar3 + 0x42;
  iVar4 = FUN_1473cb39c(plVar1,*(undefined4 *)(param_1 + 0x98),param_1 + 0x98);
  if (cVar2 == '\x01') {
    if (iVar4 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar4 * 0x28 + *plVar1;
    }
    puVar5 = (undefined8 *)(lVar6 + 0x18);
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
    if ((char)plVar3[0x61] == '\x01') {
      FUN_1431a4f08(plVar3);
    }
    else {
      FUN_1473b5296(*puVar5,CONCAT71((int7)((ulonglong)*puVar5 >> 8),1));
    }
    FUN_1473cb426(plVar1,param_1 + 0x98);
  }
  else {
    FUN_1473b5296(param_1,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0x3d));
  lVar6 = 0x8f;
  do {
    if ((longlong *)param_1[lVar6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[lVar6] + 0x10))();
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x94);
  plVar3 = (longlong *)param_1[0x9a];
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  FUN_1473b1c60(param_1 + 0x65);
  FUN_1473db02c(param_1 + 0xb);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1431a232c FUN_1431a232c body=503 status=ok
// SIG undefined FUN_1431a232c(void)

void FUN_1431a232c(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  iVar1 = *(int *)(param_1 + 0x238);
  if (iVar1 == 0) {
    uVar10 = 1;
    uVar15 = 0;
    iVar9 = 0;
    iVar12 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x230);
    if (*(uint **)(param_1 + 0x230) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x220);
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar5 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar5 = uVar15;
      }
      iVar9 = 0;
      do {
        if (uVar5 == uVar15) goto LAB_1431a23e6;
        iVar9 = iVar9 + 0x20;
        uVar4 = puVar3[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar4 & uVar4);
    uVar5 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar12) {
      iVar12 = iVar1;
    }
  }
  if (iVar12 != iVar1) {
    uVar4 = 0xffffffff;
    iVar8 = 0;
    do {
      FUN_145d03cb4(L"Leaked PSO %05d: RefCount=%d Handle=0x%p\n",iVar8,
                    *(uint *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x210) + 0x18 + (longlong)iVar12 * 0x28) + 8
                             ) & 0x3fffffff);
      uVar4 = ~(uint)uVar10 & uVar4;
      puVar3 = *(uint **)(param_1 + 0x230);
      if (*(uint **)(param_1 + 0x230) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x220);
      }
      iVar2 = *(int *)(param_1 + 0x238);
      iVar12 = (int)uVar15;
      lVar13 = (longlong)iVar12;
      uVar11 = puVar3[lVar13] & uVar4;
      if (uVar11 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar12 < iVar6) {
          lVar14 = 0;
          do {
            uVar11 = puVar3[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar12 + (int)lVar14 + 1);
              uVar4 = 0xffffffff;
              goto LAB_1431a24cd;
            }
            iVar9 = iVar9 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar13 != lVar14);
          uVar4 = 0xffffffff;
          iVar12 = iVar7;
        }
        uVar15 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar2;
      }
      else {
LAB_1431a24cd:
        uVar10 = (ulonglong)(-uVar11 & uVar11);
        uVar5 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar12 != iVar1);
  }
LAB_1431a23e6:
  FUN_1473ca782(param_1 + 0x2b8);
  FUN_1473ca90a(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0001431a2413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return;
}



// FUNCTION 1431a2524 FUN_1431a2524 body=1792 status=ok
// SIG undefined FUN_1431a2524(void)

byte FUN_1431a2524(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  longlong *local_190;
  undefined8 *local_188;
  PSRWLOCK local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 uStack_168;
  LARGE_INTEGER local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  byte local_138;
  byte local_136;
  longlong *local_108;
  longlong local_e8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  LARGE_INTEGER local_98 [2];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong lStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = (PSRWLOCK)(param_3 + 1);
  local_198 = param_1;
  local_190 = param_3;
  AcquireSRWLockExclusive(local_180);
  lVar11 = param_2[1];
  if ((longlong)(int)lVar11 == 0) {
    bVar10 = 0;
  }
  else {
    lVar15 = *param_2;
    lVar14 = 0;
    bVar10 = 0;
    do {
      QueryPerformanceCounter(&local_160);
      local_88 = (void *)0x0;
      local_80 = *(int *)(lVar15 + 8 + lVar14);
      lVar12 = (longlong)local_80;
      pvVar1 = *(void **)(lVar15 + lVar14);
      if (lVar12 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,pvVar1,lVar12 * 2);
      }
      FUN_1473a4fa8(&local_178,*local_198,&local_88);
      local_78 = 0;
      lStack_70 = 0;
      puVar9 = &DAT_149dfb77a;
      if ((int)local_170 != 0) {
        puVar9 = local_178;
      }
      cVar3 = FUN_14158b496(&local_78,puVar9);
      if (cVar3 != '\0') {
        puVar13 = (undefined8 *)*local_198;
        cVar3 = FUN_1473a4f5e(puVar13,&local_78);
        if (cVar3 != '\0') {
          local_160.s.LowPart = 0x11;
          local_160.s.HighPart = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          local_14c = 0;
          iStack_148 = (int)lStack_70;
          iStack_144 = (int)lStack_70 >> 0x1f;
          uStack_140 = (undefined4)local_78;
          uStack_13c = (undefined4)((ulonglong)local_78 >> 0x20);
          if (*local_190 == 0) {
            iVar5 = (*DAT_14ca79210)(*puVar13,&local_160);
            if (iVar5 != 0) {
              FUN_1431b4552(iVar5,
                            "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                            ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x167);
            }
          }
          else {
            iVar5 = (*DAT_14ca79210)(*puVar13,&local_160,0,local_98);
            if (iVar5 != 0) {
              FUN_1431b4552(iVar5,
                            "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &TempPipelineCache)"
                            ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x16e);
            }
            iVar5 = (*DAT_14ca79218)(*(undefined8 *)*local_198,*local_190,1,local_98);
            if (iVar5 != 0) {
              FUN_1431b4552(iVar5,
                            "VulkanRHI::vkMergePipelineCaches(Device->GetInstanceHandle(), PipelineCacheExclusive.Get(), 1, &TempPipelineCache)"
                            ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x16f);
            }
            (*DAT_14ca79208)(*(undefined8 *)*local_198,local_98[0].QuadPart);
          }
          QueryPerformanceCounter(local_98);
          bVar10 = 1;
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_178 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)(int)lVar11 * 0x10 != lVar14);
  }
  lVar11 = DAT_14ca783d8;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar8 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar8 = 1;
  }
  if ((*(int *)(lVar11 + uVar8 * 4) != 0) && ((longlong)(int)param_2[1] != 0)) {
    puVar13 = (undefined8 *)*param_2;
    puVar16 = puVar13 + (longlong)(int)param_2[1] * 2;
    local_188 = local_198 + 0x57;
    do {
      QueryPerformanceCounter(&local_160);
      local_a8 = (void *)0x0;
      local_a0 = *(int *)(puVar13 + 1);
      lVar11 = (longlong)local_a0;
      pvVar1 = (void *)*puVar13;
      if (lVar11 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar1,lVar11 * 2);
      }
      FUN_1473a4fa8(local_98,*local_198,&local_a8);
      FUN_1400020e8(local_98,L".lru",4);
      FUN_1448097c4(local_98,L"TempScanVulkanPSO_",L"VulkanPSO_",1);
      local_b8[0] = 0;
      local_b8[1] = 0;
      cVar3 = FUN_14158b496(local_b8);
      if (cVar3 == '\0') {
        bVar10 = 0;
      }
      else {
        memset(&local_160,0,0x90);
        FUN_144869430(&local_160);
        local_d0 = 0;
        local_160.s.LowPart = 0x49e1e050;
        local_160.s.HighPart = 1;
        local_c0 = 0x7fffffffffffffff;
        local_138 = local_138 | 1;
        local_c8 = local_b8;
        FUN_1449c2eca(&local_160,0);
        local_178 = (undefined2 *)0xffffffffffffffff;
        local_170 = 0;
        uStack_168 = 0;
        plVar2 = (longlong *)CONCAT44(uStack_154,uStack_158);
        if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
          if ((local_136 & 2) == 0) {
            (**(code **)(CONCAT44(local_160.s.HighPart,local_160.s.LowPart) + 0x170))
                      (&local_160,&local_178);
          }
          else {
            FUN_14572512c(&local_160,&local_178);
          }
        }
        else {
          local_178 = (undefined2 *)CONCAT44(0xffffffff,*(undefined4 *)*plVar2);
          *plVar2 = *plVar2 + 4;
        }
        if ((int)local_178 == 2) {
          plVar2 = (longlong *)CONCAT44(uStack_154,uStack_158);
          if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
            if ((local_136 & 2) == 0) {
              (**(code **)(CONCAT44(local_160.s.HighPart,local_160.s.LowPart) + 0x170))
                        (&local_160,(longlong)&local_178 + 4);
            }
            else {
              FUN_14572512c(&local_160,(longlong)&local_178 + 4);
            }
          }
          else {
            local_178 = (undefined2 *)CONCAT44(*(undefined4 *)*plVar2,2);
            *plVar2 = *plVar2 + 4;
          }
          if (local_178._4_4_ != 0x10) goto LAB_1431a2a4a;
          bVar4 = FUN_1431a5f02(&local_160,&local_170);
        }
        else {
LAB_1431a2a4a:
          bVar4 = 0;
        }
        if (0 < (int)uStack_168) {
          lVar11 = 0;
          lVar15 = 0;
          do {
            local_78 = local_170 + lVar11;
            lStack_70 = local_78;
            FUN_1473c896c(local_188,local_64);
            lVar15 = lVar15 + 1;
            lVar11 = lVar11 + 0x10;
          } while (lVar15 < (int)uStack_168);
        }
        if (local_170 != 0) {
          FUN_1400020a8();
        }
        plVar2 = local_108;
        local_160.s.LowPart = 0x49e35f70;
        local_160.s.HighPart = 1;
        if (local_108 != (longlong *)0x0) {
          if (*local_108 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar2);
        }
        lVar11 = local_e8;
        if (local_e8 != 0) {
          if (*(longlong *)(local_e8 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar11);
        }
        bVar10 = bVar10 & bVar4;
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98[0].QuadPart != 0) {
        FUN_1400020a8();
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar16);
  }
  if (*local_190 == 0) {
    local_160.s.LowPart = 0x11;
    local_160.s.HighPart = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    local_14c = 0;
    iStack_148 = 0;
    iStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    iVar5 = (*DAT_14ca79210)(*(undefined8 *)*local_198,&local_160,0);
    if (iVar5 != 0) {
      FUN_1431b4552(iVar5,
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x1ac);
    }
  }
  ReleaseSRWLockExclusive(local_180);
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a2c26 FUN_1431a2c26 body=740 status=ok
// SIG undefined FUN_1431a2c26(void)

void FUN_1431a2c26(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  lVar1 = DAT_14ca78438;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar12 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar10 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar10 = 1;
  }
  lVar2 = DAT_14ca78450;
  if (*(int *)(lVar1 + uVar10 * 4) != 0) {
    iVar4 = *(int *)(lVar12 + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar10 = 0;
    }
    else if (iVar4 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar2 + uVar10 * 4) == 0) {
      FUN_1431a2524(param_1,param_2,param_1 + 0x13);
    }
    else {
      puVar7 = (undefined8 *)FUN_14047ac8c();
      iStack_50 = *(int *)(puVar7 + 1);
      lVar12 = (longlong)iStack_50;
      local_58 = 0;
      uStack_54 = 0;
      _Src = (void *)*puVar7;
      FUN_1446dd670(&local_58,(uint)(lVar12 == 0) + iStack_50 + 0x19,0);
      if (lVar12 != 0) {
        memcpy((void *)CONCAT44(uStack_54,local_58),_Src,lVar12 * 2);
      }
      FUN_1401aebe8(&local_58,L"VulkanProgramBinaryCache",0x18);
      if (param_1 + 2 == (undefined8 *)&local_58) {
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[2] != 0) {
          FUN_1400020a8();
        }
        param_1[2] = CONCAT44(uStack_54,local_58);
        local_58 = 0;
        uStack_54 = 0;
        *(int *)(param_1 + 3) = iStack_50;
        *(undefined4 *)((longlong)param_1 + 0x1c) = (undefined4)uStack_4c;
      }
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_14054d46e(&DAT_14c846b20,L"ClearVulkanBinaryProgramCache");
      if (cVar3 != '\0') {
        plVar8 = (longlong *)FUN_1400dbadc();
        plVar9 = (longlong *)*plVar8;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)FUN_140e92164();
          *plVar8 = (longlong)plVar9;
        }
        if (*(int *)(param_1 + 3) == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)param_1[2];
        }
        (**(code **)(*plVar9 + 0x1d0))(plVar9,puVar11);
      }
      FUN_1473b254e(&local_58,param_1);
      param_1[6] = CONCAT44(uStack_54,local_58);
      FUN_1473b262e(&local_58,param_1);
      param_1[7] = CONCAT44(uStack_54,local_58);
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  if (param_1[0x13] == 0) {
    local_58 = 0x11;
    uStack_54 = 0;
    iStack_50 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    local_34 = 0;
    iVar4 = (*DAT_14ca79210)(*(undefined8 *)*param_1,&local_58,0,param_1 + 0x13);
    if (iVar4 != 0) {
      FUN_1431b4552(iVar4,
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x1de);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a2f0c FUN_1431a2f0c body=1853 status=ok
// SIG undefined FUN_1431a2f0c(void)

void FUN_1431a2f0c(longlong *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined4 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  void *local_88;
  int local_80;
  longlong local_78 [3];
  undefined2 *local_60;
  undefined8 uStack_58;
  void *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = FUN_1447addd0(in_stack_00000028,0x10);
  iVar8 = FUN_140f5cb3a(param_1 + 0x1a,uVar7,in_stack_00000028);
  if (iVar8 != -1) goto LAB_1431a34fa;
  uVar7 = in_stack_00000028[1];
  uVar2 = in_stack_00000028[2];
  uVar3 = in_stack_00000028[3];
  *(undefined4 *)((longlong)param_1 + 0xbc) = *in_stack_00000028;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  plVar11 = (longlong *)FUN_1400dbadc();
  plVar13 = (longlong *)*plVar11;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)FUN_140e92164();
    *plVar11 = (longlong)plVar13;
  }
  FUN_140002266(&local_50,L".%x.%x",*(undefined4 *)(*param_1 + 0xaf8),
                *(undefined4 *)(*param_1 + 0xafc));
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_1407c869a(in_stack_00000028,local_78,0);
  local_80 = (int)param_1[3];
  lVar18 = (longlong)local_80;
  local_88 = (void *)0x0;
  pvVar1 = (void *)param_1[2];
  FUN_1446dd670(&local_88,(uint)(lVar18 == 0) + local_80 + 0xb,0);
  if (lVar18 != 0) {
    memcpy(local_88,pvVar1,lVar18 * 2);
  }
  FUN_1401aebe8(&local_88,L"VulkanPSO_",10);
  FUN_1401c7f3e(&local_60,&local_88,local_78);
  pvVar1 = local_50;
  uStack_b0 = (uint)uStack_58;
  if ((int)(uint)uStack_58 < 2) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = local_48;
    lVar18 = (longlong)(int)local_48;
    if (lVar18 == 0) {
      iStack_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_48,0);
      memcpy((void *)CONCAT44(uStack_b4,local_b8),pvVar1,lVar18 * 2);
    }
  }
  else {
    iVar8 = local_48 - 1;
    if (local_48 == 0) {
      iVar8 = 0;
    }
    local_b8 = SUB84(local_60,0);
    uStack_b4 = (undefined4)((ulonglong)local_60 >> 0x20);
    iStack_ac = uStack_58._4_4_;
    local_60 = (undefined2 *)0x0;
    uStack_58 = 0;
    if ((int)(iVar8 + uStack_b0) < (int)uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar8);
    }
    if (iStack_ac < (int)(iVar8 + uStack_b0)) {
      FUN_1446f8c06(&local_b8);
    }
    FUN_1400020e8(&local_b8,local_50,iVar8);
  }
  plVar11 = param_1 + 4;
  if (plVar11 == (longlong *)&local_b8) {
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = CONCAT44(uStack_b4,local_b8);
    local_b8 = 0;
    uStack_b4 = 0;
    *(uint *)(param_1 + 5) = uStack_b0;
    *(int *)((longlong)param_1 + 0x2c) = iStack_ac;
    uStack_b0 = 0;
    iStack_ac = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_1407c869a(in_stack_00000028,local_78,0);
  local_80 = (int)param_1[3];
  lVar18 = (longlong)local_80;
  local_88 = (void *)0x0;
  pvVar1 = (void *)param_1[2];
  FUN_1446dd670(&local_88,(uint)(lVar18 == 0) + local_80 + 0x13,0);
  if (lVar18 != 0) {
    memcpy(local_88,pvVar1,lVar18 * 2);
  }
  FUN_1401aebe8(&local_88,L"TempScanVulkanPSO_",0x12);
  FUN_1401c7f3e(&local_b8,&local_88,local_78);
  pvVar1 = local_50;
  iVar8 = iStack_ac;
  uVar5 = uStack_b0;
  if ((int)uStack_b0 < 2) {
    local_60 = (undefined2 *)0x0;
    uStack_58 = CONCAT44(uStack_58._4_4_,local_48);
    if ((longlong)(int)local_48 == 0) {
      uStack_58 = (ulonglong)local_48;
    }
    else {
      FUN_1446dd670(&local_60,local_48,0);
      memcpy(local_60,pvVar1,(longlong)(int)local_48 * 2);
    }
  }
  else {
    iVar15 = local_48 - 1;
    if (local_48 == 0) {
      iVar15 = 0;
    }
    local_60 = (undefined2 *)CONCAT44(uStack_b4,local_b8);
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    iStack_ac = 0;
    uStack_58 = CONCAT44(iVar8,uVar5);
    if ((int)(iVar15 + uVar5) < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar15);
    }
    if (iVar8 < (int)(iVar15 + uVar5)) {
      FUN_1446f8c06(&local_60);
    }
    FUN_1400020e8(&local_60,local_50,iVar15);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
  local_b8 = 0x11;
  uStack_b4 = 0;
  uStack_b0 = 0;
  iStack_ac = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  iVar8 = (*DAT_14ca79210)(*(undefined8 *)*param_1,&local_b8,0,param_1 + 0x15);
  if (iVar8 != 0) {
    FUN_1431b4552(iVar8,
                  "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                  ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x212);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
  if ((int)param_1[5] == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  else {
    puVar16 = (undefined2 *)*plVar11;
  }
  cVar6 = (**(code **)(*plVar13 + 0x78))(plVar13,puVar16);
  if (cVar6 != '\0') {
    puVar16 = &DAT_149dfb77a;
    if ((uint)uStack_58 != 0) {
      puVar16 = local_60;
    }
    (**(code **)(*plVar13 + 0x88))(plVar13,puVar16);
    puVar16 = &DAT_149dfb77a;
    if ((int)param_1[5] != 0) {
      puVar16 = (undefined2 *)*plVar11;
    }
    puVar17 = &DAT_149dfb77a;
    if ((uint)uStack_58 != 0) {
      puVar17 = local_60;
    }
    (**(code **)(*plVar13 + 0xa0))(plVar13,puVar17,puVar16);
    local_b8 = 0;
    uStack_b4 = 0;
    iStack_ac = 0;
    uStack_b0 = 1;
    FUN_1447a1bd6(&local_b8,0);
    puVar16 = local_60;
    puVar4 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    *puVar4 = 0;
    lVar18 = (longlong)(int)(uint)uStack_58;
    *(uint *)(puVar4 + 1) = (uint)uStack_58;
    if (lVar18 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar4,uStack_58 & 0xffffffff,0);
      memcpy((void *)*puVar4,puVar16,lVar18 * 2);
    }
    cVar6 = FUN_1431a2524(param_1,&local_b8,param_1 + 0x15);
    if (cVar6 == '\0') {
      plVar12 = (longlong *)FUN_1400dbadc();
      plVar13 = (longlong *)*plVar12;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)FUN_140e92164();
        *plVar12 = (longlong)plVar13;
      }
      if ((int)param_1[5] == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      else {
        puVar16 = (undefined2 *)*plVar11;
      }
      (**(code **)(*plVar13 + 0x88))(plVar13,puVar16);
    }
    else {
      *(undefined1 *)(param_1 + 0x17) = 1;
      puVar16 = &DAT_149dfb77a;
      puVar17 = &DAT_149dfb77a;
      if ((uint)uStack_58 != 0) {
        puVar17 = local_60;
      }
      if ((int)param_1[5] != 0) {
        puVar16 = (undefined2 *)*plVar11;
      }
      (**(code **)(*plVar13 + 0xa0))(plVar13,puVar16,puVar17);
      lVar18 = DAT_14ca783f0;
      iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar14 = 0;
      }
      else if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar14 = 1;
      }
      if (*(int *)(lVar18 + uVar14 * 4) != 0) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
    }
    FUN_1447a1747(CONCAT44(uStack_b4,local_b8),uStack_b0);
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
  }
  lVar18 = DAT_14ca783c0;
  if ((char)param_1[0x17] == '\x01') {
    if ((char)param_1[1] == '\x01') {
      iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar14 = 0;
      }
      else if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar14 = 1;
      }
      if (*(int *)(lVar18 + uVar14 * 4) != 0) goto LAB_1431a34ce;
    }
  }
  else {
LAB_1431a34ce:
    *in_stack_00000030 = 1;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1431a34fa:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a364a FUN_1431a364a body=332 status=ok
// SIG undefined FUN_1431a364a(void)

void FUN_1431a364a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*(char *)(param_1 + 0x17) == '\0') {
    FUN_1431a3798(param_1,param_1 + 4,param_1 + 0x15);
  }
  puVar1 = (undefined8 *)((longlong)param_1 + 0xbc);
  uVar2 = FUN_1447addd0(puVar1,0x10);
  iVar3 = FUN_140f5cb3a(param_1 + 0x1a,uVar2,puVar1);
  if (iVar3 == -1) {
    FUN_1457adc9c(param_1 + 0x1a,local_3c,puVar1,0);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
    iVar3 = (*DAT_14ca79218)(*(undefined8 *)*param_1,param_1[0x13],1,param_1 + 0x15);
    if (iVar3 != 0) {
      FUN_1431b4552(iVar3,
                    "VulkanRHI::vkMergePipelineCaches(Device->GetInstanceHandle(), GlobalPipelineCacheExclusive.Get(), 1, &CurrentPipelineCacheExclusive.Get())"
                    ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x25c);
    }
    (*DAT_14ca79208)(*(undefined8 *)*param_1,param_1[0x15],0);
    param_1[0x15] = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *puVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a3798 FUN_1431a3798 body=1268 status=ok
// SIG undefined FUN_1431a3798(void)

void FUN_1431a3798(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  undefined2 *local_168;
  int local_160;
  longlong local_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  byte local_118;
  longlong *local_e8;
  longlong local_c8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 1));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  local_68 = 0;
  iVar2 = (*DAT_14ca79220)(*(undefined8 *)*param_1,*param_3,&local_68,0);
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2,
                  "VulkanRHI::vkGetPipelineCacheData(Device->GetInstanceHandle(), PipelineCacheExclusive.Get(), &Size, nullptr)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x26f);
  }
  if (local_68 < 0x20) goto LAB_1431a3929;
  local_158 = 0;
  uStack_150 = local_68 & 0xffffffff;
  if ((int)local_68 != 0) {
    FUN_1447403be(&local_158,0);
  }
  iVar2 = (*DAT_14ca79220)(*(undefined8 *)*param_1,*param_3,&local_68,local_158);
  if ((iVar2 == -1) || (iVar2 == 5)) {
    (*DAT_14ca79208)(*(undefined8 *)*param_1,*param_3,0);
    local_140 = 0x11;
    uStack_13c = 0;
    iStack_138 = 0;
    uStack_134 = 0;
    local_12c = 0;
    uStack_124 = 0;
    local_11c = 0;
    iVar2 = (*DAT_14ca79210)(*(undefined8 *)*param_1,&local_140,0,param_3);
    if (iVar2 != 0) {
      pcVar6 = 
      "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
      ;
      uVar9 = 0x28b;
      goto LAB_1431a3915;
    }
  }
  else if (iVar2 == 0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_70;
    pvVar1 = (void *)*param_2;
    if (lVar10 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar10 * 2);
    }
    FUN_1473a4fa8(&local_140,*param_1,&local_78);
    uVar9 = FUN_14054d1d4();
    puVar7 = (undefined2 *)CONCAT44(uStack_13c,local_140);
    puVar8 = &DAT_149dfb77a;
    if (iStack_138 != 0) {
      puVar8 = puVar7;
    }
    local_88 = local_158;
    local_80 = (longlong)(int)uStack_150;
    FUN_146810d90(&local_88,puVar8,uVar9,0);
    if (puVar7 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar7);
    }
  }
  else {
    pcVar6 = "Result";
    uVar9 = 0x28f;
LAB_1431a3915:
    FUN_1431b4552(iVar2,pcVar6,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",uVar9);
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
LAB_1431a3929:
  lVar10 = DAT_14ca783d8;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar5 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  if (*(int *)(lVar10 + uVar5 * 4) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    memset(&local_140,0,0x90);
    FUN_144869430(&local_140);
    local_b0 = 0;
    local_140 = 0x49e1e590;
    uStack_13c = 1;
    local_a0 = 0;
    local_118 = local_118 | 4;
    local_a8 = &local_98;
    FUN_1449c2eca(&local_140,0);
    local_140 = 0x49e1e330;
    uStack_13c = 1;
    uStack_150 = 0;
    uStack_148 = 0;
    local_158 = 0x1000000002;
    FUN_1473b270e(param_1 + 0x57);
    FUN_1473b2862(&local_158,&local_140);
    local_178 = (void *)0x0;
    local_170 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_170;
    pvVar1 = (void *)*param_2;
    if (lVar10 == 0) {
      local_16c = 0;
    }
    else {
      FUN_1446dd670(&local_178,local_170,0);
      memcpy(local_178,pvVar1,lVar10 * 2);
    }
    FUN_1473a4fa8(&local_168,*param_1,&local_178);
    FUN_1400020e8(&local_168,L".lru",4);
    uVar9 = FUN_14054d1d4();
    puVar7 = local_168;
    if (local_160 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    local_188 = local_98;
    local_180 = (longlong)(int)uStack_90;
    FUN_146810d90(&local_188,puVar7,uVar9,0);
    if (local_168 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (uStack_150 != 0) {
      FUN_1400020a8();
    }
    local_140 = 0x49e35f70;
    uStack_13c = 1;
    if (local_e8 != (longlong *)0x0) {
      if (*local_e8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_e8);
    }
    if (local_c8 != 0) {
      if (*(longlong *)(local_c8 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_c8);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_3 + 1));
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431a3c8d FUN_1431a3c8d body=41 status=ok
// SIG undefined FUN_1431a3c8d(void)

void FUN_1431a3c8d(void)

{
  DAT_14ca784f8 = 0;
  if (DAT_14ca784f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62936();
  return;
}



// FUNCTION 1431a3cb6 FUN_1431a3cb6 body=4688 status=ok
// SIG undefined FUN_1431a3cb6(void)

bool FUN_1431a3cb6(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined *puVar19;
  undefined4 uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 local_a78 [32];
  undefined8 local_a58;
  longlong local_a50;
  longlong *local_a48;
  longlong local_a40 [2];
  undefined4 local_a30;
  undefined8 local_a2c;
  undefined8 uStack_a24;
  undefined4 local_a1c;
  undefined4 *local_a18;
  undefined4 local_a10;
  undefined8 local_a0c;
  undefined8 uStack_a04;
  ulonglong local_9fc;
  ulonglong uStack_9f4;
  ulonglong local_9ec;
  ulonglong uStack_9e4;
  uint local_9dc;
  undefined4 uStack_9d8;
  undefined8 uStack_9d4;
  ulonglong local_9cc;
  ulonglong uStack_9c4;
  undefined8 local_9bc;
  ulonglong uStack_9b4;
  undefined4 local_9ac;
  undefined4 local_9a8;
  undefined8 local_9a4;
  undefined8 uStack_99c;
  undefined8 local_994;
  ulonglong uStack_98c;
  ulonglong local_984;
  float local_97c;
  undefined4 local_978;
  undefined4 uStack_974;
  undefined8 uStack_970;
  undefined4 local_968;
  undefined8 local_964;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 local_954;
  undefined8 uStack_950;
  undefined4 local_948;
  undefined8 local_944;
  undefined8 uStack_93c;
  undefined4 local_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined1 *local_920;
  undefined4 local_918;
  undefined8 local_914;
  undefined8 uStack_90c;
  ulonglong local_904;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  ulonglong local_8f0;
  undefined4 local_8e8;
  undefined8 local_8e4;
  undefined8 uStack_8dc;
  undefined8 local_8d4;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined1 local_8b4 [4];
  undefined4 *local_8b0;
  byte local_8a5;
  uint local_8a4;
  undefined4 *local_8a0;
  undefined4 *local_898;
  undefined4 *local_890;
  undefined4 *local_880;
  undefined4 *local_878;
  undefined4 *local_870;
  undefined4 *local_868;
  undefined4 *local_860;
  undefined4 *local_858;
  undefined8 local_850;
  undefined8 local_848;
  uint local_840;
  longlong local_828 [3];
  undefined8 local_810;
  longlong local_808;
  undefined1 local_7fc [4];
  undefined4 local_7f8;
  undefined8 local_7f4;
  undefined4 local_7ec;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined4 local_7b8;
  undefined1 local_7a8 [512];
  undefined1 *local_5a8;
  undefined8 local_5a0;
  undefined1 local_598 [384];
  undefined1 *local_418;
  undefined8 local_410;
  undefined4 uStack_408;
  undefined8 uStack_404;
  uint auStack_3f8 [28];
  undefined1 auStack_388 [128];
  undefined4 local_308 [2];
  undefined8 uStack_300;
  uint uStack_2f4;
  undefined8 auStack_2f0 [27];
  uint local_218 [66];
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  longlong local_d8 [6];
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong *local_80;
  undefined4 *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_a78;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[4] = 0;
  FUN_1473b1cc4(param_2);
  local_8b8 = 0x1c;
  memset(local_8b4,0,0x8c);
  lVar21 = *(longlong *)(param_2 + 0x318);
  if (*(char *)(lVar21 + 0x11) == '\x01') {
    puVar11 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar21 + 8) + 0x6b0) + 0x4d0);
  }
  else {
    puVar11 = (undefined8 *)(lVar21 + 0x198);
  }
  local_850 = *puVar11;
  local_110 = 0x1a;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_dc = 0;
  uVar7 = *(uint *)(param_2 + 0x340);
  uStack_f4 = uVar7;
  memset(local_218,0,0x100);
  if (param_3[1] == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(param_3[1] + 0x54);
  }
  if (0 < (int)uVar7) {
    lVar21 = *(longlong *)(param_2 + 0x338);
    lVar18 = 0;
    do {
      local_218[lVar18] = (uint)*(byte *)(lVar21 + lVar18);
      local_218[lVar18 + 3] = (uint)*(byte *)(lVar21 + 1 + lVar18);
      local_218[lVar18 + 1] = (uint)*(byte *)(lVar21 + 2 + lVar18);
      local_218[lVar18 + 2] = (uint)*(byte *)(lVar21 + 3 + lVar18);
      local_218[lVar18 + 6] = (uint)*(byte *)(lVar21 + 4 + lVar18);
      local_218[lVar18 + 4] = (uint)*(byte *)(lVar21 + 5 + lVar18);
      local_218[lVar18 + 5] = (uint)*(byte *)(lVar21 + 6 + lVar18);
      local_218[lVar18 + 7] = -(uVar6 & 1) & (uint)*(byte *)(lVar21 + 7 + lVar18);
      uVar6 = uVar6 >> 1;
      lVar18 = lVar18 + 8;
    } while ((ulonglong)uVar7 << 3 != lVar18);
  }
  uStack_e8 = 0x3f800000;
  uStack_e4 = 0x3f800000;
  uStack_e0 = 0x3f800000;
  local_dc = 0x3f800000;
  local_8e8 = 0x16;
  uStack_8cc = 0;
  uStack_8c4 = 0;
  uStack_8c0 = 0;
  local_8e4 = 0;
  uStack_8dc = 0;
  local_8d4 = 1;
  uStack_8c8 = 1;
  local_918 = 0x18;
  local_914 = 0;
  uStack_90c = 0;
  uStack_8fc = 0;
  uStack_8f8 = 0;
  uStack_8f4 = 0;
  local_904 = (ulonglong)(*(int *)(param_2 + 0x32c) + (uint)((short)*(int *)(param_2 + 0x32c) == 0))
              & 0xffffffff0000ffff;
  local_8f0 = (ulonglong)*(byte *)(param_2 + 0x471);
  lVar21 = 0;
  uStack_f0 = local_218;
  memset(local_308,0,0xf0);
  local_8a4 = 0;
  uVar7 = 0;
  local_8a0 = local_308;
  do {
    lVar18 = *(longlong *)((longlong)local_d8 + lVar21 * 2);
    if ((lVar18 != 0) && (lVar4 = *(longlong *)((longlong)param_3 + lVar21 * 2), lVar4 != 0)) {
      uVar12 = (ulonglong)uVar7;
      local_308[uVar12 * 0xc] = 0x12;
      uVar7 = *(uint *)((longlong)&DAT_14a36994c + lVar21);
      (&uStack_2f4)[uVar12 * 0xc] = uVar7;
      auStack_2f0[uVar12 * 6] = *(undefined8 *)(lVar18 + 0x10);
      iVar8 = *(int *)(lVar4 + 0xf8);
      if (iVar8 < 0) {
        iVar8 = *(int *)(lVar4 + 0xf0);
      }
      local_a58 = CONCAT44(local_a58._4_4_,*(undefined4 *)(lVar4 + 0x74));
      FUN_1407bf796(auStack_388 + uVar12 * 0x18,0x18,"main_%0.8x_%0.8x",iVar8);
      uVar12 = (ulonglong)local_8a4;
      auStack_2f0[uVar12 * 6 + 1] = auStack_388 + uVar12 * 0x18;
      lVar18 = *param_1;
      if ((*(byte *)(lVar18 + 0x20fd) & 8) != 0) {
        lVar4 = *(longlong *)((longlong)param_3 + lVar21 * 2);
        bVar3 = *(byte *)(lVar4 + 0x78);
        if ((((bVar3 != 0) && ((*(uint *)(lVar18 + 0x2434) & uVar7) != 0)) &&
            (*(uint *)(lVar18 + 0x2428) <= (uint)bVar3)) &&
           ((uint)bVar3 <= *(uint *)(lVar18 + 0x242c))) {
          (&uStack_408)[uVar12 * 6] = 0x3b9e38e9;
          (&uStack_404)[uVar12 * 3] = 0;
          *(undefined8 *)(&stack0xfffffffffffffc04 + uVar12 * 0x18) = 0;
          auStack_3f8[uVar12 * 6 + 1] = 0;
          auStack_3f8[uVar12 * 6] = (uint)*(byte *)(lVar4 + 0x78);
          (&uStack_300)[uVar12 * 6] = &uStack_408 + uVar12 * 6;
        }
      }
      uVar7 = local_8a4 + 1;
      local_8a4 = uVar7;
    }
    lVar21 = lVar21 + 4;
  } while (lVar21 != 0x14);
  local_948 = 0x13;
  local_944 = 0;
  uStack_93c = 0;
  local_934 = 0;
  uStack_930 = 0;
  uStack_92c = 0;
  uStack_928 = 0;
  uStack_924 = 0;
  local_920 = (undefined1 *)0x0;
  local_418 = (undefined1 *)0x0;
  local_410 = 0x2000000000;
  iVar8 = *(int *)(param_2 + 0x360);
  uVar20 = 0;
  if ((longlong)iVar8 == 0) {
    local_410._0_4_ = 0;
  }
  else {
    lVar21 = *(longlong *)(param_2 + 0x358);
    lVar18 = 0;
    local_a48 = param_3;
    do {
      puVar13 = (uint *)FUN_1473b40de(local_598);
      *puVar13 = (uint)*(ushort *)(lVar21 + 4 + lVar18);
      puVar13[2] = (uint)*(ushort *)(lVar21 + 6 + lVar18);
      puVar13[1] = *(uint *)(lVar21 + lVar18);
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar8 * 8 != lVar18);
    param_3 = local_a48;
  }
  puVar15 = local_598;
  if (local_418 != (undefined1 *)0x0) {
    puVar15 = local_418;
  }
  uStack_930 = SUB84(puVar15,0);
  uStack_92c = (undefined4)((ulonglong)puVar15 >> 0x20);
  local_5a8 = (undefined1 *)0x0;
  local_5a0 = 0x2000000000;
  iVar8 = *(int *)(param_2 + 0x370);
  local_934 = (undefined4)local_410;
  if ((longlong)iVar8 != 0) {
    lVar21 = *(longlong *)(param_2 + 0x368);
    lVar18 = 0;
    do {
      puVar14 = (undefined4 *)FUN_1473b4128(local_7a8);
      puVar14[1] = *(undefined4 *)(lVar21 + 4 + lVar18);
      puVar14[2] = *(undefined4 *)(lVar21 + 8 + lVar18);
      *puVar14 = *(undefined4 *)(lVar21 + lVar18);
      puVar14[3] = *(undefined4 *)(lVar21 + 0xc + lVar18);
      lVar18 = lVar18 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar18);
    uVar20 = (undefined4)local_5a0;
  }
  local_898 = &local_948;
  local_920 = local_7a8;
  if (local_5a8 != (undefined1 *)0x0) {
    local_920 = local_5a8;
  }
  local_860 = &local_110;
  local_870 = &local_918;
  local_880 = &local_8e8;
  local_848 = *(undefined8 *)(*(longlong *)(param_2 + 0x4a0) + 0x3a8);
  local_840 = (uint)*(byte *)(param_2 + 0x470);
  local_890 = &local_968;
  local_968 = 0x14;
  local_964 = 0;
  uStack_95c = 0;
  uStack_958 = 0;
  uStack_950 = 0;
  local_954 = *(undefined4 *)(param_2 + 0x330);
  local_878 = &local_9a8;
  local_9a8 = 0x17;
  local_9a4 = 0;
  uStack_99c = 0;
  local_994 = 0;
  local_978 = 0;
  uStack_970 = 0x3f800000;
  uStack_98c = (ulonglong)
               CONCAT14(*(undefined1 *)(param_2 + 0x379),(uint)*(byte *)(param_2 + 0x378));
  local_97c = *(float *)(param_2 + 0x380);
  local_984 = CONCAT44(-(uint)(local_97c != 0.0),1) & 0x1ffffffff;
  uStack_974 = *(undefined4 *)(param_2 + 0x37c);
  local_868 = &local_a10;
  local_a10 = 0x19;
  local_a0c = 0;
  uStack_a04 = 0;
  local_9ac = 0;
  local_9fc = (ulonglong)CONCAT14(*(undefined1 *)(param_2 + 0x386),(uint)*(byte *)(param_2 + 0x385))
  ;
  uStack_9f4 = (ulonglong)CONCAT14(*(undefined1 *)(param_2 + 0x388),(uint)*(byte *)(param_2 + 900));
  local_9ec = (ulonglong)CONCAT14(*(undefined1 *)(param_2 + 0x389),(uint)*(byte *)(param_2 + 0x387))
  ;
  uStack_9e4 = (ulonglong)
               CONCAT14(*(undefined1 *)(param_2 + 0x38b),(uint)*(byte *)(param_2 + 0x38a));
  _local_9dc = CONCAT44(*(undefined4 *)(param_2 + 0x390),(uint)*(byte *)(param_2 + 0x38c));
  uStack_9d4 = *(undefined8 *)(param_2 + 0x394);
  local_9cc = (ulonglong)CONCAT14(*(undefined1 *)(param_2 + 0x39d),(uint)*(byte *)(param_2 + 0x39c))
  ;
  uStack_9c4 = (ulonglong)
               CONCAT14(*(undefined1 *)(param_2 + 0x39f),(uint)*(byte *)(param_2 + 0x39e));
  local_9bc = *(undefined8 *)(param_2 + 0x3a0);
  uStack_9b4 = (ulonglong)*(uint *)(param_2 + 0x3a8);
  local_858 = &local_a30;
  local_a30 = 0x1b;
  local_a2c = 0;
  uStack_a24 = 0;
  local_a18 = &local_7d8;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_7b8 = 0;
  local_7d8 = 0;
  uStack_7d4 = 1;
  uStack_7d0 = 8;
  uStack_7cc = 5;
  local_a1c = 4;
  bVar22 = true;
  if ((ulonglong)*(byte *)(param_2 + 0x472) == 0) {
    bVar22 = *(char *)(*(longlong *)(param_2 + 0x4a0) + 0x37e) != '\0';
  }
  if (((DAT_14ca84f32 == '\x01') && (DAT_14ca84f48 == '\x01')) && (bVar22)) {
    local_7e8 = *(undefined8 *)(*param_1 + 0xe38 + (ulonglong)*(byte *)(param_2 + 0x472) * 8);
    if (DAT_14ca784b8 != DAT_14ca784e4) {
      puVar19 = &DAT_14ca784e8;
      if (DAT_14ca784f0 != (undefined *)0x0) {
        puVar19 = DAT_14ca784f0;
      }
      iVar8 = *(int *)(puVar19 +
                      (ulonglong)(DAT_14ca784f8 - 1U & (uint)*(byte *)(param_2 + 0x473)) * 4);
      while (iVar8 != -1) {
        lVar21 = DAT_14ca784b0 + (longlong)iVar8 * 0x10;
        if (*(byte *)(DAT_14ca784b0 + (longlong)iVar8 * 0x10) == *(byte *)(param_2 + 0x473))
        goto LAB_1431a44c3;
        iVar8 = *(int *)(lVar21 + 8);
      }
    }
    lVar21 = 0;
LAB_1431a44c3:
    local_7e0 = *(undefined4 *)(lVar21 + 4);
    local_8b0 = &local_7f8;
    local_7f8 = 0x3b9e3cd1;
    local_7f4 = 0;
    local_7ec = 0;
    local_7dc = 3;
  }
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    local_8a5 = local_8a5 | 0x20;
  }
  uStack_928 = uVar20;
  QueryPerformanceCounter(&local_a8);
  if (DAT_14ca77a98 == 0) {
    bVar22 = param_4 != '\0';
    uVar20 = 0;
    local_828[0] = 0;
    local_a40[0] = 0;
    local_a50 = param_2 + 0x50;
    if ((char)param_1[0x61] == '\x01') {
      lVar21 = *(longlong *)(param_2 + 0x3d8);
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x4c);
      local_a40[0] = lVar21;
      EnterCriticalSection(lpCriticalSection);
      plVar2 = param_1 + 0x57;
      if ((int)param_1[0x58] != *(int *)((longlong)param_1 + 0x2ec)) {
        plVar16 = param_1 + 0x5e;
        if ((longlong *)param_1[0x5f] != (longlong *)0x0) {
          plVar16 = (longlong *)param_1[0x5f];
        }
        iVar8 = *(int *)((longlong)plVar16 +
                        (ulonglong)
                        ((int)param_1[0x60] - 1U &
                        (int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17) * 4);
        if (iVar8 != -1) {
          do {
            lVar18 = *plVar2 + (longlong)iVar8 * 0x20;
            if (*(longlong *)(*plVar2 + (longlong)iVar8 * 0x20) == lVar21) {
              if ((lVar18 + 8U & 0xfffffffffffffff7) != 0) {
                uVar20 = *(undefined4 *)(lVar18 + 0x10);
                LeaveCriticalSection(lpCriticalSection);
                goto LAB_1431a489a;
              }
              break;
            }
            iVar8 = *(int *)(lVar18 + 0x18);
          } while (iVar8 != -1);
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      local_a8.s.LowPart = 0x11;
      local_a8.s.HighPart = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      local_84 = 0;
      uVar20 = 0;
      iVar8 = (*DAT_14ca79210)(*(undefined8 *)*param_1,&local_a8,0,local_828);
      if (iVar8 != 0) {
        FUN_1431b4552(iVar8,
                      "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &LocalPipelineCache)"
                      ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x644);
      }
      local_a58 = 0;
      iVar8 = (*DAT_14ca79228)(*(undefined8 *)*param_1,local_828[0],1,&local_8b8);
      if (local_828[0] != 0) {
        EnterCriticalSection(lpCriticalSection);
        if ((int)param_1[0x58] != *(int *)((longlong)param_1 + 0x2ec)) {
          plVar16 = param_1 + 0x5e;
          if ((longlong *)param_1[0x5f] != (longlong *)0x0) {
            plVar16 = (longlong *)param_1[0x5f];
          }
          iVar9 = *(int *)((longlong)plVar16 +
                          (ulonglong)
                          ((int)param_1[0x60] - 1U &
                          (int)local_a40[0] + (int)((ulonglong)local_a40[0] >> 0x20) * 0x17) * 4);
          if (iVar9 != -1) {
            do {
              lVar21 = *plVar2 + (longlong)iVar9 * 0x20;
              if (*(longlong *)(*plVar2 + (longlong)iVar9 * 0x20) == local_a40[0]) {
                if ((lVar21 != 0) && (lVar21 != -8)) {
                  uVar20 = *(undefined4 *)(lVar21 + 0x10);
                  goto LAB_1431a4813;
                }
                break;
              }
              iVar9 = *(int *)(lVar21 + 0x18);
            } while (iVar9 != -1);
          }
        }
        local_808 = 0;
        if (local_828[0] == 0) {
LAB_1431a47c4:
          local_808 = 0x5000;
        }
        else {
          (*DAT_14ca79220)(*(undefined8 *)*param_1,local_828[0],&local_808,0);
          if (local_808 == 0) goto LAB_1431a47c4;
        }
        local_a8.QuadPart = (LONGLONG)local_a40;
        uStack_a0 = local_828 + 2;
        local_828[2] = local_a40[0];
        local_810 = CONCAT44(local_810._4_4_,(int)local_808);
        FUN_1473c896c(plVar2,local_7fc);
        uVar20 = (undefined4)local_808;
LAB_1431a4813:
        LeaveCriticalSection(lpCriticalSection);
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + (ulonglong)bVar22 * 2 + 0x14));
        lVar21 = param_1[(ulonglong)bVar22 * 2 + 0x13];
        if (lVar21 != 0) {
          iVar9 = (*DAT_14ca79218)(*(undefined8 *)*param_1,lVar21,1,local_828);
          if (iVar9 != 0) {
            FUN_1431b4552(iVar9,
                          "VulkanRHI::vkMergePipelineCaches(Device->GetInstanceHandle(), PipelineCacheExclusive.Get(), 1, &LocalPipelineCache)"
                          ,".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x67d);
          }
        }
        (*DAT_14ca79208)(*(undefined8 *)*param_1,local_828[0],0);
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + (ulonglong)bVar22 * 2 + 0x14));
      }
    }
    else {
LAB_1431a489a:
      AcquireSRWLockShared((PSRWLOCK)(param_1 + (ulonglong)bVar22 * 2 + 0x14));
      local_a58 = 0;
      iVar8 = (*DAT_14ca79228)(*(undefined8 *)*param_1,param_1[(ulonglong)bVar22 * 2 + 0x13],1,
                               &local_8b8);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + (ulonglong)bVar22 * 2 + 0x14));
    }
    if (iVar8 != 0) {
      FUN_1431b4552(iVar8,"Result",".\\Runtime/VulkanRHI/Private/VulkanPipeline.cpp",0x682);
    }
    *(undefined4 *)(param_2 + 0x4b4) = uVar20;
  }
  else {
    *(undefined4 *)(param_2 + 0x4b4) = 0x5000;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_88 = 0x4a3696b0;
    local_84 = 1;
    local_78 = &local_8b8;
    local_a8.s.LowPart = 0x431b1b2c;
    local_a8.s.HighPart = 1;
    local_80 = param_1;
    iVar8 = FUN_14739897e(&DAT_14ca77b20,param_2,param_4 != '\0');
  }
  if (iVar8 == 0) {
    QueryPerformanceCounter(&local_a8);
  }
  else {
    FUN_1400b22c2(local_a40,&DAT_149e02088);
    if (*param_3 != 0) {
      local_828[0] = 0;
      local_828[1] = 0;
      FUN_1407c8a86(*param_3 + -0x18,0x14,local_828);
      FUN_140ba7826(local_828 + 2,L"VS: ",local_828);
      iVar9 = (int)local_810;
      iVar10 = ((int)local_810 == 0) + 1;
      local_a8.s.LowPart = (DWORD)local_828[2];
      local_a8.s.HighPart = (LONG)((ulonglong)local_828[2] >> 0x20);
      local_828[2] = 0;
      uStack_a0._0_4_ = (int)local_810;
      iVar5 = local_810._4_4_;
      uStack_a0._4_4_ = local_810._4_4_;
      local_810 = 0;
      iVar17 = iVar10 + iVar9;
      if (iVar17 < iVar9) goto LAB_1431a4ef9;
      if (iVar17 < 0) goto LAB_1431a4f00;
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e01f72,1);
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_a40,CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart),iVar9);
      if (CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      if (local_828[2] != 0) {
        FUN_1400020a8();
      }
      if (local_828[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3[1] != 0) {
      local_828[0] = 0;
      local_828[1] = 0;
      FUN_1407c8a86(param_3[1] + -0x18,0x14,local_828);
      FUN_140ba7826(local_828 + 2,L"PS: ",local_828);
      iVar9 = (int)local_810;
      iVar10 = ((int)local_810 == 0) + 1;
      local_a8.s.LowPart = (DWORD)local_828[2];
      local_a8.s.HighPart = (LONG)((ulonglong)local_828[2] >> 0x20);
      local_828[2] = 0;
      uStack_a0._0_4_ = (int)local_810;
      iVar5 = local_810._4_4_;
      uStack_a0._4_4_ = local_810._4_4_;
      local_810 = 0;
      iVar17 = iVar10 + iVar9;
      if (iVar17 < iVar9) goto LAB_1431a4ef9;
      if (iVar17 < 0) goto LAB_1431a4f00;
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e01f72,1);
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_a40,CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart),iVar9);
      if (CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      if (local_828[2] != 0) {
        FUN_1400020a8();
      }
      if (local_828[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3[3] != 0) {
      local_828[0] = 0;
      local_828[1] = 0;
      FUN_1407c8a86(param_3[3] + -0x18,0x14,local_828);
      FUN_140ba7826(local_828 + 2,L"MS: ",local_828);
      iVar9 = (int)local_810;
      iVar10 = ((int)local_810 == 0) + 1;
      local_a8.s.LowPart = (DWORD)local_828[2];
      local_a8.s.HighPart = (LONG)((ulonglong)local_828[2] >> 0x20);
      local_828[2] = 0;
      uStack_a0._0_4_ = (int)local_810;
      iVar5 = local_810._4_4_;
      uStack_a0._4_4_ = local_810._4_4_;
      local_810 = 0;
      iVar17 = iVar10 + iVar9;
      if (iVar17 < iVar9) goto LAB_1431a4ef9;
      if (iVar17 < 0) goto LAB_1431a4f00;
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e01f72,1);
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_a40,CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart),iVar9);
      if (CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      if (local_828[2] != 0) {
        FUN_1400020a8();
      }
      if (local_828[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3[4] != 0) {
      local_828[0] = 0;
      local_828[1] = 0;
      FUN_1407c8a86(param_3[4] + -0x18,0x14,local_828);
      FUN_140ba7826(local_828 + 2,L"AS: ",local_828);
      iVar9 = (int)local_810;
      iVar10 = ((int)local_810 == 0) + 1;
      local_a8.s.LowPart = (DWORD)local_828[2];
      local_a8.s.HighPart = (LONG)((ulonglong)local_828[2] >> 0x20);
      local_828[2] = 0;
      uStack_a0._0_4_ = (int)local_810;
      iVar5 = local_810._4_4_;
      uStack_a0._4_4_ = local_810._4_4_;
      local_810 = 0;
      iVar17 = iVar10 + iVar9;
      if (iVar17 < iVar9) goto LAB_1431a4ef9;
      if (iVar17 < 0) goto LAB_1431a4f00;
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e01f72,1);
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_a40,CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart),iVar9);
      if (CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      if (local_828[2] != 0) {
        FUN_1400020a8();
      }
      if (local_828[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3[2] != 0) {
      local_828[0] = 0;
      local_828[1] = 0;
      FUN_1407c8a86(param_3[2] + -0x18,0x14,local_828);
      FUN_140ba7826(local_828 + 2,L"GS: ",local_828);
      iVar9 = (int)local_810;
      iVar10 = ((int)local_810 == 0) + 1;
      local_a8.s.LowPart = (DWORD)local_828[2];
      local_a8.s.HighPart = (LONG)((ulonglong)local_828[2] >> 0x20);
      local_828[2] = 0;
      uStack_a0._0_4_ = (int)local_810;
      iVar5 = local_810._4_4_;
      uStack_a0._4_4_ = local_810._4_4_;
      local_810 = 0;
      iVar17 = iVar10 + iVar9;
      if (iVar17 < iVar9) {
LAB_1431a4ef9:
        local_810 = 0;
        local_828[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar17 < 0) {
LAB_1431a4f00:
        local_810 = 0;
        local_828[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar17);
      }
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e01f72,1);
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_a40,CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart),iVar9);
      if (CONCAT44(local_a8.s.HighPart,local_a8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      if (local_828[2] != 0) {
        FUN_1400020a8();
      }
      if (local_828[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_a40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_5a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_418 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar21 = 0x28;
  do {
    puVar11 = *(undefined8 **)((longlong)local_d8 + lVar21 + -8);
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar11 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
    lVar21 = lVar21 + -8;
  } while (lVar21 != 0);
  if ((local_60 ^ (ulonglong)local_a78) == DAT_14c707940) {
    return iVar8 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a4f08 FUN_1431a4f08 body=147 status=ok
// SIG undefined FUN_1431a4f08(void)

void FUN_1431a4f08(longlong param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  longlong lVar1;
  bool bVar2;
  
  if (*(longlong *)(param_2 + 0x4a8) != 0) {
    bVar2 = *(int *)(param_2 + 0x4b0) + 3U < DAT_14c7590b0;
    FUN_1473b5894(param_1 + 0x288,*(longlong *)(param_2 + 0x4a8),1);
    *(undefined8 *)(param_2 + 0x4a8) = 0;
    *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) - *(int *)(param_2 + 0x4b4);
    *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + -1;
    FUN_1473b5296(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
    if (DAT_14ca784a8 != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(param_2 + 0x478 + lVar1 * 8) != 0) {
          FUN_1473d24c4();
        }
        lVar1 = lVar1 + 1;
      } while (lVar1 != 5);
    }
  }
  return;
}



// FUNCTION 1431a4faa FUN_1431a4faa body=394 status=ok
// SIG undefined FUN_1431a4faa(void)

void FUN_1431a4faa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[0x61] == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
    lVar1 = *(longlong *)(param_2 + 0x4a8);
    if (lVar1 == 0) {
      *(undefined4 *)(param_2 + 0x4b0) = DAT_14c7590b0;
      if (*(longlong *)(param_2 + 0x50) == 0) {
        QueryPerformanceCounter(&local_58);
        local_48 = 0;
        uStack_40 = 0;
        local_58.QuadPart = 0;
        uStack_50 = 0;
        local_38 = 0;
        FUN_1473d16f2(*param_1 + 0x6b8,param_2 + 0x20,&local_58);
        FUN_1431a3cb6(param_1,param_2,&local_58,0);
        QueryPerformanceCounter(&local_60);
        if ((char)param_1[0x61] == '\x01') {
          FUN_1473b549a(param_1,*(undefined4 *)(param_2 + 0x4b4));
          FUN_1431a5136(param_1,param_2);
        }
      }
    }
    else {
      if (lVar1 != param_1[0x52]) {
        FUN_1473b5894(param_1 + 0x51,lVar1,0);
        lVar1 = *(longlong *)(param_2 + 0x4a8);
        if (lVar1 != 0) {
          if (param_1[0x52] == 0) {
            plVar2 = param_1 + 0x53;
          }
          else {
            *(longlong *)(lVar1 + 8) = param_1[0x52];
            plVar2 = (longlong *)(param_1[0x52] + 0x10);
          }
          *plVar2 = lVar1;
          param_1[0x52] = lVar1;
          (**(code **)(param_1[0x51] + 8))(param_1 + 0x51,(int)param_1[0x54] + 1);
        }
      }
      *(undefined4 *)(param_2 + 0x4b0) = DAT_14c7590b0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a5136 FUN_1431a5136 body=221 status=ok
// SIG undefined FUN_1431a5136(void)

void FUN_1431a5136(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (*(char *)(param_1 + 0x308) == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x260));
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
    *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + *(int *)(param_2 + 0x4b4);
    *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
    FUN_1473b5826(param_1 + 0x288,&local_28);
    *(undefined8 *)(param_2 + 0x4a8) = *(undefined8 *)(param_1 + 0x290);
    *(undefined4 *)(param_2 + 0x4b0) = DAT_14c7590b0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a5226 FUN_1431a5226 body=2007 status=ok
// SIG undefined FUN_1431a5226(void)

longlong * FUN_1431a5226(longlong param_1,longlong *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 extraout_RAX;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_6e8 [36];
  uint local_6c4;
  LPCRITICAL_SECTION local_6c0;
  undefined8 local_6b8;
  uint *local_6b0;
  longlong *local_6a8;
  undefined8 *local_6a0;
  undefined4 local_698 [2];
  undefined8 local_690;
  longlong *plStack_688;
  LARGE_INTEGER local_680;
  undefined1 local_678 [304];
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined2 local_3fe;
  LARGE_INTEGER local_3f8;
  undefined8 **ppuStack_3f0;
  longlong *local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x25e8);
  uVar3 = *(ushort *)((longlong)param_3 + 0xca);
  if (DAT_14ca78478 == 1) {
LAB_1431a52a3:
    local_6c0 = (LPCRITICAL_SECTION)&DAT_14ca78500;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78500);
    local_6b8 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  else {
    if (DAT_14ca78478 == 2) {
      if ((uVar3 & 0x1800) != 0) goto LAB_1431a52a3;
    }
    else if (DAT_14ca78478 == 3 && (uVar3 & 0x1800) == 0) goto LAB_1431a52a3;
    local_6c0 = (LPCRITICAL_SECTION)0x0;
    local_6b8 = 0;
  }
  local_698[0] = 0;
  local_690 = 0;
  plStack_688 = (longlong *)0x0;
  local_3fe = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_448 = 0;
  uStack_440 = 0;
  FUN_1473b531c(local_678);
  FUN_1473b430c(plVar11,param_3,local_678,local_548);
  FUN_1473b3fd4(local_548,&local_3f8);
  FUN_1473c2764(local_698,&local_3f8);
  plVar10 = local_3e8;
  if (local_3e8 != (longlong *)0x0) {
    if (*local_3e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar10);
  }
  local_6a0 = (undefined8 *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar11 + 0x3d);
  local_6c4 = (uint)uVar3;
  EnterCriticalSection(lpCriticalSection);
  plVar10 = plVar11 + 0x42;
  iVar5 = FUN_1473cb39c(plVar10,local_698[0]);
  if ((iVar5 != -1) &&
     (lVar12 = *plVar10 + (longlong)iVar5 * 0x28, plVar13 = (longlong *)(lVar12 + 0x18),
     plVar13 != (longlong *)0x0 && lVar12 != 0)) {
    if ((local_6c4 & 0x1800) == 0) {
      FUN_1431a4faa(plVar11,*plVar13);
    }
    lVar12 = *plVar13;
    *param_2 = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LAB_1431a593a;
  }
  local_6a8 = param_2;
  LeaveCriticalSection(lpCriticalSection);
  puVar8 = (undefined8 *)FUN_14001cc68(0x4e0,0x10);
  lVar12 = *plVar11;
  local_6b0 = (uint *)(puVar8 + 1);
  iVar5 = 0;
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined1 *)((longlong)puVar8 + 0xc) = 0xd;
  *(byte *)((longlong)puVar8 + 0xd) = *(byte *)((longlong)puVar8 + 0xd) | 3;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_14a3601c0;
  *(undefined2 *)(puVar8 + 3) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x1a) = 0;
  *(char *)(puVar8 + 9) = (char)param_3[0xb];
  puVar8[10] = 0;
  FUN_1473db08c(puVar8 + 0xb);
  puVar8[100] = lVar12;
  FUN_1473b513c(puVar8 + 0x65,local_548);
  puVar8[0x95] = 0;
  puVar8[0x96] = 0xffffffffffffffff;
  puVar8[0x99] = 0;
  puVar8[0x9a] = 0;
  *(undefined4 *)(puVar8 + 0x98) = local_698[0];
  FUN_1473c7574(local_698,puVar8 + 0x98);
  *(undefined4 *)(puVar8 + 0x9b) = 0;
  lVar12 = param_3[1];
  if (lVar12 != 0) {
    lVar12 = lVar12 + 0xa0;
  }
  puVar8[0x8f] = lVar12;
  lVar12 = param_3[3] + 0xa0;
  if (param_3[3] == 0) {
    lVar12 = 0;
  }
  puVar8[0x92] = lVar12;
  lVar12 = param_3[4] + 0xa0;
  if (param_3[4] == 0) {
    lVar12 = 0;
  }
  puVar8[0x93] = lVar12;
  lVar12 = param_3[5] + 0xa0;
  if (param_3[5] == 0) {
    lVar12 = 0;
  }
  puVar8[0x91] = lVar12;
  lVar12 = param_3[2] + 0xa0;
  if (param_3[2] == 0) {
    lVar12 = 0;
  }
  puVar8[0x90] = lVar12;
  lVar12 = 0x8f;
  do {
    if ((longlong *)puVar8[lVar12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar8[lVar12] + 8))();
      iVar5 = iVar5 + (uint)*(byte *)(puVar8[lVar12] + 0xe1);
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x94);
  *(bool *)((longlong)puVar8 + 0x1a) = iVar5 != 0;
  uVar9 = (**(code **)(*DAT_14ca83900 + 0x300))(DAT_14ca83900,param_3);
  puVar8[0x97] = uVar9;
  local_6a0 = puVar8;
  lVar12 = FUN_1473b4174(plVar11,local_678,1,*(undefined1 *)((longlong)puVar8 + 0x1a));
  puVar8[99] = lVar12;
  iVar5 = FUN_1473af3b4(lVar12 + 0x18,10);
  *(bool *)(puVar8 + 3) = iVar5 != 0;
  lVar12 = *(longlong *)(*plVar11 + 0x20c8);
  FUN_1473b4a4a(&local_3f8,param_3);
  uVar9 = FUN_1473bbab4(*(undefined8 *)(*(longlong *)(lVar12 + 0x120) + 0x690),&local_3f8);
  puVar8[0x94] = uVar9;
  uVar14 = 0;
  do {
    uVar9 = FUN_1473b5457(param_3,uVar14 & 0xffffffff);
    uVar1 = local_6c4;
    puVar8[uVar14 + 4] = uVar9;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 5);
  if (*param_3 != 0) {
    FUN_1473db120(puVar8 + 0xb,*param_3,*(undefined4 *)(param_3[1] + 0xf4));
  }
  lVar12 = DAT_14ca783d8;
  if (((uVar1 & 0x1800) == 0) || ((char)plVar11[1] != '\x01')) {
LAB_1431a56b3:
    param_2 = local_6a8;
    QueryPerformanceCounter(&local_3f8);
    local_3e8 = (longlong *)0x0;
    lStack_3e0 = 0;
    ppuStack_3f0 = (undefined8 **)0x0;
    local_3d8 = 0;
    local_3f8.QuadPart = param_3[1] + 0xa0;
    if (param_3[1] == 0) {
      local_3f8.QuadPart = 0;
    }
    if (param_3[2] != 0) {
      ppuStack_3f0 = (undefined8 **)(param_3[2] + 0xa0);
    }
    if (param_3[3] != 0) {
      lStack_3e0 = param_3[3] + 0xa0;
    }
    if (param_3[4] != 0) {
      local_3d8 = param_3[4] + 0xa0;
    }
    if (param_3[5] != 0) {
      local_3e8 = (longlong *)(param_3[5] + 0xa0);
    }
    cVar4 = FUN_1431a3cb6(plVar11,puVar8,&local_3f8,*(ushort *)((longlong)param_3 + 0xca) >> 0xd);
    if (cVar4 == '\0') {
      LOCK();
      *local_6b0 = *local_6b0 + 1;
      UNLOCK();
      LOCK();
      uVar1 = *local_6b0;
      *local_6b0 = *local_6b0 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        LOCK();
        uVar1 = *local_6b0;
        *local_6b0 = *local_6b0 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)((longlong)puVar8 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = (longlong)puVar8;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar11;
              LOCK();
              bVar16 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar13;
              if (bVar16) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar13 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar13;
              if (bVar16) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      *param_2 = 0;
      goto LAB_1431a593a;
    }
    QueryPerformanceCounter(&local_680);
  }
  else {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar16 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar16 = DVar6 == DVar7;
        }
        else {
          bVar16 = false;
        }
      }
      uVar14 = (ulonglong)(bVar16 ^ 1);
    }
    param_2 = local_6a8;
    if (*(int *)(lVar12 + uVar14 * 4) == 0) goto LAB_1431a56b3;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar5 = FUN_1473cb39c(plVar10,local_698[0],local_698);
  if ((iVar5 == -1) ||
     (lVar12 = *plVar10 + (longlong)iVar5 * 0x28, puVar15 = (undefined8 *)(lVar12 + 0x18),
     puVar15 == (undefined8 *)0x0 || lVar12 == 0)) {
    ppuStack_3f0 = &local_6a0;
    local_3f8.QuadPart = (LONGLONG)local_698;
    FUN_1473cb5d8(plVar10,&local_680);
    if (((char)plVar11[0x61] == '\x01') && (local_6a0[10] != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar11 + 0x4c));
      *(undefined1 *)((longlong)local_6a0 + 0x19) = 1;
      FUN_1473b549a(plVar11,*(undefined4 *)((longlong)local_6a0 + 0x4b4));
      FUN_1431a5136(plVar11,local_6a0);
      if ((local_6c4 & 0x1800) != 0) {
        FUN_1431a4f08(plVar11,local_6a0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar11 + 0x4c));
    }
    else {
      *(undefined1 *)((longlong)local_6a0 + 0x19) = 1;
    }
  }
  else {
    LOCK();
    *local_6b0 = *local_6b0 + 1;
    UNLOCK();
    LOCK();
    uVar1 = *local_6b0;
    *local_6b0 = *local_6b0 - 1;
    UNLOCK();
    if ((uVar1 & 0x3fffffff) == 1) {
      LOCK();
      uVar1 = *local_6b0;
      *local_6b0 = *local_6b0 | 0x40000000;
      UNLOCK();
      if ((uVar1 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)((longlong)puVar8 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = (longlong)puVar8;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar11;
            LOCK();
            bVar16 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar13;
            if (bVar16) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar13 = (longlong)plVar10;
            LOCK();
            bVar16 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar13;
            if (bVar16) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
    local_6a0 = (undefined8 *)*puVar15;
  }
  LeaveCriticalSection(lpCriticalSection);
  *param_2 = (longlong)local_6a0;
  if (local_6a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_6a0 + 1) = *(int *)(local_6a0 + 1) + 1;
    UNLOCK();
  }
LAB_1431a593a:
  FUN_1473b5518(local_678);
  FUN_1473b1c60(local_548);
  plVar11 = plStack_688;
  if (plStack_688 != (longlong *)0x0) {
    if (*plStack_688 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar11);
  }
  if ((char)local_6b8 != '\0') {
    LeaveCriticalSection(local_6c0);
  }
  if ((local_48 ^ (ulonglong)auStack_6e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431a59fe FUN_1431a59fe body=1283 status=ok
// SIG undefined FUN_1431a59fe(void)

undefined8 * FUN_1431a59fe(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  PSRWLOCK pRVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 *local_290;
  longlong *local_288;
  undefined8 *local_280;
  PSRWLOCK local_278;
  longlong local_270;
  longlong local_268 [2];
  undefined4 local_258;
  undefined8 local_254;
  longlong lStack_24c;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d8 [24];
  longlong local_1c0 [6];
  LARGE_INTEGER local_190 [38];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar4 = *param_3;
  plVar5 = *(longlong **)(**(longlong **)(*(longlong *)(param_1 + 0x48) + 0x25e8) + 0x25e8);
  lVar6 = *(longlong *)(lVar4 + 0xb8);
  pRVar1 = (PSRWLOCK)(plVar5 + 8);
  local_270 = lVar6;
  AcquireSRWLockShared(pRVar1);
  iVar8 = (int)lVar6;
  iVar15 = (int)((ulonglong)lVar6 >> 0x20);
  if ((int)plVar5[10] != *(int *)((longlong)plVar5 + 0x7c)) {
    plVar13 = plVar5 + 0x10;
    if ((longlong *)plVar5[0x11] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar5[0x11];
    }
    iVar9 = *(int *)((longlong)plVar13 +
                    (ulonglong)((int)plVar5[0x12] - 1U & iVar8 + iVar15 * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        plVar13 = (longlong *)(plVar5[9] + (longlong)iVar9 * 0x18);
        if (*plVar13 == lVar6) {
          if ((plVar13 != (longlong *)0x0) && (plVar13 + 1 != (longlong *)0x0)) {
            puVar10 = (undefined8 *)plVar13[1];
            ReleaseSRWLockShared(pRVar1);
            goto LAB_1431a5eb1;
          }
          break;
        }
        iVar9 = (int)plVar13[2];
      } while (iVar9 != -1);
    }
  }
  local_288 = plVar5 + 9;
  local_280 = param_2;
  local_278 = pRVar1;
  ReleaseSRWLockShared(pRVar1);
  QueryPerformanceCounter(local_190);
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar11 = *plVar5;
  *puVar10 = &PTR_FUN_14a3601a0;
  *(undefined4 *)(puVar10 + 1) = 0;
  puVar10[2] = lVar11;
  puVar10[3] = 0;
  puVar10[4] = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x34) = 0xe;
  *(byte *)((longlong)puVar10 + 0x35) = *(byte *)((longlong)puVar10 + 0x35) | 3;
  puVar10[5] = &PTR_FUN_14a1e4950;
  puVar10[7] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar10 + 8) = 1;
  *puVar10 = &PTR_FUN_14a3601a8;
  puVar10[5] = &PTR_FUN_14a3601b0;
  *(undefined1 *)(puVar10 + 9) = *(undefined1 *)(lVar4 + 0x189);
  FUN_1473b531c();
  local_1c0[0] = lVar4 + 0xc0;
  local_1c0[5] = 0;
  local_1c0[3] = 0;
  local_1c0[4] = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_240 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  local_298 = CONCAT71(local_298._1_7_,*(undefined1 *)(lVar4 + 0x189));
  FUN_1473d51ee(local_190,*plVar5,local_1c0,&local_240);
  lVar11 = FUN_1473b4174(plVar5,local_190,0,*(undefined1 *)(lVar4 + 0x189));
  FUN_1473b5590(lVar4 + 0xa8,&local_1e0,lVar11,*(undefined4 *)(lVar11 + 0x138));
  local_240 = 0x1d;
  uStack_224 = 0;
  uStack_220._0_4_ = 0;
  uStack_220._4_4_ = 0;
  uStack_218 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  local_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_208._0_4_ = 0;
  uStack_208._4_4_ = 0;
  uStack_200 = 0;
  local_22c = 0x1200000000;
  uStack_214 = 0x20;
  uStack_210 = (undefined4)local_1e0[2];
  local_20c = (undefined4)((ulonglong)local_1e0[2] >> 0x20);
  iVar9 = *(int *)(lVar4 + 0x1a0);
  if (iVar9 < 0) {
    iVar9 = *(int *)(lVar4 + 0x198);
  }
  local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)(lVar4 + 0x11c));
  FUN_1407bf796(local_1d8,0x18,"main_%0.8x_%0.8x",iVar9);
  param_2 = local_280;
  if (*(char *)(lVar11 + 0x11) == '\x01') {
    puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0x6b0) + 0x4d0);
  }
  else {
    puVar12 = (undefined8 *)(lVar11 + 0x198);
  }
  uStack_1f8 = (undefined4)*puVar12;
  uStack_1f4 = (undefined4)((ulonglong)*puVar12 >> 0x20);
  if (*(char *)(lVar4 + 0x189) == '\x01') {
    uStack_234 = CONCAT44(0x20000000,(undefined4)uStack_234);
  }
  bVar3 = *(byte *)(lVar4 + 0x120);
  uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220);
  if ((((bVar3 != 0) &&
       (lVar7 = *plVar5,
       uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220),
       (*(byte *)(lVar7 + 0x20fd) & 8) != 0)) &&
      (uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220),
      (*(byte *)(lVar7 + 0x2434) & 0x20) != 0)) &&
     ((uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220),
      *(uint *)(lVar7 + 0x2428) <= (uint)bVar3 &&
      (uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220),
      (uint)bVar3 <= *(uint *)(lVar7 + 0x242c))))) {
    uStack_220 = &local_258;
    local_258 = 0x3b9e38e9;
    local_254 = 0;
    local_244 = 0;
    lStack_24c = (ulonglong)bVar3 << 0x20;
  }
  uStack_208 = local_1d8;
  AcquireSRWLockShared((PSRWLOCK)(plVar5 + 0x14));
  local_298 = 0;
  local_290 = puVar10 + 3;
  iVar9 = (*DAT_14ca79230)(*(undefined8 *)*plVar5,plVar5[0x13],1,&local_240);
  ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0x14));
  if (iVar9 != 0) {
    local_268[0] = 0;
    local_268[1] = 0;
    FUN_1407c8a86(lVar4 + 0x88,0x14,local_268);
    *(undefined1 *)(puVar10 + 8) = 0;
    if (local_268[0] != 0) {
      FUN_1400020a8();
    }
  }
  puVar10[4] = lVar11;
  if (local_1e0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_1e0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_1e0)(local_1e0,1);
    }
  }
  FUN_1473b5518(local_190);
  QueryPerformanceCounter(local_190);
  pRVar1 = local_278;
  AcquireSRWLockExclusive(local_278);
  if ((int)plVar5[10] == *(int *)((longlong)plVar5 + 0x7c)) {
    uVar14 = iVar15 * 0x17 + iVar8;
  }
  else {
    uVar14 = iVar8 + iVar15 * 0x17;
    plVar13 = plVar5 + 0x10;
    if ((longlong *)plVar5[0x11] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar5[0x11];
    }
    iVar15 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar5[0x12] - 1U & uVar14) * 4);
    if (iVar15 != -1) {
      do {
        plVar5 = (longlong *)(*local_288 + (longlong)iVar15 * 0x18);
        if (*plVar5 == lVar6) {
          if ((plVar5 != (longlong *)0x0) && (plVar5 != (longlong *)&DAT_fffffffffffffff8))
          goto LAB_1431a5ea8;
          break;
        }
        iVar15 = (int)plVar5[2];
      } while (iVar15 != -1);
    }
  }
  puVar12 = (undefined8 *)FUN_1473cba1e(local_288,uVar14,&local_270);
  *puVar12 = puVar10;
LAB_1431a5ea8:
  ReleaseSRWLockExclusive(pRVar1);
LAB_1431a5eb1:
  puVar12 = puVar10 + 5;
  if (puVar10 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  *param_2 = puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431a5f02 FUN_1431a5f02 body=268 status=ok
// SIG undefined FUN_1431a5f02(void)

ulonglong FUN_1431a5f02(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar3 = CONCAT71(uVar4,1);
    if (0 < local_34) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        FUN_1473b3f2a(param_1,*param_2 + lVar5);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < local_34);
    }
  }
  else if (local_34 < 0) {
    uVar3 = 0;
  }
  else {
    FUN_1473cc042(param_2);
    uVar3 = CONCAT71(uVar4,1);
    if (0 < local_34) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        FUN_1473b3f2a(param_1,*param_2 + lVar5);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1431a6010 FUN_1431a6010 body=246 status=ok
// SIG undefined FUN_1431a6010(void)

undefined8 * FUN_1431a6010(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(undefined1 *)(param_3 + 0x48);
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 1;
  memset(param_1 + 3,0,0x8c);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe9) = uVar1;
  *param_1 = &PTR_FUN_14a360698;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_3;
  lVar3 = *(longlong *)(param_3 + 0x38);
  iVar2 = *(int *)(lVar3 + 0xf4);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x1f) = iVar2;
    FUN_1447403be(param_1 + 0x1e,0);
  }
  *(uint *)(param_1 + 0x20) = (uint)(iVar2 != 0);
  param_1[0x11] = *(longlong *)(param_3 + 0x20) + 0x18;
  *(uint *)(param_1 + 0x14) = (uint)(0 < *(int *)(lVar3 + 200));
  FUN_1473b595a(param_1);
  LOCK();
  *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1431a6106 FUN_1431a6106 body=69 status=ok
// SIG undefined FUN_1431a6106(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6106(void)

{
  _DAT_14ca78528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78530,1);
  return;
}



// FUNCTION 1431a614c FUN_1431a614c body=396 status=ok
// SIG undefined FUN_1431a614c(void)

undefined8 *
FUN_1431a614c(undefined8 *param_1,undefined8 *param_2,longlong param_3,uint param_4,
             undefined4 param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14a360920;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint *)(param_1 + 4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  param_1[5] = 0;
  param_1[6] = 0;
  local_50 = 0xb;
  uStack_4c = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = param_5;
  uStack_38 = (ulonglong)param_4;
  iVar2 = (*DAT_14ca79248)(*param_2,&local_50,0,param_1 + 2);
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2,
                  "VulkanRHI::vkCreateQueryPool(Device->GetInstanceHandle(), &PoolCreateInfo, VULKAN_CPU_ALLOCATOR, &QueryPool)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanQuery.cpp",0x35);
  }
  if ((*(byte *)((longlong)param_1[1] + 0x20fc) & 0x20) == 0) {
    if (param_6 == '\x01' && param_3 != 0) {
      FUN_14739996e(param_3,param_1[2],param_4);
    }
  }
  else {
    (*DAT_14ca79250)(*(undefined8 *)param_1[1],param_1[2],0,*(undefined4 *)(param_1 + 4));
  }
  local_68 = 10;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  iVar2 = (*DAT_14ca79258)(*(undefined8 *)param_1[1],&local_68,0,param_1 + 3);
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2,
                  "VulkanRHI::vkCreateEvent(Device->GetInstanceHandle(), &EventCreateInfo, VULKAN_CPU_ALLOCATOR, &ResetEvent)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanQuery.cpp",0x43);
  }
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0x34) - iVar2) < uVar1) {
    FUN_14479d316(param_1 + 5);
  }
  memset((void *)((longlong)iVar2 * 8 + param_1[5]),0,(longlong)(int)uVar1 << 3);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a62da FUN_1431a62da body=101 status=ok
// SIG undefined FUN_1431a62da(void)

void FUN_1431a62da(undefined8 *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  
  *param_1 = &PTR_FUN_14a360a30;
  if ((*(int *)(param_1 + 6) != 0) && (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0xffffffff)) {
    lVar3 = param_1[5];
    bVar4 = (byte)uVar2 & 0x3f;
    puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
    *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1431a6340 FUN_1431a6340 body=1379 status=ok
// SIG undefined FUN_1431a6340(void)

undefined8 FUN_1431a6340(longlong param_1,longlong param_2,ulonglong *param_3,char param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  LARGE_INTEGER local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 0x10) == 2) {
    lVar8 = *(longlong *)(param_2 + 0x28);
    if (lVar8 == 0) {
      if (param_4 == '\0') goto LAB_1431a64cc;
      local_98 = 0;
      local_90 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_98,5);
      lVar8 = *(longlong *)(param_2 + 0x28);
      uVar10 = *(uint *)(lVar8 + 0x38);
LAB_1431a6692:
      uVar2 = *(uint *)(lVar8 + 0x3c);
    }
    else {
      uVar10 = *(uint *)(lVar8 + 0x38);
      if (param_4 != '\0') goto LAB_1431a6692;
      uVar2 = *(uint *)(lVar8 + 0x3c);
      if (1 < uVar2) {
        uVar12 = 1;
        do {
          plVar13 = (longlong *)(lVar8 + 0x48);
          lVar11 = (longlong)(int)uVar10 * 0x20;
          lVar8 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(*plVar13 + 8 + lVar11) <
              *(ulonglong *)(*(longlong *)(*plVar13 + lVar11) + 0xe0)) {
            FUN_1473a8158(*(longlong *)(lVar8 + 0x58) + 0x18,
                          *(undefined8 *)(*(longlong *)(lVar8 + 0x58) + 0x10));
            dVar5 = ((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
                    ((double)CONCAT44(0x45300000,(int)((ulonglong)DAT_14ca813c0 >> 0x20)) -
                    1.9342813113834067e+25);
            uVar7 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x60) +
                     (longlong)(int)uVar10 * 8);
            uVar14 = (undefined4)uVar7;
            uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
            goto LAB_1431a679a;
          }
          uVar2 = *(uint *)(lVar8 + 0x3c);
          uVar10 = ((uVar10 + *(uint *)(lVar8 + 0x40)) - 1) % *(uint *)(lVar8 + 0x40);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar2);
      }
      if (uVar2 == 0) goto LAB_1431a64cc;
    }
    uVar12 = *(uint *)(lVar8 + 0x40);
    FUN_1403936f2(&local_98,1,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
    if (uVar2 == uVar12 || param_4 != '\0') {
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x48);
      lVar11 = (longlong)(int)uVar10 * 0x20;
      if (*(longlong *)(lVar8 + 8 + lVar11) == *(longlong *)(*(longlong *)(lVar8 + lVar11) + 0xe0))
      {
        plVar13 = (longlong *)(lVar8 + lVar11);
        local_80.QuadPart = 0;
        local_78 = 0;
        FUN_14007658c(&DAT_14ca850c8,&local_80,5);
        FUN_1473a4ba6(*(undefined8 *)(param_1 + 0x48));
        if (plVar13[1] == *(longlong *)(*plVar13 + 0xe0)) {
          FUN_1473998ee(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150),*plVar13,
                        &DAT_41200000);
        }
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
    FUN_1473a8158(lVar8 + 0x18,*(undefined8 *)(lVar8 + 0x10));
    FUN_1402488ea(&local_98);
    dVar5 = ((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,(int)((ulonglong)DAT_14ca813c0 >> 0x20)) -
            1.9342813113834067e+25);
    uVar7 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x60) + (longlong)(int)uVar10 * 8);
    uVar14 = (undefined4)uVar7;
    uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
LAB_1431a679a:
    dVar5 = ((((double)CONCAT44(0x43300000,uVar14) - 4503599627370496.0) +
             ((double)CONCAT44(0x45300000,uVar15) - 1.9342813113834067e+25)) / dVar5) * 1000.0 *
            1000.0;
    uVar9 = (ulonglong)dVar5;
    uVar9 = (longlong)(dVar5 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9;
LAB_1431a639e:
    *param_3 = uVar9;
    uVar7 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 1) {
      if (*(int *)(param_2 + 0x30) - 3U < 2) {
LAB_1431a639a:
        uVar9 = *(ulonglong *)(param_2 + 0x18);
        goto LAB_1431a639e;
      }
      if (*(int *)(param_2 + 0x30) != 0) {
        lVar8 = *(longlong *)(param_2 + 0x28);
        if (*(int *)(lVar8 + 0x38) == 3) {
LAB_1431a685b:
          uVar10 = *(uint *)(param_2 + 0x20);
          *(undefined8 *)(param_2 + 0x18) =
               *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + (longlong)(int)uVar10 * 8);
          bVar3 = (byte)uVar10 & 0x3f;
          puVar1 = (ulonglong *)(*(longlong *)(lVar8 + 0x58) + (ulonglong)(uVar10 >> 6) * 8);
          *puVar1 = *puVar1 & (-2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3);
          *(undefined8 *)(*(longlong *)(lVar8 + 0x48) + (longlong)(int)uVar10 * 8) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
          *(undefined4 *)(param_2 + 0x30) = 3;
          goto LAB_1431a639a;
        }
        if (*(int *)(lVar8 + 0x38) == 2) {
          iVar6 = (*DAT_14ca79270)(**(undefined8 **)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x18));
          if (iVar6 == 3) {
            local_b0 = *(undefined8 *)(lVar8 + 0x28);
            local_b8 = (ulonglong)*(uint *)(lVar8 + 0x40) << 3;
            local_a0 = 1;
            local_a8 = 8;
            iVar6 = (*DAT_14ca79278)(**(undefined8 **)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),0);
            if (iVar6 != 1) {
              if (iVar6 == 0) {
                *(undefined4 *)(lVar8 + 0x38) = 3;
LAB_1431a6857:
                lVar8 = *(longlong *)(param_2 + 0x28);
                goto LAB_1431a685b;
              }
              FUN_1431b4552(iVar6,"Result",".\\Runtime/VulkanRHI/Private/VulkanQuery.cpp",0xb8);
              goto LAB_1431a64cc;
            }
          }
          if (param_4 != '\0') {
            FUN_1403936f2(&local_98,1,1);
            QueryPerformanceCounter(&local_80);
            uVar14 = DAT_14c7585d4;
            dVar5 = (double)local_80.QuadPart * DAT_14c83f420;
            lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            do {
              SwitchToThread();
              if (*(int *)(lVar11 + 0xc60) == 0x10) {
                (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,uVar14);
              }
              iVar6 = (*DAT_14ca79270)(**(undefined8 **)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x18));
              if (iVar6 == 3) {
                local_b0 = *(undefined8 *)(lVar8 + 0x28);
                local_b8 = (ulonglong)*(uint *)(lVar8 + 0x40) << 3;
                local_a0 = 1;
                local_a8 = 8;
                iVar6 = (*DAT_14ca79278)(**(undefined8 **)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
                                         0);
              }
              if ((iVar6 != 1) && (iVar6 != 4)) {
                if (iVar6 == 0) {
                  *(undefined4 *)(lVar8 + 0x38) = 3;
                  FUN_1402488ea(&local_98);
                  goto LAB_1431a6857;
                }
                FUN_1431b4552(iVar6,"Result",".\\Runtime/VulkanRHI/Private/VulkanQuery.cpp",0x9c);
              }
              iVar6 = *(int *)(lVar8 + 0x24);
              QueryPerformanceCounter(&local_80);
              dVar4 = ((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0) -
                      (dVar5 + 16777216.0);
            } while (dVar4 < *(double *)(&DAT_14a35eeb0 + (ulonglong)(iVar6 == 2) * 8) ||
                     dVar4 == *(double *)(&DAT_14a35eeb0 + (ulonglong)(iVar6 == 2) * 8));
            FUN_1402488ea(&local_98);
          }
        }
      }
    }
LAB_1431a64cc:
    uVar7 = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1431a68a4 FUN_1431a68a4 body=69 status=ok
// SIG undefined FUN_1431a68a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a68a4(void)

{
  _DAT_14ca78540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a68e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78548,1);
  return;
}



// FUNCTION 1431a68ea FUN_1431a68ea body=656 status=ok
// SIG undefined FUN_1431a68ea(void)

void FUN_1431a68ea(undefined8 *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar7 = *(undefined8 **)(param_2 + 0xd8);
  local_50 = *(undefined8 *)(param_2 + 0x88);
  puStack_68 = &local_50;
  local_98 = 4;
  uStack_74 = 0;
  uStack_6c = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  local_60 = (ulonglong)param_3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_58 = param_4;
  if (0 < *(int *)(param_2 + 0xb0)) {
    FUN_1473cc6a6(&local_a8);
    iVar5 = *(int *)(param_2 + 0xb0);
    uVar4 = 0;
    if ((longlong)iVar5 != 0) {
      lVar6 = *(longlong *)(param_2 + 0xa8);
      lVar8 = 0;
      local_b0 = puVar7;
      do {
        uVar2 = uStack_a0;
        uVar1 = *(undefined8 *)(*(longlong *)(lVar6 + lVar8) + 0x18);
        lVar9 = (longlong)(int)uStack_a0;
        uVar3 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
        if (uStack_a0._4_4_ < uVar3) {
          FUN_1473cc6fc(&local_a8,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_a8 + lVar9 * 8) = uVar1;
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar5 * 8 != lVar8);
      uVar4 = *(undefined4 *)(param_2 + 0xb0);
      puVar7 = local_b0;
    }
    uStack_8c = CONCAT44(uVar4,(undefined4)uStack_8c);
    uStack_80 = (undefined4)local_a8;
    uStack_7c = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_78 = (undefined4)*(undefined8 *)(param_2 + 0x98);
    uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
  }
  iVar5 = (*DAT_14ca792c0)(*param_1,1,&local_98,*puVar7);
  if (iVar5 != 0) {
    FUN_1431b4552(iVar5,"VulkanRHI::vkQueueSubmit(Queue, 1, &SubmitInfo, Fence->GetHandle())",
                  ".\\Runtime/VulkanRHI/Private/VulkanQueue.cpp",0x4a);
  }
  *(undefined1 *)(param_2 + 0x74) = 4;
  FUN_1473b87f2(param_2);
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0xe0);
  if (DAT_14ca78910 == 0) goto LAB_1431a6add;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xf0) + 0x58);
  if (DAT_14ca78910 == 3) {
    lVar6 = *(longlong *)(lVar6 + 0x78);
    if (lVar6 == 0) goto LAB_1431a6add;
LAB_1431a6a93:
    if (lVar6 != param_2) goto LAB_1431a6add;
  }
  else if (DAT_14ca78910 == 2) {
    if (*(longlong *)(lVar6 + 0x80) == 0) goto LAB_1431a6add;
    lVar6 = FUN_1473984ce();
    goto LAB_1431a6a93;
  }
  FUN_1473a8aae(param_1[2] + 0x640,*(undefined8 *)(param_2 + 0xd8),200000000);
  if (*(int *)(*(longlong *)(param_2 + 0xd8) + 8) != 1) {
    FUN_1473a8b0c(param_1[2] + 0x640);
  }
  FUN_147399c44(*(undefined8 *)(param_2 + 0xf0),0);
LAB_1431a6add:
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[8] = param_2;
  param_1[9] = *(undefined8 *)(param_2 + 0xe0);
  param_1[10] = param_1[10] + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_147399c44(*(undefined8 *)(param_2 + 0xf0),param_2);
  FUN_1473a83aa(param_1[2] + 0x5d0,0,0);
  FUN_1473978c2(param_2 + 0x108,param_1 + 0xc);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a6b7b FUN_1431a6b7b body=69 status=ok
// SIG undefined FUN_1431a6b7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6b7b(void)

{
  _DAT_14ca78550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78558,1);
  return;
}



// FUNCTION 1431a6bc0 FUN_1431a6bc0 body=69 status=ok
// SIG undefined FUN_1431a6bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6bc0(void)

{
  _DAT_14ca78560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78568,1);
  return;
}



// FUNCTION 1431a6c05 FUN_1431a6c05 body=69 status=ok
// SIG undefined FUN_1431a6c05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6c05(void)

{
  _DAT_14ca78570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78578,1);
  return;
}



// FUNCTION 1431a6c4a FUN_1431a6c4a body=69 status=ok
// SIG undefined FUN_1431a6c4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6c4a(void)

{
  _DAT_14ca78588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78590,1);
  return;
}



// FUNCTION 1431a6c8f FUN_1431a6c8f body=69 status=ok
// SIG undefined FUN_1431a6c8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431a6c8f(void)

{
  _DAT_14ca785a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431a6cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca785a8,1);
  return;
}



// FUNCTION 1431a6cd4 FUN_1431a6cd4 body=1167 status=ok
// SIG undefined FUN_1431a6cd4(void)

undefined8 *
FUN_1431a6cd4(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined8 local_f8;
  int local_f0 [7];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x21;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_14a34c350;
  FUN_147377468(param_1 + 5,param_3);
  *param_1 = &PTR_FUN_14a361140;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x14] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0xff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar6 = *(int *)(param_1 + 0xd);
  lVar7 = param_1[0xc];
  if ((param_1[0xc] == 0) && (lVar7 = 0, iVar6 == 0)) {
    FUN_1446f470e(&local_a0,L"BLAS",1);
    iVar6 = 0;
    lVar7 = local_a0;
  }
  param_1[0x1a] = lVar7;
  *(int *)(param_1 + 0x1b) = iVar6;
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_1 + 0x6c);
  (**(code **)(*DAT_14ca83900 + 0x4d0))(DAT_14ca83900,&local_98,param_1 + 5);
  param_1[4] = CONCAT44(uStack_84,local_88);
  *(int *)(param_1 + 2) = (int)local_98;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_98._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_90._4_4_;
  if (*(char *)((longlong)param_1 + 0x3f) != '\x01') {
    FUN_1474121c4(param_1 + 0xc,&local_b0);
    local_68 = local_b0;
    if (local_a8 == 0) {
      local_68 = &DAT_149dfb77a;
    }
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = 0;
    local_6c = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_f0[0] = *(int *)(param_1 + 2);
    local_f0[1] = 0;
    local_f0[2] = 0x2000;
    if (local_f0[0] == 0) {
      FUN_14570b4be(param_2,&local_98,0x2000,0);
    }
    local_110 = &local_98;
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_118 = 0x20000;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_108,param_2,local_f0);
      *(undefined4 *)(CONCAT44(uStack_104,local_108) + 0x18) = 0x20000;
      FUN_14002049c(param_2,0);
      lVar7 = CONCAT44(uStack_104,local_108);
    }
    else {
      local_118 = 0x20000;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_108,param_2,local_f0);
      lVar7 = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(lVar7 + 0x18) = 0x20000;
    }
    lVar4 = param_1[0x11];
    if (lVar4 != lVar7) {
      param_1[0x11] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
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
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar4;
            plVar11 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar11;
                LOCK();
                bVar12 = plVar11 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar11 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar11 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
    lVar7 = CONCAT44(uStack_104,local_108);
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar7;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar12 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    uVar10 = *(undefined8 *)param_1[0x14];
    local_f0[0] = 0x3b9d1401;
    local_f0[1] = 0;
    local_f0[2] = 0;
    local_f0[3] = 0;
    local_f0[4] = 0;
    local_f0[5] = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uVar5 = *(undefined8 *)(param_1[0x11] + 0x50);
    local_f0[6] = (int)uVar5;
    uStack_d4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_d0 = *(undefined4 *)(param_1[0x11] + 0x60);
    uStack_cc = 0;
    uStack_c8 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulonglong)param_1[2] >> 0x20);
    uStack_c0 = 1;
    iVar6 = (*DAT_14ca792c8)(uVar10,local_f0,0,param_1 + 0xf);
    if (iVar6 != 0) {
      FUN_1431b4552(iVar6,
                    "VulkanDynamicAPI::vkCreateAccelerationStructureKHR(NativeDevice, &CreateInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x1a8);
    }
    local_108 = 0x3b9d13f2;
    uStack_104 = 0;
    uStack_100 = 0;
    local_fc = 0;
    local_f8 = param_1[0xf];
    uVar10 = (*DAT_14ca792d0)(uVar10);
    param_1[0x10] = uVar10;
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1431a7164 FUN_1431a7164 body=449 status=ok
// SIG undefined FUN_1431a7164(void)

void FUN_1431a7164(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a361140;
  FUN_1473b88c2();
  if (param_1[0xf] != 0) {
    FUN_1473a8b5a(param_1[0x14] + 0x590,0x10);
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_1473b8a12(*(undefined8 *)(param_1[0x14] + 0xef0),param_1);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x11];
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
  *param_1 = &PTR_LAB_14a34c350;
  FUN_14005bcf4(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[5];
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
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1431a7326 FUN_1431a7326 body=139 status=ok
// SIG undefined FUN_1431a7326(void)

undefined8 * FUN_1431a7326(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    *param_2 = 0xffffffffff;
  }
  else {
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 8) == '\x01') {
      uVar1 = FUN_143192236(lVar2 + 0x88,lVar2 + 0x88);
      *(undefined4 *)param_2 = uVar1;
      *(undefined1 *)((longlong)param_2 + 4) = 1;
      lVar2 = *param_1;
      uVar3 = *param_2;
    }
    else {
      uVar3 = 0xffffffffff;
      *param_2 = 0xffffffffff;
    }
    FUN_1473a2df2(lVar2,uVar3,*(undefined8 *)(param_3 + 0x50),param_4 + *(int *)(param_3 + 0x60),
                  (ulonglong)*(uint *)(param_3 + 0x5c) - (ulonglong)param_4,1);
  }
  return param_2;
}



// FUNCTION 1431a73b2 FUN_1431a73b2 body=274 status=ok
// SIG undefined FUN_1431a73b2(void)

undefined8 * FUN_1431a73b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x21;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  *param_1 = &PTR_FUN_14a361200;
  FUN_147372674(param_1 + 6);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  (**(code **)(*DAT_14ca83900 + 0x4c8))(DAT_14ca83900,&local_58,param_1 + 6);
  param_1[4] = local_48;
  *(undefined4 *)(param_1 + 2) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
  *(undefined4 *)(param_1 + 3) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_4c;
  FUN_147123b8c(param_2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a74c6 FUN_1431a74c6 body=701 status=ok
// SIG undefined FUN_1431a74c6(void)

void FUN_1431a74c6(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  
  *param_1 = &PTR_FUN_14a361200;
  iVar2 = *(int *)(param_1 + 0x21);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar14 = 0;
    iVar12 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x20];
    if ((uint *)param_1[0x20] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x1e);
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      iVar14 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar14 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar13 == uVar19) goto LAB_1431a7582;
        iVar14 = iVar14 + 0x20;
        uVar18 = puVar5[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar13 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar12 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 != iVar2) {
    uVar18 = 0xffffffff;
    iVar4 = iVar2;
    do {
      puVar3 = *(undefined8 **)(param_1[0x1c] + 8 + (longlong)iVar12 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar4 = *(int *)(param_1 + 0x21);
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar5 = (uint *)param_1[0x20];
      if ((uint *)param_1[0x20] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x1e);
      }
      iVar12 = (int)uVar19;
      lVar15 = (longlong)iVar12;
      uVar9 = puVar5[lVar15] & uVar18;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar12) {
          iVar11 = iVar12;
        }
        if (iVar12 < iVar10) {
          lVar16 = 0;
          do {
            uVar9 = puVar5[lVar15 + lVar16 + 1];
            if (uVar9 != 0) {
              uVar19 = (ulonglong)(iVar12 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1431a7720;
            }
            iVar14 = iVar14 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar11 - lVar15 != lVar16);
          uVar18 = 0xffffffff;
          lVar15 = (longlong)iVar11;
        }
        uVar19 = lVar15 + 1U & 0xffffffff;
        iVar12 = iVar4;
      }
      else {
LAB_1431a7720:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar13 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar12 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar12) {
          iVar12 = iVar4;
        }
      }
    } while (iVar12 != iVar2);
  }
LAB_1431a7582:
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c30ee(param_1 + 0x1c);
  lVar15 = param_1[0x1b];
  if (lVar15 != 0) {
    LOCK();
    puVar5 = (uint *)(lVar15 + 8);
    uVar18 = *puVar5;
    *puVar5 = *puVar5 - 1;
    UNLOCK();
    if ((uVar18 & 0x3fffffff) == 1) {
      puVar5 = (uint *)(lVar15 + 8);
      LOCK();
      uVar18 = *puVar5;
      *puVar5 = *puVar5 | 0x40000000;
      UNLOCK();
      if ((uVar18 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(lVar15 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar15;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar20 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar20) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar20 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar20) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  lVar15 = param_1[0x19];
  if (lVar15 != 0) {
    FUN_1473d787a(lVar15);
    FUN_1400020a8(lVar15);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_147123bf0(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_147123b8c(param_1 + 6);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1431a7784 FUN_1431a7784 body=468 status=ok
// SIG undefined FUN_1431a7784(void)

void FUN_1431a7784(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if (lVar4 != param_2) {
    *(longlong *)(param_1 + 0xd8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
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
          plVar9 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = FUN_14001cc68(0x30,0x10);
  FUN_1473d6f7e(uVar8,uVar5,0x3b9d13f0);
  lVar4 = *(longlong *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar8;
  if (lVar4 != 0) {
    FUN_1473d787a(lVar4);
    FUN_1400020a8(lVar4);
    uVar8 = *(undefined8 *)(param_1 + 200);
  }
  FUN_1473d888c(uVar8,*(undefined8 *)(param_1 + 0xd8),param_3,*(int *)(param_2 + 0x20) - param_3);
  FUN_1400021e4(param_1 + 0x9c,&local_48);
  _Src = local_48;
  if ((int)local_40 < 2) {
    FUN_140056680(&local_58,L"TLAS");
  }
  else {
    local_58 = (void *)0x0;
    local_50 = (int)local_40;
    FUN_1446dd670(&local_58,local_40 & 0xffffffff,0);
    memcpy(local_58,_Src,(local_40 & 0xffffffff) * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_40 = CONCAT44(uStack_4c,local_50);
  local_48 = local_58;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431a7959 FUN_1431a7959 body=1254 status=ok
// SIG undefined FUN_1431a7959(void)

void FUN_1431a7959(longlong param_1,longlong param_2,int *param_3,uint param_4,longlong param_5,
                  uint param_6,int param_7,int param_8)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_428 [32];
  undefined4 *local_408;
  int *local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  uint local_3cc;
  int *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  int local_3b0 [4];
  int *local_3a0;
  int local_398 [10];
  undefined1 local_370;
  undefined4 local_36c;
  wchar_t *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_32c;
  undefined4 uStack_324;
  longlong lStack_320;
  undefined4 uStack_318;
  undefined8 uStack_314;
  undefined8 local_30c;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined8 uStack_2e4;
  ulonglong local_2dc;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 local_2bc;
  undefined4 *puStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined4 local_27c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (param_8 != 1) {
    *(int *)(param_2 + 0xd0) = param_7;
  }
  FUN_140048e76(&local_350,param_1);
  local_3c0 = param_1;
  if (param_3 == (int *)0x0) {
    local_3b0[0] = *(int *)(param_2 + 0x18 + (ulonglong)(param_8 == 1) * 8);
    local_398[0] = 0;
    local_398[1] = 0;
    local_398[2] = 0;
    local_398[3] = 0;
    local_398[4] = 1;
    local_398[5] = 0;
    local_398[6] = 0;
    local_398[7] = 0;
    local_398[8] = 0;
    local_398[9] = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_370 = 0;
    local_36c = 0;
    local_368 = L"BuildScratchTLAS";
    local_360 = 0;
    uStack_358 = 0;
    local_3b0[1] = 0;
    local_3b0[2] = 0x90008;
    if (local_3b0[0] == 0) {
      FUN_14570b4be(&local_350,local_398,0x90008,0);
    }
    if (local_2ec._5_1_ == '\0') {
      FUN_14002049c(&local_350,1);
      local_400 = local_398;
      local_408 = (undefined4 *)CONCAT44(local_408._4_4_,0x400);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,&local_350,local_3b0);
      local_3a0[6] = 0x400;
      FUN_14002049c(&local_350,0);
    }
    else {
      local_400 = local_398;
      local_408 = (undefined4 *)CONCAT44(local_408._4_4_,0x400);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,&local_350,local_3b0);
      local_3a0[6] = 0x400;
    }
    local_3cc = 0;
    param_3 = local_3a0;
    local_3c8 = local_3a0;
  }
  else {
    local_3c8 = (int *)0x0;
    local_3cc = param_4;
  }
  FUN_140048db6(&local_350);
  local_350 = 0x3b9d13f6;
  local_34c = 0;
  uStack_334 = 0;
  uStack_324 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  local_30c = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  local_2f0 = 0x3b9d13f0;
  local_2ec = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  local_2bc = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  local_2a8 = 0;
  local_408 = &local_2a0;
  local_2a0 = 0x3b9d1404;
  local_29c = 0;
  uStack_294 = 0;
  local_28c = 0;
  uStack_284 = 0;
  local_27c = 0;
  lStack_320 = (ulonglong)param_6 + *(longlong *)(param_5 + 0x78);
  local_398[0] = param_7;
  uStack_344 = 0x200000000;
  local_33c = 0x3b9d13f400000000;
  local_32c = 0;
  uStack_2e4 = 0;
  local_2dc = (ulonglong)CONCAT14(param_8 != 0,*(undefined4 *)(param_2 + 0x98)) & 0xffffffff0000001f
              | 0x800;
  uStack_2c0 = 1;
  puStack_2b8 = &local_350;
  (*DAT_14ca793e0)(**(undefined8 **)(param_2 + 0x28),1,&local_2f0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 200) + 0x10);
  uStack_2c8 = (undefined4)uVar7;
  uStack_2c4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_8 != 1) {
    uVar7 = 0;
  }
  uStack_2d0 = (undefined4)uVar7;
  uStack_2cc = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_2a8 = (ulonglong)local_3cc + *(longlong *)(param_3 + 0x1e);
  local_3a0 = local_3b0;
  local_3b0[0] = param_7;
  local_3b0[1] = 0;
  local_3b0[2] = 0;
  local_3b0[3] = 0;
  lVar4 = *(longlong *)(local_3c0 + 0x150);
  local_3b8 = param_2;
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    FUN_14739859c(lVar4,0,0);
  }
  lVar5 = *(longlong *)(lVar4 + 0x78);
  local_398[0] = 0x2e;
  local_398[1] = 0;
  local_398[2] = 0;
  local_398[3] = 0;
  local_398[4] = 0x400000;
  local_398[5] = 0x600000;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_408._0_4_ = 1;
  local_400 = local_398;
  (*DAT_14ca79290)(*(undefined8 *)(lVar5 + 0x88),0x2000800,0x2000800,0);
  (*DAT_14ca792e0)(*(undefined8 *)(lVar5 + 0x88),1,&local_2f0,&local_3a0);
  local_398[0] = 0x2e;
  local_398[1] = 0;
  local_398[2] = 0;
  local_398[3] = 0;
  local_398[4] = 0x400000;
  local_398[5] = 0x600000;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_408 = (undefined4 *)CONCAT44(local_408._4_4_,1);
  local_400 = local_398;
  (*DAT_14ca79290)(*(undefined8 *)(lVar5 + 0x88),0x2000800,0x2000800,0);
  local_398[0] = 0;
  local_398[1] = 0;
  local_398[2] = 0;
  FUN_14318eafa(lVar4,local_398);
  FUN_14739639c(lVar4);
  piVar6 = local_3c8;
  *(undefined1 *)(local_3b8 + 0x130) = 1;
  if (local_3c8 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_3c8 + 2);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_3c8 + 2);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)local_3c8 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = (longlong)piVar6;
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
  if ((local_48 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431a7e52 FUN_1431a7e52 body=490 status=ok
// SIG undefined FUN_1431a7e52(void)

void FUN_1431a7e52(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Src;
  size_t _Size;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_1473b939e(*param_1,param_2);
      puVar1 = (undefined8 *)*param_1;
      uVar3 = *puVar1;
      local_58 = FUN_143192298(puVar1 + 0xba,*(undefined4 *)(param_2 + 0x50),1,4);
      _Src = *(void **)(param_2 + 8);
      _Size = *(size_t *)(param_2 + 0x50);
      _Dst = (void *)FUN_1473a804a(local_58 + 0x18,*(undefined8 *)(local_58 + 0x10));
      memcpy(_Dst,_Src,_Size);
      local_98 = 0xc;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      local_74 = 0;
      uStack_6c = 0;
      local_64 = 0;
      uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0x50);
      uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
      uStack_78 = 0x20402;
      iVar2 = (*DAT_14ca793e8)(uVar3,&local_98,0,param_2 + 0x18);
      if (iVar2 != 0) {
        FUN_1431b4552(iVar2,
                      "VulkanRHI::vkCreateBuffer(DeviceHandle, &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &Alloc.LocalBuffer)"
                      ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x423);
      }
      local_c0 = *(undefined4 *)((longlong)puVar1 + 0x2494);
      local_c8 = L"LocalShaderTableAllocation";
      FUN_14319eeca(*param_1 + 0x3d8,param_2 + 0x20,*(undefined8 *)(param_2 + 0x18),0x88);
      local_b0 = 0x3b9e8321;
      local_ac = 0;
      local_a4 = 0;
      local_a0 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = (*DAT_14ca79240)(uVar3);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = (undefined4)*(undefined8 *)(param_2 + 0x50);
      uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
      local_c8 = (wchar_t *)&local_98;
      (*DAT_14ca793f0)(*(undefined8 *)(param_1[1] + 0x88),*(undefined8 *)(local_58 + 0x38),
                       *(undefined8 *)(param_2 + 0x18),1);
      FUN_1473a2c42(*param_1 + 0x5d0,param_1[1],&local_58);
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431a803d FUN_1431a803d body=1382 status=ok
// SIG undefined FUN_1431a803d(void)

void FUN_1431a803d(undefined8 param_1,longlong *param_2,int param_3,longlong *param_4,uint param_5,
                  uint param_6,int param_7,int param_8,longlong param_9)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  int local_84;
  uint local_80;
  uint local_7c;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = *param_4;
  if (lVar13 == 0) {
    iVar4 = 0;
    lVar16 = 0;
  }
  else {
    if (param_8 == 0) {
      lVar16 = (ulonglong)param_5 + *(longlong *)(lVar13 + 0x78);
    }
    else {
      lVar16 = 0;
      if (*(int *)(lVar13 + 0x20) == 0) {
        iVar4 = 4;
        goto LAB_1431a80a5;
      }
    }
    iVar4 = *(int *)(lVar13 + 0x24);
  }
LAB_1431a80a5:
  local_58 = (undefined1 *)0x0;
  local_50 = 0x100000000;
  local_78 = param_4;
  if (0 < (int)param_2[1]) {
    local_80 = (uint)(iVar4 != 2);
    local_84 = iVar4 * 3;
    local_70 = param_9 + 0x70;
    lVar13 = 0x22;
    lVar14 = 0;
    local_b8 = param_3;
    local_a0 = lVar16;
    local_98 = param_2;
    local_68 = param_1;
    do {
      lVar3 = *param_2;
      if (param_8 == 0) {
        uVar18 = (ulonglong)*(uint *)(lVar3 + -0x16 + lVar13) +
                 *(longlong *)(*(longlong *)(lVar3 + -0x22 + lVar13) + 0x78);
      }
      else {
        uVar18 = 0;
      }
      bVar2 = *(byte *)(lVar3 + -2 + lVar13);
      local_7c = bVar2 + 2;
      if (*(char *)(lVar3 + -1 + lVar13) != '\0') {
        local_7c = (uint)bVar2;
      }
      if (param_3 == 1) {
        uVar11 = uVar18 & 0xffffffff00000000;
        uVar19 = (ulonglong)*(uint *)(lVar3 + -0x12 + lVar13);
        local_c4 = 1;
        local_c0 = 0x3b9d13f3;
        uVar15 = uVar18;
LAB_1431a8237:
        local_90 = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_bc = 0;
        local_a8 = 0;
      }
      else {
        if (param_3 != 0) {
          uVar11 = 0;
          uVar19 = 0;
          local_c0 = 0;
          local_c4 = 0;
          uVar15 = 0;
          goto LAB_1431a8237;
        }
        uVar5 = *(uint *)(lVar3 + -0x12 + lVar13);
        local_90 = (ulonglong)uVar5;
        local_b4 = *(undefined4 *)(lVar3 + -0xe + lVar13);
        iVar4 = *(int *)(lVar3 + -10 + lVar13);
        if (*local_78 == 0) {
          uVar5 = iVar4 * uVar5 * 3;
          local_bc = 0x3b9d4e88;
        }
        else {
          uVar5 = iVar4 * local_84;
          local_bc = local_80;
        }
        local_a8 = (ulonglong)uVar5;
        local_c0 = 0x3b9d13f5;
        uVar11 = 0;
        uVar15 = 0x6a;
        local_c4 = 0;
        uVar19 = uVar18;
        local_b0 = lVar16;
      }
      iVar4 = *(int *)(param_9 + 0x68);
      *(uint *)(param_9 + 0x68) = iVar4 + 1U;
      if (*(uint *)(param_9 + 0x6c) < iVar4 + 1U) {
        FUN_1473c3270(param_9,iVar4);
        param_2 = local_98;
        lVar16 = local_a0;
        param_3 = local_b8;
      }
      lVar12 = *(longlong *)(param_9 + 0x60);
      if (*(longlong *)(param_9 + 0x60) == 0) {
        lVar12 = param_9;
      }
      lVar10 = (longlong)iVar4 * 0x60;
      *(undefined4 *)(lVar12 + lVar10) = 0x3b9d13f6;
      uVar17 = 0;
      *(undefined8 *)(lVar12 + 4 + lVar10) = 0;
      *(undefined4 *)(lVar12 + 0xc + lVar10) = 0;
      *(undefined4 *)(lVar12 + 0x10 + lVar10) = local_c4;
      *(undefined4 *)(lVar12 + 0x14 + lVar10) = 0;
      *(undefined4 *)(lVar12 + 0x18 + lVar10) = local_c0;
      *(undefined8 *)(lVar12 + 0x1c + lVar10) = 0;
      *(undefined4 *)(lVar12 + 0x24 + lVar10) = 0;
      *(ulonglong *)(lVar12 + 0x28 + lVar10) = uVar11 | uVar15 & 0xffffffff;
      *(ulonglong *)(lVar12 + 0x30 + lVar10) = uVar19;
      *(ulonglong *)(lVar12 + 0x38 + lVar10) = local_90 & 0xffffffff;
      *(undefined4 *)(lVar12 + 0x40 + lVar10) = local_b4;
      *(uint *)(lVar12 + 0x44 + lVar10) = local_bc;
      *(longlong *)(lVar12 + 0x48 + lVar10) = local_b0;
      *(undefined8 *)(lVar12 + 0x50 + lVar10) = 0;
      *(uint *)(lVar12 + 0x58 + lVar10) = local_7c;
      *(undefined4 *)(lVar12 + 0x5c + lVar10) = 0;
      if (*(char *)(lVar3 + lVar13) != '\0') {
        uVar17 = *(undefined4 *)(lVar3 + -6 + lVar13);
      }
      iVar4 = *(int *)(param_9 + 0x88);
      *(uint *)(param_9 + 0x88) = iVar4 + 1U;
      if (*(uint *)(param_9 + 0x8c) < iVar4 + 1U) {
        FUN_1473c3388(local_70,iVar4);
        param_2 = local_98;
        lVar16 = local_a0;
        param_3 = local_b8;
      }
      uVar18 = local_50;
      lVar12 = *(longlong *)(param_9 + 0x80);
      if (*(longlong *)(param_9 + 0x80) == 0) {
        lVar12 = local_70;
      }
      lVar10 = (longlong)iVar4 * 0x10;
      *(undefined4 *)(lVar12 + lVar10) = uVar17;
      *(int *)(lVar12 + 4 + lVar10) = (int)local_a8;
      *(undefined8 *)(lVar12 + 8 + lVar10) = 0;
      lVar12 = (longlong)(int)local_50;
      uVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar5);
      if (local_50._4_4_ < uVar5) {
        FUN_146f3c7b6(local_60,uVar18 & 0xffffffff);
        param_2 = local_98;
        lVar16 = local_a0;
        param_3 = local_b8;
      }
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_60;
      }
      *(undefined4 *)(puVar6 + lVar12 * 4) = *(undefined4 *)(lVar3 + -6 + lVar13);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x28;
      param_1 = local_68;
    } while (lVar14 < (int)param_2[1]);
  }
  *(undefined4 *)(param_9 + 0xa0) = 1;
  *(uint *)(param_9 + 0xa4) = ((param_6 & 8) >> 1) + (param_6 & 3) + 0x804;
  *(uint *)(param_9 + 0xa8) = (uint)(param_7 != 0);
  *(undefined4 *)(param_9 + 0xc0) = *(undefined4 *)(param_9 + 0x68);
  lVar13 = *(longlong *)(param_9 + 0x60);
  if (*(longlong *)(param_9 + 0x60) == 0) {
    lVar13 = param_9;
  }
  *(longlong *)(param_9 + 200) = lVar13;
  local_d8 = param_9 + 0xe0;
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_60;
  }
  (*DAT_14ca793e0)(param_1,1,param_9 + 0x90,puVar6);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar13 = *local_78;
  if (lVar13 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar13 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar13 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar13 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar13;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar20 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar20) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar20 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar20) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431a85a4 FUN_1431a85a4 body=4911 status=ok
// SIG undefined FUN_1431a85a4(void)

undefined8 * FUN_1431a85a4(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 **local_198;
  longlong local_190;
  longlong local_188;
  undefined8 **local_180;
  undefined8 **local_178;
  undefined8 *local_170;
  undefined8 **local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_141;
  undefined8 *local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xf;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14a361290;
  plVar18 = param_1 + 3;
  local_180 = (undefined8 **)(param_1 + 5);
  local_1c8 = param_1 + 7;
  local_178 = (undefined8 **)(param_1 + 9);
  local_1a0 = param_1 + 0xb;
  local_198 = (undefined8 **)(param_1 + 0xd);
  local_1a8 = param_1 + 0xf;
  local_168 = (undefined8 **)(param_1 + 0x11);
  local_1b0 = param_1 + 0x13;
  local_170 = param_2;
  memset(plVar18,0,0x88);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  lVar5 = *(longlong *)(param_3 + 0x48);
  uVar7 = *(uint *)(param_3 + 0x50);
  uVar11 = (ulonglong)uVar7;
  local_150 = *(longlong *)(param_3 + 0x58);
  local_1d0 = (ulonglong)*(uint *)(param_3 + 0x60);
  local_158 = *(longlong *)(param_3 + 0x68);
  local_1d8 = (ulonglong)*(uint *)(param_3 + 0x70);
  local_160 = *(longlong *)(param_3 + 0x78);
  local_1c0 = (ulonglong)*(uint *)(param_3 + 0x80);
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1b8 = uVar11;
  local_190 = param_3;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar11);
  }
  if (uVar7 != 0) {
    FUN_1473cd6d8(plVar18,uVar11);
    local_188 = uVar11 * 8;
    lVar17 = 0;
    do {
      lVar19 = *(longlong *)(lVar5 + lVar17);
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_1473d21ce(lVar19,&local_f8,0);
      uVar13 = local_f8[2];
      if (local_f8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_f8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_f8)(local_f8,1);
        }
      }
      uVar12 = FUN_14001cc68(0x18,0x10);
      iVar8 = *(int *)(lVar19 + 0x1a8);
      if (iVar8 < 0) {
        iVar8 = *(int *)(lVar19 + 0x1a0);
      }
      local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar19 + 0x124));
      FUN_1407bf796(uVar12,0x18,"main_%0.8x_%0.8x",iVar8);
      uVar11 = uStack_130;
      lVar15 = (longlong)(int)uStack_130;
      uVar7 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
      if (uStack_130._4_4_ < uVar7) {
        FUN_1473cd738(&local_138,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_110;
      *(undefined8 *)(local_138 + lVar15 * 8) = uVar12;
      lVar15 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_1473cd7be(&local_118,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_120;
      lVar15 = lVar15 * 0x30;
      *(undefined4 *)(local_118 + lVar15) = 0x12;
      puVar3 = (undefined4 *)(local_118 + 4 + lVar15);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d4;
      puVar3[2] = uStack_d0;
      puVar3[3] = uStack_cc;
      *(undefined4 *)(local_118 + 0x14 + lVar15) = 0x100;
      *(undefined8 *)(local_118 + 0x18 + lVar15) = uVar13;
      *(undefined8 *)(local_118 + 0x20 + lVar15) = uVar12;
      *(undefined8 *)(local_118 + 0x28 + lVar15) = 0;
      iVar8 = (int)uStack_110;
      lVar15 = (longlong)(int)uStack_120;
      uVar7 = (int)uStack_120 + 1;
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      if (uStack_120._4_4_ < uVar7) {
        FUN_1473cd852(&local_128,uVar11 & 0xffffffff);
      }
      lVar15 = lVar15 * 0x30;
      *(undefined4 *)(local_128 + lVar15) = 0x3b9d1400;
      puVar4 = (undefined8 *)(local_128 + 4 + lVar15);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(int *)(local_128 + 0x14 + lVar15) = iVar8 + -1;
      *(undefined8 *)(local_128 + 0x18 + lVar15) = 0xffffffffffffffff;
      *(undefined4 *)(local_128 + 0x20 + lVar15) = 0xffffffff;
      *(undefined8 *)(local_128 + 0x24 + lVar15) = 0;
      *(undefined4 *)(local_128 + 0x2c + lVar15) = 0;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar8 + 1U) {
        FUN_1473cd8e6(plVar18,iVar8);
      }
      *(longlong *)(*plVar18 + (longlong)iVar8 * 8) = lVar19;
      lVar17 = lVar17 + 8;
    } while (local_188 != lVar17);
  }
  if ((int)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_1d0);
  }
  if (*(int *)((longlong)param_1 + 0x44) < (int)local_1d0) {
    FUN_1473cd6d8(local_1c8);
  }
  if (local_1d0 != 0) {
    lVar5 = local_1d0 * 8;
    lVar17 = 0;
    do {
      lVar19 = *(longlong *)(local_150 + lVar17);
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_1473d21ce(lVar19,&local_f8,0);
      uVar13 = local_f8[2];
      if (local_f8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_f8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_f8)(local_f8,1);
        }
      }
      uVar12 = FUN_14001cc68(0x18,0x10);
      iVar8 = *(int *)(lVar19 + 0x1a8);
      if (iVar8 < 0) {
        iVar8 = *(int *)(lVar19 + 0x1a0);
      }
      local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar19 + 0x124));
      FUN_1407bf796(uVar12,0x18,"main_%0.8x_%0.8x",iVar8);
      uVar11 = uStack_130;
      lVar15 = (longlong)(int)uStack_130;
      uVar7 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
      if (uStack_130._4_4_ < uVar7) {
        FUN_1473cd738(&local_138,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_110;
      *(undefined8 *)(local_138 + lVar15 * 8) = uVar12;
      lVar15 = (longlong)(int)uStack_110;
      uVar7 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
      if (uStack_110._4_4_ < uVar7) {
        FUN_1473cd7be(&local_118,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_120;
      lVar15 = lVar15 * 0x30;
      *(undefined4 *)(local_118 + lVar15) = 0x12;
      puVar3 = (undefined4 *)(local_118 + 4 + lVar15);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d4;
      puVar3[2] = uStack_d0;
      puVar3[3] = uStack_cc;
      *(undefined4 *)(local_118 + 0x14 + lVar15) = 0x800;
      *(undefined8 *)(local_118 + 0x18 + lVar15) = uVar13;
      *(undefined8 *)(local_118 + 0x20 + lVar15) = uVar12;
      *(undefined8 *)(local_118 + 0x28 + lVar15) = 0;
      iVar8 = (int)uStack_110;
      lVar15 = (longlong)(int)uStack_120;
      uVar7 = (int)uStack_120 + 1;
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      if (uStack_120._4_4_ < uVar7) {
        FUN_1473cd852(&local_128,uVar11 & 0xffffffff);
      }
      lVar15 = lVar15 * 0x30;
      *(undefined4 *)(local_128 + lVar15) = 0x3b9d1400;
      puVar4 = (undefined8 *)(local_128 + 4 + lVar15);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(int *)(local_128 + 0x14 + lVar15) = iVar8 + -1;
      *(undefined8 *)(local_128 + 0x18 + lVar15) = 0xffffffffffffffff;
      *(undefined4 *)(local_128 + 0x20 + lVar15) = 0xffffffff;
      *(undefined8 *)(local_128 + 0x24 + lVar15) = 0;
      *(undefined4 *)(local_128 + 0x2c + lVar15) = 0;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 8);
      *(uint *)(param_1 + 8) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x44) < iVar8 + 1U) {
        FUN_1473cd8e6(local_1c8,iVar8);
      }
      *(longlong *)(*local_1c8 + (longlong)iVar8 * 8) = lVar19;
      lVar17 = lVar17 + 8;
    } while (lVar5 - lVar17 != 0);
  }
  uVar11 = local_1d8;
  if (-1 < (int)local_1d8) {
    if (*(int *)((longlong)param_1 + 100) < (int)local_1d8) {
      FUN_1473cd6d8(local_1a0,local_1d8 & 0xffffffff);
    }
    if (uVar11 != 0) {
      local_1c8 = (longlong *)(local_1d8 * 8);
      plVar18 = (longlong *)0x0;
      do {
        lVar5 = *(longlong *)(local_158 + (longlong)plVar18);
        local_f8 = (undefined8 *)0x0;
        uStack_f0 = (undefined8 *)((ulonglong)uStack_f0 & 0xffffffff00000000);
        local_70 = 0;
        local_68 = 0;
        uVar13 = FUN_14001cc68(0x18,0x10);
        iVar8 = *(int *)(lVar5 + 0x1a8);
        if (iVar8 < 0) {
          iVar8 = *(int *)(lVar5 + 0x1a0);
        }
        local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar5 + 0x124));
        FUN_1407bf796(uVar13,0x18,"main_%0.8x_%0.8x",iVar8);
        uVar11 = uStack_130;
        lVar17 = (longlong)(int)uStack_130;
        uVar7 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
        if (uStack_130._4_4_ < uVar7) {
          FUN_1473cd738(&local_138,uVar11 & 0xffffffff);
        }
        *(undefined8 *)(local_138 + lVar17 * 8) = uVar13;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        FUN_1473d21ce(lVar5,&local_108,0);
        uVar12 = *(undefined8 *)(local_108 + 0x10);
        if (local_108 != (code *)0x0) {
          LOCK();
          pcVar2 = local_108 + 8;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          UNLOCK();
          if (*(int *)pcVar2 == 0) {
            (*(code *)**(undefined8 **)local_108)(local_108,1);
          }
        }
        iVar8 = (int)uStack_110;
        uVar11 = uStack_110 & 0xffffffff;
        uVar7 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
        if (uStack_110._4_4_ < uVar7) {
          FUN_1473cd7be(&local_118,uVar11);
        }
        lVar17 = (longlong)iVar8 * 0x30;
        *(undefined4 *)(local_118 + lVar17) = 0x12;
        puVar3 = (undefined4 *)(local_118 + 4 + lVar17);
        *puVar3 = local_d8;
        puVar3[1] = uStack_d4;
        puVar3[2] = uStack_d0;
        puVar3[3] = uStack_cc;
        *(undefined4 *)(local_118 + 0x14 + lVar17) = 0x400;
        *(undefined8 *)(local_118 + 0x18 + lVar17) = uVar12;
        *(undefined8 *)(local_118 + 0x20 + lVar17) = uVar13;
        *(undefined8 *)(local_118 + 0x28 + lVar17) = 0;
        iVar10 = -1;
        iVar9 = -1;
        if (*(char *)(lVar5 + 0x129) != '\0') {
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          FUN_1473d21ce(lVar5,&local_108,1);
          uVar13 = *(undefined8 *)(local_108 + 0x10);
          if (local_108 != (code *)0x0) {
            LOCK();
            pcVar2 = local_108 + 8;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            UNLOCK();
            if (*(int *)pcVar2 == 0) {
              (*(code *)**(undefined8 **)local_108)(local_108,1);
            }
          }
          uVar11 = uStack_110;
          iVar9 = (int)uStack_110;
          uVar7 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
          if (uStack_110._4_4_ < uVar7) {
            FUN_1473cd7be(&local_118,uVar11 & 0xffffffff);
          }
          lVar17 = (longlong)iVar9 * 0x30;
          *(undefined4 *)(local_118 + lVar17) = 0x12;
          puVar3 = (undefined4 *)(local_118 + 4 + lVar17);
          *puVar3 = local_d8;
          puVar3[1] = uStack_d4;
          puVar3[2] = uStack_d0;
          puVar3[3] = uStack_cc;
          *(undefined4 *)(local_118 + 0x14 + lVar17) = 0x200;
          *(undefined8 *)(local_118 + 0x18 + lVar17) = uVar13;
          *(char **)(local_118 + 0x20 + lVar17) = "main_00000000_00000000";
          *(undefined8 *)(local_118 + 0x28 + lVar17) = 0;
        }
        if (*(char *)(lVar5 + 0x12a) == '\0') {
          uVar16 = 1;
        }
        else {
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          FUN_1473d21ce(lVar5,&local_108,2);
          uVar13 = *(undefined8 *)(local_108 + 0x10);
          if (local_108 != (code *)0x0) {
            LOCK();
            pcVar2 = local_108 + 8;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            UNLOCK();
            if (*(int *)pcVar2 == 0) {
              (*(code *)**(undefined8 **)local_108)(local_108,1);
            }
          }
          uVar11 = uStack_110;
          iVar10 = (int)uStack_110;
          uVar7 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
          if (uStack_110._4_4_ < uVar7) {
            FUN_1473cd7be(&local_118,uVar11 & 0xffffffff);
          }
          lVar17 = (longlong)iVar10 * 0x30;
          *(undefined4 *)(local_118 + lVar17) = 0x12;
          puVar3 = (undefined4 *)(local_118 + 4 + lVar17);
          *puVar3 = local_d8;
          puVar3[1] = uStack_d4;
          puVar3[2] = uStack_d0;
          puVar3[3] = uStack_cc;
          *(undefined4 *)(local_118 + 0x14 + lVar17) = 0x1000;
          *(undefined8 *)(local_118 + 0x18 + lVar17) = uVar13;
          *(char **)(local_118 + 0x20 + lVar17) = "main_00000000_00000000";
          *(undefined8 *)(local_118 + 0x28 + lVar17) = 0;
          uVar16 = 2;
        }
        uVar11 = uStack_120;
        lVar17 = (longlong)(int)uStack_120;
        uVar7 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
        if (uStack_120._4_4_ < uVar7) {
          FUN_1473cd852(&local_128,uVar11 & 0xffffffff);
        }
        lVar17 = lVar17 * 0x30;
        *(undefined4 *)(local_128 + lVar17) = 0x3b9d1400;
        *(undefined8 **)(local_128 + 4 + lVar17) = local_f8;
        *(undefined4 *)(local_128 + 0xc + lVar17) = (undefined4)uStack_f0;
        *(undefined4 *)(local_128 + 0x10 + lVar17) = uVar16;
        *(undefined4 *)(local_128 + 0x14 + lVar17) = 0xffffffff;
        *(int *)(local_128 + 0x18 + lVar17) = iVar8;
        *(int *)(local_128 + 0x1c + lVar17) = iVar9;
        *(int *)(local_128 + 0x20 + lVar17) = iVar10;
        *(undefined8 *)(local_128 + 0x24 + lVar17) = local_70;
        *(undefined4 *)(local_128 + 0x2c + lVar17) = local_68;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        iVar8 = *(int *)(param_1 + 0xc);
        *(uint *)(param_1 + 0xc) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 100) < iVar8 + 1U) {
          FUN_1473cd8e6(local_1a0,iVar8);
        }
        *(longlong *)(*local_1a0 + (longlong)iVar8 * 8) = lVar5;
        plVar18 = plVar18 + 1;
      } while (local_1c8 != plVar18);
    }
    uVar11 = local_1c0;
    if (-1 < (int)local_1c0) {
      if (*(int *)((longlong)param_1 + 0x84) < (int)local_1c0) {
        FUN_1473cd6d8(local_1a8,local_1c0 & 0xffffffff);
      }
      if (uVar11 != 0) {
        lVar5 = local_1c0 * 8;
        lVar17 = 0;
        do {
          lVar19 = *(longlong *)(local_160 + lVar17);
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          FUN_1473d21ce(lVar19,&local_f8,0);
          uVar13 = local_f8[2];
          if (local_f8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_f8 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_f8)(local_f8,1);
            }
          }
          uVar12 = FUN_14001cc68(0x18,0x10);
          iVar8 = *(int *)(lVar19 + 0x1a8);
          if (iVar8 < 0) {
            iVar8 = *(int *)(lVar19 + 0x1a0);
          }
          local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar19 + 0x124));
          FUN_1407bf796(uVar12,0x18,"main_%0.8x_%0.8x",iVar8);
          uVar11 = uStack_130;
          lVar15 = (longlong)(int)uStack_130;
          uVar7 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
          if (uStack_130._4_4_ < uVar7) {
            FUN_1473cd738(&local_138,uVar11 & 0xffffffff);
          }
          uVar11 = uStack_110;
          *(undefined8 *)(local_138 + lVar15 * 8) = uVar12;
          lVar15 = (longlong)(int)uStack_110;
          uVar7 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
          if (uStack_110._4_4_ < uVar7) {
            FUN_1473cd7be(&local_118,uVar11 & 0xffffffff);
          }
          uVar11 = uStack_120;
          lVar15 = lVar15 * 0x30;
          *(undefined4 *)(local_118 + lVar15) = 0x12;
          puVar3 = (undefined4 *)(local_118 + 4 + lVar15);
          *puVar3 = local_d8;
          puVar3[1] = uStack_d4;
          puVar3[2] = uStack_d0;
          puVar3[3] = uStack_cc;
          *(undefined4 *)(local_118 + 0x14 + lVar15) = 0x2000;
          *(undefined8 *)(local_118 + 0x18 + lVar15) = uVar13;
          *(undefined8 *)(local_118 + 0x20 + lVar15) = uVar12;
          *(undefined8 *)(local_118 + 0x28 + lVar15) = 0;
          iVar8 = (int)uStack_110;
          lVar15 = (longlong)(int)uStack_120;
          uVar7 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
          if (uStack_120._4_4_ < uVar7) {
            FUN_1473cd852(&local_128,uVar11 & 0xffffffff);
          }
          lVar15 = lVar15 * 0x30;
          *(undefined4 *)(local_128 + lVar15) = 0x3b9d1400;
          puVar4 = (undefined8 *)(local_128 + 4 + lVar15);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int *)(local_128 + 0x14 + lVar15) = iVar8 + -1;
          *(undefined8 *)(local_128 + 0x18 + lVar15) = 0xffffffffffffffff;
          *(undefined4 *)(local_128 + 0x20 + lVar15) = 0xffffffff;
          *(undefined8 *)(local_128 + 0x24 + lVar15) = 0;
          *(undefined4 *)(local_128 + 0x2c + lVar15) = 0;
          if (lVar19 != 0) {
            LOCK();
            *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
            UNLOCK();
          }
          iVar8 = *(int *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x10) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0x84) < iVar8 + 1U) {
            FUN_1473cd8e6(local_1a8,iVar8);
          }
          *(longlong *)(*local_1a8 + (longlong)iVar8 * 8) = lVar19;
          lVar17 = lVar17 + 8;
        } while (lVar5 - lVar17 != 0);
      }
      puVar4 = local_170;
      local_d8 = 0x3b9d13ff;
      local_b4 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_a4 = 0;
      uStack_9c = 0;
      local_94 = 0;
      uStack_8c = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_74 = 0;
      local_c4 = (int)uStack_110;
      uStack_c0 = (undefined4)local_118;
      uStack_bc = (undefined4)((ulonglong)local_118 >> 0x20);
      uStack_b8 = (int)uStack_120;
      uStack_b0 = (undefined4)local_128;
      uStack_ac = (undefined4)((ulonglong)local_128 >> 0x20);
      uStack_a8 = 1;
      uStack_88 = (undefined4)*(undefined8 *)(local_170[0xd6] + 0x4d0);
      uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(local_170[0xd6] + 0x4d0) >> 0x20);
      local_c8 = 0x20000000;
      local_140 = (undefined8 *)0x0;
      if ((-1 < DAT_14ca78580) && (iVar8 = (*DAT_14ca792e8)(*local_170,0,&local_140), iVar8 != 0)) {
        FUN_1431b4552(iVar8,
                      "VulkanRHI::vkCreateDeferredOperationKHR( InDevice->GetInstanceHandle(), VULKAN_CPU_ALLOCATOR, &DeferredOp)"
                      ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x653);
      }
      puVar20 = local_1b0;
      local_1e8 = local_1b0;
      local_1f8 = &local_d8;
      local_1f0 = (undefined8 *)0x0;
      iVar8 = (*DAT_14ca792f0)(*puVar4,local_140,0,1);
      uVar11 = local_1b8;
      if (iVar8 < 0) {
        FUN_1431b4552(iVar8,
                      "VulkanDynamicAPI::vkCreateRayTracingPipelinesKHR( InDevice->GetInstanceHandle(), DeferredOp, VK_NULL_HANDLE, 1, &RayTracingPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &Pipeline)"
                      ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x65d);
      }
      if (local_140 != (undefined8 *)0x0) {
        iVar8 = (**(code **)(*DAT_14c82b500 + 0x20))();
        iVar9 = (*DAT_14ca792f8)(*puVar4,local_140);
        if (iVar9 < iVar8) {
          iVar8 = iVar9;
        }
        if (DAT_14ca78580 < 1) {
          iVar10 = iVar8 + -2;
          bVar21 = SBORROW4(iVar8,4);
          iVar9 = iVar8 + -4;
        }
        else {
          bVar21 = SBORROW4(iVar8,DAT_14ca78580);
          iVar9 = iVar8 - DAT_14ca78580;
          iVar10 = DAT_14ca78580;
        }
        if (bVar21 != iVar9 < 0) {
          iVar10 = iVar8;
        }
        local_e8 = &local_141;
        local_141 = 0;
        local_100 = &local_f8;
        local_f8 = local_140;
        uStack_f0 = puVar4;
        local_1e8 = &local_70;
        local_70 = 0;
        local_68 = 0;
        local_108 = FUN_1431b1c8a;
        local_1f0 = (undefined8 *)((ulonglong)local_1f0 & 0xffffffff00000000);
        FUN_1401f8d10(L"ParallelFor Task",iVar10,1);
        iVar8 = (*DAT_14ca79300)(*puVar4,local_140);
        if (iVar8 != 0) {
          FUN_1431b4552(iVar8,
                        "VulkanRHI::vkGetDeferredOperationResultKHR(InDevice->GetInstanceHandle(), DeferredOp)"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x680);
        }
        (*DAT_14ca79308)(*puVar4,local_140,0);
      }
      lVar5 = local_138;
      lVar17 = (longlong)(int)uStack_130;
      if (lVar17 != 0) {
        lVar19 = 0;
        do {
          if (*(longlong *)(lVar5 + lVar19) != 0) {
            FUN_1400020a8();
          }
          lVar19 = lVar19 + 8;
        } while (lVar17 * 8 != lVar19);
      }
      iVar8 = *(int *)(puVar4 + 0x491);
      uVar13 = *puVar20;
      local_f8 = (undefined8 *)0x0;
      uStack_f0 = (undefined8 *)0x0;
      iVar9 = (int)uVar11;
      uVar14 = local_1d8;
      if (iVar9 != 0) {
        uVar7 = iVar8 * iVar9;
        uStack_f0 = (undefined8 *)(ulonglong)uVar7;
        if (uVar7 != 0) {
          FUN_1447403be(&local_f8,0);
        }
        uVar14 = local_1d8;
        local_1f8 = (undefined4 *)(ulonglong)uVar7;
        local_1f0 = local_f8;
        iVar10 = (*DAT_14ca793f8)(*puVar4,uVar13,0,uVar11 & 0xffffffff);
        if (iVar10 != 0) {
          FUN_1431b4552(iVar10,
                        "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice->GetInstanceHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x699);
        }
      }
      if (local_180 == &local_f8) {
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_180 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1[5] = local_f8;
        *(undefined4 *)(param_1 + 6) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_f0._4_4_;
      }
      uVar13 = *puVar20;
      local_f8 = (undefined8 *)0x0;
      uStack_f0 = (undefined8 *)0x0;
      if (local_1d0 != 0) {
        uVar7 = iVar8 * (int)local_1d0;
        uStack_f0 = (undefined8 *)(ulonglong)uVar7;
        if (uVar7 != 0) {
          FUN_1447403be(&local_f8,0);
          uVar14 = local_1d8;
        }
        local_1f8 = (undefined4 *)(ulonglong)uVar7;
        local_1f0 = local_f8;
        iVar10 = (*DAT_14ca793f8)(*puVar4,uVar13,uVar11 & 0xffffffff,local_1d0);
        if (iVar10 != 0) {
          FUN_1431b4552(iVar10,
                        "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice->GetInstanceHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x699);
        }
        uVar11 = (ulonglong)(uint)((int)local_1d0 + iVar9);
        puVar20 = local_1b0;
      }
      if (local_178 == &local_f8) {
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_178 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1[9] = local_f8;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_f0._4_4_;
      }
      uVar13 = *puVar20;
      local_f8 = (undefined8 *)0x0;
      uStack_f0 = (undefined8 *)0x0;
      if (uVar14 != 0) {
        uVar7 = iVar8 * (int)uVar14;
        uStack_f0 = (undefined8 *)(ulonglong)uVar7;
        if (uVar7 != 0) {
          FUN_1447403be(&local_f8,0);
          uVar14 = local_1d8;
        }
        local_1f8 = (undefined4 *)(ulonglong)uVar7;
        local_1f0 = local_f8;
        iVar9 = (*DAT_14ca793f8)(*puVar4,uVar13,uVar11 & 0xffffffff,uVar14 & 0xffffffff);
        if (iVar9 != 0) {
          FUN_1431b4552(iVar9,
                        "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice->GetInstanceHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x699);
        }
        uVar11 = (ulonglong)(uint)((int)uVar11 + (int)uVar14);
        puVar20 = local_1b0;
      }
      if (local_198 == &local_f8) {
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_198 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1[0xd] = local_f8;
        *(undefined4 *)(param_1 + 0xe) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x74) = uStack_f0._4_4_;
      }
      uVar13 = *puVar20;
      local_f8 = (undefined8 *)0x0;
      uStack_f0 = (undefined8 *)0x0;
      if (local_1c0 != 0) {
        uVar7 = iVar8 * (int)local_1c0;
        uStack_f0 = (undefined8 *)(ulonglong)uVar7;
        if (uVar7 != 0) {
          FUN_1447403be(&local_f8,0);
        }
        local_1f8 = (undefined4 *)(ulonglong)uVar7;
        local_1f0 = local_f8;
        iVar8 = (*DAT_14ca793f8)(*puVar4,uVar13,uVar11 & 0xffffffff,local_1c0);
        if (iVar8 != 0) {
          FUN_1431b4552(iVar8,
                        "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice->GetInstanceHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x699);
        }
      }
      lVar5 = local_190;
      if (local_168 == &local_f8) {
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_168 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1[0x11] = local_f8;
        local_f8 = (undefined8 *)0x0;
        *(undefined4 *)(param_1 + 0x12) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x94) = uStack_f0._4_4_;
      }
      uVar6 = 0;
      if (*(int *)(lVar5 + 0x70) != 0) {
        uVar6 = (undefined1)*(undefined4 *)(lVar5 + 8);
      }
      *(undefined1 *)(param_1 + 0x14) = uVar6;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar11);
}



// FUNCTION 1431a98d6 FUN_1431a98d6 body=1480 status=ok
// SIG undefined FUN_1431a98d6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431a98d6(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_2d18 [32];
  undefined4 local_2cf8;
  undefined4 *local_2cf0;
  undefined4 local_2ce8;
  ulonglong local_2ce0;
  ulonglong local_2cd8;
  undefined8 local_2cd0;
  longlong local_2cc0;
  longlong *local_2cb8;
  longlong local_2cb0;
  undefined8 local_2ca8;
  undefined4 local_2ca0;
  longlong local_2c98;
  undefined4 local_2c90;
  undefined4 uStack_2c8c;
  undefined4 uStack_2c88;
  undefined4 local_2c84;
  undefined8 local_2c80;
  undefined1 local_2c78 [256];
  undefined1 *local_2b78;
  undefined8 local_2b70;
  undefined1 local_2b68 [2560];
  undefined1 *local_2168;
  undefined8 local_2160;
  undefined1 local_2158 [8448];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d18;
  uVar6 = 0;
  local_2cc0 = param_1;
  local_2cb8 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    plVar14 = (longlong *)*param_2;
    plVar17 = plVar14 + (longlong)(int)param_2[1] * 4;
    do {
      if (0 < (int)plVar14[3]) {
        lVar20 = *plVar14;
        lVar23 = 0;
        do {
          lVar13 = lVar23 * 0x28;
          lVar22 = *(longlong *)(plVar14[2] + lVar13);
          lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x40) + lVar13);
          if (lVar18 != lVar22) {
            *(longlong *)(*(longlong *)(lVar20 + 0x40) + lVar13) = lVar22;
            if (lVar22 != 0) {
              LOCK();
              *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
              UNLOCK();
            }
            if (lVar18 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar18 + 8);
              uVar6 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar6 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar18 + 8);
                LOCK();
                uVar6 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar6 >> 0x1e & 1) == 0) {
                  bVar5 = *(byte *)(lVar18 + 0xd);
                  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar7[1] = lVar18;
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c8;
                  if ((bVar5 & 2) == 0) {
                    do {
                      *plVar7 = (longlong)plVar9;
                      LOCK();
                      bVar24 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar7;
                      if (bVar24) {
                        plVar9 = DAT_14ca843c0;
                        plVar8 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar8;
                      UNLOCK();
                    } while (bVar24);
                  }
                  else {
                    do {
                      *plVar7 = (longlong)plVar8;
                      LOCK();
                      bVar24 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar7;
                      if (bVar24) {
                        plVar8 = DAT_14ca843c8;
                        plVar9 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar9;
                      UNLOCK();
                    } while (bVar24);
                  }
                }
              }
            }
          }
          *(undefined4 *)(*(longlong *)(lVar20 + 0x40) + 8 + lVar13) =
               *(undefined4 *)(plVar14[2] + 8 + lVar13);
          *(undefined4 *)(*(longlong *)(lVar20 + 0x40) + 0x10 + lVar13) =
               *(undefined4 *)(plVar14[2] + 0x10 + lVar13);
          *(undefined4 *)(*(longlong *)(lVar20 + 0x40) + 0xc + lVar13) =
               *(undefined4 *)(plVar14[2] + 0xc + lVar13);
          lVar23 = lVar23 + 1;
        } while (lVar23 < (int)plVar14[3]);
      }
      plVar14 = plVar14 + 4;
    } while (plVar14 != plVar17);
    uVar6 = *(uint *)(local_2cb8 + 1);
  }
  plVar14 = local_2cb8;
  local_2cb0 = *param_3;
  uVar15 = (ulonglong)*(uint *)(param_3 + 1);
  local_58 = 0;
  local_50 = 0x2000000000;
  local_2168 = (undefined1 *)0x0;
  local_2160 = 0x2000000000;
  local_2b78 = (undefined1 *)0x0;
  local_2b70 = 0x2000000000;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  local_2160._4_4_ = 0x20;
  if (0x20 < uVar6) {
    FUN_1473ccdf8(local_2158);
    uVar6 = *(uint *)(plVar14 + 1);
    if ((int)uVar6 < 0) goto LAB_1431a9e97;
  }
  if ((int)local_2160._4_4_ < (int)uVar6) {
    FUN_1473ccefc(local_2b68);
    uVar6 = *(uint *)(plVar14 + 1);
    if ((int)uVar6 < 0) {
LAB_1431a9e97:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
  }
  if (0x20 < uVar6) {
    FUN_1473cd00a(local_2c78);
    uVar6 = *(uint *)(plVar14 + 1);
  }
  if (uVar6 != 0) {
    plVar14 = (longlong *)*local_2cb8;
    plVar17 = plVar14 + (longlong)(int)uVar6 * 4;
    do {
      lVar20 = *plVar14;
      lVar22 = plVar14[1];
      lVar23 = *(longlong *)(lVar20 + 0x18 + (ulonglong)((int)lVar22 == 1) * 8);
      uVar10 = FUN_1473b9fc8(local_2158);
      uVar6 = (uint)*(byte *)(lVar20 + 0x3d) + (uint)*(byte *)(lVar20 + 0x3c) * 4 + 4;
      if ((*(byte *)(lVar20 + 0x3c) == 0) && (*(byte *)(lVar20 + 0x3d) == 0)) {
        uVar2 = uVar6 | 2;
        if (DAT_14c760c80 == 0) {
          uVar2 = uVar6;
        }
        if (*(char *)(lVar20 + 0x3e) != '\0') {
          uVar6 = uVar2;
        }
      }
      local_2ce8 = (undefined4)plVar14[1];
      local_2cf8 = *(undefined4 *)(lVar20 + 0x30);
      local_2c98 = *(longlong *)(lVar20 + 0x28);
      if (local_2c98 != 0) {
        LOCK();
        *(int *)(local_2c98 + 8) = *(int *)(local_2c98 + 8) + 1;
        UNLOCK();
      }
      local_2ca8 = *(undefined8 *)(lVar20 + 0x40);
      local_2ca0 = *(undefined4 *)(lVar20 + 0x48);
      local_2cf0 = (undefined4 *)CONCAT44(local_2cf0._4_4_,uVar6);
      local_2ce0 = local_2ce0 & 0xffffffff00000000;
      local_2cd8 = uVar10;
      FUN_1431a803d(**(undefined8 **)(local_2cc0 + 0x120),&local_2ca8,*(undefined4 *)(lVar20 + 0x34)
                    ,&local_2c98);
      uVar4 = local_2160;
      uVar11 = *(undefined8 *)(lVar20 + 0x78);
      *(undefined8 *)(uVar10 + 0xb8) = uVar11;
      if ((int)lVar22 != 1) {
        uVar11 = 0;
      }
      *(undefined8 *)(uVar10 + 0xb0) = uVar11;
      *(ulonglong *)(uVar10 + 0xd8) = *(longlong *)(local_2cb0 + 0x78) + (uVar15 & 0xffffffff);
      lVar22 = uVar10 + 0x70;
      if (*(longlong *)(uVar10 + 0x80) != 0) {
        lVar22 = *(longlong *)(uVar10 + 0x80);
      }
      lVar18 = (longlong)(int)local_2160;
      uVar6 = (int)local_2160 + 1;
      local_2160 = CONCAT44(local_2160._4_4_,uVar6);
      if (local_2160._4_4_ < uVar6) {
        FUN_1473cd200(local_2b68,uVar4 & 0xffffffff);
      }
      uVar4 = local_2b70;
      puVar12 = local_2168;
      if (local_2168 == (undefined1 *)0x0) {
        puVar12 = local_2b68;
      }
      puVar16 = (undefined8 *)(uVar10 + 0x90);
      puVar19 = (undefined8 *)(puVar12 + lVar18 * 0x50);
      for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar19 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar19 = puVar19 + 1;
      }
      lVar18 = (longlong)(int)local_2b70;
      uVar6 = (int)local_2b70 + 1;
      local_2b70 = CONCAT44(local_2b70._4_4_,uVar6);
      if (local_2b70._4_4_ < uVar6) {
        FUN_1473cd28a(local_2c78,uVar4 & 0xffffffff);
      }
      uVar15 = lVar23 + (uVar15 & 0xffffffff);
      puVar12 = local_2b78;
      if (local_2b78 == (undefined1 *)0x0) {
        puVar12 = local_2c78;
      }
      *(longlong *)(puVar12 + lVar18 * 8) = lVar22;
      FUN_1473b8ace(lVar20);
      plVar14 = plVar14 + 4;
    } while (plVar14 != plVar17);
  }
  lVar20 = *(longlong *)(local_2cc0 + 0x150);
  if (*(longlong *)(lVar20 + 0x80) != 0) {
    FUN_14739859c(lVar20,0,0);
  }
  plVar14 = local_2cb8;
  puVar12 = local_2b78;
  if (local_2b78 == (undefined1 *)0x0) {
    puVar12 = local_2c78;
  }
  lVar20 = *(longlong *)(lVar20 + 0x78);
  puVar21 = local_2168;
  if (local_2168 == (undefined1 *)0x0) {
    puVar21 = local_2b68;
  }
  (*DAT_14ca792e0)(*(undefined8 *)(lVar20 + 0x88),(int)local_2cb8[1],puVar21,puVar12);
  local_2cf0 = &local_2c90;
  local_2c90 = 0x2e;
  uStack_2c8c = 0;
  uStack_2c88 = 0;
  local_2c84 = 0;
  local_2c80 = 0x60000000400000;
  local_2cd0 = 0;
  local_2cd8 = local_2cd8 & 0xffffffff00000000;
  local_2ce0 = 0;
  local_2ce8 = 0;
  local_2cf8 = 1;
  (*DAT_14ca79290)(*(undefined8 *)(lVar20 + 0x88),0x2000800,0x2000800,0);
  lVar20 = local_2cc0;
  local_2c90 = 0;
  uStack_2c8c = 0;
  uStack_2c88 = 0;
  FUN_14318eafa(*(undefined8 *)(local_2cc0 + 0x150),&local_2c90);
  FUN_14739639c(*(undefined8 *)(lVar20 + 0x150));
  lVar20 = (longlong)(int)plVar14[1];
  if (lVar20 != 0) {
    lVar23 = *plVar14;
    lVar22 = 0;
    do {
      lVar18 = *(longlong *)(lVar23 + lVar22);
      bVar5 = *(char *)(lVar18 + 0x3d) + *(char *)(lVar18 + 0x3c) * '\x04' + 4;
      if ((*(char *)(lVar18 + 0x3c) == '\0') && (*(char *)(lVar18 + 0x3d) == '\0')) {
        bVar3 = bVar5 | 2;
        if (DAT_14c760c80 == 0) {
          bVar3 = bVar5;
        }
        if (*(char *)(lVar18 + 0x3e) != '\0') {
          bVar5 = bVar3;
        }
      }
      if ((bVar5 & 7) == 6) {
        FUN_1473ba022(*(undefined8 *)(*(longlong *)(local_2cc0 + 0x120) + 0xef0),lVar18);
        *(undefined1 *)(lVar18 + 0x90) = 1;
      }
      lVar22 = lVar22 + 0x20;
    } while (lVar20 * 0x20 != lVar22);
  }
  if (local_2b78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1473ba080(local_2158);
  if ((local_48 ^ (ulonglong)auStack_2d18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431a9ea0 FUN_1431a9ea0 body=41 status=ok
// SIG undefined FUN_1431a9ea0(void)

void FUN_1431a9ea0(void)

{
  DAT_14ca78668 = 0;
  if (DAT_14ca78660 != 0) {
    FUN_1400020a8();
  }
  FUN_14619268e();
  return;
}



// FUNCTION 1431a9ed6 FUN_1431a9ed6 body=1827 status=ok
// SIG undefined FUN_1431a9ed6(void)

void FUN_1431a9ed6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  LONG *pLVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  LONG LVar9;
  LPCRITICAL_SECTION p_Var10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  LPCRITICAL_SECTION local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  lVar21 = param_1 + 0x40;
  iVar12 = *(int *)(param_1 + 0x48);
  if (iVar12 < 1) {
    if (0 < *(int *)(param_1 + 0x58)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xe0) <= *(ulonglong *)(param_1 + 0x68))
        goto LAB_1431aa01f;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
      }
      FUN_1473ba574(param_1 + 0x50,DAT_14c760c84);
    }
    iVar12 = *(int *)(param_1 + 0x38);
    local_150 = lpCriticalSection;
    local_148 = param_2;
    if ((longlong)iVar12 == 0) {
      uVar20 = *(uint *)(param_1 + 0x58);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x30);
      lVar19 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + lVar19);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        iVar4 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
          FUN_1473cdbc6(param_1 + 0x50,iVar4);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8) = lVar6;
        iVar4 = *(int *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x48) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x4c) < iVar4 + 1U) {
          FUN_1473cc424(lVar21,iVar4);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 8) =
             *(undefined8 *)(lVar6 + 0x78);
        uVar20 = *(uint *)(param_1 + 0x58);
      } while (((int)uVar20 < DAT_14c760c84) &&
              (bVar22 = (longlong)iVar12 * 8 + -8 != lVar19, lVar19 = lVar19 + 8, bVar22));
    }
    lVar21 = local_148;
    lpCriticalSection = local_150;
    if (0 < (int)uVar20) {
      iVar12 = *(int *)(param_1 + 0x38) - uVar20;
      uVar18 = uVar20;
      if (iVar12 != 0) {
        memmove(*(void **)(param_1 + 0x30),
                (void *)((longlong)*(void **)(param_1 + 0x30) + (ulonglong)uVar20 * 8),
                (longlong)iVar12 << 3);
        uVar18 = *(uint *)(param_1 + 0x38);
      }
      *(uint *)(param_1 + 0x38) = uVar18 - uVar20;
      lVar21 = *(longlong *)(lVar21 + 0x150);
      if (*(longlong *)(lVar21 + 0x80) != 0) {
        FUN_14739859c(lVar21,0,0);
      }
      lVar5 = *(longlong *)(lVar21 + 0x78);
      local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10);
      uStack_180 = (undefined4 *)((ulonglong)uStack_180._4_4_ << 0x20);
      (*DAT_14ca79310)(*(undefined8 *)(lVar5 + 0x88),*(undefined4 *)(param_1 + 0x48),
                       *(undefined8 *)(param_1 + 0x40),0x3b9d13f0);
      lVar19 = *(longlong *)(param_1 + 0x70);
      *(longlong *)(lVar19 + 0x38) = lVar5;
      *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(lVar5 + 0xe0);
      local_a8 = 0;
      uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
      FUN_14318eafa(lVar21);
      FUN_14739639c(lVar21);
      lpCriticalSection = local_150;
    }
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x150);
    if (*(longlong *)(lVar5 + 0x80) != 0) {
      FUN_14739859c(lVar5,0,0);
      iVar12 = *(int *)(param_1 + 0x48);
    }
    lVar5 = *(longlong *)(lVar5 + 0x78);
    cVar11 = FUN_1473ba42c(*(undefined8 *)(param_1 + 0x70),iVar12);
    if (cVar11 != '\0') {
      iVar12 = *(int *)(param_1 + 0x48);
      if (0 < iVar12) {
        lVar19 = 0;
        local_140 = lVar21;
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar19 * 8);
          if (lVar6 != 0) {
            lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x28) + lVar19 * 8);
            *(undefined1 *)(lVar6 + 0x90) = 0;
            if (lVar7 != 0) {
              local_150 = *(LPCRITICAL_SECTION *)(lVar6 + 0x88);
              if (local_150 != (LPCRITICAL_SECTION)0x0) {
                LOCK();
                local_150->LockCount = local_150->LockCount + 1;
                UNLOCK();
              }
              local_148 = *(longlong *)(lVar6 + 0x78);
              FUN_1474121c4(lVar6 + 0x60,&local_b8);
              local_78 = &DAT_149dfb77a;
              if (local_b0 != 0) {
                local_78 = local_b8;
              }
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 1;
              local_94 = 0;
              uStack_8c = 0;
              local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
              local_80 = 0;
              local_7c = 0;
              local_70 = 0;
              uStack_68 = 0;
              lVar13 = FUN_14001cc68(0x88,0x10);
              local_f4 = 0x200000000000;
              local_188 = 0;
              uStack_180 = (undefined4 *)0x0;
              local_f8 = (int)lVar7;
              FUN_147397b42(lVar13,*(undefined8 *)(lVar6 + 0xa0),&local_f8,&local_a8);
              lVar21 = *(longlong *)(lVar6 + 0x88);
              if (lVar21 != lVar13) {
                *(longlong *)(lVar6 + 0x88) = lVar13;
                if (lVar13 != 0) {
                  LOCK();
                  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                  UNLOCK();
                }
                if (lVar21 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar21 + 8);
                  uVar20 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar20 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar21 + 8);
                    LOCK();
                    uVar20 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar20 >> 0x1e & 1) == 0) {
                      bVar3 = *(byte *)(lVar21 + 0xd);
                      plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar14[1] = lVar21;
                      plVar17 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c8;
                      if ((bVar3 & 2) == 0) {
                        do {
                          *plVar14 = (longlong)plVar17;
                          LOCK();
                          bVar22 = plVar17 != DAT_14ca843c0;
                          plVar16 = plVar14;
                          if (bVar22) {
                            plVar17 = DAT_14ca843c0;
                            plVar16 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar16;
                          UNLOCK();
                        } while (bVar22);
                      }
                      else {
                        do {
                          *plVar14 = (longlong)plVar16;
                          LOCK();
                          bVar22 = plVar16 != DAT_14ca843c8;
                          plVar17 = plVar14;
                          if (bVar22) {
                            plVar16 = DAT_14ca843c8;
                            plVar17 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar17;
                          UNLOCK();
                        } while (bVar22);
                      }
                    }
                  }
                }
              }
              uVar15 = **(undefined8 **)(lVar6 + 0xa0);
              local_f8 = 0x3b9d1401;
              uStack_c4 = 0;
              uStack_c0 = 0;
              local_e4 = 0;
              local_f4 = 0;
              uStack_ec = 0;
              uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x88) + 0x50);
              uStack_e0 = (undefined4)uVar8;
              uStack_dc = (undefined4)((ulonglong)uVar8 >> 0x20);
              uStack_d8 = *(undefined4 *)(*(longlong *)(lVar6 + 0x88) + 0x60);
              uStack_d4 = 0;
              uStack_cc = (undefined4)((ulonglong)lVar7 >> 0x20);
              uStack_c8 = 1;
              uStack_d0 = (int)lVar7;
              iVar12 = (*DAT_14ca792c8)(uVar15,&local_f8,0,lVar6 + 0x78);
              if (iVar12 != 0) {
                FUN_1431b4552(iVar12,
                              "VulkanDynamicAPI::vkCreateAccelerationStructureKHR(NativeDevice, &CreateInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
                              ,".\\Runtime/VulkanRHI/Private/VulkanRayTracing.cpp",0x215);
              }
              local_110 = 0x3b9d13f2;
              local_104 = 0;
              local_10c = 0;
              local_100 = *(undefined8 *)(lVar6 + 0x78);
              uVar15 = (*DAT_14ca792d0)(uVar15,&local_110);
              *(undefined8 *)(lVar6 + 0x80) = uVar15;
              local_138 = 0x2e;
              uStack_12c = 0;
              local_134 = 0;
              uStack_128 = 0x400000;
              uStack_124 = 0x600000;
              local_160 = 0;
              local_168 = 0;
              local_170 = 0;
              local_178 = 0;
              uStack_180 = &local_138;
              local_188 = CONCAT44(local_188._4_4_,1);
              (*DAT_14ca79290)(*(undefined8 *)(lVar5 + 0x88),0x2000800,0x2000800,0);
              lVar21 = local_148;
              local_138 = 0x3b9d13fa;
              local_114 = 0;
              local_134 = 0;
              uStack_12c = 0;
              uStack_128 = (undefined4)local_148;
              uStack_124 = (undefined4)((ulonglong)local_148 >> 0x20);
              uStack_120 = (undefined4)*(undefined8 *)(lVar6 + 0x78);
              uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x78) >> 0x20);
              uStack_118 = 1;
              (*DAT_14ca792d8)(*(undefined8 *)(lVar5 + 0x88),&local_138);
              *(longlong *)(lVar6 + 0x98) = lVar7;
              FUN_1473a8b5a(*(longlong *)(lVar6 + 0xa0) + 0x590,0x10,lVar21);
              if (local_b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              lVar21 = local_140;
              p_Var10 = local_150;
              if (local_150 != (LPCRITICAL_SECTION)0x0) {
                LOCK();
                pLVar2 = &local_150->LockCount;
                uVar20 = *pLVar2;
                *pLVar2 = *pLVar2 + -1;
                UNLOCK();
                if ((uVar20 & 0x3fffffff) == 1) {
                  pLVar2 = &local_150->LockCount;
                  LOCK();
                  uVar20 = *pLVar2;
                  *pLVar2 = *pLVar2 | 0x40000000;
                  UNLOCK();
                  if ((uVar20 >> 0x1e & 1) == 0) {
                    LVar9 = local_150->RecursionCount;
                    plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar14[1] = (longlong)p_Var10;
                    plVar17 = DAT_14ca843c0;
                    plVar16 = DAT_14ca843c8;
                    if ((LVar9 & 0x200) == 0) {
                      do {
                        *plVar14 = (longlong)plVar17;
                        LOCK();
                        bVar22 = plVar17 != DAT_14ca843c0;
                        plVar16 = plVar14;
                        if (bVar22) {
                          plVar17 = DAT_14ca843c0;
                          plVar16 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar16;
                        UNLOCK();
                      } while (bVar22);
                    }
                    else {
                      do {
                        *plVar14 = (longlong)plVar16;
                        LOCK();
                        bVar22 = plVar16 != DAT_14ca843c8;
                        plVar17 = plVar14;
                        if (bVar22) {
                          plVar16 = DAT_14ca843c8;
                          plVar17 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar17;
                        UNLOCK();
                      } while (bVar22);
                    }
                  }
                }
              }
            }
            iVar12 = *(int *)(param_1 + 0x48);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < iVar12);
      }
      lVar19 = *(longlong *)(param_1 + 0x70);
      (*DAT_14ca79288)(*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar19 + 0x10),0,
                       *(undefined4 *)(lVar19 + 0x20));
      *(undefined8 *)(lVar19 + 0x38) = 0;
      *(undefined8 *)(lVar19 + 0x40) = 0;
      memset(*(void **)(lVar19 + 0x28),0,(ulonglong)*(uint *)(lVar19 + 0x20) << 3);
      iVar12 = DAT_14c760c84;
      if (DAT_14c760c84 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(DAT_14c760c84);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x4c) != iVar12) {
        FUN_1473cd9cc(lVar21);
      }
      *(longlong *)(param_1 + 0x60) = lVar5;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar5 + 0xe0);
    }
  }
LAB_1431aa01f:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431aa5fb FUN_1431aa5fb body=2184 status=ok
// SIG undefined FUN_1431aa5fb(void)

longlong FUN_1431aa5fb(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                      longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong local_290;
  undefined8 local_288;
  undefined1 local_27c [4];
  longlong *local_278;
  undefined8 uStack_270;
  longlong local_268 [2];
  uint local_258 [4];
  uint *local_248;
  int local_240;
  undefined8 local_23c;
  undefined4 local_234;
  longlong local_228;
  undefined4 local_220;
  longlong local_218 [2];
  uint local_208 [4];
  uint *local_1f8;
  int local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
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
  undefined8 uStack_170;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_278 = (longlong *)0x0;
  uStack_270 = 0;
  local_2b0 = param_1;
  local_2a8 = param_3;
  local_2a0 = param_2;
  FUN_1473c3578(&local_278);
  local_178 = 0;
  uStack_170 = 0;
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
  lVar13 = 0;
  iVar19 = 0;
  do {
    lVar17 = *(longlong *)(param_4 + 0x400 + lVar13 * 8);
    local_218[0] = lVar17;
    uVar20 = uStack_1c0;
    if (lVar17 == 0) {
      iVar19 = iVar19 + 1;
    }
    else {
      while( true ) {
        uStack_1c0._0_4_ = (int)uVar20;
        uStack_1c0._4_4_ = (uint)(uVar20 >> 0x20);
        if (iVar19 == 0) break;
        lVar12 = (longlong)(int)uStack_1c0;
        uVar6 = (int)uStack_1c0 + 1;
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar6);
        if (uStack_1c0._4_4_ < uVar6) {
          FUN_1473c360a(&local_1c8,uVar20 & 0xffffffff);
        }
        puVar1 = (undefined8 *)(local_1c8 + 0x14 + lVar12 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_1c8 + 4 + lVar12 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(local_1c8 + 0x24 + lVar12 * 0x28) = 0;
        *(undefined4 *)(local_1c8 + lVar12 * 0x28) = 0x3b9f9c63;
        iVar19 = iVar19 + -1;
        uVar20 = uStack_1c0;
      }
      lVar12 = (longlong)(int)uStack_1c0;
      uVar6 = (int)uStack_1c0 + 1;
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar6);
      if (uStack_1c0._4_4_ < uVar6) {
        FUN_1473c360a(&local_1c8,uVar20 & 0xffffffff);
      }
      lVar2 = local_1c8;
      puVar1 = (undefined8 *)(local_1c8 + 0x14 + lVar12 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(local_1c8 + 4 + lVar12 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(local_1c8 + 0x24 + lVar12 * 0x28) = 0;
      *(undefined4 *)(local_1c8 + lVar12 * 0x28) = 0x3b9f9c63;
      uVar3 = FUN_1473d9bd2(lVar17);
      *(undefined8 *)(lVar2 + 0x10 + lVar12 * 0x28) = uVar3;
      *(ulonglong *)(lVar2 + 0x18 + lVar12 * 0x28) = (ulonglong)*(uint *)(lVar17 + 0x28);
      FUN_1473c369e(&local_278,local_218);
      iVar19 = 0;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x10);
  FUN_1473a266c(local_2a0[0xd6],local_2a8,0x3b9d4e88,&local_1c8);
  lVar13 = 0x60;
  do {
    if (*(longlong *)((longlong)&local_1d8 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar13 = lVar13 + -0x10;
  } while (lVar13 != 0);
  iVar19 = *(int *)(param_5 + 0x1f0);
  if ((longlong)iVar19 != 0) {
    lVar13 = *(longlong *)(param_5 + 0x1e8);
    lVar17 = 0;
    do {
      local_1c8 = *(longlong *)(lVar13 + lVar17);
      FUN_1473c369e(&local_278,&local_1c8);
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar19 * 8 != lVar17);
  }
  uStack_190 = 0;
  local_188 = 0x100000000;
  local_c0 = 0;
  local_b8 = 0x200000000;
  local_78 = 0;
  local_70 = 0x200000000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  *(undefined8 *)(local_2b0 + 0x38) = 0;
  *(undefined8 *)(local_2b0 + 0x40) = 0x100000000;
  *(undefined8 *)(local_2b0 + 0x108) = 0;
  *(undefined8 *)(local_2b0 + 0x110) = 0x200000000;
  *(undefined8 *)(local_2b0 + 0x150) = 0;
  *(undefined8 *)(local_2b0 + 0x158) = 0x200000000;
  *(undefined8 *)(local_2b0 + 0x118) = 0;
  *(undefined8 *)(local_2b0 + 0x120) = 0;
  *(undefined8 *)(local_2b0 + 0x128) = 0;
  local_1f8 = (uint *)0x0;
  local_1f0 = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_248 = (uint *)0x0;
  local_240 = 0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_23c = 0xffffffff00000080;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  if ((longlong)(int)uStack_270 == 0) {
    local_290 = local_2b0;
    local_288 = local_2a8;
    local_298 = &local_1c8;
  }
  else {
    local_2a0 = local_278 + (int)uStack_270;
    plVar14 = local_278;
    do {
      lVar13 = (longlong)*(int *)(*plVar14 + 0x18);
      if (lVar13 != 0) {
        lVar17 = *(longlong *)(*plVar14 + 0x10);
        lVar12 = 0;
        do {
          plVar4 = *(longlong **)(lVar17 + lVar12);
          if (plVar4 != (longlong *)0x0) {
            switch(*(undefined1 *)((longlong)plVar4 + 0xc)) {
            case 0x19:
              plVar4 = (longlong *)plVar4[0xc];
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
switchD_1431aa997_caseD_14:
              plVar7 = local_218;
              local_298 = plVar4;
LAB_1431aa9a1:
              FUN_1473c3790(plVar7,local_27c,&local_298);
              break;
            default:
              break;
            case 0x1f:
              if (1 < *(byte *)(plVar4 + 3)) {
                local_298 = (longlong *)plVar4[2];
                plVar7 = local_268;
                goto LAB_1431aa9a1;
              }
              local_2b8 = 0x200000;
              FUN_14739445e(&local_1c8,0x18000,0x18000,0x10000);
              uVar3 = 0x18000;
              goto LAB_1431aa9f8;
            case 0x20:
              if (1 < *(byte *)(plVar4 + 3)) {
                plVar4 = (longlong *)plVar4[2];
                goto switchD_1431aa997_caseD_14;
              }
            case 0x13:
            case 0x21:
            case 0x23:
              local_2b8 = 0x200000;
              FUN_14739445e(&local_1c8,0x18000,0x8000,0x10000);
              uVar3 = 0x8000;
LAB_1431aa9f8:
              local_2b8 = 0x10000;
              FUN_14739445e(local_2b0,uVar3,0x18000,0x200000);
            }
          }
          lVar12 = lVar12 + 8;
        } while (lVar13 * 8 != lVar12);
      }
      iVar19 = local_240;
      plVar14 = plVar14 + 1;
    } while (plVar14 != local_2a0);
    local_298 = &local_1c8;
    local_290 = local_2b0;
    local_288 = local_2a8;
    if (local_240 != 0) {
      puVar5 = local_248;
      if (local_248 == (uint *)0x0) {
        puVar5 = local_258;
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        iVar11 = local_240 + 0x1e;
        if (-1 < local_240 + -1) {
          iVar11 = local_240 + -1;
        }
        uVar20 = 0;
        uVar8 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar8 = uVar20;
        }
        iVar11 = 0;
        do {
          if (uVar8 == uVar20) goto LAB_1431aac2d;
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar6 == 0);
      }
      else {
        iVar11 = 0;
        uVar20 = 0;
      }
      uVar18 = (ulonglong)(-uVar6 & uVar6);
      uVar8 = uVar18 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar16 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar16 < local_240) {
        uVar6 = 0xffffffff;
        do {
          uVar3 = *(undefined8 *)(local_268[0] + (longlong)iVar16 * 0x10);
          FUN_1431af8e2(&local_298,uVar3,0);
          FUN_1473c34f4(local_218,uVar3);
          uVar6 = ~(uint)uVar18 & uVar6;
          puVar5 = local_248;
          if (local_248 == (uint *)0x0) {
            puVar5 = local_258;
          }
          iVar16 = (int)uVar20;
          lVar13 = (longlong)iVar16;
          uVar15 = puVar5[lVar13] & uVar6;
          if (uVar15 == 0) {
            iVar10 = local_240 + 0x1e;
            if (-1 < local_240 + -1) {
              iVar10 = local_240 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar9 = iVar10;
            if (iVar10 < iVar16) {
              iVar9 = iVar16;
            }
            if (iVar16 < iVar10) {
              lVar17 = 0;
              do {
                uVar15 = puVar5[lVar13 + lVar17 + 1];
                if (uVar15 != 0) {
                  uVar20 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_1431aabe7;
                }
                iVar11 = iVar11 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar9 - lVar13 != lVar17);
              uVar6 = 0xffffffff;
              iVar16 = iVar9;
            }
            uVar20 = (ulonglong)(iVar16 + 1);
            iVar16 = local_240;
          }
          else {
LAB_1431aabe7:
            uVar18 = (ulonglong)(-uVar15 & uVar15);
            uVar8 = uVar18 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar16 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (local_240 <= iVar16) {
              iVar16 = local_240;
            }
          }
        } while (iVar16 != iVar19);
      }
    }
  }
LAB_1431aac2d:
  iVar19 = local_1f0;
  if (local_1f0 == 0) {
    uVar18 = 1;
    uVar20 = 0;
    iVar11 = 0;
    iVar16 = 0;
  }
  else {
    puVar5 = local_1f8;
    if (local_1f8 == (uint *)0x0) {
      puVar5 = local_208;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar11 = local_1f0 + 0x1e;
      if (-1 < local_1f0 + -1) {
        iVar11 = local_1f0 + -1;
      }
      uVar20 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar20) goto LAB_1431aacc4;
        iVar11 = iVar11 + 0x20;
        uVar6 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar6 & uVar6);
    uVar8 = uVar18 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar16 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (local_1f0 <= iVar16) {
      iVar16 = local_1f0;
    }
  }
  if (iVar16 != local_1f0) {
    uVar6 = 0xffffffff;
    do {
      FUN_1431af8e2(&local_298,*(undefined8 *)(local_218[0] + (longlong)iVar16 * 0x10),1);
      uVar6 = ~(uint)uVar18 & uVar6;
      puVar5 = local_1f8;
      if (local_1f8 == (uint *)0x0) {
        puVar5 = local_208;
      }
      iVar16 = (int)uVar20;
      lVar13 = (longlong)iVar16;
      uVar15 = puVar5[lVar13] & uVar6;
      if (uVar15 == 0) {
        iVar10 = local_1f0 + 0x1e;
        if (-1 < local_1f0 + -1) {
          iVar10 = local_1f0 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar16) {
          iVar9 = iVar16;
        }
        if (iVar16 < iVar10) {
          lVar17 = 0;
          do {
            uVar15 = puVar5[lVar13 + lVar17 + 1];
            if (uVar15 != 0) {
              uVar20 = (ulonglong)(iVar16 + (int)lVar17 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1431aae27;
            }
            iVar11 = iVar11 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar9 - lVar13 != lVar17);
          uVar6 = 0xffffffff;
          iVar16 = iVar9;
        }
        uVar20 = (ulonglong)(iVar16 + 1);
        iVar16 = local_1f0;
      }
      else {
LAB_1431aae27:
        uVar18 = (ulonglong)(-uVar15 & uVar15);
        uVar8 = uVar18 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar16 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (local_1f0 <= iVar16) {
          iVar16 = local_1f0;
        }
      }
    } while (iVar16 != iVar19);
  }
LAB_1431aacc4:
  local_220 = 0;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  FUN_1473c3cd6(local_268);
  lVar13 = local_2b0;
  local_1d0 = 0;
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1473c3cd6(local_218);
  FUN_147397068(&local_1c8,local_2a8);
  FUN_1473945b6(&local_1c8);
  if (local_278 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13;
}



// FUNCTION 1431aae84 FUN_1431aae84 body=1337 status=ok
// SIG undefined FUN_1431aae84(void)

void FUN_1431aae84(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  undefined1 *local_180;
  uint *local_178;
  uint local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined1 local_129;
  uint local_128;
  undefined1 local_124 [7];
  undefined1 local_11d;
  uint local_11c [3];
  longlong local_110;
  undefined1 *local_108;
  undefined1 local_100 [32];
  undefined1 *local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_e0 = (undefined1 *)0x0;
  local_d8 = 0x400000000;
  iVar5 = (**(code **)(*DAT_14c82b500 + 0x20))();
  bVar3 = FUN_1447e0190();
  bVar3 = iVar5 == 0 & bVar3;
  local_110 = 0;
  local_108 = (undefined1 *)0x100000000;
  if (bVar3 != 1) {
    local_108 = &DAT_100000001;
    local_11c[1] = 0;
  }
  uVar11 = (uint)(bVar3 != 1);
  local_178 = local_11c + 1;
  local_160 = param_5;
  local_148 = param_6;
  iVar5 = (int)param_4;
  local_170 = uVar11;
  local_168 = param_1;
  local_158 = param_3;
  local_150 = param_2;
  if (iVar5 != 0) {
    cVar4 = FUN_1447e0190();
    if (iVar5 < 2 || cVar4 != '\x01') {
      uVar6 = 0;
    }
    else {
      uVar6 = iVar5 + 0x200U >> 10;
      if ((int)DAT_14c8335d8 < (int)uVar6) {
        uVar6 = DAT_14c8335d8;
      }
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar6 = (*(undefined **)(lVar2 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar2 + 0x2c8) == 0) +
            uVar6;
    if ((int)DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_138 = 0;
      local_140 = (undefined8 *)((ulonglong)local_140 & 0xffffffff00000000);
      local_11c[0] = 0;
      FUN_140e55932(&local_d0,&local_138,&local_140,local_11c);
      uVar16 = local_11c[0];
      local_180 = &local_129;
      local_188 = &local_128;
      FUN_1457b80ec((ulonglong)local_140 & 0xffffffff,local_11c[0],&local_11d,local_124);
      DAT_14c8c27ac = uVar16;
      if ((0 < (int)local_128) && (DAT_14c8c27ac = uVar16, (int)local_128 <= (int)uVar16)) {
        DAT_14c8c27ac = local_128;
      }
    }
    uVar16 = DAT_14c8c27ac;
    if ((int)uVar6 < (int)DAT_14c8c27ac) {
      uVar16 = uVar6;
    }
    uVar15 = 1;
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    if (bVar3 != 0) {
      uVar11 = uVar16;
    }
    if (uVar11 < 2) {
      if (0 < iVar5) {
        iVar17 = 0;
        do {
          FUN_1431b1ce6(&local_168,iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar5 != iVar17);
      }
    }
    else {
      iVar17 = uVar11 * 6;
      iVar10 = iVar5 + iVar17 + -1;
      iVar18 = -6;
      param_4 = param_4 & 0xffffffff;
      do {
        if (iVar17 <= iVar5) {
          uVar15 = (longlong)iVar10 / (longlong)iVar17 & 0xffffffff;
          iVar14 = (int)((longlong)iVar10 / (longlong)iVar17);
          param_4 = (longlong)(iVar14 + iVar5 + -1) / (longlong)iVar14;
          iVar7 = (int)param_4;
          param_4 = param_4 & 0xffffffff;
          if ((int)uVar11 <= iVar7) break;
        }
        iVar7 = (int)param_4;
        iVar14 = (int)uVar15;
        iVar10 = iVar10 - uVar11;
        iVar17 = iVar17 - uVar11;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
      iVar17 = uVar11 - 1;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar19 = 6;
      if ((*(byte *)(lVar2 + 0xc60) & 0x37) != 0) {
        uVar19 = 0;
      }
      FUN_144a85b52(&local_138,1);
      puVar1 = (undefined8 *)(lVar2 + 0x308);
      puVar9 = (uint *)*puVar1;
      if (puVar9 != (uint *)0x0) goto LAB_1431ab11d;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_1431af85e);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar1 = puVar8;
        FUN_140217a48(puVar1);
        puVar9 = (uint *)*puVar1;
LAB_1431ab11d:
        puVar20 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar13 = (uint *)(puVar20 + 0x10);
        uVar11 = puVar9[0x12];
        if (puVar13 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar6 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar6 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar1;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar1 = puVar9;
          puVar20 = (undefined8 *)((longlong)puVar9 + 0x97U & 0xffffffffffffffc0);
          puVar13 = (uint *)(puVar20 + 0x10);
          uVar11 = 0;
          if (puVar13 <= puVar9 + 0x4000) {
            uVar11 = 1;
            goto LAB_1431ab1a0;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_1431ab1a0:
      *(uint **)(puVar9 + 0x10) = puVar13;
      puVar9[0x12] = uVar11;
      *puVar20 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar20 + 1) = 0;
      *puVar20 = &PTR_FUN_14a3696d0;
      puVar20[3] = L"SetRayTracingBindings";
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined4 *)(puVar20 + 5) = 0;
      *(int *)((longlong)puVar20 + 0x2c) = iVar5;
      *(int *)(puVar20 + 6) = iVar14;
      *(int *)((longlong)puVar20 + 0x34) = iVar7;
      puVar20[7] = &local_178;
      puVar20[8] = &local_168;
      puVar20[9] = &local_138;
      *(undefined1 *)(puVar20 + 10) = uVar19;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      *(int *)((longlong)puVar20 + 0x24) = iVar7;
      *(int *)(puVar20 + 0xc) = iVar17;
      FUN_1431b2a18(puVar20 + 0xb);
      FUN_1431b29e2(puVar20[0xb],iVar17);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
      }
      local_140 = puVar20;
      FUN_1431b1fa2(&local_140);
      local_c4 = 0;
      local_d0 = puVar20;
      local_c8 = iVar17;
      cVar4 = FUN_1431b2020(&local_d0,1);
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_134,local_138) + 0x20))
                  ((longlong *)CONCAT44(uStack_134,local_138),0xffffffff,0);
      }
      FUN_1431b23b2(&local_d0);
      FUN_144a75412(&local_138);
    }
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  puVar12 = local_e0;
  if (local_e0 == (undefined1 *)0x0) {
    puVar12 = local_100;
  }
  FUN_144717c65(puVar12,local_d8 & 0xffffffff);
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ab3be FUN_1431ab3be body=151 status=ok
// SIG undefined FUN_1431ab3be(void)

undefined8 FUN_1431ab3be(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(*param_2 + lVar7 * 8);
      iVar1 = *(int *)(lVar5 + 0x30);
      iVar2 = *(int *)(lVar5 + 0x34);
      iVar3 = *(int *)(lVar5 + 0x38);
      iVar4 = *(int *)(lVar5 + 0x3c);
      cVar6 = FUN_1473dc9d6(lVar5,*param_1);
      if ((((cVar6 != '\0') && (lVar5 = param_1[1], *(int *)(lVar5 + 0x398) == iVar3)) &&
          (*(int *)(lVar5 + 0x39c) == iVar4)) &&
         ((*(int *)(lVar5 + 0x38c) == iVar1 && (*(int *)(lVar5 + 0x390) == iVar2)))) {
        return *(undefined8 *)(*param_2 + lVar7 * 8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_2[1]);
  }
  return 0;
}



// FUNCTION 1431ab455 FUN_1431ab455 body=69 status=ok
// SIG undefined FUN_1431ab455(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ab455(void)

{
  _DAT_14ca78698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ab497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca786a0,1);
  return;
}



// FUNCTION 1431ab49a FUN_1431ab49a body=69 status=ok
// SIG undefined FUN_1431ab49a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ab49a(void)

{
  _DAT_14ca786b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ab4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca786b8,1);
  return;
}



// FUNCTION 1431ab4df FUN_1431ab4df body=69 status=ok
// SIG undefined FUN_1431ab4df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ab4df(void)

{
  _DAT_14ca786c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ab521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca786d0,1);
  return;
}



// FUNCTION 1431ab532 FUN_1431ab532 body=41 status=ok
// SIG undefined FUN_1431ab532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ab532(void)

{
  _DAT_14ca78750 = 0;
  if (DAT_14ca78748 != 0) {
    FUN_1400020a8();
  }
  FUN_145d701a8();
  return;
}



// FUNCTION 1431ab55c FUN_1431ab55c body=919 status=ok
// SIG undefined FUN_1431ab55c(void)

void FUN_1431ab55c(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,int *param_6,longlong *param_7)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  undefined8 *local_230;
  longlong local_220;
  longlong local_218;
  int local_20c;
  longlong local_208;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  uint uStack_1e0;
  int iStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  longlong lStack_1c0;
  int local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  undefined1 local_1a8 [56];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  bVar2 = (byte)param_4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  iVar10 = (*(int *)(lVar5 + 0x28) >> (bVar2 & 0x1f)) * (*(int *)(lVar5 + 0x24) >> (bVar2 & 0x1f)) *
           8;
  local_208 = param_1 + 0x5d0;
  local_220 = param_1;
  lVar6 = FUN_143192298(local_208,iVar10,2,8);
  local_170 = 0;
  local_168 = 0x100000000;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_58 = 0;
  local_50 = 0x200000000;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_218 = param_2;
  local_1b0 = lVar6;
  if (DAT_14ca786c0 == 0) {
    local_1c8 = 0;
    local_1e8 = 0;
    uVar4 = *(int *)(lVar5 + 0x24) >> (bVar2 & 0x1f);
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    local_1b8 = *(int *)(lVar5 + 0x28) >> (bVar2 & 0x1f);
    if (local_1b8 < 2) {
      local_1b8 = 1;
    }
    _uStack_1e0 = CONCAT44(local_1b8,uVar4);
    _local_1d8 = CONCAT44(param_4,(int)param_3[0x20]);
    _uStack_1d0 = CONCAT44(1,param_5);
    lStack_1c0 = (ulonglong)uVar4 << 0x20;
    local_1b4 = 1;
    local_20c = FUN_1473975a6(param_2,param_3,0x80);
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,1);
    local_230 = &local_1e8;
    (*DAT_14ca79330)(*(undefined8 *)(param_2 + 0x88),param_3[0x13],6,*(undefined8 *)(lVar6 + 0x38));
    param_2 = local_218;
    if ((local_20c == 0) || (local_20c == 6)) {
      FUN_1473bd608(local_218 + 0x108,param_3,6,0);
    }
    else {
      local_1fc = (undefined4)param_3[0x20];
      local_238 = &local_1fc;
      local_1f8 = 0;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0;
      uStack_1ec = 0xffffffff;
      FUN_147396818(local_1a8,param_3[0x13],6);
      param_2 = local_218;
    }
  }
  else {
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,0x3c003c00);
    (*DAT_14ca79338)(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(lVar6 + 0x38),0,iVar10);
  }
  lVar6 = local_220;
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,0x4000);
  FUN_14739445e(local_1a8,0x1000,0x2000,0x1000);
  FUN_147397068(local_1a8,param_2);
  iVar11 = 0;
  FUN_14739859c(*(undefined8 *)(*(longlong *)(lVar6 + 0x20c8) + 0x150),0,0);
  FUN_1473a4890(lVar6);
  lVar3 = local_1b0;
  lVar6 = local_1b0 + 0x18;
  FUN_1473a8158(lVar6,*(undefined8 *)(local_1b0 + 0x10));
  FUN_145ee9bde(param_7,(param_6[3] - param_6[1]) * (param_6[2] - *param_6),1);
  for (iVar10 = param_6[1]; iVar10 < param_6[3]; iVar10 = iVar10 + 1) {
    lVar7 = FUN_1473a804a(lVar6,*(undefined8 *)(lVar3 + 0x10));
    lVar8 = (longlong)*param_6;
    if (*param_6 < param_6[2]) {
      lVar7 = lVar7 + (longlong)((*(int *)(lVar5 + 0x24) >> (bVar2 & 0x1f)) * iVar10) * 8;
      do {
        lVar1 = *param_7;
        lVar9 = (longlong)iVar11;
        iVar11 = iVar11 + 1;
        *(undefined2 *)(lVar1 + lVar9 * 8) = *(undefined2 *)(lVar7 + lVar8 * 8);
        *(undefined2 *)(lVar1 + 2 + lVar9 * 8) = *(undefined2 *)(lVar7 + 2 + lVar8 * 8);
        *(undefined2 *)(lVar1 + 4 + lVar9 * 8) = *(undefined2 *)(lVar7 + 4 + lVar8 * 8);
        *(undefined2 *)(lVar1 + 6 + lVar9 * 8) = *(undefined2 *)(lVar7 + 6 + lVar8 * 8);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < param_6[2]);
    }
  }
  FUN_1473a2c42(local_208,local_218,&local_1b0);
  FUN_1473945b6(local_1a8);
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ab8f4 FUN_1431ab8f4 body=3944 status=ok
// SIG undefined FUN_1431ab8f4(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_1431ab8f4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  byte *pbVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  char *pcVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  char *unaff_RBP;
  byte bVar27;
  undefined1 uVar28;
  ulonglong uVar29;
  uint uVar30;
  char cVar31;
  int iVar32;
  bool bVar33;
  undefined1 auStack_698 [32];
  undefined8 local_678;
  undefined8 local_670;
  longlong local_660;
  int local_654;
  longlong local_650;
  uint local_644;
  ulonglong local_640;
  int local_634;
  undefined1 local_630 [8];
  undefined1 local_628 [8];
  undefined1 local_620 [8];
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  int local_5d8;
  undefined4 local_558;
  undefined1 local_554;
  undefined1 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_468;
  undefined8 local_460;
  undefined1 local_457;
  uint local_448 [2];
  ulonglong uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined8 uStack_3f4;
  undefined4 local_3ec;
  uint local_3e8;
  int local_3e4;
  int aiStack_3e0 [16];
  int local_3a0;
  int local_39c;
  undefined8 local_398;
  uint uStack_390;
  undefined1 auStack_38c [8];
  int iStack_384;
  undefined1 auStack_380 [8];
  int local_378;
  undefined8 uStack_374;
  undefined8 uStack_36c;
  undefined8 uStack_364;
  undefined8 uStack_35c;
  int aiStack_354 [155];
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  int local_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  char local_c6;
  undefined8 local_c4;
  longlong lStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined1 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_698;
  lVar12 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar12 + 0x80) != 0) {
    FUN_14739859c(lVar12,0,0);
  }
  if (DAT_14ca77c4c == 0) {
    if (*(char *)(param_1 + 0x130) == '\x01') {
      FUN_14739a1d0(param_1);
      *(undefined1 *)(param_1 + 0x130) = 0;
      goto LAB_1431ab998;
    }
  }
  else {
    local_448[0] = 0;
    local_448[1] = 0;
    uStack_440 = uStack_440 & 0xffffffff00000000;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
LAB_1431ab998:
    lVar12 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar12 + 0x80) != 0) {
      FUN_14739859c(lVar12,0,0);
    }
  }
  local_650 = *(longlong *)(lVar12 + 0x78);
  memcpy((void *)(param_1 + 0x10),param_2,0xe8);
  lVar12 = param_2[0x1d];
  lVar16 = *(longlong *)(param_1 + 0xf8);
  local_660 = param_1;
  if (lVar16 != lVar12) {
    *(longlong *)(param_1 + 0xf8) = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    if (lVar16 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar16 + 8);
      uVar26 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar26 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar16 + 8);
        LOCK();
        uVar26 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar26 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(lVar16 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar16;
          plVar11 = DAT_14ca843c0;
          plVar19 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar11;
              LOCK();
              bVar33 = plVar11 != DAT_14ca843c0;
              plVar19 = plVar18;
              if (bVar33) {
                plVar11 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar19;
              UNLOCK();
            } while (bVar33);
          }
          else {
            do {
              *plVar18 = (longlong)plVar19;
              LOCK();
              bVar33 = plVar19 != DAT_14ca843c8;
              plVar11 = plVar18;
              if (bVar33) {
                plVar19 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar33);
          }
        }
      }
    }
  }
  lVar12 = local_660;
  *(undefined4 *)(local_660 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xf7);
  *(longlong *)(local_660 + 0x100) = param_2[0x1e];
  if (*(int *)((longlong)param_2 + 0xf4) != 0) {
    uVar10 = FUN_1473b78c4(*(undefined8 *)(local_660 + 0x120),*(undefined8 *)(local_660 + 0x150));
    *(undefined8 *)(lVar12 + 0x168) = uVar10;
    FUN_1473b77ae(uVar10,local_650,DAT_14c7590b0);
  }
  uVar29 = 0;
  iVar25 = 0;
  local_634 = 0;
  if ((longlong *)param_2[0x18] != (longlong *)0x0) {
    lVar16 = (**(code **)(*(longlong *)param_2[0x18] + 0x30))();
    uVar26 = *(uint *)(lVar16 + 0x100);
    if ((~*(ulonglong *)(*(longlong *)(lVar12 + 0x120) + 0x20f8) & 0x41004000000) == 0) {
      uVar8 = *(uint *)((longlong)param_2 + 0xd4);
      unaff_RBP = (char *)(ulonglong)uVar8;
      local_634 = 0;
      if ((uVar26 & 2) != 0) {
        local_634 = 0x3b9f9491;
        if (((((uVar8 & 0xf) != 2) &&
             (local_634 = FUN_1473974c8(local_650 + 0x108,lVar16,2), local_634 == 0)) &&
            (local_634 = FUN_1473974c8(*(longlong *)(lVar12 + 0x128) + 0x60,lVar16,2),
            local_634 == 0)) && (local_634 = 0x3b9f9490, (uVar8 & 0xf) != 1)) {
          local_634 = 0;
        }
      }
      if ((uVar26 & 4) == 0) {
        iVar25 = 0;
      }
      else if (((byte)uVar8 & 0xf0) == 0x10) {
        iVar25 = 0x3b9f9490;
      }
      else {
        unaff_RBP = (char *)(ulonglong)(uVar8 & 0xf0);
        iVar25 = 0x3b9f9491;
        if (((uVar8 & 0xf0) != 0x20) &&
           (iVar25 = FUN_1473974c8(local_650 + 0x108,lVar16,4), iVar25 == 0)) {
          iVar25 = FUN_1473974c8(*(longlong *)(lVar12 + 0x128) + 0x60,lVar16,4);
        }
      }
    }
    else {
      iVar25 = 0;
      piVar14 = (int *)FUN_147394f86(local_650 + 0x108,lVar16,0,0);
      local_634 = 0;
      if ((uVar26 & 2) != 0) {
        if (piVar14[6] == 0) {
          piVar24 = piVar14 + 3;
        }
        else {
          piVar24 = *(int **)(piVar14 + 4);
        }
        local_634 = *piVar24;
      }
      if ((uVar26 & 4) != 0) {
        if (piVar14[6] == 0) {
          piVar14 = piVar14 + 3;
        }
        else {
          piVar14 = (int *)((longlong)((piVar14[2] + -1) * piVar14[1] * *piVar14) * 4 +
                           *(longlong *)(piVar14 + 4));
        }
        iVar25 = *piVar14;
      }
    }
  }
  local_630 = *(undefined1 (*) [8])(lVar12 + 0x120);
  local_d0 = 0;
  local_c8 = 0;
  local_c6 = *(char *)((longlong)param_2 + 0xf9);
  local_448[0] = 0;
  local_448[1] = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  memset(&local_3e8,0,0x2fc);
  local_c4 = 0;
  lStack_bc = 0;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0;
  local_400 = 0x3b9e7769;
  local_3fc = 0;
  uStack_3f4 = 0;
  local_3ec = 0;
  local_e8 = 0x3b9e776a;
  local_e4 = 0;
  uStack_dc = 0;
  local_d4 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_5d8 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_618 = 0;
  uStack_610 = 0;
  plVar11 = param_2;
  do {
    if (*plVar11 == 0) {
      if (uVar29 != 0) goto LAB_1431abc88;
      plVar11 = (longlong *)param_2[0x18];
      if (plVar11 != (longlong *)0x0) {
        local_640 = 0;
        uVar26 = 0;
        bVar7 = 0;
        local_654 = iVar25;
        goto LAB_1431ac04d;
      }
      lStack_bc = param_2[0x1b];
      local_b4 = (ulonglong)(uint)((int)param_2[0x1c] - (int)param_2[0x1b]) << 0x20;
      uStack_ac = CONCAT44(1,*(int *)((longlong)param_2 + 0xe4) - *(int *)((longlong)param_2 + 0xdc)
                          );
      uVar26 = 0;
      goto LAB_1431ac3f2;
    }
    uVar29 = uVar29 + 1;
    plVar11 = plVar11 + 3;
  } while (uVar29 != 8);
  uVar29 = 8;
LAB_1431abc88:
  local_620 = (undefined1  [8])((uVar29 & 0xffffffff) * 0x18);
  local_628 = (undefined1  [8])((ulonglong)((int)uVar29 - 1) * 0x18);
  cVar31 = '\x01';
  unaff_RBP = (char *)0x0;
  local_640 = 0;
  uVar26 = 0;
  bVar33 = false;
  local_654 = iVar25;
  do {
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)((longlong)param_2 + (longlong)unaff_RBP) + 0x30))();
    lVar12 = (**(code **)(*plVar11 + 8))(plVar11);
    if ((local_640 & 1) == 0) {
      iVar25 = *(int *)(lVar12 + 0x24) >> (unaff_RBP[(longlong)param_2 + 0x14] & 0x1fU);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      local_b4 = CONCAT44(iVar25,(undefined4)local_b4);
      iVar25 = *(int *)(lVar12 + 0x28) >> (unaff_RBP[(longlong)param_2 + 0x14] & 0x1fU);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      uStack_ac = (ulonglong)CONCAT24(*(undefined2 *)(lVar12 + 0x2c),iVar25);
      local_640 = CONCAT71((uint7)(byte)((ushort)*(undefined2 *)(lVar12 + 0x2c) >> 8),1);
    }
    if (local_d0._7_1_ != '\0') {
      (**(code **)(**(longlong **)((longlong)param_2 + (longlong)unaff_RBP) + 8))();
    }
    local_644 = uVar26;
    lVar12 = (**(code **)(**(longlong **)((longlong)param_2 + (longlong)unaff_RBP) + 8))();
    local_d0 = CONCAT17(*(undefined1 *)(lVar12 + 0x31),(undefined7)local_d0);
    if (!(bool)(~bVar33 & 1U | local_c6 == '\0')) {
      FUN_14739b90c(plVar11);
    }
    uVar8 = FUN_14739b90c(plVar11);
    uVar26 = (uint)local_d0._7_1_;
    if (*(char *)((longlong)param_2 + 0xfa) == '\x03') {
      uVar26 = 1;
    }
    uVar29 = local_d0 & 0xff;
    if (local_628 != (undefined1  [8])unaff_RBP) {
      uVar26 = (uint)local_d0._7_1_;
    }
    (&uStack_390)[uVar29 * 9] = uVar26;
    pbVar13 = (byte *)(**(code **)(*plVar11 + 8))(plVar11);
    bVar7 = *pbVar13;
    lVar12 = (**(code **)(**(longlong **)((longlong)param_2 + (longlong)unaff_RBP) + 8))();
    uVar26 = local_644;
    puVar21 = (undefined4 *)
              ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar12 + 0x33) * 0x30));
    if ((bVar7 & 0x10) != 0) {
      puVar21 = &DAT_14ca781f0 + *(byte *)(lVar12 + 0x33);
    }
    bVar33 = 1 < uVar8;
    *(undefined4 *)((longlong)&local_398 + uVar29 * 0x24 + 4) = *puVar21;
    bVar7 = unaff_RBP[(longlong)param_2 + 0x15];
    if (bVar7 < 0xc) {
      bVar27 = (byte)(0x10000 >> (bVar7 * '\x02' & 0x18));
      uVar9 = *(undefined4 *)(&DAT_14a369980 + (bVar7 & 0xfffffffc));
    }
    else {
      bVar27 = 0;
      uVar9 = 0x7fffffff;
    }
    lVar12 = uVar29 * 0x24;
    *(undefined4 *)(auStack_38c + lVar12) = uVar9;
    *(undefined4 *)(auStack_38c + lVar12 + 4) =
         *(undefined4 *)(&DAT_14a36999c + (ulonglong)(bVar7 & 3) * 4);
    *(undefined1 **)(&iStack_384 + uVar29 * 9) = &DAT_100000002;
    (**(code **)(*plVar11 + 8))(plVar11);
    *(undefined1 **)(auStack_380 + lVar12 + 4) = &DAT_200000002;
    local_448[(local_d0 >> 8 & 0xff) * 2] = (uint)(byte)local_d0;
    uVar22 = local_d0 >> 8 & 0xff;
    local_448[uVar22 * 2 + 1] = 2;
    cVar6 = (byte)local_d0;
    if ((1 < (int)(&uStack_390)[uVar29 * 9]) &&
       (*(longlong *)((longlong)(param_2 + 1) + (longlong)unaff_RBP) != 0)) {
      uVar29 = local_d0 & 0xff;
      aiStack_354[uVar29 * 9] = (&local_378)[uVar29 * 9];
      uVar10 = *(undefined8 *)(&uStack_390 + uVar29 * 9);
      *(undefined8 *)((longlong)&uStack_364 + uVar29 * 0x24) =
           *(undefined8 *)(auStack_38c + uVar29 * 0x24 + 4);
      *(undefined8 *)((longlong)&uStack_35c + uVar29 * 0x24) =
           *(undefined8 *)(auStack_380 + uVar29 * 0x24);
      *(undefined8 *)((longlong)&uStack_374 + uVar29 * 0x24) =
           *(undefined8 *)((longlong)&local_398 + uVar29 * 0x24);
      *(undefined8 *)((longlong)&uStack_36c + uVar29 * 0x24) = uVar10;
      *(undefined4 *)((longlong)&uStack_36c + (local_d0 & 0xff) * 0x24) = 1;
      *(undefined4 *)((longlong)&uStack_36c + (local_d0 & 0xff) * 0x24 + 4) = 2;
      *(undefined4 *)((longlong)&uStack_364 + (local_d0 & 0xff) * 0x24) = 0;
      aiStack_3e0[(local_d0 >> 8 & 0xff) * 2] = (byte)local_d0 + 1;
      uVar22 = (ulonglong)local_d0._1_1_;
      local_68 = CONCAT22(local_68._2_2_,(ushort)local_68 | (ushort)(1 << (local_d0._1_1_ & 0x1f)));
      aiStack_3e0[uVar22 * 2 + 1] = 2;
      cVar6 = (byte)local_d0 + '\x01';
      local_d0._0_5_ = CONCAT14(1,(undefined4)local_d0);
    }
    uVar26 = CONCAT31((int3)(uVar26 >> 8),(byte)uVar26 | bVar27);
    uVar29 = (ulonglong)(uint)((int)uVar22 * 4);
    *(undefined4 *)((longlong)&local_98 + uVar29 + 4) =
         *(undefined4 *)((longlong)&local_398 + lVar12 + 4);
    *(undefined1 *)((longlong)&local_618 + uVar22) = auStack_38c[lVar12];
    *(undefined4 *)((longlong)&uStack_600 + uVar29) = 2;
    *(undefined1 *)((longlong)&uStack_610 + uVar22 + 3) = auStack_38c[lVar12 + 4];
    local_98 = CONCAT71(local_98._1_7_,cVar31);
    bVar7 = cVar6 + 1;
    local_d0._0_2_ = CONCAT11((char)uVar22 + '\x01',bVar7);
    unaff_RBP = unaff_RBP + 0x18;
    cVar31 = cVar31 + '\x01';
  } while (local_620 != (undefined1  [8])unaff_RBP);
  plVar11 = (longlong *)param_2[0x18];
  lVar12 = local_660;
  if (plVar11 == (longlong *)0x0) goto LAB_1431ac3f2;
LAB_1431ac04d:
  uVar29 = (ulonglong)bVar7;
  lVar12 = uVar29 * 0x24;
  *(undefined8 *)(auStack_38c + lVar12 + 4) = 0;
  *(undefined8 *)(auStack_380 + lVar12) = 0;
  *(undefined8 *)((longlong)&local_398 + lVar12) = 0;
  (&uStack_390 + uVar29 * 9)[0] = 0;
  (&uStack_390 + uVar29 * 9)[1] = 0;
  (&local_378)[uVar29 * 9] = 0;
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x30))();
  lVar16 = (**(code **)(*plVar11 + 8))(plVar11);
  uVar8 = FUN_14739b90c(plVar11);
  if (1 < uVar8) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  lVar15 = (**(code **)(*(longlong *)param_2[0x18] + 8))();
  bVar7 = *(byte *)(lVar15 + 0x31);
  (&uStack_390)[uVar29 * 9] = (uint)bVar7;
  local_d0 = CONCAT17(bVar7,(undefined7)local_d0);
  lVar15 = (**(code **)(*(longlong *)param_2[0x18] + 8))();
  uVar10 = local_608;
  uVar8 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar15 + 0x33) * 0x30));
  *(uint *)((longlong)&local_398 + lVar12 + 4) = uVar8;
  bVar7 = *(byte *)(param_2 + 0x1a);
  uVar9 = 0;
  pcVar23 = (char *)((longlong)&switchD_1431ac105::caseD_5 +
                    (longlong)(int)(&switchD_1431ac105::caseD_5)[bVar7 >> 6]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar7 >> 6) {
  case 0:
    uVar9 = 2;
    break;
  case 1:
    bVar4 = true;
    bVar33 = false;
    goto LAB_1431ac12b;
  case 2:
    uVar9 = 1;
    bVar33 = true;
    goto LAB_1431ac120;
  case 3:
    uVar9 = 0x7fffffff;
    break;
  case 4:
    *pcVar23 = *pcVar23 + (char)((ulonglong)pcVar23 >> 8);
    uVar26 = *(uint *)(ulonglong)uVar8;
    bVar7 = (byte)uVar26 | *(byte *)(ulonglong)uVar26;
    pbVar13 = (byte *)(ulonglong)CONCAT31((int3)(uVar26 >> 8),bVar7);
    *pbVar13 = *pbVar13 ^ bVar7;
    *pbVar13 = *pbVar13 & bVar7;
    out(*(undefined4 *)((longlong)&local_398 + lVar12),0);
    cVar31 = (char)(uVar26 >> 8);
    *pbVar13 = *pbVar13 + cVar31;
    puVar2 = (undefined1 *)((longlong)pbVar13 * 2 + 0x72);
    *puVar2 = *puVar2;
    *unaff_RBP = *unaff_RBP + cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
  case 7:
  case 9:
    return;
  default:
    in(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    return;
  }
  bVar33 = false;
LAB_1431ac120:
  bVar4 = false;
LAB_1431ac12b:
  uVar30 = bVar7 >> 2 & 3;
  *(undefined4 *)(auStack_38c + lVar12) = uVar9;
  uVar3 = uVar26 & 1;
  uVar26 = 0x10000 >> (char)uVar30 * '\b';
  if (uVar3 != 0) {
    uVar26 = 1;
  }
  if (bVar33) {
    uVar26 = 1;
  }
  (&iStack_384)[uVar29 * 9] = *(int *)(&DAT_14a36998c + (ulonglong)uVar30 * 4);
  uVar20 = *(undefined4 *)(&DAT_14a36999c + (ulonglong)(bVar7 >> 4 & 3) * 4);
  *(undefined4 *)(auStack_38c + lVar12 + 4) = uVar20;
  *(undefined4 *)(auStack_380 + lVar12) =
       *(undefined4 *)(&DAT_14a36999c + (ulonglong)(bVar7 & 3) * 4);
  *(int *)(auStack_380 + lVar12 + 4) = local_634;
  (&local_378)[uVar29 * 9] = local_634;
  uStack_dc = CONCAT44(local_654,(undefined4)uStack_dc);
  local_d4 = local_654;
  if (local_634 == 0) {
    if (((*(byte *)((longlong)param_2 + 0xd4) & 0xf) == 0) &&
       (bVar4 && (*(byte *)((longlong)local_630 + 0x20fa) & 2) != 0)) {
      *(undefined4 *)(auStack_38c + lVar12) = 0x3ba0e480;
      uVar9 = 0x3ba0e480;
    }
    (&local_378)[uVar29 * 9] = 0x3b9f9491;
  }
  uVar28 = (undefined1)uVar9;
  if (local_654 == 0) {
    if ((((*(byte *)((longlong)param_2 + 0xd4) & 0xf0) == 0) &&
        ((*(byte *)((longlong)local_630 + 0x20fa) & 2) != 0)) && ((&iStack_384)[uVar29 * 9] == 0)) {
      (&iStack_384)[uVar29 * 9] = 0x3ba0e480;
    }
    local_d4 = 0x3b9f9491;
  }
  uVar22 = local_d0 & 0xff;
  local_408 = CONCAT44(local_634,(uint)(byte)local_d0);
  uStack_3f4 = CONCAT44(local_654,(undefined4)uStack_3f4);
  if (((DAT_14ca8507f == '\x01') && (1 < (int)(&uStack_390)[uVar29 * 9])) && (param_2[0x19] != 0)) {
    aiStack_354[uVar22 * 9] = (&local_378)[uVar22 * 9];
    uVar17 = *(undefined8 *)(&uStack_390 + uVar22 * 9);
    *(undefined8 *)((longlong)&uStack_364 + uVar22 * 0x24) =
         *(undefined8 *)(auStack_38c + uVar22 * 0x24 + 4);
    *(undefined8 *)((longlong)&uStack_35c + uVar22 * 0x24) =
         *(undefined8 *)(auStack_380 + uVar22 * 0x24);
    *(undefined8 *)((longlong)&uStack_374 + uVar22 * 0x24) =
         *(undefined8 *)((longlong)&local_398 + uVar22 * 0x24);
    *(undefined8 *)((longlong)&uStack_36c + uVar22 * 0x24) = uVar17;
    *(undefined4 *)((longlong)&uStack_36c + (local_d0 & 0xff) * 0x24) = 1;
    *(undefined4 *)((longlong)&uStack_36c + (local_d0 & 0xff) * 0x24 + 4) = 2;
    *(undefined4 *)((longlong)&uStack_364 + (local_d0 & 0xff) * 0x24) = 0;
    *(undefined4 *)((longlong)&uStack_364 + (local_d0 & 0xff) * 0x24 + 4) = 2;
    *(undefined4 *)((longlong)&uStack_35c + (local_d0 & 0xff) * 0x24) = 0;
    local_3a0 = (byte)local_d0 + 1;
    local_39c = local_634;
    uVar22 = (ulonglong)((byte)local_d0 + 1);
    local_68 = CONCAT22(local_68._2_2_,(ushort)local_68 | (ushort)(1 << (local_d0._1_1_ & 0x1f)));
    local_d0._0_6_ = CONCAT15(1,(undefined5)local_d0);
    uVar8 = *(uint *)((longlong)&local_398 + lVar12 + 4);
    uVar28 = (undefined1)*(undefined4 *)(auStack_38c + lVar12);
    uVar20 = *(undefined4 *)(auStack_38c + lVar12 + 4);
  }
  uVar5 = local_d0;
  uStack_610._0_2_ = CONCAT11((char)(&iStack_384)[uVar29 * 9],uVar28);
  local_608._5_3_ = SUB83(uVar10,5);
  local_608._0_5_ = CONCAT14(auStack_380[lVar12],CONCAT13((char)uVar20,(undefined3)local_608));
  uStack_5e0 = CONCAT44(local_654,local_634);
  local_78 = CONCAT44(uVar8,(undefined4)local_78);
  local_d0 = CONCAT71(local_d0._1_7_,(char)uVar22 + '\x01');
  uVar10 = local_d0;
  local_d0._4_4_ = SUB84(uVar5,4);
  local_d0._0_4_ = CONCAT13(1,(int3)uVar10);
  uVar8 = *(uint *)(lVar16 + 0x24);
  lVar12 = local_660;
  if ((local_640 & 1) == 0) {
    local_b4 = CONCAT44(uVar8,(undefined4)local_b4);
    uStack_ac = (ulonglong)*(uint6 *)(lVar16 + 0x28);
  }
  else {
    if (local_b4._4_4_ < uVar8) {
      uVar8 = local_b4._4_4_;
    }
    local_b4 = CONCAT44(uVar8,(undefined4)local_b4);
    uVar8 = *(uint *)(lVar16 + 0x28);
    if ((uint)uStack_ac < *(uint *)(lVar16 + 0x28)) {
      uVar8 = (uint)uStack_ac;
    }
    uStack_ac = CONCAT44(uStack_ac._4_4_,uVar8);
  }
LAB_1431ac3f2:
  if ((DAT_14ca84f34 == '\x01') && ((longlong *)param_2[0x1d] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_2[0x1d] + 0x30))();
    uVar29 = local_d0 & 0xff;
    (&local_378)[uVar29 * 9] = 0;
    *(undefined8 *)(auStack_38c + uVar29 * 0x24 + 4) = 0;
    *(undefined8 *)(auStack_380 + uVar29 * 0x24) = 0;
    *(undefined8 *)((longlong)&local_398 + uVar29 * 0x24) = 0;
    (&uStack_390 + uVar29 * 9)[0] = 0;
    (&uStack_390 + uVar29 * 9)[1] = 0;
    iVar25 = 0x3b9e1d90;
    if (DAT_14ca84f48 != '\x02') {
      iVar25 = 0;
    }
    iVar32 = 0x3b9d4aa3;
    if (DAT_14ca84f48 != '\x01') {
      iVar32 = iVar25;
    }
    if (1 < (byte)(DAT_14ca84f48 - 1U)) {
      iVar32 = 0;
    }
    lVar16 = (**(code **)(*(longlong *)param_2[0x1d] + 8))();
    *(undefined4 *)((longlong)&local_398 + uVar29 * 0x24 + 4) =
         *(undefined4 *)
          ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar16 + 0x33) * 0x30));
    lVar16 = (**(code **)(*(longlong *)param_2[0x1d] + 8))();
    (&uStack_390)[uVar29 * 9] = (uint)*(byte *)(lVar16 + 0x31);
    *(undefined8 *)(auStack_38c + uVar29 * 0x24) = 0x100000000;
    *(undefined1 **)(&iStack_384 + uVar29 * 9) = &DAT_100000002;
    *(int *)(auStack_380 + uVar29 * 0x24 + 4) = iVar32;
    (&local_378)[uVar29 * 9] = iVar32;
    uVar22 = local_d0;
    local_3e8 = (uint)(byte)local_d0;
    uStack_610._0_3_ = CONCAT12(2,(undefined2)uStack_610);
    local_608._0_6_ = CONCAT15(1,(undefined5)local_608);
    uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)((longlong)&local_398 + uVar29 * 0x24 + 4));
    local_d0 = CONCAT71(local_d0._1_7_,(byte)local_d0 + 1);
    uVar10 = local_d0;
    local_d0._7_1_ = SUB81(uVar22,7);
    local_d0._0_6_ = (undefined6)uVar10;
    local_d0._0_7_ = CONCAT16(1,(undefined6)local_d0);
    local_5d8 = iVar32;
    local_3e4 = iVar32;
  }
  local_98 = CONCAT62(CONCAT51(CONCAT41(local_98._4_4_,*(undefined1 *)((longlong)param_2 + 0xfa)),
                               local_d0._7_1_),CONCAT11(local_c6,(undefined1)local_98));
  local_c8._1_1_ = *(undefined1 *)((longlong)param_2 + 0xfa);
  uVar9 = (*(code *)PTR_FUN_14c75b148)(&local_98,0x34,0);
  local_c4 = CONCAT44(local_c4._4_4_,uVar9);
  uVar9 = (*(code *)PTR_FUN_14c75b148)(&local_618,0x44,uVar9);
  local_c4 = CONCAT44(uVar9,(undefined4)local_c4);
  uVar28 = 0;
  if ((uVar26 & 1) != 0) {
    uVar28 = (byte)local_d0;
  }
  local_c8 = CONCAT11(local_c8._1_1_,uVar28);
  local_a4 = 1;
  uVar10 = FUN_1473bbab4(*(undefined8 *)(*(longlong *)(lVar12 + 0x120) + 0x690));
  lVar16 = 0x11;
  do {
    *(undefined8 *)(local_630 + lVar16 + 7) = 0;
    *(undefined8 *)(local_628 + lVar16 + 7) = 0xffffffff00000000;
    *(undefined2 *)(local_620 + lVar16 + 7) = 0;
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0xd1);
  local_558 = 0;
  local_554 = 0;
  lVar16 = 0xd9;
  do {
    *(undefined8 *)(local_630 + lVar16 + 7) = 0;
    *(undefined8 *)(local_628 + lVar16 + 7) = 0xffffffff00000000;
    *(undefined2 *)(local_620 + lVar16 + 7) = 0;
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0x199);
  local_490 = 0;
  local_460 = 0;
  local_457 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  FUN_144b1bd80(param_2,&local_618);
  uVar17 = FUN_1473bb10a(*(undefined8 *)(*(longlong *)(lVar12 + 0x120) + 0x690),&local_618,local_448
                         ,uVar10);
  local_678 = uVar10;
  local_670 = uVar17;
  FUN_1473bb388(lVar12,local_650,param_2,local_448);
  *(undefined8 *)(lVar12 + 0x158) = uVar10;
  *(undefined8 *)(lVar12 + 0x160) = uVar17;
  if ((local_60 ^ (ulonglong)auStack_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ac845 FUN_1431ac845 body=69 status=ok
// SIG undefined FUN_1431ac845(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac845(void)

{
  _DAT_14ca788d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca788e0,1);
  return;
}



// FUNCTION 1431ac88a FUN_1431ac88a body=69 status=ok
// SIG undefined FUN_1431ac88a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac88a(void)

{
  _DAT_14ca78768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78770,1);
  return;
}



// FUNCTION 1431ac8cf FUN_1431ac8cf body=69 status=ok
// SIG undefined FUN_1431ac8cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac8cf(void)

{
  _DAT_14ca78778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78780,1);
  return;
}



// FUNCTION 1431ac914 FUN_1431ac914 body=69 status=ok
// SIG undefined FUN_1431ac914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac914(void)

{
  _DAT_14ca78788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca78790,1);
  return;
}



// FUNCTION 1431ac959 FUN_1431ac959 body=69 status=ok
// SIG undefined FUN_1431ac959(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac959(void)

{
  _DAT_14ca787a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca787a8,1);
  return;
}



// FUNCTION 1431ac99e FUN_1431ac99e body=69 status=ok
// SIG undefined FUN_1431ac99e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac99e(void)

{
  _DAT_14ca787b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca787c0,1);
  return;
}



// FUNCTION 1431ac9e3 FUN_1431ac9e3 body=69 status=ok
// SIG undefined FUN_1431ac9e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ac9e3(void)

{
  _DAT_14ca787c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431aca25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca787d0,1);
  return;
}



// FUNCTION 1431aca28 FUN_1431aca28 body=649 status=ok
// SIG undefined FUN_1431aca28(void)

ulonglong FUN_1431aca28(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  wchar_t *_Str;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  int local_214;
  longlong local_210;
  undefined4 *local_208;
  undefined8 local_200;
  char *pcStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  int local_1dc;
  wchar_t *local_1d8;
  int local_1d0;
  undefined1 local_1c4 [4];
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong local_140;
  char *local_138;
  undefined4 local_130;
  char local_124 [260];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1473a55e6(&local_1d8,param_1,param_2);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_1473a5586();
  if (cVar1 != '\0') {
    memset(local_124,0,0x104);
    _Str = local_1d8;
    if (local_1d0 == 0) {
      _Str = L"";
    }
    local_140 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_138 = (char *)0x0;
      local_130 = 0;
      strcpy(local_124,(char *)0x0);
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(&local_1c0,_Str,sVar3 & 0xffffffff,1);
      lVar4 = local_140;
      strcpy(local_124,local_138);
      if (lVar4 != 0) {
        FUN_1400020a8(lVar4);
      }
    }
    local_1dc = 0;
    iVar2 = FUN_1473c4b79(local_124,&local_1dc,&local_1c0);
    uVar5 = 0;
    if ((iVar2 == 0) && (local_1dc != 0)) {
      local_1c0 = 1;
      local_1bc = 0;
      uStack_1b4 = 0;
      local_1ac = 0;
      uStack_1a4 = 0;
      local_19c = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0x100000000;
      local_210 = 0;
      local_208 = &local_1c0;
      pcStack_1f8 = local_124;
      iVar2 = FUN_1473c46a4();
      if (iVar2 != 0) {
        FUN_1431b4552(iVar2,
                      "vpCreateInstance(&ProfileInstanceCreateInfo, VULKAN_CPU_ALLOCATOR, &TempInstance)"
                      ,".\\Runtime/VulkanRHI/Private/VulkanRHI.cpp",0x143);
      }
      FUN_143198ff0(local_210);
      lVar4 = FUN_1431ae87c(local_210);
      if (lVar4 != 0) {
        local_214 = 0;
        local_228 = local_1c4;
        iVar2 = FUN_1473c61bb(local_210,lVar4,local_124);
        if (iVar2 != 0) {
          FUN_1431b4552(iVar2,
                        "vpGetPhysicalDeviceProfileSupport(TempInstance, PhysicalDevice, &ProfileProperties, &bDeviceSupported)"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRHI.cpp",0x158);
        }
        if (local_214 != 0) {
          if (local_210 != 0) {
            (*DAT_14ca79358)(local_210,0);
            local_210 = 0;
            FUN_1473a5090();
          }
          uVar5 = 1;
          goto LAB_1431aca5f;
        }
      }
      if (local_210 != 0) {
        (*DAT_14ca79358)(local_210,0);
        local_210 = 0;
        FUN_1473a5090();
      }
      uVar5 = 0;
    }
  }
LAB_1431aca5f:
  if (local_1d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}


