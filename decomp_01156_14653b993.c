// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14653b993 FUN_14653b993 body=47 status=ok
// SIG undefined FUN_14653b993(void)

longlong FUN_14653b993(void)

{
  if (DAT_14cb6e6c0 == 0) {
    FUN_14000fc22(&DAT_14cb6e6c0,&PTR_FUN_14b3ab080);
  }
  return DAT_14cb6e6c0;
}



// FUNCTION 14653b9c2 FUN_14653b9c2 body=47 status=ok
// SIG undefined FUN_14653b9c2(void)

longlong FUN_14653b9c2(void)

{
  if (DAT_14cb6e6c8 == 0) {
    FUN_14000fc22(&DAT_14cb6e6c8,&PTR_FUN_14b3ab118);
  }
  return DAT_14cb6e6c8;
}



// FUNCTION 14653b9f1 FUN_14653b9f1 body=47 status=ok
// SIG undefined FUN_14653b9f1(void)

longlong FUN_14653b9f1(void)

{
  if (DAT_14cb6e6d0 == 0) {
    FUN_14000fc22(&DAT_14cb6e6d0,&PTR_FUN_14b3ab1a0);
  }
  return DAT_14cb6e6d0;
}



// FUNCTION 14653ba20 FUN_14653ba20 body=47 status=ok
// SIG undefined FUN_14653ba20(void)

longlong FUN_14653ba20(void)

{
  if (DAT_14cb6e6d8 == 0) {
    FUN_14000fc22(&DAT_14cb6e6d8,&PTR_FUN_14b3ab228);
  }
  return DAT_14cb6e6d8;
}



// FUNCTION 14653ba4f FUN_14653ba4f body=47 status=ok
// SIG undefined FUN_14653ba4f(void)

longlong FUN_14653ba4f(void)

{
  if (DAT_14cb6e6e0 == 0) {
    FUN_14000fc22(&DAT_14cb6e6e0,&PTR_FUN_14b3ab380);
  }
  return DAT_14cb6e6e0;
}



// FUNCTION 14653ba7e FUN_14653ba7e body=47 status=ok
// SIG undefined FUN_14653ba7e(void)

longlong FUN_14653ba7e(void)

{
  if (DAT_14cb6e6e8 == 0) {
    FUN_14000fc22(&DAT_14cb6e6e8,&PTR_FUN_14b3ab408);
  }
  return DAT_14cb6e6e8;
}



// FUNCTION 14653baad FUN_14653baad body=47 status=ok
// SIG undefined FUN_14653baad(void)

longlong FUN_14653baad(void)

{
  if (DAT_14cb6e6f0 == 0) {
    FUN_14000fc22(&DAT_14cb6e6f0,&PTR_FUN_14b3ab4a0);
  }
  return DAT_14cb6e6f0;
}



// FUNCTION 14653badc FUN_14653badc body=47 status=ok
// SIG undefined FUN_14653badc(void)

longlong FUN_14653badc(void)

{
  if (DAT_14cb6e6f8 == 0) {
    FUN_14000fc22(&DAT_14cb6e6f8,&PTR_FUN_14b3ab550);
  }
  return DAT_14cb6e6f8;
}



// FUNCTION 14653bb0b FUN_14653bb0b body=47 status=ok
// SIG undefined FUN_14653bb0b(void)

longlong FUN_14653bb0b(void)

{
  if (DAT_14cb6e700 == 0) {
    FUN_14000fc22(&DAT_14cb6e700,&PTR_FUN_14b3ab5f0);
  }
  return DAT_14cb6e700;
}



// FUNCTION 14653bb3a FUN_14653bb3a body=47 status=ok
// SIG undefined FUN_14653bb3a(void)

longlong FUN_14653bb3a(void)

{
  if (DAT_14cb6e708 == 0) {
    FUN_14000fc22(&DAT_14cb6e708,&PTR_FUN_14b3ab678);
  }
  return DAT_14cb6e708;
}



// FUNCTION 14653bb69 FUN_14653bb69 body=47 status=ok
// SIG undefined FUN_14653bb69(void)

longlong FUN_14653bb69(void)

{
  if (DAT_14cb6e710 == 0) {
    FUN_14000fc22(&DAT_14cb6e710,&PTR_FUN_14b3ab7c0);
  }
  return DAT_14cb6e710;
}



// FUNCTION 14653bb98 FUN_14653bb98 body=47 status=ok
// SIG undefined FUN_14653bb98(void)

longlong FUN_14653bb98(void)

{
  if (DAT_14cb6e718 == 0) {
    FUN_14000fc22(&DAT_14cb6e718,&PTR_FUN_14b3ab858);
  }
  return DAT_14cb6e718;
}



// FUNCTION 14653bbc7 FUN_14653bbc7 body=47 status=ok
// SIG undefined FUN_14653bbc7(void)

longlong FUN_14653bbc7(void)

{
  if (DAT_14cb6e720 == 0) {
    FUN_14000fc22(&DAT_14cb6e720,&PTR_FUN_14b3ab8f8);
  }
  return DAT_14cb6e720;
}



// FUNCTION 14653bbf6 FUN_14653bbf6 body=156 status=ok
// SIG undefined FUN_14653bbf6(void)

void FUN_14653bbf6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14578b382(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14653bc93 FUN_14653bc93 body=47 status=ok
// SIG undefined FUN_14653bc93(void)

longlong FUN_14653bc93(void)

{
  if (DAT_14cb6e728 == 0) {
    FUN_14000fc22(&DAT_14cb6e728,&PTR_FUN_14b3ab978);
  }
  return DAT_14cb6e728;
}



// FUNCTION 14653bcc2 FUN_14653bcc2 body=47 status=ok
// SIG undefined FUN_14653bcc2(void)

longlong FUN_14653bcc2(void)

{
  if (DAT_14cb6e730 == 0) {
    FUN_14000fc22(&DAT_14cb6e730,&PTR_FUN_14b3ab9c8);
  }
  return DAT_14cb6e730;
}



// FUNCTION 14653bcf1 FUN_14653bcf1 body=47 status=ok
// SIG undefined FUN_14653bcf1(void)

longlong FUN_14653bcf1(void)

{
  if (DAT_14cb6e738 == 0) {
    FUN_14000fc22(&DAT_14cb6e738,&PTR_FUN_14b3aba20);
  }
  return DAT_14cb6e738;
}



// FUNCTION 14653bd35 FUN_14653bd35 body=47 status=ok
// SIG undefined FUN_14653bd35(void)

longlong FUN_14653bd35(void)

{
  if (DAT_14cb6e740 == 0) {
    FUN_14000fc22(&DAT_14cb6e740,&PTR_FUN_14b3aba70);
  }
  return DAT_14cb6e740;
}



// FUNCTION 14653bd64 FUN_14653bd64 body=47 status=ok
// SIG undefined FUN_14653bd64(void)

longlong FUN_14653bd64(void)

{
  if (DAT_14cb6e748 == 0) {
    FUN_14000fc22(&DAT_14cb6e748,&PTR_FUN_14b3abb20);
  }
  return DAT_14cb6e748;
}



// FUNCTION 14653bd94 FUN_14653bd94 body=34 status=ok
// SIG undefined FUN_14653bd94(void)

void FUN_14653bd94(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d12354();
  FUN_14069c8d6(uVar1,&PTR_s_AttachToTarget_14b3abb60,0x2f);
  return;
}



// FUNCTION 14653bdc2 FUN_14653bdc2 body=2471 status=ok
// SIG undefined FUN_14653bdc2(void)

void FUN_14653bdc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e770) {
    FUN_144b3d300(&DAT_14cb6e770);
    if (DAT_14cb6e770 == -1) {
      FUN_1446f470e(&DAT_14cb6e768,L"GbxActorData",1);
      _Init_thread_footer(&DAT_14cb6e770);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e77c) {
    FUN_144b3d300(&DAT_14cb6e77c);
    if (DAT_14cb6e77c == -1) {
      FUN_1446f470e(&DAT_14cb6e774,L"ReplicatedGestaltParts",1);
      _Init_thread_footer(&DAT_14cb6e77c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e788) {
    FUN_144b3d300(&DAT_14cb6e788);
    if (DAT_14cb6e788 == -1) {
      FUN_1446f470e(&DAT_14cb6e780,L"HealthState",1);
      _Init_thread_footer(&DAT_14cb6e788);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e794) {
    FUN_144b3d300(&DAT_14cb6e794);
    if (DAT_14cb6e794 == -1) {
      FUN_1446f470e(&DAT_14cb6e78c,L"ResourcePoolManager",1);
      _Init_thread_footer(&DAT_14cb6e794);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7a0) {
    FUN_144b3d300(&DAT_14cb6e7a0);
    if (DAT_14cb6e7a0 == -1) {
      FUN_1446f470e(&DAT_14cb6e798,L"GameStage",1);
      _Init_thread_footer(&DAT_14cb6e7a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7ac) {
    FUN_144b3d300(&DAT_14cb6e7ac);
    if (DAT_14cb6e7ac == -1) {
      FUN_1446f470e(&DAT_14cb6e7a4,L"Damage",1);
      _Init_thread_footer(&DAT_14cb6e7ac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7b8) {
    FUN_144b3d300(&DAT_14cb6e7b8);
    if (DAT_14cb6e7b8 == -1) {
      FUN_1446f470e(&DAT_14cb6e7b0,L"DamageRadius",1);
      _Init_thread_footer(&DAT_14cb6e7b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7c4) {
    FUN_144b3d300(&DAT_14cb6e7c4);
    if (DAT_14cb6e7c4 == -1) {
      FUN_1446f470e(&DAT_14cb6e7bc,L"ImpactForce",1);
      _Init_thread_footer(&DAT_14cb6e7c4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7d0) {
    FUN_144b3d300(&DAT_14cb6e7d0);
    if (DAT_14cb6e7d0 == -1) {
      FUN_1446f470e(&DAT_14cb6e7c8,L"DamageModifierFlags",1);
      _Init_thread_footer(&DAT_14cb6e7d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7dc) {
    FUN_144b3d300(&DAT_14cb6e7dc);
    if (DAT_14cb6e7dc == -1) {
      FUN_1446f470e(&DAT_14cb6e7d4,L"DamageType",1);
      _Init_thread_footer(&DAT_14cb6e7dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7e8) {
    FUN_144b3d300(&DAT_14cb6e7e8);
    if (DAT_14cb6e7e8 == -1) {
      FUN_1446f470e(&DAT_14cb6e7e0,L"DamageSource",1);
      _Init_thread_footer(&DAT_14cb6e7e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e7f4) {
    FUN_144b3d300(&DAT_14cb6e7f4);
    if (DAT_14cb6e7f4 == -1) {
      FUN_1446f470e(&DAT_14cb6e7ec,L"FuseTime",1);
      _Init_thread_footer(&DAT_14cb6e7f4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e800) {
    FUN_144b3d300(&DAT_14cb6e800);
    if (DAT_14cb6e800 == -1) {
      FUN_1446f470e(&DAT_14cb6e7f8,L"bIsHoming",1);
      _Init_thread_footer(&DAT_14cb6e800);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e80c) {
    FUN_144b3d300(&DAT_14cb6e80c);
    if (DAT_14cb6e80c == -1) {
      FUN_1446f470e(&DAT_14cb6e804,L"HomingTarget",1);
      _Init_thread_footer(&DAT_14cb6e80c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e818) {
    FUN_144b3d300(&DAT_14cb6e818);
    if (DAT_14cb6e818 == -1) {
      FUN_1446f470e(&DAT_14cb6e810,L"RepAttachedState",1);
      _Init_thread_footer(&DAT_14cb6e818);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e824) {
    FUN_144b3d300(&DAT_14cb6e824);
    if (DAT_14cb6e824 == -1) {
      FUN_1446f470e(&DAT_14cb6e81c,L"HomingTurnSpeedScale",1);
      _Init_thread_footer(&DAT_14cb6e824);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e830) {
    FUN_144b3d300(&DAT_14cb6e830);
    if (DAT_14cb6e830 == -1) {
      FUN_1446f470e(&DAT_14cb6e828,L"DrunkenMovementSeed",1);
      _Init_thread_footer(&DAT_14cb6e830);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e83c) {
    FUN_144b3d300(&DAT_14cb6e83c);
    if (DAT_14cb6e83c == -1) {
      FUN_1446f470e(&DAT_14cb6e834,L"SourceActor",1);
      _Init_thread_footer(&DAT_14cb6e83c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e848) {
    FUN_144b3d300(&DAT_14cb6e848);
    if (DAT_14cb6e848 == -1) {
      FUN_1446f470e(&DAT_14cb6e840,L"CustomGravityScale",1);
      _Init_thread_footer(&DAT_14cb6e848);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e854) {
    FUN_144b3d300(&DAT_14cb6e854);
    if (DAT_14cb6e854 == -1) {
      FUN_1446f470e(&DAT_14cb6e84c,L"SpawnSpeedScale",1);
      _Init_thread_footer(&DAT_14cb6e854);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e860) {
    FUN_144b3d300(&DAT_14cb6e860);
    if (DAT_14cb6e860 == -1) {
      FUN_1446f470e(&DAT_14cb6e858,L"ReplicatedVelocity",1);
      _Init_thread_footer(&DAT_14cb6e860);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e86c) {
    FUN_144b3d300(&DAT_14cb6e86c);
    if (DAT_14cb6e86c == -1) {
      FUN_1446f470e(&DAT_14cb6e864,L"RepExploded",1);
      _Init_thread_footer(&DAT_14cb6e86c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e878) {
    FUN_144b3d300(&DAT_14cb6e878);
    if (DAT_14cb6e878 == -1) {
      FUN_1446f470e(&DAT_14cb6e870,L"bWaitingToBeDestroyed",1);
      _Init_thread_footer(&DAT_14cb6e878);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e884) {
    FUN_144b3d300(&DAT_14cb6e884);
    if (DAT_14cb6e884 == -1) {
      FUN_1446f470e(&DAT_14cb6e87c,L"bThrown",1);
      _Init_thread_footer(&DAT_14cb6e884);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e890) {
    FUN_144b3d300(&DAT_14cb6e890);
    if (DAT_14cb6e890 == -1) {
      FUN_1446f470e(&DAT_14cb6e888,L"bDropped",1);
      _Init_thread_footer(&DAT_14cb6e890);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e89c) {
    FUN_144b3d300(&DAT_14cb6e89c);
    if (DAT_14cb6e89c == -1) {
      FUN_1446f470e(&DAT_14cb6e894,L"bInFlight",1);
      _Init_thread_footer(&DAT_14cb6e89c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6e8a8) {
    FUN_144b3d300(&DAT_14cb6e8a8);
    if (DAT_14cb6e8a8 == -1) {
      FUN_1446f470e(&DAT_14cb6e8a0,L"FactsConduit",1);
      _Init_thread_footer(&DAT_14cb6e8a8);
      return;
    }
  }
  return;
}



// FUNCTION 14653c76a FUN_14653c76a body=40 status=ok
// SIG undefined FUN_14653c76a(void)

undefined8 FUN_14653c76a(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c792 FUN_14653c792 body=40 status=ok
// SIG undefined FUN_14653c792(void)

undefined8 FUN_14653c792(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c7ba FUN_14653c7ba body=40 status=ok
// SIG undefined FUN_14653c7ba(void)

undefined8 FUN_14653c7ba(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c7e2 FUN_14653c7e2 body=40 status=ok
// SIG undefined FUN_14653c7e2(void)

undefined8 FUN_14653c7e2(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c80a FUN_14653c80a body=40 status=ok
// SIG undefined FUN_14653c80a(void)

undefined8 FUN_14653c80a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c832 FUN_14653c832 body=40 status=ok
// SIG undefined FUN_14653c832(void)

undefined8 FUN_14653c832(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c85a FUN_14653c85a body=40 status=ok
// SIG undefined FUN_14653c85a(void)

undefined8 FUN_14653c85a(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c882 FUN_14653c882 body=40 status=ok
// SIG undefined FUN_14653c882(void)

undefined8 FUN_14653c882(undefined8 param_1,int param_2)

{
  FUN_1458944b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c8aa FUN_14653c8aa body=40 status=ok
// SIG undefined FUN_14653c8aa(void)

undefined8 FUN_14653c8aa(undefined8 param_1,int param_2)

{
  FUN_140ce4cf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c8d2 FUN_14653c8d2 body=29 status=ok
// SIG undefined FUN_14653c8d2(void)

undefined8 FUN_14653c8d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c8f0 FUN_14653c8f0 body=29 status=ok
// SIG undefined FUN_14653c8f0(void)

undefined8 FUN_14653c8f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c90e FUN_14653c90e body=29 status=ok
// SIG undefined FUN_14653c90e(void)

undefined8 FUN_14653c90e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c92c FUN_14653c92c body=113 status=ok
// SIG undefined FUN_14653c92c(void)

void FUN_14653c92c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b3ae2c0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  FUN_144a7a8f6((longlong)param_2 + 0xcc);
  return;
}



// FUNCTION 14653c9c4 FUN_14653c9c4 body=29 status=ok
// SIG undefined FUN_14653c9c4(void)

undefined8 FUN_14653c9c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653c9e2 FUN_14653c9e2 body=29 status=ok
// SIG undefined FUN_14653c9e2(void)

undefined8 FUN_14653c9e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653ca00 FUN_14653ca00 body=29 status=ok
// SIG undefined FUN_14653ca00(void)

undefined8 FUN_14653ca00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653ca1e FUN_14653ca1e body=29 status=ok
// SIG undefined FUN_14653ca1e(void)

undefined8 FUN_14653ca1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653ca3c FUN_14653ca3c body=55 status=ok
// SIG undefined FUN_14653ca3c(void)

void FUN_14653ca3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e8c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e8c0 = FUN_140002ddd(FUN_14653ca73,uVar1,L"LightProjectileAudioProperties");
  }
  return;
}



// FUNCTION 14653ca73 FUN_14653ca73 body=47 status=ok
// SIG undefined FUN_14653ca73(void)

longlong FUN_14653ca73(void)

{
  if (DAT_14cb6e8b8 == 0) {
    FUN_14086a14e(&DAT_14cb6e8b8,&PTR_FUN_14b3b1dd8);
  }
  return DAT_14cb6e8b8;
}



// FUNCTION 14653caa2 FUN_14653caa2 body=48 status=ok
// SIG undefined FUN_14653caa2(void)

void FUN_14653caa2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b3b7dd0;
  return;
}



// FUNCTION 14653cad2 FUN_14653cad2 body=55 status=ok
// SIG undefined FUN_14653cad2(void)

void FUN_14653cad2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e8d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e8d8 = FUN_140002ddd(FUN_14653cb09,uVar1,L"ProjectileAudioProvider");
  }
  return;
}



// FUNCTION 14653cb09 FUN_14653cb09 body=47 status=ok
// SIG undefined FUN_14653cb09(void)

longlong FUN_14653cb09(void)

{
  if (DAT_14cb6e8d0 == 0) {
    FUN_14086a14e(&DAT_14cb6e8d0,&PTR_FUN_14b3b1e58);
  }
  return DAT_14cb6e8d0;
}



// FUNCTION 14653cb38 FUN_14653cb38 body=48 status=ok
// SIG undefined FUN_14653cb38(void)

void FUN_14653cb38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000340;
  *puVar1 = &PTR_FUN_14b3b7f30;
  return;
}



// FUNCTION 14653cb68 FUN_14653cb68 body=47 status=ok
// SIG undefined FUN_14653cb68(void)

longlong FUN_14653cb68(void)

{
  if (DAT_14cb6e8e8 == 0) {
    FUN_14086a14e(&DAT_14cb6e8e8,&PTR_FUN_14b3b1f70);
  }
  return DAT_14cb6e8e8;
}



// FUNCTION 14653cb98 FUN_14653cb98 body=48 status=ok
// SIG undefined FUN_14653cb98(void)

void FUN_14653cb98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000240;
  *puVar1 = &PTR_FUN_14b3b8100;
  return;
}



// FUNCTION 14653cbd3 FUN_14653cbd3 body=47 status=ok
// SIG undefined FUN_14653cbd3(void)

longlong FUN_14653cbd3(void)

{
  if (DAT_14cb6e908 == 0) {
    FUN_14073dd9a(&DAT_14cb6e908,&PTR_LAB_14b3b1fe8);
  }
  return DAT_14cb6e908;
}



// FUNCTION 14653cc02 FUN_14653cc02 body=55 status=ok
// SIG undefined FUN_14653cc02(void)

void FUN_14653cc02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e920 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e920 = FUN_140002ddd(FUN_14653cc39,uVar1,L"ProjectileBodyState");
  }
  return;
}



// FUNCTION 14653cc39 FUN_14653cc39 body=47 status=ok
// SIG undefined FUN_14653cc39(void)

longlong FUN_14653cc39(void)

{
  if (DAT_14cb6e918 == 0) {
    FUN_14086a14e(&DAT_14cb6e918,&PTR_FUN_14b3b23b0);
  }
  return DAT_14cb6e918;
}



// FUNCTION 14653cc68 FUN_14653cc68 body=48 status=ok
// SIG undefined FUN_14653cc68(void)

void FUN_14653cc68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b3b8270;
  return;
}



// FUNCTION 14653cc98 FUN_14653cc98 body=55 status=ok
// SIG undefined FUN_14653cc98(void)

void FUN_14653cc98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e938 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e938 = FUN_140002ddd(FUN_14653cccf,uVar1,L"ProjectileBounceEvenlyData");
  }
  return;
}



// FUNCTION 14653cccf FUN_14653cccf body=49 status=ok
// SIG undefined FUN_14653cccf(void)

longlong FUN_14653cccf(void)

{
  if (DAT_14cb6e930 == 0) {
    FUN_14086a14e(&DAT_14cb6e930,&PTR_FUN_14b3b2610);
  }
  return DAT_14cb6e930;
}



// FUNCTION 14653cd00 FUN_14653cd00 body=48 status=ok
// SIG undefined FUN_14653cd00(void)

void FUN_14653cd00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b3b83e0;
  return;
}



// FUNCTION 14653cd30 FUN_14653cd30 body=55 status=ok
// SIG undefined FUN_14653cd30(void)

void FUN_14653cd30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e950 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e950 = FUN_140002ddd(FUN_14653cd67,uVar1,L"ProjectileBounceInPlaceData");
  }
  return;
}



// FUNCTION 14653cd67 FUN_14653cd67 body=49 status=ok
// SIG undefined FUN_14653cd67(void)

longlong FUN_14653cd67(void)

{
  if (DAT_14cb6e948 == 0) {
    FUN_14086a14e(&DAT_14cb6e948,&PTR_FUN_14b3b2778);
  }
  return DAT_14cb6e948;
}



// FUNCTION 14653cd98 FUN_14653cd98 body=48 status=ok
// SIG undefined FUN_14653cd98(void)

void FUN_14653cd98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b3b8540;
  return;
}



// FUNCTION 14653cdc8 FUN_14653cdc8 body=55 status=ok
// SIG undefined FUN_14653cdc8(void)

void FUN_14653cdc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e968 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e968 = FUN_140002ddd(FUN_14653cdff,uVar1,L"ProjectileGameplayBounceFilterData");
  }
  return;
}



// FUNCTION 14653cdff FUN_14653cdff body=47 status=ok
// SIG undefined FUN_14653cdff(void)

longlong FUN_14653cdff(void)

{
  if (DAT_14cb6e960 == 0) {
    FUN_14086a14e(&DAT_14cb6e960,&PTR_FUN_14b3b2a60);
  }
  return DAT_14cb6e960;
}



// FUNCTION 14653ce2e FUN_14653ce2e body=48 status=ok
// SIG undefined FUN_14653ce2e(void)

void FUN_14653ce2e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3b86a0;
  return;
}



// FUNCTION 14653ce5e FUN_14653ce5e body=47 status=ok
// SIG undefined FUN_14653ce5e(void)

longlong FUN_14653ce5e(void)

{
  if (DAT_14cb6e978 == 0) {
    FUN_1409ce572(&DAT_14cb6e978,&PTR_FUN_14b3b2b00);
  }
  return DAT_14cb6e978;
}



// FUNCTION 14653ce8e FUN_14653ce8e body=55 status=ok
// SIG undefined FUN_14653ce8e(void)

void FUN_14653ce8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e998 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e998 = FUN_140002ddd(FUN_14653cec5,uVar1,L"ProjectileGameplayBounceData");
  }
  return;
}



// FUNCTION 14653cec5 FUN_14653cec5 body=49 status=ok
// SIG undefined FUN_14653cec5(void)

longlong FUN_14653cec5(void)

{
  if (DAT_14cb6e990 == 0) {
    FUN_14086a14e(&DAT_14cb6e990,&PTR_FUN_14b3b2c20);
  }
  return DAT_14cb6e990;
}



// FUNCTION 14653cef6 FUN_14653cef6 body=48 status=ok
// SIG undefined FUN_14653cef6(void)

void FUN_14653cef6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b3b8900;
  return;
}



// FUNCTION 14653cf26 FUN_14653cf26 body=47 status=ok
// SIG undefined FUN_14653cf26(void)

longlong FUN_14653cf26(void)

{
  if (DAT_14cb6e9b8 == 0) {
    FUN_14073dd9a(&DAT_14cb6e9b8,&PTR_LAB_14b3b2e20);
  }
  return DAT_14cb6e9b8;
}



// FUNCTION 14653cf55 FUN_14653cf55 body=47 status=ok
// SIG undefined FUN_14653cf55(void)

longlong FUN_14653cf55(void)

{
  if (DAT_14cb6e9a8 == 0) {
    FUN_14000fc22(&DAT_14cb6e9a8,&PTR_FUN_14b3b2d58);
  }
  return DAT_14cb6e9a8;
}



// FUNCTION 14653cf84 FUN_14653cf84 body=34 status=ok
// SIG undefined FUN_14653cf84(void)

void FUN_14653cf84(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a855f6();
  FUN_14069c8d6(uVar1,&PTR_s_GetGameplayBounceSurfaceType_14b3b2da0,1);
  return;
}



// FUNCTION 14653cfa6 FUN_14653cfa6 body=35 status=ok
// SIG undefined FUN_14653cfa6(void)

void FUN_14653cfa6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3b2e60;
  return;
}



// FUNCTION 14653cfc9 FUN_14653cfc9 body=49 status=ok
// SIG undefined FUN_14653cfc9(void)

longlong FUN_14653cfc9(void)

{
  if (DAT_14cb6ea70 == 0) {
    FUN_14086a14e(&DAT_14cb6ea70,&PTR_FUN_14b3b75c0);
  }
  return DAT_14cb6ea70;
}



// FUNCTION 14653cffa FUN_14653cffa body=49 status=ok
// SIG undefined FUN_14653cffa(void)

longlong FUN_14653cffa(void)

{
  if (DAT_14cb6e9f8 == 0) {
    FUN_14086a14e(&DAT_14cb6e9f8,&PTR_FUN_14b3b6938);
  }
  return DAT_14cb6e9f8;
}



// FUNCTION 14653d02b FUN_14653d02b body=49 status=ok
// SIG undefined FUN_14653d02b(void)

longlong FUN_14653d02b(void)

{
  if (DAT_14cb6ead0 == 0) {
    FUN_14086a14e(&DAT_14cb6ead0,&PTR_FUN_14b3b7c68);
  }
  return DAT_14cb6ead0;
}



// FUNCTION 14653d05c FUN_14653d05c body=48 status=ok
// SIG undefined FUN_14653d05c(void)

void FUN_14653d05c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000006f0;
  *puVar1 = &PTR_FUN_14b3b8a60;
  return;
}



// FUNCTION 14653d08c FUN_14653d08c body=47 status=ok
// SIG undefined FUN_14653d08c(void)

longlong FUN_14653d08c(void)

{
  if (DAT_14cb6e9e0 == 0) {
    FUN_1409ce572(&DAT_14cb6e9e0,&PTR_FUN_14b3b6480);
  }
  return DAT_14cb6e9e0;
}



// FUNCTION 14653d0bc FUN_14653d0bc body=55 status=ok
// SIG undefined FUN_14653d0bc(void)

void FUN_14653d0bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea00 = FUN_140002ddd(FUN_14653cffa,uVar1,L"ProjectileDrunkenMovementData");
  }
  return;
}



// FUNCTION 14653d0f4 FUN_14653d0f4 body=48 status=ok
// SIG undefined FUN_14653d0f4(void)

void FUN_14653d0f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b3b8c70;
  return;
}



// FUNCTION 14653d124 FUN_14653d124 body=55 status=ok
// SIG undefined FUN_14653d124(void)

void FUN_14653d124(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea18 = FUN_140002ddd(FUN_14653d15b,uVar1,L"ProjectileDrunkenMovementState");
  }
  return;
}



// FUNCTION 14653d15b FUN_14653d15b body=49 status=ok
// SIG undefined FUN_14653d15b(void)

longlong FUN_14653d15b(void)

{
  if (DAT_14cb6ea10 == 0) {
    FUN_14086a14e(&DAT_14cb6ea10,&PTR_FUN_14b3b6a18);
  }
  return DAT_14cb6ea10;
}



// FUNCTION 14653d18c FUN_14653d18c body=48 status=ok
// SIG undefined FUN_14653d18c(void)

void FUN_14653d18c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14b3b8dd0;
  return;
}



// FUNCTION 14653d1bc FUN_14653d1bc body=47 status=ok
// SIG undefined FUN_14653d1bc(void)

longlong FUN_14653d1bc(void)

{
  if (DAT_14cb6ea28 == 0) {
    FUN_1409ce572(&DAT_14cb6ea28,&PTR_FUN_14b3b6b20);
  }
  return DAT_14cb6ea28;
}



// FUNCTION 14653d1eb FUN_14653d1eb body=47 status=ok
// SIG undefined FUN_14653d1eb(void)

longlong FUN_14653d1eb(void)

{
  if (DAT_14cb6ea40 == 0) {
    FUN_1409ce572(&DAT_14cb6ea40,&PTR_FUN_14b3b6ba0);
  }
  return DAT_14cb6ea40;
}



// FUNCTION 14653d21a FUN_14653d21a body=47 status=ok
// SIG undefined FUN_14653d21a(void)

longlong FUN_14653d21a(void)

{
  if (DAT_14cb6ea58 == 0) {
    FUN_1409ce572(&DAT_14cb6ea58,&PTR_FUN_14b3b6c10);
  }
  return DAT_14cb6ea58;
}



// FUNCTION 14653d24a FUN_14653d24a body=55 status=ok
// SIG undefined FUN_14653d24a(void)

void FUN_14653d24a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea78 = FUN_140002ddd(FUN_14653cfc9,uVar1,L"ProjectileHomingData");
  }
  return;
}



// FUNCTION 14653d282 FUN_14653d282 body=48 status=ok
// SIG undefined FUN_14653d282(void)

void FUN_14653d282(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b3b9120;
  return;
}



// FUNCTION 14653d2b2 FUN_14653d2b2 body=55 status=ok
// SIG undefined FUN_14653d2b2(void)

void FUN_14653d2b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea90 = FUN_140002ddd(FUN_14653d2e9,uVar1,L"ProjectileHomingState");
  }
  return;
}



// FUNCTION 14653d2e9 FUN_14653d2e9 body=49 status=ok
// SIG undefined FUN_14653d2e9(void)

longlong FUN_14653d2e9(void)

{
  if (DAT_14cb6ea88 == 0) {
    FUN_14086a14e(&DAT_14cb6ea88,&PTR_FUN_14b3b7688);
  }
  return DAT_14cb6ea88;
}



// FUNCTION 14653d31a FUN_14653d31a body=48 status=ok
// SIG undefined FUN_14653d31a(void)

void FUN_14653d31a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b3b9280;
  return;
}



// FUNCTION 14653d34a FUN_14653d34a body=55 status=ok
// SIG undefined FUN_14653d34a(void)

void FUN_14653d34a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eaa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eaa8 = FUN_140002ddd(FUN_14653d381,uVar1,L"HomingTargetedActorInfo");
  }
  return;
}



// FUNCTION 14653d381 FUN_14653d381 body=47 status=ok
// SIG undefined FUN_14653d381(void)

longlong FUN_14653d381(void)

{
  if (DAT_14cb6eaa0 == 0) {
    FUN_14086a14e(&DAT_14cb6eaa0,&PTR_FUN_14b3b77a8);
  }
  return DAT_14cb6eaa0;
}



// FUNCTION 14653d3b0 FUN_14653d3b0 body=48 status=ok
// SIG undefined FUN_14653d3b0(void)

void FUN_14653d3b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3b93e0;
  return;
}



// FUNCTION 14653d3e0 FUN_14653d3e0 body=35 status=ok
// SIG undefined FUN_14653d3e0(void)

void FUN_14653d3e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3b7940;
  return;
}



// FUNCTION 14653d409 FUN_14653d409 body=47 status=ok
// SIG undefined FUN_14653d409(void)

longlong FUN_14653d409(void)

{
  if (DAT_14cb6eac0 == 0) {
    FUN_14073dd9a(&DAT_14cb6eac0,&PTR_LAB_14b3b78f8);
  }
  return DAT_14cb6eac0;
}



// FUNCTION 14653d438 FUN_14653d438 body=55 status=ok
// SIG undefined FUN_14653d438(void)

void FUN_14653d438(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ead8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ead8 = FUN_140002ddd(FUN_14653d02b,uVar1,L"ProjectileMovementModifierData");
  }
  return;
}



// FUNCTION 14653d470 FUN_14653d470 body=48 status=ok
// SIG undefined FUN_14653d470(void)

void FUN_14653d470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3b9550;
  return;
}



// FUNCTION 14653d4a0 FUN_14653d4a0 body=55 status=ok
// SIG undefined FUN_14653d4a0(void)

void FUN_14653d4a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eaf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eaf0 = FUN_140002ddd(FUN_14653d4d7,uVar1,L"ProjectileMovementModifierState");
  }
  return;
}



// FUNCTION 14653d4d7 FUN_14653d4d7 body=49 status=ok
// SIG undefined FUN_14653d4d7(void)

longlong FUN_14653d4d7(void)

{
  if (DAT_14cb6eae8 == 0) {
    FUN_14086a14e(&DAT_14cb6eae8,&PTR_FUN_14b3b7d48);
  }
  return DAT_14cb6eae8;
}



// FUNCTION 14653d508 FUN_14653d508 body=48 status=ok
// SIG undefined FUN_14653d508(void)

void FUN_14653d508(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b3b9780;
  return;
}



// FUNCTION 14653d538 FUN_14653d538 body=40 status=ok
// SIG undefined FUN_14653d538(void)

undefined8 FUN_14653d538(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d560 FUN_14653d560 body=40 status=ok
// SIG undefined FUN_14653d560(void)

undefined8 FUN_14653d560(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d588 FUN_14653d588 body=29 status=ok
// SIG undefined FUN_14653d588(void)

undefined8 FUN_14653d588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d5a6 FUN_14653d5a6 body=29 status=ok
// SIG undefined FUN_14653d5a6(void)

undefined8 FUN_14653d5a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d5c4 FUN_14653d5c4 body=29 status=ok
// SIG undefined FUN_14653d5c4(void)

undefined8 FUN_14653d5c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d5e2 FUN_14653d5e2 body=29 status=ok
// SIG undefined FUN_14653d5e2(void)

undefined8 FUN_14653d5e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d600 FUN_14653d600 body=29 status=ok
// SIG undefined FUN_14653d600(void)

undefined8 FUN_14653d600(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d61e FUN_14653d61e body=29 status=ok
// SIG undefined FUN_14653d61e(void)

undefined8 FUN_14653d61e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d63c FUN_14653d63c body=29 status=ok
// SIG undefined FUN_14653d63c(void)

undefined8 FUN_14653d63c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d65a FUN_14653d65a body=29 status=ok
// SIG undefined FUN_14653d65a(void)

undefined8 FUN_14653d65a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d678 FUN_14653d678 body=29 status=ok
// SIG undefined FUN_14653d678(void)

undefined8 FUN_14653d678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d696 FUN_14653d696 body=29 status=ok
// SIG undefined FUN_14653d696(void)

undefined8 FUN_14653d696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d6b4 FUN_14653d6b4 body=29 status=ok
// SIG undefined FUN_14653d6b4(void)

undefined8 FUN_14653d6b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d6d2 FUN_14653d6d2 body=29 status=ok
// SIG undefined FUN_14653d6d2(void)

undefined8 FUN_14653d6d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d6f0 FUN_14653d6f0 body=29 status=ok
// SIG undefined FUN_14653d6f0(void)

undefined8 FUN_14653d6f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d70e FUN_14653d70e body=29 status=ok
// SIG undefined FUN_14653d70e(void)

undefined8 FUN_14653d70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d72c FUN_14653d72c body=29 status=ok
// SIG undefined FUN_14653d72c(void)

undefined8 FUN_14653d72c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d74a FUN_14653d74a body=29 status=ok
// SIG undefined FUN_14653d74a(void)

undefined8 FUN_14653d74a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653d768 FUN_14653d768 body=55 status=ok
// SIG undefined FUN_14653d768(void)

void FUN_14653d768(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb08 = FUN_140002ddd(FUN_14653d79f,uVar1,L"ProjectileMovementModifierData_ViewGuided");
  }
  return;
}



// FUNCTION 14653d79f FUN_14653d79f body=47 status=ok
// SIG undefined FUN_14653d79f(void)

longlong FUN_14653d79f(void)

{
  if (DAT_14cb6eb00 == 0) {
    FUN_14086a14e(&DAT_14cb6eb00,&PTR_FUN_14b3b9b78);
  }
  return DAT_14cb6eb00;
}



// FUNCTION 14653d7ce FUN_14653d7ce body=48 status=ok
// SIG undefined FUN_14653d7ce(void)

void FUN_14653d7ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b3c0220;
  return;
}



// FUNCTION 14653d7fe FUN_14653d7fe body=55 status=ok
// SIG undefined FUN_14653d7fe(void)

void FUN_14653d7fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb20 = FUN_140002ddd(FUN_14653d835,uVar1,L"ProjectileMovementModifierState_ViewGuided")
    ;
  }
  return;
}



// FUNCTION 14653d835 FUN_14653d835 body=47 status=ok
// SIG undefined FUN_14653d835(void)

longlong FUN_14653d835(void)

{
  if (DAT_14cb6eb18 == 0) {
    FUN_14086a14e(&DAT_14cb6eb18,&PTR_FUN_14b3b9c38);
  }
  return DAT_14cb6eb18;
}



// FUNCTION 14653d864 FUN_14653d864 body=48 status=ok
// SIG undefined FUN_14653d864(void)

void FUN_14653d864(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b3c03a0;
  return;
}



// FUNCTION 14653d894 FUN_14653d894 body=47 status=ok
// SIG undefined FUN_14653d894(void)

longlong FUN_14653d894(void)

{
  if (DAT_14cb6eb38 == 0) {
    FUN_1409ce572(&DAT_14cb6eb38,&PTR_FUN_14b3b9d00);
  }
  return DAT_14cb6eb38;
}



// FUNCTION 14653d8c3 FUN_14653d8c3 body=47 status=ok
// SIG undefined FUN_14653d8c3(void)

longlong FUN_14653d8c3(void)

{
  if (DAT_14cb6eb50 == 0) {
    FUN_1409ce572(&DAT_14cb6eb50,&PTR_FUN_14b3b9d90);
  }
  return DAT_14cb6eb50;
}



// FUNCTION 14653d8f2 FUN_14653d8f2 body=55 status=ok
// SIG undefined FUN_14653d8f2(void)

void FUN_14653d8f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb70 = FUN_140002ddd(FUN_14185fe1f,uVar1,L"ProjectileOwnerOptions");
  }
  return;
}



// FUNCTION 14653d92a FUN_14653d92a body=48 status=ok
// SIG undefined FUN_14653d92a(void)

void FUN_14653d92a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b3c0680;
  return;
}



// FUNCTION 14653d95a FUN_14653d95a body=55 status=ok
// SIG undefined FUN_14653d95a(void)

void FUN_14653d95a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb88 = FUN_140002ddd(FUN_14185fe50,uVar1,L"ProjectileDamageOverrideData");
  }
  return;
}



// FUNCTION 14653d992 FUN_14653d992 body=48 status=ok
// SIG undefined FUN_14653d992(void)

void FUN_14653d992(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14b3c07e0;
  return;
}



// FUNCTION 14653d9c2 FUN_14653d9c2 body=47 status=ok
// SIG undefined FUN_14653d9c2(void)

longlong FUN_14653d9c2(void)

{
  if (DAT_14cb6eb98 == 0) {
    FUN_14000fc22(&DAT_14cb6eb98,&PTR_FUN_14b3ba360);
  }
  return DAT_14cb6eb98;
}



// FUNCTION 14653d9f1 FUN_14653d9f1 body=47 status=ok
// SIG undefined FUN_14653d9f1(void)

longlong FUN_14653d9f1(void)

{
  if (DAT_14cb6eba0 == 0) {
    FUN_14000fc22(&DAT_14cb6eba0,&PTR_FUN_14b3ba4d0);
  }
  return DAT_14cb6eba0;
}



// FUNCTION 14653da20 FUN_14653da20 body=47 status=ok
// SIG undefined FUN_14653da20(void)

longlong FUN_14653da20(void)

{
  if (DAT_14cb6eba8 == 0) {
    FUN_14000fc22(&DAT_14cb6eba8,&PTR_FUN_14b3ba728);
  }
  return DAT_14cb6eba8;
}



// FUNCTION 14653da4f FUN_14653da4f body=47 status=ok
// SIG undefined FUN_14653da4f(void)

longlong FUN_14653da4f(void)

{
  if (DAT_14cb6ebb0 == 0) {
    FUN_14000fc22(&DAT_14cb6ebb0,&PTR_FUN_14b3ba9a8);
  }
  return DAT_14cb6ebb0;
}



// FUNCTION 14653da7e FUN_14653da7e body=47 status=ok
// SIG undefined FUN_14653da7e(void)

longlong FUN_14653da7e(void)

{
  if (DAT_14cb6ebb8 == 0) {
    FUN_14000fc22(&DAT_14cb6ebb8,&PTR_FUN_14b3baaa0);
  }
  return DAT_14cb6ebb8;
}



// FUNCTION 14653daad FUN_14653daad body=47 status=ok
// SIG undefined FUN_14653daad(void)

longlong FUN_14653daad(void)

{
  if (DAT_14cb6ebc0 == 0) {
    FUN_14000fc22(&DAT_14cb6ebc0,&PTR_FUN_14b3bae28);
  }
  return DAT_14cb6ebc0;
}



// FUNCTION 14653dadc FUN_14653dadc body=47 status=ok
// SIG undefined FUN_14653dadc(void)

longlong FUN_14653dadc(void)

{
  if (DAT_14cb6ebc8 == 0) {
    FUN_14000fc22(&DAT_14cb6ebc8,&PTR_FUN_14b3bb0b8);
  }
  return DAT_14cb6ebc8;
}



// FUNCTION 14653db0b FUN_14653db0b body=47 status=ok
// SIG undefined FUN_14653db0b(void)

longlong FUN_14653db0b(void)

{
  if (DAT_14cb6ebd0 == 0) {
    FUN_14000fc22(&DAT_14cb6ebd0,&PTR_FUN_14b3bb478);
  }
  return DAT_14cb6ebd0;
}



// FUNCTION 14653db3a FUN_14653db3a body=47 status=ok
// SIG undefined FUN_14653db3a(void)

longlong FUN_14653db3a(void)

{
  if (DAT_14cb6ebd8 == 0) {
    FUN_14000fc22(&DAT_14cb6ebd8,&PTR_FUN_14b3bb758);
  }
  return DAT_14cb6ebd8;
}



// FUNCTION 14653db69 FUN_14653db69 body=47 status=ok
// SIG undefined FUN_14653db69(void)

longlong FUN_14653db69(void)

{
  if (DAT_14cb6ebe0 == 0) {
    FUN_14000fc22(&DAT_14cb6ebe0,&PTR_FUN_14b3bbb68);
  }
  return DAT_14cb6ebe0;
}



// FUNCTION 14653db98 FUN_14653db98 body=47 status=ok
// SIG undefined FUN_14653db98(void)

longlong FUN_14653db98(void)

{
  if (DAT_14cb6ebe8 == 0) {
    FUN_14000fc22(&DAT_14cb6ebe8,&PTR_FUN_14b3bbea8);
  }
  return DAT_14cb6ebe8;
}



// FUNCTION 14653dbc7 FUN_14653dbc7 body=47 status=ok
// SIG undefined FUN_14653dbc7(void)

longlong FUN_14653dbc7(void)

{
  if (DAT_14cb6ebf0 == 0) {
    FUN_14000fc22(&DAT_14cb6ebf0,&PTR_FUN_14b3bc268);
  }
  return DAT_14cb6ebf0;
}



// FUNCTION 14653dbf6 FUN_14653dbf6 body=47 status=ok
// SIG undefined FUN_14653dbf6(void)

longlong FUN_14653dbf6(void)

{
  if (DAT_14cb6ebf8 == 0) {
    FUN_14000fc22(&DAT_14cb6ebf8,&PTR_FUN_14b3bc550);
  }
  return DAT_14cb6ebf8;
}



// FUNCTION 14653dc25 FUN_14653dc25 body=47 status=ok
// SIG undefined FUN_14653dc25(void)

longlong FUN_14653dc25(void)

{
  if (DAT_14cb6ec00 == 0) {
    FUN_14000fc22(&DAT_14cb6ec00,&PTR_FUN_14b3bc910);
  }
  return DAT_14cb6ec00;
}



// FUNCTION 14653dc54 FUN_14653dc54 body=47 status=ok
// SIG undefined FUN_14653dc54(void)

longlong FUN_14653dc54(void)

{
  if (DAT_14cb6ec08 == 0) {
    FUN_14000fc22(&DAT_14cb6ec08,&PTR_FUN_14b3bcc00);
  }
  return DAT_14cb6ec08;
}



// FUNCTION 14653dc83 FUN_14653dc83 body=47 status=ok
// SIG undefined FUN_14653dc83(void)

longlong FUN_14653dc83(void)

{
  if (DAT_14cb6ec10 == 0) {
    FUN_14000fc22(&DAT_14cb6ec10,&PTR_FUN_14b3bd058);
  }
  return DAT_14cb6ec10;
}



// FUNCTION 14653dcb2 FUN_14653dcb2 body=47 status=ok
// SIG undefined FUN_14653dcb2(void)

longlong FUN_14653dcb2(void)

{
  if (DAT_14cb6ec18 == 0) {
    FUN_14000fc22(&DAT_14cb6ec18,&PTR_FUN_14b3bd2a8);
  }
  return DAT_14cb6ec18;
}



// FUNCTION 14653dce2 FUN_14653dce2 body=34 status=ok
// SIG undefined FUN_14653dce2(void)

void FUN_14653dce2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a856e2();
  FUN_14069c8d6(uVar1,&PTR_s_GetProjectileDistanceOverTime_14b3bd2f0,0x11);
  return;
}



// FUNCTION 14653dd04 FUN_14653dd04 body=35 status=ok
// SIG undefined FUN_14653dd04(void)

void FUN_14653dd04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3bd5a0;
  return;
}



// FUNCTION 14653dd27 FUN_14653dd27 body=49 status=ok
// SIG undefined FUN_14653dd27(void)

longlong FUN_14653dd27(void)

{
  if (DAT_14cb6ec38 == 0) {
    FUN_1409ce572(&DAT_14cb6ec38,&PTR_FUN_14b3bd8c0);
  }
  return DAT_14cb6ec38;
}



// FUNCTION 14653dd58 FUN_14653dd58 body=55 status=ok
// SIG undefined FUN_14653dd58(void)

void FUN_14653dd58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ec58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ec58 = FUN_140002ddd(FUN_14653dd8f,uVar1,L"ProjectileAttachHostilityFilterData");
  }
  return;
}



// FUNCTION 14653dd8f FUN_14653dd8f body=49 status=ok
// SIG undefined FUN_14653dd8f(void)

longlong FUN_14653dd8f(void)

{
  if (DAT_14cb6ec50 == 0) {
    FUN_14086a14e(&DAT_14cb6ec50,&PTR_FUN_14b3bd9f8);
  }
  return DAT_14cb6ec50;
}



// FUNCTION 14653ddc0 FUN_14653ddc0 body=48 status=ok
// SIG undefined FUN_14653ddc0(void)

void FUN_14653ddc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14b3c09f0;
  return;
}



// FUNCTION 14653ddf0 FUN_14653ddf0 body=55 status=ok
// SIG undefined FUN_14653ddf0(void)

void FUN_14653ddf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ec70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ec70 = FUN_140002ddd(FUN_14653de27,uVar1,L"ProjectileAttachDamageableFilterData");
  }
  return;
}



// FUNCTION 14653de27 FUN_14653de27 body=47 status=ok
// SIG undefined FUN_14653de27(void)

longlong FUN_14653de27(void)

{
  if (DAT_14cb6ec68 == 0) {
    FUN_14086a14e(&DAT_14cb6ec68,&PTR_FUN_14b3bdaf8);
  }
  return DAT_14cb6ec68;
}



// FUNCTION 14653de56 FUN_14653de56 body=48 status=ok
// SIG undefined FUN_14653de56(void)

void FUN_14653de56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14b3c0b50;
  return;
}



// FUNCTION 14653de86 FUN_14653de86 body=55 status=ok
// SIG undefined FUN_14653de86(void)

void FUN_14653de86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ec88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ec88 = FUN_140002ddd(FUN_14653debd,uVar1,L"ProjectileAttachFilterData");
  }
  return;
}



// FUNCTION 14653debd FUN_14653debd body=49 status=ok
// SIG undefined FUN_14653debd(void)

longlong FUN_14653debd(void)

{
  if (DAT_14cb6ec80 == 0) {
    FUN_14086a14e(&DAT_14cb6ec80,&PTR_FUN_14b3bdd28);
  }
  return DAT_14cb6ec80;
}



// FUNCTION 14653deee FUN_14653deee body=48 status=ok
// SIG undefined FUN_14653deee(void)

void FUN_14653deee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000008;
  *puVar1 = &PTR_FUN_14b3c0cb0;
  return;
}



// FUNCTION 14653df1e FUN_14653df1e body=47 status=ok
// SIG undefined FUN_14653df1e(void)

longlong FUN_14653df1e(void)

{
  if (DAT_14cb6ec98 == 0) {
    FUN_1409ce572(&DAT_14cb6ec98,&PTR_FUN_14b3bde60);
  }
  return DAT_14cb6ec98;
}



// FUNCTION 14653df52 FUN_14653df52 body=47 status=ok
// SIG undefined FUN_14653df52(void)

longlong FUN_14653df52(void)

{
  if (DAT_14cb6ecb0 == 0) {
    FUN_14000fc22(&DAT_14cb6ecb0,&PTR_FUN_14b3bdf08);
  }
  return DAT_14cb6ecb0;
}



// FUNCTION 14653df81 FUN_14653df81 body=49 status=ok
// SIG undefined FUN_14653df81(void)

longlong FUN_14653df81(void)

{
  if (DAT_14cb6ed08 == 0) {
    FUN_14073dd9a(&DAT_14cb6ed08,&PTR_LAB_14b3bf1a0);
  }
  return DAT_14cb6ed08;
}



// FUNCTION 14653dfb2 FUN_14653dfb2 body=47 status=ok
// SIG undefined FUN_14653dfb2(void)

longlong FUN_14653dfb2(void)

{
  if (DAT_14cb6ecb8 == 0) {
    FUN_14000fc22(&DAT_14cb6ecb8,&PTR_FUN_14b3be060);
  }
  return DAT_14cb6ecb8;
}



// FUNCTION 14653dfe1 FUN_14653dfe1 body=47 status=ok
// SIG undefined FUN_14653dfe1(void)

longlong FUN_14653dfe1(void)

{
  if (DAT_14cb6ecc0 == 0) {
    FUN_14000fc22(&DAT_14cb6ecc0,&PTR_FUN_14b3be148);
  }
  return DAT_14cb6ecc0;
}



// FUNCTION 14653e010 FUN_14653e010 body=47 status=ok
// SIG undefined FUN_14653e010(void)

longlong FUN_14653e010(void)

{
  if (DAT_14cb6ecc8 == 0) {
    FUN_14000fc22(&DAT_14cb6ecc8,&PTR_FUN_14b3be1f8);
  }
  return DAT_14cb6ecc8;
}



// FUNCTION 14653e03f FUN_14653e03f body=47 status=ok
// SIG undefined FUN_14653e03f(void)

longlong FUN_14653e03f(void)

{
  if (DAT_14cb6ecd0 == 0) {
    FUN_14000fc22(&DAT_14cb6ecd0,&PTR_FUN_14b3be290);
  }
  return DAT_14cb6ecd0;
}



// FUNCTION 14653e06e FUN_14653e06e body=47 status=ok
// SIG undefined FUN_14653e06e(void)

longlong FUN_14653e06e(void)

{
  if (DAT_14cb6ecd8 == 0) {
    FUN_14000fc22(&DAT_14cb6ecd8,&PTR_FUN_14b3be378);
  }
  return DAT_14cb6ecd8;
}



// FUNCTION 14653e09d FUN_14653e09d body=47 status=ok
// SIG undefined FUN_14653e09d(void)

longlong FUN_14653e09d(void)

{
  if (DAT_14cb6ece0 == 0) {
    FUN_14000fc22(&DAT_14cb6ece0,&PTR_FUN_14b3be3d0);
  }
  return DAT_14cb6ece0;
}



// FUNCTION 14653e0cc FUN_14653e0cc body=47 status=ok
// SIG undefined FUN_14653e0cc(void)

longlong FUN_14653e0cc(void)

{
  if (DAT_14cb6ece8 == 0) {
    FUN_14000fc22(&DAT_14cb6ece8,&PTR_FUN_14b3be420);
  }
  return DAT_14cb6ece8;
}



// FUNCTION 14653e0fb FUN_14653e0fb body=47 status=ok
// SIG undefined FUN_14653e0fb(void)

longlong FUN_14653e0fb(void)

{
  if (DAT_14cb6ecf0 == 0) {
    FUN_14000fc22(&DAT_14cb6ecf0,&PTR_FUN_14b3be460);
  }
  return DAT_14cb6ecf0;
}



// FUNCTION 14653e12a FUN_14653e12a body=47 status=ok
// SIG undefined FUN_14653e12a(void)

longlong FUN_14653e12a(void)

{
  if (DAT_14cb6ecf8 == 0) {
    FUN_14000fc22(&DAT_14cb6ecf8,&PTR_FUN_14b3be8d8);
  }
  return DAT_14cb6ecf8;
}



// FUNCTION 14653e15a FUN_14653e15a body=34 status=ok
// SIG undefined FUN_14653e15a(void)

void FUN_14653e15a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141048d22();
  FUN_14069c8d6(uVar1,&PTR_s_BeginInteraction_14b3be920,9);
  return;
}



// FUNCTION 14653e186 FUN_14653e186 body=651 status=ok
// SIG undefined FUN_14653e186(void)

void FUN_14653e186(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed20) {
    FUN_144b3d300(&DAT_14cb6ed20);
    if (DAT_14cb6ed20 == -1) {
      FUN_1446f470e(&DAT_14cb6ed18,L"PuddleState",1);
      _Init_thread_footer(&DAT_14cb6ed20);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed2c) {
    FUN_144b3d300(&DAT_14cb6ed2c);
    if (DAT_14cb6ed2c == -1) {
      FUN_1446f470e(&DAT_14cb6ed24,L"LifeSpan",1);
      _Init_thread_footer(&DAT_14cb6ed2c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed38) {
    FUN_144b3d300(&DAT_14cb6ed38);
    if (DAT_14cb6ed38 == -1) {
      FUN_1446f470e(&DAT_14cb6ed30,L"FullRadius",1);
      _Init_thread_footer(&DAT_14cb6ed38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed44) {
    FUN_144b3d300(&DAT_14cb6ed44);
    if (DAT_14cb6ed44 == -1) {
      FUN_1446f470e(&DAT_14cb6ed3c,L"TraceDistanceOverride",1);
      _Init_thread_footer(&DAT_14cb6ed44);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed50) {
    FUN_144b3d300(&DAT_14cb6ed50);
    if (DAT_14cb6ed50 == -1) {
      FUN_1446f470e(&DAT_14cb6ed48,L"RepCleanUpTransitionTime",1);
      _Init_thread_footer(&DAT_14cb6ed50);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed5c) {
    FUN_144b3d300(&DAT_14cb6ed5c);
    if (DAT_14cb6ed5c == -1) {
      FUN_1446f470e(&DAT_14cb6ed54,L"DefHandle",1);
      _Init_thread_footer(&DAT_14cb6ed5c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6ed68) {
    FUN_144b3d300(&DAT_14cb6ed68);
    if (DAT_14cb6ed68 == -1) {
      FUN_1446f470e(&DAT_14cb6ed60,L"RepHazardInteractionState",1);
      _Init_thread_footer(&DAT_14cb6ed68);
      return;
    }
  }
  return;
}



// FUNCTION 14653e412 FUN_14653e412 body=55 status=ok
// SIG undefined FUN_14653e412(void)

void FUN_14653e412(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ed78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ed78 = FUN_140002ddd(FUN_14653e449,uVar1,L"PuddleHazardTransitionConfigurationData");
  }
  return;
}



// FUNCTION 14653e449 FUN_14653e449 body=47 status=ok
// SIG undefined FUN_14653e449(void)

longlong FUN_14653e449(void)

{
  if (DAT_14cb6ed70 == 0) {
    FUN_14086a14e(&DAT_14cb6ed70,&PTR_FUN_14b3bf488);
  }
  return DAT_14cb6ed70;
}



// FUNCTION 14653e478 FUN_14653e478 body=48 status=ok
// SIG undefined FUN_14653e478(void)

void FUN_14653e478(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b3c0ec0;
  return;
}



// FUNCTION 14653e4a8 FUN_14653e4a8 body=47 status=ok
// SIG undefined FUN_14653e4a8(void)

longlong FUN_14653e4a8(void)

{
  if (DAT_14cb6ed98 == 0) {
    FUN_14073dd9a(&DAT_14cb6ed98,&PTR_LAB_14b3bfee0);
  }
  return DAT_14cb6ed98;
}



// FUNCTION 14653e4d7 FUN_14653e4d7 body=47 status=ok
// SIG undefined FUN_14653e4d7(void)

longlong FUN_14653e4d7(void)

{
  if (DAT_14cb6ed88 == 0) {
    FUN_14000fc22(&DAT_14cb6ed88,&PTR_FUN_14b3bf558);
  }
  return DAT_14cb6ed88;
}



// FUNCTION 14653e506 FUN_14653e506 body=34 status=ok
// SIG undefined FUN_14653e506(void)

void FUN_14653e506(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140faa3da();
  FUN_14069c8d6(uVar1,&PTR_s_GetParticleEmitterNames_14b3bf5a0,1);
  return;
}



// FUNCTION 14653e52e FUN_14653e52e body=40 status=ok
// SIG undefined FUN_14653e52e(void)

undefined8 FUN_14653e52e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14653e556 FUN_14653e556 body=34 status=ok
// SIG undefined FUN_14653e556(void)

undefined8 FUN_14653e556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e578 FUN_14653e578 body=34 status=ok
// SIG undefined FUN_14653e578(void)

undefined8 FUN_14653e578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e59a FUN_14653e59a body=34 status=ok
// SIG undefined FUN_14653e59a(void)

undefined8 FUN_14653e59a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e5bc FUN_14653e5bc body=34 status=ok
// SIG undefined FUN_14653e5bc(void)

undefined8 FUN_14653e5bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e5de FUN_14653e5de body=34 status=ok
// SIG undefined FUN_14653e5de(void)

undefined8 FUN_14653e5de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e600 FUN_14653e600 body=34 status=ok
// SIG undefined FUN_14653e600(void)

undefined8 FUN_14653e600(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e622 FUN_14653e622 body=34 status=ok
// SIG undefined FUN_14653e622(void)

undefined8 FUN_14653e622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e644 FUN_14653e644 body=34 status=ok
// SIG undefined FUN_14653e644(void)

undefined8 FUN_14653e644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14653e666 FUN_14653e666 body=47 status=ok
// SIG undefined FUN_14653e666(void)

longlong FUN_14653e666(void)

{
  if (DAT_14cb6eda8 == 0) {
    FUN_1409ce572(&DAT_14cb6eda8,&PTR_FUN_14b3c1880);
  }
  return DAT_14cb6eda8;
}



// FUNCTION 14653e695 FUN_14653e695 body=47 status=ok
// SIG undefined FUN_14653e695(void)

longlong FUN_14653e695(void)

{
  if (DAT_14cb6edc0 == 0) {
    FUN_1409ce572(&DAT_14cb6edc0,&PTR_FUN_14b3c1900);
  }
  return DAT_14cb6edc0;
}



// FUNCTION 14653e6c4 FUN_14653e6c4 body=47 status=ok
// SIG undefined FUN_14653e6c4(void)

longlong FUN_14653e6c4(void)

{
  if (DAT_14cb6edd8 == 0) {
    FUN_14086a14e(&DAT_14cb6edd8,&PTR_FUN_14b3c20f8);
  }
  return DAT_14cb6edd8;
}



// FUNCTION 14653e6f4 FUN_14653e6f4 body=48 status=ok
// SIG undefined FUN_14653e6f4(void)

void FUN_14653e6f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b3c8d40;
  return;
}



// FUNCTION 14653e724 FUN_14653e724 body=72 status=ok
// SIG undefined FUN_14653e724(void)

void FUN_14653e724(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3c2290;
  puVar1[5] = &PTR_FUN_14b3c2530;
  puVar1[6] = &PTR_FUN_14b3c2570;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 14653e777 FUN_14653e777 body=47 status=ok
// SIG undefined FUN_14653e777(void)

longlong FUN_14653e777(void)

{
  if (DAT_14cb6edf8 == 0) {
    FUN_14073dd9a(&DAT_14cb6edf8,&PTR_LAB_14b3c2248);
  }
  return DAT_14cb6edf8;
}



// FUNCTION 14653e7a6 FUN_14653e7a6 body=47 status=ok
// SIG undefined FUN_14653e7a6(void)

longlong FUN_14653e7a6(void)

{
  if (DAT_14cb6ee10 == 0) {
    FUN_14086a14e(&DAT_14cb6ee10,&PTR_FUN_14b3c26a0);
  }
  return DAT_14cb6ee10;
}



// FUNCTION 14653e7d6 FUN_14653e7d6 body=48 status=ok
// SIG undefined FUN_14653e7d6(void)

void FUN_14653e7d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b3c8ea0;
  return;
}



// FUNCTION 14653e806 FUN_14653e806 body=47 status=ok
// SIG undefined FUN_14653e806(void)

longlong FUN_14653e806(void)

{
  if (DAT_14cb6ee30 == 0) {
    FUN_14073dd9a(&DAT_14cb6ee30,&PTR_LAB_14b3c2728);
  }
  return DAT_14cb6ee30;
}



// FUNCTION 14653e835 FUN_14653e835 body=49 status=ok
// SIG undefined FUN_14653e835(void)

longlong FUN_14653e835(void)

{
  if (DAT_14cb6ee58 == 0) {
    FUN_14073dd9a(&DAT_14cb6ee58,&PTR_LAB_14b3c2c80);
  }
  return DAT_14cb6ee58;
}



// FUNCTION 14653e866 FUN_14653e866 body=47 status=ok
// SIG undefined FUN_14653e866(void)

longlong FUN_14653e866(void)

{
  if (DAT_14cb6ee40 == 0) {
    FUN_14000fc22(&DAT_14cb6ee40,&PTR_FUN_14b3c2970);
  }
  return DAT_14cb6ee40;
}



// FUNCTION 14653e895 FUN_14653e895 body=47 status=ok
// SIG undefined FUN_14653e895(void)

longlong FUN_14653e895(void)

{
  if (DAT_14cb6ee48 == 0) {
    FUN_14000fc22(&DAT_14cb6ee48,&PTR_FUN_14b3c2ad0);
  }
  return DAT_14cb6ee48;
}



// FUNCTION 14653e8c4 FUN_14653e8c4 body=34 status=ok
// SIG undefined FUN_14653e8c4(void)

void FUN_14653e8c4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401726e6();
  FUN_14069c8d6(uVar1,&PTR_s_OnActorBeginOverlap_14b3c2b10,2);
  return;
}



// FUNCTION 14653e900 FUN_14653e900 body=47 status=ok
// SIG undefined FUN_14653e900(void)

longlong FUN_14653e900(void)

{
  if (DAT_14cb6ee68 == 0) {
    FUN_14086a14e(&DAT_14cb6ee68,&PTR_FUN_14b3c2d48);
  }
  return DAT_14cb6ee68;
}



// FUNCTION 14653e930 FUN_14653e930 body=48 status=ok
// SIG undefined FUN_14653e930(void)

void FUN_14653e930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b3c9000;
  return;
}



// FUNCTION 14653e96b FUN_14653e96b body=47 status=ok
// SIG undefined FUN_14653e96b(void)

longlong FUN_14653e96b(void)

{
  if (DAT_14cb6ee88 == 0) {
    FUN_14073dd9a(&DAT_14cb6ee88,&PTR_LAB_14b3c2dd8);
  }
  return DAT_14cb6ee88;
}



// FUNCTION 14653e99a FUN_14653e99a body=55 status=ok
// SIG undefined FUN_14653e99a(void)

void FUN_14653e99a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eea0 = FUN_140002ddd(FUN_14653e9d1,uVar1,L"RadiateDamageAreaBodyState");
  }
  return;
}



// FUNCTION 14653e9d1 FUN_14653e9d1 body=47 status=ok
// SIG undefined FUN_14653e9d1(void)

longlong FUN_14653e9d1(void)

{
  if (DAT_14cb6ee98 == 0) {
    FUN_14086a14e(&DAT_14cb6ee98,&PTR_FUN_14b3c31b8);
  }
  return DAT_14cb6ee98;
}



// FUNCTION 14653ea00 FUN_14653ea00 body=48 status=ok
// SIG undefined FUN_14653ea00(void)

void FUN_14653ea00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b3c9170;
  return;
}



// FUNCTION 14653ea35 FUN_14653ea35 body=47 status=ok
// SIG undefined FUN_14653ea35(void)

longlong FUN_14653ea35(void)

{
  if (DAT_14cb6eeb8 == 0) {
    FUN_14073dd9a(&DAT_14cb6eeb8,&PTR_LAB_14b3c32c8);
  }
  return DAT_14cb6eeb8;
}



// FUNCTION 14653ea64 FUN_14653ea64 body=47 status=ok
// SIG undefined FUN_14653ea64(void)

longlong FUN_14653ea64(void)

{
  if (DAT_14cb6eec8 == 0) {
    FUN_14000fc22(&DAT_14cb6eec8,&PTR_FUN_14b3c3360);
  }
  return DAT_14cb6eec8;
}



// FUNCTION 14653ea93 FUN_14653ea93 body=35 status=ok
// SIG undefined FUN_14653ea93(void)

void FUN_14653ea93(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3c3420;
  return;
}



// FUNCTION 14653eac1 FUN_14653eac1 body=47 status=ok
// SIG undefined FUN_14653eac1(void)

longlong FUN_14653eac1(void)

{
  if (DAT_14cb6eed8 == 0) {
    FUN_14073dd9a(&DAT_14cb6eed8,&PTR_LAB_14b3c33d8);
  }
  return DAT_14cb6eed8;
}



// FUNCTION 14653eaf0 FUN_14653eaf0 body=55 status=ok
// SIG undefined FUN_14653eaf0(void)

void FUN_14653eaf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eef0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eef0 = FUN_140002ddd(FUN_14653eb27,uVar1,L"RefreshActorState");
  }
  return;
}



// FUNCTION 14653eb27 FUN_14653eb27 body=49 status=ok
// SIG undefined FUN_14653eb27(void)

longlong FUN_14653eb27(void)

{
  if (DAT_14cb6eee8 == 0) {
    FUN_14086a14e(&DAT_14cb6eee8,&PTR_FUN_14b3c38a0);
  }
  return DAT_14cb6eee8;
}



// FUNCTION 14653eb58 FUN_14653eb58 body=48 status=ok
// SIG undefined FUN_14653eb58(void)

void FUN_14653eb58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b3c92e0;
  return;
}



// FUNCTION 14653eb8d FUN_14653eb8d body=47 status=ok
// SIG undefined FUN_14653eb8d(void)

longlong FUN_14653eb8d(void)

{
  if (DAT_14cb6ef08 == 0) {
    FUN_14073dd9a(&DAT_14cb6ef08,&PTR_LAB_14b3c3978);
  }
  return DAT_14cb6ef08;
}



// FUNCTION 14653ebbc FUN_14653ebbc body=47 status=ok
// SIG undefined FUN_14653ebbc(void)

longlong FUN_14653ebbc(void)

{
  if (DAT_14cb6ef18 == 0) {
    FUN_14086a14e(&DAT_14cb6ef18,&PTR_FUN_14b3c3db8);
  }
  return DAT_14cb6ef18;
}



// FUNCTION 14653ebec FUN_14653ebec body=48 status=ok
// SIG undefined FUN_14653ebec(void)

void FUN_14653ebec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b3c9440;
  return;
}



// FUNCTION 14653ec1c FUN_14653ec1c body=47 status=ok
// SIG undefined FUN_14653ec1c(void)

longlong FUN_14653ec1c(void)

{
  if (DAT_14cb6ef38 == 0) {
    FUN_14073dd9a(&DAT_14cb6ef38,&PTR_LAB_14b3c3e48);
  }
  return DAT_14cb6ef38;
}



// FUNCTION 14653ec4c FUN_14653ec4c body=55 status=ok
// SIG undefined FUN_14653ec4c(void)

void FUN_14653ec4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef50 = FUN_140002ddd(FUN_14653ec83,uVar1,L"RegisteredMissionGiverType");
  }
  return;
}



// FUNCTION 14653ec83 FUN_14653ec83 body=49 status=ok
// SIG undefined FUN_14653ec83(void)

longlong FUN_14653ec83(void)

{
  if (DAT_14cb6ef48 == 0) {
    FUN_14086a14e(&DAT_14cb6ef48,&PTR_FUN_14b3c4380);
  }
  return DAT_14cb6ef48;
}



// FUNCTION 14653ecb4 FUN_14653ecb4 body=48 status=ok
// SIG undefined FUN_14653ecb4(void)

void FUN_14653ecb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000f8;
  *puVar1 = &PTR_FUN_14b3c95e0;
  return;
}



// FUNCTION 14653ece4 FUN_14653ece4 body=55 status=ok
// SIG undefined FUN_14653ece4(void)

void FUN_14653ece4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef68 = FUN_140002ddd(FUN_14653ed1b,uVar1,L"RegistryJunkModifier");
  }
  return;
}



// FUNCTION 14653ed1b FUN_14653ed1b body=47 status=ok
// SIG undefined FUN_14653ed1b(void)

longlong FUN_14653ed1b(void)

{
  if (DAT_14cb6ef60 == 0) {
    FUN_14086a14e(&DAT_14cb6ef60,&PTR_FUN_14b3c4428);
  }
  return DAT_14cb6ef60;
}



// FUNCTION 14653ed4a FUN_14653ed4a body=48 status=ok
// SIG undefined FUN_14653ed4a(void)

void FUN_14653ed4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b3c9740;
  return;
}



// FUNCTION 14653ed7a FUN_14653ed7a body=47 status=ok
// SIG undefined FUN_14653ed7a(void)

longlong FUN_14653ed7a(void)

{
  if (DAT_14cb6ef78 == 0) {
    FUN_1409ce572(&DAT_14cb6ef78,&PTR_FUN_14b3c4600);
  }
  return DAT_14cb6ef78;
}



// FUNCTION 14653edaa FUN_14653edaa body=55 status=ok
// SIG undefined FUN_14653edaa(void)

void FUN_14653edaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef98 = FUN_140002ddd(FUN_14653ede1,uVar1,L"RelativeDirectionData");
  }
  return;
}



// FUNCTION 14653ede1 FUN_14653ede1 body=49 status=ok
// SIG undefined FUN_14653ede1(void)

longlong FUN_14653ede1(void)

{
  if (DAT_14cb6ef90 == 0) {
    FUN_14086a14e(&DAT_14cb6ef90,&PTR_FUN_14b3c47c8);
  }
  return DAT_14cb6ef90;
}



// FUNCTION 14653ee12 FUN_14653ee12 body=48 status=ok
// SIG undefined FUN_14653ee12(void)

void FUN_14653ee12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b3c9c80;
  return;
}



// FUNCTION 14653ee42 FUN_14653ee42 body=47 status=ok
// SIG undefined FUN_14653ee42(void)

longlong FUN_14653ee42(void)

{
  if (DAT_14cb6efa8 == 0) {
    FUN_1409ce572(&DAT_14cb6efa8,&PTR_FUN_14b3c48a0);
  }
  return DAT_14cb6efa8;
}



// FUNCTION 14653ee72 FUN_14653ee72 body=55 status=ok
// SIG undefined FUN_14653ee72(void)

void FUN_14653ee72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6efc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6efc8 = FUN_140002ddd(FUN_14653eea9,uVar1,L"RelativeFactsSystemActorReference");
  }
  return;
}



// FUNCTION 14653eea9 FUN_14653eea9 body=47 status=ok
// SIG undefined FUN_14653eea9(void)

longlong FUN_14653eea9(void)

{
  if (DAT_14cb6efc0 == 0) {
    FUN_14086a14e(&DAT_14cb6efc0,&PTR_FUN_14b3c4ac0);
  }
  return DAT_14cb6efc0;
}



// FUNCTION 14653eed8 FUN_14653eed8 body=48 status=ok
// SIG undefined FUN_14653eed8(void)

void FUN_14653eed8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000028;
  *puVar1 = &PTR_FUN_14b3c9eb0;
  return;
}



// FUNCTION 14653ef08 FUN_14653ef08 body=55 status=ok
// SIG undefined FUN_14653ef08(void)

void FUN_14653ef08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6efe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6efe0 = FUN_140002ddd(FUN_14653ef3f,uVar1,L"ReplicatedMissionMessage");
  }
  return;
}



// FUNCTION 14653ef3f FUN_14653ef3f body=49 status=ok
// SIG undefined FUN_14653ef3f(void)

longlong FUN_14653ef3f(void)

{
  if (DAT_14cb6efd8 == 0) {
    FUN_14086a14e(&DAT_14cb6efd8,&PTR_FUN_14b3c4b98);
  }
  return DAT_14cb6efd8;
}



// FUNCTION 14653ef70 FUN_14653ef70 body=48 status=ok
// SIG undefined FUN_14653ef70(void)

void FUN_14653ef70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3ca020;
  return;
}



// FUNCTION 14653efa0 FUN_14653efa0 body=47 status=ok
// SIG undefined FUN_14653efa0(void)

longlong FUN_14653efa0(void)

{
  if (DAT_14cb6eff0 == 0) {
    FUN_14086a14e(&DAT_14cb6eff0,&PTR_FUN_14b3c4c50);
  }
  return DAT_14cb6eff0;
}



// FUNCTION 14653efd0 FUN_14653efd0 body=48 status=ok
// SIG undefined FUN_14653efd0(void)

void FUN_14653efd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b3ca1b0;
  return;
}



// FUNCTION 14653f000 FUN_14653f000 body=47 status=ok
// SIG undefined FUN_14653f000(void)

longlong FUN_14653f000(void)

{
  if (DAT_14cb6f008 == 0) {
    FUN_14086a14e(&DAT_14cb6f008,&PTR_FUN_14b3c4cd8);
  }
  return DAT_14cb6f008;
}



// FUNCTION 14653f030 FUN_14653f030 body=48 status=ok
// SIG undefined FUN_14653f030(void)

void FUN_14653f030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b3ca340;
  return;
}



// FUNCTION 14653f060 FUN_14653f060 body=47 status=ok
// SIG undefined FUN_14653f060(void)

longlong FUN_14653f060(void)

{
  if (DAT_14cb6f020 == 0) {
    FUN_14086a14e(&DAT_14cb6f020,&PTR_FUN_14b3c4d68);
  }
  return DAT_14cb6f020;
}



// FUNCTION 14653f090 FUN_14653f090 body=48 status=ok
// SIG undefined FUN_14653f090(void)

void FUN_14653f090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b3ca4d0;
  return;
}



// FUNCTION 14653f0c0 FUN_14653f0c0 body=47 status=ok
// SIG undefined FUN_14653f0c0(void)

longlong FUN_14653f0c0(void)

{
  if (DAT_14cb6f038 == 0) {
    FUN_14086a14e(&DAT_14cb6f038,&PTR_FUN_14b3c4e10);
  }
  return DAT_14cb6f038;
}



// FUNCTION 14653f0f0 FUN_14653f0f0 body=48 status=ok
// SIG undefined FUN_14653f0f0(void)

void FUN_14653f0f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b3ca660;
  return;
}



// FUNCTION 14653f120 FUN_14653f120 body=47 status=ok
// SIG undefined FUN_14653f120(void)

longlong FUN_14653f120(void)

{
  if (DAT_14cb6f050 == 0) {
    FUN_14086a14e(&DAT_14cb6f050,&PTR_FUN_14b3c4ec0);
  }
  return DAT_14cb6f050;
}



// FUNCTION 14653f150 FUN_14653f150 body=48 status=ok
// SIG undefined FUN_14653f150(void)

void FUN_14653f150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b3ca7f0;
  return;
}



// FUNCTION 14653f180 FUN_14653f180 body=47 status=ok
// SIG undefined FUN_14653f180(void)

longlong FUN_14653f180(void)

{
  if (DAT_14cb6f068 == 0) {
    FUN_14086a14e(&DAT_14cb6f068,&PTR_FUN_14b3c4f60);
  }
  return DAT_14cb6f068;
}



// FUNCTION 14653f1b0 FUN_14653f1b0 body=48 status=ok
// SIG undefined FUN_14653f1b0(void)

void FUN_14653f1b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b3ca980;
  return;
}



// FUNCTION 14653f1e0 FUN_14653f1e0 body=47 status=ok
// SIG undefined FUN_14653f1e0(void)

longlong FUN_14653f1e0(void)

{
  if (DAT_14cb6f080 == 0) {
    FUN_14086a14e(&DAT_14cb6f080,&PTR_FUN_14b3c5008);
  }
  return DAT_14cb6f080;
}



// FUNCTION 14653f210 FUN_14653f210 body=48 status=ok
// SIG undefined FUN_14653f210(void)

void FUN_14653f210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b3cab10;
  return;
}



// FUNCTION 14653f240 FUN_14653f240 body=47 status=ok
// SIG undefined FUN_14653f240(void)

longlong FUN_14653f240(void)

{
  if (DAT_14cb6f098 == 0) {
    FUN_14086a14e(&DAT_14cb6f098,&PTR_FUN_14b3c50d0);
  }
  return DAT_14cb6f098;
}



// FUNCTION 14653f270 FUN_14653f270 body=48 status=ok
// SIG undefined FUN_14653f270(void)

void FUN_14653f270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b3caca0;
  return;
}



// FUNCTION 14653f2a0 FUN_14653f2a0 body=47 status=ok
// SIG undefined FUN_14653f2a0(void)

longlong FUN_14653f2a0(void)

{
  if (DAT_14cb6f0b0 == 0) {
    FUN_14086a14e(&DAT_14cb6f0b0,&PTR_FUN_14b3c5188);
  }
  return DAT_14cb6f0b0;
}



// FUNCTION 14653f2d0 FUN_14653f2d0 body=48 status=ok
// SIG undefined FUN_14653f2d0(void)

void FUN_14653f2d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b3cae30;
  return;
}



// FUNCTION 14653f300 FUN_14653f300 body=47 status=ok
// SIG undefined FUN_14653f300(void)

longlong FUN_14653f300(void)

{
  if (DAT_14cb6f0c8 == 0) {
    FUN_14086a14e(&DAT_14cb6f0c8,&PTR_FUN_14b3c5220);
  }
  return DAT_14cb6f0c8;
}



// FUNCTION 14653f330 FUN_14653f330 body=48 status=ok
// SIG undefined FUN_14653f330(void)

void FUN_14653f330(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b3cafc0;
  return;
}


