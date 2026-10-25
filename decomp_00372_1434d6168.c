// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434d6168 FUN_1434d6168 body=232 status=ok
// SIG undefined FUN_1434d6168(void)

void FUN_1434d6168(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1434d6250 FUN_1434d6250 body=81 status=ok
// SIG undefined FUN_1434d6250(void)

void FUN_1434d6250(undefined8 param_1,longlong *param_2)

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
  FUN_147a7660d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1434d62a2 FUN_1434d62a2 body=481 status=ok
// SIG undefined FUN_1434d62a2(void)

void FUN_1434d62a2(longlong param_1,ulonglong *param_2)

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
  FUN_147a76922(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d6484 FUN_1434d6484 body=232 status=ok
// SIG undefined FUN_1434d6484(void)

void FUN_1434d6484(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1434d656c FUN_1434d656c body=81 status=ok
// SIG undefined FUN_1434d656c(void)

void FUN_1434d656c(undefined8 param_1,longlong *param_2)

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
  FUN_147a769c5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1434d65bd FUN_1434d65bd body=7323 status=ok
// SIG undefined FUN_1434d65bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d65bd(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined **ppuStack_b0;
  undefined8 local_a8;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  ppuStack_b0 = &PTR_FUN_14a8aa530;
  local_a8 = 1;
  local_b8 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8aa550,1,0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cad5990);
  if (cVar2 == '\0') {
    _DAT_14cad5990 = 0;
    uRam000000014cad5998 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cad59a8,L"ReceiveOnActivate",1);
  FUN_1446f470e(&DAT_14cad59b8,L"ReceiveOnActorSelected",1);
  FUN_1446f470e(&DAT_14cad59c8,L"ReceiveOnDeactivate",1);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8acf10,1,0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8ad5d0,1,&PTR_FUN_14a8ad5a0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8adda0,1,0);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e35db0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e35d40;
  *(code **)(local_98 + 0x18) = FUN_1434bac98;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14170bbaa(&DAT_14cad5a58,L"gc.DebugGraphShow",
                L"Show GC debug graph. (See also: DebugGraphSafeDurationThresholdMs)",&local_98);
  if ((int)local_90 == 0) {
LAB_1434d67ef:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1434d67ef;
  }
  atexit(FUN_1434bacff);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e35db0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e35d40;
  *(code **)(local_98 + 0x18) = FUN_1434bad44;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14170bbaa(&DAT_14cad5a68,L"gc.DebugGraphHide",L"Hide GC debug graph.",&local_98);
  if ((int)local_90 == 0) {
LAB_1434d68cd:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1434d68cd;
  }
  atexit(FUN_1434badb4);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad5a78,L"gc.DebugGraphSafeDurationThresholdMs",&DAT_14c7614d0,
                L"GC Debug Graph: Safe GC duration threshold (in milliseconds).");
  atexit(FUN_1434badf9);
  local_98 = (code *)CONCAT71(local_98._1_7_,1);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cad5a90,L"DebugViewModeHelpers.Enable",&local_98,
                L"Specifies whether to enable the debug view mode shaders. Typically only disabled for a special case editor build, if it doesn\'t require them"
               );
  atexit(FUN_1434bb0e2);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8aef70,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8af2c0,1,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad5ad8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad5ad8,4000);
  atexit((_func_5014 *)&LAB_1434bb127);
  DAT_14cad5b00 = 0;
  _DAT_14cad5b08 = 0;
  atexit(FUN_1434bb135);
  DAT_14cad5b40 = 0;
  _DAT_14cad5b48 = 0x8000000000;
  FUN_1401b5a8c(&DAT_14cad5b10,1);
  atexit((_func_5014 *)&LAB_1434bb166);
  local_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a8af6a0;
  local_b8 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8af6c0,1,0);
  ppuStack_b0 = &PTR_FUN_14a8afba0;
  local_b8 = 0;
  local_a8 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8afc00,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b0550,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b13c0,1,0);
  FUN_1446f470e(&DAT_14cad6f10,L"MovementComponent0",1);
  FUN_1446f470e(&DAT_14cad5c50,L"CollisionComponent0",1);
  FUN_1446f470e(&DAT_14cad6f18,L"MeshComponent0",1);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b1c10,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b1f70,1,0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b2600,1,&PTR_FUN_14a8b25b0);
  local_98._0_4_ = 0x41000000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad6ea0,L"demo.RecordHz",&local_98,
                L"Maximum number of demo frames recorded per second");
  atexit(FUN_1434bb292);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad6e88,L"demo.MinRecordHz",&local_98,
                L"Minimum number of demo frames recorded per second (use with care)");
  atexit(FUN_1434bb2d7);
  local_98._0_4_ = 0xbf800000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5cf0,L"demo.TimeDilation",&local_98,
                L"Override time dilation during demo playback (-1 = don\'t override)");
  atexit(FUN_1434bb31c);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5d08,L"demo.SkipTime",&local_98,
                L"Skip fixed amount of network replay time (in seconds)");
  atexit(FUN_1434bb361);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6eb8,L"demo.EnableCheckpoints",&local_98,
                L"Whether or not checkpoints save on the server");
  atexit(FUN_1434bb3a6);
  local_98._0_4_ = 0xbf800000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5d20,L"demo.GotoTimeInSeconds",&local_98,
                L"For testing only, jump to a particular time");
  atexit(FUN_1434bb3eb);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5d38,L"demo.FastForwardDestroyTearOffActors",&local_98,
                L"If true, the driver will destroy any torn-off actors immediately while fast-forwarding a replay."
               );
  atexit(FUN_1434bb430);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5d50,L"demo.FastForwardSkipRepNotifies",&local_98,
                L"If true, the driver will optimize fast-forwarding by deferring calls to RepNotify functions until the fast-forward is complete. "
               );
  atexit(FUN_1434bb475);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5d68,L"demo.QueueCheckpointChannels",&local_98,
                L"If true, the driver will put all channels created during checkpoint loading into queuing mode, to amortize the cost of spawning new actors across multiple frames."
               );
  atexit(FUN_1434bb4ba);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5d80,L"demo.UseAdaptiveReplayUpdateFrequency",&local_98,
                L"If 1, NetUpdateFrequency will be calculated based on how often actors actually write something when recording to a replay"
               );
  atexit(FUN_1434bb4ff);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5d98,L"demo.AsyncLoadWorld",&local_98,
                L"If 1, we will use seamless server travel to load the replay world asynchronously")
  ;
  atexit(FUN_1434bb544);
  local_98._0_4_ = 0x41f00000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad6ed0,L"demo.CheckpointUploadDelayInSeconds",&local_98,&DAT_149dfb77a);
  atexit(FUN_1434bb589);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5db0,L"demo.LoadCheckpointGarbageCollect",&local_98,
                L"If nonzero, CollectGarbage will be called during LoadCheckpoint after the old actors and connection are cleaned up."
               );
  atexit(FUN_1434bb5ce);
  local_98._0_4_ = 0xbf800000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad6ee8,L"demo.CheckpointSaveMaxMSPerFrameOverride",&local_98,
                L"If >= 0, this value will override the CheckpointSaveMaxMSPerFrame member variable, which is the maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes."
               );
  atexit(FUN_1434bb613);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6e58,L"demo.ClientRecordAsyncEndOfFrame",&local_98,
                L"If true, TickFlush will be called on a thread in parallel with Slate.");
  atexit(FUN_1434bb658);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5dc8,L"demo.ForceDisableAsyncPackageMapLoading",&local_98,
                L"If true, async package map loading of network assets will be disabled.");
  atexit(FUN_1434bb69d);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6e70,L"demo.UseNetRelevancy",&local_98,
                L"If 1, will enable relevancy checks and distance culling, using all connected clients as reference."
               );
  atexit(FUN_1434bb6e2);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5de0,L"demo.CullDistanceOverride",&local_98,
                L"If > 0, will represent distance from any viewer where actors will stop being recorded."
               );
  atexit(FUN_1434bb727);
  local_98._0_4_ = 0x40000000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5df8,L"demo.RecordHzWhenNotRelevant",&local_98,
                L"Record at this frequency when actor is not relevant.");
  atexit(FUN_1434bb76c);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5e10,L"demo.Loop",&local_98,
                L"<1> : play replay from beginning once it reaches the end / <0> : stop replay at the end"
               );
  atexit(FUN_1434bb7b1);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5e28,L"demo.FastForwardIgnoreRPCs",&local_98,
                L"If true, RPCs will be discarded during playback fast forward.");
  atexit(FUN_1434bb7f6);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5e40,L"demo.LateActorDormancyCheck",&local_98,
                L"If true, check if an actor should become dormant as late as possible- when serializing it to the demo archive."
               );
  atexit(FUN_1434bb83b);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5e58,L"demo.JumpToEndOfLiveReplay",&local_98,
                L"If true, fast forward to a few seconds before the end when starting playback, if the replay is still being recorded."
               );
  atexit(FUN_1434bb880);
  local_98._0_4_ = 1;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5e70,L"demo.InternalPauseChannels",&local_98,
                L"If true, run standard logic for PauseChannels rather than letting the game handle it via FOnPauseChannelsDelegate."
               );
  atexit(FUN_1434bb8c5);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad5e88,L"demo.LoopCount",&DAT_14cad5e98,
                L"If > 1, will play the replay that many times before stopping.");
  atexit(FUN_1434bb90a);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cad5ea0,L"demo.SaveRollbackActorState",&DAT_14c7614d4,
                L"If true, rollback actors will save some replicated state to apply when respawned."
               );
  atexit(FUN_1434bb94f);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6e10,L"demo.WithLevelStreamingFixes",&local_98,
                L"If 1, provides fixes for level streaming (but breaks backwards compatibility).");
  atexit(FUN_1434bb994);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5eb0,L"demo.WithTimeBurnIn",&local_98,
                L"If true, adds an on screen message with the current DemoTime and Changelist.");
  atexit(FUN_1434bb9d9);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6e28,L"demo.WithDeltaCheckpoints",&local_98,
                L"If true, record checkpoints as a delta from the previous checkpoint.");
  atexit(FUN_1434bba1e);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad6e40,L"demo.WithGameSpecificFrameData",&local_98,
                L"If true, allow game specific data to be recorded with each demo frame.");
  atexit(FUN_1434bba63);
  local_98._0_4_ = 0x3f666666;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5ec8,L"demo.IncreaseRepPrioritizeThreshold",&local_98,
                L"The % of Replicated to Prioritized actors at which prioritize time will be decreased."
               );
  atexit(FUN_1434bbaa8);
  local_98._0_4_ = 0x3f333333;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5ee0,L"demo.DecreaseRepPrioritizeThreshold",&local_98,
                L"The % of Replicated to Prioritized actors at which prioritize time will be increased."
               );
  atexit(FUN_1434bbaed);
  local_98._0_4_ = 0x3e99999a;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5ef8,L"demo.MinimumRepPrioritizePercent",&local_98,
                L"Minimum percent of time that must be spent prioritizing actors, regardless of throttling."
               );
  atexit(FUN_1434bbb32);
  local_98._0_4_ = 0x3f333333;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5f10,L"demo.MaximumRepPrioritizePercent",&local_98,
                L"Maximum percent of time that may be spent prioritizing actors, regardless of throttling."
               );
  atexit(FUN_1434bbb77);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5f28,L"demo.FastForwardLevelsPausePlayback",&local_98,
                L"If true, pause channels and playback while fast forward levels task is running.");
  atexit(FUN_1434bbbbc);
  FUN_1446f470e(&DAT_14cad5f40,L"SkipTimeInSecondsTask",1);
  FUN_1446f470e(&DAT_14cad5f48,L"JumpToLiveReplayTask",1);
  FUN_1446f470e(&DAT_14cad5f50,L"GotoTimeInSecondsTask",1);
  FUN_1446f470e(&DAT_14cad5f58,L"FastForwardLevelsTask",1);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cad5f60,L"Demo.ExceededBudgetWarningInterval",&DAT_14c7614d8,
                L"When > 0, we will wait this many seconds between logging warnings for demo recording exceeding time budgets."
               );
  atexit(FUN_1434bbc01);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad5f70,L"demo.RecordUnicastRPCs",&DAT_14cad5f80,
                L"When true, also record unicast client rpcs on actors that share a net driver name with the demo driver."
               );
  atexit(FUN_1434bbc46);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5f88,L"demo.ForcePersistentLevelPriority",&local_98,
                L"If true, force persistent level to record first when prioritizing and using streaming level fixes."
               );
  atexit(FUN_1434bbc8b);
  local_98._0_4_ = 0x7fffffff;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5fa0,L"demo.DestructionInfoPriority",&local_98,
                L"Replay net priority assigned to destruction infos during recording.");
  atexit(FUN_1434bbcd0);
  local_98._0_4_ = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad5fb8,L"demo.LateDestructionInfoPrioritize",&local_98,
                L"If true, process destruction infos at the end of the prioritization phase.");
  atexit(FUN_1434bbd15);
  local_98._0_4_ = 0x40400000;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5fd0,L"demo.ViewTargetPriorityScale",&local_98,
                L"Scale view target priority by this value when prioritization is enabled.");
  atexit(FUN_1434bbd5a);
  local_98 = (code *)CONCAT44(local_98._4_4_,0x3e4ccccd);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cad5fe8,L"demo.MaximumRecDestructionInfoTime",&local_98,
                L"Maximum percentage of frame to use replicating destruction infos, if per frame limit is enabled."
               );
  atexit(FUN_1434bbd9f);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a380e50;
  *(code **)(local_98 + 0x18) = FUN_1434d2628;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cad6000,L"Demo.MaxDesiredRecordTimeMS",
                L"Set max desired record time in MS on demo driver of the current world.",&local_98)
  ;
  if ((int)local_90 == 0) {
LAB_1434d7583:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1434d7583;
  }
  atexit(FUN_1434bbde4);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a380e50;
  *(code **)(local_98 + 0x18) = FUN_1434d2672;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cad6010,L"Demo.CheckpointSaveMaxMSPerFrame",
                L"Set max checkpoint record time in MS on demo driver of the current world.",
                &local_98);
  if ((int)local_90 == 0) {
LAB_1434d7661:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1434d7661;
  }
  atexit(FUN_1434bbe29);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a380e50;
  *(code **)(local_98 + 0x18) = FUN_1434d26c4;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cad6020,L"Demo.ActorPrioritizationEnabled",
                L"Set whether or not actor prioritization is enabled on demo driver of the current world."
                ,&local_98);
  if ((int)local_90 == 0) {
LAB_1434d773f:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1434d773f;
  }
  atexit(FUN_1434bbe6e);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a380e50;
  *(code **)(local_98 + 0x18) = FUN_1434d2714;
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cad6030,L"Demo.SetLocalViewerOverride",
                L"Set first local player controller as the viewer override on demo driver of the current world."
                ,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_1434d782b;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1434d782b:
  atexit(FUN_1434bbeb3);
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a8ba7a0;
  DAT_14cad6f00 = puVar3;
  DAT_14cad6f08 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  DAT_14cad6f08[1] = &DAT_100000001;
  *DAT_14cad6f08 = &PTR_LAB_14a8bc7f0;
  DAT_14cad6f08[2] = puVar3;
  atexit(FUN_1434c8e72);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b5b10,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b60c0,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b6580,1,0);
  FUN_140056680(&local_98,&DAT_149dfb77a);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cad6088,L"dp.Override",&local_98,
                L"DeviceProfile override - setting this will use the named DP as the active DP. In addition, it will restore any\n previous overrides before setting (does a dp.OverridePop before setting after the first time).\n The commandline -dp option will override this on startup, but not when setting this at runtime\n"
               );
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1434ca1c5);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cad60a0,L"dp.AllowScalabilityGroupsToChangeAtRuntime",&local_98,
                L"If true, device profile scalability bucket cvars will be set with scalabilitypriority which allows them to be changed at runtime. Off by default."
               );
  atexit(FUN_1434ca20a);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_b8 = CONCAT44(local_b8._4_4_,4);
  FUN_14078dbce(&DAT_14cad60b8,L"eg.dp.OverrideTriggersAltProfileUpdate",&local_98,
                L"Call UpdateActiveProfile() when dp.Override changes. Useful on platforms that can change base profiles at runtime."
               );
  atexit(FUN_1434ca24f);
  _DAT_14cad60f0 = 0;
  _DAT_14cad60f8 = 0;
  _DAT_14cad60d0 = 0;
  uRam000000014cad60d8 = 0;
  _DAT_14cad60fc = 0xffffffff00000080;
  _DAT_14cad6104 = 0;
  DAT_14cad6110 = 0;
  _DAT_14cad6118 = 0;
  atexit(FUN_1434ca294);
  FUN_140056680(&DAT_14cad6120,L"_Backup");
  atexit((_func_5014 *)&LAB_1434ca2c3);
  DAT_14cad6150 = 0;
  DAT_14cad6158 = 0;
  DAT_14cad6130 = 0;
  _DAT_14cad6138 = 0;
  _DAT_14cad615c = 0xffffffff00000080;
  DAT_14cad6164 = 0;
  DAT_14cad6170 = 0;
  DAT_14cad6178 = 0;
  atexit(FUN_1434ca2d4);
  _DAT_14cad61a0 = 0;
  _DAT_14cad61a8 = 0;
  _DAT_14cad6180 = 0;
  uRam000000014cad6188 = 0;
  _DAT_14cad61ac = 0xffffffff00000080;
  _DAT_14cad61b4 = 0;
  DAT_14cad61c0 = 0;
  _DAT_14cad61c8 = 0;
  atexit(FUN_1434ca303);
  _DAT_14cad61f0 = 0;
  _DAT_14cad61f8 = 0;
  DAT_14cad61d0 = 0;
  _DAT_14cad61d8 = 0;
  _DAT_14cad61fc = 0xffffffff00000080;
  DAT_14cad6204 = 0;
  DAT_14cad6210 = 0;
  DAT_14cad6218 = 0;
  atexit(FUN_1434ca332);
  DAT_14cad6220 = 0;
  _DAT_14cad6228 = 0;
  atexit(FUN_1434ca361);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = &LAB_1434d4a62;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cad6238,8,&local_98);
  FUN_14118b488(&DAT_14cad6268);
  _DAT_14cad6268 = &PTR_FUN_14a8ba930;
  atexit((_func_5014 *)&LAB_1434d05cc);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 9;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8b7cc0);
  FUN_1446f470e(&DAT_14cad6348,L"SRC_Chipset",1);
  FUN_1446f470e(&DAT_14cad6350,L"SRC_MakeAndModel",1);
  FUN_1446f470e(&DAT_14cad6358,L"SRC_OSVersion",1);
  FUN_1446f470e(&DAT_14cad6360,L"SRC_CommandLine",1);
  FUN_1446f470e(&DAT_14cad6368,L"SRC_PrimaryGPUDesc",1);
  FUN_1446f470e(&DAT_14cad6370,L"SRC_PreviousRegexMatch",1);
  FUN_1446f470e(&DAT_14cad6378,L"SRC_PreviousRegexMatch1",1);
  FUN_1446f470e(&DAT_14cad6380,&DAT_149e3428c,1);
  FUN_1446f470e(&DAT_14cad6388,&DAT_149e0633e,1);
  FUN_1446f470e(&DAT_14cad6390,&DAT_149e342e0,1);
  FUN_1446f470e(&DAT_14cad6398,&DAT_149e06342,1);
  FUN_1446f470e(&DAT_14cad63a0,&DAT_149e34300,1);
  FUN_1446f470e(&DAT_14cad63a8,&DAT_149e342b8,1);
  FUN_1446f470e(&DAT_14cad63b0,L"CMP_Regex",1);
  FUN_1446f470e(&DAT_14cad63b8,L"CMP_EqualIgnore",1);
  FUN_1446f470e(&DAT_14cad63c0,L"CMP_LessIgnore",1);
  FUN_1446f470e(&DAT_14cad63c8,L"CMP_LessEqualIgnore",1);
  FUN_1446f470e(&DAT_14cad63d0,L"CMP_GreaterIgnore",1);
  FUN_1446f470e(&DAT_14cad63d8,L"CMP_GreaterEqualIgnore",1);
  FUN_1446f470e(&DAT_14cad63e0,L"CMP_NotEqualIgnore",1);
  FUN_1446f470e(&DAT_14cad63e8,L"CMP_Hash",1);
  FUN_1446f470e(&DAT_14cad63f0,&DAT_14a8b8026,1);
  FUN_1446f470e(&DAT_14cad63f8,&DAT_14a8b802c,1);
  local_a8 = 2;
  ppuStack_b0 = &PTR_FUN_14a8b83e0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8b8420);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b88b0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8b9020,1,&PTR_FUN_14a8b8ff0);
  FUN_140056680(&DAT_14cad64a8,L"Dialogue");
  atexit((_func_5014 *)&LAB_1434d0646);
  FUN_140056680(&DAT_14cad64b8,L"DialogueNotes");
  atexit((_func_5014 *)&LAB_1434d0657);
  FUN_140056680(&DAT_14cad64c8,L"_Subtitle");
  atexit((_func_5014 *)&LAB_1434d0668);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_b8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cad64d8,L"r.GenerateMeshDistanceFields",&local_98,
                L"Whether to build distance fields of static meshes, needed for Lumen Software Ray Tracing and Distance Field AO, which is used to implement Movable SkyLight shadows.\nEnabling will increase mesh build times and memory usage.  Changing this value will cause a rebuild of all static meshes."
               );
  atexit(FUN_1434d06cf);
  local_98._0_4_ = 1;
  local_b8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cad64f0,L"r.DistanceFields.SupportEvenIfHardwareRayTracingSupported",
                &local_98,
                L"Whether to support distance fields when hardware ray tracing is supported.\nSetting it to 0 will skip distance field overhead when hardware ray tracing is supported."
               );
  atexit(FUN_1434d0714);
  local_98._0_4_ = 0x100;
  local_b8._0_4_ = 4;
  FUN_14078dbce(&DAT_14cad6508,L"r.DistanceFields.MaxPerMeshResolution",&local_98,
                L"Highest resolution (in one dimension) allowed for a single static mesh asset, used to cap the memory usage of meshes with a large scale.\nChanging this will cause all distance fields to be rebuilt.  Large values such as 512 can consume memory very quickly! (64Mb for one asset at 512)"
               );
  atexit(FUN_1434d0759);
  local_98 = (code *)CONCAT44(local_98._4_4_,0x3e4ccccd);
  local_b8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14cad6520,L"r.DistanceFields.DefaultVoxelDensity",&local_98,
                L"Determines how the default scale of a mesh converts into distance field voxel dimensions.\nChanging this will cause all distance fields to be rebuilt.  Large values can consume memory very quickly!"
               );
  atexit(FUN_1434d079e);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6538,L"r.HeightFields.AtlasTileSize",&DAT_14c7614dc,
                L"Suballocation granularity");
  atexit(FUN_1434d07e3);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6548,L"r.HeightFields.AtlasDimInTiles",&DAT_14c7614e0,
                L"Number of tiles the atlas has in one dimension");
  atexit(FUN_1434d0828);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6558,L"r.HeightFields.AtlasDownSampleLevel",&DAT_14c7614e4,
                L"Max number of times a suballocation can be down-sampled");
  atexit(FUN_1434d086d);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6568,L"r.HeightFields.VisibilityAtlasTileSize",&DAT_14c7614e8,
                L"Suballocation granularity");
  atexit(FUN_1434d08b2);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6578,L"r.HeightFields.VisibilityAtlasDimInTiles",&DAT_14c7614ec,
                L"Number of tiles the atlas has in one dimension");
  atexit(FUN_1434d08f7);
  local_b8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cad6588,L"r.HeightFields.VisibilityAtlasDownSampleLevel",&DAT_14c7614f0,
                L"Max number of times a suballocation can be down-sampled");
  atexit(FUN_1434d093c);
  FUN_147a656c0(&DAT_14cad6598,0);
  _DAT_14cad6598 = &PTR_FUN_14a8bcd70;
  FUN_1463c4db2(&DAT_14cad6598);
  atexit(FUN_1434d0981);
  FUN_147a656c0(&DAT_14cad6770,1);
  _DAT_14cad6770 = &PTR_FUN_14a8bcd70;
  FUN_1463c4db2(&DAT_14cad6770);
  atexit(FUN_1434d09b0);
  local_b8 = CONCAT44(local_b8._4_4_,4);
  FUN_141471170(&DAT_14cad6948,L"r.AOAsyncBuildQueue",&DAT_14c761500,
                L"Whether to asynchronously build distance field volume data from meshes.");
  atexit(FUN_1434d0ad1);
  local_90 = FUN_145deb838;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cad6a70,&local_98);
  local_90 = FUN_145ea3fbe;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cad6b98,&local_98);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d825c FUN_1434d825c body=1081 status=ok
// SIG undefined FUN_1434d825c(void)

void FUN_1434d825c(uint *param_1,float *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  void *_Src;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  char cVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_c8 [32];
  uint local_a8;
  float local_a4;
  undefined8 local_a0;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *(undefined8 *)param_1;
  local_98 = (void *)0x0;
  local_90 = param_1[4];
  lVar18 = (longlong)(int)local_90;
  _Src = *(void **)(param_1 + 2);
  if (lVar18 == 0) {
    fVar29 = (float)((ulonglong)local_a0 >> 0x20);
    local_8c = 0;
  }
  else {
    FUN_1447c510a(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar18 << 2);
    fVar29 = local_a0._4_4_;
  }
  local_84 = (undefined1)param_1[7];
  local_88 = (float)param_1[6];
  fVar30 = param_2[1];
  fVar28 = fVar29;
  if (fVar30 <= fVar29) {
    fVar28 = fVar30;
  }
  fVar30 = (float)(int)(*(byte *)((longlong)param_2 + 0x19) - 1) *
           (float)(~-(uint)(*param_2 == 0.0) & (uint)(1.0 / *param_2)) + fVar30;
  fVar29 = (float)(int)(((uint)local_88 >> 8 & 0xff) - 1) *
           (float)(~-(uint)((float)local_a0 == 0.0) & (uint)(1.0 / (float)local_a0)) + fVar29;
  if (fVar29 <= fVar30) {
    fVar29 = fVar30;
  }
  local_a8 = (uint)(float)(int)(((uint)local_88 >> 0x10 & 0xff) - ((uint)local_88 >> 0x18));
  fVar30 = local_88;
  if (SUB41(local_88,0) == '\x01') {
    fVar30 = param_2[6];
  }
  bVar6 = *(byte *)((longlong)param_2 + 0x1a);
  uVar22 = 0;
  cVar21 = SUB41(fVar30,0);
  uVar24 = 0;
  if (cVar21 != '\x01') {
    uVar24 = local_a8;
  }
  uVar17 = local_a8 << (cVar21 != '\x01');
  bVar7 = *(byte *)((longlong)param_2 + 0x1b);
  fVar29 = (fVar29 - fVar28) / 127.0;
  *(char *)(param_1 + 6) = cVar21;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0x80;
  *(char *)((longlong)param_1 + 0x1a) = (char)uVar17;
  *(char *)((longlong)param_1 + 0x1b) = (char)uVar24;
  *param_1 = -(uint)(0.0 < fVar29) & (uint)(1.0 / fVar29);
  param_1[1] = (uint)fVar28;
  uVar24 = uVar17 * 0x80;
  if ((int)local_a8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar24);
  }
  puVar1 = param_1 + 2;
  param_1[4] = 0;
  uVar14 = uVar24;
  if (param_1[5] != uVar24) {
    FUN_14482f6fa(puVar1);
    uVar22 = param_1[4];
    uVar14 = param_1[5];
  }
  param_1[4] = uVar22 + uVar24;
  local_a4 = fVar30;
  if (uVar14 - uVar22 < uVar24) {
    FUN_14475e4ac(puVar1);
  }
  iVar16 = (int)(float)(int)((uint)bVar6 - (uint)bVar7);
  lVar23 = 0;
  memset((void *)((longlong)(int)uVar22 * 4 + *(longlong *)puVar1),0,(ulonglong)uVar24 << 2);
  uVar19 = (ulonglong)(local_a8 + (local_a8 == 0));
  lVar18 = (ulonglong)local_a8 << 2;
  lVar20 = 0;
  do {
    fVar26 = (float)(int)lVar20 * fVar29 + fVar28;
    fVar30 = (fVar26 - local_a0._4_4_) * (float)local_a0;
    fVar30 = (float)(-(uint)(0.0 <= fVar30) & (uint)fVar30);
    uVar24 = (uint)fVar30;
    uVar14 = ((uint)local_88 >> 8 & 0xff) - 1;
    uVar22 = uVar14;
    if (uVar24 < uVar14) {
      uVar22 = uVar24;
    }
    uVar8 = uVar24 + 1;
    if (uVar14 <= uVar24 + 1) {
      uVar8 = uVar14;
    }
    fVar26 = (fVar26 - param_2[1]) * *param_2;
    fVar26 = (float)(-(uint)(0.0 <= fVar26) & (uint)fVar26);
    uVar14 = (uint)fVar26;
    uVar25 = *(byte *)((longlong)param_2 + 0x19) - 1;
    uVar24 = uVar25;
    if (uVar14 < uVar25) {
      uVar24 = uVar14;
    }
    uVar9 = uVar14 + 1;
    if (uVar25 <= uVar14 + 1) {
      uVar9 = uVar25;
    }
    if (local_a8 != 0) {
      uVar14 = (uint)local_88 >> 0x10 & 0xff;
      iVar12 = uVar22 * uVar14;
      iVar10 = uVar8 * uVar14;
      auVar27 = roundss(ZEXT816(0),ZEXT416((uint)fVar30),0xb);
      fVar30 = fVar30 - auVar27._0_4_;
      auVar27 = roundss(ZEXT816(0),ZEXT416((uint)fVar26),0xb);
      fVar26 = fVar26 - auVar27._0_4_;
      lVar2 = *(longlong *)(param_2 + 2) +
              (longlong)(int)(uVar24 * *(byte *)((longlong)param_2 + 0x1a)) * 4;
      lVar3 = *(longlong *)(param_2 + 2) +
              (longlong)(int)(uVar9 * *(byte *)((longlong)param_2 + 0x1a)) * 4;
      uVar13 = 0;
      do {
        fVar4 = *(float *)((longlong)local_98 + uVar13 * 4 + (longlong)iVar12 * 4);
        uVar15 = (longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) %
                 (longlong)iVar16 & 0xffffffff;
        fVar5 = *(float *)(lVar2 + uVar15 * 4);
        *(float *)(*(longlong *)puVar1 + lVar23 + uVar13 * 4) =
             ((*(float *)(lVar3 + uVar15 * 4) - fVar5) * fVar26 + fVar5) *
             ((*(float *)((longlong)local_98 + uVar13 * 4 + (longlong)iVar10 * 4) - fVar4) * fVar30
             + fVar4);
        uVar13 = uVar13 + 1;
      } while (uVar19 != uVar13);
      if (local_a4._0_1_ != '\x01') {
        lVar11 = (ulonglong)*(byte *)((longlong)param_2 + 0x1b) * 4;
        uVar13 = 0;
        do {
          fVar4 = *(float *)((longlong)local_98 +
                            uVar13 * 4 + (ulonglong)local_88._3_1_ * 4 + (longlong)iVar12 * 4);
          uVar15 = (longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff)
                   % (longlong)iVar16 & 0xffffffff;
          fVar5 = *(float *)(lVar2 + lVar11 + uVar15 * 4);
          *(float *)(*(longlong *)puVar1 + lVar18 + uVar13 * 4) =
               ((*(float *)(lVar3 + lVar11 + uVar15 * 4) - fVar5) * fVar26 + fVar5) *
               ((*(float *)((longlong)local_98 +
                           uVar13 * 4 + (ulonglong)local_88._3_1_ * 4 + (longlong)iVar10 * 4) -
                fVar4) * fVar30 + fVar4);
          uVar13 = uVar13 + 1;
        } while (uVar19 != uVar13);
      }
    }
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + (ulonglong)uVar17 * 4;
    lVar18 = lVar18 + (ulonglong)uVar17 * 4;
  } while (lVar20 != 0x80);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d8697 FUN_1434d8697 body=1081 status=ok
// SIG undefined FUN_1434d8697(void)

void FUN_1434d8697(uint *param_1,float *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  void *_Src;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  char cVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_c8 [32];
  uint local_a8;
  float local_a4;
  undefined8 local_a0;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *(undefined8 *)param_1;
  local_98 = (void *)0x0;
  local_90 = param_1[4];
  lVar18 = (longlong)(int)local_90;
  _Src = *(void **)(param_1 + 2);
  if (lVar18 == 0) {
    fVar29 = (float)((ulonglong)local_a0 >> 0x20);
    local_8c = 0;
  }
  else {
    FUN_1447c510a(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar18 << 2);
    fVar29 = local_a0._4_4_;
  }
  local_84 = (undefined1)param_1[7];
  local_88 = (float)param_1[6];
  fVar30 = param_2[1];
  fVar28 = fVar29;
  if (fVar30 <= fVar29) {
    fVar28 = fVar30;
  }
  fVar30 = (float)(int)(*(byte *)((longlong)param_2 + 0x19) - 1) *
           (float)(~-(uint)(*param_2 == 0.0) & (uint)(1.0 / *param_2)) + fVar30;
  fVar29 = (float)(int)(((uint)local_88 >> 8 & 0xff) - 1) *
           (float)(~-(uint)((float)local_a0 == 0.0) & (uint)(1.0 / (float)local_a0)) + fVar29;
  if (fVar29 <= fVar30) {
    fVar29 = fVar30;
  }
  local_a8 = (uint)(float)(int)(((uint)local_88 >> 0x10 & 0xff) - ((uint)local_88 >> 0x18));
  fVar30 = local_88;
  if (SUB41(local_88,0) == '\x01') {
    fVar30 = param_2[6];
  }
  bVar6 = *(byte *)((longlong)param_2 + 0x1a);
  uVar22 = 0;
  cVar21 = SUB41(fVar30,0);
  uVar24 = 0;
  if (cVar21 != '\x01') {
    uVar24 = local_a8;
  }
  uVar17 = local_a8 << (cVar21 != '\x01');
  bVar7 = *(byte *)((longlong)param_2 + 0x1b);
  fVar29 = (fVar29 - fVar28) / 127.0;
  *(char *)(param_1 + 6) = cVar21;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0x80;
  *(char *)((longlong)param_1 + 0x1a) = (char)uVar17;
  *(char *)((longlong)param_1 + 0x1b) = (char)uVar24;
  *param_1 = -(uint)(0.0 < fVar29) & (uint)(1.0 / fVar29);
  param_1[1] = (uint)fVar28;
  uVar24 = uVar17 * 0x80;
  if ((int)local_a8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar24);
  }
  puVar1 = param_1 + 2;
  param_1[4] = 0;
  uVar14 = uVar24;
  if (param_1[5] != uVar24) {
    FUN_14482f6fa(puVar1);
    uVar22 = param_1[4];
    uVar14 = param_1[5];
  }
  param_1[4] = uVar22 + uVar24;
  local_a4 = fVar30;
  if (uVar14 - uVar22 < uVar24) {
    FUN_14475e4ac(puVar1);
  }
  iVar16 = (int)(float)(int)((uint)bVar6 - (uint)bVar7);
  lVar23 = 0;
  memset((void *)((longlong)(int)uVar22 * 4 + *(longlong *)puVar1),0,(ulonglong)uVar24 << 2);
  uVar19 = (ulonglong)(local_a8 + (local_a8 == 0));
  lVar18 = (ulonglong)local_a8 << 2;
  lVar20 = 0;
  do {
    fVar26 = (float)(int)lVar20 * fVar29 + fVar28;
    fVar30 = (fVar26 - local_a0._4_4_) * (float)local_a0;
    fVar30 = (float)(-(uint)(0.0 <= fVar30) & (uint)fVar30);
    uVar24 = (uint)fVar30;
    uVar14 = ((uint)local_88 >> 8 & 0xff) - 1;
    uVar22 = uVar14;
    if (uVar24 < uVar14) {
      uVar22 = uVar24;
    }
    uVar8 = uVar24 + 1;
    if (uVar14 <= uVar24 + 1) {
      uVar8 = uVar14;
    }
    fVar26 = (fVar26 - param_2[1]) * *param_2;
    fVar26 = (float)(-(uint)(0.0 <= fVar26) & (uint)fVar26);
    uVar14 = (uint)fVar26;
    uVar25 = *(byte *)((longlong)param_2 + 0x19) - 1;
    uVar24 = uVar25;
    if (uVar14 < uVar25) {
      uVar24 = uVar14;
    }
    uVar9 = uVar14 + 1;
    if (uVar25 <= uVar14 + 1) {
      uVar9 = uVar25;
    }
    if (local_a8 != 0) {
      uVar14 = (uint)local_88 >> 0x10 & 0xff;
      iVar12 = uVar22 * uVar14;
      iVar10 = uVar8 * uVar14;
      auVar27 = roundss(ZEXT816(0),ZEXT416((uint)fVar30),0xb);
      fVar30 = fVar30 - auVar27._0_4_;
      auVar27 = roundss(ZEXT816(0),ZEXT416((uint)fVar26),0xb);
      fVar26 = fVar26 - auVar27._0_4_;
      lVar2 = *(longlong *)(param_2 + 2) +
              (longlong)(int)(uVar24 * *(byte *)((longlong)param_2 + 0x1a)) * 4;
      lVar3 = *(longlong *)(param_2 + 2) +
              (longlong)(int)(uVar9 * *(byte *)((longlong)param_2 + 0x1a)) * 4;
      uVar13 = 0;
      do {
        fVar4 = *(float *)((longlong)local_98 + uVar13 * 4 + (longlong)iVar12 * 4);
        uVar15 = (longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) %
                 (longlong)iVar16 & 0xffffffff;
        fVar5 = *(float *)(lVar2 + uVar15 * 4);
        *(float *)(*(longlong *)puVar1 + lVar23 + uVar13 * 4) =
             (*(float *)(lVar3 + uVar15 * 4) - fVar5) * fVar26 + fVar5 +
             (*(float *)((longlong)local_98 + uVar13 * 4 + (longlong)iVar10 * 4) - fVar4) * fVar30 +
             fVar4;
        uVar13 = uVar13 + 1;
      } while (uVar19 != uVar13);
      if (local_a4._0_1_ != '\x01') {
        lVar11 = (ulonglong)*(byte *)((longlong)param_2 + 0x1b) * 4;
        uVar13 = 0;
        do {
          fVar4 = *(float *)((longlong)local_98 +
                            uVar13 * 4 + (ulonglong)local_88._3_1_ * 4 + (longlong)iVar12 * 4);
          uVar15 = (longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff)
                   % (longlong)iVar16 & 0xffffffff;
          fVar5 = *(float *)(lVar2 + lVar11 + uVar15 * 4);
          *(float *)(*(longlong *)puVar1 + lVar18 + uVar13 * 4) =
               (*(float *)(lVar3 + lVar11 + uVar15 * 4) - fVar5) * fVar26 + fVar5 +
               (*(float *)((longlong)local_98 +
                          uVar13 * 4 + (ulonglong)local_88._3_1_ * 4 + (longlong)iVar10 * 4) - fVar4
               ) * fVar30 + fVar4;
          uVar13 = uVar13 + 1;
        } while (uVar19 != uVar13);
      }
    }
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + (ulonglong)uVar17 * 4;
    lVar18 = lVar18 + (ulonglong)uVar17 * 4;
  } while (lVar20 != 0x80);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d8aea FUN_1434d8aea body=525 status=ok
// SIG undefined FUN_1434d8aea(void)

void FUN_1434d8aea(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  uint local_88;
  uint local_7c [3];
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
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = *(int *)(param_1 + 0x20) << 2;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FDynamicMeshIndexBuffer32";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 4;
  local_7c[2] = 0x8001;
  local_7c[0] = local_88;
  if (local_88 == 0) {
    FUN_14570b4be(param_2,&local_70,0x8001,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_a0) {
    lVar3 = *plVar4;
    *plVar4 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_1434d8c19;
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
LAB_1434d8c19:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434d8cf8 FUN_1434d8cf8 body=73 status=ok
// SIG undefined FUN_1434d8cf8(void)

void FUN_1434d8cf8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d8d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
  return;
}



// FUNCTION 1434d8d42 FUN_1434d8d42 body=2239 status=ok
// SIG undefined FUN_1434d8d42(void)

void FUN_1434d8d42(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  byte param_5,byte param_6,byte param_7,undefined4 param_8)

{
  double dVar1;
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
  undefined1 uVar12;
  int iVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  DWORD DVar17;
  DWORD DVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  void *pvVar22;
  undefined1 *puVar23;
  longlong lVar24;
  undefined1 auVar25 [8];
  double *pdVar26;
  double *pdVar27;
  longlong lVar28;
  longlong *plVar29;
  bool bVar30;
  undefined1 auStack_978 [40];
  longlong *local_950;
  undefined8 *local_948;
  undefined8 *local_940;
  undefined1 local_938 [8];
  undefined1 local_930 [8];
  undefined1 local_928 [4];
  undefined8 local_924;
  undefined4 local_91c;
  undefined4 uStack_90c;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined8 *local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined1 local_848;
  uint local_844;
  byte local_840;
  undefined4 local_7bc;
  undefined4 local_7ac;
  undefined4 local_79c;
  undefined4 local_78c;
  undefined4 local_77c;
  undefined4 local_76c;
  undefined4 local_75c;
  undefined4 local_74c;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_70c;
  undefined8 local_6fc;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6a8 [24];
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  double local_5c8 [32];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  double local_4a0;
  undefined4 local_498;
  int local_494;
  uint local_490;
  undefined8 local_48c;
  undefined2 local_484;
  undefined8 local_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined8 uStack_46c;
  undefined1 local_458 [872];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_978;
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0xa0) < 1) ||
     (*(int *)(*(longlong *)(param_1 + 8) + 0x28) < 1)) goto LAB_1434d952e;
  local_930 = (undefined1  [8])param_4;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar21 = *(longlong *)(param_1 + 8);
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0x28) != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_938 = (undefined1  [8])(param_1 + 0x10);
  local_950 = (longlong *)(param_1 + 8);
  puVar19 = (undefined8 *)FUN_14001cc68(0x230,0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined1 *)(param_1 + 0x18);
  local_940 = puVar19 + 1;
  *(undefined4 *)(puVar19 + 2) = 0xffffffff;
  *(undefined1 *)((longlong)puVar19 + 0x14) = uVar12;
  *(undefined2 *)((longlong)puVar19 + 0x15) = 1;
  puVar19[0x13] = 0;
  puVar19[0x14] = 0x800000000;
  puVar19[0x19] = 0;
  puVar19[0x1a] = 0x200000000;
  puVar19[0x21] = 0;
  puVar19[0x22] = 0x300000000;
  puVar19[0x25] = 0;
  puVar19[0x23] = 0;
  puVar19[0x24] = 0;
  *(undefined4 *)(puVar19 + 0x26) = 0x1ffffff;
  *(undefined4 *)(puVar19 + 0x35) = 0;
  puVar19[0x27] = 0;
  puVar19[0x28] = 0;
  puVar19[0x29] = 0;
  puVar19[0x2a] = 0;
  puVar19[0x2b] = 0;
  puVar19[0x2c] = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1ac) = 4;
  puVar19[0x3c] = 0;
  puVar19[0x3d] = 0;
  puVar19[0x3a] = 0;
  puVar19[0x3b] = 0;
  puVar19[0x38] = 0;
  puVar19[0x39] = 0;
  puVar19[0x36] = 0;
  puVar19[0x37] = 0;
  *(undefined4 *)(puVar19 + 0x3e) = 0xffffffff;
  *(undefined2 *)((longlong)puVar19 + 500) = 0xff;
  *(undefined1 *)((longlong)puVar19 + 0x1f6) = 0;
  puVar19[0x43] = 0;
  puVar19[0x41] = 0;
  puVar19[0x42] = 0;
  puVar19[0x3f] = 0;
  puVar19[0x40] = 0;
  *(undefined4 *)(puVar19 + 0x44) = 0xffffffff;
  *(undefined1 *)((longlong)puVar19 + 0x224) = 0;
  *puVar19 = &PTR_LAB_14a8ca200;
  puVar19[1] = &PTR_FUN_14a8ca210;
  puVar19[0x45] = uVar14;
  (**(code **)(*param_2 + 0x18))(param_2,puVar19);
  puVar20 = (undefined8 *)FUN_14001cc68(0x30);
  puVar20[2] = 0;
  puVar20[3] = 0;
  local_948 = puVar20 + 1;
  *(undefined4 *)(puVar20 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)puVar20 + 0x14) = 0x105;
  *(undefined4 *)(puVar20 + 3) = 2;
  puVar20[4] = 0;
  puVar20[5] = 0;
  *puVar20 = &PTR_LAB_14a8ca268;
  puVar20[1] = &PTR_FUN_14a8ca280;
  memset(local_928,0,0x4d0);
  local_7ac = 0x3f800000;
  local_75c = 0x3f800000;
  lVar21 = 0x28c;
  do {
    *(undefined8 *)(local_938 + lVar21 + 4) = 0;
    *(undefined8 *)(local_928 + lVar21 + -4) = 0x3f80000000000000;
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x31c);
  local_5e8 = 0;
  uStack_5e0 = 0x3f80000000000000;
  local_490 = local_490 & 0xfffff800;
  local_79c = 0;
  local_78c = 0;
  local_6f0 = 0xffffff00ffffff00;
  local_76c = 0;
  local_77c = 0xffffffff;
  local_91c = 0xffffffff;
  uStack_90c = 0xffffffff;
  local_74c = 0xffffffff;
  local_73c = 0xffffffff;
  local_6e8 = 0xffffffff00ffffff;
  local_6c0 = 0xffffffff;
  local_924 = 0xffffffff;
  local_70c = 0xffffffff;
  local_6fc = 0;
  local_6c8 = 0;
  memset(local_6a8,0,0x90);
  local_48c = 0;
  local_484 = 0;
  local_480 = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  uStack_46c = 0;
  pdVar26 = param_3;
  pdVar27 = local_5c8;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar27 = *pdVar26;
    pdVar26 = pdVar26 + 1;
    pdVar27 = pdVar27 + 1;
  }
  local_4a0 = param_3[0xe];
  local_4b0 = *(undefined4 *)(param_3 + 0xc);
  uStack_4ac = *(undefined4 *)((longlong)param_3 + 100);
  uStack_4a8 = *(undefined4 *)(param_3 + 0xd);
  uStack_4a4 = *(undefined4 *)((longlong)param_3 + 0x6c);
  local_498 = 0;
  local_7bc = 0;
  local_494 = (uint)param_7 * 8 + 0xfc0781;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  pvVar22 = (void *)FUN_144788782(local_928);
  memcpy(local_458,pvVar22,0x360);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar13 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar13 != 2)) {
    if (iVar13 == 1) {
      DVar17 = FUN_140ad26c0();
      DVar18 = GetCurrentThreadId();
      if (DVar17 == DVar18) goto LAB_1434d95cf;
      pvVar22 = (void *)puVar20[5];
      plVar29 = local_950;
      if (pvVar22 == (void *)0x0) goto LAB_1434d91da;
    }
    else {
LAB_1434d91da:
      plVar29 = local_950;
      pvVar22 = (void *)FUN_14001cc68(0x360,0x10);
      puVar20[5] = pvVar22;
    }
    memcpy(pvVar22,local_458,0x360);
    FUN_1447fd100(local_948,&DAT_14ca85100);
  }
  else {
LAB_1434d95cf:
    FUN_142b40db2(local_948,local_458);
    plVar29 = local_950;
  }
  (**(code **)(*param_2 + 0x18))(param_2,puVar20);
  if (*plVar29 == 0) {
    bVar30 = false;
  }
  else {
    bVar30 = *(int *)(*plVar29 + 0x28) != 0;
  }
  local_880 = (undefined1 *)0x0;
  local_870 = (undefined8 *)0x0;
  uStack_868 = 0;
  local_860 = 0;
  local_858 = 0xffffffff;
  local_850 = 0xff0000ffffffff;
  local_848 = 0;
  local_844 = 0x40c00f07;
  local_840 = local_840 & 0xfc;
  local_878 = &DAT_100000001;
  FUN_14470b9e0(local_928,1);
  lVar24 = 0xa0;
  lVar21 = 0;
  auVar25 = local_938;
  if (bVar30) {
    lVar21 = *plVar29;
    lVar24 = 0x28;
    auVar25 = (undefined1  [8])plVar29;
  }
  lVar28 = lVar21 + 8;
  if (lVar21 == 0) {
    lVar28 = 0;
  }
  puVar23 = local_880;
  if (local_880 == (undefined1 *)0x0) {
    puVar23 = local_928;
  }
  *(longlong *)(puVar23 + 0x18) = lVar28;
  local_870 = local_940;
  if (puVar19 == (undefined8 *)0x0) {
    local_870 = (undefined8 *)0x0;
  }
  uStack_868 = local_930;
  puVar19 = local_948;
  if (puVar20 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
  }
  *(undefined8 **)(puVar23 + 8) = puVar19;
  *(undefined4 *)(puVar23 + 0x58) = 0;
  *(int *)(puVar23 + 0x5c) = *(int *)(*(longlong *)auVar25 + lVar24) / 3;
  *(undefined4 *)(puVar23 + 0x68) = 0;
  *(int *)(puVar23 + 0x6c) = *(int *)(*(longlong *)local_938 + 0xa0) + -1;
  dVar1 = param_3[5];
  dVar2 = param_3[10];
  dVar3 = param_3[0xf];
  dVar4 = param_3[0xb];
  dVar5 = param_3[0xe];
  dVar16 = dVar2 * dVar3 - dVar5 * dVar4;
  dVar6 = param_3[9];
  dVar7 = param_3[6];
  dVar8 = param_3[7];
  dVar15 = dVar7 * dVar3 - dVar5 * dVar8;
  dVar9 = param_3[0xd];
  dVar10 = param_3[2];
  dVar11 = param_3[3];
  dVar5 = dVar3 * dVar10 - dVar5 * dVar11;
  dVar3 = dVar4 * dVar10 - dVar2 * dVar11;
  dVar4 = dVar7 * dVar4 - dVar2 * dVar8;
  dVar2 = param_3[1];
  dVar7 = dVar10 * dVar8 - dVar7 * dVar11;
  local_844 = (uint)(param_5 & 7) << 0x11 | (uint)param_6 << 7 | local_844 & 0xfff03f3f |
              (uint)(((dVar9 * dVar7 + (dVar15 * dVar2 - dVar5 * dVar1)) * param_3[8] +
                     ((dVar9 * dVar4 + (dVar1 * dVar16 - dVar15 * dVar6)) * *param_3 -
                     (dVar9 * dVar3 + (dVar16 * dVar2 - dVar5 * dVar6)) * param_3[4])) -
                     (dVar7 * dVar6 + (dVar4 * dVar2 - dVar3 * dVar1)) * param_3[0xc] < 0.0) << 6;
  local_858 = CONCAT44(local_858._4_4_,param_8);
  (**(code **)(*param_2 + 0x48))(param_2,local_928);
  *plVar29 = 0;
  plVar29[1] = 0;
  puVar23 = local_880;
  if (local_880 == (undefined1 *)0x0) {
    puVar23 = local_928;
  }
  FUN_1446fc26f(puVar23,(ulonglong)local_878 & 0xffffffff);
  if (local_880 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434d952e:
  if ((local_f0 ^ (ulonglong)auStack_978) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434d9602 FUN_1434d9602 body=69 status=ok
// SIG undefined FUN_1434d9602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9602(void)

{
  _DAT_14cad7830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7838,1);
  return;
}



// FUNCTION 1434d9647 FUN_1434d9647 body=69 status=ok
// SIG undefined FUN_1434d9647(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9647(void)

{
  _DAT_14cad7848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7850,1);
  return;
}



// FUNCTION 1434d968c FUN_1434d968c body=69 status=ok
// SIG undefined FUN_1434d968c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d968c(void)

{
  _DAT_14cad7860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d96ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7868,1);
  return;
}



// FUNCTION 1434d96d1 FUN_1434d96d1 body=69 status=ok
// SIG undefined FUN_1434d96d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d96d1(void)

{
  _DAT_14cad7878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7880,1);
  return;
}



// FUNCTION 1434d9716 FUN_1434d9716 body=69 status=ok
// SIG undefined FUN_1434d9716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9716(void)

{
  _DAT_14cad7890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7898,1);
  return;
}



// FUNCTION 1434d975b FUN_1434d975b body=69 status=ok
// SIG undefined FUN_1434d975b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d975b(void)

{
  _DAT_14cad78a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d979d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad78b0,1);
  return;
}



// FUNCTION 1434d97a0 FUN_1434d97a0 body=69 status=ok
// SIG undefined FUN_1434d97a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d97a0(void)

{
  _DAT_14cad78c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d97e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad78c8,1);
  return;
}



// FUNCTION 1434d97e5 FUN_1434d97e5 body=69 status=ok
// SIG undefined FUN_1434d97e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d97e5(void)

{
  _DAT_14cad78d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad78e0,1);
  return;
}



// FUNCTION 1434d982a FUN_1434d982a body=69 status=ok
// SIG undefined FUN_1434d982a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d982a(void)

{
  _DAT_14cad78f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad78f8,1);
  return;
}



// FUNCTION 1434d986f FUN_1434d986f body=69 status=ok
// SIG undefined FUN_1434d986f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d986f(void)

{
  _DAT_14cad7908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d98b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7910,1);
  return;
}



// FUNCTION 1434d98b4 FUN_1434d98b4 body=69 status=ok
// SIG undefined FUN_1434d98b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d98b4(void)

{
  _DAT_14cad7920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d98f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7928,1);
  return;
}



// FUNCTION 1434d98f9 FUN_1434d98f9 body=69 status=ok
// SIG undefined FUN_1434d98f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d98f9(void)

{
  _DAT_14cad7938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d993b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7940,1);
  return;
}



// FUNCTION 1434d993e FUN_1434d993e body=69 status=ok
// SIG undefined FUN_1434d993e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d993e(void)

{
  _DAT_14cad7950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7958,1);
  return;
}



// FUNCTION 1434d9983 FUN_1434d9983 body=69 status=ok
// SIG undefined FUN_1434d9983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9983(void)

{
  _DAT_14cad7968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d99c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7970,1);
  return;
}



// FUNCTION 1434d99c8 FUN_1434d99c8 body=69 status=ok
// SIG undefined FUN_1434d99c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d99c8(void)

{
  _DAT_14cad7980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7988,1);
  return;
}



// FUNCTION 1434d9a0d FUN_1434d9a0d body=69 status=ok
// SIG undefined FUN_1434d9a0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9a0d(void)

{
  _DAT_14cad7998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad79a0,1);
  return;
}



// FUNCTION 1434d9a52 FUN_1434d9a52 body=69 status=ok
// SIG undefined FUN_1434d9a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9a52(void)

{
  _DAT_14cad79b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad79b8,1);
  return;
}



// FUNCTION 1434d9a97 FUN_1434d9a97 body=69 status=ok
// SIG undefined FUN_1434d9a97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9a97(void)

{
  _DAT_14cad79c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad79d0,1);
  return;
}



// FUNCTION 1434d9adc FUN_1434d9adc body=69 status=ok
// SIG undefined FUN_1434d9adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9adc(void)

{
  _DAT_14cad79e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad79e8,1);
  return;
}



// FUNCTION 1434d9b21 FUN_1434d9b21 body=69 status=ok
// SIG undefined FUN_1434d9b21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9b21(void)

{
  _DAT_14cad79f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7a00,1);
  return;
}



// FUNCTION 1434d9b66 FUN_1434d9b66 body=69 status=ok
// SIG undefined FUN_1434d9b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9b66(void)

{
  _DAT_14cad7a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7a18,1);
  return;
}



// FUNCTION 1434d9bab FUN_1434d9bab body=69 status=ok
// SIG undefined FUN_1434d9bab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9bab(void)

{
  _DAT_14cad7a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7a30,1);
  return;
}



// FUNCTION 1434d9bfc FUN_1434d9bfc body=69 status=ok
// SIG undefined FUN_1434d9bfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434d9bfc(void)

{
  _DAT_14cad7a80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434d9c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7a88,1);
  return;
}



// FUNCTION 1434d9c52 FUN_1434d9c52 body=798 status=ok
// SIG undefined FUN_1434d9c52(void)

void FUN_1434d9c52(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar6 + 0xf18) = 0;
  if (*(longlong *)(lVar6 + 0xf10) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xef8);
  if (iVar1 == 0) {
    uVar9 = 0;
    uVar7 = 1;
    iVar10 = 0;
    iVar3 = 0;
  }
  else {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(uint **)(lVar6 + 0xef0);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)(lVar6 + 0xee0);
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar9 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar5 == uVar9) goto LAB_1434d9cbc;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar4[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar5 = uVar7 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 < iVar1) {
    lVar6 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
    uVar8 = 0xffffffff;
    do {
      if (*(longlong *)(lVar6 + 0x18 + (longlong)iVar3 * 0x30) != 0) {
        FUN_1400020a8();
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar6 = *(longlong *)(lVar15 + 0xed0);
        iVar1 = *(int *)(lVar15 + 0xef8);
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar11 = *(longlong *)(lVar15 + 0xef0);
      if (lVar11 == 0) {
        lVar11 = lVar15 + 0xee0;
      }
      iVar3 = (int)uVar9;
      lVar15 = (longlong)iVar3;
      uVar2 = *(uint *)(lVar11 + lVar15 * 4) & uVar8;
      if (uVar2 == 0) {
        iVar13 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar13 = iVar1 + -1;
        }
        iVar14 = iVar13 >> 5;
        if (iVar13 >> 5 < iVar3) {
          iVar14 = iVar3;
        }
        lVar12 = 0;
        do {
          if (iVar14 - lVar15 == lVar12) goto LAB_1434d9cbc;
          iVar10 = iVar10 + 0x20;
          uVar2 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar12 * 4);
          lVar12 = lVar12 + 1;
        } while (uVar2 == 0);
        uVar9 = (ulonglong)(uint)(iVar3 + (int)lVar12);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar2 & uVar2);
      uVar5 = uVar7 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar1);
  }
LAB_1434d9cbc:
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar6 + 0xed8) = 0;
  if (*(int *)(lVar6 + 0xedc) != 0) {
    FUN_14494313c(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xed0,0);
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar6 + 0xf00) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xef8) = 0;
  if (0x80 < *(uint *)(lVar6 + 0xefc)) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined4 *)(lVar6 + 0xefc) = 0x80;
    FUN_1446efbd8(lVar6 + 0xee0,0);
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xef0) != 0
     ) {
    FUN_1400020a8();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0) == 0
     ) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1434d9f70 FUN_1434d9f70 body=307 status=ok
// SIG undefined FUN_1434d9f70(void)

void FUN_1434d9f70(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0xf68) = 0;
  if (*(longlong *)(lVar1 + 0xf60) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0xf28) = 0;
  if (*(int *)(lVar1 + 0xf2c) != 0) {
    FUN_1405b3ec2(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xf20,0);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0xf50) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xf48) = 0;
  if (0x80 < *(uint *)(lVar1 + 0xf4c)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined4 *)(lVar1 + 0xf4c) = 0x80;
    FUN_1446efbd8(lVar1 + 0xf30,0);
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf40) != 0
     ) {
    FUN_1400020a8();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf20) == 0
     ) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1434da0a3 FUN_1434da0a3 body=794 status=ok
// SIG undefined FUN_1434da0a3(void)

void FUN_1434da0a3(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar6 + 0xfb8) = 0;
  if (*(longlong *)(lVar6 + 0xfb0) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xf98);
  if (iVar1 == 0) {
    uVar9 = 0;
    uVar7 = 1;
    iVar10 = 0;
    iVar3 = 0;
  }
  else {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(uint **)(lVar6 + 0xf90);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)(lVar6 + 0xf80);
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar9 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar5 == uVar9) goto LAB_1434da10d;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar4[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar5 = uVar7 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 < iVar1) {
    lVar6 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf70
             );
    uVar8 = 0xffffffff;
    do {
      if (*(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x20) != 0) {
        FUN_1400020a8();
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar6 = *(longlong *)(lVar15 + 0xf70);
        iVar1 = *(int *)(lVar15 + 0xf98);
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar11 = *(longlong *)(lVar15 + 0xf90);
      if (lVar11 == 0) {
        lVar11 = lVar15 + 0xf80;
      }
      iVar3 = (int)uVar9;
      lVar15 = (longlong)iVar3;
      uVar2 = *(uint *)(lVar11 + lVar15 * 4) & uVar8;
      if (uVar2 == 0) {
        iVar13 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar13 = iVar1 + -1;
        }
        iVar14 = iVar13 >> 5;
        if (iVar13 >> 5 < iVar3) {
          iVar14 = iVar3;
        }
        lVar12 = 0;
        do {
          if (iVar14 - lVar15 == lVar12) goto LAB_1434da10d;
          iVar10 = iVar10 + 0x20;
          uVar2 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar12 * 4);
          lVar12 = lVar12 + 1;
        } while (uVar2 == 0);
        uVar9 = (ulonglong)(uint)(iVar3 + (int)lVar12);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar2 & uVar2);
      uVar5 = uVar7 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar1);
  }
LAB_1434da10d:
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar6 + 0xf78) = 0;
  if (*(int *)(lVar6 + 0xf7c) != 0) {
    FUN_1446f4a44(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xf70,0);
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar6 + 4000) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xf98) = 0;
  if (0x80 < *(uint *)(lVar6 + 0xf9c)) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined4 *)(lVar6 + 0xf9c) = 0x80;
    FUN_1446efbd8(lVar6 + 0xf80,0);
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf90) != 0
     ) {
    FUN_1400020a8();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf70) == 0
     ) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1434da49a FUN_1434da49a body=69 status=ok
// SIG undefined FUN_1434da49a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434da49a(void)

{
  _DAT_14cad7ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434da4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7ba8,1);
  return;
}



// FUNCTION 1434da4e0 FUN_1434da4e0 body=677 status=ok
// SIG undefined FUN_1434da4e0(void)

byte FUN_1434da4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  byte unaff_BPL;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  char **local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  char *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60 [4];
  undefined4 *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar5 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar5 == (longlong *)0x0) || (lVar8 = *plVar5, lVar8 == 0)) {
    bVar2 = 0;
  }
  else {
    lVar6 = FUN_1447210f0(lVar8);
    if (lVar6 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad8230) && (FUN_144b3d300(), DAT_14cad8230 == -1)) {
        local_c0 = "FindSuitableTransformAlongPath";
        local_b8 = CONCAT35(local_b8._5_3_,0x1e);
        uVar4 = FUN_14001a6c0(&local_c0,1);
        DAT_14cad8228 = (char *)(ulonglong)uVar4;
        _Init_thread_footer();
      }
      local_9c = 0;
      local_b8 = 0;
      local_98 = 0x101;
      local_70 = 0;
      local_68 = 0x800000000;
      local_50 = (undefined4 *)0x0;
      local_44 = 4;
      local_b0 = 0;
      local_a4 = 0;
      local_c0 = DAT_14cad8228;
      local_af = 1;
      local_ad = 0;
      local_a0 = 0;
      local_ac = 0x1000000;
      local_a8 = 1;
      local_60[0] = *(undefined4 *)(lVar8 + 0xc);
      local_48 = 1;
      local_d8 = 0;
      uStack_d0 = 0;
      FUN_140c5bf3a(lVar8,&local_d8,1);
      if (0 < (int)uStack_d0) {
        lVar8 = 0;
        iVar3 = (int)uStack_d0;
        do {
          uVar4 = local_48;
          lVar9 = *(longlong *)(local_d8 + lVar8 * 8);
          if (lVar9 != 0) {
            uVar1 = *(undefined4 *)(lVar9 + 0xc);
            lVar9 = (longlong)(int)local_48;
            local_48 = local_48 + 1;
            if (local_44 < local_48) {
              FUN_1447de67e(local_60,uVar4);
            }
            puVar7 = local_50;
            if (local_50 == (undefined4 *)0x0) {
              puVar7 = local_60;
            }
            puVar7[lVar9] = uVar1;
            iVar3 = (int)uStack_d0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar3);
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      local_e8 = *param_6;
      uStack_e4 = param_6[1];
      uStack_e0 = param_6[2];
      uStack_dc = param_6[3];
      local_108 = &local_e8;
      local_f8 = param_7;
      local_100 = &local_c0;
      unaff_BPL = FUN_147a8026e(lVar6,param_3,param_4,param_5);
      if (local_50 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    bVar2 = lVar6 != 0 & unaff_BPL;
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1434da786 FUN_1434da786 body=170 status=ok
// SIG undefined FUN_1434da786(void)

undefined8 *
FUN_1434da786(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_147a7fbee(param_3);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    if (*(longlong *)(param_4 + 0x20) != 0) {
      lVar3 = FUN_140fe7df8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_1434da7fb;
    }
    lVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_3);
    if ((*(byte *)(lVar3 + 0x152) - 2 < 3) || (-1 < *(char *)(lVar1 + 0x60))) {
      FUN_147a804b6(param_1,param_2,param_3,param_4,param_5);
      return param_2;
    }
  }
LAB_1434da7fb:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1434da830 FUN_1434da830 body=765 status=ok
// SIG undefined FUN_1434da830(void)

undefined8
FUN_1434da830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  char **local_120;
  undefined8 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar4 == (longlong *)0x0) || (lVar1 = *plVar4, lVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 0xb0);
    if ((lVar5 == 0) && (lVar5 = FUN_1448abda6(lVar1), lVar5 == 0)) {
      bVar2 = 0;
      uVar7 = 0;
      bVar8 = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad8240) && (FUN_144b3d300(), DAT_14cad8240 == -1)) {
        local_c0 = "FindSuitableTransformAlongPath";
        local_b8 = CONCAT35(local_b8._5_3_,0x1e);
        uVar3 = FUN_14001a6c0(&local_c0,1);
        DAT_14cad8238 = (char *)(ulonglong)uVar3;
        _Init_thread_footer();
      }
      local_9c = 0;
      local_b8 = 0;
      local_98 = 0x101;
      local_70 = 0;
      local_68 = 0x800000000;
      local_50 = 0;
      local_48 = 0x400000000;
      local_b0 = 0;
      local_a4 = 0;
      local_c0 = DAT_14cad8238;
      local_af = 1;
      local_ad = 0;
      local_a0 = 0;
      local_ac = 0x1000000;
      local_a8 = 1;
      if (DAT_14cac6e60 == 0) {
        local_f0 = &local_c8;
        local_c8 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_142b47bc4;
        local_f8 = &LAB_1478989f1;
        local_100 = &LAB_146391124;
        local_108 = L"Engine";
        local_110 = 0x10000000000;
        local_118 = CONCAT44(local_118._4_4_,0x10000005);
        local_120 = (char **)CONCAT44(local_120._4_4_,0x10);
        local_128 = (undefined4 *)CONCAT44(local_128._4_4_,0x620);
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
        FUN_140870e92(&local_c0,lVar1);
      }
      local_d8 = *param_6;
      uStack_d4 = param_6[1];
      uStack_d0 = param_6[2];
      uStack_cc = param_6[3];
      local_128 = &local_d8;
      local_118 = param_7;
      local_120 = &local_c0;
      uVar6 = FUN_147a8026e(lVar5,param_3,param_4,param_5);
      bVar8 = (byte)uVar6;
      if (local_50 != 0) {
        uVar6 = FUN_1400020a8();
      }
      if (local_70 != 0) {
        uVar6 = FUN_1400020a8();
      }
      uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
      bVar2 = 1;
    }
    uVar6 = CONCAT71(uVar7,bVar2 & bVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1434dab2e FUN_1434dab2e body=49 status=ok
// SIG undefined FUN_1434dab2e(void)

void FUN_1434dab2e(void)

{
  FUN_144760e21(DAT_14cad7d28,DAT_14cad7d30);
  if (DAT_14cad7d28 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434dab5f FUN_1434dab5f body=69 status=ok
// SIG undefined FUN_1434dab5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434dab5f(void)

{
  _DAT_14cad7de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434daba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7df0,1);
  return;
}



// FUNCTION 1434daba4 FUN_1434daba4 body=55 status=ok
// SIG undefined FUN_1434daba4(void)

void FUN_1434daba4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad7e08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad7e08 = FUN_14171c317(FUN_1463c5d80,uVar1,L"ETypedElementWorldType");
  }
  return;
}



// FUNCTION 1434dabdb FUN_1434dabdb body=69 status=ok
// SIG undefined FUN_1434dabdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434dabdb(void)

{
  _DAT_14cad7f80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434dac1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad7f88,1);
  return;
}



// FUNCTION 1434dac20 FUN_1434dac20 body=49 status=ok
// SIG undefined FUN_1434dac20(void)

void FUN_1434dac20(void)

{
  FUN_144760e21(DAT_14cad7f90,DAT_14cad7f98);
  if (DAT_14cad7f90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434dac5d FUN_1434dac5d body=59 status=ok
// SIG undefined FUN_1434dac5d(void)

void FUN_1434dac5d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cad8290;
  if (DAT_14cad8290 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cad8290 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434dac8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1434dac98 FUN_1434dac98 body=47 status=ok
// SIG undefined FUN_1434dac98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434dac98(void)

{
  _DAT_14cad8150 = 0;
  if (DAT_14cad8148 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cad8108);
  return;
}



// FUNCTION 1434dacc8 FUN_1434dacc8 body=4195 status=ok
// SIG undefined FUN_1434dacc8(void)

void FUN_1434dacc8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  bool bVar35;
  ushort uVar36;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  char local_89;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58 [3];
  undefined1 auStack_55 [13];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar3 = *(byte *)(param_1 + 0xa8);
  uVar34 = bVar3 ^ 1;
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x98));
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
            (*(longlong **)(param_1 + 0xb0),local_58,param_2,0xc);
  plVar25 = (longlong *)(param_1 + 0x20);
  if (plVar25 == (longlong *)local_58) {
LAB_1434dadba:
    lVar15 = _local_58;
    if (_local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(_local_58 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(_local_58 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(_local_58 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar25;
    *plVar25 = _local_58;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auStack_55._5_8_;
    _local_58 = auVar8 << 0x40;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar15 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434dadba;
    }
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,*(int *)(param_1 + 0x98) * 2);
  local_70 = (ulonglong)uVar34;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
            (*(longlong **)(param_1 + 0xb0),local_58,param_2,4);
  local_80 = (longlong *)(param_1 + 0x38);
  if (local_80 == (longlong *)local_58) {
LAB_1434daee3:
    lVar15 = _local_58;
    if (_local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(_local_58 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(_local_58 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(_local_58 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *local_80;
    *local_80 = _local_58;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auStack_55._5_8_;
    _local_58 = auVar9 << 0x40;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar15 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434daee3;
    }
  }
  local_a8 = (undefined1 *)
             CONCAT44(local_a8._4_4_,*(int *)(param_1 + 0x98) * *(int *)(param_1 + 0xa0));
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
            (*(longlong **)(param_1 + 0xb0),local_58,param_2,uVar34 * 4 + 4);
  local_78 = (longlong *)(param_1 + 0x50);
  if (local_78 == (longlong *)local_58) {
LAB_1434daff5:
    lVar15 = _local_58;
    if (_local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(_local_58 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(_local_58 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(_local_58 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *local_78;
    *local_78 = _local_58;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auStack_55._5_8_;
    _local_58 = auVar10 << 0x40;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar15 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434daff5;
    }
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x98));
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
            (*(longlong **)(param_1 + 0xb0),local_58,param_2,4);
  plVar21 = (longlong *)(param_1 + 0x68);
  if (plVar21 == (longlong *)local_58) {
LAB_1434db0f9:
    lVar15 = _local_58;
    if (_local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(_local_58 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(_local_58 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(_local_58 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar21;
    *plVar21 = _local_58;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auStack_55._5_8_;
    _local_58 = auVar11 << 0x40;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar15 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434db0f9;
    }
  }
  iVar32 = *(int *)(param_1 + 0xa0);
  iVar33 = *(int *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  cVar5 = *(char *)(param_2 + 0x69);
  local_88 = plVar21;
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,(iVar32 << ((bVar3 ^ 3) & 0x1f)) * iVar33);
  local_a0 = 1;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  lVar24 = 0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    lVar24 = lVar15;
    lVar15 = 0;
  }
  iVar32 = *(int *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  cVar5 = *(char *)(param_2 + 0x69);
  local_68 = plVar25;
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,iVar32 * 0xc);
  local_a0 = 1;
  lVar16 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  iVar32 = *(int *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,iVar32 << 3);
  local_a0 = 1;
  lVar17 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  iVar32 = *(int *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  local_89 = *(char *)(param_2 + 0x69);
  if (local_89 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,iVar32 << 2);
  local_a0 = 1;
  lVar18 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (local_89 == '\0') {
    FUN_14002049c(param_2,0);
  }
  plVar25 = local_68;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar19 = 0xc;
    lVar22 = 0;
    do {
      lVar29 = *(longlong *)(param_1 + 0x90);
      lVar26 = lVar22 * 0x58;
      *(undefined4 *)(lVar16 + 8 + lVar22 * 0xc) = *(undefined4 *)(lVar29 + 8 + lVar26);
      *(undefined8 *)(lVar16 + lVar22 * 0xc) = *(undefined8 *)(lVar29 + lVar26);
      *(undefined4 *)(lVar17 + lVar22 * 8) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x4c + lVar26);
      *(undefined4 *)(lVar17 + 4 + lVar22 * 8) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x50 + lVar26);
      *(undefined4 *)(lVar18 + lVar22 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x54 + lVar26);
      uVar23 = (ulonglong)*(uint *)(param_1 + 0xa0);
      if (*(uint *)(param_1 + 0xa0) != 0) {
        uVar27 = 0;
        do {
          lVar29 = *(longlong *)(param_1 + 0x90) + lVar19;
          if (*(char *)(param_1 + 0xa8) == '\x01') {
            fVar6 = *(float *)(lVar29 + uVar27 * 8);
            fVar30 = ABS(fVar6);
            if ((uint)fVar30 < 0x47800000) {
              if ((uint)fVar30 < 0x38800000) {
                uVar36 = SUB42(fVar30 + 0.5,0);
              }
              else {
                uVar36 = (ushort)((int)fVar30 + 0x8000fff + (uint)(((uint)fVar30 >> 0xd & 1) != 0)
                                 >> 0xd);
              }
            }
            else {
              uVar36 = (0x7f800000 < (uint)fVar30 | 0x3e) << 9;
            }
            fVar30 = *(float *)(lVar29 + 4 + uVar27 * 8);
            fVar31 = ABS(fVar30);
            if ((uint)fVar31 < 0x47800000) {
              if ((uint)fVar31 < 0x38800000) {
                fVar28 = fVar31 + 0.5;
              }
              else {
                fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                                0xd);
                fVar28 = fVar31;
              }
            }
            else {
              fVar28 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
            }
            iVar32 = movmskps(fVar31,ZEXT416((uint)fVar6));
            iVar33 = movmskps(iVar32 << 0xf,ZEXT416((uint)fVar30));
            uVar23 = (ulonglong)(uint)((int)uVar23 * (int)lVar22 + (int)uVar27);
            *(ushort *)(lVar24 + uVar23 * 4) = uVar36 | (ushort)(iVar32 << 0xf);
            *(ushort *)(lVar24 + 2 + uVar23 * 4) = (ushort)(iVar33 << 0xf) | SUB42(fVar28,0);
          }
          else {
            *(undefined8 *)(lVar15 + (ulonglong)(uint)((int)uVar23 * (int)lVar22 + (int)uVar27) * 8)
                 = *(undefined8 *)(lVar29 + uVar27 * 8);
          }
          uVar27 = uVar27 + 1;
          uVar23 = (ulonglong)*(uint *)(param_1 + 0xa0);
        } while (uVar27 < uVar23);
      }
      lVar22 = lVar22 + 1;
      lVar19 = lVar19 + 0x58;
    } while (lVar22 < *(int *)(param_1 + 0x98));
  }
  lVar15 = *local_68;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
  }
  plVar21 = local_88;
  lVar15 = *local_80;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
  }
  lVar15 = *local_78;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
  }
  lVar15 = *plVar21;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0)
  goto LAB_1434dbb2c;
  if ((*local_80 == 0) || ((*(byte *)(*local_80 + 0x28) & 0x10) == 0)) {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x13d00;
  }
  else {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x40000;
  }
  local_a8 = local_58;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2);
  plVar20 = (longlong *)(param_1 + 0x70);
  if (plVar20 == &local_60) {
LAB_1434db6f7:
    lVar15 = local_60;
    if (local_60 != 0) {
      LOCK();
      puVar1 = (uint *)(local_60 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_60 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_60 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          plVar21 = local_88;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar20;
    *plVar20 = local_60;
    local_60 = 0;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          plVar21 = local_88;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434db6f7;
    }
  }
  if ((*local_78 == 0) || ((*(byte *)(*local_78 + 0x28) & 0x10) == 0)) {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x10000;
    auVar12._1_14_ = stack0xffffffffffffffaa;
    auVar12[0] = (char)local_70 * '\x02' + '\x0f';
    auVar12[0xf] = 0;
    _local_58 = auVar12 << 8;
  }
  else {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x40000;
  }
  local_a8 = local_58;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2);
  plVar20 = (longlong *)(param_1 + 0x78);
  if (plVar20 == &local_60) {
LAB_1434db851:
    lVar15 = local_60;
    if (local_60 != 0) {
      LOCK();
      puVar1 = (uint *)(local_60 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_60 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_60 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          plVar21 = local_88;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar20;
    *plVar20 = local_60;
    local_60 = 0;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar15;
          plVar20 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          plVar21 = local_88;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c0;
              plVar13 = plVar14;
              if (bVar35) {
                plVar20 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar14 = (longlong)plVar13;
              LOCK();
              bVar35 = plVar13 != DAT_14ca843c8;
              plVar20 = plVar14;
              if (bVar35) {
                plVar13 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434db851;
    }
  }
  if ((*plVar21 == 0) || ((*(byte *)(*plVar21 + 0x28) & 0x10) == 0)) {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x12500;
  }
  else {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x40000;
  }
  local_a8 = local_58;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2);
  plVar21 = (longlong *)(param_1 + 0x80);
  if (plVar21 == &local_60) {
LAB_1434db995:
    lVar15 = local_60;
    if (local_60 != 0) {
      LOCK();
      puVar1 = (uint *)(local_60 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_60 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_60 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar21;
    *plVar21 = local_60;
    local_60 = 0;
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar34 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar34 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar34 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar34 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar15;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar21;
              LOCK();
              bVar35 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar13;
              if (bVar35) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar13 = (longlong)plVar20;
              LOCK();
              bVar35 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar13;
              if (bVar35) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
      goto LAB_1434db995;
    }
  }
  if ((*plVar25 == 0) || ((*(byte *)(*plVar25 + 0x28) & 0x10) == 0)) {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x10d00;
  }
  else {
    auStack_55 = SUB1613((undefined1  [16])0x0,3);
    local_58 = (undefined1  [3])0x40000;
  }
  local_a8 = local_58;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2);
  plVar25 = (longlong *)(param_1 + 0x88);
  if (plVar25 != &local_60) {
    lVar15 = *plVar25;
    *plVar25 = local_60;
    local_60 = 0;
    if (lVar15 == 0) goto LAB_1434dbb2c;
    LOCK();
    puVar1 = (uint *)(lVar15 + 8);
    uVar34 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar34 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar15 + 8);
      LOCK();
      uVar34 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar34 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar15 + 0xd);
        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
        plVar20[1] = lVar15;
        plVar25 = DAT_14ca843c0;
        plVar21 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar20 = (longlong)plVar25;
            LOCK();
            bVar35 = plVar25 != DAT_14ca843c0;
            plVar21 = plVar20;
            if (bVar35) {
              plVar25 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar21;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar20 = (longlong)plVar21;
            LOCK();
            bVar35 = plVar21 != DAT_14ca843c8;
            plVar25 = plVar20;
            if (bVar35) {
              plVar21 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
  }
  lVar15 = local_60;
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar34 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar34 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_60 + 8);
      LOCK();
      uVar34 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar34 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_60 + 0xd);
        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
        plVar20[1] = lVar15;
        plVar25 = DAT_14ca843c0;
        plVar21 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar20 = (longlong)plVar25;
            LOCK();
            bVar35 = plVar25 != DAT_14ca843c0;
            plVar21 = plVar20;
            if (bVar35) {
              plVar25 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar21;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar20 = (longlong)plVar21;
            LOCK();
            bVar35 = plVar21 != DAT_14ca843c8;
            plVar25 = plVar20;
            if (bVar35) {
              plVar21 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
  }
LAB_1434dbb2c:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434dbd2c FUN_1434dbd2c body=548 status=ok
// SIG undefined FUN_1434dbd2c(void)

void FUN_1434dbd2c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *_Dst;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
            (*(longlong **)(param_1 + 0x28),&local_38,param_2,*(undefined4 *)(param_1 + 0x20));
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 != &local_38) {
    lVar6 = *plVar10;
    *plVar10 = local_38;
    local_38 = 0;
    if (lVar6 == 0) goto LAB_1434dbe44;
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
  lVar6 = local_38;
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
LAB_1434dbe44:
  iVar5 = *(int *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_40 = 1;
  local_48 = iVar5 << 2;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,*(void **)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20) << 2);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar7);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434dbf52 FUN_1434dbf52 body=35 status=ok
// SIG undefined FUN_1434dbf52(void)

void FUN_1434dbf52(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
            (*(longlong **)(param_1 + 0x28),param_1 + 0x10);
  FUN_140298d6a(param_1);
  return;
}



// FUNCTION 1434dbf75 FUN_1434dbf75 body=48 status=ok
// SIG undefined FUN_1434dbf75(void)

void FUN_1434dbf75(void)

{
  if (DAT_14cad8200 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad81b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434dbfa6 FUN_1434dbfa6 body=1643 status=ok
// SIG undefined FUN_1434dbfa6(void)

void FUN_1434dbfa6(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  undefined8 *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined4 uVar22;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  undefined1 auVar21 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_1434dc3ca;
    if (iVar6 != 1) goto LAB_1434dbfe9;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_1434dc3ca;
  }
  else {
LAB_1434dbfe9:
    if (iVar6 == 0x10) {
LAB_1434dc3ca:
      FUN_1456d7b38(lVar3);
      if ((longlong)*(int *)(lVar3 + 0x138) != 0) {
        uVar17 = (longlong)*(int *)(lVar3 + 0x138) * 0x48 - 0x48;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar17;
        uVar19 = SUB164(auVar23 * ZEXT816(0xe38e38e38e38e38f),8);
        uVar22 = (undefined4)(uVar17 / 0x120000000);
        auVar20._0_8_ = CONCAT44(uVar22,uVar19);
        auVar20._8_4_ = uVar19;
        auVar20._12_4_ = uVar22;
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x130) + 0x88);
        uVar12 = 0;
        auVar23 = pmovsxbq(in_XMM1,0x100);
        do {
          if ((bool)(~((longlong)(auVar20._0_8_ >> 6 | 0x8000000000000000) <
                      (longlong)(uVar12 ^ 0x8000000000000000)) & 1)) {
            puVar15[-9] = 0xffffffffffffffff;
          }
          auVar24._8_4_ = (int)uVar12;
          auVar24._0_8_ = uVar12;
          auVar24._12_4_ = (int)(uVar12 >> 0x20);
          if ((longlong)((auVar24._8_8_ | auVar23._8_8_) ^ 0x8000000000000000) <=
              (longlong)(auVar20._8_8_ >> 6 | 0x8000000000000000)) {
            *puVar15 = 0xffffffffffffffff;
          }
          uVar12 = uVar12 + 2;
          puVar15 = puVar15 + 0x12;
        } while ((uVar17 / 0x48 + 2 & 0xfffffffffffffffe) != uVar12);
      }
      goto LAB_1434dc091;
    }
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_1434dc51a:
      FUN_1456d7b38(lVar3);
      if ((longlong)*(int *)(lVar3 + 0x138) != 0) {
        uVar17 = (longlong)*(int *)(lVar3 + 0x138) * 0x48 - 0x48;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar17;
        uVar19 = SUB164(auVar5 * ZEXT816(0xe38e38e38e38e38f),8);
        uVar22 = (undefined4)(uVar17 / 0x120000000);
        auVar21._0_8_ = CONCAT44(uVar22,uVar19);
        auVar21._8_4_ = uVar19;
        auVar21._12_4_ = uVar22;
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x130) + 0x88);
        uVar12 = 0;
        auVar23 = pmovsxbq(in_XMM1,0x100);
        do {
          if ((bool)(~((longlong)(auVar21._0_8_ >> 6 | 0x8000000000000000) <
                      (longlong)(uVar12 ^ 0x8000000000000000)) & 1)) {
            puVar15[-9] = 0xffffffffffffffff;
          }
          auVar25._8_4_ = (int)uVar12;
          auVar25._0_8_ = uVar12;
          auVar25._12_4_ = (int)(uVar12 >> 0x20);
          if ((longlong)((auVar25._8_8_ | auVar23._8_8_) ^ 0x8000000000000000) <=
              (longlong)(auVar21._8_8_ >> 6 | 0x8000000000000000)) {
            *puVar15 = 0xffffffffffffffff;
          }
          uVar12 = uVar12 + 2;
          puVar15 = puVar15 + 0x12;
        } while ((uVar17 / 0x48 + 2 & 0xfffffffffffffffe) != uVar12);
      }
      goto LAB_1434dc091;
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1434dc51a;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar15 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar10 = (uint *)*puVar15;
    if (puVar10 != (uint *)0x0) goto LAB_1434dc153;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1434dd150);
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
      *puVar15 = puVar9;
      FUN_140217a48(puVar15);
      puVar10 = (uint *)*puVar15;
LAB_1434dc153:
      puVar18 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar16 = (uint *)(puVar18 + 0x16);
      uVar13 = puVar10[0x12];
      if (puVar16 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar2 = *puVar10;
        *puVar10 = *puVar10 + uVar13 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar13) != 0xffffffff) break;
        puVar10 = (uint *)*puVar15;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar15 = puVar10;
        puVar18 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x16);
        uVar13 = 0;
        if (puVar16 <= puVar10 + 0x4000) {
          uVar13 = 1;
          goto LAB_1434dc1d3;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1434dc1d3:
    *(uint **)(puVar10 + 0x10) = puVar16;
    puVar10[0x12] = uVar13;
    iVar6 = 0;
    FUN_1447247dc(puVar18,0);
    *puVar18 = &PTR_FUN_14a8ca3e0;
    puVar18[0x15] = lVar3;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar6 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
    }
    puVar18[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar18[9] = puVar18;
    puVar18[10] = puVar18;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar12 = 1;
      if ((char)uVar17 != '\x06') {
        uVar12 = uVar17;
      }
      uVar17 = uVar12;
      uVar11 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar18[0xf] = uVar11;
    puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar18 + 0x1c) = iVar6;
    if (puVar18 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar18);
      LOCK();
      piVar1 = (int *)(puVar18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a8ca380;
    local_68[0] = FUN_147a89de6;
    local_40 = lVar3;
    FUN_14005a792(&DAT_14ca9a440,L"DynamicResolutionResetHistory",&DAT_14cad8218);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1434dc091:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434dc612 FUN_1434dc612 body=48 status=ok
// SIG undefined FUN_1434dc612(void)

undefined1 FUN_1434dc612(void)

{
  char cVar1;
  
  if ((*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))(), cVar1 != '\0')) {
    return 0;
  }
  return DAT_14ca84ef2;
}



// FUNCTION 1434dc646 FUN_1434dc646 body=2769 status=ok
// SIG undefined FUN_1434dc646(void)

void FUN_1434dc646(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  float fVar24;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar9 = (char)param_2;
  if (cVar9 == '\0') {
    if ((char)param_1[2] != '\0') {
      cVar9 = (**(code **)(*param_1 + 0x10))(param_1);
      *(char *)((longlong)param_1 + 0x11) = cVar9;
      lVar4 = DAT_14cad78a0;
      if (cVar9 == '\0') goto LAB_1434dc7e3;
      dVar6 = DAT_14c866ff8 - DAT_14c846540;
      uVar21 = (ulonglong)DAT_14ca9a348;
      dVar7 = DAT_14c83f420 * 1000.0;
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar10 = *(int *)(lVar5 + 0xc60);
      if (iVar10 == 0x40000002) {
        uVar13 = 0;
      }
      else {
        bVar22 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar10 != 2)) {
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            bVar22 = DVar11 == DVar12;
          }
          else {
            bVar22 = false;
          }
        }
        uVar13 = (ulonglong)(bVar22 ^ 1);
      }
      piVar1 = (int *)(lVar5 + 0xc60);
      if (*(int *)(lVar4 + uVar13 * 4) == 0) {
        dVar23 = (double)uVar21;
      }
      else {
        dVar23 = DAT_14c83f420 * 1000.0;
        dVar7 = (double)DAT_14ca9a34c;
      }
      fVar24 = (float)(dVar6 * 1000.0);
      lVar4 = param_1[1];
      iVar10 = *piVar1;
      if (DAT_14c86a9fc == 0) {
        if (iVar10 == 2) goto LAB_1434dcff7;
        if (iVar10 != 1) goto LAB_1434dc8a1;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1434dcff7;
      }
      else {
LAB_1434dc8a1:
        if (iVar10 == 0x10) goto LAB_1434dcff7;
      }
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *piVar1, iVar10 == 2)) {
LAB_1434dcff7:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
        }
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_1434dcff7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar2;
        if (puVar16 != (uint *)0x0) goto LAB_1434dcd20;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1434dd150);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar16 = (uint *)*puVar2;
LAB_1434dcd20:
          puVar20 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar20 + 0x17);
          uVar17 = puVar16[0x12];
          if (puVar19 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar2;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            puVar20 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar20 + 0x17);
            uVar17 = 0;
            if (puVar19 <= puVar16 + 0x4000) {
              uVar17 = 1;
              goto LAB_1434dcda0;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_1434dcda0:
        *(uint **)(puVar16 + 0x10) = puVar19;
        puVar16[0x12] = uVar17;
        iVar10 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14a8ca468;
        *(float *)(puVar20 + 0x15) = fVar24;
        *(float *)((longlong)puVar20 + 0xac) = (float)(dVar7 * dVar23);
        puVar20[0x16] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar10 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar13 = 1;
          if ((char)uVar21 != '\x06') {
            uVar13 = uVar21;
          }
          uVar21 = uVar13;
          uVar15 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar10;
        if (puVar20 == (undefined8 *)0x0) {
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_b8 = &local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14a8ca410;
        local_80 = CONCAT44((float)(dVar7 * dVar23),fVar24);
        local_a8 = &LAB_147a8a5fc;
        local_78 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"DynamicResolutionBeginFrame",&DAT_14cad821c);
        if (local_a8 != (undefined1 *)0x0) {
          pppuVar18 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar18 = &local_88;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_1434dc7e3;
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x11) == '\0') goto LAB_1434dc7e3;
    lVar4 = param_1[1];
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar5 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_1434dc6be;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1434dcfa3;
        goto LAB_1434dc6c7;
      }
LAB_1434dcfa3:
      FUN_147a8a6d4(lVar4,&DAT_14ca85100,param_2);
    }
    else {
LAB_1434dc6be:
      if (iVar10 == 0x10) goto LAB_1434dcfa3;
LAB_1434dc6c7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar5 + 0xc60), iVar10 == 2))
        goto LAB_1434dcfa3;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_1434dcfa3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar2;
        if (puVar16 != (uint *)0x0) goto LAB_1434dc9f5;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1434dd150);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar16 = (uint *)*puVar2;
LAB_1434dc9f5:
          puVar20 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar20 + 0x17);
          uVar17 = puVar16[0x12];
          if (puVar19 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar16 = (uint *)*puVar2;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            puVar20 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar20 + 0x17);
            uVar17 = 0;
            if (puVar19 <= puVar16 + 0x4000) {
              uVar17 = 1;
              goto LAB_1434dca75;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_1434dca75:
        *(uint **)(puVar16 + 0x10) = puVar19;
        puVar16[0x12] = uVar17;
        iVar10 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14a8ca4a0;
        puVar20[0x15] = lVar4;
        *(char *)(puVar20 + 0x16) = cVar9;
        uVar8 = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar20 + 0xb1) = uVar8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = local_a8._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar10 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar13 = 1;
          if ((char)uVar21 != '\x06') {
            uVar13 = uVar21;
          }
          uVar21 = uVar13;
          uVar15 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar10;
        if (puVar20 == (undefined8 *)0x0) {
          local_a9 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_a9 = 1;
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_b8 = &local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14a8ca480;
        local_78 = CONCAT71(local_78._1_7_,cVar9);
        local_a8 = &LAB_147a8a7f4;
        local_80 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"DynamicResolutionBeginFrame",&DAT_14cad8220);
        if (local_a8 != (undefined1 *)0x0) {
          pppuVar18 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar18 = &local_88;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
    }
    if (cVar9 != '\x03') goto LAB_1434dc7e3;
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
LAB_1434dc7e3:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434dd178 FUN_1434dd178 body=282 status=ok
// SIG undefined FUN_1434dd178(void)

undefined8 * FUN_1434dd178(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434dd150);
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



// FUNCTION 1434dd292 FUN_1434dd292 body=282 status=ok
// SIG undefined FUN_1434dd292(void)

undefined8 * FUN_1434dd292(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434dd150);
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



// FUNCTION 1434dd3ac FUN_1434dd3ac body=288 status=ok
// SIG undefined FUN_1434dd3ac(void)

void FUN_1434dd3ac(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar7 [16];
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  FUN_1456d7b38(lVar3);
  if ((longlong)*(int *)(lVar3 + 0x138) != 0) {
    uVar2 = (longlong)*(int *)(lVar3 + 0x138) * 0x48 - 0x48;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar2;
    uVar6 = SUB164(auVar9 * ZEXT816(0xe38e38e38e38e38f),8);
    uVar8 = (undefined4)(uVar2 / 0x120000000);
    auVar7._0_8_ = CONCAT44(uVar8,uVar6);
    auVar7._8_4_ = uVar6;
    auVar7._12_4_ = uVar8;
    puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x130) + 0x88);
    uVar4 = 0;
    auVar9 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(auVar7._0_8_ >> 6 | 0x8000000000000000) <
                  (longlong)(uVar4 ^ 0x8000000000000000)) & 1)) {
        puVar5[-9] = 0xffffffffffffffff;
      }
      auVar10._8_4_ = (int)uVar4;
      auVar10._0_8_ = uVar4;
      auVar10._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar10._8_8_ | auVar9._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar7._8_8_ >> 6 | 0x8000000000000000)) {
        *puVar5 = 0xffffffffffffffff;
      }
      uVar4 = uVar4 + 2;
      puVar5 = puVar5 + 0x12;
    } while ((uVar2 / 0x48 + 2 & 0xfffffffffffffffe) != uVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434dd4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434dd4cc FUN_1434dd4cc body=282 status=ok
// SIG undefined FUN_1434dd4cc(void)

undefined8 * FUN_1434dd4cc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434dd150);
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



// FUNCTION 1434dd5e6 FUN_1434dd5e6 body=282 status=ok
// SIG undefined FUN_1434dd5e6(void)

undefined8 * FUN_1434dd5e6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434dd150);
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



// FUNCTION 1434dd748 FUN_1434dd748 body=144 status=ok
// SIG undefined FUN_1434dd748(void)

void FUN_1434dd748(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      FUN_147a8d462(param_1 + 0x28,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_147a8dc32(param_1 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434dd797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return;
}



// FUNCTION 1434dd7d8 FUN_1434dd7d8 body=144 status=ok
// SIG undefined FUN_1434dd7d8(void)

void FUN_1434dd7d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      FUN_147a8e0ee(param_1 + 0x28,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_147a8dc32(param_1 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434dd827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return;
}



// FUNCTION 1434dd868 FUN_1434dd868 body=144 status=ok
// SIG undefined FUN_1434dd868(void)

void FUN_1434dd868(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      FUN_147a8e7d2(param_1 + 0x28,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_147a8dc32(param_1 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434dd8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return;
}



// FUNCTION 1434dd8f8 FUN_1434dd8f8 body=144 status=ok
// SIG undefined FUN_1434dd8f8(void)

void FUN_1434dd8f8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      FUN_147a8eea4(param_1 + 0x28,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_147a8dc32(param_1 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434dd947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return;
}



// FUNCTION 1434dd988 FUN_1434dd988 body=29 status=ok
// SIG undefined FUN_1434dd988(void)

undefined8 FUN_1434dd988(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434dd9ba FUN_1434dd9ba body=85 status=ok
// SIG undefined FUN_1434dd9ba(void)

void FUN_1434dd9ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8caf40;
  return;
}



// FUNCTION 1434dda10 FUN_1434dda10 body=85 status=ok
// SIG undefined FUN_1434dda10(void)

void FUN_1434dda10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8caf40;
  return;
}



// FUNCTION 1434dda66 FUN_1434dda66 body=118 status=ok
// SIG undefined FUN_1434dda66(void)

void FUN_1434dda66(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a8caf40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434ddacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434ddadc FUN_1434ddadc body=98 status=ok
// SIG undefined FUN_1434ddadc(void)

void FUN_1434ddadc(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_147a88390();
  FUN_1447f69b6(&DAT_14cad7f90);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ddb40 FUN_1434ddb40 body=100 status=ok
// SIG undefined FUN_1434ddb40(void)

undefined8 FUN_1434ddb40(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_147a88390();
  FUN_1447f69b6(&DAT_14cad7f90);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ddba5 FUN_1434ddba5 body=3667 status=ok
// SIG undefined FUN_1434ddba5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434ddba5(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cad6f28);
  if (cVar2 == '\0') {
    _DAT_14cad6f28 = 0;
    uRam000000014cad6f30 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8bd880,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8bdbf0,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8bdf70,1,0);
  FUN_145ca5f8c();
  atexit((_func_5014 *)&LAB_1434d8ad2);
  FUN_145ca607c();
  atexit((_func_5014 *)&LAB_1434d8ade);
  local_60._0_4_ = 0x42480000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7830,L"r.DynamicRes.MinScreenPercentage",&local_60,
                L"Minimal primary screen percentage.");
  atexit(FUN_1434d9602);
  local_60._0_4_ = 0x42c80000;
  local_78._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cad7848,L"r.DynamicRes.MaxScreenPercentage",&local_60,
                L"Maximal primary screen percentage. Importantly this setting controls the preallocated video memory needed by the renderer to render."
               );
  atexit(FUN_1434d9647);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cad7860,L"r.DynamicRes.ThrottlingMaxScreenPercentage",&local_60,
                L"Throttle the primary screen percentage allowed by the heuristic to this max value when enabled. This has no effect on preallocated video memory.\nThis is for instance useful when the video game wants to trottle power consumption when inactive without resizing internal renderer\'s render targets\n(which can result in popping)"
               );
  atexit(FUN_1434d968c);
  local_60._0_4_ = 0x42053333;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7878,L"r.DynamicRes.FrameTimeBudget",&local_60,
                L"Frame\'s time budget in milliseconds.");
  atexit(FUN_1434d96d1);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad7890,L"r.DynamicRes.UseGameThreadCriticalPath",&local_60,
                L"Whether to use game thread critical path time when determining whether game is CPU bound."
               );
  atexit(FUN_1434d9716);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad78a8,L"r.DynamicRes.DynamicFrameTime",&local_60,
                L"Whether the r.DynamicRes.FrameTimeBudget should automatically increases when frame rate is bound by CPU."
               );
  atexit(FUN_1434d975b);
  local_60._0_4_ = 0x41200000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad78c0,L"r.DynamicRes.DynamicFrameTime.ErrorMarginPercent",&local_60,
                L"How much headroom should be left between CPU and GPU.");
  atexit(FUN_1434d97a0);
  local_60._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad78d8,L"r.DynamicRes.DynamicFrameTime.Track",&local_60,
                L"What to track to control the budget\n 0: Frametime (but can create feedback loop when GPU bound and VSync); 1: Threads time (default);"
               );
  atexit(FUN_1434d97e5);
  local_60._0_4_ = 0x41200000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad78f0,L"r.DynamicRes.DynamicFrameTime.RoundUpToVSyncError",&local_60,
                L"Error to use to round up the dynamic frame time to vsync boundaries (default=10%)."
               );
  atexit(FUN_1434d982a);
  local_60._0_4_ = 0x41200000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7908,L"r.DynamicRes.TargetedGPUHeadRoomPercentage",&local_60,
                L"Targeted GPU headroom (in percent from r.DynamicRes.FrameTimeBudget).");
  atexit(FUN_1434d986f);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7920,L"r.DynamicRes.OverBudgetGPUHeadRoomPercentage",&local_60,
                L"Amount of GPU headroom needed from which the frame is considered over budget. This is for platform not supporting controllable tearing with VSync (in percent from r.DynamicRes.FrameTimeBudget)."
               );
  atexit(FUN_1434d98b4);
  local_60._0_4_ = 0x10;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad7938,L"r.DynamicRes.HistorySize",&local_60,
                L"Number of frames keept in the history.");
  atexit(FUN_1434d98f9);
  local_60._0_4_ = 0x3f666666;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7950,L"r.DynamicRes.FrameWeightExponent",&local_60,
                L"Recursive weight of frame N-1 against frame N.");
  atexit(FUN_1434d993e);
  local_60._0_4_ = 8;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad7968,L"r.DynamicRes.MinResolutionChangePeriod",&local_60,
                L"Minimal number of frames between resolution changes, important to avoid input sample position interferences in TAA upsample."
               );
  atexit(FUN_1434d9983);
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7980,L"r.DynamicRes.IncreaseAmortizationBlendFactor",&DAT_14a8bf034,
                L"Amortization blend factor when scale resolution back up to reduce resolution fraction oscillations."
               );
  atexit(FUN_1434d99c8);
  local_60._0_4_ = 0x40000000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7998,L"r.DynamicRes.ChangePercentageThreshold",&local_60,
                L"Minimal increase percentage threshold to alow when changing resolution.");
  atexit(FUN_1434d9a0d);
  local_60._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad79b0,L"r.DynamicRes.MaxConsecutiveOverBudgetGPUFrameCount",&local_60,
                L"Maximum number of consecutive frames tolerated over GPU budget.");
  atexit(FUN_1434d9a52);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad79c8,L"r.DynamicRes.GPUTimingMeasureMethod",&local_60,
                L"Selects the method to use to measure GPU timings.\n 0: Same as stat unit (default);\n 1: Timestamp queries."
               );
  atexit(FUN_1434d9a97);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cad79e0,L"r.DynamicRes.UpperBoundQuantization",&DAT_14a31ac0c,
                L"Quantization step count to use for upper bound screen percentage.\nIf non-zero, rendertargets will be resized based on the dynamic resolution fraction, saving GPU time during clears and resolves.\nOnly recommended for use with the transient allocator (on supported platforms) with a large transient texture cache (e.g RHI.TransientAllocator.TextureCacheSize=512)"
               );
  atexit(FUN_1434d9adc);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad79f8,L"r.DynamicRes.ForceMinScreenPercentage",&local_60,
                L"0: No effect\n1: Overrides the dynamic resolution settings and forces minimum screen percentage"
               );
  atexit(FUN_1434d9b21);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cad7a10,L"r.DynamicRes.ForceMaxScreenPercentage",&local_60,
                L"0: No effect\n1: Overrides the dynamic resolution settings and forces maximum screen percentage"
               );
  atexit(FUN_1434d9b66);
  local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x20);
  FUN_140a6b41e(&DAT_14cad7a28,L"r.DynamicRes.ForceMidScreenPercentage",&local_60,
                L"0: No effect\n1: Overrides the dynamic resolution settings and forces screen percentage to be (min+max)/2"
               );
  atexit(FUN_1434d9bab);
  FUN_1431f2c9c(&DAT_14cad8298,L"DynamicPrimaryResolution",FUN_1463c50bd);
  atexit((_func_5014 *)&LAB_1434d9bf0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8bfdd0,1,&PTR_FUN_14a8bfda0);
  local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cad7a80,L"cook.StripGraphNodeComments",&DAT_14cad7a90,
                L"1 = Strip graph node comments on cook. 0 = off");
  atexit(FUN_1434d9bfc);
  FUN_1446f470e(&DAT_14cad7a94,L"DefaultGraphNode",1);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c0330,1,0);
  DAT_14cad7ab8 = 0;
  uRam000000014cad7ac0 = 0;
  atexit((_func_5014 *)&LAB_1434d9c41);
  FUN_140056680(&DAT_14cad7ac8,L"PinId");
  atexit((_func_5014 *)&LAB_1434da3bd);
  FUN_140056680(&DAT_14cad7ad8,L"PinName");
  atexit((_func_5014 *)&LAB_1434da3ce);
  FUN_140056680(&DAT_14cad7ae8,L"PinToolTip");
  atexit((_func_5014 *)&LAB_1434da3df);
  FUN_140056680(&DAT_14cad7af8,L"Direction");
  atexit((_func_5014 *)&LAB_1434da3f0);
  FUN_140056680(&DAT_14cad7b08,L"PinType");
  atexit((_func_5014 *)&LAB_1434da401);
  FUN_140056680(&DAT_14cad7b18,L"DefaultValue");
  atexit((_func_5014 *)&LAB_1434da412);
  FUN_140056680(&DAT_14cad7b28,L"AutogeneratedDefaultValue");
  atexit((_func_5014 *)&LAB_1434da423);
  FUN_140056680(&DAT_14cad7b38,L"DefaultObject");
  atexit((_func_5014 *)&LAB_1434da434);
  FUN_140056680(&DAT_14cad7b48,L"DefaultTextValue");
  atexit((_func_5014 *)&LAB_1434da445);
  FUN_140056680(&DAT_14cad7b58,L"LinkedTo");
  atexit((_func_5014 *)&LAB_1434da456);
  FUN_140056680(&DAT_14cad7b68,L"SubPins");
  atexit((_func_5014 *)&LAB_1434da467);
  FUN_140056680(&DAT_14cad7b78,L"ParentPin");
  atexit((_func_5014 *)&LAB_1434da478);
  FUN_140056680(&DAT_14cad7b88,L"ReferencePassThroughConnection");
  atexit((_func_5014 *)&LAB_1434da489);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,4);
  FUN_141471170(&DAT_14cad7ba0,L"DisableOrphanPins",&DAT_14cad7b98,
                L"0=Orphan pins are enabled (default), 1=Orphan pins are disabled (note: this option will go away in the future)"
               );
  atexit(FUN_1434da49a);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c09c0,1,&PTR_FUN_14a8c0990);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c0d10,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c10c0,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c1460,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c1820,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c1bd0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c1fe0,1,0);
  FUN_1446f470e(&DAT_14cad7c78,L"IsEditable",1);
  FUN_1446f470e(&DAT_14cad7c80,L"IsConst",1);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c2530,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c28d0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c2c90,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c3040,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c3450,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c39b0,1,0);
  local_60 = "SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cad7d20 = (ulonglong)uVar3;
  DAT_14cad7d28 = 0;
  _DAT_14cad7d30 = 0;
  _DAT_14cad7d38 = 2;
  _DAT_14cad7d3c = 0;
  atexit(FUN_1434dab2e);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c3d20,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c56e0,1,&PTR_FUN_14a8c56b0);
  local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cad7de8,L"TypedElements.EnableElementsCopyAndPaste",&DAT_14cad7df8,
                L"Is support for elements copy and paste enabled?");
  atexit(FUN_1434dab5f);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a8c7880;
  local_78 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c78d0,1,&PTR_FUN_14a8c78a0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c7cd0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c8070,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c8420,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c8830,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c8bf0,1,0);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
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
  *(longlong *)((longlong)local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a8caf40;
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = &local_60;
  FUN_141703554(&DAT_14cad7f80,L"TypedElements.EnableSMInstanceElements",&DAT_14c761510,
                L"Is support for static mesh instance elements enabled?");
  if (local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_1434de899;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1434de899:
  atexit(FUN_1434dabdb);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c9070,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c93e0,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c97d0,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8c9bf0,1,0);
  local_68 = 0;
  local_78 = (undefined8 *)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8ca150,1,0);
  DAT_14cad8288 = 0;
  DAT_14cad8290 = 0;
  atexit(FUN_1434dac5d);
  _DAT_14cad8128 = 0;
  _DAT_14cad8130 = 0;
  _DAT_14cad8108 = 0;
  uRam000000014cad8110 = 0;
  _DAT_14cad8134 = 0xffffffff00000080;
  _DAT_14cad813c = 0;
  DAT_14cad8148 = 0;
  _DAT_14cad8150 = 0;
  atexit(FUN_1434dac98);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434de9f9 FUN_1434de9f9 body=232 status=ok
// SIG undefined FUN_1434de9f9(void)

void FUN_1434de9f9(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0xef0) = 0;
  *(undefined4 *)(lVar1 + 0xef8) = 0;
  *(undefined8 *)(lVar1 + 0xed0) = 0;
  *(undefined8 *)(lVar1 + 0xed8) = 0;
  *(undefined8 *)(lVar1 + 0xefc) = 0xffffffff00000080;
  *(undefined4 *)(lVar1 + 0xf04) = 0;
  *(undefined8 *)(lVar1 + 0xf10) = 0;
  *(undefined4 *)(lVar1 + 0xf18) = 0;
  __tlregdtor(FUN_1434d9c52);
  *(undefined8 *)(lVar1 + 0xf40) = 0;
  *(undefined4 *)(lVar1 + 0xf48) = 0;
  *(undefined8 *)(lVar1 + 0xf20) = 0;
  *(undefined8 *)(lVar1 + 0xf28) = 0;
  *(undefined8 *)(lVar1 + 0xf4c) = 0xffffffff00000080;
  *(undefined4 *)(lVar1 + 0xf54) = 0;
  *(undefined8 *)(lVar1 + 0xf60) = 0;
  *(undefined4 *)(lVar1 + 0xf68) = 0;
  __tlregdtor(FUN_1434d9f70);
  *(undefined8 *)(lVar1 + 0xf90) = 0;
  *(undefined4 *)(lVar1 + 0xf98) = 0;
  *(undefined8 *)(lVar1 + 0xf70) = 0;
  *(undefined8 *)(lVar1 + 0xf78) = 0;
  *(undefined8 *)(lVar1 + 0xf9c) = 0xffffffff00000080;
  *(undefined4 *)(lVar1 + 0xfa4) = 0;
  *(undefined8 *)(lVar1 + 0xfb0) = 0;
  *(undefined4 *)(lVar1 + 0xfb8) = 0;
  __tlregdtor(FUN_1434da0a3);
  return;
}



// FUNCTION 1434deae4 FUN_1434deae4 body=523 status=ok
// SIG undefined FUN_1434deae4(void)

void FUN_1434deae4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8c3290 == 0) {
    local_40 = (longlong *)CONCAT44(local_40._4_4_,0x100);
    GetUserNameW(&DAT_14c8c3290,(LPDWORD)&local_40);
  }
  iVar1 = *(int *)(param_2 + 1);
  puVar2 = (undefined2 *)*param_2;
  puVar4 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar4 = puVar2;
  }
  lVar5 = 0;
  while( true ) {
    uVar8 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar5);
    uVar7 = (ulonglong)uVar8;
    uVar9 = *(ushort *)((longlong)puVar4 + lVar5);
    if (uVar8 != uVar9) break;
    if (uVar8 == 0) goto LAB_1434debf9;
LAB_1434deb67:
    lVar5 = lVar5 + 2;
  }
  if ((uVar9 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1434deb67;
  }
  if (uVar8 != uVar9) {
    if (DAT_14c867008 == iVar1) {
      if (1 < iVar1) {
        lVar5 = 0;
        goto LAB_1434debae;
      }
    }
    else if (DAT_14c867008 + iVar1 != 1) goto LAB_1434dec2c;
  }
LAB_1434debf9:
  local_40 = param_2 + 2;
  FUN_140c8411c(&DAT_14c867010);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
LAB_1434debae:
  uVar8 = *(ushort *)(DAT_14c867000 + lVar5);
  uVar7 = (ulonglong)uVar8;
  uVar9 = *(ushort *)((longlong)puVar2 + lVar5);
  if (uVar8 != uVar9) {
    if ((uVar9 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar10 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1434debc3;
    }
    if (uVar8 != uVar9) goto LAB_1434dec2c;
    goto LAB_1434debf9;
  }
  if (uVar8 == 0) goto LAB_1434debf9;
LAB_1434debc3:
  lVar5 = lVar5 + 2;
  goto LAB_1434debae;
LAB_1434dec2c:
  if ((longlong)DAT_14c867018 == 0) {
LAB_1434dec38:
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68,
                    L"You are not authorized to grant or deny remote access to other users.");
    }
    FUN_147a8fe96(param_1,L"You are not authorized to grant or deny remote access to other users.",
                  uVar3);
    return;
  }
  plVar6 = DAT_14c867010;
LAB_1434dec84:
  if ((int)plVar6[1] == iVar1) {
    if (1 < iVar1) {
      lVar5 = 0;
      do {
        uVar8 = *(ushort *)(*plVar6 + lVar5);
        uVar7 = (ulonglong)uVar8;
        uVar9 = *(ushort *)((longlong)puVar2 + lVar5);
        if (uVar8 == uVar9) {
          if (uVar8 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar8)) goto LAB_1434decf1;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_1434decf1;
        }
        lVar5 = lVar5 + 2;
      } while( true );
    }
  }
  else if ((int)plVar6[1] + iVar1 != 1) goto LAB_1434dec9a;
  goto LAB_1434debf9;
LAB_1434decf1:
  if (uVar8 == uVar9) goto LAB_1434debf9;
LAB_1434dec9a:
  plVar6 = plVar6 + 2;
  if (plVar6 == DAT_14c867010 + (longlong)DAT_14c867018 * 2) goto LAB_1434dec38;
  goto LAB_1434dec84;
}



// FUNCTION 1434decfe FUN_1434decfe body=510 status=ok
// SIG undefined FUN_1434decfe(void)

void FUN_1434decfe(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [44];
  DWORD local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8c3290 == 0) {
    local_3c = 0x100;
    GetUserNameW(&DAT_14c8c3290,&local_3c);
  }
  iVar1 = *(int *)(param_2 + 1);
  puVar2 = (undefined2 *)*param_2;
  puVar4 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar4 = puVar2;
  }
  lVar5 = 0;
  while( true ) {
    uVar8 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar5);
    uVar7 = (ulonglong)uVar8;
    uVar9 = *(ushort *)((longlong)puVar4 + lVar5);
    if (uVar8 != uVar9) break;
    if (uVar8 == 0) goto LAB_1434dee13;
LAB_1434ded81:
    lVar5 = lVar5 + 2;
  }
  if ((uVar9 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1434ded81;
  }
  if (uVar8 != uVar9) {
    if (DAT_14c867008 == iVar1) {
      if (1 < iVar1) {
        lVar5 = 0;
        goto LAB_1434dedc8;
      }
    }
    else if (DAT_14c867008 + iVar1 != 1) goto LAB_1434dee42;
  }
LAB_1434dee13:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
LAB_1434dedc8:
  uVar8 = *(ushort *)(DAT_14c867000 + lVar5);
  uVar7 = (ulonglong)uVar8;
  uVar9 = *(ushort *)((longlong)puVar2 + lVar5);
  if (uVar8 != uVar9) {
    if ((uVar9 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar10 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1434deddd;
    }
    if (uVar8 != uVar9) goto LAB_1434dee42;
    goto LAB_1434dee13;
  }
  if (uVar8 == 0) goto LAB_1434dee13;
LAB_1434deddd:
  lVar5 = lVar5 + 2;
  goto LAB_1434dedc8;
LAB_1434dee42:
  if ((longlong)DAT_14c867018 == 0) {
LAB_1434dee4e:
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68,
                    L"You are not authorized to grant or deny remote access to other users.");
    }
    FUN_147a8fe96(param_1,L"You are not authorized to grant or deny remote access to other users.",
                  uVar3);
    return;
  }
  plVar6 = DAT_14c867010;
LAB_1434dee9a:
  if ((int)plVar6[1] == iVar1) {
    if (1 < iVar1) {
      lVar5 = 0;
      do {
        uVar8 = *(ushort *)(*plVar6 + lVar5);
        uVar7 = (ulonglong)uVar8;
        uVar9 = *(ushort *)((longlong)puVar2 + lVar5);
        if (uVar8 == uVar9) {
          if (uVar8 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar8)) goto LAB_1434def07;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_1434def07;
        }
        lVar5 = lVar5 + 2;
      } while( true );
    }
  }
  else if ((int)plVar6[1] + iVar1 != 1) goto LAB_1434deeb0;
  goto LAB_1434dee13;
LAB_1434def07:
  if (uVar8 == uVar9) goto LAB_1434dee13;
LAB_1434deeb0:
  plVar6 = plVar6 + 2;
  if (plVar6 == DAT_14c867010 + (longlong)DAT_14c867018 * 2) goto LAB_1434dee4e;
  goto LAB_1434dee9a;
}



// FUNCTION 1434def14 FUN_1434def14 body=674 status=ok
// SIG undefined FUN_1434def14(void)

void FUN_1434def14(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [44];
  DWORD local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8c3290 == 0) {
    local_3c = 0x100;
    GetUserNameW(&DAT_14c8c3290,&local_3c);
  }
  lVar3 = DAT_14cb0d2b0;
  iVar1 = *(int *)(param_2 + 0x18);
  puVar2 = *(undefined2 **)(param_2 + 0x10);
  puVar5 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar5 = puVar2;
  }
  lVar6 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar6);
    uVar8 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)puVar5 + lVar6);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_1434df032;
LAB_1434def98:
    lVar6 = lVar6 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1434def98;
  }
  if (uVar9 != uVar10) {
    if (DAT_14c867008 == iVar1) {
      if (1 < iVar1) {
        lVar6 = 0;
        goto LAB_1434defdf;
      }
    }
    else if (DAT_14c867008 + iVar1 != 1) goto LAB_1434df125;
  }
LAB_1434df032:
  if (DAT_14cb0d2b0 == 0) {
    (**(code **)(*(longlong *)*param_3 + 0x48))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  plVar7 = (longlong *)(DAT_14cb0d2b0 + 0xc28);
  iVar1 = *(int *)(DAT_14cb0d2b0 + 0xc30);
  *(uint *)(DAT_14cb0d2b0 + 0xc30) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xc34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar7,iVar1);
  }
  lVar3 = *plVar7;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar6) = 0;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(lVar3 + 8 + lVar6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(lVar3 + lVar6 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  FUN_1446dd670(lVar3 + lVar6,iVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
LAB_1434defdf:
  uVar9 = *(ushort *)(DAT_14c867000 + lVar6);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)puVar2 + lVar6);
  if (uVar9 != uVar10) {
    if ((uVar10 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar11 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1434deff4;
    }
    if (uVar9 != uVar10) goto LAB_1434df125;
    goto LAB_1434df032;
  }
  if (uVar9 == 0) goto LAB_1434df032;
LAB_1434deff4:
  lVar6 = lVar6 + 2;
  goto LAB_1434defdf;
LAB_1434df125:
  if ((longlong)DAT_14c867018 == 0) {
LAB_1434df131:
    uVar4 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68,
                    L"You are not authorized to execute console commands.");
    }
    FUN_147a8fe96(param_1,L"You are not authorized to execute console commands.",uVar4);
    return;
  }
  plVar7 = DAT_14c867010;
LAB_1434df16e:
  if ((int)plVar7[1] == iVar1) {
    if (1 < iVar1) {
      lVar6 = 0;
      do {
        uVar9 = *(ushort *)(*plVar7 + lVar6);
        uVar8 = (ulonglong)uVar9;
        uVar10 = *(ushort *)((longlong)puVar2 + lVar6);
        if (uVar9 == uVar10) {
          if (uVar9 == 0) break;
        }
        else {
          if (0x7f < (uVar10 | uVar9)) goto LAB_1434df1db;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_1434df1db;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else if ((int)plVar7[1] + iVar1 != 1) goto LAB_1434df184;
  goto LAB_1434df032;
LAB_1434df1db:
  if (uVar9 == uVar10) goto LAB_1434df032;
LAB_1434df184:
  plVar7 = plVar7 + 2;
  if (plVar7 == DAT_14c867010 + (longlong)DAT_14c867018 * 2) goto LAB_1434df131;
  goto LAB_1434df16e;
}



// FUNCTION 1434df1e8 FUN_1434df1e8 body=671 status=ok
// SIG undefined FUN_1434df1e8(void)

void FUN_1434df1e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auStack_58 [36];
  DWORD local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8c3290 == 0) {
    local_34 = 0x100;
    GetUserNameW(&DAT_14c8c3290,&local_34);
  }
  iVar1 = *(int *)(param_2 + 1);
  puVar2 = (undefined2 *)*param_2;
  puVar5 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar5 = puVar2;
  }
  lVar6 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar6);
    uVar8 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)puVar5 + lVar6);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_1434df2ff;
LAB_1434df269:
    lVar6 = lVar6 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar4 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar4]) goto LAB_1434df269;
  }
  if (uVar9 != uVar10) {
    if (DAT_14c867008 == iVar1) {
      if (1 < iVar1) {
        lVar6 = 0;
        goto LAB_1434df2ac;
      }
    }
    else if (DAT_14c867008 + iVar1 != 1) goto LAB_1434df3a9;
  }
LAB_1434df2ff:
  if (DAT_14cb0d2b0 == 0) {
    (**(code **)(*(longlong *)*param_3 + 0x48))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
LAB_1434df2ac:
  uVar9 = *(ushort *)(DAT_14c867000 + lVar6);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)puVar2 + lVar6);
  if (uVar9 != uVar10) {
    if ((uVar10 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar4 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar4]) goto LAB_1434df2c1;
    }
    if (uVar9 != uVar10) goto LAB_1434df3a9;
    goto LAB_1434df2ff;
  }
  if (uVar9 == 0) goto LAB_1434df2ff;
LAB_1434df2c1:
  lVar6 = lVar6 + 2;
  goto LAB_1434df2ac;
LAB_1434df3a9:
  if ((longlong)DAT_14c867018 == 0) {
LAB_1434df3b5:
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58,
                    L"You are not authorized to terminate this instance.");
    }
    FUN_147a8fe96(param_1,L"You are not authorized to terminate this instance.",uVar3);
    return;
  }
  plVar7 = DAT_14c867010;
LAB_1434df3f2:
  if ((int)plVar7[1] == iVar1) {
    if (1 < iVar1) {
      lVar6 = 0;
      do {
        uVar9 = *(ushort *)(*plVar7 + lVar6);
        uVar8 = (ulonglong)uVar9;
        uVar10 = *(ushort *)((longlong)puVar2 + lVar6);
        if (uVar9 == uVar10) {
          if (uVar9 == 0) break;
        }
        else {
          if (0x7f < (uVar10 | uVar9)) goto LAB_1434df45d;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar4 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar4]) goto LAB_1434df45d;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else if ((int)plVar7[1] + iVar1 != 1) goto LAB_1434df408;
  goto LAB_1434df2ff;
LAB_1434df45d:
  if (uVar9 == uVar10) goto LAB_1434df2ff;
LAB_1434df408:
  plVar7 = plVar7 + 2;
  if (plVar7 == DAT_14c867010 + (longlong)DAT_14c867018 * 2) goto LAB_1434df3b5;
  goto LAB_1434df3f2;
}



// FUNCTION 1434df4ac FUN_1434df4ac body=27 status=ok
// SIG undefined FUN_1434df4ac(void)

wchar_t * FUN_1434df4ac(uint param_1)

{
  if (param_1 < 8) {
    return (wchar_t *)(&PTR_DAT_14a8eb198)[param_1];
  }
  return L"Unknown";
}



// FUNCTION 1434df4c7 FUN_1434df4c7 body=69 status=ok
// SIG undefined FUN_1434df4c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434df4c7(void)

{
  _DAT_14cad8348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434df509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8350,1);
  return;
}



// FUNCTION 1434df50c FUN_1434df50c body=69 status=ok
// SIG undefined FUN_1434df50c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434df50c(void)

{
  _DAT_14cad8358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434df54e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8360,1);
  return;
}



// FUNCTION 1434df551 FUN_1434df551 body=5666 status=ok
// SIG undefined FUN_1434df551(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1434df551(longlong *param_1,longlong param_2,byte param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong *plVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_498 [32];
  undefined4 *local_478;
  longlong **local_470;
  byte local_459;
  longlong local_458;
  longlong *local_450;
  longlong *local_448;
  int local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined1 local_41c;
  longlong *local_418;
  uint local_410;
  undefined4 local_40c;
  longlong *local_408;
  undefined8 uStack_400;
  undefined1 local_3f8;
  undefined2 uStack_3f7;
  undefined1 uStack_3f5;
  undefined2 uStack_3f4;
  undefined1 uStack_3f2;
  undefined1 uStack_3f1;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  ushort local_3e8;
  int local_3e4;
  undefined2 uStack_3e0;
  undefined2 uStack_3de;
  undefined4 uStack_3dc;
  int iStack_3d8;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined8 local_3c4;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  undefined8 local_3a4;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined8 local_388;
  longlong *plStack_380;
  undefined2 uStack_378;
  undefined2 uStack_376;
  undefined4 uStack_374;
  undefined2 uStack_370;
  undefined2 uStack_36e;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  int local_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_2e4;
  undefined1 local_2d0 [24];
  undefined4 local_2b8;
  uint local_2b0;
  int local_2ac;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  *param_1 = 0;
  param_1[1] = 0;
  local_459 = param_3;
  lVar13 = FUN_1405e677a(DAT_14cb0d2b0);
  iVar34 = *(int *)(param_2 + 0x90);
  if (iVar34 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar34 + 1);
  }
  local_458 = param_2;
  if (-1 < iVar34) {
    FUN_147aabc76(param_1);
  }
  uStack_370 = 0;
  uStack_36e = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  plStack_380 = (longlong *)0x0;
  uStack_378 = 0;
  uStack_376 = 0;
  uStack_374 = 0;
  local_340 = 0;
  uStack_338 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_320 = 0;
  uStack_318 = 0;
  uStack_334 = 0x80;
  uStack_330 = 0xffffffff;
  lVar14 = local_458;
  lVar24 = local_458;
LAB_1434df61b:
  lVar28 = lVar14;
  lVar14 = lVar28;
  if (*(longlong *)(lVar28 + 0x20) != 0) goto code_r0x0001434df62a;
  goto LAB_1434df641;
code_r0x0001434df62a:
  lVar14 = *(longlong *)(lVar28 + 0x20);
  if ((*(uint *)(lVar28 + 8) >> 0x1c & 1) == 0) goto LAB_1434df61b;
  lVar14 = FUN_142840154();
  lVar24 = local_458;
LAB_1434df641:
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(lVar28 + 0x20);
    goto LAB_1434df61b;
  }
  local_388 = *(longlong **)(lVar14 + 0x18);
  uStack_370 = 5;
  uStack_36e = 0;
  uStack_36c = 0xffffffff;
  local_364 = 0;
  if (0 < (longlong)*(int *)(lVar24 + 0x198)) {
    lVar14 = 0;
    local_364 = 0;
    do {
      local_364 = local_364 +
                  *(int *)(*(longlong *)(*(longlong *)(lVar24 + 400) + lVar14 * 8) + 0xa8);
      lVar14 = lVar14 + 1;
    } while (*(int *)(lVar24 + 0x198) != lVar14);
  }
  lVar14 = FUN_14019a418(*(longlong *)(lVar24 + 0x30) + 0x2c0);
  if (lVar14 != 0) {
    (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x68))(lVar14 + 0x28,&local_408);
    if (plStack_380 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plStack_380 = local_408;
    uStack_378 = SUB82(uStack_400,0);
    uStack_376 = (undefined2)((ulonglong)uStack_400 >> 0x10);
    uStack_374 = uStack_400._4_4_;
  }
  iVar34 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar34 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar34 + 1U) {
    FUN_147aabd8e(param_1,iVar34);
  }
  local_450 = param_1;
  FUN_147aabce4((longlong)iVar34 * 0x78 + *param_1,&local_388);
  FUN_147a90f04(&local_388);
  local_418 = (longlong *)0x0;
  local_410 = *(uint *)(local_458 + 0x90);
  lVar14 = (longlong)(int)local_410;
  _Src = *(void **)(local_458 + 0x88);
  if (lVar14 == 0) {
    local_40c = 0;
    lVar14 = local_458;
  }
  else {
    FUN_147aabf14(&local_418,local_410,0);
    memcpy(local_418,_Src,lVar14 << 3);
    uVar12 = local_410;
    plVar27 = local_418;
    if ((local_459 & 1 < (int)local_410) != 0) {
      uVar22 = (ulonglong)local_410;
      memset(&uStack_378,0,0x2f0);
      local_388 = plVar27;
      plStack_380 = plVar27 + (uVar22 - 1);
      fVar44 = logf((float)(int)uVar12);
      uStack_378 = (undefined2)(longlong)(fVar44 + fVar44);
      uStack_376 = (undefined2)((ulonglong)(longlong)(fVar44 + fVar44) >> 0x10);
      plVar27 = &local_388;
      do {
        plVar17 = (longlong *)*plVar27;
        plVar37 = (longlong *)plVar27[1];
        iVar34 = (int)plVar27[2];
        iVar23 = (int)((ulonglong)((longlong)plVar37 - (longlong)plVar17) >> 3);
        uVar12 = iVar23 + 1;
        if (iVar34 != 0) {
LAB_1434dfd76:
          if (8 < (int)uVar12) {
            lVar14 = plVar17[uVar12 >> 1];
            plVar17[uVar12 >> 1] = *plVar17;
            *plVar17 = lVar14;
            plVar16 = plVar37 + 1;
            plVar21 = plVar17;
LAB_1434dfd96:
            plVar21 = plVar21 + 1;
            if (plVar21 <= plVar37) {
              do {
                if ((*(longlong *)(*plVar17 + 0x178) != 0) &&
                   ((*(longlong *)(*plVar21 + 0x178) == 0 ||
                    (*(int *)(*(longlong *)(*plVar21 + 0x178) + 0xa8) <
                     *(int *)(*(longlong *)(*plVar17 + 0x178) + 0xa8))))) break;
                plVar21 = plVar21 + 1;
              } while (plVar21 <= plVar37);
            }
            do {
              plVar29 = plVar16;
              plVar16 = plVar29 + -1;
              if (plVar16 <= plVar17) goto LAB_1434dfe1f;
              if ((*(longlong *)(plVar29[-1] + 0x178) != 0) &&
                 ((*(longlong *)(*plVar17 + 0x178) == 0 ||
                  (*(int *)(*(longlong *)(*plVar17 + 0x178) + 0xa8) <
                   *(int *)(*(longlong *)(plVar29[-1] + 0x178) + 0xa8))))) goto LAB_1434dfe1f;
            } while( true );
          }
          for (; plVar21 = plVar17, plVar16 = plVar17, plVar17 < plVar37; plVar37 = plVar37 + -1) {
            while (plVar16 = plVar16 + 1, plVar16 <= plVar37) {
              if ((*(longlong *)(*plVar21 + 0x178) != 0) &&
                 ((*(longlong *)(*plVar16 + 0x178) == 0 ||
                  (*(int *)(*(longlong *)(*plVar16 + 0x178) + 0xa8) <
                   *(int *)(*(longlong *)(*plVar21 + 0x178) + 0xa8))))) {
                plVar21 = plVar16;
              }
            }
            lVar14 = *plVar21;
            *plVar21 = *plVar37;
            *plVar37 = lVar14;
          }
          goto LAB_1434e00fb;
        }
LAB_1434dfebf:
        if (uVar12 != 0) {
          iVar34 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
          iVar23 = iVar34;
joined_r0x0001434dfee5:
          do {
            iVar35 = iVar34 * 2 + 1;
            if (iVar35 < (int)uVar12) {
              iVar33 = iVar34 * 2 + 2;
              if (iVar33 < (int)uVar12) {
                lVar14 = (longlong)iVar33;
                if ((*(longlong *)(plVar17[lVar14] + 0x178) != 0) &&
                   ((*(longlong *)(plVar17[iVar35] + 0x178) == 0 ||
                    (*(int *)(*(longlong *)(plVar17[iVar35] + 0x178) + 0xa8) <
                     *(int *)(*(longlong *)(plVar17[lVar14] + 0x178) + 0xa8))))) goto LAB_1434dff3e;
              }
              else {
LAB_1434dff3e:
                lVar14 = (longlong)iVar35;
                iVar33 = iVar35;
              }
              lVar24 = plVar17[iVar34];
              lVar28 = *(longlong *)(lVar24 + 0x178);
              if (lVar28 != 0) {
                lVar4 = *(longlong *)(plVar17[lVar14] + 0x178);
                if ((lVar4 == 0) || (*(int *)(lVar4 + 0xa8) < *(int *)(lVar28 + 0xa8))) {
                  plVar17[iVar34] = plVar17[lVar14];
                  plVar17[lVar14] = lVar24;
                  iVar34 = iVar33;
                  goto joined_r0x0001434dfee5;
                }
              }
            }
            bVar42 = iVar23 != 0;
            iVar34 = iVar23 + -1;
            iVar23 = iVar34;
          } while (bVar42);
          if (1 < (int)uVar12) {
            uVar22 = (ulonglong)uVar12;
            lVar14 = *plVar17;
            *plVar17 = plVar17[uVar22 - 1];
            plVar17[uVar22 - 1] = lVar14;
            if (uVar12 != 2) {
              do {
                uVar30 = uVar22 - 1;
                iVar23 = 0;
                iVar34 = 1;
                iVar35 = 0;
                do {
                  iVar33 = iVar23 + 2;
                  lVar14 = (longlong)iVar33;
                  if (((longlong)uVar30 <= lVar14) ||
                     ((*(longlong *)(plVar17[lVar14] + 0x178) != 0 &&
                      ((*(longlong *)(plVar17[iVar34] + 0x178) == 0 ||
                       (*(int *)(*(longlong *)(plVar17[iVar34] + 0x178) + 0xa8) <
                        *(int *)(*(longlong *)(plVar17[lVar14] + 0x178) + 0xa8))))))) {
                    lVar14 = (longlong)iVar34;
                    iVar33 = iVar34;
                  }
                  lVar24 = plVar17[iVar35];
                  lVar28 = *(longlong *)(lVar24 + 0x178);
                  if (lVar28 == 0) break;
                  lVar4 = *(longlong *)(plVar17[lVar14] + 0x178);
                  if ((lVar4 != 0) && (*(int *)(lVar28 + 0xa8) <= *(int *)(lVar4 + 0xa8))) break;
                  plVar17[iVar35] = plVar17[lVar14];
                  plVar17[lVar14] = lVar24;
                  iVar23 = iVar33 * 2;
                  iVar34 = iVar33 * 2 + 1;
                  iVar35 = iVar33;
                } while ((longlong)iVar34 < (longlong)uVar30);
                lVar14 = *plVar17;
                *plVar17 = plVar17[uVar22 - 2];
                plVar17[uVar22 - 2] = lVar14;
                uVar22 = uVar30;
              } while (2 < uVar30);
            }
          }
        }
LAB_1434e00fb:
        plVar27 = plVar27 + -3;
      } while (&local_388 <= plVar27);
    }
    lVar14 = local_458;
    if (local_410 != 0) {
      plVar27 = local_418 + (int)local_410;
      plVar37 = local_418;
      local_448 = plVar27;
LAB_1434e013c:
      plVar17 = (longlong *)*plVar37;
      if ((plVar17 != (longlong *)0x0) && (plVar17[6] != 0)) {
        if (lVar14 == 0) {
          plVar16 = (longlong *)0x0;
          plVar21 = (longlong *)0x0;
          lVar14 = 0;
          iVar34 = 0;
        }
        else {
          FUN_1400bbfc4(&local_388);
          plVar21 = plStack_380;
          plVar16 = local_388;
          lVar14 = CONCAT44(uStack_374,CONCAT22(uStack_376,uStack_378));
          iVar34 = CONCAT22(uStack_36e,uStack_370);
          cVar11 = (*(code *)PTR_FUN_14c758760)();
          uVar12 = *(uint *)(local_458 + 0xc);
          if (cVar11 != '\0') {
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            if ((*(uint *)(lVar24 + 8) & 0x8400000) != 0) goto LAB_1434e0214;
          }
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          }
          else {
            lVar24 = 0;
          }
          plVar27 = local_448;
          if (*(int *)(lVar24 + 0x10) == 0) {
            LOCK();
            iVar23 = DAT_14c964868 + 1;
            UNLOCK();
            iVar35 = DAT_14c964868 + 1;
            bVar42 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar23;
            if (bVar42) {
              local_43c = iVar35;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar35);
              iVar35 = local_43c;
            }
            LOCK();
            if (*(int *)(lVar24 + 0x10) == 0) {
              *(int *)(lVar24 + 0x10) = iVar35;
            }
            UNLOCK();
            plVar27 = local_448;
          }
        }
LAB_1434e0214:
        if (((longlong *)plVar17[6] == plVar16) && ((longlong *)plVar17[7] == plVar21)) {
          iVar23 = (int)plVar17[9];
          if (iVar23 == iVar34) {
            bVar42 = true;
            if (1 < iVar23) {
              lVar24 = 0;
              do {
                uVar2 = *(ushort *)(plVar17[8] + lVar24);
                uVar3 = *(ushort *)(lVar14 + lVar24);
                if (uVar2 == uVar3) {
                  if (uVar2 == 0) goto LAB_1434e0b16;
                }
                else {
                  if (0x7f < (uVar3 | uVar2)) {
                    iVar34 = (uint)uVar2 - (uint)uVar3;
                    goto LAB_1434e0b1a;
                  }
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                    iVar34 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                    goto LAB_1434e0b1a;
                  }
                }
                lVar24 = lVar24 + 2;
              } while( true );
            }
            goto LAB_1434e0221;
          }
          iVar34 = iVar34 + iVar23 + -1;
          goto LAB_1434e0b1a;
        }
        bVar42 = false;
        goto LAB_1434e0221;
      }
      goto LAB_1434e0240;
    }
  }
LAB_1434df763:
  plVar27 = local_450;
  if (0 < *(int *)(lVar13 + 0x250)) {
    lVar24 = 0;
    do {
      local_388 = *(longlong **)(*(longlong *)(lVar13 + 0x248) + lVar24 * 8);
      uStack_368 = 0;
      plStack_380 = (longlong *)0x0;
      uStack_378 = 0;
      uStack_376 = 0;
      uStack_374 = 0;
      local_320 = 0;
      uStack_318 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_360 = 0;
      uStack_358 = 0;
      uStack_334 = 0x80;
      uStack_330 = 0xffffffff;
      uStack_370 = 6;
      uStack_36e = 0;
      uStack_36c = 0xffffffff;
      local_364 = 0;
      iVar34 = (int)plVar27[1];
      *(uint *)(plVar27 + 1) = iVar34 + 1U;
      if (*(uint *)((longlong)plVar27 + 0xc) < iVar34 + 1U) {
        FUN_147aabd8e(plVar27,iVar34);
      }
      FUN_147aabce4((longlong)iVar34 * 0x78 + *plVar27,&local_388);
      FUN_147a90f04(&local_388);
      lVar24 = lVar24 + 1;
      lVar14 = local_458;
    } while (lVar24 < *(int *)(lVar13 + 0x250));
  }
  iVar34 = *(int *)(lVar14 + 0x238);
  if (iVar34 < 1) {
LAB_1434dfc6f:
    if (local_418 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return local_450;
  }
  lVar13 = 0;
LAB_1434df86c:
  iVar23 = *(int *)(*(longlong *)(lVar14 + 0x230) + 4 + lVar13 * 8);
  if ((((iVar23 != 0) &&
       (uVar12 = *(uint *)(*(longlong *)(lVar14 + 0x230) + lVar13 * 8), -1 < (int)uVar12)) &&
      ((int)uVar12 < DAT_14c9647dc)) &&
     (((plVar27 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar27 != (longlong *)0x0 && ((int)plVar27[2] == iVar23)) &&
      (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 &&
       ((lVar24 = *plVar27, lVar24 != 0 && (lVar28 = *(longlong *)(lVar24 + 0x3d0), lVar28 != 0)))))
      ))) {
    memset(&local_388,0,0x100);
    local_2b8 = 0xffffffff;
    local_2e4 = 0xffffffff;
    local_388 = (longlong *)CONCAT44(0x3f800000,(undefined4)local_388);
    uVar15 = FUN_1447210f0(lVar24);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadad20) {
      FUN_144b3d300(&DAT_14cadad20);
      if (DAT_14cadad20 == -1) {
        local_408 = (longlong *)0x14a8e521c;
        uStack_400 = (longlong *)CONCAT35(uStack_400._5_3_,9);
        uVar12 = FUN_14001a6c0(&local_408,1);
        DAT_14cadad18 = (longlong *)(ulonglong)uVar12;
        _Init_thread_footer(&DAT_14cadad20);
      }
    }
    local_3e4 = 0;
    uStack_3e0 = 0x101;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    iStack_3ac = 8;
    uStack_398 = 0;
    uStack_394 = 0;
    local_3f8 = 1;
    uStack_3ec = 0;
    local_408 = DAT_14cadad18;
    uStack_3f7 = 1;
    uStack_3f5 = 0;
    local_3e8 = local_3e8 & 0xff00;
    uStack_3f4 = 0;
    uStack_3f2 = 0;
    uStack_3a8 = *(undefined4 *)(lVar28 + 0xc);
    local_390 = 0x400000001;
    uStack_400 = *(longlong **)(lVar28 + 0x18);
    uStack_3f1 = 1;
    uStack_3f0 = CONCAT31(uStack_3f0._1_3_,1);
    local_420 = 1;
    local_41c = 0;
    lVar14 = *(longlong *)(lVar28 + 0x1c8);
    if (lVar14 == 0) {
      uVar43 = (undefined4)DAT_14c8464f0;
      uVar45 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uStack_80 = (undefined4)DAT_14c8464e8;
      uStack_7c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uVar46 = (undefined4)DAT_14c8464e0;
      uVar47 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      local_428 = DAT_14c8464f0;
      local_438 = DAT_14c8464e0;
      uStack_430 = DAT_14c8464e8;
    }
    else {
      local_428 = *(undefined8 *)(lVar14 + 0x270);
      uVar43 = (undefined4)local_428;
      uVar45 = (undefined4)((ulonglong)local_428 >> 0x20);
      uVar46 = *(undefined4 *)(lVar14 + 0x260);
      uVar47 = *(undefined4 *)(lVar14 + 0x264);
      local_438 = *(undefined8 *)(lVar14 + 0x260);
      uStack_430 = *(undefined8 *)(lVar14 + 0x268);
      uStack_80 = (undefined4)*(undefined8 *)(lVar14 + 0x268);
      uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x268) >> 0x20);
    }
    uStack_78 = (double)CONCAT44(uVar45,uVar43) + -256.0;
    local_88 = CONCAT44(uVar47,uVar46);
    local_470 = &local_408;
    local_478 = &local_420;
    FUN_140526294(uVar15,&local_388,&local_438,&local_88);
    if (CONCAT44(uStack_394,uStack_398) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_3b4,uStack_3b8) != 0) {
      FUN_1400020a8();
    }
    cVar11 = FUN_144a41512(local_2d0);
    if (cVar11 == '\0') {
      lVar14 = local_458;
      if (((((local_2ac != 0) && (-1 < (int)local_2b0)) && ((int)local_2b0 < DAT_14c9647dc)) &&
          ((plVar27 = (longlong *)
                      ((ulonglong)((local_2b0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_2b0 >> 0x10) * 8)),
           plVar27 != (longlong *)0x0 && ((int)plVar27[2] == local_2ac)))) &&
         (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 && (*plVar27 != 0)))) {
        lVar24 = FUN_14494250a();
        goto LAB_1434dfb6d;
      }
    }
    else {
      lVar24 = FUN_147a90f4a(local_2d0);
LAB_1434dfb6d:
      lVar14 = local_458;
      if (lVar24 != 0) {
LAB_1434dfb77:
        lVar28 = lVar24;
        lVar24 = lVar28;
        if (*(longlong *)(lVar28 + 0x20) != 0) goto code_r0x0001434dfb86;
        goto LAB_1434dfba0;
      }
    }
    goto LAB_1434dfbe3;
  }
  goto LAB_1434dfbe9;
LAB_1434dfe1f:
  if (plVar16 < plVar21) goto LAB_1434dfe38;
  lVar14 = *plVar21;
  *plVar21 = *plVar16;
  *plVar16 = lVar14;
  goto LAB_1434dfd96;
LAB_1434dfe38:
  lVar14 = *plVar17;
  *plVar17 = *plVar16;
  *plVar16 = lVar14;
  iVar34 = iVar34 + -1;
  plVar29 = plVar29 + -2;
  if ((longlong)plVar29 - (longlong)plVar17 < (longlong)plVar37 - (longlong)plVar21) {
    if (plVar21 < plVar37) {
      *plVar27 = (longlong)plVar21;
      plVar27[1] = (longlong)plVar37;
      *(int *)(plVar27 + 2) = iVar34;
      plVar27 = plVar27 + 3;
    }
    if (plVar16 <= plVar17 + 1) goto LAB_1434e00fb;
  }
  else {
    if (plVar17 + 1 < plVar16) {
      *plVar27 = (longlong)plVar17;
      plVar27[1] = (longlong)plVar29;
      *(int *)(plVar27 + 2) = iVar34;
      plVar27 = plVar27 + 3;
    }
    plVar29 = plVar37;
    plVar17 = plVar21;
    if (plVar37 <= plVar21) goto LAB_1434e00fb;
  }
  iVar23 = (int)((ulonglong)((longlong)plVar29 - (longlong)plVar17) >> 3);
  uVar12 = iVar23 + 1;
  plVar37 = plVar29;
  if (iVar34 == 0) goto LAB_1434dfebf;
  goto LAB_1434dfd76;
LAB_1434e0b16:
  iVar34 = 0;
LAB_1434e0b1a:
  bVar42 = iVar34 == 0;
LAB_1434e0221:
  if (lVar14 != 0) {
    FUN_1400020a8(lVar14);
  }
  lVar14 = local_458;
  if (!bVar42) {
    local_3f8 = 0;
    uStack_3f7 = 0;
    uStack_3f5 = 0;
    uStack_3f4 = 0;
    uStack_3f2 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    local_408 = (longlong *)0x0;
    uStack_400 = (longlong *)0x0;
    local_3e8 = 0;
    local_3a4 = 0;
    uStack_39c = 0;
    uStack_398 = 0;
    iStack_3ac = 0;
    uStack_3a8 = 0;
    local_3c4 = 0;
    uStack_3bc = 0;
    uStack_3b8 = 0;
    local_3d4 = 0;
    uStack_3cc = 0;
    local_3e4 = 0;
    uStack_3e0 = 0;
    uStack_3de = 0;
    uStack_3dc = 0;
    iStack_3d8 = 0;
    uStack_394 = 0;
    uStack_3b4 = 0x80;
    uStack_3b0 = 0xffffffff;
    (**(code **)(*plVar17 + 0x2d0))(plVar17);
    local_408 = local_388;
    uStack_3ec = *(undefined4 *)((longlong)plVar17 + 0xe4);
    uStack_3f0 = FUN_147b99186(plVar17);
    if (plVar17[0x2f] != 0) {
      plVar16 = (longlong *)(**(code **)(*plVar17 + 0x2a0))(plVar17);
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x68))(plVar16);
        if (uStack_400 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uStack_400 = local_388;
        local_3f8 = SUB81(plStack_380,0);
        uStack_3f7 = (undefined2)((ulonglong)plStack_380 >> 8);
        uStack_3f5 = (undefined1)((ulonglong)plStack_380 >> 0x18);
        uStack_3f4 = (undefined2)((ulonglong)plStack_380 >> 0x20);
        uStack_3f2 = (undefined1)((ulonglong)plStack_380 >> 0x30);
        uStack_3f1 = (undefined1)((ulonglong)plStack_380 >> 0x38);
      }
      local_3e4 = *(int *)(plVar17[0x2f] + 0xa8);
      if ((longlong)local_3e4 != 0) {
        plVar16 = *(longlong **)(plVar17[0x2f] + 0xa0);
        plVar17 = plVar16 + local_3e4;
        do {
          lVar14 = *plVar16;
          if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) & 0x30) == 0)) {
            for (lVar24 = *(longlong *)(lVar14 + 0x10); lVar24 != 0;
                lVar24 = *(longlong *)(lVar24 + 0x40)) {
              uVar12 = *(uint *)(lVar24 + 0xc);
              if ((int)uVar12 < DAT_14c9647dc) {
                lVar28 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
              }
              else {
                lVar28 = 0;
              }
              if ((*(uint *)(lVar28 + 8) >> 0x19 & 1) != 0) {
                uVar15 = *(undefined8 *)(lVar24 + 0x18);
                goto LAB_1434e0a90;
              }
            }
            uVar15 = 0;
LAB_1434e0a90:
            local_388 = *(longlong **)(*(longlong *)(lVar14 + 0x10) + 0x18);
            uVar12 = (uint)((ulonglong)local_388 >> 0x10);
            uVar26 = (uint)local_388 & 0xffff;
            piVar18 = (int *)FUN_147aabf76(&uStack_3e0,
                                           ((uint)local_388 << 0x10 | uVar26) +
                                           (int)((ulonglong)local_388 >> 0x20) +
                                           (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar26 >> 4),
                                           &local_388);
            *piVar18 = *piVar18 + 1;
            *(undefined8 *)(piVar18 + 1) = uVar15;
            plVar27 = local_448;
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar17);
      }
    }
    if (local_459 != 0) {
      if (iStack_3ac < iStack_3d8) {
        FUN_147aac546(&uStack_3e0);
        uVar12 = iStack_3d8 - iStack_3ac;
        if (1 < (int)uVar12) {
          plVar27 = (longlong *)CONCAT44(uStack_3dc,CONCAT22(uStack_3de,uStack_3e0));
          memset(&uStack_378,0,0x2f0);
          plStack_380 = (longlong *)((longlong)plVar27 + (ulonglong)uVar12 * 0x1c + -0x1c);
          local_388 = plVar27;
          fVar44 = logf((float)(int)uVar12);
          uStack_378 = (undefined2)(longlong)(fVar44 + fVar44);
          uStack_376 = (undefined2)((ulonglong)(longlong)(fVar44 + fVar44) >> 0x10);
          plVar17 = &local_388;
          do {
            puVar20 = (undefined8 *)*plVar17;
            puVar32 = (undefined8 *)plVar17[1];
            iVar34 = (int)plVar17[2];
            iVar23 = (int)((ulonglong)((longlong)puVar32 - (longlong)puVar20) >> 2) * -0x49249249;
            uVar22 = (ulonglong)(iVar23 + 1);
            puVar39 = puVar20;
            puVar38 = puVar32;
            if (iVar34 != 0) {
LAB_1434e042d:
              if (8 < (int)(uint)uVar22) {
                lVar14 = (ulonglong)((uint)uVar22 >> 1) * 0x1c;
                uVar15 = *(undefined8 *)((longlong)puVar20 + lVar14);
                uVar5 = ((undefined8 *)((longlong)puVar20 + lVar14))[1];
                puVar25 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xc);
                uVar6 = puVar25[1];
                uStack_78._0_4_ = (undefined4)((ulonglong)*puVar25 >> 0x20);
                uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
                uVar7 = *puVar20;
                uVar8 = puVar20[1];
                uVar9 = *(undefined8 *)((longlong)puVar20 + 0x14);
                puVar25 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xc);
                *puVar25 = *(undefined8 *)((longlong)puVar20 + 0xc);
                puVar25[1] = uVar9;
                *(undefined8 *)((longlong)puVar20 + lVar14) = uVar7;
                ((undefined8 *)((longlong)puVar20 + lVar14))[1] = uVar8;
                *(ulonglong *)((longlong)puVar20 + 0xc) = CONCAT44((undefined4)uStack_78,uStack_7c);
                *(undefined8 *)((longlong)puVar20 + 0x14) = uVar6;
                *puVar20 = uVar15;
                puVar20[1] = uVar5;
                puVar25 = (undefined8 *)((longlong)puVar32 + 0x1c);
                puVar19 = puVar20;
                do {
                  puVar10 = (undefined8 *)((longlong)puVar19 + 0x1c);
                  puVar31 = (undefined8 *)((longlong)puVar19 + 0x1c);
                  do {
                    puVar19 = puVar31;
                    puVar41 = puVar10;
                    if (puVar32 < puVar19) break;
                    puVar10 = (undefined8 *)((longlong)puVar41 + 0x1c);
                    puVar31 = (undefined8 *)((longlong)puVar19 + 0x1c);
                  } while (*(int *)(puVar20 + 1) <= *(int *)(puVar19 + 1));
                  puVar10 = puVar25 + -7;
                  do {
                    puVar31 = puVar25;
                    puVar40 = puVar10;
                    puVar25 = (undefined8 *)((longlong)puVar31 + -0x1c);
                    if (puVar25 <= puVar20) break;
                    puVar10 = (undefined8 *)((longlong)puVar40 + -0x1c);
                  } while (*(int *)((longlong)puVar31 + -0x14) <= *(int *)(puVar20 + 1));
                  if (puVar25 < puVar19) goto LAB_1434e0523;
                  uVar15 = *puVar19;
                  uVar5 = puVar19[1];
                  uVar6 = *(undefined8 *)((longlong)puVar19 + 0x14);
                  uStack_78._0_4_ =
                       (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar19 + 0xc) >> 0x20);
                  uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
                  uVar7 = *puVar25;
                  uVar8 = *(undefined8 *)((longlong)puVar31 + -0x14);
                  uVar9 = puVar31[-1];
                  *(undefined8 *)((longlong)puVar19 + 0xc) = puVar31[-2];
                  *(undefined8 *)((longlong)puVar19 + 0x14) = uVar9;
                  *puVar19 = uVar7;
                  puVar19[1] = uVar8;
                  puVar31[-2] = CONCAT44((undefined4)uStack_78,uStack_7c);
                  puVar31[-1] = uVar6;
                  *puVar25 = uVar15;
                  *(undefined8 *)((longlong)puVar31 + -0x14) = uVar5;
                } while( true );
              }
              for (; puVar38 = puVar20, puVar39 = puVar20, puVar20 < puVar32;
                  puVar32 = (undefined8 *)((longlong)puVar32 + -0x1c)) {
                while (puVar25 = puVar38, puVar39 = (undefined8 *)((longlong)puVar39 + 0x1c),
                      puVar39 <= puVar32) {
                  puVar38 = puVar39;
                  if (*(int *)(puVar25 + 1) <= *(int *)(puVar39 + 1)) {
                    puVar38 = puVar25;
                  }
                }
                local_88 = *puVar25;
                uVar15 = *(undefined8 *)((longlong)puVar25 + 0x14);
                uStack_78._0_4_ =
                     (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar25 + 0xc) >> 0x20);
                uStack_78._4_4_ = (undefined4)uVar15;
                uStack_70 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar8 = local_88;
                uStack_80 = (undefined4)puVar25[1];
                uStack_7c = (undefined4)((ulonglong)puVar25[1] >> 0x20);
                uVar5 = *puVar32;
                uVar6 = puVar32[1];
                uVar7 = *(undefined8 *)((longlong)puVar32 + 0x14);
                *(undefined8 *)((longlong)puVar25 + 0xc) = *(undefined8 *)((longlong)puVar32 + 0xc);
                *(undefined8 *)((longlong)puVar25 + 0x14) = uVar7;
                *puVar25 = uVar5;
                puVar25[1] = uVar6;
                *(ulonglong *)((longlong)puVar32 + 0xc) = CONCAT44((undefined4)uStack_78,uStack_7c);
                *(undefined8 *)((longlong)puVar32 + 0x14) = uVar15;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                *(undefined4 *)puVar32 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar32 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar32 + 1) = uStack_80;
                *(undefined4 *)((longlong)puVar32 + 0xc) = uStack_7c;
                local_88 = uVar8;
              }
              goto LAB_1434e0913;
            }
LAB_1434e05f4:
            iVar34 = (int)uVar22;
            if (iVar34 != 0) {
              iVar23 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
              iVar35 = iVar23;
joined_r0x0001434e0615:
              do {
                iVar33 = iVar23 * 2 + 1;
                if (iVar33 < iVar34) {
                  iVar36 = iVar23 * 2 + 2;
                  if ((iVar36 < iVar34) &&
                     (*(int *)((longlong)puVar20 + (longlong)iVar36 * 0x1c + 8) <=
                      *(int *)((longlong)puVar20 + (longlong)iVar33 * 0x1c + 8))) {
                    iVar33 = iVar36;
                  }
                  if (*(int *)((longlong)puVar20 + (longlong)iVar33 * 0x1c + 8) <
                      *(int *)((longlong)puVar20 + (longlong)iVar23 * 0x1c + 8)) {
                    puVar32 = (undefined8 *)((longlong)iVar23 * 0x1c + (longlong)puVar20);
                    puVar39 = (undefined8 *)((longlong)iVar33 * 0x1c + (longlong)puVar20);
                    local_88 = *puVar32;
                    uVar15 = *(undefined8 *)((longlong)puVar32 + 0x14);
                    uStack_78._0_4_ =
                         (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar32 + 0xc) >> 0x20);
                    uStack_78._4_4_ = (undefined4)uVar15;
                    uStack_70 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    uVar8 = local_88;
                    uStack_80 = (undefined4)puVar32[1];
                    uStack_7c = (undefined4)((ulonglong)puVar32[1] >> 0x20);
                    uVar5 = *puVar39;
                    uVar6 = puVar39[1];
                    uVar7 = *(undefined8 *)((longlong)puVar39 + 0x14);
                    *(undefined8 *)((longlong)puVar32 + 0xc) =
                         *(undefined8 *)((longlong)puVar39 + 0xc);
                    *(undefined8 *)((longlong)puVar32 + 0x14) = uVar7;
                    *puVar32 = uVar5;
                    puVar32[1] = uVar6;
                    *(ulonglong *)((longlong)puVar39 + 0xc) =
                         CONCAT44((undefined4)uStack_78,uStack_7c);
                    *(undefined8 *)((longlong)puVar39 + 0x14) = uVar15;
                    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                    *(undefined4 *)puVar39 = (undefined4)local_88;
                    *(undefined4 *)((longlong)puVar39 + 4) = local_88._4_4_;
                    *(undefined4 *)(puVar39 + 1) = uStack_80;
                    *(undefined4 *)((longlong)puVar39 + 0xc) = uStack_7c;
                    iVar23 = iVar33;
                    local_88 = uVar8;
                    goto joined_r0x0001434e0615;
                  }
                }
                bVar42 = iVar35 != 0;
                iVar23 = iVar35 + -1;
                iVar35 = iVar23;
              } while (bVar42);
              if (1 < iVar34) {
                lVar14 = uVar22 + (uVar22 - 1) * 0x1b;
                local_88 = *puVar20;
                uVar15 = *(undefined8 *)((longlong)puVar20 + 0x14);
                uStack_78._0_4_ =
                     (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar20 + 0xc) >> 0x20);
                uStack_78._4_4_ = (undefined4)uVar15;
                uStack_70 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar8 = local_88;
                uStack_80 = (undefined4)puVar20[1];
                uStack_7c = (undefined4)((ulonglong)puVar20[1] >> 0x20);
                puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + -1);
                uVar5 = *puVar32;
                uVar6 = puVar32[1];
                puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xb);
                uVar7 = puVar32[1];
                *(undefined8 *)((longlong)puVar20 + 0xc) = *puVar32;
                *(undefined8 *)((longlong)puVar20 + 0x14) = uVar7;
                *puVar20 = uVar5;
                puVar20[1] = uVar6;
                puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xb);
                *puVar32 = CONCAT44((undefined4)uStack_78,uStack_7c);
                puVar32[1] = uVar15;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                puVar1 = (undefined4 *)((longlong)puVar20 + lVar14 + -1);
                *puVar1 = (undefined4)local_88;
                puVar1[1] = local_88._4_4_;
                puVar1[2] = uStack_80;
                puVar1[3] = uStack_7c;
                uVar22 = uVar22 - 1;
                local_88 = uVar8;
                if (iVar34 != 2) {
                  do {
                    iVar34 = 0;
                    iVar35 = 1;
                    iVar23 = 0;
                    do {
                      iVar34 = iVar34 + 2;
                      iVar33 = iVar35;
                      if (((longlong)iVar34 < (longlong)uVar22) &&
                         (*(int *)((longlong)puVar20 + (longlong)iVar34 * 0x1c + 8) <=
                          *(int *)((longlong)puVar20 + (longlong)iVar35 * 0x1c + 8))) {
                        iVar33 = iVar34;
                      }
                      if (*(int *)((longlong)puVar20 + (longlong)iVar23 * 0x1c + 8) <=
                          *(int *)((longlong)puVar20 + (longlong)iVar33 * 0x1c + 8)) break;
                      puVar32 = (undefined8 *)((longlong)iVar23 * 0x1c + (longlong)puVar20);
                      puVar39 = (undefined8 *)((longlong)iVar33 * 0x1c + (longlong)puVar20);
                      uVar15 = *puVar32;
                      uVar5 = puVar32[1];
                      uVar6 = *(undefined8 *)((longlong)puVar32 + 0x14);
                      uStack_78._0_4_ =
                           (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar32 + 0xc) >> 0x20)
                      ;
                      uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
                      uVar7 = *puVar39;
                      uVar8 = puVar39[1];
                      uVar9 = *(undefined8 *)((longlong)puVar39 + 0x14);
                      *(undefined8 *)((longlong)puVar32 + 0xc) =
                           *(undefined8 *)((longlong)puVar39 + 0xc);
                      *(undefined8 *)((longlong)puVar32 + 0x14) = uVar9;
                      *puVar32 = uVar7;
                      puVar32[1] = uVar8;
                      *(ulonglong *)((longlong)puVar39 + 0xc) =
                           CONCAT44((undefined4)uStack_78,uStack_7c);
                      *(undefined8 *)((longlong)puVar39 + 0x14) = uVar6;
                      *puVar39 = uVar15;
                      puVar39[1] = uVar5;
                      iVar34 = iVar33 * 2;
                      iVar35 = iVar33 * 2 + 1;
                      iVar23 = iVar33;
                    } while ((longlong)iVar35 < (longlong)uVar22);
                    lVar14 = (uVar22 - 1) * 0x1b + uVar22;
                    local_88 = *puVar20;
                    uVar15 = *(undefined8 *)((longlong)puVar20 + 0x14);
                    uStack_78._0_4_ =
                         (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar20 + 0xc) >> 0x20);
                    uStack_78._4_4_ = (undefined4)uVar15;
                    uStack_70 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    uVar8 = local_88;
                    uStack_80 = (undefined4)puVar20[1];
                    uStack_7c = (undefined4)((ulonglong)puVar20[1] >> 0x20);
                    puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + -1);
                    uVar5 = *puVar32;
                    uVar6 = puVar32[1];
                    puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xb);
                    uVar7 = puVar32[1];
                    *(undefined8 *)((longlong)puVar20 + 0xc) = *puVar32;
                    *(undefined8 *)((longlong)puVar20 + 0x14) = uVar7;
                    *puVar20 = uVar5;
                    puVar20[1] = uVar6;
                    puVar32 = (undefined8 *)((longlong)puVar20 + lVar14 + 0xb);
                    *puVar32 = CONCAT44((undefined4)uStack_78,uStack_7c);
                    puVar32[1] = uVar15;
                    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                    puVar1 = (undefined4 *)((longlong)puVar20 + lVar14 + -1);
                    *puVar1 = (undefined4)local_88;
                    puVar1[1] = local_88._4_4_;
                    puVar1[2] = uStack_80;
                    puVar1[3] = uStack_7c;
                    bVar42 = 2 < uVar22;
                    uVar22 = uVar22 - 1;
                    local_88 = uVar8;
                  } while (bVar42);
                }
              }
            }
LAB_1434e0913:
            plVar17 = plVar17 + -3;
            plVar27 = local_448;
          } while (&local_388 <= plVar17);
        }
      }
      FUN_147aac364(&uStack_3e0);
    }
    plVar17 = local_450;
    iVar34 = (int)local_450[1];
    *(uint *)(local_450 + 1) = iVar34 + 1U;
    if (*(uint *)((longlong)local_450 + 0xc) < iVar34 + 1U) {
      FUN_147aabd8e(local_450,iVar34);
    }
    FUN_147aabce4((longlong)iVar34 * 0x78 + *plVar17,&local_408);
    FUN_147a90f04(&local_408);
    lVar14 = local_458;
  }
LAB_1434e0240:
  plVar37 = plVar37 + 1;
  if (plVar37 == plVar27) goto LAB_1434df763;
  goto LAB_1434e013c;
LAB_1434e0523:
  local_88 = *puVar20;
  uVar15 = *(undefined8 *)((longlong)puVar20 + 0x14);
  uStack_78._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar20 + 0xc) >> 0x20);
  uStack_78._4_4_ = (undefined4)uVar15;
  uStack_70 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar8 = local_88;
  uStack_80 = (undefined4)puVar20[1];
  uStack_7c = (undefined4)((ulonglong)puVar20[1] >> 0x20);
  uVar5 = *puVar25;
  uVar6 = *(undefined8 *)((longlong)puVar31 + -0x14);
  uVar7 = puVar31[-1];
  *(undefined8 *)((longlong)puVar20 + 0xc) = puVar31[-2];
  *(undefined8 *)((longlong)puVar20 + 0x14) = uVar7;
  *puVar20 = uVar5;
  puVar20[1] = uVar6;
  puVar31[-2] = CONCAT44((undefined4)uStack_78,uStack_7c);
  puVar31[-1] = uVar15;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  *(undefined4 *)puVar25 = (undefined4)local_88;
  *(undefined4 *)(puVar31 + -3) = local_88._4_4_;
  *(undefined4 *)((longlong)puVar31 + -0x14) = uStack_80;
  *(undefined4 *)(puVar31 + -2) = uStack_7c;
  iVar34 = iVar34 + -1;
  puVar31 = puVar31 + -7;
  local_88 = uVar8;
  if ((longlong)puVar40 - (longlong)puVar39 < (longlong)puVar38 - (longlong)puVar41) {
    if (puVar19 < puVar32) {
      *plVar17 = (longlong)puVar19;
      plVar17[1] = (longlong)puVar32;
      *(int *)(plVar17 + 2) = iVar34;
      plVar17 = plVar17 + 3;
    }
    puVar41 = puVar20;
    if (puVar25 <= (undefined8 *)((longlong)puVar20 + 0x1cU)) goto LAB_1434e0913;
  }
  else {
    if ((undefined8 *)((longlong)puVar20 + 0x1cU) < puVar25) {
      *plVar17 = (longlong)puVar20;
      plVar17[1] = (longlong)puVar31;
      *(int *)(plVar17 + 2) = iVar34;
      plVar17 = plVar17 + 3;
    }
    puVar20 = puVar19;
    puVar31 = puVar32;
    puVar40 = puVar32;
    if (puVar32 <= puVar19) goto LAB_1434e0913;
  }
  iVar23 = (int)((ulonglong)((longlong)puVar40 - (longlong)puVar41) >> 2) * -0x49249249;
  uVar22 = (ulonglong)(iVar23 + 1);
  puVar39 = puVar41;
  puVar32 = puVar31;
  puVar38 = puVar40;
  if (iVar34 == 0) goto LAB_1434e05f4;
  goto LAB_1434e042d;
code_r0x0001434dfb86:
  lVar24 = *(longlong *)(lVar28 + 0x20);
  if ((*(uint *)(lVar28 + 8) >> 0x1c & 1) == 0) goto LAB_1434dfb77;
  lVar24 = FUN_142840154(lVar28);
  lVar14 = local_458;
LAB_1434dfba0:
  if (lVar24 == 0) {
    lVar24 = *(longlong *)(lVar28 + 0x20);
    goto LAB_1434dfb77;
  }
  if ((longlong)(int)local_450[1] != 0) {
    plVar27 = (longlong *)*local_450;
    lVar28 = (longlong)(int)local_450[1] * 0x78;
    do {
      if (*plVar27 == *(longlong *)(lVar24 + 0x18)) {
        if (plVar27 != (longlong *)0x0) {
          *(undefined1 *)((longlong)plVar27 + 0x21) = 1;
        }
        break;
      }
      plVar27 = plVar27 + 0xf;
      lVar28 = lVar28 + -0x78;
    } while (lVar28 != 0);
  }
LAB_1434dfbe3:
  iVar34 = *(int *)(lVar14 + 0x238);
LAB_1434dfbe9:
  lVar13 = lVar13 + 1;
  if (iVar34 <= (int)lVar13) goto LAB_1434dfc6f;
  goto LAB_1434df86c;
}



// FUNCTION 1434e0b75 FUN_1434e0b75 body=69 status=ok
// SIG undefined FUN_1434e0b75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e0b75(void)

{
  _DAT_14cad83b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e0bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad83c0,1);
  return;
}



// FUNCTION 1434e0bba FUN_1434e0bba body=622 status=ok
// SIG undefined FUN_1434e0bba(void)

void FUN_1434e0bba(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  code **ppcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90 [8];
  code **local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = *(longlong *)(param_1 + -0x10);
  if (lVar7 != 0) {
    if (DAT_14cb10130 == 0) {
      local_b0 = local_90;
      local_90[0] = FUN_140754f84;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147da9a76;
      local_c0 = FUN_1409f3105;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
       (*(int *)(param_1 + 0x18) != 0)) {
      local_50 = (code **)0x0;
      local_48 = 0x800000000;
      uVar5 = FUN_14119d0a4(lVar7);
      if (0 < (longlong)*(int *)(param_1 + 0x18)) {
        uVar9 = (longlong)*(int *)(param_1 + 0x18) + 1;
        do {
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + -0x10 + uVar9 * 8);
          if (((pcVar1 != (code *)0x0) && (((byte)pcVar1[0x62] & 2) != 0)) &&
             ((cVar3 = FUN_147a91656(uVar5,pcVar1), cVar3 != '\0' &&
              (cVar3 = FUN_147a916d2(pcVar1), uVar2 = local_48, cVar3 != '\0')))) {
            lVar7 = (longlong)(int)local_48;
            uVar4 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,uVar4);
            if (local_48._4_4_ < uVar4) {
              FUN_1457145b8(local_90,uVar2 & 0xffffffff);
            }
            ppcVar6 = local_50;
            if (local_50 == (code **)0x0) {
              ppcVar6 = local_90;
            }
            ppcVar6[lVar7] = pcVar1;
            local_98 = pcVar1;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(pcVar1);
            }
            FUN_14021b9fa((longlong *)(param_1 + 0x10),&local_98,1);
          }
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
        lVar7 = (longlong)(int)local_48;
        ppcVar6 = local_90;
        if (local_50 != (code **)0x0) {
          ppcVar6 = local_50;
        }
        if (lVar7 != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)((longlong)ppcVar6 + lVar8) != 0) {
              FUN_140aeefbc(*(longlong *)((longlong)ppcVar6 + lVar8),0,1);
            }
            lVar8 = lVar8 + 8;
          } while (lVar7 * 8 != lVar8);
        }
        if (local_50 != (code **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e0e2a FUN_1434e0e2a body=1268 status=ok
// SIG undefined FUN_1434e0e2a(void)

/* WARNING: Removing unreachable block (ram,0x0001434e123f) */
/* WARNING: Removing unreachable block (ram,0x0001434e1255) */

void FUN_1434e0e2a(undefined8 param_1,wchar_t *param_2,longlong *param_3)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  size_t sVar6;
  ulonglong uVar7;
  void **ppvVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  longlong local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  void *local_98;
  undefined8 uStack_90;
  wchar_t *local_80;
  undefined4 local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,2,0x10);
  local_b8 = 2;
  *local_c0 = (longlong)&PTR_LAB_149e30720;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_c0[2] = lVar9;
  *local_c0 = (longlong)&PTR_FUN_14a8e9810;
  local_c0[3] = (longlong)param_3;
  (**(code **)(*plVar4 + 0xe8))(plVar4,&local_c0,param_2);
  if (local_b8 != 0) {
    if (local_c0 == (longlong *)0x0) goto LAB_1434e0f3f;
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1434e0f3f:
  plVar5 = (longlong *)FUN_14143829c();
  lVar13 = plVar5[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar13 = plVar5[0x22];
  }
  local_78 = 0;
  local_80 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    local_78 = (int)sVar6;
  }
  FUN_146b16756(lVar13,&local_70);
  lVar13 = local_70;
  iVar11 = 0;
  if ((longlong)local_68 != 0) {
    local_e8 = (longlong)local_68 << 4;
    lVar9 = 0;
    do {
      local_98 = (void *)0x0;
      uStack_90 = 0;
      local_a0 = &DAT_149dfb77a;
      if (*(int *)(lVar13 + 8 + lVar9) != 0) {
        local_a0 = *(undefined2 **)(lVar13 + lVar9);
      }
      FUN_14619c2be(&local_c0,&local_a0,0);
      plVar5 = local_c0;
      plVar10 = local_c0;
      if (local_b8 == 0) {
        plVar10 = (longlong *)&DAT_149dfb77a;
      }
      plVar10 = (longlong *)(**(code **)(*plVar4 + 0xd0))(plVar4,plVar10,0);
      if (plVar5 != (longlong *)0x0) {
        FUN_1400020a8(plVar5);
      }
      if (((plVar10 != (longlong *)0x0) &&
          (uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar7 & 1) == 0)) &&
         (uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar7 & 8) == 0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,&local_c0);
        plVar5 = local_c0;
        if (*(code **)(*local_c0 + 0x50) != FUN_144828418) {
          plVar5 = (longlong *)(**(code **)(*local_c0 + 0x50))();
        }
        FUN_1447a1fc0(plVar5);
        pcVar2 = *(code **)(*local_c0 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          ppvVar8 = (void **)(local_c0 + 3);
          if (local_c0[5] != 0) {
            ppvVar8 = (void **)(local_c0[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          ppvVar8 = (void **)(local_c0 + 2);
        }
        else {
          ppvVar8 = (void **)(*pcVar2)(local_c0);
        }
        if (&local_98 != ppvVar8) {
          uVar1 = *(uint *)(ppvVar8 + 1);
          pvVar3 = *ppvVar8;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
          if (uVar1 == 0 && uStack_90._4_4_ == 0) {
            uStack_90 = (ulonglong)uVar1;
          }
          else {
            FUN_1446dd670(&local_98,uVar1);
            if (uVar1 != 0) {
              memcpy(local_98,pvVar3,(longlong)(int)uVar1 * 2);
            }
          }
        }
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
      pvVar3 = local_98;
      local_d0 = (void *)0x0;
      lVar14 = (longlong)(int)uStack_90;
      local_c8 = (int)uStack_90;
      if (lVar14 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_1446dd670(&local_d0,uStack_90 & 0xffffffff,0);
        memcpy(local_d0,pvVar3,lVar14 * 2);
      }
      local_e0 = (void *)0x0;
      local_d8 = *(int *)(lVar13 + 8 + lVar9);
      lVar14 = (longlong)local_d8;
      pvVar3 = *(void **)(lVar13 + lVar9);
      if (lVar14 == 0) {
        local_d4 = 0;
      }
      else {
        FUN_1446dd670(&local_e0,local_d8,0);
        memcpy(local_e0,pvVar3,lVar14 * 2);
      }
      FUN_147a91db0(&local_c0,&local_e0);
      iVar11 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
        FUN_147aac6cc(param_3,iVar11);
      }
      lVar14 = *param_3;
      lVar12 = (longlong)iVar11 * 0x20;
      *(undefined8 *)(lVar14 + lVar12) = 0;
      *(longlong **)(lVar14 + lVar12) = local_c0;
      *(int *)(lVar14 + 8 + lVar12) = local_b8;
      *(undefined4 *)(lVar14 + 0xc + lVar12) = uStack_b4;
      *(undefined8 *)(lVar14 + 0x10 + lVar12) = 0;
      *(undefined8 *)(lVar14 + 0x10 + lVar12) = local_b0;
      *(undefined4 *)(lVar14 + 0x18 + lVar12) = (undefined4)local_a8;
      *(undefined4 *)(lVar14 + 0x1c + lVar12) = local_a8._4_4_;
      uStack_b4 = 0;
      local_b8 = 0;
      local_a8 = 0;
      local_b0 = 0;
      local_c0 = (longlong *)0x0;
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
      iVar11 = local_68;
    } while (local_e8 != lVar9);
  }
  FUN_1447a1747(local_70,iVar11);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e131f FUN_1434e131f body=55 status=ok
// SIG undefined FUN_1434e131f(void)

void FUN_1434e131f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8488 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8488 = FUN_14171c317(FUN_1463c762e,uVar1,L"ECustomTimeStepSynchronizationState");
  }
  return;
}



// FUNCTION 1434e1382 FUN_1434e1382 body=251 status=ok
// SIG undefined FUN_1434e1382(void)

void FUN_1434e1382(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(lVar3 + 0x13c);
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),uVar2,8);
  lVar4 = *DAT_14cad85a0;
  lVar5 = DAT_14cad85a0[2];
  uVar1 = *(ushort *)((longlong)DAT_14cad85a0 + 0x7c);
  local_4c = 0xffffffff;
  FUN_147a9215e(local_60,&local_4c,uVar1,uVar2);
  if (uVar1 != 0) {
    puVar7 = (undefined8 *)(lVar5 + 8);
    uVar6 = 0;
    do {
      if ((*(uint *)(local_60[0] + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1) != 0)
      {
        local_70 = 0;
        local_78 = 0;
        local_80 = *puVar7;
        local_68 = (ulonglong)*(uint *)(lVar4 + 4 + uVar6 * 8) + lVar3;
        (**(code **)(puVar7[-1] + 8))(param_1,&local_80);
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar1 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e147e FUN_1434e147e body=248 status=ok
// SIG undefined FUN_1434e147e(void)

void FUN_1434e147e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60 [2];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar5 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),8);
  *(undefined4 *)(lVar2 + 0x13c) = uVar5;
  lVar3 = *DAT_14cad85a0;
  lVar4 = DAT_14cad85a0[2];
  uVar1 = *(ushort *)((longlong)DAT_14cad85a0 + 0x7c);
  local_4c = 0xffffffff;
  FUN_147a9215e(local_60,&local_4c,uVar1,uVar5);
  if (uVar1 != 0) {
    puVar7 = (undefined8 *)(lVar4 + 8);
    uVar6 = 0;
    do {
      if ((*(uint *)(local_60[0] + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1) != 0)
      {
        local_70 = 0;
        local_78 = 0;
        local_80 = *puVar7;
        local_68 = (ulonglong)*(uint *)(lVar3 + 4 + uVar6 * 8) + lVar2;
        (**(code **)(puVar7[-1] + 0x10))(param_1,&local_80);
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar1 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e1577 FUN_1434e1577 body=55 status=ok
// SIG undefined FUN_1434e1577(void)

void FUN_1434e1577(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8678 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8678 = FUN_14171c317(FUN_1463c791e,uVar1,L"EVectorQuantization");
  }
  return;
}



// FUNCTION 1434e15ae FUN_1434e15ae body=55 status=ok
// SIG undefined FUN_1434e15ae(void)

void FUN_1434e15ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8690 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8690 = FUN_14171c317(FUN_1463c794d,uVar1,L"ERotatorQuantization");
  }
  return;
}



// FUNCTION 1434e15e5 FUN_1434e15e5 body=69 status=ok
// SIG undefined FUN_1434e15e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e15e5(void)

{
  _DAT_14cad86f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e1627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad86f8,1);
  return;
}



// FUNCTION 1434e162a FUN_1434e162a body=122 status=ok
// SIG undefined FUN_1434e162a(void)

void FUN_1434e162a(double *param_1,double *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  if (0 < DAT_14cad86e8) {
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    if (((*param_3 != (int)DAT_14c9a5298) || (iVar3 != DAT_14c9a5298._4_4_)) ||
       (iVar4 != DAT_14c9a52a0)) {
      dVar1 = param_2[2];
      dVar2 = param_2[1];
      *param_1 = *param_2 - (double)*param_3;
      param_1[1] = dVar2 - (double)iVar3;
      param_1[2] = dVar1 - (double)iVar4;
      return;
    }
  }
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 1434e16a4 FUN_1434e16a4 body=92 status=ok
// SIG undefined FUN_1434e16a4(void)

undefined8 * FUN_1434e16a4(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (DAT_14cad86e8 < 1)) {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_3);
    }
    FUN_1434e162a(param_1,param_2,lVar2 + 0x710);
  }
  return param_1;
}



// FUNCTION 1434e1700 FUN_1434e1700 body=164 status=ok
// SIG undefined FUN_1434e1700(void)

void FUN_1434e1700(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e17a5 FUN_1434e17a5 body=55 status=ok
// SIG undefined FUN_1434e17a5(void)

void FUN_1434e17a5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad89a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad89a0 = FUN_14171c317(FUN_1463c7cf4,uVar1,L"ETimecodeProviderSynchronizationState");
  }
  return;
}



// FUNCTION 1434e17dc FUN_1434e17dc body=1305 status=ok
// SIG undefined FUN_1434e17dc(void)

void FUN_1434e17dc(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  float param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  longlong local_288 [6];
  undefined8 local_258;
  undefined8 uStack_250;
  byte local_240;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_290 = (double)param_5;
  local_298 = 20.0;
  uVar3 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_2a8 = (longlong *)0x0;
  dStack_2a0 = 0.0;
  local_2c8 = &DAT_149e1e2f8;
  FUN_140114bb6(local_288,&local_2a8,&DAT_14c844840,uVar3);
  local_1b8 = 0x3ff0000000000000;
  local_1b0 = 0x3ff0000000000000;
  local_1f0 = 0x3ff0000000000000;
  local_1e8 = 0x3ff0000000000000;
  local_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0x3f800000;
  local_240 = local_240 | 2;
  local_2c0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar13 = *(longlong **)(param_1 + 0x40);
    plVar14 = plVar13 + (longlong)*(int *)(param_1 + 0x48) * 2;
    do {
      plVar8 = local_80;
      plVar4 = (longlong *)*plVar13;
      plVar5 = (longlong *)plVar13[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar4;
      if (local_80 != plVar6) {
        local_80 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      dVar7 = local_290;
      local_78 = (undefined4)plVar4[1];
      local_258 = plVar4[2];
      uStack_250 = plVar4[3];
      local_2a8 = (longlong *)(local_298 + (double)plVar4[4]);
      dStack_2a0 = (double)plVar4[5] + local_290;
      (**(code **)(local_288[0] + 0x10))(local_288,param_3,&local_2a8);
      if (*(int *)(param_3 + 0xac) == 1) {
        FUN_14376e4da(param_3,0);
      }
      local_290 = dVar7 + 20.0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar14);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  lVar11 = local_2c0;
  plVar13 = DAT_14c844840;
  local_2a8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  dStack_2a0 = (double)CONCAT44(dStack_2a0._4_4_,DAT_14c844848);
  local_2b8 = 0x3f800000;
  uStack_2b4 = 0x3f800000;
  uStack_2b0 = 0x3f800000;
  uStack_2ac = 0x3f800000;
  lVar10 = (longlong)*(int *)(lVar11 + 0x38);
  if (lVar10 != 0) {
    puVar12 = *(uint **)(lVar11 + 0x30);
    lVar10 = lVar10 * 0x50;
    do {
      if ((((((((*(longlong *)(puVar12 + 2) != 0) && (puVar12[1] != 0)) &&
              (uVar2 = *puVar12, -1 < (int)uVar2)) &&
             (((int)uVar2 < DAT_14c9647dc &&
              (plVar13 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
              plVar13 != (longlong *)0x0)))) &&
            ((*(uint *)(plVar13 + 2) == puVar12[1] &&
             (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))))) &&
           (lVar11 = FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),*(longlong *)(puVar12 + 2),1),
           lVar11 != 0)) || (*(longlong *)(puVar12 + 4) != 0)) &&
         (cVar9 = FUN_147a95d72(puVar12,&local_2a8,&local_2b8), plVar13 = local_80, cVar9 != '\0'))
      {
        if (local_80 != local_2a8) {
          local_80 = local_2a8;
          if (local_2a8 != (longlong *)0x0) {
            (**(code **)(*local_2a8 + 8))();
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        local_78 = dStack_2a0._0_4_;
        local_258 = CONCAT44(uStack_2b4,local_2b8);
        uStack_250 = CONCAT44(uStack_2ac,uStack_2b0);
        (**(code **)(local_288[0] + 0x10))(local_288,param_3,&local_298);
        if (*(int *)(param_3 + 0xac) == 1) {
          FUN_14376e4da(param_3,0);
        }
        local_290 = local_290 + 20.0;
      }
      puVar12 = puVar12 + 0x14;
      lVar10 = lVar10 + -0x50;
      plVar13 = local_2a8;
    } while (lVar10 != 0);
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  FUN_140b2399e(local_288);
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e1cf6 FUN_1434e1cf6 body=55 status=ok
// SIG undefined FUN_1434e1cf6(void)

void FUN_1434e1cf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8a68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8a68 = FUN_14171c317(FUN_1463c8124,uVar1,L"EFontCacheType");
  }
  return;
}



// FUNCTION 1434e1d2e FUN_1434e1d2e body=199 status=ok
// SIG undefined FUN_1434e1d2e(void)

void FUN_1434e1d2e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar1 + 0x28 + lVar9);
      if (lVar6 == 0) {
LAB_1434e1d71:
        lVar6 = lVar1 + 8 + lVar9;
        cVar3 = FUN_1462794cc(lVar6);
        if (cVar3 == '\0') {
          plVar4 = (longlong *)FUN_14054d1d4();
          puVar5 = (undefined8 *)FUN_146935588(lVar6);
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(puVar5 + 1) != 0) {
            puVar8 = (undefined2 *)*puVar5;
          }
          lVar6 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar8);
          if (0 < lVar6) {
            FUN_14484255c(*param_1,lVar6);
          }
        }
      }
      else {
        lVar7 = FUN_145b0e248();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) goto LAB_1434e1d71;
      }
      lVar9 = lVar9 + 0x30;
    } while ((longlong)(int)lVar2 * 0x30 != lVar9);
  }
  return;
}



// FUNCTION 1434e1df6 FUN_1434e1df6 body=1249 status=ok
// SIG undefined FUN_1434e1df6(void)

void FUN_1434e1df6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_238 [40];
  longlong local_210;
  int local_208;
  int local_204;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  int local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined **local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined **local_1c0;
  undefined8 uStack_1b8;
  undefined ***local_1b0;
  undefined ****local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_1a8 = &local_1b0;
  local_1c0 = &PTR_FUN_149e37810;
  local_1b0 = &local_1c0;
  uStack_1b8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if (param_2[0xd] == 0) {
    bVar15 = false;
  }
  else {
    bVar15 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (0xb < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    if (puVar4[1] < *puVar4 + 4) {
      local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,(uint)bVar15);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c0,4);
      if (1 < (uint)local_1c0) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  lVar11 = param_1;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
LAB_1434e1f4d:
    lVar13 = lVar11;
    lVar11 = lVar13;
    if (*(longlong *)(lVar13 + 0x20) != 0) goto code_r0x0001434e1f5c;
    goto LAB_1434e1f6d;
  }
  uVar8 = 1;
  if ((*(char *)(param_1 + 0x41) != '\x02') && (param_2[0xd] != 0)) {
    uVar8 = (uint)(*(longlong *)(param_2[0xd] + 0x10) == 0);
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,uVar8);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1c0,4);
    uVar8 = (uint)local_1c0;
    if (1 < (uint)local_1c0) {
      FUN_14572541c(param_2);
      uVar8 = (uint)local_1c0;
    }
  }
  else {
    uVar8 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar8 == 0) goto LAB_1434e2202;
LAB_1434e2183:
  FUN_147a984fc(*(undefined8 *)(param_1 + 0x58),param_2);
LAB_1434e2202:
  if ((local_30 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001434e1f5c:
  lVar11 = *(longlong *)(lVar13 + 0x20);
  if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) goto LAB_1434e1f4d;
  lVar11 = FUN_142840154(lVar13);
LAB_1434e1f6d:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar13 + 0x20);
    goto LAB_1434e1f4d;
  }
  local_1d0 = *(undefined ***)(lVar11 + 0x18);
  FUN_1400021e4(&local_1d0,&local_1c0);
  FUN_1412251f4(&local_1d0,&local_1c0);
  if (local_1c0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_1c0 = local_1d0;
  uStack_1b8 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
  FUN_140056680(&local_1e0,L".uasset");
  FUN_141509698(&local_1d0,&local_1c0,&local_1e0);
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  local_1e0 = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(&local_1e0,&local_1f0);
  FUN_140bee914(&local_200);
  iVar7 = local_1e8 + -1;
  if (local_1e8 == 0) {
    iVar7 = 0;
  }
  iVar6 = (int)local_1f8;
  iVar9 = iVar7 + 1 + (uint)((int)local_1f8 == 0);
  local_1e0 = local_200;
  local_200 = 0;
  iVar10 = local_1f8._4_4_;
  local_1d8 = local_1f8;
  local_1f8 = 0;
  iVar14 = iVar9 + iVar6;
  if (iVar14 < iVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar9);
  }
  if (iVar14 < 0) {
LAB_1434e22ae:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar10 < iVar14) {
    FUN_1446f8c06(&local_1e0);
  }
  FUN_1401aebe8(&local_1e0,local_1f0,iVar7);
  iVar7 = (int)local_1d8;
  iVar10 = ((int)local_1d8 == 0) + 6;
  local_210 = local_1e0;
  local_1e0 = 0;
  local_208 = (int)local_1d8;
  iVar6 = local_1d8._4_4_;
  local_204 = local_1d8._4_4_;
  local_1d8 = 0;
  iVar14 = iVar10 + iVar7;
  if (iVar14 < iVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar14 < 0) goto LAB_1434e22ae;
  if (iVar6 < iVar14) {
    FUN_1446f8c06(&local_210);
  }
  FUN_1400020e8(&local_210,L".ufont",6);
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  if (local_1d0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_1c0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *)(param_1 + 0x30) == &local_210) {
    if (local_210 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x30) = local_210;
    local_210 = 0;
    *(int *)(param_1 + 0x38) = local_208;
    *(int *)(param_1 + 0x3c) = local_204;
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc28);
  if (iVar7 < 0xe) goto LAB_1434e2202;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_1c0 = (undefined **)((ulonglong)local_1c0 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1c0,4);
    uVar8 = (uint)local_1c0;
    if (1 < (uint)local_1c0) {
      FUN_14572541c(param_2);
      uVar8 = (uint)local_1c0;
    }
  }
  else {
    uVar8 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar8 == 0) goto LAB_1434e2202;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 8)) {
    puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar12[1] = &DAT_100000001;
    *puVar12 = &PTR_FUN_149eda5e0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    plVar5 = *(longlong **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = puVar12 + 2;
    *(undefined8 **)(param_1 + 0x60) = puVar12;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  goto LAB_1434e2183;
}



// FUNCTION 1434e22d8 FUN_1434e22d8 body=69 status=ok
// SIG undefined FUN_1434e22d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e22d8(void)

{
  _DAT_14cad8ad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e231a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8ae0,1);
  return;
}



// FUNCTION 1434e231d FUN_1434e231d body=69 status=ok
// SIG undefined FUN_1434e231d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e231d(void)

{
  _DAT_14cad8af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e235f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8af8,1);
  return;
}



// FUNCTION 1434e2362 FUN_1434e2362 body=150 status=ok
// SIG undefined FUN_1434e2362(void)

ulonglong FUN_1434e2362(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14692eeb2();
  FUN_14099d55c(DAT_14cad8ae8,local_28,0);
  iVar1 = FUN_1401e9588(lVar2,local_28,0);
  if (iVar1 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = uVar3 & 0xffffffff;
  if (uVar3 == 0xffffffffffffffff) {
    uVar4 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e240e FUN_1434e240e body=69 status=ok
// SIG undefined FUN_1434e240e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e240e(void)

{
  _DAT_14cad8c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e2450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8c28,1);
  return;
}



// FUNCTION 1434e2453 FUN_1434e2453 body=69 status=ok
// SIG undefined FUN_1434e2453(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e2453(void)

{
  _DAT_14cad8c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e2495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8c38,1);
  return;
}



// FUNCTION 1434e2498 FUN_1434e2498 body=69 status=ok
// SIG undefined FUN_1434e2498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e2498(void)

{
  _DAT_14cad8c48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e24da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8c50,1);
  return;
}



// FUNCTION 1434e24dd FUN_1434e24dd body=444 status=ok
// SIG undefined FUN_1434e24dd(void)

void FUN_1434e24dd(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  wchar_t *_Str;
  longlong lVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_1b8 [12];
  undefined8 auStack_1ac [2];
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  undefined4 local_190;
  undefined1 local_18c [4];
  undefined1 local_188 [360];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((int)param_1[1] < 1) {
    fVar5 = 10.0;
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar4 = _wtof(_Str);
    fVar5 = (float)dVar4;
    if (1000.0 <= fVar5) {
      fVar5 = 1000.0;
    }
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
  }
  lVar3 = 0x24;
  do {
    *(undefined8 *)((longlong)auStack_1ac + lVar3) = 0;
    *(undefined8 *)((longlong)auStack_1ac + lVar3 + 8) = 0xbf800000bf800000;
    *(undefined4 *)((longlong)&uStack_19c + lVar3) = 0xbf800000;
    *(undefined8 *)(local_198 + lVar3 + 4) = 0;
    *(undefined8 *)(local_18c + lVar3) = 0x3f80000000000000;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x74);
  lVar3 = 0x74;
  do {
    *(undefined8 *)((longlong)auStack_1ac + lVar3) = 0;
    *(undefined8 *)((longlong)auStack_1ac + lVar3 + 8) = 0xbf800000bf800000;
    *(undefined4 *)((longlong)&uStack_19c + lVar3) = 0xbf800000;
    *(undefined8 *)(local_198 + lVar3 + 4) = 0;
    *(undefined8 *)(local_18c + lVar3) = 0x3f80000000000000;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x18c);
  local_198 = (undefined1  [8])0x149ecad38;
  local_190 = 0xe;
  local_18c[0] = 0;
  uVar1 = FUN_14001a6c0(local_198,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,local_198,1);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_188,1,fVar5);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e269a FUN_1434e269a body=69 status=ok
// SIG undefined FUN_1434e269a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e269a(void)

{
  _DAT_14cad8c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e26dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad8c60,1);
  return;
}



// FUNCTION 1434e26e0 FUN_1434e26e0 body=1751 status=ok
// SIG undefined FUN_1434e26e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e26e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  longlong local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  int local_5c;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  uVar10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar17 = *(longlong *)(param_1 + 0x1380);
  local_48 = uVar10;
  if (lVar17 == 0) {
    uVar10 = FUN_145aac6e4(param_1,param_2);
    lVar17 = *(longlong *)(param_1 + 0x1380);
  }
  plVar3 = *(longlong **)(param_1 + 5000);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar13 = *(longlong **)(param_1 + 0x1368);
  if (plVar13 == (longlong *)0x0) {
    local_94 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
    plVar13 = (longlong *)0x0;
    local_90 = 0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar13 + 1);
    local_90 = 0;
    do {
      uVar9 = (uint)uVar10;
      if (uVar9 == 0) {
        local_94 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        plVar13 = (longlong *)0x0;
        goto LAB_1434e278a;
      }
      LOCK();
      uVar2 = *(uint *)(plVar13 + 1);
      if (uVar9 == uVar2) {
        *(uint *)(plVar13 + 1) = uVar9 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar2;
      }
      UNLOCK();
    } while (uVar9 != uVar2);
    local_90 = *(longlong *)(param_1 + 0x1360);
    local_94 = 0;
  }
LAB_1434e278a:
  local_58 = (code *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar7 = local_58;
  local_50 = 3;
  *(undefined ***)local_58 = &PTR_LAB_149f02f40;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  *(longlong *)(local_58 + 0x10) = lVar12;
  *(undefined ***)local_58 = &PTR_FUN_14a8e9a80;
  *(undefined8 *)(local_58 + 0x18) = 0;
  iVar14 = 0;
  if (param_1 != 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 0x18) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar14 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar14 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar14 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar15;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar14 = iVar15;
      }
    }
  }
  *(int *)(pcVar7 + 0x1c) = iVar14;
  *(code **)(pcVar7 + 0x20) = FUN_145fde152;
  *(undefined4 *)(pcVar7 + 0x28) = 0;
  FUN_145ae452c(local_90 + 0x578,&local_58);
  if (local_50 == 0) {
LAB_1434e28ac:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1434e28ac;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar8 = FUN_141369f9a(&DAT_14c846b20,L"SAVEWINPOS=",&local_5c);
  if ((cVar8 != '\0') && (0 < local_5c)) {
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    pcVar7 = local_58;
    local_50 = 3;
    *(undefined ***)local_58 = &PTR_LAB_149f02f40;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    *(longlong *)(local_58 + 0x10) = lVar12;
    *(undefined ***)local_58 = &PTR_FUN_14a8e9a80;
    *(undefined8 *)(local_58 + 0x18) = 0;
    iVar14 = 0;
    if (param_1 != 0) {
      uVar9 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 0x18) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar14 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar14 = *(int *)(lVar16 + 0x10);
        bVar18 = iVar14 == 0;
        if (bVar18) {
          *(int *)(lVar16 + 0x10) = iVar15;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar14 = iVar15;
        }
      }
    }
    *(int *)(pcVar7 + 0x1c) = iVar14;
    *(code **)(pcVar7 + 0x20) = FUN_147a988ba;
    *(undefined4 *)(pcVar7 + 0x28) = 0;
    FUN_145ae452c(local_90 + 0x5a0,&local_58);
    if (local_50 != 0) {
      if (local_58 == (code *)0x0) goto LAB_1434e2a29;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434e2a29:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_70 = lVar17;
  local_68 = plVar3;
  lVar16 = (**(code **)(*param_2 + 0x2b8))(param_2,&local_70);
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a5449d0;
  plVar11[2] = lVar16;
  *(longlong *)(param_1 + 0x1370) = lVar16;
  plVar4 = *(longlong **)(param_1 + 0x1378);
  if (plVar11 == plVar4) {
    if (plVar11 == (longlong *)0x0) goto LAB_1434e2ae2;
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1434e2ae2;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar14 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x1378) = plVar11;
    if (plVar4 == (longlong *)0x0) goto LAB_1434e2ae2;
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_1434e2ae2;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar14 = *piVar1;
    UNLOCK();
    plVar11 = plVar4;
  }
  if (iVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_1434e2ae2:
  lVar16 = *(longlong *)(param_1 + 0x1370) + 8;
  if (*(longlong *)(param_1 + 0x1370) == 0) {
    lVar16 = 0;
  }
  param_2[0x1f] = lVar16;
  lVar16 = *(longlong *)(param_1 + 0x1370);
  plVar4 = *(longlong **)(param_1 + 0x1378);
  if (plVar4 == (longlong *)0x0) {
    local_80 = lVar16 + 200;
    if (lVar16 == 0) {
      local_80 = lVar16;
    }
    local_78 = (longlong *)0x0;
    FUN_1456f2bd8(lVar17);
    cVar8 = (char)local_94;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_80 = lVar16 + 200;
    if (lVar16 == 0) {
      local_80 = lVar16;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_78 = plVar4;
    FUN_1456f2bd8(lVar17);
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    cVar8 = (char)local_94;
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1370);
  (**(code **)(**(longlong **)(param_1 + 0xc20) + 0x318))(*(longlong **)(param_1 + 0xc20),uVar5);
  lVar17 = *(longlong *)(param_1 + 0xc20);
  plVar4 = *(longlong **)(lVar17 + 0x138);
  if (plVar4 == (longlong *)0x0) {
LAB_1434e2bba:
    (*(code *)*_DAT_00000000)(0,uVar5);
  }
  else {
    iVar14 = (int)plVar4[1];
    do {
      if (iVar14 == 0) goto LAB_1434e2bba;
      LOCK();
      iVar15 = (int)plVar4[1];
      bVar18 = iVar14 == iVar15;
      if (bVar18) {
        *(int *)(plVar4 + 1) = iVar14 + 1;
        iVar15 = iVar14;
      }
      iVar14 = iVar15;
      UNLOCK();
    } while (!bVar18);
    puVar6 = *(undefined8 **)(lVar17 + 0x130);
    (**(code **)*puVar6)(puVar6,uVar5);
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_58 = FUN_1461b1ff6;
  local_50 = 0;
  FUN_1463c845a(local_88,param_1);
  if (cVar8 == '\0') {
    LOCK();
    plVar4 = plVar13 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar3 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e2db8 thunk_FUN_16260e056 body=5 status=ok
// SIG undefined thunk_FUN_16260e056(void)

void thunk_FUN_16260e056(void)

{
  FUN_166d9e04d();
  return;
}



// FUNCTION 1434e4d8a FUN_1434e4d8a body=721 status=ok
// SIG undefined FUN_1434e4d8a(void)

void FUN_1434e4d8a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x1368);
  if (plVar2 == (longlong *)0x0) goto LAB_1434e4f83;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_1434e4f83;
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar6 == iVar5;
    if (bVar10) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar10);
  lVar3 = *(longlong *)(param_1 + 0x1360);
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(lVar3 + 0x470);
    if (lVar7 == 0) {
      lVar8 = *(longlong *)(lVar3 + 0x208);
      plVar9 = *(longlong **)(lVar3 + 0x210);
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x10);
      plVar9 = *(longlong **)(lVar7 + 0x18);
    }
    if (plVar9 == (longlong *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x1380);
      if ((lVar7 == 0) || (lVar7 != lVar8)) goto LAB_1434e4e4c;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      lVar7 = *(longlong *)(param_1 + 0x1380);
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (lVar7 != lVar8 || lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x1380);
LAB_1434e4e4c:
        if (lVar7 == 0) {
          FUN_1434e26e0(param_1,*(undefined8 *)(param_1 + 0xc20));
          lVar7 = *(longlong *)(param_1 + 0x1380);
        }
        if (DAT_14c98e618 != (longlong *)0x0 && lVar7 != 0) {
          plVar9 = *(longlong **)(param_1 + 5000);
          local_50 = lVar7;
          if (plVar9 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            FUN_140763be6(lVar3);
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            local_48 = plVar9;
            FUN_140763be6(lVar3);
            LOCK();
            plVar4 = plVar9 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
          fVar11 = (float)(**(code **)(*DAT_14c98e618 + 0x58))();
          plVar9 = *(longlong **)(lVar3 + 0x510);
          plVar4 = *(longlong **)(lVar3 + 0x518);
          if (plVar4 == (longlong *)0x0) {
            fVar12 = (float)(**(code **)(*plVar9 + 0xf8))();
            FUN_1405d299c(lVar3,fVar11 * fVar12);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            fVar12 = (float)(**(code **)(*plVar9 + 0xf8))();
            FUN_1405d299c(lVar3,fVar11 * fVar12);
            LOCK();
            plVar9 = plVar4 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        plVar9 = *(longlong **)(param_1 + 0x1370);
        if ((plVar9 != (longlong *)0x0) && (DAT_14c98e618 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 8))(plVar9,DAT_14cb0d27c,DAT_14cb0d280,DAT_14cb0d284);
          plVar9 = DAT_14c98e618;
          lVar3 = *(longlong *)(param_1 + 0x1380);
          if (lVar3 != 0) {
            local_58 = *(longlong *)(param_1 + 5000);
            if (local_58 != 0) {
              LOCK();
              *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
              UNLOCK();
            }
            local_60 = lVar3;
            FUN_14581f724(plVar9,&local_60);
          }
          FUN_14627ed32(DAT_14c98e618,2);
        }
      }
    }
  }
  LOCK();
  plVar9 = plVar2 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_1434e4f83:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e505c FUN_1434e505c body=72 status=ok
// SIG undefined FUN_1434e505c(void)

void FUN_1434e505c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0xc20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc20) + 0x350))();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 0xf8);
    if (lVar1 != 0) {
      FUN_14374b164(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1434e50c2 FUN_1434e50c2 body=298 status=ok
// SIG undefined FUN_1434e50c2(void)

void FUN_1434e50c2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 == (longlong *)0x0) {
    FUN_145876474(param_1);
    plVar3 = (longlong *)param_1[0x59];
  }
  (**(code **)(*plVar3 + 0x2e8))();
  (**(code **)(*param_1 + 0x4e8))(param_1);
  iVar2 = (int)param_1[0x22a];
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar4 * 8) + 0x360);
      if (lVar1 != 0) {
        *(byte *)(lVar1 + 0x155) = *(byte *)(lVar1 + 0x155) | 0x20;
        FUN_1409f3758(&DAT_14cb10ae8,lVar1);
        (**(code **)(*param_1 + 0x500))(param_1,lVar1,0);
        FUN_14375e010(param_1,lVar1);
        *(byte *)(lVar1 + 0x153) = *(byte *)(lVar1 + 0x153) & 0x7f;
        if ((*(byte *)(lVar1 + 0x156) & 0x40) == 0) {
          *(byte *)(lVar1 + 0x156) = *(byte *)(lVar1 + 0x156) | 0x40;
          FUN_1414451e4(lVar1);
        }
        FUN_143786ce4(lVar1,2);
        FUN_1417f9a7e(lVar1,4);
        if (*(longlong **)(lVar1 + 0x1f0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar1 + 0x1f0) + 0x2c8))();
        }
        FUN_140e511ae(lVar1,1,1,0);
        iVar2 = (int)param_1[0x22a];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_145eec82a(param_1);
  return;
}



// FUNCTION 1434e51ec FUN_1434e51ec body=59 status=ok
// SIG undefined FUN_1434e51ec(void)

void FUN_1434e51ec(longlong param_1)

{
  longlong lVar1;
  
  FUN_145bf72f8();
  lVar1 = *(longlong *)(param_1 + 0x13a0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x13a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001434e521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 1434e5228 FUN_1434e5228 body=5777 status=ok
// SIG undefined FUN_1434e5228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e5228(longlong *param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  wchar_t *_Str;
  size_t sVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined ***pppuVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_108 [32];
  code **local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  int local_a0;
  int local_9c;
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  ulonglong local_60;
  
  fVar33 = (float)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (fVar33 < 0.0) {
    FUN_140033559(".\\Runtime/Engine/Private/GameEngine.cpp",0x684,
                  L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
                 );
  }
  if (DAT_14c872bf0 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar11 = DAT_14c8442b8;
    if (DAT_14c872bf0 == 1) {
      if (DAT_14c872bf1 != '\x01') goto LAB_1434e52da;
      bVar11 = DAT_14c8442b8 & 1;
    }
    if (bVar11 == 0) {
      FUN_1401f88f4(param_1);
    }
  }
LAB_1434e52da:
  if ((DAT_14c86a9f0 == '\x01') && (param_1[0x184] == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar11 = DAT_14c8442b8;
    if (DAT_14c872bf0 == 1) {
      if (DAT_14c872bf1 != '\x01') goto LAB_1434e52f1;
      bVar11 = DAT_14c8442b8 & 1;
    }
    if (bVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
    }
  }
LAB_1434e52f1:
  plVar16 = (longlong *)param_1[0x184];
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x328))(plVar16,fVar33);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cada2b0) && (FUN_144b3d300(&DAT_14cada2b0), DAT_14cada2b0 == -1)) {
    FUN_1446f470e(&DAT_14cada2a8,L"Media",1);
    _Init_thread_footer(&DAT_14cada2b0);
  }
  uVar18 = DAT_14cada2a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar16 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar18,&local_a8,0);
  if (plVar16 != (longlong *)0x0) {
    if ((param_3 == 0) && (0 < (longlong)(int)param_1[0x22a])) {
      lVar24 = 0;
      do {
        lVar25 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar24 * 8) + 0x360);
        if (((lVar25 != 0) && ((*(byte *)(lVar25 + 0x156) & 0x10) != 0)) &&
           ((longlong)*(int *)(lVar25 + 0x5a8) != 0)) {
          lVar26 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar25 + 0x5a0) + 8 + lVar26) != 0) &&
               (*(longlong *)(*(longlong *)(lVar25 + 0x5a0) + lVar26) != 0)) goto LAB_1434e53fa;
            lVar26 = lVar26 + 0x10;
          } while ((longlong)*(int *)(lVar25 + 0x5a8) * 0x10 != lVar26);
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != (int)param_1[0x22a]);
    }
    (**(code **)(*plVar16 + 0xf0))(plVar16);
  }
LAB_1434e53fa:
  if (DAT_14cad5900 == 0) {
    FUN_14283d134(param_2,DAT_14cad5904 != 0,DAT_14c76149c / 1000.0);
  }
  FUN_142777540(DAT_14c872ce0,fVar33);
  if ((longlong)(int)param_1[0x22a] < 1) {
    local_e8 = (code **)CONCAT44(local_e8._4_4_,9);
    uVar31 = 0;
    FUN_14373e0b4(0,2,0,fVar33);
  }
  else {
    local_d8 = 0;
    lVar24 = 0;
    do {
      lVar25 = *(longlong *)(param_1[0x229] + lVar24 * 8);
      if (*(longlong *)(lVar25 + 0x360) == DAT_14cb10918) {
        local_d8 = *(longlong *)(lVar25 + 0x140);
        break;
      }
      lVar24 = lVar24 + 1;
    } while ((int)param_1[0x22a] != lVar24);
    lVar24 = 0;
    uVar31 = 0;
    local_e0 = plVar16;
    do {
      pcVar5 = *(char **)(param_1[0x229] + lVar24 * 8);
      lVar25 = *(longlong *)(pcVar5 + 0x360);
      if ((lVar25 != 0) && ((*(byte *)(lVar25 + 0x156) & 0x10) != 0)) {
        DAT_14cb10918 = lVar25;
        (**(code **)(*param_1 + 0x4c0))(param_1,pcVar5,fVar33);
        if (param_3 == 0) {
          FUN_14355de42(*(undefined8 *)(pcVar5 + 0x360),2,fVar33);
        }
        if ((DAT_14c872bf0 == 0) &&
           (cVar10 = FUN_144b2c3bc(*(undefined8 *)(pcVar5 + 0x360)), cVar10 != '\0')) {
          FUN_143499830(*(undefined8 *)(pcVar5 + 0x360));
          local_e8 = (code **)CONCAT71(local_e8._1_7_,1);
          FUN_140832fc8(*(undefined8 *)(pcVar5 + 0x360),0,0,0);
        }
        lVar25 = *(longlong *)(pcVar5 + 0x360);
        if ((*(byte *)(lVar25 + 0x153) & 1) != 0) {
          *(byte *)(lVar25 + 0x153) = *(byte *)(lVar25 + 0x153) & 0xfe;
          local_d0 = uVar31;
          _Str = (wchar_t *)FUN_14045d4ce(pcVar5 + 0x160,L"causeevent=");
          lVar25 = *(longlong *)(pcVar5 + 0x2a8);
          if ((lVar25 != 0) && (0 < *(int *)(lVar25 + 0x40))) {
            plVar16 = (longlong *)**(longlong **)(lVar25 + 0x38);
            if ((DAT_14c950c29 == '\x01') && (plVar16 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar16);
            }
            if ((_Str != (wchar_t *)0x0) && (plVar16 != (longlong *)0x0)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c872ef8) &&
                 (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                FUN_1459825b0(&DAT_14c872ee0);
                atexit(FUN_1427868a5);
                _Init_thread_footer(&DAT_14c872ef8);
              }
              FUN_1400b22c2(&local_b8);
              sVar17 = wcslen(_Str);
              iVar13 = (int)local_b0;
              iVar9 = local_b0._4_4_;
              if ((int)sVar17 == 0) {
                local_a8 = local_b8;
                local_b8 = (code *)0x0;
                local_a0 = (int)local_b0;
                local_9c = local_b0._4_4_;
                local_b0 = 0;
              }
              else {
                iVar12 = (int)sVar17 + (uint)((int)local_b0 == 0);
                local_a8 = local_b8;
                local_b8 = (code *)0x0;
                local_a0 = (int)local_b0;
                local_9c = local_b0._4_4_;
                local_b0 = 0;
                iVar23 = iVar12 + iVar13;
                if (iVar23 < iVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4((longlong)iVar12);
                }
                if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar23);
                }
                if (iVar9 < iVar23) {
                  FUN_1446f8c06(&local_a8);
                }
                FUN_1400020e8(&local_a8,_Str,sVar17 & 0xffffffff);
              }
              uVar18 = (**(code **)(*plVar16 + 0x180))(plVar16);
              (**(code **)(plVar16[5] + 8))(plVar16 + 5,uVar18);
              if (local_a8 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_b8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          *(byte *)(*(longlong *)(pcVar5 + 0x360) + 0x153) =
               *(byte *)(*(longlong *)(pcVar5 + 0x360) + 0x153) | 2;
          lVar25 = *(longlong *)(pcVar5 + 0x360);
          uVar31 = local_d0;
        }
        FUN_1417f6c66(param_1,lVar25);
        if ((*(byte *)(*(longlong *)(pcVar5 + 0x360) + 0x154) & 0x40) != 0) {
          FUN_14051e3d2();
          *(byte *)(*(longlong *)(pcVar5 + 0x360) + 0x154) =
               *(byte *)(*(longlong *)(pcVar5 + 0x360) + 0x154) & 0xbf;
        }
        if ((DAT_14c8687b8 != '\0') && (DAT_14cad5900 == 0)) {
          local_98 = (undefined ***)((ulonglong)local_98 & 0xffffffffffffff00);
          FUN_141690028(*(undefined8 *)(pcVar5 + 0x360),&local_a8);
        }
        FUN_14375f0ac(param_1);
        if (*pcVar5 != '\x04') {
          lVar25 = *(longlong *)(pcVar5 + 0x360);
          if (((((*(longlong *)(lVar25 + 0x30) != 0) &&
                (lVar26 = *(longlong *)(*(longlong *)(lVar25 + 0x30) + 0x2b0), lVar26 != 0)) &&
               (*(longlong *)(lVar26 + 0x588) != 0)) &&
              (*(double *)(lVar25 + 0x708) <= *(double *)(lVar25 + 0x6d0))) ||
             (((*(byte *)(lVar25 + 0x154) & 0x40) != 0 &&
              (iVar13 = FUN_14490d72a(lVar25), iVar13 == 3)))) {
            bVar11 = 1;
          }
          else {
            if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
              lVar26 = 0;
              do {
                lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar26);
                if (*(longlong *)(lVar6 + 0x360) == lVar25) {
                  if ((lVar6 != 0) && (bVar11 = 1, (*(byte *)(lVar6 + 0x278) & 1) != 0))
                  goto LAB_1434e57fb;
                  break;
                }
                lVar26 = lVar26 + 8;
              } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar26);
            }
            cVar10 = FUN_144a80e00(lVar25);
            if (cVar10 == '\0') {
              bVar11 = 0;
            }
            else {
              bVar11 = *(byte *)(lVar25 + 0x155) >> 7;
            }
          }
LAB_1434e57fb:
          uVar31 = CONCAT71((int7)(uVar31 >> 8),(byte)uVar31 | bVar11 ^ 1);
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_1[0x22a]);
    local_e8 = (code **)CONCAT44(local_e8._4_4_,9);
    FUN_14373e0b4(0,2,0,fVar33);
    plVar16 = local_e0;
    if (local_d8 != 0) {
      lVar24 = FUN_143763dbe(param_1);
      DAT_14cb10918 = *(longlong *)(lVar24 + 0x360);
      plVar16 = local_e0;
    }
  }
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0xe0))(plVar16);
  }
  plVar16 = (longlong *)param_1[0x184];
  if (plVar16 != (longlong *)0x0 && param_3 == 0) {
    (**(code **)(*plVar16 + 0x310))(plVar16,fVar33);
  }
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 0x10))();
  }
  if (DAT_14cada2b4 == '\0') {
    DAT_14cada2b4 = '\x01';
    FUN_142855ca4();
    if (((param_1[0x26c] != 0) && (plVar16 = (longlong *)param_1[0x26d], plVar16 != (longlong *)0x0)
        ) && (0 < (int)plVar16[1])) {
      if (*(char *)(DAT_14c98e618 + 0x1a2) == '\0') {
        iVar13 = (int)plVar16[1];
        do {
          if (iVar13 == 0) {
            thunk_FUN_1616686ea(0);
            goto LAB_1434e5a7b;
          }
          LOCK();
          iVar9 = (int)plVar16[1];
          bVar32 = iVar13 == iVar9;
          if (bVar32) {
            *(int *)(plVar16 + 1) = iVar13 + 1;
            iVar9 = iVar13;
          }
          iVar13 = iVar9;
          UNLOCK();
        } while (!bVar32);
        thunk_FUN_1616686ea(param_1[0x26c]);
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
LAB_1434e5a7b:
      lVar24 = DAT_14c98e618;
      local_c8 = param_1[0x270];
      local_c0 = param_1[0x271];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      FUN_14581f724(lVar24,&local_c8);
    }
  }
  bVar11 = (**(code **)(*param_1 + 800))(param_1);
  param_3 = param_3 | DAT_14c872bf0;
  if ((DAT_14c867b48 == (longlong *)0x0 || DAT_14c867b50 == 0) ||
     (cVar10 = (**(code **)(*DAT_14c867b48 + 0x30))(), cVar10 == '\0')) {
    cVar10 = '\0';
  }
  else {
    plVar16 = DAT_14c867b48;
    if (DAT_14c867b50 == 0) {
      plVar16 = (longlong *)0x0;
    }
    cVar10 = (**(code **)(*plVar16 + 0x58))();
  }
  if ((((bVar11 | param_3) & 1) == 0) && (cVar10 == '\0')) {
    (**(code **)(*param_1 + 0x4d0))(param_1,1);
  }
  if (DAT_14cad5900 != 0) {
    (**(code **)(*param_1 + 0x370))(param_1,fVar33);
  }
  if ((param_3 & 1) == 0) {
    if (cVar10 == '\0' && bVar11 == 0) {
      if ((DAT_14c761514 == 0) || (cVar10 = FUN_1401b42bc(param_1), cVar10 == '\0')) {
        if (DAT_14cad8310 == (longlong *)0x0) {
          FUN_1446f470e(&local_a8,L"Renderer",1);
          pcVar7 = local_a8;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,pcVar7,&local_b8,1);
        }
        (**(code **)(*DAT_14cad8310 + 0x118))();
      }
      else {
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar13 = *(int *)(lVar24 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar13 != 2) {
            if (iVar13 != 1) goto LAB_1434e5be4;
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            if (DVar14 == DVar15) goto LAB_1434e5bed;
            goto LAB_1434e61a4;
          }
        }
        else {
LAB_1434e5be4:
          if (iVar13 != 0x10) {
LAB_1434e61a4:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar24 + 0xc60), iVar13 == 2))
              goto LAB_1434e5bed;
              if (iVar13 == 1) {
                DVar14 = FUN_140ad26c0();
                DVar15 = GetCurrentThreadId();
                if (DVar14 == DVar15) goto LAB_1434e5bed;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar3 = (undefined8 *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
              puVar20 = (uint *)*puVar3;
              if (puVar20 != (uint *)0x0) goto LAB_1434e62fa;
              do {
                uVar28 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar28 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar28 | 1;
                  __tlregdtor(&LAB_1434efacd);
                }
                lVar24 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar19 = *(undefined4 **)(lVar24 + 0x310);
                *(undefined8 *)(lVar24 + 0x310) = 0;
                if (puVar19 == (undefined4 *)0x0) {
                  puVar19 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar19 = 0xffffffff;
                *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
                puVar19[0x12] = 0;
                *puVar3 = puVar19;
                FUN_140217a48(puVar3);
                puVar20 = (uint *)*puVar3;
LAB_1434e62fa:
                uVar30 = *(longlong *)(puVar20 + 0x10) + 7;
                uVar28 = puVar20[0x12];
                while( true ) {
                  puVar29 = (undefined8 *)(uVar30 & 0xfffffffffffffff8);
                  if (puVar29 + 0x16 <= puVar20 + 0x4000) {
                    *(undefined8 **)(puVar20 + 0x10) = puVar29 + 0x16;
                    puVar20[0x12] = uVar28 + 1;
                    iVar13 = 0;
                    FUN_1447247dc(puVar29,0);
                    *puVar29 = &PTR_FUN_14a8e9d98;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar28 = DAT_14c7585c8 >> 10 & 3;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
                        uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
                        iVar13 = 0;
                      }
                      else {
                        uVar30 = 2;
                      }
                    }
                    else {
                      iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar30 = 5;
                    }
                    if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
                    }
                    puVar29[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar29[9] = puVar29;
                    puVar29[10] = puVar29;
                    lVar24 = *(longlong *)
                              (*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x2b8);
                    if (lVar24 == 0) {
                      uVar8 = 1;
                      if ((char)uVar30 != '\x06') {
                        uVar8 = uVar30;
                      }
                      uVar30 = uVar8;
                      uVar18 = 0;
                    }
                    else {
                      if ((char)uVar30 == '\x06') {
                        uVar30 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
                      }
                      uVar18 = *(undefined8 *)(lVar24 + 0x30);
                    }
                    puVar29[0xf] = uVar18;
                    puVar29[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
                    *(int *)((longlong)puVar29 + 0x1c) = iVar13;
                    if (puVar29 == (undefined8 *)0x0) {
                      local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                      FUN_1447439e4(0);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
                      UNLOCK();
                      local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                      FUN_1447439e4(puVar29);
                      LOCK();
                      piVar2 = (int *)(puVar29 + 1);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)*puVar29)(puVar29,1);
                      }
                    }
                    goto LAB_1434e5c3d;
                  }
                  *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
                  LOCK();
                  uVar21 = *puVar20;
                  *puVar20 = *puVar20 + uVar28 + 1;
                  UNLOCK();
                  if ((uVar21 ^ uVar28) != 0xffffffff) break;
                  puVar20 = (uint *)*puVar3;
                  *puVar20 = 0xffffffff;
                  *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
                  puVar20[0x12] = 0;
                  *puVar3 = puVar20;
                  uVar30 = (longlong)puVar20 + 0x5f;
                  uVar28 = 0;
                }
              } while( true );
            }
            local_98 = (undefined ***)0x0;
            local_88 = &PTR_LAB_14a2b3190;
            local_80 = FUN_1434efa66;
            local_a8 = (code *)&LAB_142ea45a2;
            local_e8 = &local_a8;
            FUN_14005a792(&DAT_14ca9a440,L"SubmitAndBlockUntilGPUIdle_MinimizedRealtime",
                          &DAT_14cadad5c);
            if (local_a8 != (code *)0x0) {
              pppuVar22 = local_98;
              if (local_98 == (undefined ***)0x0) {
                pppuVar22 = &local_88;
              }
              (*(code *)(*pppuVar22)[2])();
            }
            goto LAB_1434e5c3d;
          }
        }
LAB_1434e5bed:
        local_a8 = (code *)0x0;
        local_a0 = 0;
        FUN_14007658c(&DAT_14ca850c8,&local_a8,5);
        (**(code **)(*DAT_14ca83900 + 0x370))();
      }
    }
    else if ((((DAT_14cad5900 == 0) && (param_1[0x184] != 0)) &&
             (lVar24 = *(longlong *)(param_1[0x184] + 0xf8), lVar24 != 0)) &&
            ((plVar16 = *(longlong **)(lVar24 + 0x30), plVar16 != (longlong *)0x0 &&
             (lVar24 = (**(code **)(*plVar16 + 0x30))(), lVar24 != 0)))) {
      local_98 = (undefined ***)((ulonglong)local_98 & 0xffffffffffffff00);
      FUN_141690028(lVar24);
    }
  }
LAB_1434e5c3d:
  if (DAT_14c86a9f0 == '\x01') {
    plVar16 = (longlong *)FUN_140083894();
    (**(code **)(*plVar16 + 8))(plVar16,fVar33,0);
  }
  if (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0) {
    FUN_1479733de(*(longlong *)(DAT_14cb0d2b0 + 0xf50),uVar31 & 0xffffff01);
  }
  uVar28 = (uint)DAT_14ca95145;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar24 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_1434e5c9a;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_1434e5ca3;
      goto LAB_1434e5d29;
    }
  }
  else {
LAB_1434e5c9a:
    if (iVar13 != 0x10) {
LAB_1434e5d29:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar24 + 0xc60), iVar13 == 2))
        goto LAB_1434e5ca3;
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_1434e5ca3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar20 = (uint *)*puVar3;
        if (puVar20 != (uint *)0x0) goto LAB_1434e5ece;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_1434efacd);
          }
          lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar19 = *(undefined4 **)(lVar24 + 0x310);
          *(undefined8 *)(lVar24 + 0x310) = 0;
          if (puVar19 == (undefined4 *)0x0) {
            puVar19 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar19 = 0xffffffff;
          *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar3 = puVar19;
          FUN_140217a48(puVar3);
          puVar20 = (uint *)*puVar3;
LAB_1434e5ece:
          puVar29 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar27 = (uint *)(puVar29 + 0x16);
          uVar21 = puVar20[0x12];
          if (puVar27 <= puVar20 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
            LOCK();
            uVar4 = *puVar20;
            *puVar20 = *puVar20 + uVar21 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar21) != 0xffffffff) break;
            puVar20 = (uint *)*puVar3;
            *puVar20 = 0xffffffff;
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
            puVar20[0x12] = 0;
            *puVar3 = puVar20;
            puVar29 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
            puVar27 = (uint *)(puVar29 + 0x16);
            uVar21 = 0;
            if (puVar27 <= puVar20 + 0x4000) {
              uVar21 = 1;
              goto LAB_1434e5f4e;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_1434e5f4e:
        *(uint **)(puVar20 + 0x10) = puVar27;
        puVar20[0x12] = uVar21;
        iVar13 = 0;
        FUN_1447247dc(puVar29,0);
        *puVar29 = &PTR_FUN_14a8e9df8;
        *(uint *)(puVar29 + 0x15) = uVar28;
        *(float *)((longlong)puVar29 + 0xac) = fVar33;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar28 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
            uVar31 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
            iVar13 = 0;
          }
          else {
            uVar31 = 2;
          }
        }
        else {
          iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar31 = 5;
        }
        if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
        }
        puVar29[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar29[9] = puVar29;
        puVar29[10] = puVar29;
        lVar24 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar24 == 0) {
          uVar30 = 1;
          if ((char)uVar31 != '\x06') {
            uVar30 = uVar31;
          }
          uVar31 = uVar30;
          uVar18 = 0;
        }
        else {
          if ((char)uVar31 == '\x06') {
            uVar31 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar24 + 0x30);
        }
        puVar29[0xf] = uVar18;
        puVar29[0x10] = uVar31 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar29 + 0x1c) = iVar13;
        if (puVar29 == (undefined8 *)0x0) {
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
          UNLOCK();
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(puVar29);
          LOCK();
          piVar2 = (int *)(puVar29 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar29)(puVar29,1);
          }
        }
      }
      else {
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14a8e9db0;
        local_80 = (code *)CONCAT44(fVar33,uVar28);
        local_a8 = FUN_1434efd0a;
        local_e8 = &local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"TickRenderingTimer",&DAT_14cadad60);
        if (local_a8 != (code *)0x0) {
          pppuVar22 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar22 = &local_88;
          }
          (*(code *)(*pppuVar22)[2])();
        }
      }
      goto LAB_1434e5ddb;
    }
  }
LAB_1434e5ca3:
  if (uVar28 == 0) {
    DAT_14ca964d4 = fVar33 + DAT_14ca964d4;
    _DAT_14ca964d0 = fVar33;
  }
  FUN_14322439e(&DAT_14ca9a3e8);
  FUN_14490ffcc(&DAT_14ca95560);
  if (DAT_14ca94d90 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca94d90 + 8))(DAT_14ca94d90,&DAT_14ca85100);
  }
LAB_1434e5ddb:
  if (bVar11 != 0) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_a8,L"Renderer",1);
      pcVar7 = local_a8;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,pcVar7,&local_b8,1);
    }
    (**(code **)(*DAT_14cad8310 + 0x120))();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e68de FUN_1434e68de body=726 status=ok
// SIG undefined FUN_1434e68de(void)

void FUN_1434e68de(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a8e9e80;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar3;
    *local_40 = &PTR_FUN_14a8e9e10;
    local_40[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar5 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar5 = iVar4;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_147a99068;
    FUN_147ac7764(*(undefined8 *)(param_1 + 0x60),param_1 + 0x48,*(undefined4 *)(param_1 + 0x58),
                  &local_40);
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar2 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_14a8e9f60;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_50[2] = lVar3;
    *local_50 = &PTR_FUN_14a8e9ef0;
    local_50[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_50 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar5 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar5 = iVar4;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar5;
    puVar2[4] = &LAB_147a99076;
    FUN_147ac7bb8(param_1 + 0x48,*(undefined4 *)(param_1 + 0x58),&local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e6bd8 FUN_1434e6bd8 body=418 status=ok
// SIG undefined FUN_1434e6bd8(void)

void FUN_1434e6bd8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    lVar10 = *param_2;
    lVar2 = param_2[3];
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    FUN_142aa2ba4(param_1,lVar2);
    uVar7 = FUN_146f546d2(uVar3,1);
    if ((uVar7 & 1) == 0) {
      if (*(void **)(lVar2 + 0x160) != (void *)0x0) {
        uVar5 = 0x20;
        if (*(uint *)(lVar2 + 0x168) < 0x20) {
          uVar5 = *(uint *)(lVar2 + 0x168);
        }
        memmove((void *)(lVar2 + 0xe0),*(void **)(lVar2 + 0x160),(ulonglong)(uVar5 << 2));
        if (*(longlong *)(lVar2 + 0x160) != 0) {
          (**(code **)(*DAT_14c872d28 + 0x48))();
          *(undefined8 *)(lVar2 + 0x160) = 0;
        }
      }
      *(undefined8 *)(lVar2 + 0x168) = 0x2000000000;
      *(undefined4 *)(lVar2 + 0x170) = 0;
    }
    else {
      uVar5 = FUN_146f592ce(uVar3);
      if (DAT_14cada3b8 == (longlong *)0x0) {
        uVar6 = *(uint *)(lVar10 + 0x10);
      }
      else {
        uVar6 = (**(code **)(*DAT_14cada3b8 + 0xb0))();
      }
      uVar4 = DAT_14c999b78;
      if (uVar6 < uVar5) {
        FUN_146f5b89e(param_1);
        if (*(longlong *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        uVar9 = uVar5 + 0x1f >> 5;
        lVar10 = lVar2 + 0xe0;
        uVar6 = 0x20;
        if (0x20 < uVar9) {
          uVar6 = uVar9;
        }
        FUN_147aadfb8(lVar10,param_1,*(undefined4 *)(lVar2 + 0x168),uVar6);
        *(uint *)(lVar2 + 0x16c) = uVar6;
        uVar1 = *(uint *)(lVar2 + 0x168);
        if (uVar1 < uVar6) {
          lVar8 = *(longlong *)(lVar2 + 0x160);
          if (*(longlong *)(lVar2 + 0x160) == 0) {
            lVar8 = lVar10;
          }
          memset((void *)(lVar8 + (ulonglong)uVar1 * 4),0,(ulonglong)(uVar6 - uVar1) << 2);
        }
        *(uint *)(lVar2 + 0x168) = uVar9;
        if (*(longlong *)(lVar2 + 0x160) != 0) {
          lVar10 = *(longlong *)(lVar2 + 0x160);
        }
        FUN_146f59f56(uVar3,lVar10,uVar5);
        *(uint *)(lVar2 + 0x170) = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 1434e6d7a FUN_1434e6d7a body=348 status=ok
// SIG undefined FUN_1434e6d7a(void)

void FUN_1434e6d7a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pvVar2 = (void *)param_2[3];
  lVar3 = param_2[4];
  local_50 = (longlong)pvVar2 + 0xf0;
  if (*(longlong *)((longlong)pvVar2 + 0x100) != 0) {
    local_50 = *(longlong *)((longlong)pvVar2 + 0x100);
  }
  local_48 = *(undefined4 *)((longlong)pvVar2 + 0x108);
  FUN_146f593aa(param_1,(longlong)pvVar2 + 0x90,&local_50,lVar3);
  uVar7 = *(uint *)((longlong)pvVar2 + 0x88);
  if (DAT_14cada3b8 == (longlong *)0x0) {
    uVar5 = *(uint *)(*param_2 + 0x10);
  }
  else {
    uVar5 = (**(code **)(*DAT_14cada3b8 + 0xb0))();
  }
  uVar6 = 0;
  if (uVar7 <= uVar5) {
    uVar6 = uVar7;
  }
  _Dst = (void *)(lVar3 + 0xe0);
  uVar5 = uVar6 + 0x1f >> 5;
  uVar7 = 0x20;
  if (0x20 < uVar5) {
    uVar7 = uVar5;
  }
  FUN_147aadfb8(_Dst,param_1,*(undefined4 *)(lVar3 + 0x168),uVar7);
  *(uint *)(lVar3 + 0x16c) = uVar7;
  uVar1 = *(uint *)(lVar3 + 0x168);
  if (uVar1 < uVar7) {
    pvVar4 = *(void **)(lVar3 + 0x160);
    if (*(void **)(lVar3 + 0x160) == (void *)0x0) {
      pvVar4 = _Dst;
    }
    memset((void *)((longlong)pvVar4 + (ulonglong)uVar1 * 4),0,(ulonglong)(uVar7 - uVar1) << 2);
  }
  *(uint *)(lVar3 + 0x168) = uVar5;
  if (uVar6 != 0) {
    pvVar4 = *(void **)((longlong)pvVar2 + 0x80);
    if (*(void **)((longlong)pvVar2 + 0x80) == (void *)0x0) {
      pvVar4 = pvVar2;
    }
    if (*(void **)(lVar3 + 0x160) != (void *)0x0) {
      _Dst = *(void **)(lVar3 + 0x160);
    }
    memcpy(_Dst,pvVar4,(ulonglong)(uVar6 + 7 >> 3));
  }
  *(uint *)(lVar3 + 0x170) = uVar6;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e6ed7 FUN_1434e6ed7 body=69 status=ok
// SIG undefined FUN_1434e6ed7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434e6ed7(void)

{
  _DAT_14cada4b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434e6f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cada4b8,1);
  return;
}



// FUNCTION 1434e6f1c FUN_1434e6f1c body=89 status=ok
// SIG undefined FUN_1434e6f1c(void)

void FUN_1434e6f1c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) && (DAT_14cb0d2b0 != 0)) {
    lVar1 = FUN_140313804();
    if (lVar1 != 0) {
      if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
        FUN_147a9c6d8(lVar1 + 0x98,param_1 + 0x20);
      }
      FUN_147a99dea(param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1434e6f76 FUN_1434e6f76 body=433 status=ok
// SIG undefined FUN_1434e6f76(void)

int * FUN_1434e6f76(longlong param_1,int *param_2,longlong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [44];
  uint local_5c;
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0) || (*param_4 == -1)) {
    *param_2 = 0;
  }
  else {
    DAT_14c76151c = DAT_14c76151c + 1;
    bVar6 = DAT_14c76151c != 0;
    *param_2 = DAT_14c76151c;
    if (bVar6) {
      local_4c = 0;
      iStack_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      iStack_40 = 0;
      local_54 = 0;
      local_3c = 0;
      local_58 = *(uint *)(param_3 + 0xc);
      if ((int)local_58 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar1 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar1 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar1 = iVar4;
        }
      }
      local_54 = CONCAT44(local_54._4_4_,iVar1);
      iStack_48 = *param_4;
      uVar2 = param_4[1];
      if (param_4[1] < 0) {
        iVar1 = iStack_48;
        if (DAT_14c9670a0 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
          FUN_14593912e(plVar3,1,1);
          iVar1 = *param_4;
          DAT_14c9670a0 = plVar3;
        }
        (**(code **)(*DAT_14c9670a0 + 0x60))(DAT_14c9670a0,&local_5c,iVar1);
        uVar2 = local_5c;
      }
      iStack_40 = *param_2;
      local_3c = *(byte *)(param_4 + 2) & 7 | local_3c & 0xf8;
      uStack_44 = uVar2;
      FUN_147aae6da(param_1 + 0x48,&local_5c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1434e7128 FUN_1434e7128 body=458 status=ok
// SIG undefined FUN_1434e7128(void)

void FUN_1434e7128(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *_Src;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0xffffffff;
    goto LAB_1434e7166;
  }
  FUN_1479733cc(&local_58,*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90);
  if (((plStack_50 == (longlong *)0x0) || (lVar3 = *(longlong *)(param_1 + 0x28), lVar3 == 0)) ||
     (*(char *)(lVar3 + 0x34e) != '\x04')) goto LAB_1434e7166;
  local_68 = 1;
  (**(code **)(*plStack_50 + 0x60))(plStack_50,lVar3,1,0);
  lVar3 = *(longlong *)(param_1 + 0x28);
  _Src = *(undefined2 **)(lVar3 + 0x3b8);
  uVar4 = *(uint *)(lVar3 + 0x3b4);
  uVar6 = *(uint *)(lVar3 + 0x36c);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if ((int)uVar6 < 2) {
      uVar6 = uVar4 * 2 & 0xfffffffc;
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + uVar6;
      if ((uint)(*(int *)(param_1 + 0x44) - iVar2) < uVar6) {
        FUN_1447403be((longlong *)(param_1 + 0x38));
      }
      if (0 < (int)uVar4 >> 1) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        uVar5 = 0;
        do {
          uVar1 = _Src[uVar5];
          *(undefined2 *)(lVar3 + uVar5 * 4) = uVar1;
          *(undefined2 *)(lVar3 + 2 + uVar5 * 4) = uVar1;
          uVar5 = uVar5 + 1;
        } while ((uint)((int)uVar4 >> 1) != uVar5);
      }
    }
    else {
LAB_1434e72af:
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + uVar4;
      if ((uint)(*(int *)(param_1 + 0x44) - iVar2) < uVar4) {
        FUN_1447403be((longlong *)(param_1 + 0x38),iVar2);
      }
      else if (uVar4 == 0) goto LAB_1434e72ea;
      memcpy((void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x38)),_Src,(longlong)(int)uVar4);
    }
  }
  else {
    if ((int)uVar6 < 2) goto LAB_1434e72af;
    uVar4 = (uint)(((ulonglong)(longlong)(int)uVar4 >> 1) / (ulonglong)uVar6);
    iVar2 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar2 + uVar4 * 2;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar2) < uVar4 * 2) {
      FUN_1447403be();
    }
    if (0 < (int)uVar4) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      uVar5 = 0;
      do {
        *(undefined2 *)(lVar3 + uVar5 * 2) = *_Src;
        uVar5 = uVar5 + 1;
        _Src = _Src + uVar6;
      } while (uVar5 < (uVar4 & 0x7fffffff));
    }
  }
LAB_1434e72ea:
  *(undefined1 *)(param_1 + 0x31) = 1;
LAB_1434e7166:
  FUN_14051bf10(&local_58);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e72f4 FUN_1434e72f4 body=51 status=ok
// SIG undefined FUN_1434e72f4(void)

void FUN_1434e72f4(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if ((char)param_1[6] == '\0') {
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  FUN_147a9a846(param_2,param_3,uVar1);
  return;
}



// FUNCTION 1434e7328 FUN_1434e7328 body=165 status=ok
// SIG undefined FUN_1434e7328(void)

undefined4 *
FUN_1434e7328(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_3;
  if ((((lVar3 != 0) && (lVar1 = FUN_145862c7c(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (lVar3 = *param_3, lVar3 != 0)))) {
    lVar1 = FUN_145862c7c();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_3;
    }
    uVar2 = FUN_147a9c61d(param_1,lVar3);
    FUN_1434e6f76(param_1,param_2,uVar2,param_4);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434e73ce FUN_1434e73ce body=700 status=ok
// SIG undefined FUN_1434e73ce(void)

void FUN_1434e73ce(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar4)(plVar2);
          if (cVar6 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_78);
            goto LAB_1434e75ab;
          }
        }
        puVar8 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar8 != &local_78) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_78,puVar8,(int)plVar2[6]);
          }
          else {
            memcpy(&local_78,puVar8,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_80 = (undefined4)plVar2[6];
        local_88 = 0;
        FUN_1400746b0(plVar2,&local_78,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&local_78,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar8;
        puVar8 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_78);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_78);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar4)(uVar5,param_2,&local_78);
    }
  }
LAB_1434e75ab:
  puVar8 = *(undefined8 **)(param_2 + 0x38);
  puVar7 = puVar8;
  if (puVar8 == (undefined8 *)0x0) {
    puVar7 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(puVar7 + 1) != *(int *)((longlong)puVar7 + 0x34)) {
    puVar7 = &local_78;
    if (puVar8 != (undefined8 *)0x0) {
      puVar7 = puVar8;
    }
    FUN_147a9c6d8(param_1 + 0x98,puVar7);
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145a32ae8(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e768c FUN_1434e768c body=66 status=ok
// SIG undefined FUN_1434e768c(void)

ulonglong FUN_1434e768c(void)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if ((DAT_14c98e618 == 0) || (DAT_14c872bf0 != '\0')) {
    uVar2 = 0;
  }
  else {
    plVar1 = (longlong *)FUN_140389788();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (plVar1[0x22] == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1434e76ea FUN_1434e76ea body=55 status=ok
// SIG undefined FUN_1434e76ea(void)

void FUN_1434e76ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada708 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada708 = FUN_14171c317(FUN_1463c95fc,uVar1,L"ERootMotionAccumulateMode");
  }
  return;
}



// FUNCTION 1434e7721 FUN_1434e7721 body=55 status=ok
// SIG undefined FUN_1434e7721(void)

void FUN_1434e7721(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada720 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada720 = FUN_14171c317(FUN_1463c962b,uVar1,L"ERootMotionSourceStatusFlags");
  }
  return;
}



// FUNCTION 1434e7758 FUN_1434e7758 body=55 status=ok
// SIG undefined FUN_1434e7758(void)

void FUN_1434e7758(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada738 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada738 = FUN_14171c317(FUN_1463c965a,uVar1,L"ERootMotionSourceSettingsFlags");
  }
  return;
}



// FUNCTION 1434e778f FUN_1434e778f body=55 status=ok
// SIG undefined FUN_1434e778f(void)

void FUN_1434e778f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada780 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada780 = FUN_14171c317(FUN_1463c97b8,uVar1,L"ERootMotionFinishVelocityMode");
  }
  return;
}



// FUNCTION 1434e77c6 FUN_1434e77c6 body=8 status=ok
// SIG undefined FUN_1434e77c6(void)

byte FUN_1434e77c6(longlong param_1)

{
  return (*(byte *)(param_1 + 0x28) & 2) >> 1;
}



// FUNCTION 1434e77ce FUN_1434e77ce body=1731 status=ok
// SIG undefined FUN_1434e77ce(void)

void FUN_1434e77ce(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_9c;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar14 = (longlong)(int)uVar1;
  if (lVar14 != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    lVar10 = *plVar2;
    bVar6 = true;
    if (lVar10 != 0) {
      if ((*(byte *)(lVar10 + 0x24) & 6) == 0) {
        bVar6 = false;
      }
      else {
        if ((*(char *)(lVar10 + 0x26) == '\x01') && ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
          FUN_147aa00f8(lVar10,param_4,param_1 + 0x30);
          lVar10 = *plVar2;
        }
        if (*(char *)(lVar10 + 0xa0) == '\x01') {
          *(undefined8 *)(param_4 + 0x138) = *(undefined8 *)(lVar10 + 0xb8);
          uVar4 = *(undefined8 *)(lVar10 + 0xb0);
          *(undefined8 *)(param_4 + 0x128) = *(undefined8 *)(lVar10 + 0xa8);
          *(undefined8 *)(param_4 + 0x130) = uVar4;
          if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
            lVar10 = *plVar2;
            uVar4 = *(undefined8 *)(lVar10 + 0xa8);
            uVar5 = *(undefined8 *)(lVar10 + 0xb0);
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar10 + 0xb8);
            *(undefined8 *)(param_1 + 0x30) = uVar4;
            *(undefined8 *)(param_1 + 0x38) = uVar5;
          }
        }
        else if (*(char *)(lVar10 + 0xa0) == '\x02') {
          dVar18 = 0.0;
          dVar19 = 0.0;
          if (0.0001 <= *(float *)(lVar10 + 0xa4)) {
            dVar20 = (double)*(float *)(lVar10 + 0xa4);
            dVar18 = *(double *)(param_4 + 0x128);
            dVar19 = *(double *)(param_4 + 0x130);
            dVar21 = dVar18 * dVar18 + dVar19 * dVar19;
            if (dVar20 * dVar20 < dVar21) {
              dVar20 = (1.0 / SQRT(dVar21)) * dVar20;
              dVar19 = dVar19 * dVar20;
              dVar18 = dVar18 * dVar20;
            }
          }
          *(double *)(param_4 + 0x128) = dVar18;
          *(double *)(param_4 + 0x130) = dVar19;
          dVar18 = *(double *)(param_4 + 0x138);
          if ((double)*(float *)(*plVar2 + 0xa4) <= *(double *)(param_4 + 0x138)) {
            dVar18 = (double)*(float *)(*plVar2 + 0xa4);
          }
          *(double *)(param_4 + 0x138) = dVar18;
          if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
            dVar19 = 0.0;
            dVar18 = 0.0;
            if (0.0001 <= *(float *)(*plVar2 + 0xa4)) {
              dVar20 = (double)*(float *)(*plVar2 + 0xa4);
              dVar18 = *(double *)(param_1 + 0x30);
              dVar19 = *(double *)(param_1 + 0x38);
              dVar21 = dVar18 * dVar18 + dVar19 * dVar19;
              if (dVar20 * dVar20 < dVar21) {
                dVar20 = (1.0 / SQRT(dVar21)) * dVar20;
                dVar19 = dVar19 * dVar20;
                dVar18 = dVar18 * dVar20;
              }
            }
            *(double *)(param_1 + 0x30) = dVar18;
            *(double *)(param_1 + 0x38) = dVar19;
            dVar18 = *(double *)(param_1 + 0x40);
            if ((double)*(float *)(*plVar2 + 0xa4) <= *(double *)(param_1 + 0x40)) {
              dVar18 = (double)*(float *)(*plVar2 + 0xa4);
            }
            *(double *)(param_1 + 0x40) = dVar18;
          }
        }
      }
    }
    local_9c = 0;
    uVar15 = 0;
LAB_1434e7a29:
    do {
      iVar8 = (int)uVar15;
      if ((int)(iVar8 + 1U) < (int)uVar1) {
        lVar11 = (longlong)iVar8;
        lVar10 = lVar11 + 2;
        plVar12 = plVar2 + lVar11 * 2 + 2;
        bVar3 = true;
        lVar17 = -1;
        do {
          lVar7 = *plVar12;
          iVar16 = (int)lVar17;
          if (lVar7 == 0) {
LAB_1434e7c17:
            if (!bVar6) {
              uVar15 = (ulonglong)(uint)(iVar8 - iVar16);
              iVar16 = -iVar16;
              goto LAB_1434e7cd1;
            }
          }
          else {
            if ((*(byte *)(lVar7 + 0x24) & 6) != 0) {
              if ((*(char *)(lVar7 + 0x26) == '\x01') && ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
                FUN_147aa00f8(lVar7,param_4,(undefined8 *)(param_1 + 0x30));
                lVar7 = *plVar12;
              }
              if (*(char *)(lVar7 + 0xa0) == '\x01') {
                *(undefined8 *)(param_4 + 0x138) = *(undefined8 *)(lVar7 + 0xb8);
                uVar4 = *(undefined8 *)(lVar7 + 0xb0);
                *(undefined8 *)(param_4 + 0x128) = *(undefined8 *)(lVar7 + 0xa8);
                *(undefined8 *)(param_4 + 0x130) = uVar4;
                if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
                  lVar7 = *plVar12;
                  uVar4 = *(undefined8 *)(lVar7 + 0xa8);
                  uVar5 = *(undefined8 *)(lVar7 + 0xb0);
                  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar7 + 0xb8);
                  *(undefined8 *)(param_1 + 0x30) = uVar4;
                  *(undefined8 *)(param_1 + 0x38) = uVar5;
                }
              }
              else if (*(char *)(lVar7 + 0xa0) == '\x02') {
                dVar18 = 0.0;
                dVar19 = 0.0;
                if (0.0001 <= *(float *)(lVar7 + 0xa4)) {
                  dVar20 = (double)*(float *)(lVar7 + 0xa4);
                  dVar18 = *(double *)(param_4 + 0x128);
                  dVar19 = *(double *)(param_4 + 0x130);
                  dVar21 = dVar18 * dVar18 + dVar19 * dVar19;
                  if (dVar20 * dVar20 < dVar21) {
                    dVar20 = (1.0 / SQRT(dVar21)) * dVar20;
                    dVar19 = dVar19 * dVar20;
                    dVar18 = dVar18 * dVar20;
                  }
                }
                *(double *)(param_4 + 0x128) = dVar18;
                *(double *)(param_4 + 0x130) = dVar19;
                dVar18 = *(double *)(param_4 + 0x138);
                if ((double)*(float *)(*plVar12 + 0xa4) <= *(double *)(param_4 + 0x138)) {
                  dVar18 = (double)*(float *)(*plVar12 + 0xa4);
                }
                *(double *)(param_4 + 0x138) = dVar18;
                if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
                  dVar19 = 0.0;
                  dVar18 = 0.0;
                  if (0.0001 <= *(float *)(*plVar12 + 0xa4)) {
                    dVar20 = (double)*(float *)(*plVar12 + 0xa4);
                    dVar18 = *(double *)(param_1 + 0x30);
                    dVar19 = *(double *)(param_1 + 0x38);
                    dVar21 = dVar18 * dVar18 + dVar19 * dVar19;
                    if (dVar20 * dVar20 < dVar21) {
                      dVar20 = (1.0 / SQRT(dVar21)) * dVar20;
                      dVar19 = dVar19 * dVar20;
                      dVar18 = dVar18 * dVar20;
                    }
                  }
                  *(double *)(param_1 + 0x30) = dVar18;
                  *(double *)(param_1 + 0x38) = dVar19;
                  dVar18 = *(double *)(param_1 + 0x40);
                  if ((double)*(float *)(*plVar12 + 0xa4) <= *(double *)(param_1 + 0x40)) {
                    dVar18 = (double)*(float *)(*plVar12 + 0xa4);
                  }
                  *(double *)(param_1 + 0x40) = dVar18;
                }
              }
              goto LAB_1434e7c17;
            }
            if (bVar6) {
              FUN_140239688(plVar2 + lVar11 * 2,-iVar16);
              if (!bVar3) goto LAB_1434e7d0d;
              uVar15 = (uVar15 & 0xffffffff) - lVar17;
              bVar6 = false;
              goto LAB_1434e7a29;
            }
          }
          bVar3 = lVar10 < lVar14;
          lVar17 = lVar17 + -1;
          lVar10 = lVar10 + 1;
          plVar12 = plVar12 + 2;
          uVar13 = uVar1;
        } while (lVar11 - lVar14 != lVar17);
      }
      else {
        bVar3 = false;
        uVar13 = iVar8 + 1U;
      }
      uVar15 = (ulonglong)uVar13;
      iVar16 = uVar13 - iVar8;
      if (!bVar6) {
LAB_1434e7cd1:
        if (local_9c != iVar8) {
          memmove(plVar2 + (longlong)local_9c * 2,plVar2 + (longlong)iVar8 * 2,(longlong)iVar16 << 4
                 );
        }
        local_9c = local_9c + iVar16;
        bVar6 = true;
        if (!bVar3) break;
        goto LAB_1434e7a29;
      }
      FUN_140239688(plVar2 + (longlong)iVar8 * 2,iVar16);
      bVar6 = false;
    } while (bVar3);
LAB_1434e7d0d:
    *(int *)(param_1 + 0x10) = local_9c;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar14 = (longlong)(int)uVar1;
  if (lVar14 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((*plVar2 == 0) || ((*(byte *)(*plVar2 + 0x24) & 6) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  iVar8 = 0;
  uVar13 = 0;
LAB_1434e7d53:
  uVar15 = (ulonglong)uVar13;
LAB_1434e7d56:
  do {
    iVar16 = (int)uVar15;
    if ((int)(iVar16 + 1U) < (int)uVar1) {
      lVar11 = (longlong)iVar16;
      lVar10 = lVar11 + 2;
      plVar12 = plVar2 + lVar11 * 2 + 2;
      bVar3 = true;
      lVar17 = -1;
      do {
        iVar9 = (int)lVar17;
        if ((*plVar12 == 0) || ((*(byte *)(*plVar12 + 0x24) & 6) != 0)) {
          if (!bVar6) {
            uVar13 = iVar16 - iVar9;
            iVar9 = -iVar9;
            goto LAB_1434e7e12;
          }
        }
        else if (bVar6) {
          FUN_140239688(plVar2 + lVar11 * 2,-iVar9);
          if (!bVar3) goto LAB_1434e7e51;
          uVar15 = (uVar15 & 0xffffffff) - lVar17;
          bVar6 = false;
          goto LAB_1434e7d56;
        }
        bVar3 = lVar10 < lVar14;
        lVar17 = lVar17 + -1;
        lVar10 = lVar10 + 1;
        plVar12 = plVar12 + 2;
        uVar13 = uVar1;
      } while (lVar11 - lVar14 != lVar17);
    }
    else {
      bVar3 = false;
      uVar13 = iVar16 + 1U;
    }
    iVar9 = uVar13 - iVar16;
    if (!bVar6) break;
    FUN_140239688(plVar2 + (longlong)iVar16 * 2,iVar9);
    bVar6 = false;
    uVar15 = (ulonglong)uVar13;
    if (!bVar3) goto LAB_1434e7e51;
  } while( true );
LAB_1434e7e12:
  if (iVar8 != iVar16) {
    memmove(plVar2 + (longlong)iVar8 * 2,plVar2 + (longlong)iVar16 * 2,(longlong)iVar9 << 4);
  }
  iVar8 = iVar8 + iVar9;
  bVar6 = true;
  if (!bVar3) {
LAB_1434e7e51:
    *(int *)(param_1 + 0x20) = iVar8;
    return;
  }
  goto LAB_1434e7d53;
}



// FUNCTION 1434e7e92 FUN_1434e7e92 body=1385 status=ok
// SIG undefined FUN_1434e7e92(void)

void FUN_1434e7e92(longlong param_1,float param_2,longlong param_3,longlong param_4,byte param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_138 [32];
  longlong local_118;
  int local_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = param_3;
  local_f8 = param_4;
  FUN_14343f086((longlong *)(param_1 + 8),param_1 + 0x18);
  FUN_140239688(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_108 = param_1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1479d8fa2(param_1 + 0x18,0);
  }
  lVar7 = local_f8;
  lVar6 = local_100;
  iVar3 = *(int *)(local_108 + 0x10);
  uVar22 = (ulonglong)iVar3;
  if (1 < (longlong)uVar22) {
    local_f0 = *(longlong *)(param_1 + 8);
    plVar11 = (longlong *)(local_f0 + 0x10);
    uVar18 = 0;
    do {
      if (uVar18 + 1 < uVar22) {
        plVar25 = plVar11 + -2;
        if (((*plVar11 == 0) || (*plVar25 == 0)) ||
           (*(ushort *)(*plVar25 + 8) < *(ushort *)(*plVar11 + 8))) {
          lVar21 = *plVar25;
          lVar15 = plVar11[-1];
          *plVar25 = *plVar11;
          plVar11[-1] = plVar11[1];
          local_d8._0_4_ = (undefined4)lVar21;
          local_d8._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
          uStack_d0._0_4_ = (undefined4)lVar15;
          uStack_d0._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)plVar11 = (undefined4)local_d8;
          *(undefined4 *)((longlong)plVar11 + 4) = local_d8._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_d0._4_4_;
          local_d8 = lVar21;
          uStack_d0 = lVar15;
        }
      }
      uVar18 = uVar18 + 2;
      plVar11 = plVar11 + 4;
    } while (uVar18 < uVar22);
    if (iVar3 != 2) {
      iVar12 = 2;
      do {
        local_10c = iVar12 * 2;
        local_e0 = (longlong)local_10c;
        lVar21 = 0;
        do {
          iVar13 = iVar3 - (int)lVar21;
          if (local_10c <= iVar13) {
            iVar13 = local_10c;
          }
          if (iVar12 < iVar13 && 0 < iVar12) {
            lVar15 = lVar21 * 0x10 + local_f0;
            iVar14 = 0;
            iVar17 = iVar12;
            while( true ) {
              plVar11 = (longlong *)((longlong)iVar17 * 0x10 + lVar15);
              iVar20 = 0;
              uVar26 = iVar17 - iVar14;
              if (uVar26 != 0 && iVar14 <= iVar17) {
                lVar16 = *plVar11;
                iVar20 = 0;
                uVar18 = (ulonglong)uVar26;
                do {
                  uVar18 = uVar18 >> 1;
                  if (lVar16 != 0) {
                    iVar19 = iVar20 + (uint)uVar18;
                    lVar10 = *(longlong *)
                              ((longlong)iVar14 * 0x10 + lVar15 + (longlong)iVar19 * 0x10);
                    if ((lVar10 != 0) && (*(ushort *)(lVar16 + 8) <= *(ushort *)(lVar10 + 8))) {
                      iVar20 = iVar19 + (uVar26 & 1);
                    }
                  }
                  bVar4 = 1 < uVar26;
                  uVar26 = (uint)uVar18;
                } while (bVar4);
              }
              iVar20 = iVar20 + iVar14;
              iVar14 = iVar17 - iVar20;
              if (iVar14 == 0 || iVar17 < iVar20) break;
              uVar26 = iVar13 - iVar17;
              if (uVar26 == 0 || iVar13 < iVar17) {
                iVar19 = 0;
              }
              else {
                plVar25 = (longlong *)((longlong)iVar20 * 0x10 + lVar15);
                iVar19 = 0;
                uVar18 = (ulonglong)uVar26;
                do {
                  uVar18 = uVar18 >> 1;
                  uVar24 = (uint)uVar18 + iVar19;
                  lVar16 = plVar11[(ulonglong)uVar24 * 2];
                  if (((lVar16 == 0) || (*plVar25 == 0)) ||
                     (*(ushort *)(*plVar25 + 8) < *(ushort *)(lVar16 + 8))) {
                    iVar19 = uVar24 + (uVar26 & 1);
                  }
                  bVar4 = 1 < uVar26;
                  uVar26 = (uint)uVar18;
                } while (bVar4);
                iVar17 = iVar17 + iVar19;
                if (0 < iVar19) {
                  plVar23 = plVar25 + (longlong)(iVar17 - iVar20) * 2;
                  plVar11 = plVar25 + (longlong)iVar14 * 2;
                  plVar27 = plVar25 + (longlong)iVar14 * 2;
                  do {
                    while( true ) {
                      plVar2 = plVar11 + 2;
                      lVar16 = *plVar25;
                      lVar10 = plVar25[1];
                      lVar5 = plVar11[1];
                      *plVar25 = *plVar11;
                      plVar25[1] = lVar5;
                      plVar25 = plVar25 + 2;
                      local_d8._0_4_ = (undefined4)lVar16;
                      local_d8._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
                      uStack_d0._0_4_ = (undefined4)lVar10;
                      uStack_d0._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
                      *(undefined4 *)plVar11 = (undefined4)local_d8;
                      *(undefined4 *)((longlong)plVar11 + 4) = local_d8._4_4_;
                      *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_d0;
                      *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_d0._4_4_;
                      if (plVar2 == plVar23) break;
                      plVar11 = plVar2;
                      if (plVar25 == plVar27) {
                        plVar27 = plVar2;
                      }
                    }
                    plVar11 = plVar27;
                    local_d8 = lVar16;
                    uStack_d0 = lVar10;
                  } while (plVar25 != plVar27);
                }
              }
              if ((iVar13 <= iVar17) || (iVar14 = iVar20 + iVar19 + 1, iVar17 <= iVar14)) break;
            }
          }
          lVar21 = lVar21 + local_e0;
        } while (lVar21 < (longlong)uVar22);
        iVar12 = local_10c;
        local_e8 = uVar22;
      } while (local_10c < iVar3);
    }
  }
  *(byte *)(local_108 + 0x28) = *(byte *)(local_108 + 0x28) & 0xf8;
  *(undefined1 *)(local_108 + 0x29) = 0;
  iVar3 = *(int *)(local_108 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar21 = *(longlong *)(local_108 + 8);
    plVar11 = (longlong *)(local_f8 + 0x1e8);
    lVar16 = 0;
    lVar15 = local_108;
    do {
      lVar10 = *(longlong *)(lVar21 + lVar16);
      if (lVar10 != 0) {
        if ((*(byte *)(lVar10 + 0x24) & (param_5 ^ 1)) == 0) {
          fVar28 = param_2;
          if (*(char *)(lVar10 + 0x28) == '\0') {
            fVar30 = *(float *)(lVar10 + 0x18);
          }
          else {
            fVar30 = *(float *)(lVar10 + 0x18);
            fVar29 = *(float *)(lVar10 + 0x1c) - fVar30;
            if (0.0 < fVar29) {
              fVar29 = fVar29 * 0.5;
              if (0.5 <= fVar29) {
                fVar29 = 0.5;
              }
              fVar28 = fVar29 + param_2;
            }
          }
          if (((fVar30 == 0.0) && (!NAN(fVar30))) &&
             ((*(float *)(lVar10 + 0x14) != -3.4e+38 || (NAN(*(float *)(lVar10 + 0x14)))))) {
            if (*(char *)(lVar6 + 0x178) == '\x03') {
              cVar8 = (**(code **)(*plVar11 + 0x40))(plVar11);
              if ((cVar8 != '\0') && (lVar15 = (**(code **)(*plVar11 + 0x30))(plVar11), lVar15 != 0)
                 ) {
                fVar30 = *(float *)(lVar15 + 0x98) - param_2;
LAB_1434e829c:
                if ((0.0 <= fVar30) &&
                   (fVar29 = *(float *)(*(longlong *)(lVar21 + lVar16) + 0x14), fVar30 < fVar29)) {
                  fVar30 = fVar28 + fVar30;
                  fVar28 = 0.0;
                  if (fVar29 < fVar30) {
                    fVar28 = fVar30 - fVar29;
                  }
                }
              }
            }
            else if ((((*(char *)(lVar6 + 0x178) == '\x02') &&
                      (cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11), cVar8 != '\0')) &&
                     (lVar15 = (**(code **)(*plVar11 + 0x28))(plVar11), lVar15 != 0)) &&
                    ((*(byte *)(lVar6 + 0x550) & 0x10) == 0)) {
              fVar30 = *(float *)(lVar15 + 0xc);
              goto LAB_1434e829c;
            }
          }
          cVar8 = (**(code **)(**(longlong **)(lVar21 + lVar16) + 8))();
          lVar15 = *(longlong *)(lVar21 + lVar16);
          if ((cVar8 != '\0') && ((*(byte *)(lVar15 + 0x25) & 2) == 0)) {
            if (*(float *)(lVar15 + 0x20) <= fVar28 + *(float *)(lVar15 + 0x18)) {
              fVar28 = (*(float *)(lVar15 + 0x20) - *(float *)(lVar15 + 0x18)) + 0.0001;
            }
          }
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          *(undefined1 *)(lVar15 + 0x29) = 0;
          local_118 = lVar7;
          (**(code **)(**(longlong **)(lVar21 + lVar16) + 0x48))
                    (*(longlong **)(lVar21 + lVar16),fVar28,param_2,lVar6);
          *(byte *)(local_108 + 0x29) =
               *(byte *)(local_108 + 0x29) | *(byte *)(*(longlong *)(lVar21 + lVar16) + 0x25);
          pbVar1 = (byte *)(*(longlong *)(lVar21 + lVar16) + 0x24);
          *pbVar1 = *pbVar1 | 1;
          *(undefined1 *)(*(longlong *)(lVar21 + lVar16) + 0x28) = 0;
          lVar10 = *(longlong *)(lVar21 + lVar16);
          lVar15 = local_108;
        }
        if (*(char *)(lVar10 + 0x26) == '\0') {
          bVar9 = *(byte *)(lVar15 + 0x28);
          *(byte *)(lVar15 + 0x28) = bVar9 | 2;
          if ((*(byte *)(*(longlong *)(lVar21 + lVar16) + 0x25) & 4) != 0) {
            bVar9 = bVar9 | 6;
            goto LAB_1434e8370;
          }
        }
        else if (*(char *)(lVar10 + 0x26) == '\x01') {
          bVar9 = *(byte *)(lVar15 + 0x28) | 1;
LAB_1434e8370:
          *(byte *)(lVar15 + 0x28) = bVar9;
        }
      }
      lVar16 = lVar16 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar16);
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434e83fc FUN_1434e83fc body=138 status=ok
// SIG undefined FUN_1434e83fc(void)

void FUN_1434e83fc(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        fVar1 = *(float *)(lVar4 + 0x14);
        if ((fVar1 != -3.4e+38) || (NAN(fVar1))) {
          *(float *)(lVar4 + 0x14) = fVar1 - param_2;
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        fVar1 = *(float *)(lVar4 + 0x14);
        if ((fVar1 != -3.4e+38) || (NAN(fVar1))) {
          *(float *)(lVar4 + 0x14) = fVar1 - param_2;
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1434e8486 FUN_1434e8486 body=899 status=ok
// SIG undefined FUN_1434e8486(void)

void FUN_1434e8486(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  char cVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7 | *(byte *)(param_2 + 0x28) & 8;
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar19 = (ulonglong)(int)uVar3;
  if (uVar19 != 0) {
    plVar16 = *(longlong **)(param_1 + 0x18);
    if (((*plVar16 != 0) && (sVar2 = *(short *)(*plVar16 + 10), sVar2 != 0)) &&
       ((longlong)*(int *)(param_2 + 0x10) != 0)) {
      lVar18 = 0;
      do {
        lVar21 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar18);
        if ((lVar21 != 0) && (sVar2 == *(short *)(lVar21 + 10))) {
          iVar15 = *(int *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x10) = iVar15 + 1U;
          if (*(uint *)(param_1 + 0x14) < iVar15 + 1U) {
            FUN_1479d9002((longlong *)(param_1 + 8),iVar15);
          }
          lVar18 = *(longlong *)(param_1 + 8);
          *(longlong *)(lVar18 + (longlong)iVar15 * 0x10) = *plVar16;
          lVar21 = plVar16[1];
          *(longlong *)(lVar18 + 8 + (longlong)iVar15 * 0x10) = lVar21;
          bVar12 = true;
          if (lVar21 != 0) {
            LOCK();
            *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
            UNLOCK();
          }
          goto LAB_1434e8535;
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)*(int *)(param_2 + 0x10) * 0x10 != lVar18);
    }
    bVar12 = false;
LAB_1434e8535:
    iVar15 = 0;
    uVar20 = 0;
LAB_1434e8542:
    uVar20 = uVar20 & 0xffffffff;
    do {
      iVar7 = (int)uVar20;
      if ((int)(iVar7 + 1U) < (int)uVar3) {
        uVar20 = (longlong)iVar7 + 1;
        bVar6 = true;
        do {
          if (((plVar16[uVar20 * 2] != 0) &&
              (sVar2 = *(short *)(plVar16[uVar20 * 2] + 10), sVar2 != 0)) &&
             ((longlong)*(int *)(param_2 + 0x10) != 0)) {
            lVar18 = 0;
            do {
              lVar21 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar18);
              if ((lVar21 != 0) && (sVar2 == *(short *)(lVar21 + 10))) {
                iVar4 = *(int *)(param_1 + 0x10);
                *(uint *)(param_1 + 0x10) = iVar4 + 1U;
                if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
                  FUN_1479d9002((longlong *)(param_1 + 8),iVar4);
                }
                lVar18 = *(longlong *)(param_1 + 8);
                *(longlong *)(lVar18 + (longlong)iVar4 * 0x10) = plVar16[uVar20 * 2];
                lVar21 = (plVar16 + uVar20 * 2)[1];
                *(longlong *)(lVar18 + 8 + (longlong)iVar4 * 0x10) = lVar21;
                if (lVar21 != 0) {
                  LOCK();
                  *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
                  UNLOCK();
                }
                if (bVar12) goto LAB_1434e85af;
                plVar14 = (longlong *)(ulonglong)(uint)((int)uVar20 - iVar7);
                goto LAB_1434e8695;
              }
              lVar18 = lVar18 + 0x10;
            } while ((longlong)*(int *)(param_2 + 0x10) * 0x10 != lVar18);
          }
          if (bVar12) {
            plVar14 = plVar16 + (longlong)iVar7 * 2;
            FUN_140239688(plVar14,(int)uVar20 - iVar7);
            uVar20 = uVar20 & 0xffffffff;
            goto joined_r0x0001434e8687;
          }
LAB_1434e85af:
          uVar20 = uVar20 + 1;
          bVar6 = (longlong)uVar20 < (longlong)uVar19;
          uVar11 = uVar3;
        } while (uVar20 != uVar19);
      }
      else {
        bVar6 = false;
        uVar11 = iVar7 + 1U;
      }
      uVar20 = (ulonglong)uVar11;
      plVar14 = (longlong *)(ulonglong)(uVar11 - iVar7);
      if (!bVar12) goto LAB_1434e8695;
      FUN_140239688(plVar16 + (longlong)iVar7 * 2,plVar14);
joined_r0x0001434e8687:
      bVar12 = false;
      if (!bVar6) goto LAB_1434e86dd;
    } while( true );
  }
LAB_1434e86ec:
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    plVar16 = *(longlong **)(param_2 + 8);
    plVar14 = plVar16 + (longlong)*(int *)(param_2 + 0x10) * 2;
    do {
      if (((*plVar16 != 0) && (*(short *)(*plVar16 + 10) != 0)) &&
         (iVar15 = *(int *)(param_1 + 0x10), (longlong)iVar15 != 0)) {
        lVar18 = *(longlong *)(param_1 + 8);
        lVar21 = 0;
        do {
          plVar5 = *(longlong **)(lVar18 + lVar21);
          if (((plVar5 != (longlong *)0x0) &&
              (*(short *)((longlong)plVar5 + 10) == *(short *)(*plVar16 + 10))) &&
             (cVar13 = (**(code **)(*plVar5 + 0x18))(), cVar13 != '\0')) {
            cVar13 = (**(code **)(**(longlong **)(lVar18 + lVar21) + 0x28))
                               (*(longlong **)(lVar18 + lVar21),*plVar16,param_3);
            bVar1 = *(byte *)(*(longlong *)(lVar18 + lVar21) + 0x24);
            bVar17 = bVar1 | 4;
            if (cVar13 != '\0') {
              bVar17 = bVar1 & 0xfe;
            }
            *(byte *)(*(longlong *)(lVar18 + lVar21) + 0x24) = bVar17;
          }
          lVar21 = lVar21 + 0x10;
        } while ((longlong)iVar15 * 0x10 != lVar21);
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar14);
  }
  return;
LAB_1434e8695:
  if (iVar15 != iVar7) {
    memmove(plVar16 + (longlong)iVar15 * 2,plVar16 + (longlong)iVar7 * 2,(longlong)(int)plVar14 << 4
           );
  }
  iVar15 = iVar15 + (int)plVar14;
  bVar12 = true;
  if (!bVar6) goto LAB_1434e86dd;
  goto LAB_1434e8542;
LAB_1434e86dd:
  *(int *)(param_1 + 0x20) = iVar15;
  param_3 = (undefined4)CONCAT71((int7)((ulonglong)plVar14 >> 8),(char)param_3);
  goto LAB_1434e86ec;
}



// FUNCTION 1434e880a FUN_1434e880a body=1915 status=ok
// SIG undefined FUN_1434e880a(void)

void FUN_1434e880a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  byte param_5)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  char local_78;
  byte local_69;
  longlong *local_68;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    uVar5 = (uint)param_5;
    if ((int)*(uint *)(param_4 + 1) < (int)(uint)param_5) {
      uVar5 = *(uint *)(param_4 + 1);
    }
    local_69 = (byte)uVar5;
  }
  puVar4 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar4 + 1;
  local_90 = param_2;
  local_88 = param_3;
  if ((byte *)puVar4[1] < pbVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_69,1);
  }
  else {
    local_69 = *(byte *)*puVar4;
    *puVar4 = (ulonglong)pbVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_147aa086a(param_4,local_69);
  }
  if (local_69 != 0) {
    uVar11 = 0;
    do {
      if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) break;
      lVar12 = uVar11 * 0x10;
      if (*(longlong **)(*param_4 + lVar12) == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)(**(code **)(**(longlong **)(*param_4 + lVar12) + 0x58))();
      }
      local_78 = '\0';
      local_80 = plVar6;
      if ((*(byte *)(param_1 + 5) & 4) == 0) {
        (**(code **)(*param_1 + 0x150))(param_1,&local_80);
        plVar9 = local_80;
        if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1434e89d3;
        if (local_80 != (longlong *)0x0) {
          if (DAT_14c948fa0 == 0) {
            local_60 = (code *)&DAT_1427db2a2;
            if (DAT_14c963f04 == '\0') {
              uVar7 = FUN_140011aa6();
              DAT_14c948fa0 = FUN_140011c0e(uVar7,0x250,8);
            }
            else {
              DAT_14c948fa0 = FUN_14001cc68(0x250,8);
            }
            local_a0 = DAT_14c948fa0;
            FUN_1446f470e(local_58,L"ScriptStruct",1);
            local_c0 = &local_60;
            local_c8 = &LAB_1468915ce;
            local_d0 = FUN_1427dc742;
            local_e0 = L"Engine";
            local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
            local_e8 = 0x10;
            local_f0 = 0x10000020;
            local_f8._0_4_ = 8;
            FUN_14574b4b2(local_a0);
            DAT_14c948fa0 = local_a0;
            local_98 = DAT_14c927740;
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_14081d0ea;
              local_c0 = &local_50;
              local_c8 = &LAB_146856450;
              local_d0 = FUN_1427b121c;
              local_d8 = L"Engine";
              local_e0 = (wchar_t *)0x0;
              local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
              local_f0 = 8;
              local_f8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              local_a0 = DAT_14c948fa0;
            }
            DAT_14c948fa0 = local_a0;
            local_98 = DAT_14c927740;
            uVar7 = FUN_1449e2fb2();
            local_f8 = L"ScriptStruct";
            FUN_14574b446(uVar7,local_a0,local_98,L"/Script/CoreUObject");
          }
          if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
              DAT_14c948fa0 + 0x30)) goto LAB_1434e89d3;
          local_78 = '\x01';
          local_80 = (longlong *)0x0;
        }
LAB_1434e8a79:
        if (local_78 == '\x01') {
LAB_1434e8f39:
          FUN_14572541c(param_1);
          break;
        }
      }
      else {
        local_68 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          if (DAT_14c948fa0 == 0) {
            local_60 = (code *)&DAT_1427db2a2;
            if (DAT_14c963f04 == '\0') {
              uVar7 = FUN_140011aa6();
              lVar10 = FUN_140011c0e(uVar7,0x250,8);
            }
            else {
              lVar10 = FUN_14001cc68(0x250,8);
            }
            DAT_14c948fa0 = lVar10;
            local_a0 = lVar10;
            FUN_1446f470e(local_58,L"ScriptStruct",1);
            local_c0 = &local_60;
            local_c8 = &LAB_1468915ce;
            local_d0 = FUN_1427dc742;
            local_e0 = L"Engine";
            local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
            local_e8 = 0x10;
            local_f0 = 0x10000020;
            local_f8._0_4_ = 8;
            FUN_14574b4b2(lVar10);
            DAT_14c948fa0 = lVar10;
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_14081d0ea;
              local_c0 = &local_50;
              local_c8 = &LAB_146856450;
              local_d0 = FUN_1427b121c;
              local_d8 = L"Engine";
              local_e0 = (wchar_t *)0x0;
              local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
              local_f0 = 8;
              local_f8._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              local_a0 = DAT_14c948fa0;
            }
            lVar10 = DAT_14c927740;
            uVar7 = FUN_1449e2fb2();
            local_f8 = L"ScriptStruct";
            FUN_14574b446(uVar7,local_a0,lVar10,L"/Script/CoreUObject");
          }
          if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
              DAT_14c948fa0 + 0x30)) {
            local_78 = '\x01';
          }
          else {
            local_68 = local_80;
          }
        }
        (**(code **)(*param_1 + 0x150))(param_1,&local_68);
LAB_1434e89d3:
        plVar9 = local_80;
        if (local_80 == (longlong *)0x0) goto LAB_1434e8a79;
        do {
          plVar9 = (longlong *)plVar9[8];
          if (plVar9 == (longlong *)0x0) goto LAB_1434e8f39;
          if (DAT_14cada7b0 == (longlong *)0x0) {
            uVar7 = FUN_140002dac();
            DAT_14cada7b0 = (longlong *)FUN_140002ddd(FUN_1463c98b5,uVar7,L"RootMotionSource");
          }
        } while (plVar9 != DAT_14cada7b0);
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           ((*(longlong *)(*param_4 + lVar12) == 0 || (plVar6 != local_80)))) {
          lVar8 = FUN_14001cc68((longlong)*(int *)(local_80[0x17] + 8),0);
          (**(code **)(*local_80 + 0x2e8))(local_80,lVar8,1);
          plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14a8ea050;
          plVar9[2] = lVar8;
          lVar10 = *param_4;
          *(longlong *)(lVar10 + lVar12) = lVar8;
          plVar6 = *(longlong **)(lVar10 + 8 + lVar12);
          if (plVar9 == plVar6) {
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar9 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
                plVar6 = plVar9;
                goto joined_r0x0001434e8b76;
              }
            }
          }
          else {
            *(longlong **)(lVar10 + lVar12 + 8) = plVar9;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar6 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar3 = *piVar2;
                UNLOCK();
joined_r0x0001434e8b76:
                if (iVar3 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
        }
        if ((*(byte *)((longlong)local_80 + 0xb1) & 4) != 0) {
          local_f8 = *(wchar_t **)(*param_4 + lVar12);
          (**(code **)(*(longlong *)local_80[0x17] + 0x40))
                    ((longlong *)local_80[0x17],param_1,local_90,local_88);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_69);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e8f86 FUN_1434e8f86 body=335 status=ok
// SIG undefined FUN_1434e8f86(void)

void FUN_1434e8f86(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    if ((*plVar2 == 0) || (*(short *)(*plVar2 + 10) == 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    iVar9 = 0;
    uVar10 = 0;
LAB_1434e8fd8:
    do {
      iVar4 = (int)uVar10;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        lVar7 = (longlong)iVar4;
        lVar13 = lVar7 + 2;
        plVar14 = plVar2 + lVar7 * 2 + 2;
        bVar3 = true;
        lVar12 = -1;
        do {
          iVar11 = (int)lVar12;
          if ((*plVar14 == 0) || (*(short *)(*plVar14 + 10) == 0)) {
            if (!bVar6) {
              uVar10 = (ulonglong)(uint)(iVar4 - iVar11);
              iVar11 = -iVar11;
              goto LAB_1434e908a;
            }
          }
          else if (bVar6) {
            FUN_140239688(plVar2 + lVar7 * 2,-iVar11);
            if (!bVar3) goto LAB_1434e90bc;
            uVar10 = (uVar10 & 0xffffffff) - lVar12;
            bVar6 = false;
            goto LAB_1434e8fd8;
          }
          bVar3 = lVar13 < lVar8;
          lVar12 = lVar12 + -1;
          lVar13 = lVar13 + 1;
          plVar14 = plVar14 + 2;
          uVar5 = uVar1;
        } while (lVar7 - lVar8 != lVar12);
      }
      else {
        bVar3 = false;
        uVar5 = iVar4 + 1U;
      }
      uVar10 = (ulonglong)uVar5;
      iVar11 = uVar5 - iVar4;
      if (bVar6) {
        FUN_140239688(plVar2 + (longlong)iVar4 * 2,iVar11);
        bVar6 = false;
        if (!bVar3) break;
        goto LAB_1434e8fd8;
      }
LAB_1434e908a:
      if (iVar9 != iVar4) {
        memmove(plVar2 + (longlong)iVar9 * 2,plVar2 + (longlong)iVar4 * 2,(longlong)iVar11 << 4);
      }
      iVar9 = iVar9 + iVar11;
      bVar6 = true;
    } while (bVar3);
LAB_1434e90bc:
    *(int *)(param_1 + 0x10) = iVar9;
  }
  return;
}



// FUNCTION 1434e90ee FUN_1434e90ee body=442 status=ok
// SIG undefined FUN_1434e90ee(void)

void FUN_1434e90ee(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar6 = DAT_14c999b78;
  uVar1 = *(uint *)(param_2[3] + 0x10);
  uVar12 = (ulonglong)uVar1;
  if (uVar12 < 0x100) {
    lVar2 = *param_2;
    plVar3 = (longlong *)param_2[4];
    plVar4 = *(longlong **)(param_2[3] + 8);
    FUN_147aaf0fc(param_1,plVar3,lVar2);
    if (uVar1 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,uVar12 * 0x10,8);
      *plVar3 = (longlong)pvVar7;
      *(uint *)(plVar3 + 1) = uVar1;
      memset(pvVar7,0,uVar12 * 0x10);
      plVar9 = plVar4;
      do {
        if (((longlong *)*plVar9 != (longlong *)0x0) &&
           (lVar8 = (**(code **)(*(longlong *)*plVar9 + 0x58))(), uVar6 = DAT_14c99b208, lVar8 != 0)
           ) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if ((longlong)(int)uVar1 != 0) {
            lVar5 = *plVar3;
            lVar11 = 0;
            iVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar11) == lVar8) {
                if (iVar10 != 1) {
                  lVar8 = *(longlong *)(lVar2 + 0x10) + (ulonglong)(uint)-iVar10 * 0x10;
                  if (uVar1 <= (uint)-iVar10) {
                    lVar8 = 0;
                  }
                  lVar8 = *(longlong *)(lVar8 + 8);
                  *(int *)((longlong)plVar9 + ((lVar5 + 8) - (longlong)plVar4)) = 1 - iVar10;
                  pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                             (DAT_14c872d28,*(undefined4 *)(lVar8 + 0x74),
                                              *(undefined2 *)(lVar8 + 0x7a));
                  *(void **)((longlong)plVar9 + (lVar5 - (longlong)plVar4)) = pvVar7;
                  memset(pvVar7,0,(ulonglong)*(uint *)(lVar8 + 0x74));
                  FUN_146f3a82c(param_1,*(undefined8 *)
                                         ((longlong)plVar9 + (lVar5 - (longlong)plVar4)),*plVar9,
                                lVar8);
                  goto LAB_1434e91a2;
                }
                break;
              }
              iVar10 = iVar10 + -1;
              lVar11 = lVar11 + 0x10;
            } while ((longlong)(int)uVar1 << 4 != lVar11);
          }
          FUN_146f5b89e(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            *(undefined8 *)(param_1 + 8) = uVar6;
          }
        }
LAB_1434e91a2:
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar4 + uVar12 * 2);
    }
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar6;
    }
  }
  return;
}



// FUNCTION 1434e92a8 FUN_1434e92a8 body=442 status=ok
// SIG undefined FUN_1434e92a8(void)

void FUN_1434e92a8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar6 = DAT_14c999b78;
  uVar1 = *(uint *)(param_2[3] + 0x20);
  uVar12 = (ulonglong)uVar1;
  if (uVar12 < 0x100) {
    lVar2 = *param_2;
    plVar3 = (longlong *)param_2[4];
    plVar4 = *(longlong **)(param_2[3] + 0x18);
    FUN_147aaf1cc(param_1,plVar3,lVar2);
    if (uVar1 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,uVar12 * 0x10,8);
      *plVar3 = (longlong)pvVar7;
      *(uint *)(plVar3 + 1) = uVar1;
      memset(pvVar7,0,uVar12 * 0x10);
      plVar9 = plVar4;
      do {
        if (((longlong *)*plVar9 != (longlong *)0x0) &&
           (lVar8 = (**(code **)(*(longlong *)*plVar9 + 0x58))(), uVar6 = DAT_14c99b208, lVar8 != 0)
           ) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if ((longlong)(int)uVar1 != 0) {
            lVar5 = *plVar3;
            lVar11 = 0;
            iVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar11) == lVar8) {
                if (iVar10 != 1) {
                  lVar8 = *(longlong *)(lVar2 + 0x10) + (ulonglong)(uint)-iVar10 * 0x10;
                  if (uVar1 <= (uint)-iVar10) {
                    lVar8 = 0;
                  }
                  lVar8 = *(longlong *)(lVar8 + 8);
                  *(int *)((longlong)plVar9 + ((lVar5 + 8) - (longlong)plVar4)) = 1 - iVar10;
                  pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                             (DAT_14c872d28,*(undefined4 *)(lVar8 + 0x74),
                                              *(undefined2 *)(lVar8 + 0x7a));
                  *(void **)((longlong)plVar9 + (lVar5 - (longlong)plVar4)) = pvVar7;
                  memset(pvVar7,0,(ulonglong)*(uint *)(lVar8 + 0x74));
                  FUN_146f3a82c(param_1,*(undefined8 *)
                                         ((longlong)plVar9 + (lVar5 - (longlong)plVar4)),*plVar9,
                                lVar8);
                  goto LAB_1434e935c;
                }
                break;
              }
              iVar10 = iVar10 + -1;
              lVar11 = lVar11 + 0x10;
            } while ((longlong)(int)uVar1 << 4 != lVar11);
          }
          FUN_146f5b89e(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            *(undefined8 *)(param_1 + 8) = uVar6;
          }
        }
LAB_1434e935c:
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar4 + uVar12 * 2);
    }
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar6;
    }
  }
  return;
}



// FUNCTION 1434e9462 FUN_1434e9462 body=1496 status=ok
// SIG undefined FUN_1434e9462(void)

ulonglong FUN_1434e9462(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a0;
  int local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  code *local_70;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 == 0) || (pcVar10 = *(code **)(param_2 + 0x430), pcVar10 == (code *)0x0)) {
LAB_1434e999d:
    uVar8 = 0;
    goto LAB_1434e999f;
  }
  if (DAT_14cae9568 == 0) {
    local_c0 = &local_70;
    local_70 = FUN_1417de738;
    local_b0 = &LAB_145893408;
    local_b8 = &LAB_1458cbbd2;
    local_c8 = &LAB_147ba21f1;
    local_d0 = &LAB_1463e9233;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x1000000c;
    local_f0 = 8;
    local_f8 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    pcVar10 = *(code **)(param_2 + 0x430);
    if (pcVar10 == (code *)0x0) goto LAB_1434e999d;
  }
  uVar8 = 0;
  if ((DAT_14cae9568 == 0) || (lVar11 = *(longlong *)(pcVar10 + 0x10), lVar11 == 0))
  goto LAB_1434e999f;
  if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
      DAT_14cae9568 + 0x30)) goto LAB_1434e999d;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_1446efa72(&local_90,0,3,0x10);
  local_88 = 3;
  *local_90 = &PTR_LAB_14a8ea140;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_90[2] = lVar7;
  *local_90 = &PTR_FUN_14a8ea0d0;
  local_90[3] = uVar2;
  local_90[4] = uVar3;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_147aaf692(&local_a0,&local_90);
  lVar11 = *param_1;
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
LAB_1434e965b:
    lVar7 = FUN_1458d4c52();
    if ((((lVar7 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar7 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)) || (0x7ffffffe < *(int *)(param_3 + 8) - 2U)) goto LAB_1434e95aa;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    local_70 = pcVar10;
    FUN_147aaf692(&local_68,&local_a0);
    local_58 = lVar11;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar11);
    }
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,4,0x10);
    puVar4 = local_50;
    local_48 = 4;
    *local_50 = &PTR_LAB_14a8e9f60;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_50[2] = lVar7;
    *local_50 = &PTR_FUN_14a8ea1b0;
    local_50[3] = 0;
    uVar1 = *(uint *)(pcVar10 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar5;
    puVar4[4] = local_70;
    puVar4[5] = local_68;
    local_68 = (undefined8 *)0x0;
    *(int *)(puVar4 + 6) = local_60;
    local_60 = 0;
    puVar4[7] = local_58;
    if ((local_58 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      if (local_60 != 0) {
        if (local_68 == (undefined8 *)0x0) goto LAB_1434e982e;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1434e982e:
    local_80 = 0;
    local_78 = 0;
    FUN_147aaf716(&local_80,&local_50);
    uVar6 = (**(code **)(*(longlong *)pcVar10 + 800))(pcVar10);
    FUN_147ac7bb8(param_3,uVar6,&local_80);
    if (local_48 == 0) {
LAB_1434e98ad:
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
      goto LAB_1434e98ad;
    }
    uVar8 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
  }
  else {
    if (lVar11 != 0) goto LAB_1434e965b;
LAB_1434e95aa:
    uVar8 = 0;
  }
  if (local_98 == 0) {
LAB_1434e95e6:
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,0);
    FUN_1446efa72(&local_a0,0,0,0x10);
    local_98 = 0;
    goto LAB_1434e95e6;
  }
  if (local_88 != 0) {
    if (local_90 == (undefined8 *)0x0) goto LAB_1434e999f;
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434e999f:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1434e9a3c FUN_1434e9a3c body=493 status=ok
// SIG undefined FUN_1434e9a3c(void)

undefined8 FUN_1434e9a3c(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (plVar6 = *(longlong **)(param_2 + 0x430), plVar6 != (longlong *)0x0)) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      plVar6 = *(longlong **)(param_2 + 0x430);
      if (plVar6 == (longlong *)0x0) goto LAB_1434e9ac1;
    }
    uVar5 = 0;
    if ((DAT_14cae9568 == 0) || (lVar4 = plVar6[2], lVar4 == 0)) goto LAB_1434e9ac3;
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      pcVar1 = (code *)*param_1;
      if ((pcVar1 != (code *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(pcVar1);
      }
      else if (pcVar1 == (code *)0x0) goto LAB_1434e9ac1;
      lVar4 = FUN_1458d4c52();
      if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(pcVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(pcVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (*(int *)(param_3 + 8) - 2U < 0x7fffffff)) {
        uVar3 = (**(code **)(*plVar6 + 800))(plVar6);
        cVar2 = FUN_1463cc9c8(param_3,uVar3);
        if (cVar2 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_147abc87a(param_3,uVar3);
        }
        local_38 = pcVar1;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(pcVar1);
        }
        uVar5 = FUN_1434e9c2a(uVar5,param_3,&local_38,plVar6);
        goto LAB_1434e9ac3;
      }
    }
  }
LAB_1434e9ac1:
  uVar5 = 0;
LAB_1434e9ac3:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1434e9c2a FUN_1434e9c2a body=359 status=ok
// SIG undefined FUN_1434e9c2a(void)

longlong * FUN_1434e9c2a(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar1 = FUN_1458d4c52();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = *param_3;
      if (lVar1 == 0) {
LAB_1434e9cb6:
        lVar1 = 0;
      }
      else {
        lVar2 = FUN_1458d4c52();
        if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_1434e9cb6;
        lVar1 = *param_3;
      }
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        local_48 = (void *)0x0;
        local_40 = *(int *)(param_2 + 1);
        lVar1 = (longlong)local_40;
        _Src = (void *)*param_2;
        if (lVar1 == 0) {
          local_3c = 0;
        }
        else {
          FUN_1446dd670(&local_48,local_40,0);
          memcpy(local_48,_Src,lVar1 * 2);
        }
        (**(code **)(*param_1 + 800))(param_1,param_4,&local_48,1);
        goto LAB_1434e9d36;
      }
    }
  }
  local_38 = *param_3;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1 = (longlong *)FUN_147aa3628(&local_38,param_4,param_2);
LAB_1434e9d36:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e9d92 FUN_1434e9d92 body=207 status=ok
// SIG undefined FUN_1434e9d92(void)

ulonglong FUN_1434e9d92(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
    (**(code **)(*param_1 + 0x2d8))(param_1,&local_38);
    bVar5 = local_30 - 2U < 0x7fffffff;
    uVar4 = CONCAT71((int7)((ulonglong)&local_38 >> 8),bVar5);
    if (bVar5) {
      (**(code **)(*param_1 + 0x338))(param_1);
      uVar2 = FUN_147abfece(param_1,&local_38,uVar1);
      local_48 = (undefined4)param_1[9];
      (**(code **)(*param_1 + 0x348))(param_1,&local_38,uVar1,uVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434e9e62 FUN_1434e9e62 body=605 status=ok
// SIG undefined FUN_1434e9e62(void)

ulonglong FUN_1434e9e62(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar4 == 0) {
    uVar7 = 0;
    goto LAB_1434e9ed6;
  }
  uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_50);
  bVar9 = local_48 - 2U < 0x7fffffff;
  uVar7 = CONCAT71((int7)((ulonglong)&local_50 >> 8),bVar9);
  if (bVar9) {
    (**(code **)(*param_1 + 0x338))(param_1);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a8ea290;
    *(int *)(local_60 + 1) = (int)param_1[9];
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14a8ea220;
    local_60[3] = 0;
    iVar6 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar6 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar6 = *(int *)(lVar4 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar4 + 0x10) = iVar8;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_147aa3726;
    local_70 = 0;
    local_68 = 0;
    FUN_147aafa62(&local_70,&local_60);
    FUN_147ac7764(param_1,&local_50,uVar3,&local_70);
    if (local_58 != 0) {
      if (local_60 == (undefined8 *)0x0) goto LAB_1434e9ec3;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434e9ec3:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_1434e9ed6:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1434ea0c0 FUN_1434ea0c0 body=63 status=ok
// SIG undefined FUN_1434ea0c0(void)

void FUN_1434ea0c0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14477b072(param_1,DAT_14cada9d8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  return;
}



// FUNCTION 1434ea100 FUN_1434ea100 body=91 status=ok
// SIG undefined FUN_1434ea100(void)

void FUN_1434ea100(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cada9c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ea15c FUN_1434ea15c body=3445 status=ok
// SIG undefined FUN_1434ea15c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1434ea15c(longlong param_1,double *param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar34 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  dVar32 = *(double *)(param_1 + 0x380);
  dVar8 = *(double *)(param_1 + 0x388);
  dVar6 = *(double *)(param_1 + 0x390);
  dVar9 = *(double *)(param_1 + 0x398);
  dVar22 = *(double *)(param_1 + 0x368);
  dVar24 = *(double *)(param_1 + 0x370);
  dVar17 = *(double *)(param_1 + 0x378);
  if (param_4 == 0) {
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    auVar36 = _DAT_149934d80;
    auVar34 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar26 = auVar34._0_8_;
    dVar3 = auVar34._8_8_;
    auVar23 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar5 = auVar23._0_8_;
    dVar38 = auVar23._8_8_;
    auVar33 = minpd(_DAT_149934d80,auVar34);
    auVar40 = minpd(ZEXT816(0x3ff0000000000000),auVar23);
    auVar23._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    iVar13 = movmskpd((int)local_d0,auVar23);
    auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
    uVar14 = movmskpd((int)param_2,auVar41);
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar29 = *(double *)(param_1 + 0x240);
      dVar10 = *(double *)(param_1 + 0x248);
      dVar11 = *(double *)(param_1 + 0x250);
      dVar12 = *(double *)(param_1 + 600);
      dVar39 = *(double *)(param_1 + 600);
      dVar44 = *(double *)(param_1 + 600);
      dVar46 = *(double *)(param_1 + 0x240);
      dVar1 = *(double *)(param_1 + 0x240);
      dVar2 = *(double *)(param_1 + 0x248);
      dVar43 = *(double *)(param_1 + 0x248);
      dVar47 = *(double *)(param_1 + 0x250);
      dVar45 = *(double *)(param_1 + 0x250);
      dVar22 = dVar22 * dVar26;
      dVar24 = dVar24 * dVar3;
      dVar17 = dVar17 * dVar5;
      dVar21 = dVar38 * 0.0;
      dVar25 = dVar24 * dVar29 - dVar22 * dVar10;
      dVar27 = dVar17 * dVar10 - dVar24 * dVar11;
      dVar28 = dVar22 * dVar11 - dVar17 * dVar29;
      dVar7 = dVar21 * dVar12 - dVar21 * dVar12;
      dVar27 = dVar27 + dVar27;
      dVar28 = dVar28 + dVar28;
      dVar25 = dVar25 + dVar25;
      dVar7 = dVar7 + dVar7;
      dVar26 = *(double *)(param_1 + 0x260);
      dVar48 = *(double *)(param_1 + 0x268);
      dVar3 = *(double *)(param_1 + 0x270);
      dVar49 = *(double *)(param_1 + 0x278);
      *param_2 = dVar8 * dVar47 * -1.0 + dVar6 * dVar2 + dVar9 * dVar46 * 1.0 + dVar32 * dVar39;
      param_2[1] = dVar32 * dVar45 * 1.0 + dVar9 * dVar43 + dVar6 * dVar1 * -1.0 + dVar8 * dVar44;
      param_2[2] = dVar9 * dVar47 * 1.0 + ((dVar46 * dVar8 * 1.0 + dVar6 * dVar39) - dVar32 * dVar2)
      ;
      param_2[3] = dVar6 * dVar45 * -1.0 +
                   ((dVar1 * dVar32 * -1.0 + dVar9 * dVar44) - dVar8 * dVar43);
      param_2[4] = (dVar25 * dVar10 - dVar11 * dVar28) + dVar39 * dVar27 + dVar22 + dVar26;
      param_2[5] = (dVar27 * dVar11 - dVar25 * dVar29) + dVar44 * dVar28 + dVar24 + dVar48;
      param_2[6] = (dVar28 * dVar29 - dVar10 * dVar27) + dVar39 * dVar25 + dVar17 + dVar3;
      param_2[7] = (dVar7 * dVar12 - dVar7 * dVar12) + dVar44 * dVar7 + dVar21 + dVar49;
      *(undefined1 (*) [16])(param_2 + 8) = auVar34;
      auVar34._8_4_ = SUB84(dVar38 * 0.0,0);
      auVar34._0_8_ = dVar5 * 1.0;
      auVar34._12_4_ = (int)((ulonglong)(dVar38 * 0.0) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar34;
    }
    else {
      dVar2 = *(double *)(param_1 + 0x240);
      dVar43 = *(double *)(param_1 + 0x248);
      dVar39 = *(double *)(param_1 + 0x250);
      dVar45 = dVar43 + dVar43;
      dVar47 = dVar39 + dVar39;
      dVar46 = dVar2 * (dVar2 + dVar2);
      local_1d8 = ((double)DAT_149934d80 - (dVar39 * dVar47 + dVar43 * dVar45)) * dVar26;
      dVar44 = (DAT_149934d80._8_8_ - (dVar39 * dVar47 + dVar46)) * dVar3;
      dVar1 = *(double *)(param_1 + 0x240) * dVar47;
      dVar39 = *(double *)(param_1 + 600);
      dVar48 = dVar47 * dVar39;
      dVar49 = (dVar2 + dVar2) * *(double *)(param_1 + 600);
      dVar39 = dVar45 * dVar39;
      dStack_190 = (dVar47 * dVar43 - dVar49) * dVar5;
      local_198 = (dVar39 + dVar1) * dVar5;
      dStack_1d0 = (dVar45 * dVar2 + dVar48) * dVar26;
      local_1a8 = (dVar47 * dVar43 + dVar49) * dVar3;
      local_188 = (1.0 - (dVar46 + dVar43 * dVar45)) * dVar5;
      local_1c8 = (dVar1 - dVar39) * dVar26;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar44,0);
      local_1b8._0_8_ = (dVar45 * dVar2 - dVar48) * dVar3;
      local_1b8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined8 *)(param_1 + 0x260);
      uStack_170 = *(undefined8 *)(param_1 + 0x268);
      local_168 = *(undefined8 *)(param_1 + 0x270);
      uStack_160 = 0x3ff0000000000000;
      dVar46 = dVar8 + dVar8;
      dVar44 = dVar6 + dVar6;
      dVar39 = dVar32 * (dVar32 + dVar32);
      local_258 = (double)DAT_149934d80 - (dVar6 * dVar44 + dVar8 * dVar46);
      dStack_230 = DAT_149934d80._8_8_ - (dVar6 * dVar44 + dVar39);
      local_208 = 1.0 - (dVar39 + dVar8 * dVar46);
      dVar6 = (dVar32 + dVar32) * dVar9;
      dStack_250 = dVar46 * dVar32 + dVar44 * dVar9;
      local_228 = dVar44 * dVar8 + dVar6;
      local_238 = dVar46 * dVar32 - dVar44 * dVar9;
      dVar6 = dVar44 * dVar8 - dVar6;
      local_248 = dVar32 * dVar44 - dVar46 * dVar9;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar6,0);
      local_218._0_8_ = dVar46 * dVar9 + dVar32 * dVar44;
      local_218._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar22;
      dStack_1f0 = dVar24;
      local_1e8 = dVar17;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar26);
      auVar23 = blendvpd(_DAT_149936790,auVar36,auVar19);
      uVar16 = -(ulonglong)(0.0 <= dVar5 * 1.0);
      dVar17 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
      dVar32 = auVar23._0_8_;
      local_148 = local_148 * dVar32;
      local_150 = local_150 * dVar32;
      local_158 = local_158 * dVar32;
      dVar32 = auVar23._8_8_;
      local_128 = local_128 * dVar32;
      local_130 = local_130 * dVar32;
      local_138 = dVar32 * local_138;
      local_108 = local_108 * dVar17;
      local_110 = local_110 * dVar17;
      local_118 = dVar17 * local_118;
      FUN_14481fd10(&local_2d8,&local_158);
      dVar17 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ + local_2d8 * local_2d8;
      dVar32 = (double)local_2c8._8_8_ * (double)local_2c8._8_8_ + dStack_2d0 * dStack_2d0;
      auVar31._0_8_ = dVar17 + dVar32;
      auVar31._8_8_ = dVar17 + dVar32;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
      auVar23 = sqrtpd(auVar31,auVar31);
      auVar36 = divpd(auVar36,auVar23);
      auVar37._0_8_ = auVar36._0_8_ * (double)local_2c8._0_8_;
      auVar37._8_8_ = auVar36._8_8_ * (double)local_2c8._8_8_;
      auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar34;
      param_2[10] = dVar5 * 1.0;
      param_2[0xb] = dVar38 * 0.0;
      *param_2 = (double)((ulonglong)(local_2d8 * auVar36._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
      param_2[1] = (double)((ulonglong)(dStack_2d0 * auVar36._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
      *(undefined1 (*) [16])(param_2 + 2) = auVar23;
      param_2[4] = local_f8;
      param_2[5] = dStack_f0;
      param_2[6] = local_e8;
      param_2[7] = 0.0;
    }
  }
  else if ((param_4 == 1) && (lVar4 = *(longlong *)(param_1 + 0xa8), lVar4 != 0)) {
    local_2a8 = 0.0;
    dStack_2a0 = 0.0;
    local_2b8 = 0.0;
    dStack_2b0 = 0.0;
    auVar23 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar26 = auVar23._0_8_;
    dVar3 = auVar23._8_8_;
    auVar36 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar5 = auVar36._0_8_;
    auVar33 = minpd(_DAT_149934d80,auVar23);
    auVar42 = minpd(ZEXT816(0x3ff0000000000000),auVar36);
    auVar40._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    iVar13 = movmskpd((int)local_d0,auVar40);
    auVar33._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar14 = movmskpd((int)param_2,auVar33);
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar48 = *(double *)(param_1 + 0x240);
      dVar49 = *(double *)(param_1 + 0x248);
      dVar38 = *(double *)(param_1 + 600);
      dVar39 = *(double *)(param_1 + 600);
      dVar46 = *(double *)(param_1 + 0x240);
      dVar44 = *(double *)(param_1 + 0x240);
      dVar1 = *(double *)(param_1 + 0x248);
      dVar2 = *(double *)(param_1 + 0x248);
      dVar25 = *(double *)(param_1 + 0x250);
      dVar7 = *(double *)(param_1 + 600);
      dVar45 = *(double *)(param_1 + 0x250);
      dVar43 = *(double *)(param_1 + 0x250);
      local_2d8 = dVar8 * dVar45 * -1.0 + dVar6 * dVar1 + dVar9 * dVar46 * 1.0 + dVar32 * dVar38;
      dStack_2d0 = dVar32 * dVar43 * 1.0 + dVar9 * dVar2 + dVar6 * dVar44 * -1.0 + dVar8 * dVar39;
      dVar22 = dVar22 * dVar26;
      dVar24 = dVar24 * dVar3;
      dVar17 = dVar17 * dVar5;
      dVar28 = auVar36._8_8_ * 0.0;
      dVar26 = dVar24 * dVar48 - dVar22 * dVar49;
      dVar29 = dVar17 * dVar49 - dVar24 * dVar25;
      dVar47 = dVar22 * dVar25 - dVar17 * dVar48;
      dVar3 = dVar28 * dVar7 - dVar28 * dVar7;
      dVar29 = dVar29 + dVar29;
      dVar47 = dVar47 + dVar47;
      dVar26 = dVar26 + dVar26;
      dVar3 = dVar3 + dVar3;
      local_2b8 = (dVar26 * dVar49 - dVar25 * dVar47) + dVar38 * dVar29 + dVar22 +
                  *(double *)(param_1 + 0x260);
      dStack_2b0 = (dVar29 * dVar25 - dVar26 * dVar48) + dVar39 * dVar47 + dVar24 +
                   *(double *)(param_1 + 0x268);
      local_2a8 = (dVar47 * dVar48 - dVar49 * dVar29) + dVar38 * dVar26 + dVar17 +
                  *(double *)(param_1 + 0x270);
      dStack_2a0 = (dVar3 * dVar7 - dVar3 * dVar7) + dVar39 * dVar3 + dVar28 +
                   *(double *)(param_1 + 0x278);
      local_2c8._8_8_ =
           dVar6 * dVar43 * -1.0 + ((dVar44 * dVar32 * -1.0 + dVar9 * dVar39) - dVar8 * dVar2);
      local_2c8._0_8_ =
           dVar9 * dVar45 * 1.0 + ((dVar46 * dVar8 * 1.0 + dVar6 * dVar38) - dVar32 * dVar1);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x240);
      dVar2 = *(double *)(param_1 + 0x248);
      dVar38 = *(double *)(param_1 + 0x250);
      dVar43 = dVar2 + dVar2;
      dVar45 = dVar38 + dVar38;
      dVar44 = dVar1 * (dVar1 + dVar1);
      local_1d8 = ((double)DAT_149934d80 - (dVar38 * dVar45 + dVar2 * dVar43)) * dVar26;
      dVar39 = (DAT_149934d80._8_8_ - (dVar38 * dVar45 + dVar44)) * dVar3;
      dVar46 = *(double *)(param_1 + 0x240) * dVar45;
      dVar38 = *(double *)(param_1 + 600);
      dVar47 = dVar45 * dVar38;
      dVar48 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
      dVar38 = dVar43 * dVar38;
      dStack_190 = (dVar45 * dVar2 - dVar48) * dVar5;
      local_198 = (dVar38 + dVar46) * dVar5;
      dStack_1d0 = (dVar43 * dVar1 + dVar47) * dVar26;
      local_1a8 = (dVar45 * dVar2 + dVar48) * dVar3;
      local_188 = (1.0 - (dVar44 + dVar2 * dVar43)) * dVar5;
      local_1c8 = (dVar46 - dVar38) * dVar26;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar39,0);
      local_1b8._0_8_ = (dVar43 * dVar1 - dVar47) * dVar3;
      local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined8 *)(param_1 + 0x260);
      uStack_170 = *(undefined8 *)(param_1 + 0x268);
      local_168 = *(undefined8 *)(param_1 + 0x270);
      uStack_160 = 0x3ff0000000000000;
      dVar44 = dVar8 + dVar8;
      dVar39 = dVar6 + dVar6;
      dVar38 = dVar32 * (dVar32 + dVar32);
      local_258 = (double)DAT_149934d80 - (dVar6 * dVar39 + dVar8 * dVar44);
      dStack_230 = DAT_149934d80._8_8_ - (dVar6 * dVar39 + dVar38);
      local_208 = 1.0 - (dVar38 + dVar8 * dVar44);
      dVar6 = (dVar32 + dVar32) * dVar9;
      dStack_250 = dVar44 * dVar32 + dVar39 * dVar9;
      local_228 = dVar39 * dVar8 + dVar6;
      local_238 = dVar44 * dVar32 - dVar39 * dVar9;
      dVar6 = dVar39 * dVar8 - dVar6;
      local_248 = dVar32 * dVar39 - dVar44 * dVar9;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar6,0);
      local_218._0_8_ = dVar44 * dVar9 + dVar32 * dVar39;
      local_218._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar22;
      dStack_1f0 = dVar24;
      local_1e8 = dVar17;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar42._8_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar42._0_8_ = -(ulonglong)(0.0 <= dVar26);
      auVar33 = blendvpd(_DAT_149936790,auVar34,auVar42);
      uVar16 = -(ulonglong)(0.0 <= dVar5 * 1.0);
      dVar17 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
      dVar32 = auVar33._0_8_;
      local_148 = local_148 * dVar32;
      local_150 = local_150 * dVar32;
      local_158 = local_158 * dVar32;
      dVar32 = auVar33._8_8_;
      local_128 = local_128 * dVar32;
      local_130 = local_130 * dVar32;
      local_138 = dVar32 * local_138;
      local_108 = local_108 * dVar17;
      local_110 = local_110 * dVar17;
      local_118 = dVar17 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar17 = local_268 * local_268 + local_278 * local_278;
      dVar32 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar30._0_8_ = dVar17 + dVar32;
      auVar30._8_8_ = dVar17 + dVar32;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      auVar33 = sqrtpd(auVar30,auVar30);
      auVar34 = divpd(auVar34,auVar33);
      auVar35._0_8_ = auVar34._0_8_ * local_268;
      auVar35._8_8_ = auVar34._8_8_ * dStack_260;
      local_2d8 = (double)((ulonglong)(local_278 * auVar34._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
      dStack_2d0 = (double)((ulonglong)(dStack_270 * auVar34._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
      local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar18);
      local_2b8 = local_f8;
      dStack_2b0 = dStack_f0;
      local_2a8 = local_e8;
      dStack_2a0 = 0.0;
    }
    dStack_280 = auVar36._8_8_ * 0.0;
    local_288 = dVar5 * 1.0;
    lVar4 = *(longlong *)(lVar4 + 0x1c8);
    puVar15 = &DAT_14c846480;
    if (lVar4 != 0) {
      puVar15 = (undefined8 *)(lVar4 + 0x240);
    }
    local_298 = auVar23;
    FUN_1449437a2(&local_2d8,param_2,puVar15);
  }
  else {
    *param_2 = dVar32;
    param_2[1] = dVar8;
    param_2[2] = dVar6;
    param_2[3] = dVar9;
    param_2[4] = dVar22;
    param_2[5] = dVar24;
    param_2[6] = dVar17;
    param_2[7] = 0.0;
    param_2[8] = 1.0;
    param_2[9] = 1.0;
    param_2[10] = 1.0;
    param_2[0xb] = 0.0;
  }
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1434eaf1c FUN_1434eaf1c body=69 status=ok
// SIG undefined FUN_1434eaf1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434eaf1c(void)

{
  _DAT_14cadabf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434eaf5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cadac00,1);
  return;
}



// FUNCTION 1434eafbe FUN_1434eafbe body=2881 status=ok
// SIG undefined FUN_1434eafbe(void)

void FUN_1434eafbe(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  longlong *local_308;
  longlong *local_300 [2];
  undefined8 local_2f0;
  longlong *local_2e8;
  longlong *local_2e0 [2];
  undefined1 local_2d0 [104];
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  longlong *local_260 [2];
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240 [2];
  longlong *local_230 [2];
  undefined1 local_220 [104];
  undefined2 *local_1b8;
  int local_1b0;
  longlong local_1a8 [5];
  longlong local_180 [2];
  longlong local_170;
  longlong local_158;
  longlong local_148;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_118;
  longlong *local_110;
  wchar_t **local_108;
  ulonglong *local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined2 *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c4;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  wchar_t *local_80;
  int local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_338;
  plVar2 = (longlong *)param_1[4];
  FUN_140810d00(local_180,0);
  FUN_14622068e(local_180,L"DefaultPlayer",&DAT_14c872af8);
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_318 = 0;
  cVar5 = FUN_14063337c(&DAT_149dfb77a,L"-REPLAY=",local_1a8,1);
  if (cVar5 == '\0') {
    local_318 = 0;
    cVar5 = FUN_14063337c(&DAT_149dfb77a,L"-REPLAYPLAYLIST=",local_1a8,0);
    if (cVar5 != '\0') {
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = -0x100000000;
      local_e8 = (undefined2 *)0x0;
      iStack_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      iVar6 = FUN_1403de9f2(local_1a8,&local_e8,&DAT_149e06196,1);
      if ((iVar6 != 0) && (cVar5 = FUN_147aa5764(&local_e8,param_1), cVar5 != '\0')) {
        FUN_147aa5484(&local_e8);
        goto LAB_1434eb6d0;
      }
      FUN_147aa5484(&local_e8);
    }
  }
  else {
    local_e8 = (undefined2 *)0x0;
    iStack_e0 = 0;
    uStack_dc = 0;
    cVar5 = (**(code **)(*param_1 + 0x370))(param_1,local_1a8,0,&local_e8);
    FUN_1447a1747(local_e8,iStack_e0);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar5 != '\0') goto LAB_1434eb6d0;
  }
  plVar7 = (longlong *)FUN_140628716();
  lVar16 = plVar7[0x22];
  if (lVar16 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar16 = plVar7[0x22];
  }
  FUN_140810f5e(&local_1b8,0);
  FUN_140474144(&local_e8,&local_1b8,lVar16 + 0x28);
  puVar4 = local_e8;
  puVar15 = local_e8;
  if (iStack_e0 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  FUN_140245d8a(&local_e8,local_180,puVar15,1);
  if (local_c4 != 0) {
    FUN_145ad1184(local_220,&local_e8);
    iVar6 = (**(code **)(*plVar2 + 0x4b8))(plVar2,param_1[6],local_220,local_1a8 + 2);
    if (iVar6 != 1) goto LAB_1434eb7e2;
  }
  puVar11 = &DAT_149dfb77a;
  if (local_1b0 != 0) {
    puVar11 = local_1b8;
  }
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar15 + lVar8);
    uVar10 = (ulonglong)uVar9;
    uVar12 = *(ushort *)((longlong)puVar11 + lVar8);
    if (uVar9 != uVar12) break;
    if (uVar9 == 0) goto LAB_1434eb462;
LAB_1434eb1a3:
    lVar8 = lVar8 + 2;
  }
  if ((uVar12 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar13 = (ulonglong)uVar12;
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar13]) goto LAB_1434eb1a3;
  }
  if (uVar9 != uVar12) {
    FUN_140009b9a(local_240,&local_c0);
    local_80 = L"MapNotFound";
    local_78 = 0xb;
    FUN_1446e940c(local_264,&local_80);
    local_80 = L"Engine";
    local_78 = 6;
    FUN_1446e940c(local_268,&local_80);
    local_80 = 
    L"The map specified on the commandline \'{0}\' could not be found. Would you like to load the default map instead?"
    ;
    local_78 = 0x6e;
    FUN_140208c1e(local_260,local_268,local_264,&local_80);
    FUN_14023409e(&local_250,local_260,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_240);
    local_108 = &local_80;
    local_100 = local_60;
    FUN_14010d304(&local_f8);
    local_118 = local_250;
    local_110 = local_248;
    if (local_248 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_248 + 1) = (int)local_248[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_230,&local_118,&local_f8);
    FUN_14007f2db(local_f8);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_248 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)local_248 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_248 + 0x10))(local_248);
        }
      }
    }
    if (local_240[0] != (longlong *)0x0) {
      (**(code **)(*local_240[0] + 0x10))();
    }
    if (local_260[0] != (longlong *)0x0) {
      (**(code **)(*local_260[0] + 0x10))();
    }
    puVar15 = &DAT_149dfb77a;
    puVar11 = &DAT_149dfb77a;
    if (local_1b0 != 0) {
      puVar11 = local_1b8;
    }
    if ((int)local_b8 != 0) {
      puVar15 = (undefined2 *)CONCAT71(uStack_bf,local_c0);
    }
    lVar8 = 0;
    goto LAB_1434eb3bd;
  }
LAB_1434eb462:
  FUN_140009b9a(local_2e0,&local_c0);
  local_80 = L"MapNotFoundNoFallback";
  local_78 = 0x15;
  FUN_1446e940c(local_264,&local_80);
  local_80 = L"Engine";
  local_78 = 6;
  FUN_1446e940c(local_268,&local_80);
  local_80 = L"The map specified on the commandline \'{0}\' could not be found. Exiting.";
  local_78 = 0x47;
  FUN_140208c1e(local_260,local_268,local_264,&local_80);
  FUN_14023409e(&local_2f0,local_260,1);
  local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
  FUN_14023423e(local_70,local_2e0);
  local_100 = local_60;
  local_108 = &local_80;
  FUN_14010d304(&local_f8);
  local_118 = local_2f0;
  local_110 = local_2e8;
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_230,&local_118,&local_f8);
  FUN_14007f2db(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != (longlong *)0x0) {
    (**(code **)(*local_70[0] + 0x10))();
  }
  local_300[0] = local_2e0[0];
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_300[0] = local_2e0[0];
      if (*piVar1 == 0) {
        (**(code **)(*local_2e8 + 0x10))(local_2e8);
        local_300[0] = local_2e0[0];
      }
    }
  }
LAB_1434eb5e0:
  if (local_300[0] != (longlong *)0x0) {
    (**(code **)(*local_300[0] + 0x10))();
  }
  if (local_260[0] != (longlong *)0x0) {
    (**(code **)(*local_260[0] + 0x10))();
  }
  FUN_1427863e0();
  FUN_1427864dc(0,0,local_230,&DAT_14c873210);
  FUN_142797bc0(0,0);
  if (local_230[0] != (longlong *)0x0) {
    (**(code **)(*local_230[0] + 0x10))();
  }
  goto LAB_1434eb635;
LAB_1434eb3bd:
  uVar9 = *(ushort *)((longlong)puVar15 + lVar8);
  uVar10 = (ulonglong)uVar9;
  uVar12 = *(ushort *)((longlong)puVar11 + lVar8);
  if (uVar9 == uVar12) {
    if (uVar9 == 0) goto LAB_1434eb427;
LAB_1434eb3d2:
    lVar8 = lVar8 + 2;
    goto LAB_1434eb3bd;
  }
  if ((uVar12 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar13 = (ulonglong)uVar12;
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar13]) goto LAB_1434eb3d2;
  }
  if (uVar9 != uVar12) {
    FUN_1427863e0();
    iVar6 = FUN_1427864dc(0,2,local_230,&DAT_14c873210);
    if (iVar6 != 5) {
      bVar3 = false;
      FUN_142797bc0(0,0);
      iVar6 = 1;
      goto LAB_1434eb8d5;
    }
  }
LAB_1434eb427:
  FUN_140474144(&local_80,&local_1b8,lVar16 + 0x28);
  pwVar14 = local_80;
  if (local_78 == 0) {
    pwVar14 = L"";
  }
  FUN_140245d8a(local_2d0,local_180,pwVar14,1);
  iVar6 = (**(code **)(*plVar2 + 0x4b8))(plVar2,param_1[6],local_2d0,local_1a8 + 2);
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  bVar3 = true;
LAB_1434eb8d5:
  if (local_230[0] != (longlong *)0x0) {
    (**(code **)(*local_230[0] + 0x10))();
  }
  if (bVar3) {
    if (iVar6 == 1) {
      FUN_140009b9a(local_300,&local_1b8);
      local_80 = L"DefaultMapNotFound";
      local_78 = 0x12;
      FUN_1446e940c(local_264,&local_80);
      local_80 = L"Engine";
      local_78 = 6;
      FUN_1446e940c(local_268,&local_80);
      local_80 = L"The default map \'{0}\' could not be found. Exiting.";
      local_78 = 0x32;
      FUN_140208c1e(local_260,local_268,local_264,&local_80);
      FUN_14023409e(&local_310,local_260,1);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
      FUN_14023423e(local_70,local_300);
      local_108 = &local_80;
      local_100 = local_60;
      FUN_14010d304(&local_f8);
      local_118 = local_310;
      local_110 = local_308;
      if (local_308 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_308 + 1) = (int)local_308[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_230,&local_118,&local_f8);
      FUN_14007f2db(local_f8,local_f0);
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_308 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_308)(local_308);
          LOCK();
          piVar1 = (int *)((longlong)local_308 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_308 + 0x10))(local_308);
          }
        }
      }
      goto LAB_1434eb5e0;
    }
LAB_1434eb7e2:
    FUN_1456ff594(&DAT_14cb107a8,param_1);
    (**(code **)(*param_1 + 0x420))(param_1);
  }
LAB_1434eb635:
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_bf,local_c0) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_d4,local_d8) != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar4 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (local_1b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434eb6d0:
  if (local_1a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_138,local_130);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434ebb00 FUN_1434ebb00 body=314 status=ok
// SIG undefined FUN_1434ebb00(void)

undefined4 FUN_1434ebb00(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0xffffffff;
  if (param_2 == (longlong *)0x0) goto LAB_1434ebb23;
  local_38 = param_2;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = FUN_1460b36c4(param_1 + 0x38,&local_38);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  (**(code **)(*param_2 + 0x2d8))(param_2,lVar2,param_3);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) == 0) {
      if (plVar3 != (longlong *)0x0) goto LAB_1434ebc02;
    }
    else {
      FUN_1456cec3c(plVar3);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2a0);
LAB_1434ebc02:
        if (((DAT_14c950c29 & 1) != 0) && (plVar3 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar3);
        }
      }
      (**(code **)(*plVar3 + 0x380))(plVar3,uVar1,param_2);
    }
  }
  FUN_1460696ae(param_1 + 0xc0,param_2);
LAB_1434ebb23:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1434ebc3c FUN_1434ebc3c body=648 status=ok
// SIG undefined FUN_1434ebc3c(void)

undefined8 FUN_1434ebc3c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  plVar9 = (longlong *)param_2[6];
  if (plVar9 != (longlong *)0x0) {
    lVar6 = plVar9[0x2f];
    (**(code **)(*plVar9 + 0xdd8))();
    if ((((*(longlong *)(param_1 + 0x30) == 0) ||
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar8 == 0)) ||
        (*(longlong *)(lVar8 + 0x108) == 0)) || (cVar3 = FUN_147a5faf8(), cVar3 == '\0')) {
      if ((char)lVar6 != '\x03') {
        plVar9 = (longlong *)param_2[6];
        if ((char)plVar9[0x2f] != '\x03') {
          uVar5 = FUN_14477b072(plVar9,DAT_14caf9a88);
          (**(code **)(*plVar9 + 0x248))(plVar9,uVar5,0);
        }
        goto LAB_1434ebcd3;
      }
    }
    else if (*(longlong *)(lVar8 + 0x108) != 0) {
      FUN_1434c293a(*(longlong *)(lVar8 + 0x108),param_2[6],0);
    }
    FUN_140aeefbc(param_2[6],1,1);
  }
LAB_1434ebcd3:
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    iVar7 = 1;
    lVar8 = 0;
    lVar10 = 0;
    bVar2 = DAT_14c950c29;
    do {
      if ((param_2 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar2 = DAT_14c950c29;
      }
      if (*(longlong **)(lVar6 + lVar8) == param_2) {
        if (iVar7 == 0) break;
        (**(code **)(*param_2 + 0x2f0))(param_2);
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 - iVar7 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x38) + (lVar10 >> 0x20) * 8),
                  (void *)(*(longlong *)(param_1 + 0x38) + (lVar10 >> 0x20) * 8 + 8),
                  (longlong)(iVar4 - iVar7) << 3);
          iVar4 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar4 + -1;
        FUN_145d38d78(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x30) == 0) break;
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2a0);
        if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) == 0) {
          if (plVar9 == (longlong *)0x0) break;
LAB_1434ebdf2:
          if (((DAT_14c950c29 & 1) != 0) && (plVar9 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar9);
          }
        }
        else {
          FUN_1456cec3c(plVar9);
          if (*(longlong *)(param_1 + 0x30) != 0) {
            plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2a0);
            goto LAB_1434ebdf2;
          }
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x388))(plVar9,iVar7 + -1,param_2);
        break;
      }
      lVar10 = lVar10 + 0x100000000;
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar4 * 8 != lVar8);
  }
  param_2[0xf] = 0;
  FUN_1460696ae(param_1 + 0xd8,param_2);
  if (DAT_14c951760 == '\0') {
    FUN_144757f48(param_2,0x40000000);
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar6 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) {
        return 1;
      }
      LOCK();
      bVar11 = uVar1 == *(uint *)(lVar6 + 8);
      if (bVar11) {
        *(uint *)(lVar6 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar11);
  }
  return 1;
}



// FUNCTION 1434ebec8 FUN_1434ebec8 body=461 status=ok
// SIG undefined FUN_1434ebec8(void)

ulonglong FUN_1434ebec8(longlong param_1,char param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong unaff_RSI;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  longlong local_70;
  longlong local_60;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if (bVar1 != 1) {
      unaff_RSI = 0;
      uVar5 = unaff_RSI;
      if ((6 < bVar1) || (uVar5 = 0, (0x68U >> (bVar1 & 0x1f) & 1) == 0)) goto LAB_1434ebff9;
    }
    iVar3 = FUN_14490d72a(lVar2);
    if (iVar3 != 3) {
      uVar6 = (undefined7)(unaff_RSI >> 8);
      if (param_2 != '\0') {
        if (param_3 != 0) {
          *(int *)(*(longlong *)(param_1 + 0x30) + 0x180) = param_3;
        }
        FUN_141556918(*(longlong *)(param_1 + 0x30) + 0x160,L"Listen");
        uVar5 = CONCAT71(uVar6,1);
        if (*(longlong *)(lVar2 + 0x38) == 0) {
          FUN_145ad1184(local_98,*(longlong *)(param_1 + 0x30) + 0x160);
          uVar4 = FUN_1416a341a(lVar2,local_98);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_50,local_48);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          uVar5 = (ulonglong)uVar4;
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
        }
        goto LAB_1434ebff9;
      }
      if (iVar3 != 1) {
        FUN_14622b792(*(longlong *)(param_1 + 0x30) + 0x160,L"Listen",0,&DAT_14c872af8);
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x180) = DAT_14cb0f198;
        uVar5 = CONCAT71(uVar6,1);
        goto LAB_1434ebff9;
      }
    }
  }
  uVar5 = 0;
LAB_1434ebff9:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1434ec096 FUN_1434ec096 body=212 status=ok
// SIG undefined FUN_1434ec096(void)

undefined8 FUN_1434ec096(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  plVar2 = (longlong *)FUN_140489acc();
  cVar1 = (**(code **)(*plVar2 + 0x358))(plVar2,uVar4,param_3,local_48);
  if (cVar1 != '\0') {
    lVar3 = FUN_147d7ff84(DAT_14cb0d2b0,uVar4,param_2 & 0xffffffff);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
      local_58 = local_48 + 2;
      local_48[2] = 0;
      local_48[3] = 0;
      FUN_1461c932c(*(longlong *)(lVar3 + 0x30),local_48,0,0);
      uVar4 = CONCAT71((uint7)(param_2 >> 8) & 0xffffff,1);
      goto LAB_1434ec0f4;
    }
  }
  uVar4 = 0;
LAB_1434ec0f4:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ec16c thunk_FUN_1662e03be body=5 status=ok
// SIG undefined thunk_FUN_1662e03be(void)

void thunk_FUN_1662e03be(void)

{
  FUN_16652b4bb();
  FUN_1662e0456();
  return;
}



// FUNCTION 1434ec2b8 FUN_1434ec2b8 body=44 status=ok
// SIG undefined FUN_1434ec2b8(void)

undefined8 FUN_1434ec2b8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1434f23d0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x430) >> 8),
                     *(longlong *)(param_1 + 0x430) != DAT_14cadad10);
  }
  return uVar2;
}



// FUNCTION 1434ec364 FUN_1434ec364 body=54 status=ok
// SIG undefined FUN_1434ec364(void)

void FUN_1434ec364(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  return;
}



// FUNCTION 1434ec3d2 FUN_1434ec3d2 body=170 status=ok
// SIG undefined FUN_1434ec3d2(void)

undefined8 FUN_1434ec3d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar6);
      *plVar1 = lVar2;
      plVar5 = plVar1;
      plVar4 = (longlong *)(param_3 + lVar6);
      for (lVar2 = 10; plVar4 = plVar4 + 1, plVar5 = plVar5 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *plVar4;
      }
      lVar2 = ((longlong *)(param_3 + lVar6))[0xb];
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x58 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1[0xb] = lVar2;
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1434ec4e2 FUN_1434ec4e2 body=68 status=ok
// SIG undefined FUN_1434ec4e2(void)

undefined8 FUN_1434ec4e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1434ec578 FUN_1434ec578 body=495 status=ok
// SIG undefined FUN_1434ec578(void)

undefined8 FUN_1434ec578(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_3[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_3[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_3[3] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_3 + 4,1);
  }
  else {
    *(undefined1 *)(param_3 + 4) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  param_3 = param_3 + 5;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 1434ec776 FUN_1434ec776 body=2262 status=ok
// SIG undefined FUN_1434ec776(void)

ulonglong FUN_1434ec776(undefined8 param_1,undefined8 param_2,wchar_t *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 **ppuVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  longlong lVar19;
  uint *puVar20;
  undefined8 unaff_RSI;
  undefined2 **ppuVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint *local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined8 *local_258;
  undefined8 local_250;
  longlong local_248 [3];
  wchar_t *local_230;
  undefined4 local_228;
  longlong *local_220;
  wchar_t *local_218;
  undefined4 local_210;
  wchar_t *local_208;
  undefined4 local_200;
  undefined2 *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined8 local_1d8;
  undefined2 **local_1d0;
  longlong local_1c8 [3];
  undefined2 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  wchar_t *local_190;
  undefined8 ****local_188;
  longlong *plStack_180;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148 [6];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 ****local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 ****local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar22 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_190 = param_3;
  cVar8 = FUN_140988638(&local_190,L"exitembedded",1);
  if (cVar8 == '\0') {
    cVar8 = FUN_140988638(&local_190,L"DumpEmbedded",1);
    if (cVar8 == '\0') {
      cVar8 = FUN_140988638(&local_190,L"webcall",1);
      if (cVar8 == '\0') {
        uVar22 = 0;
      }
      else {
        iVar9 = _wtoi(local_190);
        FUN_140002266(&local_1b0,L"Calls[%d]",iVar9);
        local_1c8[0] = 0;
        local_1c8[1] = 0;
        puVar18 = local_1b0;
        if (local_1a8 == 0) {
          puVar18 = &DAT_149dfb77a;
        }
        local_278 = &DAT_14c872ce8;
        cVar8 = FUN_1449da20c(DAT_14c872ce0,L"WebCalls",puVar18,local_1c8);
        ppuVar21 = &local_1b0;
        if (cVar8 != '\0') {
          local_278 = (undefined8 *)CONCAT44(local_278._4_4_,1);
          FUN_140807d8e(local_1c8,local_148,&DAT_149e0208a,&DAT_149e01f5a);
          FUN_14683a3d0(&local_1d8,local_148);
          if (local_148[0] != 0) {
            FUN_1400020a8();
          }
          local_1e8 = 0;
          plStack_1e0 = (longlong *)0x0;
          cVar8 = FUN_14047b282(local_1d8,&local_1e8,0);
          if (cVar8 != '\0') {
            local_118 = 0;
            local_110 = 0;
            local_148[0] = 0;
            local_148[1] = 0;
            local_148[2] = 0;
            local_148[3] = 0;
            local_10c = 0xffffffff00000080;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = (undefined8 *****)0x0;
            local_d8 = (longlong *)0x0;
            local_1f8 = (undefined2 *)0x0;
            uStack_1f0 = 0;
            local_208 = L"Subsystem";
            local_200 = 9;
            FUN_14047fa10(local_1e8);
            local_218 = L"Command";
            local_210 = 7;
            FUN_14047fa10(local_1e8,&local_218,local_148);
            local_220 = (longlong *)0x0;
            local_230 = L"Args";
            local_228 = 4;
            cVar8 = FUN_146839966(local_1e8);
            if (cVar8 != '\0') {
              plVar11 = (longlong *)*local_220;
              puVar20 = (uint *)(plVar11 + 2);
              iVar9 = (int)plVar11[5];
              if (iVar9 == 0) {
                uVar24 = 1;
                uVar22 = 0;
                iVar26 = 0;
                iVar17 = 0;
              }
              else {
                puVar10 = (uint *)plVar11[4];
                if ((uint *)plVar11[4] == (uint *)0x0) {
                  puVar10 = puVar20;
                }
                uVar25 = *puVar10;
                if (uVar25 == 0) {
                  iVar26 = iVar9 + 0x1e;
                  if (-1 < iVar9 + -1) {
                    iVar26 = iVar9 + -1;
                  }
                  uVar22 = 0;
                  uVar15 = (ulonglong)(uint)(iVar26 >> 5);
                  if (iVar26 >> 5 < 1) {
                    uVar15 = uVar22;
                  }
                  iVar26 = 0;
                  do {
                    if (uVar15 == uVar22) goto LAB_1434ecbfc;
                    iVar26 = iVar26 + 0x20;
                    uVar25 = puVar10[uVar22 + 1];
                    uVar22 = uVar22 + 1;
                  } while (uVar25 == 0);
                }
                else {
                  uVar22 = 0;
                  iVar26 = 0;
                }
                uVar24 = (ulonglong)(-uVar25 & uVar25);
                uVar15 = uVar24 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar17 = (iVar26 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if (iVar9 <= iVar17) {
                  iVar17 = iVar9;
                }
              }
              if (iVar17 != iVar9) {
                uVar25 = 0xffffffff;
                local_270 = puVar20;
                do {
                  FUN_146850330(&local_a8,(longlong)iVar17 * 0x28 + *plVar11);
                  local_248[0] = 0;
                  local_248[1] = 0;
                  cVar8 = (**(code **)(*local_98 + 0x58))(local_98,local_248);
                  if (cVar8 == '\0') {
                    local_250 = 0;
                    cVar8 = (**(code **)(*local_98 + 0x70))(local_98,&local_250);
                    if (cVar8 == '\0') {
                      local_258 = (undefined8 *)0x0;
                      cVar8 = (**(code **)(*local_98 + 0x80))(local_98,&local_258);
                      if (cVar8 == '\0') goto LAB_1434ecefc;
                      FUN_14619f8aa(&local_188,local_248,0);
                      local_268 = *local_258;
                      local_260 = (longlong *)local_258[1];
                      if (local_260 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_260 + 1) = (int)local_260[1] + 1;
                        UNLOCK();
                      }
                      FUN_145d35994(&local_268,local_188,1);
                      plVar1 = local_260;
                      if (local_260 != (longlong *)0x0) {
                        LOCK();
                        plVar4 = local_260 + 1;
                        *(int *)plVar4 = (int)*plVar4 + -1;
                        UNLOCK();
                        if ((int)*plVar4 == 0) {
                          (**(code **)*local_260)(local_260);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar1 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar1 + 0x10))(plVar1);
                          }
                        }
                      }
                    }
                    else {
                      FUN_14619f8aa(&local_188,local_248,0);
                      FUN_14683ccb2(local_250,local_188,1);
                    }
                    plVar1 = plStack_180;
                    puVar20 = local_270;
                    if (plStack_180 != (longlong *)0x0) {
                      LOCK();
                      plVar4 = plStack_180 + 1;
                      *(int *)plVar4 = (int)*plVar4 + -1;
                      UNLOCK();
                      if ((int)*plVar4 == 0) {
                        (**(code **)*plVar1)(plVar1);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar1 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        puVar20 = local_270;
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar1 + 0x10))(plVar1);
                          puVar20 = local_270;
                        }
                      }
                    }
                  }
LAB_1434ecefc:
                  plStack_180 = local_248;
                  local_188 = &local_a8;
                  FUN_140ac5c08(local_148 + 2,&local_268,&local_188,0);
                  if (local_248[0] != 0) {
                    FUN_1400020a8();
                  }
                  FUN_14683bfd0(&local_a8);
                  uVar25 = uVar25 & ~(uint)uVar24;
                  puVar10 = (uint *)plVar11[4];
                  if ((uint *)plVar11[4] == (uint *)0x0) {
                    puVar10 = puVar20;
                  }
                  iVar5 = (int)plVar11[5];
                  iVar17 = (int)uVar22;
                  lVar19 = (longlong)iVar17;
                  uVar16 = puVar10[lVar19] & uVar25;
                  if (uVar16 == 0) {
                    iVar13 = iVar5 + 0x1e;
                    if (-1 < iVar5 + -1) {
                      iVar13 = iVar5 + -1;
                    }
                    iVar13 = iVar13 >> 5;
                    iVar26 = iVar26 + 0x20;
                    iVar14 = iVar13;
                    if (iVar13 < iVar17) {
                      iVar14 = iVar17;
                    }
                    if (iVar17 < iVar13) {
                      lVar23 = 0;
                      do {
                        uVar16 = puVar10[lVar19 + lVar23 + 1];
                        if (uVar16 != 0) {
                          uVar22 = (ulonglong)(iVar17 + (int)lVar23 + 1);
                          uVar25 = 0xffffffff;
                          goto LAB_1434ecfbf;
                        }
                        iVar26 = iVar26 + 0x20;
                        lVar23 = lVar23 + 1;
                      } while (iVar14 - lVar19 != lVar23);
                      uVar25 = 0xffffffff;
                      iVar17 = iVar14;
                    }
                    uVar22 = (ulonglong)(iVar17 + 1);
                    puVar20 = local_270;
                    iVar17 = iVar5;
                  }
                  else {
LAB_1434ecfbf:
                    uVar24 = (ulonglong)(-uVar16 & uVar16);
                    uVar15 = uVar24 * 2 + 1;
                    lVar19 = 0x3f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    iVar17 = (iVar26 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                    if (iVar5 <= iVar17) {
                      iVar17 = iVar5;
                    }
                  }
                } while (iVar17 != iVar9);
              }
            }
LAB_1434ecbfc:
            local_178 = local_d8;
            local_188 = local_e8;
            local_78 = local_b8;
            uVar6 = local_78;
            uStack_70 = uStack_b0;
            uVar7 = uStack_70;
            local_88 = local_c8;
            puStack_80 = puStack_c0;
            local_98 = local_d8;
            uStack_90 = uStack_d0;
            uVar12 = uStack_90;
            local_a8 = local_e8;
            plStack_a0 = plStack_e0;
            local_c8 = &PTR_LAB_14a8e6be0;
            puStack_c0 = &LAB_147aa84e2;
            local_d8 = (longlong *)0x0;
            local_e8 = (undefined8 ****)FUN_147aa84f0;
            plStack_e0 = plStack_180;
            uStack_90._0_4_ = (undefined4)uStack_d0;
            uStack_90._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
            local_78._0_4_ = (undefined4)local_b8;
            local_78._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
            uStack_70._0_4_ = (undefined4)uStack_b0;
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
            local_158 = (undefined4)local_78;
            uStack_154 = local_78._4_4_;
            uStack_150 = (undefined4)uStack_70;
            uStack_14c = uStack_70._4_4_;
            uStack_170 = (undefined4)uStack_90;
            uStack_16c = uStack_90._4_4_;
            uStack_90 = uVar12;
            local_78 = uVar6;
            uStack_70 = uVar7;
            if ((undefined8 *****)local_188 != (undefined8 *****)0x0) {
              plVar11 = local_178;
              if (local_178 == (longlong *)0x0) {
                plVar11 = local_168;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            puVar18 = local_1f8;
            if ((int)uStack_1f0 == 0) {
              puVar18 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_a8,puVar18,1);
            plVar11 = (longlong *)FUN_145e3f07e(local_a8);
            if ((longlong)(int)plVar11[1] != 0) {
              lVar19 = 0;
              do {
                if ((*(int *)(*plVar11 + 8 + lVar19) != 0) &&
                   (*(longlong *)(*plVar11 + lVar19) != 0)) {
                  uVar12 = FUN_145e3f07e(local_a8);
                  FUN_147aa843e(uVar12,local_148);
                  break;
                }
                lVar19 = lVar19 + 0x10;
              } while ((longlong)(int)plVar11[1] * 0x10 != lVar19);
            }
            if (local_1f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_147aa83da(local_148);
          }
          plVar11 = plStack_1e0;
          if (plStack_1e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_1e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_1e0)(plStack_1e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          ppuVar21 = local_1d0;
          if (local_1d0 != (undefined2 **)0x0) {
            LOCK();
            ppuVar3 = local_1d0 + 1;
            *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
            UNLOCK();
            if (*(int *)ppuVar3 == 0) {
              (**(code **)*local_1d0)(local_1d0);
              LOCK();
              piVar2 = (int *)((longlong)local_1d0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_1d0 + 8))(local_1d0);
              }
            }
          }
        }
        if (local_1c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_1b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar22 = CONCAT71((int7)((ulonglong)ppuVar21 >> 8),1);
      }
    }
  }
  else {
    local_118 = 0;
    local_110 = 0;
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_10c = 0xffffffff00000080;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = (undefined8 ****)0x0;
    local_d8 = (longlong *)0x0;
    FUN_14020fad6(local_148,L"exitembedded");
    FUN_1446f470e(&local_198,L"native",1);
    plVar11 = (longlong *)FUN_14680fcac(local_198);
    if ((longlong)(int)plVar11[1] != 0) {
      lVar19 = 0;
      do {
        if ((*(int *)(*plVar11 + 8 + lVar19) != 0) && (*(longlong *)(*plVar11 + lVar19) != 0)) {
          FUN_1446f470e(&local_1a0,L"native",1);
          uVar12 = FUN_14680fcac(local_1a0);
          FUN_147aa843e(uVar12,local_148);
          break;
        }
        lVar19 = lVar19 + 0x10;
      } while ((longlong)(int)plVar11[1] * 0x10 != lVar19);
    }
    FUN_147aa83da(local_148);
  }
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1434ed04e FUN_1434ed04e body=7076 status=ok
// SIG undefined FUN_1434ed04e(void)

void FUN_1434ed04e(undefined8 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  wchar_t *****pppppwVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  wchar_t *****pppppwVar12;
  wchar_t ****ppppwVar13;
  longlong lVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ushort uVar20;
  ushort uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_208 [32];
  wchar_t ****local_1e8;
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  wchar_t ****local_1b8;
  wchar_t ****local_1b0;
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188 [2];
  longlong **local_178;
  wchar_t ****local_170;
  longlong local_168 [2];
  longlong *local_158;
  undefined8 uStack_150;
  wchar_t ***local_148;
  ulonglong uStack_140;
  wchar_t ****local_138;
  ulonglong uStack_130;
  wchar_t ****local_128;
  undefined1 *local_120;
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong *local_b8;
  longlong **local_b0;
  wchar_t ****local_a8;
  wchar_t ***pppwStack_a0;
  wchar_t ****local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  wchar_t ****local_48;
  wchar_t ****ppppwStack_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  lVar19 = DAT_14ca9f278;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  lVar14 = 0;
  while( true ) {
    uVar20 = *(ushort *)((longlong)puVar5 + lVar14);
    uVar15 = (ulonglong)uVar20;
    uVar21 = *(ushort *)((longlong)L"StartUELive" + lVar14);
    if (uVar20 != uVar21) break;
    if (uVar20 == 0) goto LAB_1434ed37d;
LAB_1434ed0ac:
    lVar14 = lVar14 + 2;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed0ac;
  }
  if (uVar20 != uVar21) {
    lVar14 = 0;
    goto LAB_1434ed0e5;
  }
LAB_1434ed37d:
  plVar9 = param_1 + 2;
  FUN_140056680(&local_48);
  uVar15 = 0;
  iVar11 = (int)ppppwStack_40 + -1;
  if ((int)ppppwStack_40 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_48;
    if ((int)ppppwStack_40 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(plVar9,uVar15,&local_48);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
LAB_1434ed4b4:
    ppppwVar13 = (wchar_t ****)&DAT_149dfb77a;
  }
  else {
    local_98 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_90 = (ulonglong)uVar17;
      goto LAB_1434ed4b4;
    }
    FUN_1446dd670(&local_98,uVar17,0);
    memcpy(local_98,pvVar1,(longlong)(int)uVar17 * 2);
    ppppwVar13 = local_98;
    if ((int)uStack_90 == 0) goto LAB_1434ed4b4;
  }
  FUN_1446f470e(&local_a8,ppppwVar13);
  if (local_98 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_48);
  uVar15 = 0;
  iVar11 = (int)ppppwStack_40 + -1;
  if ((int)ppppwStack_40 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_48;
    if ((int)ppppwStack_40 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(plVar9,uVar15,&local_48);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
  }
  else {
    local_98 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_90 = (ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_98,uVar17,0);
      memcpy(local_98,pvVar1,(longlong)(int)uVar17 * 2);
      if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  pwVar16 = L"";
  plVar9 = local_c8;
  goto LAB_1434ed644;
LAB_1434ed0e5:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar14);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"StopUELive" + lVar14);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434ed700;
LAB_1434ed0fe:
    lVar14 = lVar14 + 2;
    goto LAB_1434ed0e5;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed0fe;
  }
  if (uVar20 != uVar21) {
    lVar14 = 0;
    goto LAB_1434ed137;
  }
LAB_1434ed700:
  FUN_140056680(&local_48);
  uVar15 = 0;
  iVar11 = (int)ppppwStack_40 + -1;
  if ((int)ppppwStack_40 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_48;
    if ((int)ppppwStack_40 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(param_1 + 2,uVar15,&local_48);
  lVar19 = (longlong)iVar11 * 0x28 + param_1[2];
  if (lVar19 == 0 || iVar11 == -1) {
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
LAB_1434ed837:
    pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
  }
  else {
    local_98 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_90 = (ulonglong)uVar17;
      goto LAB_1434ed837;
    }
    FUN_1446dd670(&local_98,uVar17,0);
    memcpy(local_98,pvVar1,(longlong)(int)uVar17 * 2);
    pppppwVar7 = (wchar_t *****)local_98;
    if ((int)uStack_90 == 0) goto LAB_1434ed837;
  }
  FUN_1446f470e(&local_a8,pppppwVar7,1);
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  pwVar16 = L"";
  plVar9 = local_d8;
  goto LAB_1434ed644;
LAB_1434ed137:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar14);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"devicesleep" + lVar14);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434ed889;
LAB_1434ed150:
    lVar14 = lVar14 + 2;
    goto LAB_1434ed137;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed150;
  }
  if (uVar20 != uVar21) {
    lVar14 = 0;
    goto LAB_1434ed189;
  }
LAB_1434ed889:
  FUN_140056680(&local_48);
  uVar15 = 0;
  iVar11 = (int)ppppwStack_40 + -1;
  if ((int)ppppwStack_40 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_48;
    if ((int)ppppwStack_40 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(param_1 + 2,uVar15,&local_48);
  lVar19 = (longlong)iVar11 * 0x28 + param_1[2];
  if (lVar19 == 0 || iVar11 == -1) {
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
LAB_1434ed9c0:
    pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
  }
  else {
    local_98 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_90 = (ulonglong)uVar17;
      goto LAB_1434ed9c0;
    }
    FUN_1446dd670(&local_98,uVar17,0);
    memcpy(local_98,pvVar1,(longlong)(int)uVar17 * 2);
    pppppwVar7 = (wchar_t *****)local_98;
    if ((int)uStack_90 == 0) goto LAB_1434ed9c0;
  }
  FUN_14052c20c(pppppwVar7);
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  pwVar16 = L"";
  plVar9 = local_e8;
  goto LAB_1434ed644;
LAB_1434ed189:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar14);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"shaderresumebatching" + lVar14);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434eda04;
LAB_1434ed1a2:
    lVar14 = lVar14 + 2;
    goto LAB_1434ed189;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed1a2;
  }
  if (uVar20 != uVar21) {
    lVar14 = 0;
    goto LAB_1434ed1db;
  }
LAB_1434eda04:
  if ((DAT_14ca9f278 != 0) &&
     (iVar11 = *(int *)(DAT_14ca9f278 + 0x14), *(int *)(DAT_14ca9f278 + 0x14) = iVar11 + -1,
     iVar11 < 2)) {
    *(undefined4 *)(lVar19 + 0x14) = 0;
    *(undefined1 *)(lVar19 + 0x10) = 0;
  }
  pwVar16 = L"";
  plVar9 = local_f8;
  goto LAB_1434ed644;
LAB_1434ed22d:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar19);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"getmemorybucket" + lVar19);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434eda6e;
LAB_1434ed246:
    lVar19 = lVar19 + 2;
    goto LAB_1434ed22d;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed246;
  }
  if (uVar20 != uVar21) {
    lVar19 = 0;
    goto LAB_1434ed27f;
  }
LAB_1434eda6e:
  FUN_140056680(local_118,&DAT_149dfb77a);
  FUN_140056680(&local_a8,L"bucket");
  uVar4 = FUN_140efda56();
  FUN_140002266(&local_138,&DAT_149e063bc,uVar4);
  local_128 = (wchar_t ****)&local_48;
  local_120 = local_38;
  local_48 = (wchar_t ****)&local_a8;
  ppppwStack_40 = (wchar_t ****)&local_138;
  FUN_140ac5b02(&local_98);
  pcVar2 = (code *)param_1[0xc];
  plVar9 = param_1 + 0x10;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0xe];
  }
  uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  (*pcVar2)(uVar6,&local_98,local_118);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
  pppppwVar7 = (wchar_t *****)local_a8;
  if ((wchar_t *****)local_138 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    pppppwVar7 = (wchar_t *****)local_a8;
  }
  goto LAB_1434edb6a;
LAB_1434ed27f:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar19);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"getconfig" + lVar19);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434edb7d;
LAB_1434ed298:
    lVar19 = lVar19 + 2;
    goto LAB_1434ed27f;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed298;
  }
  if (uVar20 != uVar21) {
    lVar19 = 0;
    goto LAB_1434ed2d1;
  }
LAB_1434edb7d:
  plVar9 = param_1 + 2;
  FUN_140056680(&local_98);
  iVar11 = (int)uStack_90 + -1;
  if ((int)uStack_90 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_48 = (wchar_t ****)0x0;
    ppppwStack_40 = (wchar_t ****)0x0;
  }
  else {
    local_48 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    ppppwStack_40 = (wchar_t ****)CONCAT44(ppppwStack_40._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      ppppwStack_40 = (wchar_t ****)(ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_48,uVar17,0);
      memcpy(local_48,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_98);
  iVar11 = (int)uStack_90 + -1;
  if ((int)uStack_90 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_a8 = (wchar_t ****)0x0;
    pppwStack_a0 = (wchar_t ***)0x0;
  }
  else {
    local_a8 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    pppwStack_a0 = (wchar_t ***)CONCAT44(pppwStack_a0._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      pppwStack_a0 = (wchar_t ***)(ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_a8,uVar17,0);
      memcpy(local_a8,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_98);
  uVar15 = 0;
  iVar11 = (int)uStack_90 + -1;
  if ((int)uStack_90 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_98;
    if ((int)uStack_90 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(plVar9,uVar15,&local_98);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_138 = (wchar_t ****)0x0;
    uStack_130 = 0;
  }
  else {
    local_138 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_130 = (ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_138,uVar17,0);
      memcpy(local_138,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  puVar8 = (undefined8 *)FUN_147aa8204(&local_48);
  local_148 = (wchar_t ***)0x0;
  uVar17 = *(uint *)(puVar8 + 1);
  pvVar1 = (void *)*puVar8;
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar17);
  if ((longlong)(int)uVar17 == 0) {
    uStack_140 = (ulonglong)uVar17;
  }
  else {
    FUN_1446dd670(&local_148,uVar17,0);
    memcpy(local_148,pvVar1,(longlong)(int)uVar17 * 2);
  }
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
  if ((int)uStack_130 != 0) {
    pppppwVar7 = (wchar_t *****)local_138;
  }
  pppppwVar12 = (wchar_t *****)&DAT_149dfb77a;
  if ((int)pppwStack_a0 != 0) {
    pppppwVar12 = (wchar_t *****)local_a8;
  }
  local_1e8 = &local_148;
  cVar3 = FUN_1449da20c(DAT_14c872ce0,pppppwVar12,pppppwVar7,&local_158);
  if (cVar3 == '\0') {
    local_1e8 = (wchar_t ****)&DAT_149dfb77a;
    if ((int)ppppwStack_40 != 0) {
      local_1e8 = local_48;
    }
    pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    if ((int)uStack_130 != 0) {
      pppppwVar7 = (wchar_t *****)local_138;
    }
    pppppwVar12 = (wchar_t *****)&DAT_149dfb77a;
    if ((int)pppwStack_a0 != 0) {
      pppppwVar12 = (wchar_t *****)local_a8;
    }
    FUN_140002266(local_198,L"Config key [%s] : %s in %s was not found",pppppwVar12,pppppwVar7);
    local_78 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
    uStack_70 = 0x8000000000;
    local_68 = 0xffffffff;
    pcVar2 = (code *)param_1[0xc];
    plVar9 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xe];
    }
    uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar2)(uVar6,&local_98,local_198);
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_98);
  }
  else {
    FUN_140056680(local_168,&DAT_149dfb77a);
    FUN_140056680(local_188,L"value");
    local_178 = &local_b8;
    local_170 = (wchar_t ****)&local_a8;
    local_b8 = local_188;
    local_b0 = &local_158;
    FUN_140ac5b02(&local_98);
    pcVar2 = (code *)param_1[0xc];
    plVar9 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xe];
    }
    uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar2)(uVar6,&local_98,local_168);
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_98);
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  pppppwVar12 = (wchar_t *****)local_a8;
  if ((wchar_t *****)local_138 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    pppppwVar12 = (wchar_t *****)local_a8;
  }
LAB_1434ee1ea:
  pppppwVar7 = (wchar_t *****)local_48;
  if (pppppwVar12 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    pppppwVar7 = (wchar_t *****)local_48;
  }
  goto LAB_1434edb6a;
LAB_1434ed2d1:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar19);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)&DAT_14a8e6a98 + lVar19);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434ee201;
LAB_1434ed2ea:
    lVar19 = lVar19 + 2;
    goto LAB_1434ed2d1;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed2ea;
  }
  if (uVar20 != uVar21) {
    lVar19 = 0;
    goto LAB_1434ed323;
  }
LAB_1434ee201:
  FUN_140056680(&local_98);
  uVar15 = 0;
  iVar11 = (int)uStack_90 + -1;
  if ((int)uStack_90 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    pppppwVar7 = (wchar_t *****)local_98;
    if ((int)uStack_90 == 0) {
      pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)pppppwVar7 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(param_1 + 2,uVar15,&local_98);
  lVar19 = (longlong)iVar11 * 0x28 + param_1[2];
  if (lVar19 == 0 || iVar11 == -1) {
    local_48 = (wchar_t ****)0x0;
    ppppwStack_40 = (wchar_t ****)0x0;
  }
  else {
    local_48 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    ppppwStack_40 = (wchar_t ****)CONCAT44(ppppwStack_40._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      ppppwStack_40 = (wchar_t ****)(ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_48,uVar17,0);
      memcpy(local_48,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_98 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  pppppwVar7 = (wchar_t *****)local_48;
  if ((int)ppppwStack_40 == 0) {
    pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
  }
  plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,pppppwVar7,1);
  if (plVar9 != (longlong *)0x0) {
    FUN_140056680(local_1a8,&DAT_149dfb77a);
    FUN_140056680(&local_138,L"value");
    (**(code **)(*plVar9 + 0xc0))(plVar9,&local_148);
    local_1b8 = (wchar_t ****)&local_a8;
    local_1b0 = (wchar_t ****)&local_98;
    local_a8 = (wchar_t ****)&local_138;
    pppwStack_a0 = (wchar_t ***)&local_148;
    FUN_140ac5b02(&local_98);
    pcVar2 = (code *)param_1[0xc];
    plVar9 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xe];
    }
    uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar2)(uVar6,&local_98,local_1a8);
    if (local_1a8[0] != 0) {
      FUN_1400020a8();
    }
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_98);
    pppppwVar12 = (wchar_t *****)local_138;
    if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
      FUN_1400020a8();
      pppppwVar12 = (wchar_t *****)local_138;
    }
    goto LAB_1434ee1ea;
  }
  pppppwVar7 = (wchar_t *****)local_48;
  if ((int)ppppwStack_40 == 0) {
    pppppwVar7 = (wchar_t *****)&DAT_149dfb77a;
  }
  FUN_140002266(local_1c8,L"CVar %s not found",pppppwVar7);
  local_78 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (wchar_t ****)0x0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  pcVar2 = (code *)param_1[0xc];
  plVar9 = param_1 + 0x10;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0xe];
  }
  uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  (*pcVar2)(uVar6,&local_98,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
  pppppwVar7 = (wchar_t *****)local_48;
  goto LAB_1434edb6a;
LAB_1434ed323:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar19);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"shareurl" + lVar19);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434ee538;
LAB_1434ed33c:
    lVar19 = lVar19 + 2;
    goto LAB_1434ed323;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed33c;
  }
  if (uVar20 != uVar21) {
    pwVar16 = L"Unknown command";
    plVar9 = local_1d8;
    goto LAB_1434ed644;
  }
LAB_1434ee538:
  plVar9 = param_1 + 2;
  FUN_140056680(&local_48);
  iVar11 = (int)ppppwStack_40 + -1;
  if ((int)ppppwStack_40 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_98 = (wchar_t ****)0x0;
    uStack_90 = 0;
  }
  else {
    local_98 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_90 = (ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_98,uVar17,0);
      memcpy(local_98,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8);
  iVar11 = (int)pppwStack_a0 + -1;
  if ((int)pppwStack_a0 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_48 = (wchar_t ****)0x0;
    ppppwStack_40 = (wchar_t ****)0x0;
  }
  else {
    local_48 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    ppppwStack_40 = (wchar_t ****)CONCAT44(ppppwStack_40._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      ppppwStack_40 = (wchar_t ****)(ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_48,uVar17,0);
      memcpy(local_48,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_a8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_138);
  iVar11 = (int)uStack_130 + -1;
  if ((int)uStack_130 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_a8 = (wchar_t ****)0x0;
    pppwStack_a0 = (wchar_t ***)0x0;
  }
  else {
    local_a8 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    pppwStack_a0 = (wchar_t ***)CONCAT44(pppwStack_a0._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      pppwStack_a0 = (wchar_t ***)(ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_a8,uVar17,0);
      memcpy(local_a8,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t *****)local_138 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_148);
  iVar11 = (int)uStack_140 + -1;
  if ((int)uStack_140 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    iVar18 = 0;
    do {
      iVar18 = iVar18 + 1;
    } while (iVar11 != iVar18);
  }
  iVar11 = FUN_1457511aa(plVar9);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_138 = (wchar_t ****)0x0;
    uStack_130 = 0;
  }
  else {
    local_138 = (wchar_t ****)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_130 = (ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_138,uVar17,0);
      memcpy(local_138,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_158);
  uVar15 = 0;
  iVar11 = (int)uStack_150 + -1;
  if ((int)uStack_150 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    plVar10 = local_158;
    if ((int)uStack_150 == 0) {
      plVar10 = (longlong *)&DAT_149dfb77a;
    }
    lVar19 = 0;
    uVar15 = 0;
    do {
      uVar20 = *(ushort *)((longlong)plVar10 + lVar19 * 2);
      uVar17 = ((uint)(0x19 < uVar20 - 0x61) * 0x20 + (uint)uVar20) - 0x20;
      uVar23 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar17) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  iVar11 = FUN_1457511aa(plVar9,uVar15,&local_158);
  lVar19 = (longlong)iVar11 * 0x28 + *plVar9;
  if (lVar19 == 0 || iVar11 == -1) {
    local_148 = (wchar_t ***)0x0;
    uStack_140 = 0;
  }
  else {
    local_148 = (wchar_t ***)0x0;
    uVar17 = *(uint *)(lVar19 + 0x18);
    pvVar1 = *(void **)(lVar19 + 0x10);
    uStack_140 = CONCAT44(uStack_140._4_4_,uVar17);
    if ((longlong)(int)uVar17 == 0) {
      uStack_140 = (ulonglong)uVar17;
    }
    else {
      FUN_1446dd670(&local_148,uVar17,0);
      memcpy(local_148,pvVar1,(longlong)(int)uVar17 * 2);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((1 < (int)uStack_130) && (1 < (int)uStack_140)) {
    _wtoi((wchar_t *)local_138);
    ppppwVar13 = (wchar_t ****)local_148;
    if ((int)uStack_140 == 0) {
      ppppwVar13 = (wchar_t ****)&DAT_149dfb77a;
    }
    _wtoi((wchar_t *)ppppwVar13);
  }
  FUN_140009b9a(&local_158,&local_48);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_138 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_a8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  pppppwVar7 = (wchar_t *****)local_98;
  if ((wchar_t *****)local_48 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    pppppwVar7 = (wchar_t *****)local_98;
  }
LAB_1434edb6a:
  if (pppppwVar7 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1434ed6d7;
LAB_1434ed1db:
  uVar20 = *(ushort *)((longlong)puVar5 + lVar14);
  uVar15 = (ulonglong)uVar20;
  uVar21 = *(ushort *)((longlong)L"shaderpausebatching" + lVar14);
  if (uVar20 == uVar21) {
    if (uVar20 == 0) goto LAB_1434eda3d;
LAB_1434ed1f4:
    lVar14 = lVar14 + 2;
    goto LAB_1434ed1db;
  }
  if ((uVar21 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar22 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar22]) goto LAB_1434ed1f4;
  }
  if (uVar20 != uVar21) {
    lVar19 = 0;
    goto LAB_1434ed22d;
  }
LAB_1434eda3d:
  if ((DAT_14ca9f278 != 0) &&
     (iVar11 = *(int *)(DAT_14ca9f278 + 0x14), *(int *)(DAT_14ca9f278 + 0x14) = iVar11 + 1,
     -1 < iVar11)) {
    *(undefined1 *)(lVar19 + 0x10) = 1;
  }
  pwVar16 = L"";
  plVar9 = local_108;
LAB_1434ed644:
  FUN_140056680(plVar9,pwVar16);
  local_78 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (wchar_t ****)0x0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  pcVar2 = (code *)param_1[0xc];
  plVar10 = param_1 + 0x10;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[0xe];
  }
  uVar6 = (**(code **)(*plVar10 + 8))(plVar10);
  (*pcVar2)(uVar6,&local_98,plVar9);
  if (*plVar9 != 0) {
    FUN_1400020a8();
  }
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
LAB_1434ed6d7:
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434eedd8 FUN_1434eedd8 body=609 status=ok
// SIG undefined FUN_1434eedd8(void)

void FUN_1434eedd8(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  undefined1 local_48 [8];
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (longlong *)*param_2;
  iVar4 = *param_1;
  if (iVar4 == 0) {
    cVar3 = (**(code **)(*param_2 + 0x1c0))(param_2);
    if (cVar3 == '\0') {
      iVar4 = *param_1;
      goto LAB_1434eee18;
    }
  }
  else {
LAB_1434eee18:
    if (iVar4 != 1) goto LAB_1434eee68;
    if (DAT_14c949118 == 0) {
      local_50 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar5 = FUN_140011aa6();
        lVar6 = FUN_140011c0e(uVar5,0x250,8);
      }
      else {
        lVar6 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar6;
      FUN_1446f470e(local_48,L"Class",1);
      local_70 = &local_50;
      local_78 = &LAB_146891e90;
      local_80 = (code *)&LAB_146273097;
      local_90 = L"Engine";
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,199);
      local_98 = 0x20;
      local_a0 = 0x10000000;
      local_a8._0_4_ = 8;
      FUN_14574b4b2(lVar6);
      DAT_14c949118 = lVar6;
      if (DAT_14c951858 == 0) {
        local_70 = &local_40;
        local_40 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = (wchar_t *)0x400000000;
        local_98 = CONCAT44(local_98._4_4_,0x10000000);
        local_a0 = 8;
        local_a8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar2 = DAT_14c951858;
      lVar6 = DAT_14c949118;
      uVar5 = FUN_1449e2fb2();
      local_a8 = L"Class";
      FUN_14574b446(uVar5,lVar6,lVar2,L"/Script/CoreUObject");
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
        DAT_14c949118 + 0x30)) goto LAB_1434eee68;
  }
  plVar1 = *(longlong **)(param_1 + 2);
  iVar4 = (int)plVar1[1];
  *(uint *)(plVar1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar1 + 0xc) < iVar4 + 1U) {
    FUN_1447f76d2(plVar1,iVar4);
  }
  *(longlong **)(*plVar1 + (longlong)iVar4 * 8) = param_2;
LAB_1434eee68:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ef03a FUN_1434ef03a body=29 status=ok
// SIG undefined FUN_1434ef03a(void)

undefined8 FUN_1434ef03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434ef06c FUN_1434ef06c body=93 status=ok
// SIG undefined FUN_1434ef06c(void)

void FUN_1434ef06c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30720;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef0ca FUN_1434ef0ca body=93 status=ok
// SIG undefined FUN_1434ef0ca(void)

void FUN_1434ef0ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30720;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef128 FUN_1434ef128 body=126 status=ok
// SIG undefined FUN_1434ef128(void)

void FUN_1434ef128(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30720;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8e9810;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434ef197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434ef1a6 FUN_1434ef1a6 body=77 status=ok
// SIG undefined FUN_1434ef1a6(void)

void FUN_1434ef1a6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1434ef244(param_1 + 0x18,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ef1f4 FUN_1434ef1f4 body=79 status=ok
// SIG undefined FUN_1434ef1f4(void)

undefined8 FUN_1434ef1f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1434ef244(param_1 + 0x18,&local_18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434ef244 FUN_1434ef244 body=519 status=ok
// SIG undefined FUN_1434ef244(void)

/* WARNING: Removing unreachable block (ram,0x0001434ef3fc) */
/* WARNING: Removing unreachable block (ram,0x0001434ef40b) */

void FUN_1434ef244(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong *local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)*param_3;
  uVar2 = *param_2;
  uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9);
  uVar4 = local_50;
  uVar5 = local_48;
  uVar6 = local_40;
  uVar7 = local_38;
  if (((uVar8 & 1) == 0) &&
     (uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9), uVar4 = local_50, uVar5 = local_48,
     uVar6 = local_40, uVar7 = local_38, (uVar8 & 8) == 0)) {
    param_1 = (longlong *)*param_1;
    (**(code **)(*plVar9 + 0x28))(plVar9,local_70);
    plVar9 = local_70[0];
    if (*(code **)(*local_70[0] + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*local_70[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar9);
    pcVar3 = *(code **)(*local_70[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar9 = local_70[0] + 3;
      if (local_70[0][5] != 0) {
        plVar9 = (longlong *)(local_70[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar9 = local_70[0] + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar3)(local_70[0]);
    }
    local_60 = (void *)0x0;
    local_58 = (int)plVar9[1];
    lVar10 = (longlong)local_58;
    _Src = (void *)*plVar9;
    if (lVar10 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,_Src,lVar10 * 2);
    }
    FUN_140056680(local_80,uVar2);
    FUN_147a91db0(&local_50,local_80,&local_60);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_147aac6cc(param_1,iVar1);
    }
    lVar10 = *param_1;
    lVar11 = (longlong)iVar1 * 0x20;
    *(undefined8 *)(lVar10 + lVar11) = 0;
    *(undefined8 *)(lVar10 + lVar11) = local_50;
    *(undefined4 *)(lVar10 + 8 + lVar11) = (undefined4)local_48;
    *(undefined4 *)(lVar10 + 0xc + lVar11) = local_48._4_4_;
    *(undefined8 *)(lVar10 + 0x10 + lVar11) = 0;
    *(undefined8 *)(lVar10 + 0x10 + lVar11) = local_40;
    *(undefined4 *)(lVar10 + 0x18 + lVar11) = (undefined4)local_38;
    *(undefined4 *)(lVar10 + 0x1c + lVar11) = local_38._4_4_;
    local_38 = 0;
    uVar7 = local_38;
    local_40 = 0;
    uVar6 = local_40;
    local_48 = 0;
    uVar5 = local_48;
    local_50 = 0;
    uVar4 = local_50;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
      uVar4 = local_50;
      uVar5 = local_48;
      uVar6 = local_40;
      uVar7 = local_38;
    }
  }
  local_38 = uVar7;
  local_40 = uVar6;
  local_48 = uVar5;
  local_50 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434ef44c FUN_1434ef44c body=64 status=ok
// SIG undefined FUN_1434ef44c(void)

undefined8 * FUN_1434ef44c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a8e9910;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434ef4a0 FUN_1434ef4a0 body=118 status=ok
// SIG undefined FUN_1434ef4a0(void)

void FUN_1434ef4a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9910;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14a8e98a0;
  return;
}



// FUNCTION 1434ef516 FUN_1434ef516 body=118 status=ok
// SIG undefined FUN_1434ef516(void)

void FUN_1434ef516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9910;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14a8e98a0;
  return;
}



// FUNCTION 1434ef58c FUN_1434ef58c body=156 status=ok
// SIG undefined FUN_1434ef58c(void)

void FUN_1434ef58c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _LIST_ENTRY *p_Var3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a8e9910;
  p_Var2->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var2->ProcessLocksList).Flink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&p_Var3->Blink + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar4;
  p_Var2->ContentionCount = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined ***)p_Var2 = &PTR_FUN_14a8e98a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434ef618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434ef632 FUN_1434ef632 body=20 status=ok
// SIG undefined FUN_1434ef632(void)

undefined1 FUN_1434ef632(longlong param_1)

{
  FUN_1434ef646(param_1 + 8);
  return 1;
}



// FUNCTION 1434ef646 FUN_1434ef646 body=235 status=ok
// SIG undefined FUN_1434ef646(void)

void FUN_1434ef646(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    lVar4 = param_1[2];
    lVar5 = *param_1;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    if (((lVar5 != 0) && (lVar4 != 0)) && (0 < (int)plVar3[1])) {
      local_30 = 0;
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_1434ef6e9;
        }
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar9 = iVar8 == iVar7;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar9);
      local_28 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        local_30 = lVar5;
      }
LAB_1434ef6e9:
      local_20 = &local_30;
      FUN_147aaccc8();
      plVar6 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434ef732 FUN_1434ef732 body=29 status=ok
// SIG undefined FUN_1434ef732(void)

undefined8 FUN_1434ef732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434ef764 FUN_1434ef764 body=93 status=ok
// SIG undefined FUN_1434ef764(void)

void FUN_1434ef764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef7c2 FUN_1434ef7c2 body=93 status=ok
// SIG undefined FUN_1434ef7c2(void)

void FUN_1434ef7c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef820 FUN_1434ef820 body=126 status=ok
// SIG undefined FUN_1434ef820(void)

void FUN_1434ef820(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8e9bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434ef88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434ef8b0 FUN_1434ef8b0 body=28 status=ok
// SIG undefined FUN_1434ef8b0(void)

undefined8 FUN_1434ef8b0(longlong param_1)

{
  FUN_1447f69b6(*(longlong *)(param_1 + 0x18) + 0xe50);
  return 1;
}



// FUNCTION 1434ef8cc FUN_1434ef8cc body=29 status=ok
// SIG undefined FUN_1434ef8cc(void)

undefined8 FUN_1434ef8cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434ef8fe FUN_1434ef8fe body=93 status=ok
// SIG undefined FUN_1434ef8fe(void)

void FUN_1434ef8fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef95c FUN_1434ef95c body=93 status=ok
// SIG undefined FUN_1434ef95c(void)

void FUN_1434ef95c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e9cd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1434ef9ba FUN_1434ef9ba body=126 status=ok
// SIG undefined FUN_1434ef9ba(void)

void FUN_1434ef9ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8e9cd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434efa29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434efa4a FUN_1434efa4a body=28 status=ok
// SIG undefined FUN_1434efa4a(void)

undefined8 FUN_1434efa4a(longlong param_1)

{
  FUN_1447f69b6(*(longlong *)(param_1 + 0x18) + 0xe80);
  return 1;
}



// FUNCTION 1434efa66 FUN_1434efa66 body=102 status=ok
// SIG undefined FUN_1434efa66(void)

void FUN_1434efa66(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001434efabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x370))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1434efaf4 FUN_1434efaf4 body=282 status=ok
// SIG undefined FUN_1434efaf4(void)

undefined8 * FUN_1434efaf4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434efacd);
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



// FUNCTION 1434efc0e FUN_1434efc0e body=212 status=ok
// SIG undefined FUN_1434efc0e(void)

void FUN_1434efc0e(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_28 = 0;
  local_20 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_28,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434efd0a FUN_1434efd0a body=103 status=ok
// SIG undefined FUN_1434efd0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434efd0a(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\0') {
    _DAT_14ca964d0 = *(float *)(param_1 + 4);
    DAT_14ca964d4 = _DAT_14ca964d0 + DAT_14ca964d4;
  }
  FUN_14322439e(&DAT_14ca9a3e8);
  FUN_14490ffcc(&DAT_14ca95560);
  if (DAT_14ca94d90 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434efd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca94d90 + 8))(DAT_14ca94d90,param_2);
    return;
  }
  return;
}



// FUNCTION 1434efd7c FUN_1434efd7c body=12 status=ok
// SIG undefined FUN_1434efd7c(void)

void FUN_1434efd7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434efd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434efd88 FUN_1434efd88 body=29 status=ok
// SIG undefined FUN_1434efd88(void)

undefined8 FUN_1434efd88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434efda6 FUN_1434efda6 body=282 status=ok
// SIG undefined FUN_1434efda6(void)

undefined8 * FUN_1434efda6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434efacd);
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



// FUNCTION 1434efec0 FUN_1434efec0 body=153 status=ok
// SIG undefined FUN_1434efec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434efec0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    _DAT_14ca964d0 = *(float *)((longlong)param_1 + 0xac);
    DAT_14ca964d4 = _DAT_14ca964d0 + DAT_14ca964d4;
  }
  FUN_14322439e(&DAT_14ca9a3e8);
  FUN_14490ffcc(&DAT_14ca95560);
  if (DAT_14ca94d90 != (longlong *)0x0) {
    (**(code **)(*DAT_14ca94d90 + 8))(DAT_14ca94d90,&DAT_14ca85100);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434eff4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434eff5a FUN_1434eff5a body=55 status=ok
// SIG undefined FUN_1434eff5a(void)

void FUN_1434eff5a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434eff8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1434eff96 FUN_1434eff96 body=29 status=ok
// SIG undefined FUN_1434eff96(void)

undefined8 FUN_1434eff96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434effc8 FUN_1434effc8 body=108 status=ok
// SIG undefined FUN_1434effc8(void)

void FUN_1434effc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ea140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ea0d0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1434f0034 FUN_1434f0034 body=108 status=ok
// SIG undefined FUN_1434f0034(void)

void FUN_1434f0034(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ea140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ea0d0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1434f00a0 FUN_1434f00a0 body=141 status=ok
// SIG undefined FUN_1434f00a0(void)

void FUN_1434f00a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8ea140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8ea0d0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434f011e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434f0138 FUN_1434f0138 body=20 status=ok
// SIG undefined FUN_1434f0138(void)

undefined1 FUN_1434f0138(longlong param_1)

{
  FUN_147aaf61c(param_1 + 0x18);
  return 1;
}



// FUNCTION 1434f014c FUN_1434f014c body=111 status=ok
// SIG undefined FUN_1434f014c(void)

undefined8 * FUN_1434f014c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a8ea1b0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1434f019d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1434f019d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434f033a FUN_1434f033a body=164 status=ok
// SIG undefined FUN_1434f033a(void)

void FUN_1434f033a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ea1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_147aaf692(puVar1 + 5,param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1434f03de FUN_1434f03de body=164 status=ok
// SIG undefined FUN_1434f03de(void)

void FUN_1434f03de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8ea1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_147aaf692(puVar1 + 5,param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1434f0482 FUN_1434f0482 body=198 status=ok
// SIG undefined FUN_1434f0482(void)

void FUN_1434f0482(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8ea1b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_147aaf692(&p_Var1->Flags,param_1 + 0x28);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if ((p_Var3 != (_RTL_CRITICAL_SECTION *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434f0531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434f0548 FUN_1434f0548 body=63 status=ok
// SIG undefined FUN_1434f0548(void)

void FUN_1434f0548(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_4;
  FUN_1434f06aa(param_1 + 0x20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f0588 FUN_1434f0588 body=288 status=ok
// SIG undefined FUN_1434f0588(void)

undefined8 FUN_1434f0588(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1434f06a2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1434f06a2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1434f06a2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1434f0655;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1434f06aa(param_1 + 0x20,param_2,&local_38);
      uVar6 = 1;
      goto LAB_1434f0655;
    }
  }
  uVar6 = 0;
LAB_1434f0655:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f06aa FUN_1434f06aa body=163 status=ok
// SIG undefined FUN_1434f06aa(void)

void FUN_1434f06aa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_3;
  uVar2 = *param_1;
  local_30 = param_1[3];
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1434e9c2a(uVar1,param_2,&local_30,uVar2);
  if (param_1[1] == 0 || *(int *)(param_1 + 2) == 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1434f0763 FUN_1434f0763 body=4542 status=ok
// SIG undefined FUN_1434f0763(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434f0763(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  longlong local_78;
  LARGE_INTEGER local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cad8300);
  if (cVar2 == '\0') {
    _DAT_14cad8300 = 0;
    uRam000000014cad8308 = 0;
  }
  if (local_70.QuadPart != 0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8cb9c0,1,0);
  _DAT_14cadad98 = 0;
  DAT_14cadad90 = 0x10101;
  DAT_14cadada0 = 0x10202;
  _DAT_14cad8330 = 0x20202;
  DAT_14cadad64 = 0x1000000;
  _DAT_14cadad9c = 0x1010101;
  local_98._0_4_ = 4;
  FUN_1415c789c(&DAT_14cad8348,L"r.Nanite.gbx.FallbackPercentTriangles",&DAT_14c761520,
                L"Adjust global default value of FMeshNaniteSettings.FallbackPercentTriangles.\n");
  atexit(FUN_1434df4c7);
  local_98 = CONCAT44(local_98._4_4_,4);
  FUN_1415c789c(&DAT_14cad8358,L"r.Nanite.gbx.FallbackRelativeError",&DAT_14c761524,
                L"Adjust global default value of FMeshNaniteSettings.FallbackRelativeError.\n");
  atexit(FUN_1434df50c);
  local_70.QuadPart = 0x149fca2ba;
  local_68 = 0xd;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cad8368 = (ulonglong)uVar3;
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8cbf70);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cad83b8,L"IA.ValidateAccessFromGameThread",&DAT_14cad83b0,
                L"If set errors will get reported when trying to resolve or access the handle from non game threads."
               );
  atexit(FUN_1434e0b75);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8cc5f0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8ccaa0,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8cd040);
  _DAT_14cad8470 = 0x8000000149e3af04;
  local_70.s.LowPart = 3;
  _DAT_14cad8478 = FUN_14577453c(&DAT_149e3af04,&local_70);
  DAT_14cad847c = 1;
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14a8cd5f0;
  local_98 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8cd610,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8cdc50);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8cdec0);
  _DAT_14cad84e0 = 0xb00000000;
  _DAT_14cad84e8 = FUN_1434e1382;
  _DAT_14cad84f0 = FUN_1434e147e;
  _DAT_14cad84f8 = &LAB_147a922f0;
  _DAT_14cad8500 = &LAB_147a922f6;
  _DAT_14cad8508 = FUN_147a922fc;
  _DAT_14cad8510 = FUN_147a92442;
  _DAT_14cad8518 = FUN_147a925d2;
  _DAT_14cad8520 = FUN_147a9272c;
  _DAT_14cad8528 = FUN_147a9278a;
  _DAT_14cad8530 = FUN_147a927ee;
  _DAT_14cad8538 = FUN_147a9256c;
  _DAT_14cad8540 = 0;
  _DAT_14cad8548 = &DAT_14cad8560;
  _DAT_14cad8550 = 0x8001000100140;
  _DAT_14cad8558 = L"FHitResultNetSerializer";
  _DAT_14cad8568 = 0;
  _DAT_14cad8560 = &PTR_FUN_14a8e5cf0;
  FUN_14588533c(&DAT_14cad8570,0);
  _DAT_14cad8570 = &PTR_FUN_14a8e5d00;
  atexit((_func_5014 *)&LAB_1434e1356);
  _DAT_14cad8590 = &PTR_FUN_149f9f140;
  DAT_14cad85a0 = 0;
  _DAT_14cad8598 = 1;
  atexit((_func_5014 *)&LAB_1434e1362);
  local_70.QuadPart = 0x14a1a09f4;
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cad85c8 = (ulonglong)uVar3;
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8ce460,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8cf130,4,0);
  ppuStack_90 = &PTR_FUN_14a8cfc80;
  local_88 = 2;
  local_98 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8cfcc0);
  local_98 = CONCAT44(local_98._4_4_,4);
  FUN_141471170(&DAT_14cad86f0,L"p.EnableMultiplayerWorldOriginRebasing",&DAT_14cad86e8,
                L"Enable world origin rebasing for multiplayer, meaning that servers and clients can have different world origin locations."
               );
  atexit(FUN_1434e15e5);
  local_70.QuadPart = (LONGLONG)&DAT_14a19662d;
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d1810,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d1ce0,1,0);
  FUN_1402160b8(&local_78);
  QueryPerformanceCounter(&local_70);
  DAT_14cad8970 =
       (double)(local_78 % 864000000000) / 10000000.0 -
       ((double)local_70.QuadPart * DAT_14c83f420 + 16777216.0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8d1e10);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14a8d28b0;
  local_98 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d28d0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d3120,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d3ca0,1,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14a8d4830;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d4880,1,&PTR_FUN_14a8d4850);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d5640,1,&PTR_FUN_14a8d5610);
  FUN_1400b22c2(&local_70,"Bitmap");
  local_98 = CONCAT44(local_98._4_4_,0x100);
  FUN_140f510cc(&DAT_14cad8ad8,L"UI.SlateSDFText.RasterizationMode",&local_70,
                L"Sets the rasterization mode of font faces with distance field rasterization enabled. Possible values are: Bitmap, Msdf, Sdf, SdfApproximation."
               );
  if ((undefined *)local_70.QuadPart != (undefined *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1434e22d8);
  local_70.s.LowPart = 2;
  local_98._0_4_ = 0x100;
  FUN_14078dbce(&DAT_14cad8af0,L"UI.SlateSDFText.ResolutionLevel",&local_70,
                L"Sets the resolution level (1 = low, 2 = medium, 3 = high) of font faces with distance field rasterization enabled."
               );
  atexit(FUN_1434e231d);
  local_98._0_4_ = 0;
  FUN_1415c789c(&DAT_14cad8c20,L"t.SlowFrameLoggingThreshold",&DAT_14cad8c1c,
                L"How slow must a frame be (in seconds) to be logged out (<= 0 to disable).");
  atexit(FUN_1434e240e);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cad8c30,L"tick.DoAsyncEndOfFrameTasks",&DAT_14cad8c40,
                L"Experimental option to run various things concurrently with the HUD render.");
  atexit(FUN_1434e2453);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cad8c48,L"tick.MinimizedSyncDrawToGPU",&DAT_14c761514,
                L"True means we will wait for GPU idle when minimized. Prevents mem leaks due to CPU issuing draws faster than GPU processes when minimized."
               );
  atexit(FUN_1434e2498);
  local_70.QuadPart = 0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_70.QuadPart + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_149e00260;
  *(code **)(local_70.QuadPart + 0x18) = FUN_1434e24dd;
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  FUN_1415c7246(&DAT_14cad8c58,L"SynthBenchmark",
                L"Run simple benchmark to get some metrics to find reasonable game settings automatically\nOptional (float) parameter allows to scale with work amount to trade time or precision (default: 10)."
                ,&local_70);
  if (local_68 != 0) {
    if ((undefined8 *)local_70.QuadPart == (undefined8 *)0x0) goto LAB_1434f0ffe;
    (*(code *)**(undefined8 **)local_70)(local_70.QuadPart,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if ((undefined8 *)local_70.QuadPart != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1434f0ffe:
  atexit(FUN_1434e269a);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d67f0,1,0);
  FUN_145e3f004();
  atexit((_func_5014 *)&LAB_1434e50a4);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d7220,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8d7390);
  _DAT_14cada300 = 0xa00000000;
  _DAT_14cada308 = &LAB_147a9913c;
  _DAT_14cada310 = FUN_1434e6bd8;
  _DAT_14cada318 = FUN_147aa86df;
  _DAT_14cada320 = FUN_147aa8798;
  _DAT_14cada328 = FUN_1434e6d7a;
  _DAT_14cada330 = FUN_147a9924e;
  _DAT_14cada338 = FUN_147a992b8;
  _DAT_14cada340 = FUN_147a99396;
  _DAT_14cada348 = FUN_147a993ca;
  _DAT_14cada350 = &LAB_147a994ac;
  _DAT_14cada358 = &LAB_147a994b6;
  _DAT_14cada360 = 0;
  _DAT_14cada368 = &DAT_14cada380;
  _DAT_14cada370 = 0x8001800080178;
  _DAT_14cada378 = L"FCharacterNetworkSerializationPackedBitsNetSerializer";
  _DAT_14cada388 = 0;
  _DAT_14cada380 = &PTR_FUN_14a8e6d60;
  _DAT_14cada390 = 0x2000;
  FUN_14588533c(&DAT_14cada398,0);
  _DAT_14cada398 = &PTR_FUN_14a8e6d70;
  atexit((_func_5014 *)&LAB_1434e6bcb);
  local_70.QuadPart = 0x14a5d8bb0;
  local_68 = 0x1f;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cada3c0 = (ulonglong)uVar3;
  local_70.QuadPart = 0x14a5d8b14;
  local_68 = 0x1d;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cada3c8 = (ulonglong)uVar3;
  local_70.QuadPart = 0x14a5d8a78;
  local_68 = 0x27;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cada3d0 = (ulonglong)uVar3;
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8d7f10,1,&PTR_FUN_14a8d7e90);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cada4b0,L"Input.ShouldAlwaysEvaluateForceFeedbackDuration",&DAT_14c761518,
                L"Should the duration of a force feedback effect be evaluated every time it is called?"
               );
  atexit(FUN_1434e6ed7);
  FUN_1446f470e(&DAT_14cada4c8,L"EvaluateDeviceProperty",1);
  FUN_1446f470e(&DAT_14cada4d8,L"ResetDeviceProperty",1);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8db2a0,8,&PTR_FUN_14a8db180);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8dc6e0,1,&PTR_FUN_14a8dc690);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8dca50,1,0);
  ppuStack_90 = &PTR_FUN_14a8de310;
  local_88 = 4;
  local_98 = 10;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8de390);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8dea60);
  _DAT_14cada8b8 = 0xb00000000;
  _DAT_14cada8c0 = FUN_147aa0d82;
  _DAT_14cada8c8 = FUN_147aa0ffe;
  _DAT_14cada8d0 = FUN_147aa143c;
  _DAT_14cada8d8 = FUN_147aa1884;
  _DAT_14cada8e0 = FUN_147aa1f54;
  _DAT_14cada8e8 = FUN_147aa2060;
  _DAT_14cada8f0 = FUN_147aa24c0;
  _DAT_14cada8f8 = FUN_147aa2758;
  _DAT_14cada900 = FUN_147aa296e;
  _DAT_14cada908 = FUN_147aa2c0c;
  _DAT_14cada910 = FUN_147aa2c42;
  _DAT_14cada918 = 0;
  _DAT_14cada920 = &DAT_14cada868;
  _DAT_14cada928 = 0x8002800100050;
  _DAT_14cada930 = L"FRootMotionSourceGroupNetSerializer";
  FUN_1446f470e(&DAT_14cada9b8,L"OnPostLoad",1);
  FUN_1446f470e(&DAT_14cada9c8,L"OnPostSave",1);
  FUN_1446f470e(&DAT_14cada9d8,L"OnPreSave",1);
  FUN_1446f470e(&DAT_14cada9e8,L"OnResetToDefault",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8e04e0,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8e1530,1,0);
  FUN_1446f470e(&DAT_14cadaa68,L"SpringEndpoint",1);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8e1f90,1,&PTR_FUN_14a8e1f60);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8e2060);
  _DAT_14cadaab8 = 0x300000000;
  _DAT_14cadaac0 = FUN_147aa4284;
  _DAT_14cadaac8 = FUN_147aa43c2;
  _DAT_14cadaad0 = &LAB_147aa4606;
  _DAT_14cadaad8 = &LAB_147aa460c;
  _DAT_14cadaae0 = FUN_147aa4612;
  _DAT_14cadaae8 = FUN_147aa48c4;
  _DAT_14cadaaf0 = FUN_147aa4bd4;
  _DAT_14cadaaf8 = FUN_147aa4d36;
  _DAT_14cadab00 = FUN_147aa4e50;
  _DAT_14cadab08 = &LAB_147aa4f1a;
  _DAT_14cadab10 = &DAT_147aa4f24;
  _DAT_14cadab18 = 0;
  _DAT_14cadab20 = &DAT_14cadab38;
  _DAT_14cadab28 = 0x8001000080040;
  _DAT_14cadab30 = L"FUniqueNetIdReplNetSerializer";
  _DAT_14cadab40 = 0;
  _DAT_14cadab38 = &PTR_FUN_14a8e9400;
  FUN_14588533c(&DAT_14cadab48,0);
  _DAT_14cadab48 = &PTR_FUN_14a8e9410;
  atexit((_func_5014 *)&LAB_1434eaed2);
  _DAT_14cadab68 = &PTR_FUN_149f9f140;
  DAT_14cadab78 = 0;
  _DAT_14cadab70 = 1;
  atexit((_func_5014 *)&LAB_1434eaede);
  _DAT_14cadab80 = &PTR_FUN_149f9f140;
  DAT_14cadab90 = 0;
  _DAT_14cadab88 = 1;
  atexit((_func_5014 *)&LAB_1434eaefd);
  local_70.QuadPart = 0x14a8eae86;
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70);
  DAT_14cadab98 = (ulonglong)uVar3;
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a8e25c0);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cadabf8,L"PlayerController.LevelVisibilityDontSerializeFileName",
                &DAT_14cadac08);
  atexit(FUN_1434eaf1c);
  FUN_1446f470e(&DAT_14cadac38,L"HandleNetworkError",1);
  FUN_1446f470e(&DAT_14cadac48,L"HandleTravelError",1);
  FUN_1446f470e(&DAT_14cadac58,L"ReceiveInit",1);
  FUN_1446f470e(&DAT_14cadac68,L"ReceiveShutdown",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8e3850,1,0);
  FUN_1446f470e(&DAT_14cadacb0,L"K2_OnSetMatchState",1);
  FUN_1446f470e(&DAT_14cadacc0,L"ReadyToEndMatch",1);
  FUN_1446f470e(&DAT_14cadacd0,L"ReadyToStartMatch",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8e5160,1,0);
  FUN_1446f470e(&DAT_14cadad68,L"EnteringMap",1);
  FUN_1446f470e(&DAT_14cadad70,L"WaitingToStart",1);
  FUN_1446f470e(&DAT_14cadad78,L"InProgress",1);
  FUN_1446f470e(&DAT_14cadad80,L"WaitingPostMatch",1);
  FUN_1446f470e(&DAT_14cadad88,L"LeavingMap",1);
  FUN_1446f470e(&DAT_14cadad10,L"Aborted",1);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f1924 FUN_1434f1924 body=49 status=ok
// SIG undefined FUN_1434f1924(void)

void FUN_1434f1924(void)

{
  FUN_144760e21(DAT_14cadaf30,DAT_14cadaf38);
  if (DAT_14cadaf30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434f1955 FUN_1434f1955 body=49 status=ok
// SIG undefined FUN_1434f1955(void)

void FUN_1434f1955(void)

{
  FUN_144760e21(DAT_14cadaf48,DAT_14cadaf50);
  if (DAT_14cadaf48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434f1986 FUN_1434f1986 body=49 status=ok
// SIG undefined FUN_1434f1986(void)

void FUN_1434f1986(void)

{
  FUN_144760e21(DAT_14cadbeb0,DAT_14cadbeb8);
  if (DAT_14cadbeb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434f19b7 FUN_1434f19b7 body=49 status=ok
// SIG undefined FUN_1434f19b7(void)

void FUN_1434f19b7(void)

{
  FUN_144760e21(DAT_14cadbec8,DAT_14cadbed0);
  if (DAT_14cadbec8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434f19e8 FUN_1434f19e8 body=49 status=ok
// SIG undefined FUN_1434f19e8(void)

void FUN_1434f19e8(void)

{
  FUN_144760e21(DAT_14cadbe60,DAT_14cadbe68);
  if (DAT_14cadbe60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1434f1a19 FUN_1434f1a19 body=69 status=ok
// SIG undefined FUN_1434f1a19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434f1a19(void)

{
  _DAT_14cadaf60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434f1a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cadaf68,1);
  return;
}



// FUNCTION 1434f1a5e FUN_1434f1a5e body=69 status=ok
// SIG undefined FUN_1434f1a5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434f1a5e(void)

{
  _DAT_14cadaf78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434f1aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cadaf80,1);
  return;
}



// FUNCTION 1434f1aa4 FUN_1434f1aa4 body=956 status=ok
// SIG undefined FUN_1434f1aa4(void)

void FUN_1434f1aa4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140a01d60();
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0x100;
  local_98 = 0;
  local_88 = (longlong *)0x0;
  lStack_c0 = param_1[0x36];
  local_a4 = 0x48;
  lVar3 = param_1[0x75];
  if ((((lVar3 == 0) || (lVar2 = FUN_1413e9348(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (param_1[0x75] == 0)))) {
    lVar3 = FUN_1413e9348();
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x75] = lVar3;
  }
  lVar2 = FUN_1447210f0(param_1);
  lVar3 = param_1[0x75];
  if (((lVar3 == 0) || (lVar4 = FUN_1413e9348(), lVar4 == 0)) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[0x75];
  }
  local_138 = (code *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3ff00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  lVar3 = FUN_141037e38(lVar2,lVar3,&local_138,&local_d8);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x7e] = lVar3;
  FUN_145ae2e96(lVar2,lVar3);
  lVar3 = param_1[0x7e];
  if (lVar3 != 0) {
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong **)(lVar3 + 0x398) = param_1;
  }
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0);
  }
  lVar4 = *(longlong *)(lVar3 + 0x438);
  if (lVar4 != 0) {
    if (DAT_14cac0fa8 == 0) {
      local_138 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_141117124;
      local_158 = &LAB_14786c867;
      local_160 = &LAB_145abcadb;
      local_168 = &DAT_149e063b2;
      local_170 = 0;
      local_178 = 0x10000004;
      local_180 = 8;
      local_188 = 0x438;
      local_150 = &local_138;
      FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
      if (DAT_14cac0fa8 == 0) goto LAB_1434f1cb0;
    }
    iVar1 = *(int *)(DAT_14cac0fa8 + 0x38);
    if (((iVar1 <= *(int *)(lVar4 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cac0fa8 + 0x30))
       && (lVar3 = *(longlong *)(lVar3 + 0x438), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < iVar1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cac0fa8 + 0x30
           ) {
          lVar4 = lVar3;
        }
      }
      local_138 = (code *)0x0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0x3ff00000;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0x3ff0000000000000;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0;
      lVar3 = FUN_141037e38(lVar2,lVar4,&local_138,&local_d8);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      goto LAB_1434f1cb2;
    }
  }
LAB_1434f1cb0:
  lVar3 = 0;
LAB_1434f1cb2:
  *(longlong *)(lVar2 + 0x58) = lVar3;
  (**(code **)(*param_1 + 0x6a0))(param_1);
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f1e62 FUN_1434f1e62 body=445 status=ok
// SIG undefined FUN_1434f1e62(void)

undefined8 FUN_1434f1e62(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  cVar2 = (**(code **)(*param_1 + 0x6e8))(param_1,0);
  if (cVar2 == '\0') {
    if ((int)param_1[0x84] < 1) {
      uVar4 = 0;
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x424);
      FUN_1458d8a4f(param_1[0x83]);
      *(undefined4 *)(param_1 + 0x84) = 0;
      uVar4 = 1;
      if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x424) != 0)) {
        FUN_147ad0ef4(param_1 + 0x83);
      }
    }
  }
  iVar6 = (int)param_1[0x84];
  uVar7 = (ulonglong)iVar6;
  if (0 < (longlong)uVar7) {
    lVar5 = uVar7 << 4;
    do {
      lVar5 = lVar5 + -0x10;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_14096c7c0(&local_48,param_1[0x83] + lVar5);
      if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*local_48 + 0x30))(), cVar2 == '\0')) {
LAB_1434f1f75:
        FUN_1463d0046(param_1 + 0x83,(int)uVar7 + -1);
        uVar4 = 1;
      }
      else {
        plVar3 = local_48;
        if (local_40 == 0) {
          plVar3 = (longlong *)0x0;
        }
        cVar2 = (**(code **)(*plVar3 + 0x58))();
        if (cVar2 != '\0') goto LAB_1434f1f75;
      }
      if (local_40 == 0) {
LAB_1434f1f54:
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_48 != (longlong *)0x0) {
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
        goto LAB_1434f1f54;
      }
      bVar1 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
    iVar6 = (int)param_1[0x84];
  }
  if (iVar6 == 0) {
    plVar3 = (longlong *)FUN_14093f908(param_1);
    (**(code **)(*plVar3 + 0x690))(plVar3,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1434f2020 FUN_1434f2020 body=942 status=ok
// SIG undefined FUN_1434f2020(void)

void FUN_1434f2020(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b0;
  code *local_a8;
  undefined1 local_a0 [28];
  char local_84;
  longlong *local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = FUN_1447210f0();
  if (0 < *(int *)(lVar4 + 0x228)) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x220) + 4 + lVar6 * 8);
      if ((iVar1 == 0) ||
         (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x220) + lVar6 * 8), (int)uVar2 < 0)) {
LAB_1434f2128:
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)0x0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar1)) ||
              ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) ||
             (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)) goto LAB_1434f2128;
          if (DAT_14caf9cd0 == 0) {
            local_a8 = FUN_141030f22;
            local_c0 = FUN_14081d0ea;
            local_c8 = (code *)&LAB_1463c0cc2;
            local_d0 = &local_a8;
            local_d8 = &LAB_147c9db5b;
            local_e0 = &LAB_1463f9c44;
            local_e8 = L"Game";
            local_f0 = 0x2000000000;
            local_f8 = 0x10000004;
            local_100 = 8;
            local_108 = 0x958;
            FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
          }
          if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
              DAT_14caf9cd0 + 0x30)) {
            uVar5 = FUN_14477b072(plVar7,DAT_14caf96f8);
            (**(code **)(*plVar7 + 0x248))(plVar7,uVar5,0);
          }
        }
      }
      (**(code **)(*plVar7 + 0x570))(plVar7);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(lVar4 + 0x228));
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_1405f0e9c(&local_a8,uVar5,5);
  if (local_84 == '\0') {
    do {
      plVar7 = local_78;
      if (((local_78 != (longlong *)0x0) && (local_78 != param_1)) &&
         ((*(uint *)(local_78 + 1) & 0x40000000) == 0)) {
        if (DAT_14cad3ae0 == 0) {
          local_b0 = FUN_141030f22;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_142b4754c;
          local_d0 = &local_b0;
          local_d8 = &LAB_147a36475;
          local_e0 = &LAB_1463c0cc7;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10000005;
          local_100 = 8;
          local_108 = 0x428;
          FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
        }
        if (((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cad3ae0 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) !=
             DAT_14cad3ae0 + 0x30)) && (cVar3 = FUN_147ab21ca(param_1,plVar7), cVar3 != '\0')) {
          (**(code **)(*plVar7 + 0x570))(plVar7);
        }
      }
      FUN_14059e512(&local_a8);
    } while (local_84 == '\0');
  }
  if (local_50 == '\x01') {
    FUN_14024445c(local_a0);
  }
  (**(code **)(*param_1 + 0x570))(param_1);
  lVar4 = FUN_1447210f0(param_1);
  plVar7 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0xf0);
  if (plVar7 != (longlong *)0x0) {
    uVar5 = FUN_14477b072(plVar7,DAT_14cae8eb0);
    (**(code **)(*plVar7 + 0x248))(plVar7,uVar5,0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f23d0 FUN_1434f23d0 body=753 status=ok
// SIG undefined FUN_1434f23d0(void)

ulonglong FUN_1434f23d0(undefined8 param_1,longlong **param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447210f0();
  local_60 = 0xffffffff;
  local_68 = 0;
  iVar3 = FUN_1447ee042(param_2,&DAT_149e1dd00,1,1);
  if (iVar3 == -1) {
    local_60 = 0xffffffff;
    local_68 = 0;
    iVar3 = FUN_1447ee042(param_2,&DAT_149e31048,1,1);
    if (iVar3 == -1) {
      local_60 = 0xffffffff;
      local_68 = 0;
      iVar3 = FUN_1447ee042(param_2,&DAT_149e01f64,1,1);
      if (iVar3 == -1) {
        local_38 = (longlong *)0x0;
        uStack_30 = 0;
        local_60 = 0xffffffff;
        local_68 = 0;
        iVar3 = FUN_1447ee042(param_2,&DAT_149e1423e,1,1);
        if (iVar3 == -1) {
          if (&local_38 != param_2) {
            uVar1 = *(uint *)(param_2 + 1);
            param_2 = (longlong **)*param_2;
            uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
            if ((longlong)(int)uVar1 == 0) {
              uStack_30 = (ulonglong)uVar1;
            }
            else {
              FUN_1446dd670(&local_38,uVar1,0);
              memcpy(local_38,param_2,(longlong)(int)uVar1 * 2);
            }
          }
        }
        else {
          iVar5 = *(int *)(param_2 + 1) + -1;
          if (*(int *)(param_2 + 1) == 0) {
            plVar4 = (longlong *)&DAT_149dfb77a;
            iVar5 = 0;
          }
          else {
            plVar4 = *param_2;
          }
          if (iVar3 < iVar5) {
            iVar5 = iVar3;
          }
          if (iVar5 < 1) {
            iVar5 = 0;
          }
          FUN_14006620a(&local_48,plVar4,iVar5);
          if (local_38 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uStack_30 = CONCAT44(uStack_3c,uStack_40);
          local_38 = local_48;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_48 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        uStack_40 = 0;
        plVar4 = (longlong *)&DAT_149dfb77a;
        if ((int)uStack_30 != 0) {
          plVar4 = local_38;
        }
        if ((short)*plVar4 == 0x2f) {
          local_58 = local_38;
          param_2 = (longlong **)0x0;
          local_50 = (int)uStack_30 + -1;
          if ((int)uStack_30 == 0) {
            local_50 = 0;
          }
          cVar2 = FUN_14022ef98(&local_58,1,&local_48);
          if (cVar2 != '\0') goto LAB_1434f260e;
        }
        else {
LAB_1434f260e:
          param_2 = (longlong **)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        }
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0x10))();
        }
        if (local_38 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1434f2480;
      }
    }
  }
  param_2 = (longlong **)0x0;
LAB_1434f2480:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 1434f26c2 FUN_1434f26c2 body=558 status=ok
// SIG undefined FUN_1434f26c2(void)

void FUN_1434f26c2(longlong *param_1,code *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_2 != (code *)0x0) && (param_3 != (longlong *)0x0)) &&
      ((*(uint *)(param_2 + 8) & 0x40000000) == 0)) &&
     (((*(uint *)(param_3 + 1) >> 0x1e & 1) == 0 &&
      (lVar5 = *(longlong *)(param_2 + 0x430), lVar5 != 0)))) {
    *(code *)((longlong)param_3 + 0x5a4) = param_2[0x5a4];
    lVar2 = *(longlong *)(param_2 + 0x608);
    pcVar3 = param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_2 + 0x608);
      }
    }
    param_3[0xc1] = lVar2;
    uVar4 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),param_2[99]) & 0xffffffffffffff08;
    FUN_140c7ce82(param_3,CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 3));
    (**(code **)(*param_3 + 0xd30))(param_3,lVar5);
    FUN_1478c0b42(param_3,param_2);
    local_40 = param_2;
    local_38 = param_3;
    uVar1 = FUN_14477b072(param_1,DAT_14cadae78);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
    if (DAT_14cae9568 == 0) {
      local_40 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) {
      lVar2 = FUN_140496b24();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(param_2 + 0x600) = lVar5;
    }
    else {
      uVar1 = FUN_1447210f0(param_1);
      FUN_1412f3774(uVar1,param_2,0,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f28f2 FUN_1434f28f2 body=867 status=ok
// SIG undefined FUN_1434f28f2(void)

void FUN_1434f28f2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60 [3];
  code *local_48 [3];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
LAB_1434f2949:
    plVar4 = (longlong *)0x0;
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_80 = local_48;
      local_48[0] = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1463c0cc2;
      local_88 = &LAB_147c9db5b;
      local_90 = &LAB_1463f9c44;
      local_98 = &DAT_149e063b2;
      local_a0 = 0x2000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(plVar1[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
        DAT_14caf9cd0 + 0x30)) goto LAB_1434f2949;
    plVar4 = plVar1;
    if (plVar1[0x86] != 0) {
      (**(code **)(*param_1 + 0x728))(param_1,local_60,plVar1);
      lVar2 = local_60[0];
      if (local_60[0] == 0) {
LAB_1434f29e0:
        local_30 = 0;
      }
      else {
        if (DAT_14caf9cd0 == 0) {
          local_80 = local_48;
          local_48[0] = FUN_141030f22;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1463c0cc2;
          local_88 = &LAB_147c9db5b;
          local_90 = &LAB_1463f9c44;
          local_98 = &DAT_149e063b2;
          local_a0 = 0x2000000000;
          local_a8 = 0x10000004;
          local_b0 = 8;
          local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0x958);
          FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
          if (DAT_14caf9cd0 == 0) goto LAB_1434f29e0;
        }
        if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) goto LAB_1434f29e0;
        if (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
            DAT_14caf9cd0 + 0x30) {
          local_60[0] = 0;
        }
        local_30 = local_60[0];
        if ((local_60[0] != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
        }
      }
      (**(code **)(*plVar1 + 0x680))(plVar1,local_48);
      (**(code **)(*plVar1 + 0xe60))(plVar1,local_60);
      iVar5 = 2;
      if ((*(byte *)(plVar1 + 0x84) & 2) != 0) {
        bVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1,2);
        iVar5 = 2 - (uint)bVar3;
      }
      local_b8 = &local_30;
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x830))(param_1,iVar5,local_60,local_48);
      if (plVar4 == (longlong *)0x0) {
        FUN_140aeefbc(plVar1,0,1);
        goto LAB_1434f2972;
      }
      (**(code **)(*plVar1 + 0xbe0))(plVar1,plVar4);
      (**(code **)(*plVar4 + 0xbe8))(plVar4,plVar1);
      (**(code **)(*param_1 + 0x720))(param_1,plVar1,plVar4);
      *param_2 = (longlong)plVar4;
    }
  }
  (**(code **)(*param_1 + 0x828))(param_1,*param_2);
  (**(code **)(*param_1 + 0x7f8))(param_1,*param_2);
  if (plVar4 != (longlong *)0x0) {
    FUN_1457284ac(param_1,plVar4);
  }
LAB_1434f2972:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f2c56 FUN_1434f2c56 body=1132 status=ok
// SIG undefined FUN_1434f2c56(void)

void FUN_1434f2c56(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong *plVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  longlong *plVar16;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((param_2 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0)) &&
      (param_3 != 0)) && ((*(uint *)(param_2 + 1) & 0x40000000) == 0)) {
    lVar12 = *(longlong *)(param_3 + 0x1c8);
    if (lVar12 == 0) {
      local_98 = DAT_14c846508;
      local_a8 = (undefined4)DAT_14c8464f8;
      uStack_a4 = DAT_14c8464f8._4_4_;
      uStack_a0 = (undefined4)DAT_14c846500;
      uStack_9c = DAT_14c846500._4_4_;
    }
    else {
      pcVar5 = *(code **)(lVar12 + 0x240);
      dVar11 = *(double *)(lVar12 + 0x248);
      dVar6 = *(double *)(lVar12 + 0x250);
      dVar7 = *(double *)(lVar12 + 600);
      pdVar13 = *(double **)(lVar12 + 0x228);
      dVar10 = 0.0;
      plVar17 = param_1;
      local_88 = pcVar5;
      uStack_80 = dVar11;
      local_78 = dVar6;
      uStack_70 = dVar7;
      if (pdVar13 == (double *)0x0) {
        plVar17 = (longlong *)&DAT_00000040;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar13[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar12 + 0x228) = pdVar13;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar11 != pdVar13[1]);
      auVar1._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar13);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar13[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar1);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar13[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
      uVar14 = movmskpd((int)plVar17,auVar3);
      if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar13 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar13 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar13 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar13[6] = local_58;
        pdVar13[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar13[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_98 = pdVar13[6];
      local_a8 = *(undefined4 *)(pdVar13 + 4);
      uStack_a4 = *(undefined4 *)((longlong)pdVar13 + 0x24);
      uStack_a0 = *(undefined4 *)(pdVar13 + 5);
      uStack_9c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
    }
    if (DAT_14caf9cd0 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1463c0cc2;
      local_c8 = &LAB_147c9db5b;
      local_d0 = &LAB_1463f9c44;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0x2000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (plVar17 = param_2,
       *(longlong *)
        (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
       DAT_14caf9cd0 + 0x30)) {
      plVar17 = (longlong *)0x0;
    }
    plVar16 = param_1;
    cVar8 = FUN_1414077a0(param_1,plVar17);
    uVar15 = SUB84(plVar16,0);
    if (cVar8 == '\0') {
      dVar11 = (double)param_2[0x7a];
      if (dVar11 == 0.0) {
        lVar12 = FUN_14578a612(param_1,param_2);
        if (lVar12 != 0) {
          lVar12 = FUN_1461b285a(param_1,param_2,param_3);
          if ((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) {
            (**(code **)(*param_2 + 0x6b0))(param_2,lVar12);
          }
        }
      }
      else {
        lVar12 = *(longlong *)((longlong)dVar11 + 0x1c8);
        if (lVar12 == 0) {
          local_58 = DAT_14c846508;
          local_a8 = (undefined4)DAT_14c8464f8;
          uStack_a4 = DAT_14c8464f8._4_4_;
          uStack_a0 = (undefined4)DAT_14c846500;
          uStack_9c = DAT_14c846500._4_4_;
        }
        else {
          pcVar5 = *(code **)(lVar12 + 0x240);
          dVar6 = *(double *)(lVar12 + 0x248);
          dVar7 = *(double *)(lVar12 + 0x250);
          dVar10 = *(double *)(lVar12 + 600);
          pdVar13 = *(double **)(lVar12 + 0x228);
          local_88 = pcVar5;
          uStack_80 = dVar6;
          local_78 = dVar7;
          uStack_70 = dVar10;
          if (pdVar13 == (double *)0x0) {
            uVar15 = 0x40;
            pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
            dVar11 = DAT_14c8463d8;
            *pdVar13 = DAT_14c8463d0;
            pdVar13[1] = dVar11;
            dVar11 = DAT_14c8463e8;
            pdVar13[2] = DAT_14c8463e0;
            pdVar13[3] = dVar11;
            dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar13[5] = dVar11;
            dVar11 = DAT_14c846508;
            pdVar13[6] = DAT_14c846508;
            *(double **)(lVar12 + 0x228) = pdVar13;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar13[1]);
          auVar2._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar13);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar13[1]) >> 0x20);
          iVar9 = movmskpd(SUB84(dVar11,0),auVar2);
          auVar4._8_4_ = (int)-(ulonglong)(dVar10 != pdVar13[3]);
          auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar13[2]);
          auVar4._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar13[3]) >> 0x20);
          uVar14 = movmskpd(uVar15,auVar4);
          if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
            *(undefined4 *)(pdVar13 + 2) = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar13 + 0x14) = local_78._4_4_;
            *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_70._4_4_;
            *(undefined4 *)pdVar13 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar13 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_80._4_4_;
            FUN_1448052ee(&local_88,&local_68);
            pdVar13[6] = local_58;
            pdVar13[4] = (double)CONCAT44(uStack_64,local_68);
            pdVar13[5] = (double)CONCAT44(uStack_5c,uStack_60);
          }
          local_58 = pdVar13[6];
          local_a8 = *(undefined4 *)(pdVar13 + 4);
          uStack_a4 = *(undefined4 *)((longlong)pdVar13 + 0x24);
          uStack_a0 = *(undefined4 *)(pdVar13 + 5);
          uStack_9c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
        }
        local_98 = local_58;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
      }
      if ((param_2[0x7a] == 0) || ((*(uint *)(param_2[0x7a] + 8) >> 0x1e & 1) != 0)) {
        (**(code **)(*param_1 + 0x818))(param_1,param_2);
      }
      else {
        FUN_1461edb98(param_1,param_3,param_2);
        (**(code **)(*param_1 + 0x810))(param_1,param_2,&local_a8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f30c4 FUN_1434f30c4 body=202 status=ok
// SIG undefined FUN_1434f30c4(void)

void FUN_1434f30c4(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  
  lVar1 = FUN_1447210f0();
  lVar1 = *(longlong *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    bVar2 = *(byte *)(lVar1 + 0x30a);
    if (param_2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar2 = bVar2 & 0xdf;
      *(byte *)(lVar1 + 0x30a) = bVar2;
      *(undefined4 *)(lVar1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3b8);
      *(undefined4 *)(lVar1 + 0x3c4) = *(undefined4 *)(param_1 + 0x3bc);
      *(undefined4 *)(lVar1 + 0x3c8) = *(undefined4 *)(param_1 + 0x398);
      *(undefined4 *)(lVar1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3c0);
      *(undefined4 *)(lVar1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3c4);
      *(undefined4 *)(lVar1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3c8);
      *(undefined4 *)(lVar1 + 0x3d8) = *(undefined4 *)(param_1 + 0x3cc);
      bVar3 = (0.0 < *(float *)(param_1 + 0x3b8)) << 4;
    }
    *(byte *)(lVar1 + 0x30a) = bVar2 & 0xef | bVar3;
  }
  return;
}



// FUNCTION 1434f3192 FUN_1434f3192 body=821 status=ok
// SIG undefined FUN_1434f3192(void)

void FUN_1434f3192(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14487fd02();
  if (1 < uVar2 && param_2 == '\0') {
    lVar4 = FUN_1447210f0(param_1);
    if (1.0 <= *(double *)(lVar4 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x3a4)) {
      lVar4 = FUN_1447210f0(param_1);
      *(float *)((longlong)param_1 + 0x3a4) = (float)*(double *)(lVar4 + 0x6d0);
      iVar3 = (**(code **)(*param_1 + 0x668))(param_1);
      if ((int)param_1[0x74] != iVar3) {
        *(int *)(param_1 + 0x74) = iVar3;
        lVar4 = FUN_1447210f0(param_1);
        iVar3 = *(int *)(lVar4 + 0x238);
        if (0 < iVar3) {
          lVar6 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar6 * 8);
            if ((((iVar7 != 0) &&
                 (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
                ((int)uVar2 < DAT_14c9647dc)) &&
               (((plVar8 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar7)) &&
                (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
              FUN_145c2dca8(*plVar8,(int)param_1[0x74]);
              iVar3 = *(int *)(lVar4 + 0x238);
            }
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < iVar3);
        }
      }
    }
    else {
      uVar5 = FUN_1401b4c98();
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar1 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_a0[2] = lVar6;
      *local_a0 = &PTR_FUN_14a909960;
      local_a0[3] = 0;
      iVar3 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_a0 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar3 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar3 = *(int *)(lVar4 + 0x10);
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(lVar4 + 0x10) = iVar7;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar3 = iVar7;
          }
        }
      }
      *(int *)((longlong)puVar1 + 0x1c) = iVar3;
      puVar1[4] = &LAB_147ab29fc;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 0;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar5,param_1 + 0x86,&local_88,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_1434f343c;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1434f343c:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f34c8 FUN_1434f34c8 body=132 status=ok
// SIG undefined FUN_1434f34c8(void)

undefined8 FUN_1434f34c8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                  (double)*(float *)(lVar5 + 0x3d4) < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2)
  ;
}



// FUNCTION 1434f354c FUN_1434f354c body=3545 status=ok
// SIG undefined FUN_1434f354c(void)

undefined8
FUN_1434f354c(undefined8 param_1,undefined8 param_2,undefined4 param_3,double *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8,
             longlong *param_9,longlong *param_10,undefined8 param_11,int param_12)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_518 [32];
  longlong *local_4f8;
  ulonglong *local_4f0;
  ulonglong *local_4e8;
  undefined1 *local_4e0;
  uint *local_4d8;
  uint local_4d0;
  uint local_4cc;
  undefined4 local_42c;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  double local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  longlong local_238;
  undefined8 uStack_230;
  uint local_228 [4];
  uint *local_218;
  int local_210;
  undefined8 local_20c;
  int local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  undefined2 local_1cf;
  undefined1 local_1cd;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined2 local_1c9;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  longlong local_190;
  undefined8 local_188;
  undefined4 local_180 [4];
  undefined4 *local_170;
  undefined8 local_168;
  ulonglong local_160;
  longlong local_158;
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined2 local_149;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  uVar24 = (undefined4)param_2;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cadbcf8) && (FUN_144b3d300(), DAT_14cadbcf8 == -1)) {
    local_3b8 = (undefined **)0x14a8ef1f0;
    local_3b0 = CONCAT35(local_3b0._5_3_,0x11);
    uVar3 = FUN_14001a6c0(&local_3b8,1);
    DAT_14cadbcf0 = (ulonglong)uVar3;
    _Init_thread_footer();
  }
  local_1bc = 0;
  local_1d8 = 0;
  local_1b8 = 0x101;
  local_190 = 0;
  local_188 = 0x800000000;
  local_170 = (undefined4 *)0x0;
  local_168 = 0x400000000;
  local_1d0 = 0;
  local_1c4 = 0;
  local_1e0 = DAT_14cadbcf0;
  local_1cf = 1;
  local_1cd = 0;
  local_1c0 = 0;
  local_1cc = 0;
  local_1ca = 0;
  if (param_10 != (longlong *)0x0) {
    local_180[0] = *(undefined4 *)((longlong)param_10 + 0xc);
    local_168 = 0x400000001;
    local_1d8 = param_10[3];
  }
  local_1c9 = 0x101;
  iVar19 = (int)param_9[1];
  if (0 < iVar19) {
    lVar14 = 0;
    do {
      uVar18 = local_168;
      lVar20 = *(longlong *)(*param_9 + lVar14 * 8);
      if (lVar20 != 0) {
        uVar21 = *(undefined4 *)(lVar20 + 0xc);
        lVar20 = (longlong)(int)local_168;
        uVar3 = (int)local_168 + 1;
        local_168 = CONCAT44(local_168._4_4_,uVar3);
        if (local_168._4_4_ < uVar3) {
          FUN_1447de67e(local_180,uVar18 & 0xffffffff);
        }
        puVar5 = local_170;
        if (local_170 == (undefined4 *)0x0) {
          puVar5 = local_180;
        }
        puVar5[lVar20] = uVar21;
        iVar19 = (int)param_9[1];
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar19);
  }
  local_3c8 = 0;
  uStack_3c0 = 0;
  lVar14 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar14 != 0) {
    local_3b8 = (undefined **)CONCAT44(param_6,2);
    puVar4 = (uint *)FUN_140bfa850();
    local_4d0 = ~puVar4[1] & *puVar4;
    local_4d8 = &local_4d0;
    local_4cc = local_4cc & 0xffffff00;
    local_4e0 = &DAT_14cad0f10;
    local_4e8 = &local_1e0;
    local_4f0 = (ulonglong *)CONCAT44(local_4f0._4_4_,DAT_14cad0ec4);
    local_4f8 = &local_3c8;
    FUN_14052f4ca(lVar14,&local_3b8,param_4,&DAT_14c8463d0);
  }
  uVar13 = 0;
  local_218 = (uint *)0x0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  if ((longlong)(int)uStack_3c0 == 0) goto LAB_1434f41a9;
  lVar14 = local_3c8 + (longlong)(int)uStack_3c0 * 0x48;
  lVar20 = local_3c8;
  do {
    local_3d0 = (longlong *)FUN_14485cccc(lVar20);
    iVar19 = DAT_14c9647dc;
    lVar15 = DAT_14c9647c8;
    if ((((((local_3d0 != (longlong *)0x0) && (local_3d0 != param_10)) &&
          ((*(byte *)((longlong)local_3d0 + 0x62) & 4) != 0)) &&
         ((*(int *)(lVar20 + 0x24) != 0 && (uVar3 = *(uint *)(lVar20 + 0x20), -1 < (int)uVar3)))) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       (((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0 &&
         (*(int *)(lVar10 + 0x10) == *(int *)(lVar20 + 0x24))) &&
        ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
      memset(&local_4d0,0,0x100);
      local_400 = 0xffffffff;
      local_4cc = 0x3f800000;
      local_42c = 0xffffffff;
      if ((*(int *)(lVar20 + 0x24) == 0) || (uVar3 = *(uint *)(lVar20 + 0x20), (int)uVar3 < 0)) {
LAB_1434f3e4e:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((int)uVar3 < iVar19) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(lVar15 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != *(int *)(lVar20 + 0x24))) ||
             ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1434f3e4e;
          lVar10 = *plVar11;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cadbd08) && (FUN_144b3d300(&DAT_14cadbd08), DAT_14cadbd08 == -1))
      {
        local_3b8 = (undefined **)0x14a909522;
        local_3b0 = CONCAT35(local_3b0._5_3_,0x16);
        uVar3 = FUN_14001a6c0(&local_3b8,1);
        DAT_14cadbd00 = (ulonglong)uVar3;
        _Init_thread_footer(&DAT_14cadbd08);
      }
      local_13c = 0;
      local_158 = 0;
      local_138 = 0x101;
      local_110 = 0;
      local_108 = 0x800000000;
      local_f0 = (undefined4 *)0x0;
      local_e8 = 0x400000000;
      local_150 = 1;
      local_144 = 0;
      local_160 = DAT_14cadbd00;
      local_14f = 1;
      local_14d = 0;
      local_140 = 0;
      local_14c = 0;
      local_14a = 0;
      if (param_10 != (longlong *)0x0) {
        local_100[0] = *(undefined4 *)((longlong)param_10 + 0xc);
        local_e8 = 0x400000001;
        local_158 = param_10[3];
      }
      local_149 = 0x101;
      iVar19 = (int)param_9[1];
      if (0 < iVar19) {
        lVar15 = 0;
        do {
          uVar18 = local_e8;
          lVar17 = *(longlong *)(*param_9 + lVar15 * 8);
          if (lVar17 != 0) {
            uVar21 = *(undefined4 *)(lVar17 + 0xc);
            lVar17 = (longlong)(int)local_e8;
            uVar3 = (int)local_e8 + 1;
            local_e8 = CONCAT44(local_e8._4_4_,uVar3);
            if (local_e8._4_4_ < uVar3) {
              FUN_1447de67e(local_100,uVar18 & 0xffffffff);
            }
            puVar5 = local_f0;
            if (local_f0 == (undefined4 *)0x0) {
              puVar5 = local_100;
            }
            puVar5[lVar17] = uVar21;
            iVar19 = (int)param_9[1];
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar19);
      }
      lVar15 = *(longlong *)(lVar10 + 0xb0);
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(lVar10);
      }
      local_248 = *(double *)(lVar10 + 0x170);
      local_258 = *(double *)(lVar10 + 0x160);
      dStack_250 = *(double *)(lVar10 + 0x168);
      local_268 = param_4[2];
      local_278 = *param_4;
      dStack_270 = param_4[1];
      dVar23 = *param_4;
      uVar21 = SUB84(dVar23,0);
      uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if ((dVar23 == local_258) && (!NAN(dVar23) && !NAN(local_258))) {
        if ((param_4[1] == dStack_250) && (!NAN(param_4[1]) && !NAN(dStack_250))) {
          if ((param_4[2] == local_248) && (!NAN(param_4[2]) && !NAN(local_248))) {
            local_268 = local_268 + 0.009999999776482582;
          }
        }
      }
      if (param_12 == 0x21) {
LAB_1434f3bc4:
        local_298 = *(double *)(lVar10 + 0x260);
        uStack_290 = *(undefined8 *)(lVar10 + 0x268);
        local_288 = *(double *)(lVar10 + 0x270);
        uStack_2b0 = param_4[1] - *(double *)(lVar10 + 0x268);
        local_2a8 = param_4[2] - local_288;
        local_2b8 = (double)CONCAT44(uVar22,uVar21) - local_298;
        dVar23 = local_2a8 * local_2a8 + local_2b8 * local_2b8 + uStack_2b0 * uStack_2b0;
        if ((dVar23 != 1.0) || (NAN(dVar23))) {
          if (9.99999993922529e-09 <= dVar23) {
            dVar23 = 1.0 / SQRT(dVar23);
            local_2a8 = local_2a8 * dVar23;
            uStack_2b0 = uStack_2b0 * dVar23;
            local_2b8 = local_2b8 * dVar23;
          }
          else {
            local_2a8 = DAT_14c8464f0;
            local_2b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_2b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
        }
        local_4f8 = &local_2b8;
        FUN_140871c80(&local_3b8,*(undefined8 *)(lVar10 + 0xa8),lVar10,&local_298);
        memcpy(&local_4d0,&local_3b8,0x100);
        cVar2 = '\x01';
      }
      else {
        local_4e8 = (ulonglong *)&DAT_14cad0f10;
        local_4f0 = &local_160;
        local_4f8 = (longlong *)CONCAT44(local_4f8._4_4_,param_12);
        cVar2 = FUN_1400b50cc(lVar15,&local_4d0,&local_278,&local_258);
        if (cVar2 == '\0') {
          uVar21 = SUB84(*param_4,0);
          uVar22 = (undefined4)((ulonglong)*param_4 >> 0x20);
          goto LAB_1434f3bc4;
        }
        cVar2 = FUN_140f9880e(&local_3f8,lVar10);
      }
      if (local_f0 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') {
        uVar3 = ((uint)((ulonglong)local_3d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3d0 >> 4))
                * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar11 = (longlong *)FUN_147ad1236(&local_238,uVar3 >> 0x10 ^ uVar3,&local_3d0);
        iVar19 = (int)plVar11[1];
        *(uint *)(plVar11 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar11 + 0xc) < iVar19 + 1U) {
          FUN_144a3a3ee(plVar11,iVar19);
        }
        lVar15 = *plVar11;
        lVar10 = (longlong)iVar19 * 0x100;
        memcpy((void *)(lVar15 + lVar10),&local_4d0,0xb8);
        puVar6 = (undefined8 *)(lVar15 + 0xb8 + lVar10);
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined8 *)(lVar15 + 200 + lVar10) = 0;
        *(undefined4 *)(lVar15 + 0xd0 + lVar10) = 0xffffffff;
        *(undefined1 *)(lVar15 + 0xd4 + lVar10) = 0;
        *(undefined8 *)(lVar15 + 0xb8 + lVar10) = local_418;
        puVar6 = (undefined8 *)(lVar15 + 0xc0 + lVar10);
        *puVar6 = local_410;
        puVar6[1] = uStack_408;
        *(undefined4 *)(lVar15 + 0xd0 + lVar10) = local_400;
        *(undefined1 *)(lVar15 + 0xd4 + lVar10) = local_3fc;
        *(undefined8 *)(lVar15 + 0xf8 + lVar10) = local_3d8;
        puVar6 = (undefined8 *)(lVar15 + 0xe8 + lVar10);
        *puVar6 = local_3e8;
        puVar6[1] = uStack_3e0;
        puVar6 = (undefined8 *)(lVar15 + 0xd8 + lVar10);
        *puVar6 = local_3f8;
        puVar6[1] = uStack_3f0;
      }
    }
    lVar20 = lVar20 + 0x48;
  } while (lVar20 != lVar14);
  if (local_204 < (int)uStack_230) {
    lVar14 = *param_8;
    if ((((lVar14 == 0) || (lVar20 = FUN_1411311bc(), lVar20 == 0)) ||
        (*(int *)(lVar14 + 0x38) < *(int *)(lVar20 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
         lVar20 + 0x30 || (lVar14 = *param_8, lVar14 == 0)))) {
      lVar14 = FUN_1411311bc();
      if (lVar14 != 0 && DAT_14c950c29 == 1) goto LAB_1434f3f2b;
    }
    else if (DAT_14c950c29 != 0) {
LAB_1434f3f2b:
      FUN_1456cec3c(lVar14);
    }
    local_3b8 = &PTR_FUN_14a8eabe0;
    local_378 = 0;
    uStack_370 = 0;
    if ((lVar14 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    local_380 = param_4[2];
    local_390 = *(undefined4 *)param_4;
    uStack_38c = *(undefined4 *)((longlong)param_4 + 4);
    uStack_388 = *(undefined4 *)(param_4 + 1);
    uStack_384 = *(undefined4 *)((longlong)param_4 + 0xc);
    local_3a0 = param_5;
    local_39c = param_6;
    local_398 = param_7;
    local_3b0 = lVar14;
    local_3a8 = uVar24;
    local_3a4 = param_3;
    if (local_210 == 0) {
      uVar16 = 1;
      uVar18 = 0;
      iVar19 = 0;
      iVar9 = 0;
    }
    else {
      puVar4 = local_218;
      if (local_218 == (uint *)0x0) {
        puVar4 = local_228;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar19 = local_210 + 0x1e;
        if (-1 < local_210 + -1) {
          iVar19 = local_210 + -1;
        }
        uVar18 = 0;
        uVar12 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar12 = uVar18;
        }
        iVar19 = 0;
        do {
          if (uVar12 == uVar18) goto LAB_1434f41a7;
          iVar19 = iVar19 + 0x20;
          uVar3 = puVar4[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar18 = 0;
        iVar19 = 0;
      }
      uVar16 = (ulonglong)(-uVar3 & uVar3);
      uVar12 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (local_210 <= iVar9) {
        iVar9 = local_210;
      }
    }
    if (iVar9 < local_210) {
      uVar12 = 0xffffffff;
      do {
        puVar6 = (undefined8 *)(local_238 + (longlong)iVar9 * 0x20);
        plVar11 = (longlong *)*puVar6;
        if (&local_378 != puVar6 + 1) {
          uVar3 = *(uint *)(puVar6 + 2);
          lVar14 = puVar6[1];
          uStack_370 = CONCAT44(uStack_370._4_4_,uVar3);
          if (uVar3 == 0 && uStack_370._4_4_ == 0) {
            uStack_370 = (ulonglong)uVar3;
          }
          else {
            FUN_144723f1e(&local_378,uVar3);
            FUN_144723ff3(local_378,lVar14,uVar3);
          }
        }
        local_4f8 = param_10;
        (**(code **)(*plVar11 + 0x540))(plVar11,param_2,&local_3b8,param_11);
        uVar3 = (uint)uVar12 & ~(uint)uVar16;
        uVar12 = (ulonglong)uVar3;
        puVar4 = local_218;
        if (local_218 == (uint *)0x0) {
          puVar4 = local_228;
        }
        iVar9 = (int)uVar18;
        lVar14 = (longlong)iVar9;
        uVar3 = puVar4[lVar14] & uVar3;
        if (uVar3 == 0) {
          iVar7 = local_210 + 0x1e;
          if (-1 < local_210 + -1) {
            iVar7 = local_210 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar9) {
            iVar8 = iVar9;
          }
          if (iVar7 <= iVar9) break;
          lVar20 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar3 = puVar4[lVar14 + lVar20 + 1];
            if (uVar3 != 0) break;
            lVar20 = lVar20 + 1;
            if (iVar8 - lVar14 == lVar20) goto LAB_1434f4182;
          }
          uVar18 = (ulonglong)(iVar9 + (int)lVar20 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar9 < local_210);
LAB_1434f4182:
      local_3b8 = &PTR_FUN_14a8eabe0;
      uVar13 = CONCAT71((int7)(uVar12 >> 8),1);
      if (local_378 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1434f41a9;
    }
  }
LAB_1434f41a7:
  uVar13 = 0;
LAB_1434f41a9:
  local_1f0 = 0;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_147ad08d0(&local_238);
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if (local_170 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f4326 FUN_1434f4326 body=831 status=ok
// SIG undefined FUN_1434f4326(void)

undefined8
FUN_1434f4326(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if (lVar1 == 0) goto LAB_1434f440d;
  if (DAT_14cac9ca8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1478c0a72;
    local_60 = &LAB_1417b2375;
    local_68 = L"Engine";
    local_70 = 0x1000000000;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = CONCAT44(local_88._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    if (DAT_14cac9ca8 == 0) goto LAB_1434f440d;
  }
  if (((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
       DAT_14cac9ca8 + 0x30)) || (lVar1 = *param_2, lVar1 == 0)) goto LAB_1434f440d;
  if (param_1 == 0) {
LAB_1434f43f0:
    lVar4 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = L"Game";
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = CONCAT44(local_88._4_4_,0x428);
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar3 = *(int *)(lVar2 + 0x38);
    if ((iVar3 < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (lVar4 = param_1,
       *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
       DAT_14caf64b8 + 0x30)) {
      if (DAT_14cac9ca8 == 0) {
        local_50 = &local_38;
        local_38 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1478c0a72;
        local_60 = &LAB_1417b2375;
        local_68 = L"Engine";
        local_70 = 0x1000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = CONCAT44(local_88._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar2 = *(longlong *)(param_1 + 0x10);
        iVar3 = *(int *)(lVar2 + 0x38);
      }
      if ((iVar3 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          != DAT_14cac9ca8 + 0x30)) goto LAB_1434f43f0;
      lVar4 = *(longlong *)(param_1 + 0x1b0);
    }
  }
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar2 != 0) {
    local_78 = CONCAT31(local_78._1_3_,param_6);
    local_80 = CONCAT31(local_80._1_3_,param_4);
    local_88 = lVar4;
    FUN_147ac6e0e(lVar2,lVar1,param_3,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_1434f440d:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1434f466c FUN_1434f466c body=839 status=ok
// SIG undefined FUN_1434f466c(void)

undefined8 FUN_1434f466c(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x30), lVar2 != 0)) {
    if (DAT_14c927740 == 0) {
      local_60 = &local_38;
      local_38 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_146856450;
      local_70 = FUN_1427b121c;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000021;
      local_90 = 8;
      local_98 = CONCAT44(local_98._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      if (DAT_14c927740 == 0) goto LAB_1434f46ce;
    }
    iVar1 = *(int *)(DAT_14c927740 + 0x38);
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14c927740 + 0x30))
       && (lVar2 = *(longlong *)(param_2 + 0x30), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < iVar1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14c927740 + 0x30
           ) {
          lVar4 = lVar2;
        }
      }
      if (DAT_14cac9ca8 == 0) {
        local_60 = &local_38;
        local_38 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1478c0a72;
        local_70 = (code *)&LAB_1417b2375;
        local_78 = L"Engine";
        local_80 = 0x1000000000;
        local_88 = 0x10000004;
        local_90 = 8;
        local_98 = CONCAT44(local_98._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        if (DAT_14cac9ca8 == 0) goto LAB_1434f46ce;
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        lVar2 = *(longlong *)(param_2 + 0x30);
        if (lVar2 == 0) {
LAB_1434f4778:
          local_40 = 0;
        }
        else {
          if (DAT_14c927740 == 0) {
            local_60 = &local_38;
            local_38 = FUN_1449e2820;
            local_50 = FUN_14081d0ea;
            local_58 = FUN_14081d0ea;
            local_68 = &LAB_146856450;
            local_70 = FUN_1427b121c;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10000021;
            local_90 = 8;
            local_98 = CONCAT44(local_98._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            if (DAT_14c927740 == 0) goto LAB_1434f4778;
          }
          if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c927740 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) !=
              DAT_14c927740 + 0x30)) goto LAB_1434f4778;
          local_40 = *(longlong *)(param_2 + 0x30);
          if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
        }
        local_90 = CONCAT31(local_90._1_3_,1);
        local_98 = 0;
        uVar3 = FUN_1434f4326(param_1,&local_40,param_3,
                              CONCAT71((int7)((param_4 & 0xffffffff) >> 8),
                                       (char)(param_4 & 0xffffffff) * '\x02' + '\x01'));
        goto LAB_1434f46d0;
      }
    }
  }
LAB_1434f46ce:
  uVar3 = 0;
LAB_1434f46d0:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1434f49b4 FUN_1434f49b4 body=168 status=ok
// SIG undefined FUN_1434f49b4(void)

longlong FUN_1434f49b4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  local_28[0] = 0;
  local_28[1] = 0;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14164a60a(*(undefined8 *)(lVar1 + 0x1f0),param_2,local_28,param_3);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x30);
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
      }
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f4a5e FUN_1434f4a5e body=2017 status=ok
// SIG undefined FUN_1434f4a5e(void)

void FUN_1434f4a5e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined7 *puVar9;
  undefined1 *_Src_00;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1468d96f0;
      local_c0 = 0;
      local_c8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_1434f4c48;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1434f4c48:
  uStack_98 = 0;
  uStack_91 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_98);
            goto LAB_1434f4e19;
          }
        }
        puVar9 = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &uStack_98) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_98,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_98,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_98,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_98,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_98 = (undefined7)uVar2;
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_98);
    }
  }
LAB_1434f4e19:
  puVar9 = &uStack_98;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar9 = *(undefined7 **)(param_2 + 0x38);
  }
  local_99 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_140a4831c;
      local_c8 = 0x1000000008001;
      local_c0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_99);
            goto LAB_1434f4fdb;
          }
        }
        _Src_00 = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_99) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_99,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_99,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_99,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_99,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_99);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_99);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_99 = (undefined1)uVar2;
      uStack_98 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_99);
    }
  }
LAB_1434f4fdb:
  lVar5 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 != 0) {
    local_c8 = CONCAT71(local_c8._1_7_,local_99);
    FUN_14113775c(local_38,puVar9,0,0);
  }
  *param_3 = lVar5;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f5240 FUN_1434f5240 body=422 status=ok
// SIG undefined FUN_1434f5240(void)

undefined8 FUN_1434f5240(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  code *local_80;
  undefined1 local_78 [28];
  char local_5c;
  undefined8 local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_a0 = &local_80;
      local_80 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1478c0a72;
      local_b0 = &LAB_1417b2375;
      local_b8 = L"Engine";
      local_c0 = 0x1000000000;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_1434f5291;
    }
    if ((((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) && (*param_2 != 0)) &&
       (lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar1 != 0)) {
      local_88 = *param_2;
      if ((local_88 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_80,lVar1,&local_88,5);
      if (local_28 == '\x01') {
        FUN_14024445c(local_78);
      }
      if (local_5c == '\0') goto LAB_1434f5293;
    }
  }
LAB_1434f5291:
  local_50 = 0;
LAB_1434f5293:
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_50;
}



// FUNCTION 1434f53e8 FUN_1434f53e8 body=526 status=ok
// SIG undefined FUN_1434f53e8(void)

void FUN_1434f53e8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  code *local_88;
  undefined1 local_80 [28];
  char local_64;
  undefined8 local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_140c5c1ec(param_3,0);
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_b0 = &local_88;
      local_88 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1478c0a72;
      local_c0 = &LAB_1417b2375;
      local_c8 = L"Engine";
      local_d0 = 0x1000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_1434f5458;
    }
    if ((((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) && (*param_2 != 0)) &&
       (lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar3 != 0)) {
      local_90 = *param_2;
      if ((local_90 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_88,lVar3,&local_90,5);
      if (local_64 == '\0') {
        do {
          uVar2 = local_58;
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1447d05f2(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar2;
          FUN_14146ffc0(&local_88);
        } while (local_64 == '\0');
      }
      if (local_30 == '\x01') {
        FUN_14024445c(local_80);
      }
    }
  }
LAB_1434f5458:
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f55f8 FUN_1434f55f8 body=594 status=ok
// SIG undefined FUN_1434f55f8(void)

void FUN_1434f55f8(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  code *local_90;
  undefined1 local_88 [28];
  char local_6c;
  longlong local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_140c5c1ec(param_4,0);
  }
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_b0 = &local_90;
      local_90 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1478c0a72;
      local_c0 = &LAB_1417b2375;
      local_c8 = L"Engine";
      local_d0 = 0x1000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_1434f56e7;
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
         == DAT_14cac9ca8 + 0x30)) && (lVar1 = *param_2, lVar3 != 0 && lVar1 != 0)) {
      local_98 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_90,lVar3,&local_98,5);
      if (local_6c == '\0') {
        do {
          lVar1 = local_60;
          if (((local_60 != 0) &&
              (((byte)((uint)*(undefined4 *)(local_60 + 8) >> 0x1e) & 1) == 0 && param_3 != 0)) &&
             ((longlong)*(int *)(local_60 + 0x1f8) != 0)) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(local_60 + 0x1f0) + lVar3) == param_3) {
                lVar3 = param_4[1];
                uVar2 = (int)lVar3 + 1;
                *(uint *)(param_4 + 1) = uVar2;
                if (*(uint *)((longlong)param_4 + 0xc) < uVar2) {
                  FUN_1447d05f2(param_4);
                }
                *(longlong *)(*param_4 + (longlong)(int)lVar3 * 8) = lVar1;
                break;
              }
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(local_60 + 0x1f8) * 8 != lVar3);
          }
          FUN_14146ffc0(&local_90);
        } while (local_6c == '\0');
      }
      if (local_38 == '\x01') {
        FUN_14024445c(local_88);
      }
    }
  }
LAB_1434f56e7:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f584c FUN_1434f584c body=835 status=ok
// SIG undefined FUN_1434f584c(void)

void FUN_1434f584c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b0;
  code *local_a8;
  undefined1 local_a0 [28];
  char local_84;
  longlong local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_140c5c1ec(param_3,0);
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (DAT_14c950d78 == 0) {
      local_d0 = &local_a8;
      local_a8 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1468b50ee;
      local_e0 = FUN_1427f23a3;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10004001;
      local_100 = 8;
      local_108 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
      if (DAT_14c950d78 == 0) goto LAB_1434f58c3;
    }
    if ((((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8)
          == DAT_14c950d78 + 0x30)) && (*param_2 != 0)) &&
       (lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar4 != 0)) {
      FUN_1405f0e9c(&local_a8,lVar4,5);
      if (local_84 == '\0') {
        do {
          lVar3 = local_78;
          lVar4 = *param_2;
          if (lVar4 != 0) {
            lVar5 = *(longlong *)(local_78 + 0x10);
            if (DAT_14c950d78 == 0) {
              local_b0 = FUN_1449e2820;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_14081d0ea;
              local_d0 = &local_b0;
              local_d8 = &LAB_1468b50ee;
              local_e0 = FUN_1427f23a3;
              local_e8 = L"Engine";
              local_f0 = 0;
              local_f8 = 0x10004001;
              local_100 = 8;
              local_108 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
              if (DAT_14c950d78 == 0) goto LAB_1434f5a38;
            }
            if ((((*(int *)(DAT_14c950d78 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) ==
                  DAT_14c950d78 + 0x30)) &&
                ((lVar4 = *param_2, lVar4 != 0 &&
                 (((*(byte *)(lVar4 + 0xd5) & 0x40) != 0 && (lVar5 != 0)))))) &&
               (DAT_14c950d78 != lVar4)) {
              do {
                if (0 < (longlong)*(int *)(lVar5 + 0x1e0)) {
                  lVar6 = 0;
                  do {
                    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x1d8) + lVar6);
                    if (((lVar2 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                        lVar4 + 0x30)) {
                      iVar1 = (int)param_3[1];
                      *(uint *)(param_3 + 1) = iVar1 + 1U;
                      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
                        FUN_1447d05f2(param_3,iVar1);
                      }
                      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
                      goto LAB_1434f5a38;
                    }
                    lVar6 = lVar6 + 0x10;
                  } while ((longlong)*(int *)(lVar5 + 0x1e0) * 0x10 != lVar6);
                }
                lVar5 = *(longlong *)(lVar5 + 0x40);
              } while (lVar5 != 0);
            }
          }
LAB_1434f5a38:
          FUN_14059e512(&local_a8);
        } while (local_84 == '\0');
      }
      if (local_50 == '\x01') {
        FUN_14024445c(local_a0);
      }
    }
  }
LAB_1434f58c3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f5b90 FUN_1434f5b90 body=290 status=ok
// SIG undefined FUN_1434f5b90(void)

void FUN_1434f5b90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined1 local_88 [28];
  char local_6c;
  longlong local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_140c5c1ec(param_3,0);
  }
  if ((param_2 != 0) && (lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar2 != 0)) {
    FUN_1405f0e9c(local_90,lVar2,5);
    if (local_6c == '\0') {
      do {
        lVar2 = local_60;
        if ((longlong)*(int *)(local_60 + 0x1f8) != 0) {
          lVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_60 + 0x1f0) + lVar3) == param_2) {
              lVar3 = param_3[1];
              uVar1 = (int)lVar3 + 1;
              *(uint *)(param_3 + 1) = uVar1;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar1) {
                FUN_1447d05f2(param_3);
              }
              *(longlong *)(*param_3 + (longlong)(int)lVar3 * 8) = lVar2;
              break;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)*(int *)(local_60 + 0x1f8) * 8 != lVar3);
        }
        FUN_14059e512(local_90);
      } while (local_6c == '\0');
    }
    if (local_38 == '\x01') {
      FUN_14024445c(local_88);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f5cb4 FUN_1434f5cb4 body=776 status=ok
// SIG undefined FUN_1434f5cb4(void)

void FUN_1434f5cb4(undefined8 param_1,undefined8 param_2,byte param_3,longlong *param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  void *local_d0;
  int local_c8;
  int local_c4;
  longlong local_c0;
  longlong local_a8 [2];
  longlong local_98;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  void *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = param_2;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar4 != 0) {
    lVar5 = FUN_1405e677a(DAT_14cb0d2b0,lVar4);
    FUN_1400021e4(&local_48,&local_58);
    if ((int)param_4[1] - 2U < 0x7fffffff) {
      FUN_140056680(&local_68);
      iVar2 = local_5c;
      iVar1 = local_60;
      if (local_60 < 2) {
        local_d0 = (void *)0x0;
        local_c8 = (int)param_4[1];
        lVar9 = (longlong)local_c8;
        _Src = (void *)*param_4;
        if (lVar9 == 0) {
          local_c4 = 0;
        }
        else {
          FUN_1446dd670(&local_d0,local_c8,0);
          memcpy(local_d0,_Src,lVar9 * 2);
        }
      }
      else {
        iVar8 = (int)param_4[1] + -1;
        if ((int)param_4[1] == 0) {
          iVar8 = 0;
        }
        local_d0 = local_68;
        local_68 = (void *)0x0;
        local_c8 = local_60;
        local_c4 = local_5c;
        local_60 = 0;
        local_5c = 0;
        iVar6 = iVar8 + iVar1;
        if (iVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar8);
        }
        if (iVar2 < iVar6) {
          FUN_1446f8c06(&local_d0);
        }
        FUN_1400020e8(&local_d0,*param_4,iVar8);
      }
      iVar1 = local_c8 + -1;
      if (local_c8 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_58,local_d0,iVar1);
      if (local_d0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar1 = (uint)(param_3 ^ 1) * 2;
    puVar7 = local_58;
    if (local_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140245d8a(&local_d0,lVar5 + 0x160,puVar7,iVar1);
    cVar3 = FUN_147d8a6b2(&local_d0);
    if (cVar3 != '\0') {
      FUN_14622a50c(DAT_14cb0d2b0,local_a8);
    }
    puVar7 = local_58;
    if (local_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_14640a448(DAT_14cb0d2b0,lVar4,puVar7,iVar1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f5fbe FUN_1434f5fbe body=94 status=ok
// SIG undefined FUN_1434f5fbe(void)

void FUN_1434f5fbe(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001434f600f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x678))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1434f601c FUN_1434f601c body=66 status=ok
// SIG undefined FUN_1434f601c(void)

void FUN_1434f601c(undefined8 param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    lVar1 = FUN_1449baec6(lVar1);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x3ca) != param_2)) {
      *(char *)(lVar1 + 0x3ca) = param_2;
    }
  }
  return;
}



// FUNCTION 1434f605e FUN_1434f605e body=815 status=ok
// SIG undefined FUN_1434f605e(void)

longlong *
FUN_1434f605e(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  int local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  code *local_178;
  code *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_3 != 0 && param_1 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_180 = &local_68;
      local_68 = FUN_144a7958c;
      local_170 = FUN_14081d0ea;
      local_178 = FUN_142b47bc4;
      local_188 = &LAB_1478989f1;
      local_190 = &LAB_146391124;
      local_198 = L"Engine";
      local_1a0 = 0x10000000000;
      local_1a8 = 0x10000005;
      local_1b0 = 0x10;
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      if ((*(byte *)(param_3 + 0x2d4) & 0x40) == 0) goto LAB_1434f60fc;
      lVar4 = *(longlong *)(param_3 + 0xa8);
      if (lVar4 != 0) {
        lVar2 = FUN_14059e8cc();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          local_78 = param_6[2];
          local_1b8 = &local_88;
          local_88 = *param_6;
          uStack_80 = param_6[1];
          local_98 = param_5[2];
          local_a8 = *param_5;
          uStack_a0 = param_5[1];
          local_c8 = *param_2;
          uStack_c4 = param_2[1];
          uStack_c0 = param_2[2];
          uStack_bc = param_2[3];
          local_b8 = *(undefined8 *)(param_2 + 4);
          local_1b0 = param_8;
          plVar3 = (longlong *)FUN_147ac1bda(*(undefined8 *)(param_3 + 0xa8),param_1);
          goto LAB_1434f60fe;
        }
      }
    }
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    lVar4 = *(longlong *)(param_3 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_3);
    }
    local_d8 = *(undefined8 *)(param_2 + 4);
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,param_8);
    plVar3 = (longlong *)FUN_147ac7365(param_1,&local_e8,lVar4,uVar1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x490))(plVar3,param_3,&DAT_14cadad98,param_4);
      if (param_7 == 1) {
        local_f8 = param_6[2];
        local_108 = *param_6;
        uStack_100 = param_6[1];
        local_128 = *(undefined4 *)param_5;
        uStack_124 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_120 = *(undefined4 *)(param_5 + 1);
        uStack_11c = *(undefined4 *)((longlong)param_5 + 0xc);
        local_118 = param_5[2];
        local_1b0 = (uint)local_1b0._1_3_ << 8;
        local_1b8 = (undefined8 *)0x0;
        FUN_14084af84(plVar3,&local_128,&local_108,0);
      }
      else {
        local_138 = param_6[2];
        local_148 = *param_6;
        uStack_140 = param_6[1];
        local_168 = *(undefined4 *)param_5;
        uStack_164 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_160 = *(undefined4 *)(param_5 + 1);
        uStack_15c = *(undefined4 *)((longlong)param_5 + 0xc);
        local_158 = param_5[2];
        local_1b0 = (uint)local_1b0._1_3_ << 8;
        local_1b8 = (undefined8 *)0x0;
        FUN_1401ca0e6(plVar3,&local_168,&local_148,0);
      }
      goto LAB_1434f60fe;
    }
  }
LAB_1434f60fc:
  plVar3 = (longlong *)0x0;
LAB_1434f60fe:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f638e FUN_1434f638e body=2014 status=ok
// SIG undefined FUN_1434f638e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1434f638e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 (*param_5) [16],double *param_6,int param_7,undefined1 param_8,
             undefined1 param_9,char param_10)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_210;
  longlong lStack_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [64];
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((param_2 != (longlong *)0x0 && param_1 != 0) &&
     ((lVar10 = param_2[0x16], lVar10 != 0 || (lVar10 = FUN_1448abda6(param_2), lVar10 != 0)))) {
    local_2d8 = param_9;
    plVar11 = (longlong *)FUN_147ac6ede(param_1,lVar10,param_2[0x15],param_8);
    if (plVar11 != (longlong *)0x0) {
      FUN_140486fc4(plVar11,param_2,param_3);
      if (param_7 == 1) {
        (**(code **)(*param_2 + 0x4a8))(param_2,local_138,param_3,0);
        auVar1 = *param_5;
        auVar17 = divpd(auVar1,_DAT_1499387d0);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(double *)param_5[1];
        auVar18 = divpd(auVar18,_DAT_1499387d0);
        auVar17 = roundpd(auVar17,auVar17,3);
        auVar18 = roundpd(auVar18,auVar18,3);
        dVar8 = (auVar1._0_8_ - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar9 = (auVar1._8_8_ - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar6 = (*(double *)param_5[1] - auVar18._0_8_ * (double)DAT_1499387d0) *
                0.008726646259971648;
        dVar7 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar3 = sin(dVar8);
        dVar4 = sin(dVar9);
        dVar5 = sin(dVar6);
        sin(dVar7);
        dVar8 = cos(dVar8);
        dVar9 = cos(dVar9);
        dVar6 = cos(dVar6);
        cos(dVar7);
        dVar7 = dVar4 * dVar3 * dVar5 + dVar9 * dVar8 * dVar6;
        local_198 = dVar3 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
        dStack_190 = -(dVar3 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5;
        local_188._8_4_ = SUB84(dVar7,0);
        local_188._0_8_ = -(dVar9 * dVar3 * dVar5) + dVar4 * dVar8 * dVar6;
        local_188._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_178 = *param_4;
        uStack_170 = param_4[1];
        local_168 = param_4[2];
        uStack_160 = 0;
        local_158 = *(undefined4 *)param_6;
        uStack_154 = *(undefined4 *)((longlong)param_6 + 4);
        uStack_150 = *(undefined4 *)(param_6 + 1);
        uStack_14c = *(undefined4 *)((longlong)param_6 + 0xc);
        local_148 = param_6[2];
        uStack_140 = 0;
        FUN_1449437a2(&local_198,&local_1f8,local_138);
        uVar2 = plVar11[7];
        if (uVar2 < 0xffffffff00000000) {
          plVar12 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar12 = (longlong *)0x0;
          }
          (**(code **)(*plVar12 + 0x58))(plVar12,plVar11,uVar2,5);
        }
        else {
          uVar16 = (uint)uVar2;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar13 + 8);
              }
              *puVar15 = *puVar15 | 0x20;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        plVar11[0x33] = local_1d8;
        plVar11[0x34] = lStack_1d0;
        plVar11[0x35] = local_1c8;
        local_238 = local_1f8;
        uStack_234 = uStack_1f4;
        uStack_230 = uStack_1f0;
        uStack_22c = uStack_1ec;
        local_228 = local_1e8;
        uStack_220 = uStack_1e0;
        FUN_1448052ee(&local_238,&local_210);
        uVar2 = plVar11[7];
        if (uVar2 < 0xffffffff00000000) {
          plVar12 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar12 = (longlong *)0x0;
          }
          (**(code **)(*plVar12 + 0x58))(plVar12,plVar11,uVar2,6);
        }
        else {
          uVar16 = (uint)uVar2;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar13 + 8);
              }
              *puVar15 = *puVar15 | 0x40;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        plVar11[0x38] = local_200;
        plVar11[0x36] = local_210;
        plVar11[0x37] = lStack_208;
        local_258 = local_1b8;
        uStack_250 = uStack_1b0;
        local_248 = local_1a8;
        FUN_14084f00a(plVar11);
      }
      else {
        local_268 = param_4[2];
        local_278 = *(undefined4 *)param_4;
        uStack_274 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_270 = *(undefined4 *)(param_4 + 1);
        uStack_26c = *(undefined4 *)((longlong)param_4 + 0xc);
        uVar2 = plVar11[7];
        if (uVar2 < 0xffffffff00000000) {
          plVar12 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar12 = (longlong *)0x0;
          }
          (**(code **)(*plVar12 + 0x58))(local_278,plVar11,uVar2,5);
        }
        else {
          uVar16 = (uint)uVar2;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar13 + 8);
              }
              *puVar15 = *puVar15 | 0x20;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        plVar11[0x35] = local_268;
        plVar11[0x33] = CONCAT44(uStack_274,local_278);
        plVar11[0x34] = CONCAT44(uStack_26c,uStack_270);
        local_288 = *(longlong *)param_5[1];
        local_298 = *(undefined4 *)*param_5;
        uStack_294 = *(undefined4 *)(*param_5 + 4);
        uStack_290 = *(undefined4 *)(*param_5 + 8);
        uStack_28c = *(undefined4 *)(*param_5 + 0xc);
        uVar2 = plVar11[7];
        if (uVar2 < 0xffffffff00000000) {
          plVar12 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar12 = (longlong *)0x0;
          }
          (**(code **)(*plVar12 + 0x58))(local_298,plVar11,uVar2,6);
        }
        else {
          uVar16 = (uint)uVar2;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
            puVar14 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar14 = DAT_14c998080;
            }
            if ((*(uint *)(puVar14 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0)
            {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
              puVar15 = *(uint **)(lVar13 + 0x18);
              if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
                puVar15 = (uint *)(lVar13 + 8);
              }
              *puVar15 = *puVar15 | 0x40;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        plVar11[0x38] = local_288;
        *(undefined4 *)(plVar11 + 0x36) = local_298;
        *(undefined4 *)((longlong)plVar11 + 0x1b4) = uStack_294;
        *(undefined4 *)(plVar11 + 0x37) = uStack_290;
        *(undefined4 *)((longlong)plVar11 + 0x1bc) = uStack_28c;
        if (param_7 == 2) {
          (**(code **)(*param_2 + 0x4a8))(param_2,local_138,param_3,0);
          local_2a0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8)) &
                              (ulonglong)(1.0 / local_e8)) * param_6[2];
          local_2a8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_f0)) &
                              (ulonglong)(1.0 / dStack_f0)) * param_6[1];
          local_2b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_f8)) &
                              (ulonglong)(1.0 / local_f8)) * *param_6;
        }
        else {
          local_2b8 = param_6[2];
          local_2c8 = *(undefined4 *)param_6;
          uStack_2c4 = *(undefined4 *)((longlong)param_6 + 4);
          uStack_2c0 = *(undefined4 *)(param_6 + 1);
          uStack_2bc = *(undefined4 *)((longlong)param_6 + 0xc);
        }
        FUN_14084f00a(plVar11);
      }
      FUN_140b506dc(plVar11,lVar10,0);
      if (param_10 != '\0') {
        (**(code **)(*plVar11 + 0xa60))(plVar11,1);
      }
      plVar12 = (longlong *)FUN_140083894();
      (**(code **)(*plVar12 + 0x70))(plVar12,plVar11);
      goto LAB_1434f643b;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_1434f643b:
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
}



// FUNCTION 1434f6b6e FUN_1434f6b6e body=695 status=ok
// SIG undefined FUN_1434f6b6e(void)

undefined8 FUN_1434f6b6e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_1434f6c48:
    if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 0;
  }
  if (DAT_14c927740 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    uStack_60 = 0;
    local_68 = CONCAT44(local_68._4_4_,0x10000021);
    local_70 = 8;
    local_78 = CONCAT44(local_78._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    if (DAT_14c927740 == 0) goto LAB_1434f6c48;
  }
  iVar1 = *(int *)(DAT_14c927740 + 0x38);
  lVar3 = (longlong)iVar1;
  if (((*(int *)(lVar5 + 0x38) < iVar1) ||
      (lVar2 = DAT_14c927740 + 0x30, *(longlong *)(*(longlong *)(lVar5 + 0x30) + lVar3 * 8) != lVar2
      )) || (lVar5 = *param_1, param_2 == 0 || lVar5 == 0)) goto LAB_1434f6c48;
  if ((*(int *)(lVar5 + 0x38) < iVar1) ||
     (lVar4 = lVar5, *(longlong *)(*(longlong *)(lVar5 + 0x30) + lVar3 * 8) != lVar2)) {
    lVar4 = 0;
  }
  if (*(longlong *)(lVar4 + 0xe0) == 0) {
LAB_1434f6c74:
    if (DAT_14c927740 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_146856450;
      local_50 = FUN_1427b121c;
      local_58 = L"Engine";
      uStack_60 = 0;
      local_68 = CONCAT44(local_68._4_4_,0x10000021);
      local_70 = 8;
      local_78 = CONCAT44(local_78._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      if (DAT_14c927740 == 0) goto LAB_1434f6c9b;
    }
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
        DAT_14c927740 + 0x30)) {
      lVar5 = *param_1;
      goto LAB_1434f6c9d;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x38) < iVar1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + lVar3 * 8) == lVar2) {
        lVar4 = lVar5;
      }
    }
    lVar5 = *(longlong *)(lVar4 + 0xe0);
    if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_1434f6c48;
    lVar5 = *param_1;
    if (lVar5 != 0) goto LAB_1434f6c74;
  }
LAB_1434f6c9b:
  lVar5 = 0;
LAB_1434f6c9d:
  local_68 = 0;
  uStack_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_78 = 0;
  FUN_140584627(param_2,lVar5,0,0x1000000);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1434f6e2c FUN_1434f6e2c body=1482 status=ok
// SIG undefined FUN_1434f6e2c(void)

longlong *
FUN_1434f6e2c(longlong *param_1,longlong *param_2,longlong param_3,double *param_4,
             undefined8 *param_5,uint param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,double param_11,longlong param_12,byte param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 uStack_e0;
  undefined1 local_d6;
  longlong local_d0;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [16];
  double local_a0;
  ulonglong local_90;
  
  lVar8 = param_12;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 == (longlong *)0x0 || param_1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    goto LAB_1434f6e95;
  }
  lVar6 = param_2[0x16];
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_2);
  }
  if (param_6 == 0) {
    if (param_3 == 0) {
      dVar18 = *param_4 * (double)param_2[0x50];
      dVar17 = param_4[1] * (double)param_2[0x51];
      dVar12 = param_4[2] * (double)param_2[0x52];
      dVar1 = (double)param_2[0x48];
      dVar2 = (double)param_2[0x49];
      dVar3 = (double)param_2[0x4a];
      dVar13 = (double)param_2[0x4b];
      dVar14 = dVar17 * dVar1 - dVar18 * dVar2;
      dVar15 = dVar12 * dVar2 - dVar17 * dVar3;
      dVar16 = dVar18 * dVar3 - dVar1 * dVar12;
      dVar15 = dVar15 + dVar15;
      dVar16 = dVar16 + dVar16;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar14 * dVar13 + dVar12 + (dVar16 * dVar1 - dVar15 * dVar2) + (double)param_2[0x4e];
      dVar13 = (dVar14 * dVar2 - dVar16 * dVar3) + dVar13 * dVar15 + dVar18 + (double)param_2[0x4c];
      dVar18 = (dVar3 * dVar15 - dVar1 * dVar14) + (double)param_2[0x4b] * dVar16 + dVar17 +
               (double)param_2[0x4d];
    }
    else {
      (**(code **)(*param_2 + 0x4a8))(param_2,&local_138,param_3,0);
      local_f8 = *param_4 * local_f8;
      dStack_f0 = param_4[1] * dStack_f0;
      dVar13 = param_4[2] * local_e8;
      dVar17 = dStack_f0 * local_138 - local_f8 * dStack_130;
      dVar16 = dVar13 * dStack_130 - dStack_f0 * local_128;
      dVar18 = local_f8 * local_128 - local_138 * dVar13;
      dVar16 = dVar16 + dVar16;
      dVar18 = dVar18 + dVar18;
      dVar17 = dVar17 + dVar17;
      dVar12 = dVar17 * dStack_120 + dVar13 + (dVar18 * local_138 - dVar16 * dStack_130) + local_108
      ;
      dVar13 = (dVar17 * dStack_130 - dVar18 * local_128) + dStack_120 * dVar16 + local_f8 +
               local_118;
      dVar18 = (local_128 * dVar16 - local_138 * dVar17) + dStack_120 * dVar18 + dStack_f0 +
               dStack_110;
    }
  }
  else {
    dVar12 = param_4[2];
    dVar13 = *param_4;
    dVar18 = param_4[1];
    if ((param_6 & 0xfffffffe) == 2) {
      (**(code **)(*param_2 + 0x4b0))(param_2,&local_138,param_3);
      dVar12 = local_128;
      dVar13 = local_138;
      dVar18 = dStack_130;
    }
  }
  FUN_147963094(&local_138,lVar6,param_2[0x15]);
  if (local_d0 != 0) {
    local_b8 = 1;
    local_b0._8_4_ = SUB84(dVar18,0);
    local_b0._0_8_ = dVar13;
    local_b0._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_a0 = dVar12;
  }
  local_d6 = param_7;
  local_138 = param_11;
  if (lVar8 != 0) {
    FUN_147ad1896(&local_128,local_13c,&param_12);
  }
  plVar7 = (longlong *)FUN_143406a2c(param_1,&local_138);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = plVar7[0x16];
    if (lVar8 == 0) {
      lVar8 = FUN_1448abda6(plVar7);
      if (lVar8 == 0) goto LAB_1434f73c8;
    }
    bVar10 = 0x40;
    if (*(byte *)(lVar8 + 0x152) < 7) {
      bVar10 = (byte)(0x4000400040 >> ((*(byte *)(lVar8 + 0x152) & 7) << 3));
    }
    if ((param_6 & 0xfffffffe) == 2) {
      (**(code **)(*plVar7 + 0x490))(plVar7,param_2,&DAT_14cadada0,param_3);
    }
    else {
      (**(code **)(*plVar7 + 0x490))(plVar7,param_2,&DAT_14cadad98,param_3);
      if (param_6 == 1) {
        local_148 = param_5[2];
        local_158 = *param_5;
        uStack_150 = param_5[1];
        local_178 = *param_4;
        dStack_170 = param_4[1];
        local_168 = param_4[2];
        local_1c0 = 0;
        local_1c8 = 0;
        FUN_14084af84(plVar7,&local_178,&local_158,0);
      }
      else {
        local_188 = param_5[2];
        local_198 = *param_5;
        uStack_190 = param_5[1];
        local_1b8 = *param_4;
        dStack_1b0 = param_4[1];
        local_1a8 = param_4[2];
        local_1c0 = 0;
        local_1c8 = 0;
        FUN_1401ca0e6(plVar7,&local_1b8,&local_198,0);
      }
    }
    bVar4 = param_13;
    FUN_14342e4a4(plVar7,param_8);
    FUN_14342df16(plVar7,param_9);
    bVar5 = 8;
    if (((local_c0 != 0) && (local_d0 != 0)) &&
       ((bVar9 = *(char *)(local_d0 + 0x152) - 1, 5 < bVar9 || ((0x35U >> (bVar9 & 0x1f) & 1) == 0))
       )) {
      bVar5 = *(char *)(local_c0 + 0x5b0) * '\x02' & 8;
    }
    *(byte *)(plVar7 + 0x92) = bVar10 | bVar4 | *(byte *)(plVar7 + 0x92) & 0xb6 | bVar5;
    uVar11 = (**(code **)(*param_1 + 0x2e8))(param_1);
    *(undefined4 *)(plVar7 + 0x98) = uVar11;
    (**(code **)(*plVar7 + 0x5e8))(plVar7,param_10);
  }
LAB_1434f73c8:
  uStack_e0 = 0;
  if (local_e8 != 0.0) {
    FUN_1400020a8();
  }
  FUN_14766440c(&local_128);
LAB_1434f6e95:
  if ((local_90 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434f73f8 FUN_1434f73f8 body=94 status=ok
// SIG undefined FUN_1434f73f8(void)

longlong FUN_1434f73f8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (cVar4 = FUN_140ba41f1(lVar3 + 0x3a0,param_2), cVar4 != '\0')) {
        return lVar3;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 1434f7456 FUN_1434f7456 body=15 status=ok
// SIG undefined FUN_1434f7456(void)

void FUN_1434f7456(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3ca) != param_2) {
    *(char *)(param_1 + 0x3ca) = param_2;
  }
  return;
}



// FUNCTION 1434f7466 FUN_1434f7466 body=1167 status=ok
// SIG undefined FUN_1434f7466(void)

ulonglong FUN_1434f7466(undefined8 param_1,double *param_2,double *param_3,float param_4,
                       float param_5,float param_6,int param_7,undefined8 param_8,longlong *param_9,
                       char param_10)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong unaff_R13;
  longlong lVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined8 *local_1c0;
  ulonglong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  ulonglong local_160 [2];
  undefined1 local_150;
  undefined2 local_14f;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined1 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  local_178 = param_2[2];
  local_188 = *param_2;
  dStack_180 = param_2[1];
  fVar13 = 0.0;
  local_1a8 = param_1;
  do {
    fVar13 = fVar13 + 0.125;
    fVar11 = (fVar13 * param_4) / (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2);
    dVar12 = (double)fVar11;
    local_190 = (double)(fVar11 * fVar11 * param_5 * -0.5 + -param_6) +
                param_3[2] * dVar12 + param_2[2];
    dStack_198 = param_3[1] * dVar12 + param_2[1] + 0.0;
    local_1a0 = dVar12 * *param_3 + *param_2 + 0.0;
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),local_178 <= local_190 || param_7 != 2);
    if (local_178 <= local_190 || param_7 != 2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cadbd20) && (FUN_144b3d300(&DAT_14cadbd20), DAT_14cadbd20 == -1))
      {
        local_170 = "SuggestProjVelTrace";
        local_168 = 0x13;
        local_164 = 0;
        uVar7 = FUN_14001a6c0(&local_170,1);
        DAT_14cadbd18 = (ulonglong)uVar7;
        _Init_thread_footer(&DAT_14cadbd20);
      }
      local_13c = 0;
      local_160[1] = 0;
      local_138 = 0x101;
      local_110 = 0;
      local_108 = 0x800000000;
      local_f0 = (undefined1 *)0x0;
      local_e8 = 0x400000000;
      local_150 = 1;
      local_144 = 0;
      local_160[0] = DAT_14cadbd18;
      local_14f = 1;
      local_14d = 0;
      local_140 = 0;
      local_14c = 0x1000000;
      local_148 = 1;
      iVar6 = (int)param_9[1];
      if (0 < iVar6) {
        lVar9 = 0;
        do {
          uVar4 = local_e8;
          lVar10 = *(longlong *)(*param_9 + lVar9 * 8);
          if (lVar10 != 0) {
            uVar3 = *(undefined4 *)(lVar10 + 0xc);
            lVar10 = (longlong)(int)local_e8;
            uVar7 = (int)local_e8 + 1;
            local_e8 = CONCAT44(local_e8._4_4_,uVar7);
            if (local_e8._4_4_ < uVar7) {
              FUN_1447de67e(local_100,uVar4 & 0xffffffff);
            }
            puVar8 = local_f0;
            if (local_f0 == (undefined1 *)0x0) {
              puVar8 = local_100;
            }
            *(undefined4 *)(puVar8 + lVar10 * 4) = uVar3;
            iVar6 = (int)param_9[1];
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
      local_170 = (char *)CONCAT44(param_6,2);
      local_1b0 = param_8;
      local_1b8 = local_160;
      local_1c0 = &local_170;
      local_1c8 = 1;
      cVar5 = FUN_140386f30(local_1a8,&local_188,&local_1a0,&DAT_14c8463d0);
      if (local_f0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (cVar5 != '\0') goto LAB_1434f7876;
    }
    else if (param_10 == '\0') goto LAB_1434f7876;
    local_178 = local_190;
    local_188 = local_1a0;
    dStack_180 = dStack_198;
  } while (fVar13 < 1.0);
  unaff_R13 = 0;
LAB_1434f7876:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_R13 & 0xffffffff;
}



// FUNCTION 1434f78f6 FUN_1434f78f6 body=2898 status=ok
// SIG undefined FUN_1434f78f6(void)

ulonglong FUN_1434f78f6(undefined8 param_1,double *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *_Src;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  uint *local_4b0;
  undefined4 *local_4a8;
  ulonglong *local_4a0;
  wchar_t *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  undefined8 *local_480;
  undefined1 *local_478;
  code *local_470;
  byte local_461;
  undefined4 local_460;
  int local_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  double local_410;
  double local_408;
  double local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined8 local_3e8;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  uint local_178;
  undefined1 local_174;
  ulonglong local_170 [2];
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined4 local_15c;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_147ad0a5c(param_3);
  }
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x40) = 0;
  uVar22 = 0;
  memset((void *)(param_3 + 0x48),0,0x100);
  *(undefined4 *)(param_3 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_3 + 0xec) = 0xffffffff;
  lVar17 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar17 != 0) {
    fVar30 = *(float *)(param_2 + 0xc);
    if (0.0001 < fVar30) {
      fVar28 = *(float *)((longlong)param_2 + 100);
      if (ABS(fVar28) <= 1e-08) {
        fVar28 = 0.0;
        if ((*(longlong *)(lVar17 + 0x30) != 0) &&
           (plVar7 = *(longlong **)(*(longlong *)(lVar17 + 0x30) + 0x2b0), plVar7 != (longlong *)0x0
           )) {
          if (*(code **)(*plVar7 + 0x660) == FUN_1449fb17e) {
            if ((*(byte *)((longlong)plVar7 + 0x39e) & 1) == 0) {
              if ((*(byte *)((longlong)plVar7 + 0x39e) & 2) == 0) {
                if (DAT_14caf84d0 == (longlong *)0x0) {
                  local_480 = &local_2e8;
                  local_2e8 = FUN_1449e2820;
                  local_470 = FUN_14081d0ea;
                  local_478 = &LAB_145a62952;
                  local_488 = &LAB_147c8cd45;
                  local_490 = &LAB_1461468ae;
                  local_498 = L"Engine";
                  local_4a0 = (ulonglong *)0x0;
                  local_4a8 = (undefined4 *)CONCAT44(local_4a8._4_4_,0x10000006);
                  local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,8);
                  local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,0x218);
                  FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
                }
                plVar11 = DAT_14caf84d0;
                lVar24 = DAT_14caf84d0[0x22];
                if (lVar24 == 0) {
                  (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
                  lVar24 = plVar11[0x22];
                }
                pfVar18 = (float *)(lVar24 + 0x38);
              }
              else {
                pfVar18 = (float *)((longlong)plVar7 + 0x41c);
              }
              fVar28 = *pfVar18;
              *(float *)(plVar7 + 0x83) = fVar28;
            }
            else {
              fVar28 = *(float *)(plVar7 + 0x83);
            }
          }
          else {
            fVar28 = (float)(**(code **)(*plVar7 + 0x660))(plVar7);
          }
        }
      }
      local_460 = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar5 = *(undefined1 *)(param_2 + 0xe);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cadbd30) && (FUN_144b3d300(), DAT_14cadbd30 == -1)) {
        local_2e8 = (code *)0x14a9095bc;
        local_2e0 = 0x15;
        local_2dc = 0;
        uVar14 = FUN_14001a6c0(&local_2e8,1);
        DAT_14cadbd28 = (ulonglong)uVar14;
        _Init_thread_footer();
      }
      local_14c = 0;
      local_170[1] = 0;
      local_148 = 0x101;
      local_120 = 0;
      local_118 = 0x800000000;
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      local_154 = 0;
      local_170[0] = DAT_14cadbd28;
      local_15f = 1;
      local_15d = 0;
      local_150 = 0;
      local_15c = 0x1000000;
      local_158 = 1;
      local_178 = 0;
      local_174 = 0;
      iVar21 = *(int *)(param_2 + 9);
      local_461 = (0 < iVar21 | *(byte *)((longlong)param_2 + 0x3c)) & *(byte *)(param_2 + 6);
      local_45c = iVar21;
      local_160 = uVar5;
      if (local_461 == 1) {
        iVar16 = *(int *)(param_2 + 0xb);
        iVar20 = iVar21;
        if (0 < iVar16) {
          lVar24 = 0;
          do {
            uVar22 = local_f8;
            lVar23 = *(longlong *)((longlong)param_2[10] + lVar24 * 8);
            if (lVar23 != 0) {
              uVar6 = *(undefined4 *)(lVar23 + 0xc);
              lVar23 = (longlong)(int)local_f8;
              uVar14 = (int)local_f8 + 1;
              local_f8 = CONCAT44(local_f8._4_4_,uVar14);
              if (local_f8._4_4_ < uVar14) {
                FUN_1447de67e(local_110,uVar22 & 0xffffffff);
                iVar20 = local_45c;
              }
              puVar19 = local_100;
              if (local_100 == (undefined1 *)0x0) {
                puVar19 = local_110;
              }
              *(undefined4 *)(puVar19 + lVar23 * 4) = uVar6;
              iVar16 = *(int *)(param_2 + 0xb);
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < iVar16);
          iVar21 = *(int *)(param_2 + 9);
        }
        if ((0 < iVar20) && (0 < iVar21)) {
          uVar14 = 0;
          lVar24 = 0;
          do {
            if (DAT_14cacfd48 == (longlong *)0x0) {
              local_2e8 = FUN_1449e2820;
              local_470 = FUN_14081d0ea;
              local_478 = &LAB_140eca530;
              local_488 = &LAB_1479b02e7;
              local_490 = &LAB_146063820;
              local_498 = L"Engine";
              local_4a0 = (ulonglong *)0x0;
              local_4a8 = (undefined4 *)CONCAT44(local_4a8._4_4_,0x10000006);
              local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,8);
              local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,0x170);
              local_480 = &local_2e8;
              FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
            }
            plVar7 = DAT_14cacfd48;
            lVar23 = DAT_14cacfd48[0x22];
            if (lVar23 == 0) {
              (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
              lVar23 = plVar7[0x22];
            }
            if (DAT_14cacfd78 == '\0') {
              FUN_1416bf7d6(lVar23,0);
              DAT_14cacfd78 = '\x01';
            }
            if ((int)(uint)*(byte *)((longlong)param_2[8] + lVar24) < *(int *)(lVar23 + 0x158)) {
              uVar15 = *(uint *)(*(longlong *)(lVar23 + 0x150) +
                                (ulonglong)*(byte *)((longlong)param_2[8] + lVar24) * 4);
            }
            else {
              uVar15 = 0x21;
            }
            uVar14 = uVar14 | 1 << (uVar15 & 0x1f);
            lVar24 = lVar24 + 1;
            local_178 = uVar14;
          } while ((int)lVar24 < *(int *)(param_2 + 9));
        }
      }
      dVar2 = param_2[3];
      dVar3 = param_2[4];
      dVar4 = param_2[5];
      local_188 = param_2[2];
      local_198 = *param_2;
      uStack_190 = param_2[1];
      local_1a8 = param_2[2];
      local_1b8 = *param_2;
      uStack_1b0 = param_2[1];
      iVar16 = (int)ROUND(-0.5 - (*(float *)(param_2 + 7) * *(float *)(param_2 + 0xc) +
                                 *(float *)(param_2 + 7) * *(float *)(param_2 + 0xc))) >> 1;
      iVar21 = -iVar16;
      if (0x7f < iVar21) {
        iVar21 = 0x80;
      }
      if (0 < iVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar21);
      }
      if (*(int *)(param_3 + 0xc) < iVar21) {
        FUN_147ad0a5c(param_3);
      }
      local_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      uStack_1e0 = (undefined4)uStack_190;
      uStack_1dc = uStack_190._4_4_;
      local_1d8 = local_188;
      local_1d0 = dVar2;
      local_1c8 = dVar3;
      local_1c0 = dVar4;
      FUN_147ac8414(param_3,&local_1e8,&local_1d0,0);
      local_228 = 0;
      uStack_220 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_218 = 0xffffffff;
      uVar22 = 0;
      local_214 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_318 = 0xffffffff;
      local_314 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = (code *)CONCAT44(0x3f800000,(undefined4)local_2e8);
      local_3e8._4_4_ = 1.0;
      fVar1 = *(float *)(param_2 + 7);
      if (0.0 < fVar1) {
        fVar30 = 1.0 / fVar30;
        fVar26 = 0.0;
        do {
          fVar29 = fVar1 - fVar26;
          if (fVar30 <= fVar1 - fVar26) {
            fVar29 = fVar30;
          }
          fVar27 = fVar26 + fVar29;
          local_188 = local_1a8;
          local_198 = local_1b8;
          uStack_190 = uStack_1b0;
          dVar10 = (double)(fVar28 * fVar29) + dVar4;
          dVar8 = dVar3 + 0.0;
          dVar9 = dVar2 + 0.0;
          dVar25 = (double)(fVar29 * 0.5);
          local_1a8 = (dVar4 + dVar10) * dVar25 + local_1a8;
          uStack_1b0 = (dVar3 + dVar8) * dVar25 + uStack_1b0;
          local_1b8 = (dVar2 + dVar9) * dVar25 + local_1b8;
          *(double *)(param_3 + 0x10) = local_1b8;
          *(double *)(param_3 + 0x18) = uStack_1b0;
          *(double *)(param_3 + 0x20) = local_1a8;
          *(double *)(param_3 + 0x28) = dVar9;
          *(double *)(param_3 + 0x30) = dVar8;
          *(double *)(param_3 + 0x38) = dVar10;
          *(float *)(param_3 + 0x40) = fVar27;
          if (local_461 != 0) {
            if (local_45c < 1) {
              bVar12 = 0;
            }
            else {
              local_3f8 = 2;
              local_3f4 = local_460;
              local_4a0 = local_170;
              local_4a8 = &local_3f8;
              local_4b0 = &local_178;
              local_4b8 = &DAT_14c8463d0;
              bVar12 = FUN_1479b44ee(lVar17,&local_2e8,&local_198,&local_1b8);
            }
            if (*(char *)((longlong)param_2 + 0x3c) == '\x01') {
              local_3f8 = 2;
              local_3f4 = local_460;
              local_498 = (wchar_t *)&DAT_14cad0f10;
              local_4a0 = local_170;
              local_4a8 = &local_3f8;
              local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,(uint)*(byte *)((longlong)param_2 + 0x3d)
                                          );
              local_4b8 = &DAT_14c8463d0;
              bVar13 = FUN_14021655c(lVar17,&local_3e8,&local_198,&local_1b8);
            }
            else {
              bVar13 = 0;
            }
            if ((bVar12 | bVar13) == 1) {
              _Src = &local_3e8;
              if (local_2e8._4_4_ < local_3e8._4_4_) {
                _Src = &local_2e8;
              }
              memcpy((void *)(param_3 + 0x48),_Src,0x100);
              fVar29 = fVar29 * *(float *)(param_3 + 0x4c);
              local_400 = dVar4 + (double)(fVar28 * fVar29);
              local_418 = _Src[4];
              local_428 = *(undefined4 *)(_Src + 2);
              uStack_424 = *(undefined4 *)((longlong)_Src + 0x14);
              uStack_420 = *(undefined4 *)(_Src + 3);
              uStack_41c = *(undefined4 *)((longlong)_Src + 0x1c);
              local_410 = dVar9;
              local_408 = dVar8;
              FUN_147ac8414(param_3,&local_428,&local_410,fVar26 + fVar29);
              uVar22 = CONCAT71((int7)((ulonglong)&local_458 >> 8),1);
              goto LAB_1434f8243;
            }
          }
          local_458 = (undefined4)local_1b8;
          uStack_454 = local_1b8._4_4_;
          uStack_450 = (undefined4)uStack_1b0;
          uStack_44c = uStack_1b0._4_4_;
          local_448 = local_1a8;
          local_440 = dVar9;
          local_438 = dVar8;
          local_430 = dVar10;
          FUN_147ac8414(param_3,&local_458,&local_440,fVar27);
          fVar26 = fVar27;
          dVar4 = dVar10;
          dVar3 = dVar8;
          dVar2 = dVar9;
        } while (fVar27 < fVar1);
        uVar22 = 0;
      }
LAB_1434f8243:
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_120 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar22 = 0;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1434f8449 FUN_1434f8449 body=69 status=ok
// SIG undefined FUN_1434f8449(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434f8449(void)

{
  _DAT_14cadb440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434f848b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cadb448,1);
  return;
}



// FUNCTION 1434f848e FUN_1434f848e body=668 status=ok
// SIG undefined FUN_1434f848e(void)

void FUN_1434f848e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1447210f0();
  plVar5 = (longlong *)FUN_140489acc();
  cVar3 = (**(code **)(*plVar5 + 0x328))(plVar5,lVar4,*(undefined8 *)(param_1 + 0x3a0));
  if (cVar3 != '\0') {
    if (0 < *(int *)(lVar4 + 0x238)) {
      lVar10 = 0;
      do {
        iVar8 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar10 * 8);
        if (((((iVar8 != 0) &&
              (uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar10 * 8), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) &&
            ((plVar5 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar8)))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
             (cVar3 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar3 == '\0')))))) {
          uVar6 = FUN_14477b072(plVar5,DAT_14caf9800);
          (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,0);
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar4 + 0x238));
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar2 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14a909a30;
    local_48[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_48 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = &LAB_14612d0ce;
    plVar5 = (longlong *)FUN_140489acc();
    (**(code **)(*plVar5 + 0x318))(plVar5,lVar4,*(undefined8 *)(param_1 + 0x3a0),&local_48);
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1434f869e;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434f869e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f872c FUN_1434f872c body=668 status=ok
// SIG undefined FUN_1434f872c(void)

void FUN_1434f872c(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1447210f0();
  plVar5 = (longlong *)FUN_140489acc();
  cVar3 = (**(code **)(*plVar5 + 0x328))(plVar5,lVar4,*(undefined8 *)(param_1 + 0x3a0));
  if (cVar3 != '\0') {
    if (0 < *(int *)(lVar4 + 0x238)) {
      lVar10 = 0;
      do {
        iVar8 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar10 * 8);
        if (((((iVar8 != 0) &&
              (uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar10 * 8), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) &&
            ((plVar5 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar8)))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
             (cVar3 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar3 == '\0')))))) {
          uVar6 = FUN_14477b072(plVar5,DAT_14caf95d8);
          (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,0);
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar4 + 0x238));
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar2 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14a909a30;
    local_48[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_48 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar8;
    puVar2[4] = &LAB_147ac859a;
    plVar5 = (longlong *)FUN_140489acc();
    (**(code **)(*plVar5 + 800))(plVar5,lVar4,*(undefined8 *)(param_1 + 0x3a0),&local_48);
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1434f893c;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434f893c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434f89ce FUN_1434f89ce body=299 status=ok
// SIG undefined FUN_1434f89ce(void)

void FUN_1434f89ce(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x398);
    iVar8 = 0x100;
    if (DAT_14c761528 < 0x7ffffffe) {
      iVar8 = DAT_14c761528;
    }
    DAT_14c761528 = iVar8 + 1;
    uVar2 = *(ulonglong *)(lVar1 + 0x28);
    if (uVar2 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar1,uVar2,0xc);
    }
    else {
      uVar7 = (uint)uVar2;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 0x1000;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
    *(int *)(lVar1 + 0x394) = iVar8;
    FUN_1460699d6(*(undefined8 *)(param_2 + 0x398),param_3);
                    /* WARNING: Could not recover jumptable at 0x0001434f8a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x398) + 0x6b0))(*(longlong **)(param_2 + 0x398),param_4)
    ;
    return;
  }
  return;
}



// FUNCTION 1434f8afa FUN_1434f8afa body=50 status=ok
// SIG undefined FUN_1434f8afa(void)

void FUN_1434f8afa(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140489acc();
  uVar2 = FUN_1447210f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001434f8b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3c8))(plVar1,uVar2,*(code **)(*plVar1 + 0x3c8));
  return;
}



// FUNCTION 1434f8b2c FUN_1434f8b2c body=69 status=ok
// SIG undefined FUN_1434f8b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434f8b2c(void)

{
  _DAT_14cadb558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434f8b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cadb560,1);
  return;
}



// FUNCTION 1434f8b93 FUN_1434f8b93 body=55 status=ok
// SIG undefined FUN_1434f8b93(void)

void FUN_1434f8b93(void)

{
  undefined8 uVar1;
  
  if (DAT_14cadb5a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cadb5a0 = FUN_14171c317(FUN_1463ce9d2,uVar1,L"EWindowMode");
  }
  return;
}



// FUNCTION 1434f8bca FUN_1434f8bca body=892 status=ok
// SIG undefined FUN_1434f8bca(void)

void FUN_1434f8bca(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  int local_f0;
  longlong local_c0;
  longlong local_b0;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  int local_48;
  int local_44;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != '\0') {
    if ((((int)param_1[0x24] != 0) && ((longlong *)param_1[0x23] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x23] + 0x30))(), cVar1 != '\0')) {
      FUN_1400b22c2(local_40,&DAT_149e27980);
      FUN_1400b22c2(local_70,L"/Disabled");
      FUN_1400b22c2(local_90,"Windows");
      uVar2 = FUN_140b7d41a();
      FUN_140056680(local_a0,uVar2);
      FUN_1401c7f3e(local_80,local_a0,local_90);
      FUN_1401c7f3e(&local_60,local_80,local_70);
      puVar4 = DAT_14c872b08;
      local_48 = (int)uStack_58;
      if ((int)uStack_58 < 2) {
        local_50 = (void *)0x0;
        lVar6 = (longlong)DAT_14c872b10;
        local_48 = DAT_14c872b10;
        if (lVar6 == 0) {
          local_44 = 0;
        }
        else {
          FUN_1446dd670(&local_50,DAT_14c872b10,0);
          memcpy(local_50,puVar4,lVar6 * 2);
        }
      }
      else {
        iVar5 = DAT_14c872b10 + -1;
        if (DAT_14c872b10 == 0) {
          iVar5 = 0;
        }
        local_50 = local_60;
        local_44 = uStack_58._4_4_;
        local_60 = (void *)0x0;
        uStack_58 = 0;
        if (iVar5 + local_48 < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar5);
        }
        if (local_44 < iVar5 + local_48) {
          FUN_1446f8c06(&local_50);
        }
        FUN_1400020e8(&local_50,DAT_14c872b08,iVar5);
      }
      FUN_1401c7f3e(&local_f8,&local_50,local_40);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      puVar4 = local_f8;
      if (local_f0 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140056680(local_40,puVar4);
      if ((int)param_1[0x24] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x23];
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_40);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1415ef1f0(1);
  }
  puVar4 = DAT_14c872b08;
  if (DAT_14c872b10 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_108 = 0;
  uStack_100 = 0;
  FUN_1400033ba(param_1,param_1[2],puVar4,0);
  FUN_145be17f3(&local_f8);
  FUN_145be11bc(param_1 + 6,&local_f8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (((int)param_1[0x11] == 0) || (*(int *)((longlong)param_1 + 0x8c) == 0)) {
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  FUN_1463cf896(param_1,(int)param_1[0x15]);
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


