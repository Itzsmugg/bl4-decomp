// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e1fc20 FUN_145e1fc20 body=123 status=ok
// SIG undefined FUN_145e1fc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e1fc20(void)

{
  _DAT_14ca6d9e0 = L"BASE";
  DAT_14ca6da0a = 4;
  _DAT_14ca6d9e8 = FUN_141092e92();
  _DAT_14ca6d9f0 = DAT_14ca6d988;
  _DAT_14ca6d9f8 = &LAB_14682652b;
  DAT_14ca6d988 = &DAT_14ca6d9e0;
  DAT_14ca6d9dd = DAT_14ca6d9dd + '\x01';
  _DAT_14ca6da00 = 0x100000000;
  if (*(char *)(_DAT_14ca6d9e8 + 100) != '\0') {
    DAT_14ca6d9de = DAT_14ca6d9de + '\x01';
  }
  return;
}



// FUNCTION 145e1fca6 FUN_145e1fca6 body=204 status=ok
// SIG undefined FUN_145e1fca6(void)

undefined8 * FUN_145e1fca6(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a649ce0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeab10) {
    FUN_144b3d300(&DAT_14caeab10);
    if (DAT_14caeab10 == -1) {
      FUN_14156a682();
      atexit((_func_5014 *)&LAB_14356d5bc);
      _Init_thread_footer(&DAT_14caeab10);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145e1fd7e FUN_145e1fd7e body=204 status=ok
// SIG undefined FUN_145e1fd7e(void)

undefined8 * FUN_145e1fd7e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6613b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeabc0) {
    FUN_144b3d300(&DAT_14caeabc0);
    if (DAT_14caeabc0 == -1) {
      FUN_14156a728();
      atexit((_func_5014 *)&LAB_14356d672);
      _Init_thread_footer(&DAT_14caeabc0);
    }
  }
  param_1[0x20] = 0x400000003f800000;
  return param_1;
}



// FUNCTION 145e1fe56 FUN_145e1fe56 body=204 status=ok
// SIG undefined FUN_145e1fe56(void)

undefined8 * FUN_145e1fe56(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a674b90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead80) {
    FUN_144b3d300(&DAT_14caead80);
    if (DAT_14caead80 == -1) {
      FUN_14156a7ce();
      atexit((_func_5014 *)&LAB_14356d8de);
      _Init_thread_footer(&DAT_14caead80);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145e1ff2e FUN_145e1ff2e body=204 status=ok
// SIG undefined FUN_145e1ff2e(void)

undefined8 * FUN_145e1ff2e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6748b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead68) {
    FUN_144b3d300(&DAT_14caead68);
    if (DAT_14caead68 == -1) {
      FUN_14156a874();
      atexit((_func_5014 *)&LAB_14356d8ca);
      _Init_thread_footer(&DAT_14caead68);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145e20006 FUN_145e20006 body=204 status=ok
// SIG undefined FUN_145e20006(void)

undefined8 * FUN_145e20006(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a674010;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaba8) {
    FUN_144b3d300(&DAT_14caeaba8);
    if (DAT_14caeaba8 == -1) {
      FUN_14156a91a();
      atexit((_func_5014 *)&LAB_14356d65e);
      _Init_thread_footer(&DAT_14caeaba8);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145e200de FUN_145e200de body=204 status=ok
// SIG undefined FUN_145e200de(void)

undefined8 * FUN_145e200de(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a6730;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeabd8) {
    FUN_144b3d300(&DAT_14caeabd8);
    if (DAT_14caeabd8 == -1) {
      FUN_14156a9c0();
      atexit((_func_5014 *)&LAB_14356d686);
      _Init_thread_footer(&DAT_14caeabd8);
    }
  }
  param_1[0x20] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 145e201aa FUN_145e201aa body=97 status=ok
// SIG undefined FUN_145e201aa(void)

void FUN_145e201aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae4800) {
    FUN_144b3d300(&DAT_14cae4800);
    if (DAT_14cae4800 == -1) {
      FUN_145e2020c();
      atexit(FUN_14352fc5a);
      _Init_thread_footer(&DAT_14cae4800);
      return;
    }
  }
  return;
}



// FUNCTION 145e2020c FUN_145e2020c body=93 status=ok
// SIG undefined FUN_145e2020c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2020c(void)

{
  DAT_14cae47c0 = 0;
  _DAT_14cae47c8 = 0;
  DAT_14cae47a0 = 0;
  _DAT_14cae47a8 = 0;
  _DAT_14cae47cc = 0xffffffff00000080;
  DAT_14cae47d4 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
                    /* WARNING: Could not recover jumptable at 0x000145e20262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae47d8,4000);
  return;
}



// FUNCTION 145e20274 FUN_145e20274 body=179 status=ok
// SIG undefined FUN_145e20274(void)

undefined8 * FUN_145e20274(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145943e5e();
  *param_1 = &PTR_FUN_14ac09d80;
  FUN_14111896e(param_1 + 0x12);
  FUN_14111896e(param_1 + 0x19);
  FUN_14111896e(param_1 + 0x20);
  FUN_14111896e(param_1 + 0x27);
  param_1[0x2e] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x2e] = lVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1f) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x26) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2d) = 0x447a0000;
  *(byte *)(param_1 + 0x2f) = *(byte *)(param_1 + 0x2f) & 0xfe;
  return param_1;
}



// FUNCTION 145e20328 FUN_145e20328 body=177 status=ok
// SIG undefined FUN_145e20328(void)

void FUN_145e20328(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  thunk_FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  FUN_143a2dc9c(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x44),
                *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_143a2e712(*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,*(undefined4 *)(param_1 + 0x4c));
}



// FUNCTION 145e203e2 thunk_FUN_144a63f30 body=5 status=ok
// SIG undefined thunk_FUN_144a63f30(void)

void thunk_FUN_144a63f30(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 145e203e8 FUN_145e203e8 body=40 status=ok
// SIG undefined FUN_145e203e8(void)

undefined8 FUN_145e203e8(undefined8 param_1,int param_2)

{
  FUN_145e20410();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e20410 FUN_145e20410 body=150 status=ok
// SIG undefined FUN_145e20410(void)

void FUN_145e20410(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aec87f0;
  param_1[5] = &PTR_FUN_14aec8a90;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e204a6 FUN_145e204a6 body=92 status=ok
// SIG undefined FUN_145e204a6(void)

void FUN_145e204a6(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(longlong **)(param_1 + 0x198) == (longlong *)0x0) {
    bVar2 = 1;
  }
  else {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x78))();
    bVar2 = bVar2 ^ 1;
  }
  if ((((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (cVar1 = *(char *)(*(longlong *)(param_1 + 0x1a8) + 0x39), cVar1 == DAT_14c96b238)) &&
      (*(longlong *)(param_1 + 0x1b8) != 0)) &&
     (bVar2 == 0 && *(char *)(*(longlong *)(param_1 + 0x1b8) + 0x39) == cVar1)) {
    *(undefined1 *)(param_1 + 0x174) = 1;
  }
  return;
}



// FUNCTION 145e20505 FUN_145e20505 body=59 status=ok
// SIG undefined FUN_145e20505(void)

void FUN_145e20505(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14156aa66(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b575d50;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 145e20540 FUN_145e20540 body=40 status=ok
// SIG undefined FUN_145e20540(void)

undefined8 FUN_145e20540(undefined8 param_1,int param_2)

{
  FUN_145e20568();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e20568 FUN_145e20568 body=150 status=ok
// SIG undefined FUN_145e20568(void)

void FUN_145e20568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b75b2f0;
  FUN_1447a1747(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e20606 FUN_145e20606 body=181 status=ok
// SIG undefined FUN_145e20606(void)

undefined8 * FUN_145e20606(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc6f530;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"FrameRate");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_140056680(local_40,L"AnimationTrackUids");
  FUN_1410835a0(param_1 + 0x2c,param_1 + 5,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e206bc FUN_145e206bc body=40 status=ok
// SIG undefined FUN_145e206bc(void)

undefined8 FUN_145e206bc(undefined8 param_1,int param_2)

{
  FUN_145e206e4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e206e4 FUN_145e206e4 body=150 status=ok
// SIG undefined FUN_145e206e4(void)

void FUN_145e206e4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdb5210;
  param_1[5] = &PTR_FUN_14bdb55c0;
  param_1[0x13] = &PTR_FUN_14bdb55e0;
  FUN_141082778(param_1 + 0x20);
  FUN_145850673(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1d];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145e2077a FUN_145e2077a body=292 status=ok
// SIG undefined FUN_145e2077a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e2077a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2df8) {
    FUN_144b3d300(&DAT_14c9f2df8);
    if (DAT_14c9f2df8 == -1) {
      FUN_145e2089e();
      FUN_145e209a4();
      FUN_140db5666(&DAT_14c9f2d50,0,&DAT_14c9f2ce8,L"FLumenRadiosityHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosityHardwareRayTracing.usf",
                    L"LumenRadiosityHardwareRayTracingRGS",6,0xc,FUN_1471ed346,FUN_1471ed302,
                    &LAB_1462db3f2,&LAB_1471ed2fe,&LAB_1471ed2f8,&LAB_1471ed2f0,0xe0,&DAT_14c9f6260)
      ;
      _DAT_14c9f2d50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3634a);
      _Init_thread_footer(&DAT_14c9f2df8);
    }
  }
  return &DAT_14c9f2d50;
}



// FUNCTION 145e2089e FUN_145e2089e body=261 status=ok
// SIG undefined FUN_145e2089e(void)

void FUN_145e2089e(void)

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
              0x110) < DAT_14c9f62e0) {
    FUN_144b3d300(&DAT_14c9f62e0);
    if (DAT_14c9f62e0 == -1) {
      FUN_145e20aee(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2b0;
      local_58 = 0x196;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6260,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58109);
      _Init_thread_footer(&DAT_14c9f62e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e209a4 FUN_145e209a4 body=205 status=ok
// SIG undefined FUN_145e209a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e209a4(void)

{
  if ((DAT_14c9f2d4f & 2) == 0) {
    DAT_14c9f2d4f = DAT_14c9f2d4f | 2;
    _DAT_14c9f2cf0 = L"FLumenRadiosityHardwareRayTracingRGS";
    _DAT_14c9f2d08 = FUN_146826540;
    _DAT_14c9f2d10 = FUN_146825d77;
    _DAT_14c9f2d18 = FUN_146825fd6;
    _DAT_14c9f2d20 = FUN_1407e02ea;
    _DAT_14c9f2d28 = FUN_146826273;
    _DAT_14c9f2d00 = FUN_1471ed2c2;
    _DAT_14c9f2d40 = 0xffffffff000000e0;
    _DAT_14c9f2d48 = 8;
    DAT_14c9f2d4c = 0;
    _DAT_14c9f2d30 = &LAB_1471ed2ec;
    FUN_145e20a72();
    FUN_1407e00cc(&DAT_14c9f2ce8);
    return;
  }
  return;
}



// FUNCTION 145e20a72 FUN_145e20a72 body=123 status=ok
// SIG undefined FUN_145e20a72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e20a72(void)

{
  _DAT_14c9f7a30 = L"BASE";
  DAT_14c9f7a5a = 4;
  _DAT_14c9f7a38 = FUN_140b35ae4();
  _DAT_14c9f7a40 = DAT_14c9f2cf8;
  _DAT_14c9f7a48 = &LAB_14682652b;
  DAT_14c9f2cf8 = &DAT_14c9f7a30;
  DAT_14c9f2d4d = DAT_14c9f2d4d + '\x01';
  _DAT_14c9f7a50 = 0x100000000;
  if (*(char *)(_DAT_14c9f7a38 + 100) != '\0') {
    DAT_14c9f2d4e = DAT_14c9f2d4e + '\x01';
  }
  return;
}



// FUNCTION 145e20aee FUN_145e20aee body=226 status=ok
// SIG undefined FUN_145e20aee(void)

longlong * FUN_145e20aee(longlong *param_1)

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
  pcVar13 = FUN_1462dc690;
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



// FUNCTION 145e20bd2 FUN_145e20bd2 body=136 status=ok
// SIG undefined FUN_145e20bd2(void)

code * FUN_145e20bd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28c0000019d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e20ce4;
}



// FUNCTION 145e20c5a FUN_145e20c5a body=138 status=ok
// SIG undefined FUN_145e20c5a(void)

code * FUN_145e20c5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTraceRadianceAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x298000001a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f4878;
}



// FUNCTION 145e20ce4 FUN_145e20ce4 body=138 status=ok
// SIG undefined FUN_145e20ce4(void)

code * FUN_145e20ce4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2880000019c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f498c;
}



// FUNCTION 145e20d6e FUN_145e20d6e body=278 status=ok
// SIG undefined FUN_145e20d6e(void)

void FUN_145e20d6e(void)

{
  DAT_14c964668 = 0;
  if (DAT_14c964660 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20e84();
  DAT_14c964618 = 0;
  if (DAT_14c964610 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20eba();
  DAT_14c9645b8 = 0;
  if (DAT_14c9645b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20f92(&DAT_14c964570);
  DAT_14c964568 = 0;
  if (DAT_14c964560 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20ef0();
  DAT_14c964518 = 0;
  if (DAT_14c964510 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20f26();
  DAT_14c9644c8 = 0;
  if (DAT_14c9644c0 != 0) {
    FUN_1400020a8();
  }
  FUN_140d5a322(&DAT_14c964480);
  DAT_14c964478 = 0;
  if (DAT_14c964470 != 0) {
    FUN_1400020a8();
  }
  FUN_145e20f5c();
                    /* WARNING: Could not recover jumptable at 0x000145e20e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
  return;
}



// FUNCTION 145e20e84 FUN_145e20e84 body=54 status=ok
// SIG undefined FUN_145e20e84(void)

void FUN_145e20e84(void)

{
  FUN_145e20fca();
  if (DAT_14c964640 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c964620 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20eba FUN_145e20eba body=54 status=ok
// SIG undefined FUN_145e20eba(void)

void FUN_145e20eba(void)

{
  FUN_145e2144e();
  if (DAT_14c9645f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9645d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20ef0 FUN_145e20ef0 body=54 status=ok
// SIG undefined FUN_145e20ef0(void)

void FUN_145e20ef0(void)

{
  FUN_145e21034();
  if (DAT_14c964540 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c964520 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20f26 FUN_145e20f26 body=54 status=ok
// SIG undefined FUN_145e20f26(void)

void FUN_145e20f26(void)

{
  FUN_145e21192();
  if (DAT_14c9644f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9644d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20f5c FUN_145e20f5c body=54 status=ok
// SIG undefined FUN_145e20f5c(void)

void FUN_145e20f5c(void)

{
  FUN_145e212f0();
  if (DAT_14c964450 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c964430 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20f92 FUN_145e20f92 body=55 status=ok
// SIG undefined FUN_145e20f92(void)

void FUN_145e20f92(longlong *param_1)

{
  FUN_14156aaea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e20fca FUN_145e20fca body=106 status=ok
// SIG undefined FUN_145e20fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e20fca(void)

{
  DAT_14c964628 = 0;
  if (DAT_14c96462c != 0) {
    FUN_144727cd0(&DAT_14c964620,0);
  }
  _DAT_14c964650 = 0xffffffff;
  _DAT_14c964648 = 0;
  if (DAT_14c96464c < 0x81) {
    return;
  }
  DAT_14c96464c = 0x80;
  FUN_1446efbd8(&DAT_14c964630,0);
  return;
}



// FUNCTION 145e21034 FUN_145e21034 body=348 status=ok
// SIG undefined FUN_145e21034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e21034(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c964530;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c964548 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c964520;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_146902874(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c964528 = 0;
  if (DAT_14c96452c != 0) {
    FUN_1446f4a44(&DAT_14c964520,0);
  }
  _DAT_14c964550 = 0xffffffff;
  DAT_14c964548 = 0;
  if (0x80 < DAT_14c96454c) {
    DAT_14c96454c = 0x80;
    FUN_1446efbd8(&DAT_14c964530,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e21192 FUN_145e21192 body=348 status=ok
// SIG undefined FUN_145e21192(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e21192(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c9644e0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c9644f8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c9644d0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_146902874(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c9644d8 = 0;
  if (DAT_14c9644dc != 0) {
    FUN_1446f4a44(&DAT_14c9644d0,0);
  }
  _DAT_14c964500 = 0xffffffff;
  DAT_14c9644f8 = 0;
  if (0x80 < DAT_14c9644fc) {
    DAT_14c9644fc = 0x80;
    FUN_1446efbd8(&DAT_14c9644e0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e212f0 FUN_145e212f0 body=348 status=ok
// SIG undefined FUN_145e212f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e212f0(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c964440;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c964458 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c964430;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_146902874(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c964438 = 0;
  if (DAT_14c96443c != 0) {
    FUN_1446f4a44(&DAT_14c964430,0);
  }
  _DAT_14c964460 = 0xffffffff;
  DAT_14c964458 = 0;
  if (0x80 < DAT_14c96445c) {
    DAT_14c96445c = 0x80;
    FUN_1446efbd8(&DAT_14c964440,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e2144e FUN_145e2144e body=375 status=ok
// SIG undefined FUN_145e2144e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2144e(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c9645e0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c9645f8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c9645d0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_146902874(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c9645d8 = 0;
  if (DAT_14c9645dc != 0) {
    FUN_1446f4a44(&DAT_14c9645d0,0);
  }
  _DAT_14c964600 = 0xffffffff;
  DAT_14c9645f8 = 0;
  if (0x80 < DAT_14c9645fc) {
    DAT_14c9645fc = 0x80;
    FUN_1446efbd8(&DAT_14c9645e0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e215c6 FUN_145e215c6 body=134 status=ok
// SIG undefined FUN_145e215c6(void)

void FUN_145e215c6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_145cefb3b(param_2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)
            *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffffffffffff) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_145cefc2c(uVar5 * 0x78 + lVar1,param_2);
        if (cVar2 != '\0') {
          FUN_145e2164c(param_1,uVar5 & 0xffffffff);
          return;
        }
        uVar5 = (ulonglong)*(int *)(lVar1 + 0x70 + uVar5 * 0x78);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 145e2164c FUN_145e2164c body=113 status=ok
// SIG undefined FUN_145e2164c(void)

void FUN_145e2164c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x78;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x74 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x78 + 0x70);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x70);
  FUN_145e216be(lVar2 + *param_1);
  FUN_145e216fe(param_1,param_2);
  return;
}



// FUNCTION 145e216be FUN_145e216be body=63 status=ok
// SIG undefined FUN_145e216be(void)

void FUN_145e216be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_141478002(param_1);
  return;
}



// FUNCTION 145e216fe FUN_145e216fe body=118 status=ok
// SIG undefined FUN_145e216fe(void)

void FUN_145e216fe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145e21774 FUN_145e21774 body=2170 status=ok
// SIG undefined FUN_145e21774(void)

undefined8 * FUN_145e21774(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145e22948();
  *param_1 = &PTR_LAB_14ba4abc0;
  param_1[1] = &PTR_FUN_14ba4abf8;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x2f] = &PTR_LAB_14ba4ac10;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_50 = FUN_14439e7ba;
  local_48 = 0;
  FUN_145e21ff0(param_1 + 0x2f,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x34] = &PTR_LAB_14ba4ac50;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_50 = FUN_14439e914;
  local_48 = 0;
  FUN_145e2204c(param_1 + 0x34,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x39] = &PTR_LAB_14ba4ac90;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 2;
  local_50 = FUN_14439ea04;
  local_48 = 0;
  FUN_145e220a8(param_1 + 0x39,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x3e] = &PTR_LAB_14ba4acb0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 2;
  local_50 = FUN_14439eb06;
  local_48 = 0;
  FUN_145e22104(param_1 + 0x3e,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x43] = &PTR_LAB_14ba4acd0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  local_50 = FUN_14439e178;
  local_48 = 0;
  FUN_145e22160(param_1 + 0x43,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x48] = &PTR_LAB_14ba4ad10;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_50 = FUN_14439e212;
  local_48 = 0;
  FUN_145e221bc(param_1 + 0x48,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x4d] = &PTR_LAB_14ba4ad50;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 2;
  local_50 = FUN_14439e2bc;
  local_48 = 0;
  FUN_145e22218(param_1 + 0x4d,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x52] = &PTR_LAB_14ba4ad70;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x53) = 2;
  local_50 = FUN_14439e3c0;
  local_48 = 0;
  FUN_145e22274(param_1 + 0x52,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x57] = &PTR_LAB_14ba4ad90;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x58) = 2;
  local_50 = FUN_14439e462;
  local_48 = 0;
  FUN_145e222d0(param_1 + 0x57,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5c] = &PTR_LAB_14ba4adb0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 2;
  local_50 = FUN_14439e50c;
  local_48 = 0;
  FUN_145e2232c(param_1 + 0x5c,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[0x61] = &PTR_LAB_14ba4add0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  local_50 = FUN_14439e5ae;
  local_48 = 0;
  FUN_145e22388(param_1 + 0x61,param_1,&local_50);
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x66] = &PTR_LAB_14ba4ae10;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x67) = 2;
  local_50 = FUN_14439e65e;
  local_48 = 0;
  FUN_145e223e4(param_1 + 0x66,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6b] = &PTR_LAB_14ba4ae50;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  local_50 = FUN_14439e70c;
  local_48 = 0;
  FUN_145e22440(param_1 + 0x6b,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x70] = &PTR_LAB_14ba4ae70;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  local_50 = FUN_14439dd42;
  local_48 = 0;
  FUN_145e2249c(param_1 + 0x70,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x75] = &PTR_LAB_14ba4aeb0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  local_50 = FUN_14439de5e;
  local_48 = 0;
  FUN_145e224f8(param_1 + 0x75,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7a] = &PTR_LAB_14ba4aef0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  local_50 = FUN_14155cf4e;
  local_48 = 0;
  FUN_145e22554(param_1 + 0x7a,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x7f] = &PTR_LAB_14ba4af10;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  local_50 = FUN_1415265bc;
  local_48 = 0;
  FUN_145e225b0(param_1 + 0x7f,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x84] = &PTR_LAB_14ba4af50;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  local_50 = FUN_141472bfa;
  local_48 = 0;
  FUN_145e2260c(param_1 + 0x84,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x89] = &PTR_LAB_14ba4af70;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  local_50 = FUN_1415335d2;
  local_48 = 0;
  FUN_145e22668(param_1 + 0x89,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x8e] = &PTR_LAB_14ba4af90;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  local_50 = FUN_1414e9808;
  local_48 = 0;
  FUN_145e226c4(param_1 + 0x8e,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x93] = &PTR_LAB_14ba4afb0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  local_50 = FUN_14439dfe8;
  local_48 = 0;
  FUN_145e22720(param_1 + 0x93,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x98] = &PTR_LAB_14ba4afd0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  local_50 = FUN_14439e0d2;
  local_48 = 0;
  FUN_145e2277c(param_1 + 0x98,param_1,&local_50);
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0x9d] = &PTR_LAB_14ba4aff0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  local_50 = FUN_14439ebf6;
  local_48 = 0;
  FUN_145e227d8(param_1 + 0x9d,param_1,&local_50);
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa2] = &PTR_LAB_14ba4b010;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  local_50 = FUN_14111762c;
  local_48 = 0;
  FUN_145e22834(param_1 + 0xa2,param_1,&local_50);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xa7] = &PTR_LAB_14ba4b050;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  local_50 = FUN_1410d60ee;
  local_48 = 0;
  FUN_145e22890(param_1 + 0xa7,param_1,&local_50);
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xac] = &PTR_LAB_14ba4b070;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  local_50 = FUN_148fab434;
  local_48 = 0;
  FUN_145e228ec(param_1 + 0xac,param_1,&local_50);
  param_1[0xb1] = param_2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e21ff0 FUN_145e21ff0 body=92 status=ok
// SIG undefined FUN_145e21ff0(void)

void FUN_145e21ff0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x4b2);
    return;
  }
  return;
}



// FUNCTION 145e2204c FUN_145e2204c body=92 status=ok
// SIG undefined FUN_145e2204c(void)

void FUN_145e2204c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e2208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x4b3);
    return;
  }
  return;
}



// FUNCTION 145e220a8 FUN_145e220a8 body=92 status=ok
// SIG undefined FUN_145e220a8(void)

void FUN_145e220a8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e220e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x4b2);
    return;
  }
  return;
}



// FUNCTION 145e22104 FUN_145e22104 body=92 status=ok
// SIG undefined FUN_145e22104(void)

void FUN_145e22104(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x4b3);
    return;
  }
  return;
}



// FUNCTION 145e22160 FUN_145e22160 body=92 status=ok
// SIG undefined FUN_145e22160(void)

void FUN_145e22160(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e221a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x65);
    return;
  }
  return;
}



// FUNCTION 145e221bc FUN_145e221bc body=92 status=ok
// SIG undefined FUN_145e221bc(void)

void FUN_145e221bc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e221fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x67);
    return;
  }
  return;
}



// FUNCTION 145e22218 FUN_145e22218 body=92 status=ok
// SIG undefined FUN_145e22218(void)

void FUN_145e22218(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x65);
    return;
  }
  return;
}



// FUNCTION 145e22274 FUN_145e22274 body=92 status=ok
// SIG undefined FUN_145e22274(void)

void FUN_145e22274(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e222b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x67);
    return;
  }
  return;
}



// FUNCTION 145e222d0 FUN_145e222d0 body=92 status=ok
// SIG undefined FUN_145e222d0(void)

void FUN_145e222d0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x66);
    return;
  }
  return;
}



// FUNCTION 145e2232c FUN_145e2232c body=92 status=ok
// SIG undefined FUN_145e2232c(void)

void FUN_145e2232c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e2236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x73);
    return;
  }
  return;
}



// FUNCTION 145e22388 FUN_145e22388 body=92 status=ok
// SIG undefined FUN_145e22388(void)

void FUN_145e22388(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e223c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0xa8);
    return;
  }
  return;
}



// FUNCTION 145e223e4 FUN_145e223e4 body=92 status=ok
// SIG undefined FUN_145e223e4(void)

void FUN_145e223e4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x8f);
    return;
  }
  return;
}



// FUNCTION 145e22440 FUN_145e22440 body=92 status=ok
// SIG undefined FUN_145e22440(void)

void FUN_145e22440(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x8f);
    return;
  }
  return;
}



// FUNCTION 145e2249c FUN_145e2249c body=92 status=ok
// SIG undefined FUN_145e2249c(void)

void FUN_145e2249c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e224dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x151);
    return;
  }
  return;
}



// FUNCTION 145e224f8 FUN_145e224f8 body=92 status=ok
// SIG undefined FUN_145e224f8(void)

void FUN_145e224f8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x14d);
    return;
  }
  return;
}



// FUNCTION 145e22554 FUN_145e22554 body=92 status=ok
// SIG undefined FUN_145e22554(void)

void FUN_145e22554(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x1f8);
    return;
  }
  return;
}



// FUNCTION 145e225b0 FUN_145e225b0 body=92 status=ok
// SIG undefined FUN_145e225b0(void)

void FUN_145e225b0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e225f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x1fa);
    return;
  }
  return;
}



// FUNCTION 145e2260c FUN_145e2260c body=92 status=ok
// SIG undefined FUN_145e2260c(void)

void FUN_145e2260c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e2264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x1f9);
    return;
  }
  return;
}



// FUNCTION 145e22668 FUN_145e22668 body=92 status=ok
// SIG undefined FUN_145e22668(void)

void FUN_145e22668(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e226a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x44d);
    return;
  }
  return;
}



// FUNCTION 145e226c4 FUN_145e226c4 body=92 status=ok
// SIG undefined FUN_145e226c4(void)

void FUN_145e226c4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x44e);
    return;
  }
  return;
}



// FUNCTION 145e22720 FUN_145e22720 body=92 status=ok
// SIG undefined FUN_145e22720(void)

void FUN_145e22720(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x454);
    return;
  }
  return;
}



// FUNCTION 145e2277c FUN_145e2277c body=92 status=ok
// SIG undefined FUN_145e2277c(void)

void FUN_145e2277c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e227bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x14b);
    return;
  }
  return;
}



// FUNCTION 145e227d8 FUN_145e227d8 body=92 status=ok
// SIG undefined FUN_145e227d8(void)

void FUN_145e227d8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x2c0);
    return;
  }
  return;
}



// FUNCTION 145e22834 FUN_145e22834 body=92 status=ok
// SIG undefined FUN_145e22834(void)

void FUN_145e22834(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e22874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x150);
    return;
  }
  return;
}



// FUNCTION 145e22890 FUN_145e22890 body=92 status=ok
// SIG undefined FUN_145e22890(void)

void FUN_145e22890(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e228d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x130);
    return;
  }
  return;
}



// FUNCTION 145e228ec FUN_145e228ec body=92 status=ok
// SIG undefined FUN_145e228ec(void)

void FUN_145e228ec(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar2 = param_3[1];
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(int *)(param_1 + 0x20) = (int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x000145e2292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x2ca);
    return;
  }
  return;
}



// FUNCTION 145e22948 FUN_145e22948 body=575 status=ok
// SIG undefined FUN_145e22948(void)

undefined8 * FUN_145e22948(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_14b435f60;
  param_1[1] = &PTR_LAB_14b435f98;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x42700000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  *(undefined4 *)(param_1 + 0x1b) = 8;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0x1d] = puVar2;
  param_1[0x1c] = puVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x27),4000);
  uVar3 = FUN_1405d8a54(0);
  param_1[0x2c] = uVar3;
  *(undefined4 *)(param_1 + 0x2d) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  local_54 = 0x14;
  local_68 = &DAT_14c872ce8;
  cVar1 = FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystem",L"PollingIntervalInMs");
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x2d) = local_54;
  }
  local_68 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystem",L"MaxParallelTasks",param_1 + 0x1b);
  local_68 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystem",L"bEnableReportBreach",param_1 + 0x13);
  local_68 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystem",L"BreachTimeSeconds",(longlong)param_1 + 0x9c);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e22b88 FUN_145e22b88 body=206 status=ok
// SIG undefined FUN_145e22b88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e22b88(void)

{
  if ((DAT_14c9fae2f & 2) == 0) {
    DAT_14c9fae2f = DAT_14c9fae2f | 2;
    _DAT_14c9fadd0 = L"FCopyCardCaptureLightingToAtlasPS";
    _DAT_14c9fade8 = FUN_146826540;
    _DAT_14c9fadf0 = FUN_146825d77;
    _DAT_14c9fadf8 = FUN_146825fd6;
    _DAT_14c9fae00 = FUN_1407e02ea;
    _DAT_14c9fae08 = FUN_146826273;
    _DAT_14c9fade0 = FUN_1472079ac;
    _DAT_14c9fae20 = 0xffffffff000000e0;
    _DAT_14c9fae28 = 8;
    DAT_14c9fae2c = 0;
    _DAT_14c9fae10 = &LAB_1472079d6;
    FUN_145e22c56();
    FUN_1407e00cc(&DAT_14c9fadc8);
  }
  return &DAT_14c9fadc8;
}



// FUNCTION 145e22c56 FUN_145e22c56 body=123 status=ok
// SIG undefined FUN_145e22c56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e22c56(void)

{
  _DAT_14ca000e8 = L"BASE";
  DAT_14ca00112 = 4;
  _DAT_14ca000f0 = FUN_140b35ae4();
  _DAT_14ca000f8 = DAT_14c9fadd8;
  _DAT_14ca00100 = &LAB_14682652b;
  DAT_14c9fadd8 = &DAT_14ca000e8;
  DAT_14c9fae2d = DAT_14c9fae2d + '\x01';
  _DAT_14ca00108 = 0x100000000;
  if (*(char *)(_DAT_14ca000f0 + 100) != '\0') {
    DAT_14c9fae2e = DAT_14c9fae2e + '\x01';
  }
  return;
}



// FUNCTION 145e22cd2 FUN_145e22cd2 body=226 status=ok
// SIG undefined FUN_145e22cd2(void)

longlong * FUN_145e22cd2(longlong *param_1)

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
  pcVar13 = FUN_1462e43e2;
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



// FUNCTION 145e22db6 FUN_145e22db6 body=138 status=ok
// SIG undefined FUN_145e22db6(void)

code * FUN_145e22db6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmissiveCardCaptureAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472147a0;
}



// FUNCTION 145e22e40 FUN_145e22e40 body=138 status=ok
// SIG undefined FUN_145e22e40(void)

code * FUN_145e22e40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseColorBoost";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e44f2;
}



// FUNCTION 145e22eca FUN_145e22eca body=138 status=ok
// SIG undefined FUN_145e22eca(void)

code * FUN_145e22eca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardCaptureAtlasSizeInTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e22e40;
}



// FUNCTION 145e22f54 FUN_145e22f54 body=292 status=ok
// SIG undefined FUN_145e22f54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e22f54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca042c8) {
    FUN_144b3d300(&DAT_14ca042c8);
    if (DAT_14ca042c8 == -1) {
      FUN_145e23078();
      FUN_145e2317e();
      FUN_140db5666(&DAT_14ca04220,0,&DAT_14ca041b8,L"FLumenVisualizeHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"LumenVisualizeHardwareRayTracingRGS",6,0x40,FUN_147226414,FUN_1472263d0,
                    &LAB_14176e38a,&LAB_1472263cc,&LAB_1472263ac,&LAB_14722638c,0xe0,&DAT_14ca06e68)
      ;
      _DAT_14ca04220 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8de4);
      _Init_thread_footer(&DAT_14ca042c8);
    }
  }
  return &DAT_14ca04220;
}



// FUNCTION 145e23078 FUN_145e23078 body=261 status=ok
// SIG undefined FUN_145e23078(void)

void FUN_145e23078(void)

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
              0x110) < DAT_14ca06ee8) {
    FUN_144b3d300(&DAT_14ca06ee8);
    if (DAT_14ca06ee8 == -1) {
      FUN_14156af28(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2f0;
      local_58 = 0x187;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06e68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3b03);
      _Init_thread_footer(&DAT_14ca06ee8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2317e FUN_145e2317e body=205 status=ok
// SIG undefined FUN_145e2317e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2317e(void)

{
  if ((DAT_14ca0421f & 2) == 0) {
    DAT_14ca0421f = DAT_14ca0421f | 2;
    _DAT_14ca041c0 = L"FLumenVisualizeHardwareRayTracingRGS";
    _DAT_14ca041d8 = FUN_146826540;
    _DAT_14ca041e0 = FUN_146825d77;
    _DAT_14ca041e8 = FUN_146825fd6;
    _DAT_14ca041f0 = FUN_1407e02ea;
    _DAT_14ca041f8 = FUN_146826273;
    _DAT_14ca041d0 = FUN_14722635e;
    _DAT_14ca04210 = 0xffffffff000000e0;
    _DAT_14ca04218 = 8;
    DAT_14ca0421c = 0;
    _DAT_14ca04200 = &LAB_147226388;
    FUN_145e2324c();
    FUN_1407e00cc(&DAT_14ca041b8);
    return;
  }
  return;
}



// FUNCTION 145e2324c FUN_145e2324c body=123 status=ok
// SIG undefined FUN_145e2324c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2324c(void)

{
  _DAT_14ca08088 = L"BASE";
  DAT_14ca080b2 = 4;
  _DAT_14ca08090 = FUN_140b35ae4();
  _DAT_14ca08098 = DAT_14ca041c8;
  _DAT_14ca080a0 = &LAB_14682652b;
  DAT_14ca041c8 = &DAT_14ca08088;
  DAT_14ca0421d = DAT_14ca0421d + '\x01';
  _DAT_14ca080a8 = 0x100000000;
  if (*(char *)(_DAT_14ca08090 + 100) != '\0') {
    DAT_14ca0421e = DAT_14ca0421e + '\x01';
  }
  return;
}



// FUNCTION 145e232c8 FUN_145e232c8 body=138 status=ok
// SIG undefined FUN_145e232c8(void)

code * FUN_145e232c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FarFieldMaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a800000197;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722d370;
}



// FUNCTION 145e23352 FUN_145e23352 body=138 status=ok
// SIG undefined FUN_145e23352(void)

code * FUN_145e23352(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<LumenVisualize::FTraceDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000018d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722d7c0;
}



// FUNCTION 145e233dc FUN_145e233dc body=138 status=ok
// SIG undefined FUN_145e233dc(void)

code * FUN_145e233dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e00000019f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462eac40;
}



// FUNCTION 145e23466 FUN_145e23466 body=292 status=ok
// SIG undefined FUN_145e23466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e23466(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08e60) {
    FUN_144b3d300(&DAT_14ca08e60);
    if (DAT_14ca08e60 == -1) {
      FUN_145e2358a();
      FUN_145e23690();
      FUN_140db5666(&DAT_14ca08db8,0,&DAT_14ca08d50,L"FVolumeHardwareRayTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeHardwareRayTracing.usf",
                    L"VolumeHardwareRayTraceLightSamplesCS",5,4,FUN_147239680,FUN_147239620,
                    &LAB_14581e3b8,&LAB_14723961c,&LAB_147239618,&LAB_14712ac08,0xe0,&DAT_14ca0e398)
      ;
      _DAT_14ca08db8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1581);
      _Init_thread_footer(&DAT_14ca08e60);
    }
  }
  return &DAT_14ca08db8;
}



// FUNCTION 145e2358a FUN_145e2358a body=261 status=ok
// SIG undefined FUN_145e2358a(void)

void FUN_145e2358a(void)

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
              0x110) < DAT_14ca0e418) {
    FUN_144b3d300(&DAT_14ca0e418);
    if (DAT_14ca0e418 == -1) {
      FUN_145e237da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x330;
      local_58 = 0x1c3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e398,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb97);
      _Init_thread_footer(&DAT_14ca0e418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e23690 FUN_145e23690 body=205 status=ok
// SIG undefined FUN_145e23690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e23690(void)

{
  if ((DAT_14ca08db7 & 2) == 0) {
    DAT_14ca08db7 = DAT_14ca08db7 | 2;
    _DAT_14ca08d58 = L"FVolumeHardwareRayTraceLightSamplesCS";
    _DAT_14ca08d70 = FUN_146826540;
    _DAT_14ca08d78 = FUN_146825d77;
    _DAT_14ca08d80 = FUN_146825fd6;
    _DAT_14ca08d88 = FUN_1407e02ea;
    _DAT_14ca08d90 = FUN_146826273;
    _DAT_14ca08d68 = FUN_1472395ea;
    _DAT_14ca08da8 = 0xffffffff000000e0;
    _DAT_14ca08db0 = 8;
    DAT_14ca08db4 = 0;
    _DAT_14ca08d98 = &LAB_147239614;
    FUN_145e2375e();
    FUN_1407e00cc(&DAT_14ca08d50);
    return;
  }
  return;
}



// FUNCTION 145e2375e FUN_145e2375e body=123 status=ok
// SIG undefined FUN_145e2375e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2375e(void)

{
  _DAT_14ca0eaf0 = L"BASE";
  DAT_14ca0eb1a = 4;
  _DAT_14ca0eaf8 = FUN_140b35ae4();
  _DAT_14ca0eb00 = DAT_14ca08d60;
  _DAT_14ca0eb08 = &LAB_14682652b;
  DAT_14ca08d60 = &DAT_14ca0eaf0;
  DAT_14ca08db5 = DAT_14ca08db5 + '\x01';
  _DAT_14ca0eb10 = 0x100000000;
  if (*(char *)(_DAT_14ca0eaf8 + 100) != '\0') {
    DAT_14ca08db6 = DAT_14ca08db6 + '\x01';
  }
  return;
}



// FUNCTION 145e237da FUN_145e237da body=226 status=ok
// SIG undefined FUN_145e237da(void)

longlong * FUN_145e237da(longlong *param_1)

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
  pcVar13 = FUN_1462ed2a0;
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



// FUNCTION 145e238be FUN_145e238be body=138 status=ok
// SIG undefined FUN_145e238be(void)

code * FUN_145e238be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayTracingNormalBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f0000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e239d2;
}



// FUNCTION 145e23948 FUN_145e23948 body=138 status=ok
// SIG undefined FUN_145e23948(void)

code * FUN_145e23948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayTracingBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e8000001c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147242e0e;
}



// FUNCTION 145e239d2 FUN_145e239d2 body=138 status=ok
// SIG undefined FUN_145e239d2(void)

code * FUN_145e239d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayTracingEndBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ec000001c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e23948;
}



// FUNCTION 145e23a5c FUN_145e23a5c body=292 status=ok
// SIG undefined FUN_145e23a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e23a5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2d9a8) {
    FUN_144b3d300(&DAT_14cb2d9a8);
    if (DAT_14cb2d9a8 == -1) {
      FUN_145e23b80();
      FUN_145e23c86();
      FUN_140db5666(&DAT_14cb2d900,0,&DAT_14cb2d898,L"FNiagaraCollisionRayTraceCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayTracingShaders.usf",
                    L"NiagaraCollisionRayTraceCS",5,2,FUN_14804baa8,FUN_14804ba48,FUN_1464606c2,
                    &LAB_14804ba44,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb33348);
      _DAT_14cb2d900 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f80f1);
      _Init_thread_footer(&DAT_14cb2d9a8);
    }
  }
  return &DAT_14cb2d900;
}



// FUNCTION 145e23b80 FUN_145e23b80 body=261 status=ok
// SIG undefined FUN_145e23b80(void)

void FUN_145e23b80(void)

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
              0x110) < DAT_14cb333c8) {
    FUN_144b3d300(&DAT_14cb333c8);
    if (DAT_14cb333c8 == -1) {
      FUN_145e23dd0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33348,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb67c);
      _Init_thread_footer(&DAT_14cb333c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e23c86 FUN_145e23c86 body=205 status=ok
// SIG undefined FUN_145e23c86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e23c86(void)

{
  if ((DAT_14cb2d8ff & 2) == 0) {
    DAT_14cb2d8ff = DAT_14cb2d8ff | 2;
    _DAT_14cb2d8a0 = L"FNiagaraCollisionRayTraceCS";
    _DAT_14cb2d8b8 = FUN_146826540;
    _DAT_14cb2d8c0 = FUN_146825d77;
    _DAT_14cb2d8c8 = FUN_146825fd6;
    _DAT_14cb2d8d0 = FUN_1407e02ea;
    _DAT_14cb2d8d8 = FUN_146826273;
    _DAT_14cb2d8b0 = FUN_14804ba16;
    _DAT_14cb2d8f0 = 0xffffffff000000e0;
    _DAT_14cb2d8f8 = 8;
    DAT_14cb2d8fc = 0;
    _DAT_14cb2d8e0 = &LAB_14804ba40;
    FUN_145e23d54();
    FUN_1407e00cc(&DAT_14cb2d898);
    return;
  }
  return;
}



// FUNCTION 145e23d54 FUN_145e23d54 body=123 status=ok
// SIG undefined FUN_145e23d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e23d54(void)

{
  _DAT_14cb352a0 = L"BASE";
  DAT_14cb352ca = 4;
  _DAT_14cb352a8 = FUN_140b35ae4();
  _DAT_14cb352b0 = DAT_14cb2d8a8;
  _DAT_14cb352b8 = &LAB_14682652b;
  DAT_14cb2d8a8 = &DAT_14cb352a0;
  DAT_14cb2d8fd = DAT_14cb2d8fd + '\x01';
  _DAT_14cb352c0 = 0x100000000;
  if (*(char *)(_DAT_14cb352a8 + 100) != '\0') {
    DAT_14cb2d8fe = DAT_14cb2d8fe + '\x01';
  }
  return;
}



// FUNCTION 145e23dd0 FUN_145e23dd0 body=226 status=ok
// SIG undefined FUN_145e23dd0(void)

longlong * FUN_145e23dd0(longlong *param_1)

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
  pcVar13 = FUN_146461012;
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



// FUNCTION 145e23eb4 FUN_145e23eb4 body=138 status=ok
// SIG undefined FUN_145e23eb4(void)

code * FUN_145e23eb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HashToCollisionGroups";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<UINT>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804f27c;
}



// FUNCTION 145e23f3e FUN_145e23f3e body=138 status=ok
// SIG undefined FUN_145e23f3e(void)

undefined1 * FUN_145e23f3e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x41;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14804f306;
}



// FUNCTION 145e23fc8 FUN_145e23fc8 body=138 status=ok
// SIG undefined FUN_145e23fc8(void)

code * FUN_145e23fc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayTraceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<UINT>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804efca;
}



// FUNCTION 145e24052 FUN_145e24052 body=206 status=ok
// SIG undefined FUN_145e24052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e24052(void)

{
  if ((DAT_14cb2ef47 & 2) == 0) {
    DAT_14cb2ef47 = DAT_14cb2ef47 | 2;
    _DAT_14cb2eee8 = L"FNiagaraRibbonVertexReductionInitializationCS";
    _DAT_14cb2ef00 = FUN_146826540;
    _DAT_14cb2ef08 = FUN_146825d77;
    _DAT_14cb2ef10 = FUN_146825fd6;
    _DAT_14cb2ef18 = FUN_1407e02ea;
    _DAT_14cb2ef20 = FUN_146826273;
    _DAT_14cb2eef8 = FUN_14804d5c2;
    _DAT_14cb2ef38 = 0xffffffff000000e0;
    _DAT_14cb2ef40 = 8;
    DAT_14cb2ef44 = 0;
    _DAT_14cb2ef28 = &LAB_14804d5ec;
    FUN_145e24120();
    FUN_1407e00cc(&DAT_14cb2eee0);
  }
  return &DAT_14cb2eee0;
}



// FUNCTION 145e24120 FUN_145e24120 body=123 status=ok
// SIG undefined FUN_145e24120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e24120(void)

{
  _DAT_14cb35630 = L"BASE";
  DAT_14cb3565a = 4;
  _DAT_14cb35638 = FUN_140b35ae4();
  _DAT_14cb35640 = DAT_14cb2eef0;
  _DAT_14cb35648 = &LAB_14682652b;
  DAT_14cb2eef0 = &DAT_14cb35630;
  DAT_14cb2ef45 = DAT_14cb2ef45 + '\x01';
  _DAT_14cb35650 = 0x100000000;
  if (*(char *)(_DAT_14cb35638 + 100) != '\0') {
    DAT_14cb2ef46 = DAT_14cb2ef46 + '\x01';
  }
  return;
}



// FUNCTION 145e2419c FUN_145e2419c body=226 status=ok
// SIG undefined FUN_145e2419c(void)

longlong * FUN_145e2419c(longlong *param_1)

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
  pcVar13 = FUN_146461d68;
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



// FUNCTION 145e24280 FUN_145e24280 body=138 status=ok
// SIG undefined FUN_145e24280(void)

code * FUN_145e24280(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTangentsAndDistances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805172a;
}



// FUNCTION 145e2430a FUN_145e2430a body=138 status=ok
// SIG undefined FUN_145e2430a(void)

undefined1 * FUN_145e2430a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b6d2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRibbonComputeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1480517b4;
}



// FUNCTION 145e24394 FUN_145e24394 body=138 status=ok
// SIG undefined FUN_145e24394(void)

code * FUN_145e24394(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSegments";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805158c;
}



// FUNCTION 145e2441e FUN_145e2441e body=79 status=ok
// SIG undefined FUN_145e2441e(void)

undefined8 * FUN_145e2441e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c86f0;
  param_1[0x1f] = &PTR_LAB_14a4c8a60;
  FUN_14156b236(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e24478 FUN_145e24478 body=205 status=ok
// SIG undefined FUN_145e24478(void)

undefined8 * FUN_145e24478(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a690420;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc20) {
    FUN_144b3d300(&DAT_14caebc20);
    if (DAT_14caebc20 == -1) {
      FUN_14156b364();
      atexit((_func_5014 *)&LAB_14356f01d);
      _Init_thread_footer(&DAT_14caebc20);
    }
  }
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f666666;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 145e24546 FUN_145e24546 body=287 status=ok
// SIG undefined FUN_145e24546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e24546(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60b08) {
    FUN_144b3d300(&DAT_14ca60b08);
    if (DAT_14ca60b08 == -1) {
      FUN_145e24666();
      FUN_140db5666(&DAT_14ca60a60,2,&DAT_14ca609f8,
                    L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_PerspectiveCorrect>",
                    L"/Engine/Private/TranslucentShadowDepthShaders.usf",L"MainVS",0,1,FUN_147321fbe
                    ,FUN_147321f96,&LAB_1430abaf6,&LAB_147321f92,&LAB_14712ac0c,&LAB_14712ac08,0x108
                    ,0);
      _DAT_14ca60a60 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430abb20);
      _Init_thread_footer(&DAT_14ca60b08);
    }
  }
  return &DAT_14ca60a60;
}



// FUNCTION 145e24666 FUN_145e24666 body=205 status=ok
// SIG undefined FUN_145e24666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e24666(void)

{
  if ((DAT_14ca60a5f & 2) == 0) {
    DAT_14ca60a5f = DAT_14ca60a5f | 2;
    _DAT_14ca60a00 = L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_PerspectiveCorrect>";
    _DAT_14ca60a18 = FUN_146826540;
    _DAT_14ca60a20 = FUN_146825d77;
    _DAT_14ca60a28 = FUN_146825fd6;
    _DAT_14ca60a30 = FUN_1407e02ea;
    _DAT_14ca60a38 = FUN_146826273;
    _DAT_14ca60a10 = FUN_147321f58;
    _DAT_14ca60a50 = 0xffffffff00000108;
    _DAT_14ca60a58 = 8;
    DAT_14ca60a5c = 0;
    _DAT_14ca60a40 = &LAB_147321f8e;
    FUN_145e24734();
    FUN_1407e00cc(&DAT_14ca609f8);
    return;
  }
  return;
}



// FUNCTION 145e24734 FUN_145e24734 body=133 status=ok
// SIG undefined FUN_145e24734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e24734(void)

{
  _DAT_14ca634d8 = L"BASE";
  DAT_14ca63502 = 4;
  FUN_145e247ba();
  _DAT_14ca634e8 = DAT_14ca60a08;
  _DAT_14ca634e0 = &DAT_14ca63508;
  _DAT_14ca634f0 = &LAB_14682652b;
  DAT_14ca60a08 = &DAT_14ca634d8;
  DAT_14ca60a5d = DAT_14ca60a5d + '\x01';
  _DAT_14ca634f8 = 0x100000000;
  if (DAT_14ca6356c != '\0') {
    DAT_14ca60a5e = DAT_14ca60a5e + '\x01';
  }
  return;
}



// FUNCTION 145e247ba FUN_145e247ba body=205 status=ok
// SIG undefined FUN_145e247ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e247ba(void)

{
  if ((DAT_14ca6356f & 2) == 0) {
    DAT_14ca6356f = DAT_14ca6356f | 2;
    _DAT_14ca63510 = L"FTranslucencyShadowDepthVS";
    _DAT_14ca63528 = FUN_146826540;
    _DAT_14ca63530 = FUN_146825d77;
    _DAT_14ca63538 = FUN_146825fd6;
    _DAT_14ca63540 = FUN_1407e02ea;
    _DAT_14ca63548 = FUN_146826273;
    _DAT_14ca63520 = FUN_147328c28;
    _DAT_14ca63560 = 0xffffffff00000108;
    _DAT_14ca63568 = 8;
    DAT_14ca6356c = 0;
    _DAT_14ca63550 = &LAB_147328c5e;
    FUN_145e24888();
    FUN_1407e00cc(&DAT_14ca63508);
    return;
  }
  return;
}



// FUNCTION 145e24888 FUN_145e24888 body=123 status=ok
// SIG undefined FUN_145e24888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e24888(void)

{
  _DAT_14ca63570 = L"BASE";
  DAT_14ca6359a = 4;
  _DAT_14ca63578 = FUN_141092e92();
  _DAT_14ca63580 = DAT_14ca63518;
  _DAT_14ca63588 = &LAB_14682652b;
  DAT_14ca63518 = &DAT_14ca63570;
  DAT_14ca6356d = DAT_14ca6356d + '\x01';
  _DAT_14ca63590 = 0x100000000;
  if (*(char *)(_DAT_14ca63578 + 100) != '\0') {
    DAT_14ca6356e = DAT_14ca6356e + '\x01';
  }
  return;
}



// FUNCTION 145e24904 FUN_145e24904 body=205 status=ok
// SIG undefined FUN_145e24904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e24904(void)

{
  if ((DAT_14c9edec7 & 2) == 0) {
    DAT_14c9edec7 = DAT_14c9edec7 | 2;
    _DAT_14c9ede68 = L"FMeshSDFObjectCullVS";
    _DAT_14c9ede80 = FUN_146826540;
    _DAT_14c9ede88 = FUN_146825d77;
    _DAT_14c9ede90 = FUN_146825fd6;
    _DAT_14c9ede98 = FUN_1407e02ea;
    _DAT_14c9edea0 = FUN_146826273;
    _DAT_14c9ede78 = FUN_1471debec;
    _DAT_14c9edeb8 = 0xffffffff000000e0;
    _DAT_14c9edec0 = 8;
    DAT_14c9edec4 = 0;
    _DAT_14c9edea8 = &LAB_1471dec16;
    FUN_145e249d2();
    FUN_1407e00cc(&DAT_14c9ede60);
    return;
  }
  return;
}



// FUNCTION 145e249d2 FUN_145e249d2 body=123 status=ok
// SIG undefined FUN_145e249d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e249d2(void)

{
  _DAT_14c9f19a8 = L"BASE";
  DAT_14c9f19d2 = 4;
  _DAT_14c9f19b0 = FUN_140b35ae4();
  _DAT_14c9f19b8 = DAT_14c9ede70;
  _DAT_14c9f19c0 = &LAB_14682652b;
  DAT_14c9ede70 = &DAT_14c9f19a8;
  DAT_14c9edec5 = DAT_14c9edec5 + '\x01';
  _DAT_14c9f19c8 = 0x100000000;
  if (*(char *)(_DAT_14c9f19b0 + 100) != '\0') {
    DAT_14c9edec6 = DAT_14c9edec6 + '\x01';
  }
  return;
}



// FUNCTION 145e24a4e FUN_145e24a4e body=226 status=ok
// SIG undefined FUN_145e24a4e(void)

longlong * FUN_145e24a4e(longlong *param_1)

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
  pcVar13 = FUN_1462d8664;
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



// FUNCTION 145e24b36 FUN_145e24b36 body=132 status=ok
// SIG undefined FUN_145e24b36(void)

undefined1 * FUN_145e24b36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e24b32;
}



// FUNCTION 145e24bba FUN_145e24bba body=144 status=ok
// SIG undefined FUN_145e24bba(void)

code * FUN_145e24bba(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d86ec;
}



// FUNCTION 145e24c4a FUN_145e24c4a body=25 status=ok
// SIG undefined FUN_145e24c4a(void)

undefined8 FUN_145e24c4a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145e24c64 FUN_145e24c64 body=118 status=ok
// SIG undefined FUN_145e24c64(void)

void FUN_145e24c64(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_1447210f0(param_2);
  lVar1 = FUN_141164a58(param_1);
  if (lVar3 == lVar1) {
    uVar4 = 0xffffffff;
    if (param_2 != 0) {
      lVar3 = FUN_1401b2ade(param_2);
      if (lVar3 != 0) {
        lVar3 = FUN_144a7ba4c(lVar3);
        if (lVar3 != 0) {
          uVar4 = *(undefined4 *)(lVar3 + 0xe0);
        }
      }
    }
    cVar2 = FUN_1459372e6(param_1,uVar4);
    if (cVar2 != '\0') {
      FUN_14047a6d2(param_1,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145e24cda FUN_145e24cda body=1188 status=ok
// SIG undefined FUN_145e24cda(void)

uint * FUN_145e24cda(uint *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  param_1[1] = param_2;
  uVar3 = 0x20;
  if ((param_2 != 0) && (uVar3 = 0, param_2 != 0)) {
    for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  param_1[2] = uVar3;
  *(longlong *)(param_1 + 4) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  iVar6 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(uint **)(param_1 + 0x1e) = param_1;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a34c120;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_14156b630(param_1 + 0x10);
  FUN_145e2542c(param_1 + 0x24,param_1);
  *(uint **)(param_1 + 0x196) = param_1;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a0));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a0),4000);
  *(longlong *)(param_1 + 0x1aa) = param_3 + 0x818;
  FUN_145e25180(param_1 + 0x1ac,param_1,param_3 + 0x818);
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 4;
  FUN_145e25368(param_1 + 0x22a,param_1);
  FUN_145e2523a(param_1 + 0x23c,param_1);
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 3;
  param_1[0x4c8] = 0;
  param_1[0x4c9] = 0;
  param_1[0x4ca] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4cb] = 0x80;
  param_1[0x4cc] = 0xffffffff;
  param_1[0x4cd] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d4] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x4d6));
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4e3] = 0x80;
  param_1[0x4e4] = 0xffffffff;
  param_1[0x4e5] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4ea] = 0;
  FUN_145e25290(param_1 + 0x4fa,param_1,-1 << ((byte)DAT_14c760da4 & 0x1f) ^ 0xffffffff);
  local_78 = (uint *)CONCAT44(local_78._4_4_,0x400000);
  FUN_145e252e6(param_1 + 0x50e,param_1,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),2);
  FUN_145e25d9c(param_1 + 0x52c,param_1,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  param_1[0x540] = 0;
  param_1[0x541] = 0;
  do {
    uVar3 = param_1[0x228];
    param_1[0x228] = uVar3 + 1;
    if (param_1[0x229] < uVar3 + 1) {
      FUN_147379624(param_1 + 0x1b6,uVar3);
    }
    puVar4 = *(uint **)(param_1 + 0x226);
    if (*(uint **)(param_1 + 0x226) == (uint *)0x0) {
      puVar4 = param_1 + 0x1b6;
    }
    FUN_145e2519a(puVar4 + (longlong)(int)uVar3 * 0x1c,param_1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 4);
  puVar4 = param_1 + 0x2c0;
  iVar6 = 0;
  do {
    uVar3 = param_1[0x4b0];
    param_1[0x4b0] = uVar3 + 1;
    if (param_1[0x4b1] < uVar3 + 1) {
      FUN_147379738(puVar4,uVar3);
    }
    puVar5 = *(uint **)(param_1 + 0x4a0);
    if (*(uint **)(param_1 + 0x4a0) == (uint *)0x0) {
      puVar5 = puVar4;
    }
    FUN_145e256ee(puVar5 + (longlong)(int)uVar3 * 0xa0,param_1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  if (*(uint **)(param_1 + 0x4a0) != (uint *)0x0) {
    puVar4 = *(uint **)(param_1 + 0x4a0);
  }
  plVar1 = *(longlong **)(puVar4 + 4);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  puVar4 = param_1 + 8;
  plVar1 = *(longlong **)(param_1 + 8);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 4) + 8);
  if (plVar1 != (longlong *)0x0) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  local_78 = puVar4;
  iVar6 = (**(code **)(*plVar2 + 0x120))(plVar2,0,0,&DAT_14a34c500);
  if (iVar6 < 0) {
    local_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (uint *)0x0;
    FUN_145763094(iVar6,
                  "GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(TileMappingFence.D3DFence.GetInitReference()) )"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x85);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e25180 FUN_145e25180 body=26 status=ok
// SIG undefined FUN_145e25180(void)

undefined8 * FUN_145e25180(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 145e2519a FUN_145e2519a body=159 status=ok
// SIG undefined FUN_145e2519a(void)

longlong * FUN_145e2519a(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (longlong)&PTR_FUN_14a34c3b8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(char *)(param_1 + 7) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 8);
  if ((byte)(param_3 - 1U) < 3) {
    uVar3 = *(undefined4 *)(&DAT_14a34c760 + (ulonglong)(byte)(param_3 - 1U) * 4);
  }
  else {
    uVar3 = 0x800;
    param_3 = '\0';
  }
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  return param_1;
}



// FUNCTION 145e2523a FUN_145e2523a body=86 status=ok
// SIG undefined FUN_145e2523a(void)

undefined8 * FUN_145e2523a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[5] = puVar1;
  param_1[4] = puVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  return param_1;
}



// FUNCTION 145e25290 FUN_145e25290 body=86 status=ok
// SIG undefined FUN_145e25290(void)

undefined8 * FUN_145e25290(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 145e252e6 FUN_145e252e6 body=129 status=ok
// SIG undefined FUN_145e252e6(void)

undefined8 *
FUN_145e252e6(undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_5;
  uVar2 = 1;
  uVar1 = 1;
  if (DAT_14ca81480 == 0) {
    uVar2 = *param_2;
    uVar1 = param_3;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  return param_1;
}



// FUNCTION 145e25368 FUN_145e25368 body=195 status=ok
// SIG undefined FUN_145e25368(void)

undefined8 * FUN_145e25368(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14a349710;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a34c3a0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  param_1[5] = plVar3 + 2;
  param_1[6] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  InitializeSRWLock((PSRWLOCK)(param_1 + 7));
  return param_1;
}



// FUNCTION 145e2542c FUN_145e2542c body=241 status=ok
// SIG undefined FUN_145e2542c(void)

longlong FUN_145e2542c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e25596(param_1,(LPCRITICAL_SECTION)(param_1 + 0x1a0));
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a0),8);
  uVar3 = 0;
  memset((void *)(param_1 + 0x1c8),0,0x400);
  local_28 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0x230);
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_14a1e7f70);
  if (iVar2 < 0) {
    local_40 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    FUN_145763094(iVar2,
                  "Parent.GetParentAdapter()->GetAdapter()->QueryInterface(IID_PPV_ARGS(&DxgiAdapter3))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0xa3);
  }
  if (DAT_14ca81480 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 8);
  }
  FUN_145e2551e(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8),uVar3,local_28);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2551e FUN_145e2551e body=118 status=ok
// SIG undefined FUN_145e2551e(void)

void FUN_145e2551e(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c760b88 == '\x01') {
    iVar1 = FUN_145e25b24();
    if (iVar1 < 0) {
      local_20 = &local_18;
      local_18 = 0;
      uStack_10 = 0;
      local_28 = 0;
      FUN_145763094(iVar1,"ResidencyManager.Initialize(Device, GPUIndex, Adapter, MaxLatency)",
                    ".\\Runtime/D3D12RHI/Private\\D3D12Residency.h",0x6e);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e25596 FUN_145e25596 body=343 status=ok
// SIG undefined FUN_145e25596(void)

undefined8 * FUN_145e25596(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 7;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 5),8);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = param_1 + 0x12;
  param_1[0x12] = param_1 + 0x12;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1e] = param_1 + 0x1d;
  param_1[0x1d] = param_1 + 0x1d;
  param_1[0x20] = param_1 + 0x1f;
  param_1[0x1f] = param_1 + 0x1f;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x23),8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),8);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x42700000;
  param_1[0x31] = 0x63f333333;
  param_1[0x33] = param_2;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xd] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x14;
  param_1[0x14] = param_1 + 0x14;
  AllocateLocallyUniqueId((PLUID)(param_1 + 0x32));
  return param_1;
}



// FUNCTION 145e256ee FUN_145e256ee body=1076 status=ok
// SIG undefined FUN_145e256ee(void)

undefined8 * FUN_145e256ee(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 *local_70;
  int local_68;
  int local_60 [3];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar8 = 0;
  *puVar7 = 0;
  param_1[9] = puVar7;
  param_1[8] = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar7 = 0;
  param_1[0xb] = puVar7;
  param_1[10] = puVar7;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  *(int *)(param_1 + 0xf) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 2;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  uVar5 = (**(code **)(*DAT_14ca77418 + 0x5e0))(DAT_14ca77418,param_3);
  *(undefined1 *)(param_1 + 0x4a) = uVar5;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x261) = 0;
  *(undefined8 *)((longlong)param_1 + 0x269) = 0;
  lVar4 = DAT_14ca76a08;
  local_60[0] = (uint)(param_3 == 1) * 3;
  if (param_3 == 2) {
    local_60[0] = 2;
  }
  local_60[1] = 0;
  local_54 = 1;
  if (DAT_14ca81480 == 0) {
    local_54 = *param_2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    uVar8 = FUN_144a61b4f();
    uVar8 = (uVar8 ^ 1) & 0xff;
  }
  local_60[2] = (int)(*(int *)(lVar4 + uVar8 * 4) == 0);
  (**(code **)(*DAT_14ca77418 + 0x5f0))(DAT_14ca77418,param_2,local_60,param_1 + 2);
  pwVar9 = L"3D";
  if (param_3 == 2) {
    pwVar9 = L"Compute";
  }
  plVar1 = (longlong *)param_1[2];
  pwVar11 = L"Copy";
  if (param_3 != 1) {
    pwVar11 = pwVar9;
  }
  FUN_140002266(&local_70,L"%s Queue (GPU %d)",pwVar11,param_2[2]);
  puVar10 = local_70;
  if (local_68 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  plVar3 = param_1 + 3;
  (**(code **)(*plVar1 + 0x30))(plVar1,puVar10);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 4) + 8);
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != (longlong *)0x0) {
    *plVar3 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_a8 = plVar3;
  iVar6 = (**(code **)(*plVar1 + 0x120))(plVar1,0,0,&DAT_14a34c500);
  if (iVar6 < 0) {
    local_a0 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = (longlong *)0x0;
    FUN_145763094(iVar6,
                  "Device->GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(Fence.D3DFence.GetInitReference()) )"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x3b);
  }
  plVar3 = (longlong *)*plVar3;
  FUN_140002266(&local_70,L"%s Queue Fence (GPU %d)",pwVar11,param_2[2]);
  puVar10 = local_70;
  if (local_68 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  plVar1 = param_1 + 0x4b;
  (**(code **)(*plVar3 + 0x30))(plVar3,puVar10);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 4) + 8);
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_a8 = plVar1;
  iVar6 = (**(code **)(*plVar3 + 0x120))(plVar3,0,0,&DAT_14a34c500);
  if (iVar6 < 0) {
    local_a0 = &local_98;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong *)0x0;
    FUN_145763094(iVar6,
                  "Device->GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(ExecuteCommandListsFence.D3DFence.GetInitReference()) )"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x43);
  }
  plVar1 = (longlong *)*plVar1;
  FUN_140002266(&local_70,L"%s ExecuteCommandListsFence (GPU %d)",pwVar11,param_2[2]);
  puVar10 = local_70;
  if (local_68 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,puVar10);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e25b24 FUN_145e25b24 body=631 status=ok
// SIG undefined FUN_145e25b24(void)

DWORD FUN_145e25b24(LPVOID param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  void *_Dst;
  ulonglong uVar4;
  HANDLE pvVar5;
  float fVar6;
  undefined1 auStackY_58 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_58;
  *(undefined8 **)((longlong)param_1 + 200) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xd8) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 6;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_14a349138,(longlong *)((longlong)param_1 + 0xd0));
  if (iVar1 < 0) {
    *(longlong *)((longlong)param_1 + 0x88) = *(longlong *)((longlong)param_1 + 0x88) + 1;
  }
  if (param_4 != (undefined8 *)0x0) {
    (**(code **)*param_4)(param_4,&DAT_14a1e7f70,(longlong)param_1 + 0xe0);
  }
  *(undefined8 *)((longlong)param_1 + 8) = 7;
  _Dst = (void *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0xa8);
  *(void **)((longlong)param_1 + 0x10) = _Dst;
  if (_Dst == (void *)0x0) {
    DVar3 = 0x8007000e;
    goto LAB_145e25cce;
  }
  QueryPerformanceFrequency(&local_28);
  fVar6 = *(float *)((longlong)param_1 + 0x16c) * (float)local_28.QuadPart;
  uVar4 = (ulonglong)fVar6;
  *(ulonglong *)((longlong)param_1 + 0x170) =
       (longlong)(fVar6 - 9.223372e+18) & (longlong)uVar4 >> 0x3f | uVar4;
  fVar6 = (float)local_28.QuadPart * *(float *)((longlong)param_1 + 0x178);
  uVar4 = (ulonglong)fVar6;
  *(ulonglong *)((longlong)param_1 + 0x180) =
       (longlong)(fVar6 - 9.223372e+18) & (longlong)uVar4 >> 0x3f | uVar4;
  DVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 200) + 0x120))
                    (*(longlong **)((longlong)param_1 + 200),0,0,&DAT_14a34c500);
  DVar3 = DVar2;
  if ((int)DVar2 < 0) goto LAB_145e25cce;
  pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0xb8) = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffffffffffff) {
    DVar3 = GetLastError();
    if ((int)DVar3 < 1) {
      DVar2 = 0;
      if ((int)DVar3 < 0) goto LAB_145e25cce;
      goto LAB_145e25c8e;
    }
LAB_145e25d34:
    DVar3 = DVar3 & 0xffff | 0x80070000;
  }
  else {
LAB_145e25c8e:
    pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0xc0) = pvVar5;
    if (pvVar5 == (HANDLE)0xffffffffffffffff) {
      DVar3 = GetLastError();
      if (0 < (int)DVar3) goto LAB_145e25d34;
      DVar2 = 0;
      if ((int)DVar3 < 0) goto LAB_145e25cce;
    }
    pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x18) = pvVar5;
    if (pvVar5 == (HANDLE)0xffffffffffffffff) {
      DVar3 = GetLastError();
      if (0 < (int)DVar3) goto LAB_145e25d34;
      DVar2 = 0;
      if ((int)DVar3 < 0) goto LAB_145e25cce;
    }
    DVar3 = DVar2;
    if (*(longlong *)((longlong)param_1 + 0xd0) == 0) {
      pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1473748fa,param_1,0,(LPDWORD)0x0);
      *(HANDLE *)((longlong)param_1 + 0x20) = pvVar5;
      if (pvVar5 == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        DVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          DVar3 = DVar2;
        }
      }
    }
  }
LAB_145e25cce:
  if ((local_20 ^ (ulonglong)auStackY_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DVar3;
}



// FUNCTION 145e25d9c FUN_145e25d9c body=744 status=ok
// SIG undefined FUN_145e25d9c(void)

undefined8 * FUN_145e25d9c(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  local_58 = 0x4400000001;
  local_50 = 0;
  FUN_140056680(local_68,L"D3D12 ReadOnly4K Texture Pool Allocator");
  uVar2 = FUN_14001cc68(0x100,0x10);
  local_70 = *(undefined4 *)(param_1 + 6);
  local_80 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_88 = 0x400000;
  local_90 = 0x1000;
  local_98 = 0x400000;
  local_a8 = local_68;
  FUN_14156b70a(uVar2,param_2,*(undefined4 *)((longlong)param_1 + 0xc),&local_58);
  FUN_145e26086(uVar2);
  param_1[2] = uVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0x4400000001;
  local_50 = 0;
  FUN_140056680(local_68,L"D3D12 ReadOnly Texture Pool Allocator");
  uVar1 = DAT_14c760b44;
  lVar3 = (longlong)DAT_14c760b40;
  uVar2 = FUN_14001cc68(0x100,0x10);
  local_70 = *(undefined4 *)(param_1 + 6);
  local_80 = 0;
  local_88 = uVar1;
  local_a0 = 0;
  local_78 = 1;
  local_90 = 0x10000;
  local_a8 = local_68;
  local_98 = lVar3;
  FUN_14156b70a(uVar2,param_2,*(undefined4 *)((longlong)param_1 + 0xc),&local_58);
  FUN_145e26086(uVar2);
  param_1[3] = uVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0x8400000001;
  local_50 = 0;
  FUN_140056680(local_68,L"D3D12 RT Texture Pool Allocator");
  uVar1 = DAT_14ca76870;
  lVar3 = (longlong)DAT_14ca76858;
  uVar2 = FUN_14001cc68(0x100,0x10);
  local_70 = *(undefined4 *)(param_1 + 6);
  local_80 = 0;
  local_88 = uVar1;
  local_a0 = 0;
  local_78 = 0;
  local_90 = 0x10000;
  local_a8 = local_68;
  local_98 = lVar3;
  FUN_14156b70a(uVar2,param_2,*(undefined4 *)((longlong)param_1 + 0xc),&local_58);
  FUN_145e26086(uVar2);
  param_1[4] = uVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0x4400000001;
  local_50 = 0;
  FUN_140056680(local_68,L"D3D12 UAV Texture Pool Allocator");
  uVar1 = DAT_14ca76870;
  lVar3 = (longlong)DAT_14ca76858;
  uVar2 = FUN_14001cc68(0x100,0x10);
  local_70 = *(undefined4 *)(param_1 + 6);
  local_80 = 0;
  local_88 = uVar1;
  local_a0 = 0;
  local_78 = 0;
  local_90 = 0x10000;
  local_a8 = local_68;
  local_98 = lVar3;
  FUN_14156b70a(uVar2,param_2,*(undefined4 *)((longlong)param_1 + 0xc),&local_58);
  FUN_145e26086(uVar2);
  param_1[5] = uVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26086 FUN_145e26086 body=1 status=ok
// SIG undefined FUN_145e26086(void)

void FUN_145e26086(void)

{
  return;
}



// FUNCTION 145e26088 FUN_145e26088 body=226 status=ok
// SIG undefined FUN_145e26088(void)

longlong * FUN_145e26088(longlong *param_1)

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
  pcVar13 = FUN_1462f382c;
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



// FUNCTION 145e26170 FUN_145e26170 body=136 status=ok
// SIG undefined FUN_145e26170(void)

code * FUN_145e26170(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCMaskBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTextureMetadata";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000015f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472664b0;
}



// FUNCTION 145e261f8 FUN_145e261f8 body=138 status=ok
// SIG undefined FUN_145e261f8(void)

code * FUN_145e261f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchOffsetTL";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000157;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266876;
}



// FUNCTION 145e26282 FUN_145e26282 body=226 status=ok
// SIG undefined FUN_145e26282(void)

longlong * FUN_145e26282(longlong *param_1)

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
  pcVar13 = FUN_1462f85c4;
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



// FUNCTION 145e2636a FUN_145e2636a body=136 status=ok
// SIG undefined FUN_145e2636a(void)

code * FUN_145e2636a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e263f2;
}



// FUNCTION 145e263f2 FUN_145e263f2 body=138 status=ok
// SIG undefined FUN_145e263f2(void)

code * FUN_145e263f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728c9bc;
}



// FUNCTION 145e2647c FUN_145e2647c body=25 status=ok
// SIG undefined FUN_145e2647c(void)

undefined8 FUN_145e2647c(undefined8 param_1,undefined8 param_2)

{
  FUN_145e26496(param_2);
  return param_2;
}



// FUNCTION 145e26496 FUN_145e26496 body=422 status=ok
// SIG undefined FUN_145e26496(void)

longlong * FUN_145e26496(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb81b68 != (longlong *)0x0 && DAT_14cb81b70 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb81b68 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb81b68;
    if (DAT_14cb81b70 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145e26567;
  }
  lVar3 = FUN_14001cc68(0x158,0x10);
  FUN_145e2663e(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b40fe80;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145e26567;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145e26567;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145e265e2:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145e2655d;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145e265e2;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145e2655d:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_145e26567:
  *param_1 = local_38;
  param_1[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e2663e FUN_145e2663e body=315 status=ok
// SIG undefined FUN_145e2663e(void)

undefined8 * FUN_145e2663e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b40fac0;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b40f220;
  param_1[4] = &PTR_FUN_14b40f240;
  param_1[6] = &PTR_FUN_14b40f260;
  param_1[0xd] = 0;
  param_1[0xe] = 0x200000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 1;
  *(undefined1 *)((longlong)param_1 + 299) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x24] = &PTR_FUN_14b2ee310;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(byte *)((longlong)param_1 + 0x12a) = *(byte *)((longlong)param_1 + 0x12a) & 0x80 | 10;
  *(undefined2 *)(param_1 + 0x25) = 0x404;
  FUN_140cbebe8(param_1 + 0x24,0);
  return param_1;
}



// FUNCTION 145e2677a FUN_145e2677a body=390 status=ok
// SIG undefined FUN_145e2677a(void)

undefined8 FUN_145e2677a(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [20];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x10);
  local_34 = param_4;
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_145e26852;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_145e26875:
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_145e26875;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x18) = lVar5;
      if (lVar5 != 0) goto LAB_145e26813;
    }
    uVar4 = 0;
    goto LAB_145e26852;
  }
LAB_145e26813:
  FUN_145e26902(local_48,param_3,&local_34);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_145e268fd:
      lVar6 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_145e268fd;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x18) = lVar6;
  }
  (**(code **)(*param_2 + 0x28))(param_2,lVar6,local_48);
  FUN_1449db362(local_48);
  uVar4 = 1;
LAB_145e26852:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26902 FUN_145e26902 body=229 status=ok
// SIG undefined FUN_145e26902(void)

longlong * FUN_145e26902(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_LAB_14b42b1a0;
  *(undefined4 *)(puVar3 + 1) = *param_3;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar3[2] = lVar7;
  *puVar3 = &PTR_FUN_14b42b130;
  puVar3[3] = uVar4;
  puVar3[4] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    puVar3[5] = &LAB_14580f08a;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14580f08a;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 145e269e7 FUN_145e269e7 body=66 status=ok
// SIG undefined FUN_145e269e7(void)

longlong FUN_145e269e7(void)

{
  longlong lVar1;
  
  if (DAT_14c9512b8 == 0) {
    FUN_14156ba2d();
    lVar1 = FUN_144a817a2();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9512b8 = lVar1;
  }
  return DAT_14c9512b8;
}



// FUNCTION 145e26a2a FUN_145e26a2a body=314 status=ok
// SIG undefined FUN_145e26a2a(void)

longlong * FUN_145e26a2a(void)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined ***local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c948f90 == 0) {
    DAT_14c948f90 = FUN_145e26bee();
  }
  plVar1 = (longlong *)FUN_144a797b2();
  FUN_140aa7318(plVar1,1);
  plVar1[0x18] = (longlong)FUN_140631fbe;
  FUN_14000e6f0(&local_c0,2);
  local_b8 = 0x110;
  local_b4 = 2;
  local_b0 = 0;
  FUN_14000e6f0(&local_c8,2);
  local_a8 = local_c8;
  local_a0 = 0xe0;
  local_9c = 2;
  local_98 = 0;
  FUN_14000e6f0(&local_c8,3);
  local_90 = local_c8;
  local_88 = 0x100;
  local_84 = 3;
  local_80 = 0;
  local_d0 = local_78;
  local_d8 = &local_c0;
  FUN_145e26b65(plVar1);
  FUN_144869430(&local_c0);
  local_c0 = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_c0,0);
  FUN_144a7fc42(&local_c0);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26b65 FUN_145e26b65 body=135 status=ok
// SIG undefined FUN_145e26b65(void)

void FUN_145e26b65(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x250);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26bee FUN_145e26bee body=314 status=ok
// SIG undefined FUN_145e26bee(void)

longlong * FUN_145e26bee(void)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined ***local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c948f78 == 0) {
    DAT_14c948f78 = FUN_145e26db2();
  }
  plVar1 = (longlong *)FUN_1449e2fb2();
  FUN_140aa7318(plVar1,1);
  plVar1[0x18] = (longlong)&DAT_1427db2a2;
  FUN_14000e6f0(&local_c0,2);
  local_b8 = 0x40;
  local_b4 = 2;
  local_b0 = 0;
  FUN_14000e6f0(&local_c8,2);
  local_a8 = local_c8;
  local_a0 = 0x48;
  local_9c = 2;
  local_98 = 0;
  FUN_14000e6f0(&local_c8,3);
  local_90 = local_c8;
  local_88 = 0x90;
  local_84 = 3;
  local_80 = 0;
  local_d0 = local_78;
  local_d8 = &local_c0;
  FUN_145e26d29(plVar1);
  FUN_144869430(&local_c0);
  local_c0 = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_c0,0);
  FUN_144a7fc42(&local_c0);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26d29 FUN_145e26d29 body=135 status=ok
// SIG undefined FUN_145e26d29(void)

void FUN_145e26d29(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0xb0);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26db2 FUN_145e26db2 body=196 status=ok
// SIG undefined FUN_145e26db2(void)

longlong * FUN_145e26db2(void)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined ***local_b8;
  undefined1 *local_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined1 local_90 [120];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141050fd7();
  plVar1 = (longlong *)FUN_1400163b0();
  FUN_140aa7318(plVar1,1);
  FUN_14000e6f0(&local_a8,2);
  local_a0 = 0x28;
  local_9c = 2;
  local_98 = 0;
  local_b0 = local_90;
  local_b8 = &local_a8;
  FUN_145e26e77(plVar1);
  FUN_144869430(&local_a8);
  local_a8 = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_a8,0);
  FUN_144a7fc42(&local_a8);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26e77 FUN_145e26e77 body=135 status=ok
// SIG undefined FUN_145e26e77(void)

void FUN_145e26e77(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x30);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e26f00 FUN_145e26f00 body=140 status=ok
// SIG undefined FUN_145e26f00(void)

undefined1 * FUN_145e26f00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e26f8c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeTracesParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionsVisualizeTracesParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f67b0;
  return &LAB_1471f67ec;
}



// FUNCTION 145e26f8c FUN_145e26f8c body=261 status=ok
// SIG undefined FUN_145e26f8c(void)

void FUN_145e26f8c(void)

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
              0x110) < DAT_14c9f6830) {
    FUN_144b3d300(&DAT_14c9f6830);
    if (DAT_14c9f6830 == -1) {
      FUN_145e27092(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenReflectionsVisualizeTracesParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f67b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5873b);
      _Init_thread_footer(&DAT_14c9f6830);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e27092 FUN_145e27092 body=226 status=ok
// SIG undefined FUN_145e27092(void)

longlong * FUN_145e27092(longlong *param_1)

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
  pcVar13 = FUN_1462dd784;
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



// FUNCTION 145e2717a FUN_145e2717a body=132 status=ok
// SIG undefined FUN_145e2717a(void)

undefined1 * FUN_145e2717a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisualizeTracesData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e27176;
}



// FUNCTION 145e2720a FUN_145e2720a body=179 status=ok
// SIG undefined FUN_145e2720a(void)

undefined8 * FUN_145e2720a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4ca1f0;
  *(undefined4 *)(param_1 + 7) = 4;
  lVar1 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14588a226();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e272be FUN_145e272be body=26 status=ok
// SIG undefined FUN_145e272be(void)

void FUN_145e272be(undefined8 param_1)

{
  FUN_145e272d8();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145e272d8 FUN_145e272d8 body=306 status=ok
// SIG undefined FUN_145e272d8(void)

void FUN_145e272d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  uVar4 = DAT_14cabc548;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar5 = FUN_144a52528();
    plVar6 = (longlong *)FUN_1402c9134(uVar5,uVar4,&local_30,0);
    if (plVar6 != (longlong *)0x0) {
      FUN_145e2740c(param_1);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0xb0))(plVar6);
      lVar3 = *(longlong *)(param_1 + 0x130);
      plVar6 = *(longlong **)(param_1 + 0x138);
      if (plVar6 == (longlong *)0x0) {
        local_30 = lVar3 + 8;
        if (lVar3 == 0) {
          local_30 = lVar3;
        }
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_30 = lVar3 + 8;
        if (lVar3 == 0) {
          local_30 = lVar3;
        }
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_28 = plVar6;
      }
      (**(code **)(*plVar7 + 8))(plVar7,&local_30);
      plVar7 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    FUN_14156ba50(*(undefined8 *)(param_1 + 0x130));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2740c FUN_145e2740c body=238 status=ok
// SIG undefined FUN_145e2740c(void)

void FUN_145e2740c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_1447c1074(DAT_14cabc548);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0xa8))(plVar3);
    local_30 = *(undefined8 *)(param_1 + 0x130);
    plVar3 = *(longlong **)(param_1 + 0x138);
    if (plVar3 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_28 = plVar3;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
    plVar4 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x151) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e274fc FUN_145e274fc body=40 status=ok
// SIG undefined FUN_145e274fc(void)

undefined8 FUN_145e274fc(undefined8 param_1,int param_2)

{
  FUN_145e27524();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e27524 FUN_145e27524 body=151 status=ok
// SIG undefined FUN_145e27524(void)

void FUN_145e27524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc2ef0;
  param_1[5] = &PTR_FUN_14abc3380;
  param_1[6] = &PTR_LAB_14abc33c0;
  param_1[0x22] = &PTR_FUN_14abc3410;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abc09e0;
  param_1[5] = &PTR_LAB_14abc0e70;
  param_1[6] = &PTR_LAB_14abc0eb0;
  param_1[0x22] = &PTR_LAB_14abc0f00;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145e275c6 FUN_145e275c6 body=180 status=ok
// SIG undefined FUN_145e275c6(void)

undefined8 * FUN_145e275c6(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = (*(uint *)(param_1 + 9) & 0xfffffffc) + 1;
  *param_1 = &PTR_FUN_14ac0c2a0;
  param_1[10] = 0;
  FUN_14111896e(param_1 + 0xb);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  lVar1 = FUN_1459eb822();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = lVar1;
  *(undefined4 *)(param_1 + 0x11) = 0xbf800000;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x12] = lVar1;
  return param_1;
}



// FUNCTION 145e27686 FUN_145e27686 body=117 status=ok
// SIG undefined FUN_145e27686(void)

undefined8 * FUN_145e27686(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x180);
  memset(puVar1 + 1,0,0x178);
  *puVar1 = &PTR_FUN_14b453a20;
  FUN_145e276fc(puVar1 + 5);
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  return puVar1;
}



// FUNCTION 145e276fc FUN_145e276fc body=1673 status=ok
// SIG undefined FUN_145e276fc(void)

undefined8 * FUN_145e276fc(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b453040;
  local_50[3] = param_1;
  local_50[4] = FUN_143e8138e;
  local_58 = 0;
  FUN_14156bb80(param_1 + 0xc,L"cohtml.list",L"List all currently active views",&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e81cb8;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0xe,L"cohtml.reload",
                L"Refreshes the view with the specified <id> or all views if no id is specified.",
                &local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e821ba;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x10,L"cohtml.redirect",
                L"Redirects the view with the specified <id> to the specified <url> or all views if no id is specified.\r\nNote: the <url> MUST be surrounded by DOUBLE quotes (e.g. \"http://coherent-labs.com\")"
                ,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e827d8;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x12,L"cohtml.debug",
                L"Toggles drawing of paint rectangles on the view with the specified <id> or all views if no id is specified."
                ,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e82d98;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x14,L"cohtml.track",
                L"Toggles tracking the view with the specified <id>. Only tracked views are profiled with stat Prysm.\r\n* If no views are explicitly tracked, all views are profiled.\r\n* Pass no arguments to reset tracked views."
                ,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e83400;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x16,L"cohtml.setmipbias",
                L"Sets the MipMap LOD bias for all graphics samplers used in the Prysm rendering backend.\r\n* Pass 0 or no arguments to reset to the default setting."
                ,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e8393c;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x18,L"cohtml.logcache",
                L"Prints the current cache settings and usage to the log",&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_143e83e1c;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x1a,L"cohtml.toggleemitmetadata",
                L"Toggle emitting render command metadata to profile tools",&local_50);
  FUN_1449db362(&local_50);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14b4530b0;
  local_50[3] = param_1;
  local_50[4] = FUN_1489cd766;
  local_58 = 0;
  FUN_14156bb10(param_1 + 0x1c,L"cohtml.profile",
                L"Profiles for X seconds, emitting UI performance data to json file stored in Saved/Cohtml/profiling/trace.json"
                ,&local_50);
  FUN_1449db362(&local_50);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_145e27d86(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e27d86 FUN_145e27d86 body=265 status=ok
// SIG undefined FUN_145e27d86(void)

void FUN_145e27d86(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b453200;
  local_40[3] = param_1;
  local_40[4] = FUN_140f04ab4;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_30,&local_40);
  *param_1 = local_30;
  FUN_1449db362(&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e27e98 FUN_145e27e98 body=373 status=ok
// SIG undefined FUN_145e27e98(void)

undefined8 * FUN_145e27e98(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145785d54();
  *param_1 = &PTR_FUN_14b9703a0;
  *(undefined2 *)(param_1 + 0x82) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x412) = 0;
  lVar4 = FUN_140425b9a();
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar2 = (undefined2 *)param_1[4];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 2) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
    *(undefined4 *)(param_1 + 3) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
    if (param_1 + 2 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 5) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_145e27f52;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar4);
  }
LAB_145e27f52:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2800e FUN_145e2800e body=38 status=ok
// SIG undefined FUN_145e2800e(void)

undefined8 FUN_145e2800e(undefined8 param_1,int param_2)

{
  FUN_145e28034();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e28034 FUN_145e28034 body=153 status=ok
// SIG undefined FUN_145e28034(void)

void FUN_145e28034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b6a90;
  FUN_1456bab0c(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
  }
  FUN_140fe7f98(param_1 + 0x16);
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145e280ce FUN_145e280ce body=155 status=ok
// SIG undefined FUN_145e280ce(void)

void FUN_145e280ce(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_1410d8a1a(lVar1);
            if (lVar1 != 0) {
              FUN_145e2816a(lVar1,param_4);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145e2816a FUN_145e2816a body=715 status=ok
// SIG undefined FUN_145e2816a(void)

void FUN_145e2816a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_144a7c06e(param_2);
  if (cVar4 == '\0') goto LAB_145e283b7;
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd84c8);
  iVar5 = FUN_140e1edd4(uVar6,0);
  if (iVar5 == *(int *)(param_1 + 0xbc)) {
    iVar7 = 1;
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_145e281cd;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xc0) + 1;
LAB_145e281cd:
    *(int *)(param_1 + 0xbc) = iVar5;
    *(int *)(param_1 + 0xc0) = iVar7;
  }
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd84f0);
  cVar4 = FUN_1410c4486(uVar6,0);
  if (*(char *)(param_1 + 0xc4) == cVar4) {
    iVar5 = 1;
    if (*(int *)(param_1 + 200) == 0) goto LAB_145e2820d;
  }
  else {
    iVar5 = *(int *)(param_1 + 200) + 1;
LAB_145e2820d:
    *(char *)(param_1 + 0xc4) = cVar4;
    *(int *)(param_1 + 200) = iVar5;
  }
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd8518);
  cVar4 = FUN_1410c4486(uVar6,0);
  if (*(char *)(param_1 + 0xd4) == cVar4) {
    iVar5 = 1;
    if (*(int *)(param_1 + 0xd8) == 0) goto LAB_145e2824d;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xd8) + 1;
LAB_145e2824d:
    *(char *)(param_1 + 0xd4) = cVar4;
    *(int *)(param_1 + 0xd8) = iVar5;
  }
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd8540);
  cVar4 = FUN_1410c4486(uVar6,0);
  if (*(char *)(param_1 + 0xe4) == cVar4) {
    iVar5 = 1;
    if (*(int *)(param_1 + 0xe8) == 0) goto LAB_145e2828d;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xe8) + 1;
LAB_145e2828d:
    *(char *)(param_1 + 0xe4) = cVar4;
    *(int *)(param_1 + 0xe8) = iVar5;
  }
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd8568);
  cVar4 = FUN_1410c4486(uVar6,0);
  if (*(char *)(param_1 + 0xf4) == cVar4) {
    iVar5 = 1;
    if (*(int *)(param_1 + 0xf8) == 0) goto LAB_145e282cd;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xf8) + 1;
LAB_145e282cd:
    *(char *)(param_1 + 0xf4) = cVar4;
    *(int *)(param_1 + 0xf8) = iVar5;
  }
  uVar6 = FUN_144a06846(param_2,&DAT_14cbd8590);
  cVar4 = FUN_1410c4486(uVar6,0);
  if (*(char *)(param_1 + 0xec) == cVar4) {
    iVar5 = 1;
    if (*(int *)(param_1 + 0xf0) == 0) goto LAB_145e2831b;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xf0) + 1;
LAB_145e2831b:
    *(char *)(param_1 + 0xec) = cVar4;
    *(int *)(param_1 + 0xf0) = iVar5;
  }
  FUN_1449027d0(param_1,&local_50);
  lVar3 = *(longlong *)(local_50 + 0x2c0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
  *(int *)(lVar3 + 0x160) = *(int *)(lVar3 + 0x160) + 1;
  FUN_145e28436(lVar3,param_1 + 0xbc);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
  lVar3 = *(longlong *)(local_50 + 0x2d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x230));
  *(int *)(lVar3 + 0x228) = *(int *)(lVar3 + 0x228) + 1;
  FUN_145e28436(lVar3 + 0xb0,param_1 + 0xdc);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x230));
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_145e283b7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e28436 FUN_145e28436 body=84 status=ok
// SIG undefined FUN_145e28436(void)

void FUN_145e28436(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[1] != param_2[1]) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if (param_1[3] != param_2[3]) {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[3] = param_2[3];
  }
  if (param_1[5] != param_2[5]) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[5] = param_2[5];
  }
  if (param_1[7] != param_2[7]) {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = param_2[7];
  }
  return;
}



// FUNCTION 145e28496 FUN_145e28496 body=180 status=ok
// SIG undefined FUN_145e28496(void)

undefined8 * FUN_145e28496(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bcc9e40;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 0x124) = 1;
  return param_1;
}



// FUNCTION 145e2854a FUN_145e2854a body=292 status=ok
// SIG undefined FUN_145e2854a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e2854a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca40bc0) {
    FUN_144b3d300(&DAT_14ca40bc0);
    if (DAT_14ca40bc0 == -1) {
      FUN_145e2866e();
      FUN_145e28774();
      FUN_140db5666(&DAT_14ca40b18,0,&DAT_14ca40ab0,L"FOcclusionRGS",
                    L"/Engine/Private/RayTracing/RayTracingOcclusionRGS.usf",L"OcclusionRGS",6,0xc0,
                    FUN_1472c41ae,FUN_1472c416a,&LAB_14177b864,&LAB_1472c4166,&LAB_1472c4160,
                    &LAB_1472c4140,0xe0,&DAT_14ca435d8);
      _DAT_14ca40b18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f7cb62);
      _Init_thread_footer(&DAT_14ca40bc0);
    }
  }
  return &DAT_14ca40b18;
}



// FUNCTION 145e2866e FUN_145e2866e body=261 status=ok
// SIG undefined FUN_145e2866e(void)

void FUN_145e2866e(void)

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
              0x110) < DAT_14ca43658) {
    FUN_144b3d300(&DAT_14ca43658);
    if (DAT_14ca43658 == -1) {
      FUN_14156bbf0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0xd2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca435d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142faf9ec);
      _Init_thread_footer(&DAT_14ca43658);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e28774 FUN_145e28774 body=205 status=ok
// SIG undefined FUN_145e28774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e28774(void)

{
  if ((DAT_14ca40b17 & 2) == 0) {
    DAT_14ca40b17 = DAT_14ca40b17 | 2;
    _DAT_14ca40ab8 = L"FOcclusionRGS";
    _DAT_14ca40ad0 = FUN_146826540;
    _DAT_14ca40ad8 = FUN_146825d77;
    _DAT_14ca40ae0 = FUN_146825fd6;
    _DAT_14ca40ae8 = FUN_1407e02ea;
    _DAT_14ca40af0 = FUN_146826273;
    _DAT_14ca40ac8 = FUN_1472c4112;
    _DAT_14ca40b08 = 0xffffffff000000e0;
    _DAT_14ca40b10 = 8;
    DAT_14ca40b14 = 0;
    _DAT_14ca40af8 = &LAB_1472c413c;
    FUN_145e28842();
    FUN_1407e00cc(&DAT_14ca40ab0);
    return;
  }
  return;
}



// FUNCTION 145e28842 FUN_145e28842 body=123 status=ok
// SIG undefined FUN_145e28842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e28842(void)

{
  _DAT_14ca44558 = L"BASE";
  DAT_14ca44582 = 4;
  _DAT_14ca44560 = FUN_140b35ae4();
  _DAT_14ca44568 = DAT_14ca40ac0;
  _DAT_14ca44570 = &LAB_14682652b;
  DAT_14ca40ac0 = &DAT_14ca44558;
  DAT_14ca40b15 = DAT_14ca40b15 + '\x01';
  _DAT_14ca44578 = 0x100000000;
  if (*(char *)(_DAT_14ca44560 + 100) != '\0') {
    DAT_14ca40b16 = DAT_14ca40b16 + '\x01';
  }
  return;
}



// FUNCTION 145e288be FUN_145e288be body=138 status=ok
// SIG undefined FUN_145e288be(void)

code * FUN_145e288be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bTransmissionSamplingDistanceCulling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c000000de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cae1a;
}



// FUNCTION 145e28948 FUN_145e28948 body=138 status=ok
// SIG undefined FUN_145e28948(void)

code * FUN_145e28948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LODTransitionEnd";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472caea4;
}



// FUNCTION 145e289d2 FUN_145e289d2 body=144 status=ok
// SIG undefined FUN_145e289d2(void)

code * FUN_145e289d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14572025e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Light";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLightShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000000e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472caa54;
}



// FUNCTION 145e28a62 FUN_145e28a62 body=703 status=ok
// SIG undefined FUN_145e28a62(void)

undefined8 * FUN_145e28a62(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined8 local_320;
  longlong local_318;
  undefined1 local_309;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined1 local_2e0 [680];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_140a53a96(local_2e0);
  local_328 = &local_309;
  FUN_140a53d66(local_308,&DAT_149efe19f,".\\Runtime/UMG/Private/Components/SizeBox.cpp",0x24);
  FUN_140a50bf4(local_308,&local_2f0,local_2e0);
  plVar4 = local_2e8;
  if (local_2e8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_2f0;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
LAB_145e28c4e:
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000145e28cc1:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_2f0;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (local_2e8 == plVar6) {
      LOCK();
      plVar6 = local_2e8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar4;
        goto joined_r0x000145e28cc1;
      }
    }
    else {
      *(longlong **)(param_1 + 0x188) = local_2e8;
      if (plVar6 != (longlong *)0x0) goto LAB_145e28c4e;
    }
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2e8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e8 + 0x10))(local_2e8);
      }
    }
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_300 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_300 + 0x10))(local_300);
      }
    }
  }
  FUN_140a5660c(local_2e0);
  if (*(int *)(param_1 + 0x170) < 1) goto LAB_145e28bc3;
  lVar7 = **(longlong **)(param_1 + 0x168);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
LAB_145e28b78:
    lVar5 = FUN_145958512();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_145e28c1a;
  }
  else {
    if (lVar7 != 0) goto LAB_145e28b78;
LAB_145e28c1a:
    lVar7 = 0;
  }
  local_320 = *(undefined8 *)(param_1 + 0x180);
  local_318 = *(longlong *)(param_1 + 0x188);
  if (local_318 != 0) {
    LOCK();
    *(int *)(local_318 + 8) = *(int *)(local_318 + 8) + 1;
    UNLOCK();
  }
  FUN_145e28d22(lVar7,&local_320);
LAB_145e28bc3:
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  plVar4 = *(longlong **)(param_1 + 0x188);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e28d22 FUN_145e28d22 body=460 status=ok
// SIG undefined FUN_145e28d22(void)

void FUN_145e28d22(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[9] = *param_2;
  plVar7 = (longlong *)param_2[1];
  plVar6 = (longlong *)param_1[10];
  if (plVar6 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)param_1[10];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    param_1[10] = (longlong)plVar7;
  }
  (**(code **)(*param_1 + 0x2a8))(param_1);
  plVar7 = (longlong *)param_1[10];
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_145e28da9;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = param_1[9];
    bVar3 = false;
  }
LAB_145e28da9:
  if (param_1[6] == 0) {
    local_58 = DAT_14c98dec8;
    local_50 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_38 = &local_41;
    local_40 = FUN_143336ee2;
    FUN_1407616b4(param_1[6],&local_58);
  }
  FUN_145cfad50(lVar8,&local_58);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (!bVar3) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e28ef0 FUN_145e28ef0 body=91 status=ok
// SIG undefined FUN_145e28ef0(void)

void FUN_145e28ef0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_145e29068();
  FUN_145e28f4c(param_1,*(undefined1 *)(param_1 + 0x58));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_145e28fda(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,*(undefined1 *)(param_1 + 0x59));
}



// FUNCTION 145e28f4c FUN_145e28f4c body=111 status=ok
// SIG undefined FUN_145e28f4c(void)

void FUN_145e28f4c(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x58) = param_2;
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145e28fbc(0);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_145e28fbc(*(undefined8 *)(param_1 + 0x48));
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
                    /* WARNING: Could not recover jumptable at 0x000145e28fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e28fbc FUN_145e28fbc body=29 status=ok
// SIG undefined FUN_145e28fbc(void)

void FUN_145e28fbc(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x228) != param_2) {
    *(int *)(param_1 + 0x228) = param_2;
    FUN_14156c56c(param_1 + 0x1f8,1);
    return;
  }
  return;
}



// FUNCTION 145e28fda FUN_145e28fda body=111 status=ok
// SIG undefined FUN_145e28fda(void)

void FUN_145e28fda(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x59) = param_2;
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145e2904a(0);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_145e2904a(*(undefined8 *)(param_1 + 0x48));
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
                    /* WARNING: Could not recover jumptable at 0x000145e29045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e2904a FUN_145e2904a body=29 status=ok
// SIG undefined FUN_145e2904a(void)

void FUN_145e2904a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x22c) != param_2) {
    *(int *)(param_1 + 0x22c) = param_2;
    FUN_14156c56c(param_1 + 0x1f8,1);
    return;
  }
  return;
}



// FUNCTION 145e29068 FUN_145e29068 body=189 status=ok
// SIG undefined FUN_145e29068(void)

void FUN_145e29068(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) {
        local_38 = *param_2;
        uStack_30 = param_2[1];
        local_28 = 1;
        local_20 = 0;
        uStack_18 = 0;
        FUN_145e29126(0);
        goto LAB_145e290d1;
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
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_145e29126(*(undefined8 *)(param_1 + 0x48));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145e290d1:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e29126 FUN_145e29126 body=161 status=ok
// SIG undefined FUN_145e29126(void)

void FUN_145e29126(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined1 *)(param_2 + 4);
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,param_2 + 6);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8);
  }
  FUN_140a58e4a(param_1 + 0x218,uVar1,&local_48);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 6);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e291c8 FUN_145e291c8 body=205 status=ok
// SIG undefined FUN_145e291c8(void)

void FUN_145e291c8(longlong param_1,undefined8 param_2,int param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_145e29296();
  iVar2 = FUN_14487fd02(param_1);
  if (((param_3 == 0) || (iVar2 == 3)) && (*(longlong *)(param_1 + 0x398) != 0)) {
    lVar3 = FUN_144a7b4ca();
    lVar4 = *(longlong *)(param_1 + 0x398);
    if (((lVar4 != 0) && (lVar3 != 0)) &&
       ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 & param_4) == 1)))))) {
      FUN_146022f14(lVar4,CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x30) >> 8),1));
      lVar4 = FUN_14497e828(param_1);
      if (lVar4 != 0) {
        lVar3 = FUN_1403ca142();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          uVar5 = FUN_140d27a2a(lVar4);
          FUN_14601018c(uVar5,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145e29296 FUN_145e29296 body=95 status=ok
// SIG undefined FUN_145e29296(void)

void FUN_145e29296(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145e292f6();
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar2 = FUN_140082f10();
    if ((((*(longlong *)(param_1 + 0x398) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_14156c584();
      return;
    }
  }
  return;
}



// FUNCTION 145e292f6 FUN_145e292f6 body=68 status=ok
// SIG undefined FUN_145e292f6(void)

void FUN_145e292f6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    FUN_145e2933c(lVar1 + 0x60,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 145e2933c FUN_145e2933c body=187 status=ok
// SIG undefined FUN_145e2933c(void)

void FUN_145e2933c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145e293df;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145e293df:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145e293f8 FUN_145e293f8 body=46 status=ok
// SIG undefined FUN_145e293f8(void)

void FUN_145e293f8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145e29426(param_1 + 0x10);
  return;
}



// FUNCTION 145e29426 FUN_145e29426 body=55 status=ok
// SIG undefined FUN_145e29426(void)

void FUN_145e29426(longlong *param_1)

{
  FUN_145e2945e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2945e FUN_145e2945e body=375 status=ok
// SIG undefined FUN_145e2945e(void)

void FUN_145e2945e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_140989cc7(*(undefined8 *)(lVar2 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145e295d8 FUN_145e295d8 body=277 status=ok
// SIG undefined FUN_145e295d8(void)

void FUN_145e295d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar4 = *(longlong *)(param_1 + -0x10);
  if (lVar4 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      FUN_140457ffc(lVar4 + 0x2338,plVar1);
      uVar8 = (**(code **)(*plVar1 + 0x180))(plVar1);
      FUN_140ec668c(&local_38,uVar8);
      if (local_30 != (longlong *)0x0) {
        iVar6 = (int)local_30[1];
        do {
          if (iVar6 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_30[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar9 = local_30;
        } while (!bVar10);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
        if (plVar9 != (longlong *)0x0) {
          if (local_38 != 0) {
            FUN_145e296ee(local_38,lVar4,*(undefined8 *)(param_1 + 0x38));
          }
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
    }
  }
  FUN_140457ffc(&DAT_14c9647a0,plVar1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e296ee FUN_145e296ee body=242 status=ok
// SIG undefined FUN_145e296ee(void)

void FUN_145e296ee(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar1 = (longlong *)(param_1 + 0x40);
    uVar6 = 0;
    do {
      lVar5 = uVar6 * 0x40;
      cVar2 = FUN_141280818(*plVar1 + lVar5 + 0x10,param_2);
      if (cVar2 != '\0') {
        lVar3 = *plVar1;
        lVar4 = (longlong)*(int *)(lVar3 + 8 + lVar5);
        if (lVar4 != 0) {
          lVar3 = *(longlong *)(lVar3 + lVar5);
          lVar7 = 0;
          do {
            if (*(longlong *)(lVar3 + lVar7) == local_58) {
              local_50 = &local_58;
              FUN_145e298ce(*plVar1 + lVar5,&local_50);
            }
            lVar7 = lVar7 + 8;
          } while (lVar4 * 8 != lVar7);
          lVar3 = *plVar1;
        }
        if (*(int *)(lVar3 + 8 + lVar5) == 0) {
          FUN_145e297e2(plVar1,uVar6 & 0xffffffff);
          break;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x48));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e297e2 FUN_145e297e2 body=84 status=ok
// SIG undefined FUN_145e297e2(void)

void FUN_145e297e2(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_145c98868(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_145e29836(param_1);
  return;
}



// FUNCTION 145e29836 FUN_145e29836 body=62 status=ok
// SIG undefined FUN_145e29836(void)

void FUN_145e29836(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145e29874(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 145e29874 FUN_145e29874 body=89 status=ok
// SIG undefined FUN_145e29874(void)

ulonglong FUN_145e29874(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 145e298ce FUN_145e298ce body=200 status=ok
// SIG undefined FUN_145e298ce(void)

void FUN_145e298ce(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar6 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar2[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar6;
  }
  return;
}



// FUNCTION 145e29996 FUN_145e29996 body=55 status=ok
// SIG undefined FUN_145e29996(void)

void FUN_145e29996(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_145ef41f4(lVar1);
    if (lVar1 != 0) {
      FUN_145e299ce(lVar1,param_1);
    }
  }
  FUN_1401bf1e0(param_1);
  return;
}



// FUNCTION 145e299ce FUN_145e299ce body=225 status=ok
// SIG undefined FUN_145e299ce(void)

void FUN_145e299ce(longlong param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = &local_38;
  iVar1 = FUN_145e29ab0(param_1 + 0x50);
  if (0 < iVar1) {
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x390) != 0)) {
      FUN_140457ffc(*(longlong *)(param_2 + 0x390) + 0x200,param_1);
    }
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_1 + 0x58);
    lVar2 = (longlong)local_40;
    _Src = *(void **)(param_1 + 0x50);
    if (lVar2 == 0) {
      local_3c = 0;
    }
    else {
      FUN_145ef44de(&local_48,local_40);
      memcpy(local_48,_Src,lVar2 << 3);
    }
    FUN_14158b8e5(&local_48);
    FUN_145e29c0e(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e29ab0 FUN_145e29ab0 body=293 status=ok
// SIG undefined FUN_145e29ab0(void)

int FUN_145e29ab0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar10 = (longlong)(int)uVar1;
  if (lVar10 == 0) {
    iVar7 = 0;
  }
  else {
    lVar2 = *param_1;
    bVar5 = FUN_145e29bd6(lVar2,*param_2);
    iVar7 = 0;
    uVar11 = 0;
    do {
      iVar3 = (int)uVar11;
      uVar4 = iVar3 + 1U;
      if ((int)(iVar3 + 1U) < (int)uVar1) {
        uVar4 = uVar1;
      }
      lVar8 = lVar2 + 8 + uVar11 * 8;
      uVar12 = uVar11;
      uVar13 = uVar11;
      do {
        uVar13 = uVar13 + 1;
        if (lVar10 <= (longlong)uVar13) {
          uVar12 = (ulonglong)uVar4;
          break;
        }
        bVar6 = FUN_145e29bd6(lVar8,*param_2);
        uVar12 = (ulonglong)((int)uVar12 + 1);
        lVar8 = lVar8 + 8;
      } while ((bVar5 & 1) == bVar6);
      if ((bVar5 & 1) == 0) {
        iVar9 = (int)uVar12 - iVar3;
        if (iVar7 != iVar3) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)iVar9 << 3);
        }
        iVar7 = iVar7 + iVar9;
      }
      uVar11 = uVar12;
      bVar5 = bVar5 ^ 1;
    } while ((longlong)uVar13 < lVar10);
    *(int *)(param_1 + 1) = iVar7;
    iVar7 = uVar1 - iVar7;
  }
  return iVar7;
}



// FUNCTION 145e29bd6 FUN_145e29bd6 body=55 status=ok
// SIG undefined FUN_145e29bd6(void)

ulonglong FUN_145e29bd6(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145e29c0e FUN_145e29c0e body=326 status=ok
// SIG undefined FUN_145e29c0e(void)

void FUN_145e29c0e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong *)(param_1 + 0x70) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x78) + 8) < 1)) {
    uVar3 = FUN_1401cb356();
    local_90 = 0;
    FUN_14485c47a(&local_90,param_1);
    local_98 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14be8f6c0;
    local_50 = local_90;
    local_78[0] = FUN_144645916;
    FUN_1401cbba4(uVar3,&local_88,L"GbxWeatherOcclusion",0);
    if ((undefined8 *)(param_1 + 0x70) != &local_88) {
      *(undefined8 *)(param_1 + 0x70) = local_88;
      local_88 = 0;
      plVar2 = *(longlong **)(param_1 + 0x78);
      *(longlong **)(param_1 + 0x78) = local_80;
      local_80 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar4 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar4 = &local_58;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e29d56 FUN_145e29d56 body=52 status=ok
// SIG undefined FUN_145e29d56(void)

void FUN_145e29d56(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x538,0x10);
  FUN_145e29d8a(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 145e29d8a FUN_145e29d8a body=159 status=ok
// SIG undefined FUN_145e29d8a(void)

undefined8 * FUN_145e29d8a(undefined8 *param_1)

{
  FUN_145854fc0();
  *param_1 = &PTR_FUN_14b906220;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  FUN_145e29e2a(param_1 + 0x77);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9f] = &PTR_FUN_14b9062d0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return param_1;
}



// FUNCTION 145e29e2a FUN_145e29e2a body=98 status=ok
// SIG undefined FUN_145e29e2a(void)

longlong * FUN_145e29e2a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  FUN_145e29e8c(param_1 + 4);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf8;
  return param_1;
}



// FUNCTION 145e29e8c FUN_145e29e8c body=265 status=ok
// SIG undefined FUN_145e29e8c(void)

longlong FUN_145e29e8c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a5dc74();
  *(undefined4 *)(param_1 + 0x10) = 8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf8 | 5;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x50) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x58) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x60) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x70) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x78) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x80) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x88) = (int)plVar2[1];
  FUN_140056680(param_1 + 0x90,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xa0,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return param_1;
}



// FUNCTION 145e29fa0 FUN_145e29fa0 body=207 status=ok
// SIG undefined FUN_145e29fa0(void)

undefined8 * FUN_145e29fa0(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6ab110;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb48) {
    FUN_144b3d300(&DAT_14caebb48);
    if (DAT_14caebb48 == -1) {
      FUN_14156c626();
      atexit((_func_5014 *)&LAB_14356ef69);
      _Init_thread_footer(&DAT_14caebb48);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 300;
  return param_1;
}



// FUNCTION 145e2a070 FUN_145e2a070 body=119 status=ok
// SIG undefined FUN_145e2a070(void)

void FUN_145e2a070(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_145e2a0e8(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  iVar1 = (int)param_2[7];
  *(uint *)(param_2 + 7) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x3c) < iVar1 + 1U) {
    FUN_145e2a16c(param_2 + 6,iVar1);
  }
  *(longlong *)(param_2[6] + (longlong)iVar1 * 8) = lVar2;
  return;
}



// FUNCTION 145e2a0e8 FUN_145e2a0e8 body=132 status=ok
// SIG undefined FUN_145e2a0e8(void)

void FUN_145e2a0e8(longlong param_1,int param_2)

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



// FUNCTION 145e2a16c FUN_145e2a16c body=132 status=ok
// SIG undefined FUN_145e2a16c(void)

void FUN_145e2a16c(longlong param_1,int param_2)

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



// FUNCTION 145e2a1f0 FUN_145e2a1f0 body=187 status=ok
// SIG undefined FUN_145e2a1f0(void)

void FUN_145e2a1f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_145e2a2ac(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"overheadnameplates");
        *(undefined8 *)(param_1 + 0xc0) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2a2ac FUN_145e2a2ac body=83 status=ok
// SIG undefined FUN_145e2a2ac(void)

void FUN_145e2a2ac(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_145e2a2ff(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145e2a2fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 145e2a2ff FUN_145e2a2ff body=105 status=ok
// SIG undefined FUN_145e2a2ff(void)

void FUN_145e2a2ff(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_145e2a368();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_145e2a368();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e2a351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145e2a368 FUN_145e2a368 body=55 status=ok
// SIG undefined FUN_145e2a368(void)

void FUN_145e2a368(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb058 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb058 = FUN_140002ddd(FUN_14660884b,uVar1,L"OakWidgetData_OverheadNameplateSet");
  }
  return;
}



// FUNCTION 145e2a3a0 FUN_145e2a3a0 body=158 status=ok
// SIG undefined FUN_145e2a3a0(void)

bool FUN_145e2a3a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2a440 FUN_145e2a440 body=488 status=ok
// SIG undefined FUN_145e2a440(void)

void FUN_145e2a440(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145e2a644();
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (lVar2 != 0) {
    local_60 = param_2 + 0x40;
    if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
      uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      lVar7 = param_1 + 0x120;
      if (*(longlong *)(param_1 + 0x128) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x128);
      }
      iVar10 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(param_1 + 0x130) - 1U &
                                (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar10 * 0x28);
          if (*plVar1 == lVar2) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar2 = plVar1[2];
              if (lVar2 != 0) {
                lVar7 = *(longlong *)(lVar2 + 0xa8);
                if (lVar7 == 0) {
                  uVar6 = FUN_14036a63e();
                  lVar7 = FUN_14477b664(uVar6);
                  *(longlong *)(lVar2 + 0xa8) = lVar7;
                }
                lVar8 = *(longlong *)(lVar2 + 0xb0);
                if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(lVar2 + 0xa0) != 0))
                {
                  plVar3 = *(longlong **)(lVar7 + 0xb8);
                  if ((plVar3 == (longlong *)0x0) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                    lVar8 = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
                    lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0xa0));
                  }
                  *(longlong *)(lVar2 + 0xb0) = lVar8;
                }
                local_68 = lVar2 + 0xb8;
                FUN_148e3a660(param_1,(int)plVar1[1],lVar2 + 0x98,lVar8 + 0x18);
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
            }
            break;
          }
          iVar10 = (int)plVar1[4];
        } while (iVar10 != -1);
      }
    }
    local_58 = param_2 + 8;
    FUN_148e2f000(param_1 + 0x98,local_4c);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e2a644 FUN_145e2a644 body=379 status=ok
// SIG undefined FUN_145e2a644(void)

void FUN_145e2a644(longlong param_1)

{
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140212f8e(&local_40);
  local_80 = (longlong *)(param_1 + 0x98);
  local_30 = param_1 + 0xa8;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_68 = local_28;
  iStack_64 = iStack_24;
  local_60 = local_20;
  local_5c = local_1c;
  local_78 = local_38;
  local_70 = local_30;
  local_48 = 0;
  local_58 = local_80;
  local_50 = local_80;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (DAT_14cbd5f98 + *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18) < local_40) {
        FUN_148e2db94(local_58);
        local_48 = CONCAT11(local_48._1_1_,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_148e2f160(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2a7c0 FUN_145e2a7c0 body=106 status=ok
// SIG undefined FUN_145e2a7c0(void)

undefined * FUN_145e2a7c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845008) {
    FUN_144b3d300(&DAT_14c845008);
    if (DAT_14c845008 == -1) {
      FUN_145e2a82a(&DAT_14c844fe8);
      atexit((_func_5014 *)&LAB_14276744e);
      _Init_thread_footer(&DAT_14c845008);
    }
  }
  return &DAT_14c844fe8;
}



// FUNCTION 145e2a82a FUN_145e2a82a body=86 status=ok
// SIG undefined FUN_145e2a82a(void)

longlong * FUN_145e2a82a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149e1c3b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 2;
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 145e2a880 FUN_145e2a880 body=156 status=ok
// SIG undefined FUN_145e2a880(void)

longlong * FUN_145e2a880(void)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [18];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c948f90 == 0) {
    DAT_14c948f90 = FUN_145e26bee();
  }
  plVar1 = (longlong *)FUN_1446f4bba();
  FUN_140aa7318(plVar1,1);
  FUN_144869430(local_a8);
  local_a8[0] = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,local_a8,0);
  FUN_144a7fc42(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2a91e FUN_145e2a91e body=144 status=ok
// SIG undefined FUN_145e2a91e(void)

code * FUN_145e2a91e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e2a9ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WritableSkyLightVisibilityRaysData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWritableSkyLightVisibilityRaysData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca43880;
  return FUN_145f75b9a;
}



// FUNCTION 145e2a9ae FUN_145e2a9ae body=261 status=ok
// SIG undefined FUN_145e2a9ae(void)

void FUN_145e2a9ae(void)

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
              0x110) < DAT_14ca43900) {
    FUN_144b3d300(&DAT_14ca43900);
    if (DAT_14ca43900 == -1) {
      FUN_145e2aab4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FWritableSkyLightVisibilityRaysData";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43880,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafa28);
      _Init_thread_footer(&DAT_14ca43900);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2aab4 FUN_145e2aab4 body=226 status=ok
// SIG undefined FUN_145e2aab4(void)

longlong * FUN_145e2aab4(longlong *param_1)

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
  pcVar13 = FUN_1463038c8;
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



// FUNCTION 145e2ab9c FUN_145e2ab9c body=132 status=ok
// SIG undefined FUN_145e2ab9c(void)

undefined1 * FUN_145e2ab9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutSkyLightVisibilityRays";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<SkyLightVisibilityRays>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e2ab98;
}



// FUNCTION 145e2ac2c FUN_145e2ac2c body=208 status=ok
// SIG undefined FUN_145e2ac2c(void)

undefined8 * FUN_145e2ac2c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a6940c0;
  memset(param_1 + 0x16,0,800);
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_1[0x86] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebfc8) {
    FUN_144b3d300(&DAT_14caebfc8);
    if (DAT_14caebfc8 == -1) {
      FUN_14156cdae();
      atexit((_func_5014 *)&LAB_14356f4a4);
      _Init_thread_footer(&DAT_14caebfc8);
    }
  }
  return param_1;
}



// FUNCTION 145e2ad08 FUN_145e2ad08 body=181 status=ok
// SIG undefined FUN_145e2ad08(void)

undefined8 * FUN_145e2ad08(undefined8 *param_1)

{
  FUN_145c4443c();
  *param_1 = &PTR_FUN_14ac54d20;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x4000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x90] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x4000;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x42c80000;
  return param_1;
}



// FUNCTION 145e2adbe FUN_145e2adbe body=38 status=ok
// SIG undefined FUN_145e2adbe(void)

undefined8 FUN_145e2adbe(undefined8 param_1,int param_2)

{
  FUN_145e2ade4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2ade4 FUN_145e2ade4 body=154 status=ok
// SIG undefined FUN_145e2ade4(void)

void FUN_145e2ade4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2ae7e FUN_145e2ae7e body=131 status=ok
// SIG undefined FUN_145e2ae7e(void)

void FUN_145e2ae7e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_145e2af02();
  uVar4 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar4) {
    plVar1 = (longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(uint *)(param_1 + 0x24) == uVar4) {
      iVar3 = 0;
      uVar2 = uVar4;
    }
    else {
      FUN_144893a1c(plVar1);
      uVar4 = *(uint *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0x20);
      uVar2 = *(uint *)(param_1 + 0x24);
    }
    *(uint *)(param_1 + 0x20) = uVar4 + iVar3;
    if (uVar2 - iVar3 < uVar4) {
      FUN_1447403be(plVar1);
    }
    memset((void *)((longlong)iVar3 + *plVar1),0,(longlong)(int)uVar4);
    *(undefined1 *)*plVar1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 145e2af02 FUN_145e2af02 body=13 status=ok
// SIG undefined FUN_145e2af02(void)

void FUN_145e2af02(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_144756208();
  return;
}



// FUNCTION 145e2af1a FUN_145e2af1a body=87 status=ok
// SIG undefined FUN_145e2af1a(void)

void FUN_145e2af1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2428d0;
  FUN_140d8c315(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2431f0;
  FUN_141069212(param_1 + 0xb);
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 145e2af72 FUN_145e2af72 body=38 status=ok
// SIG undefined FUN_145e2af72(void)

undefined8 FUN_145e2af72(undefined8 param_1,int param_2)

{
  FUN_145e2af98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2af98 FUN_145e2af98 body=154 status=ok
// SIG undefined FUN_145e2af98(void)

void FUN_145e2af98(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b43b680;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x18))();
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e2b02f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,1);
  return;
}



// FUNCTION 145e2b032 FUN_145e2b032 body=99 status=ok
// SIG undefined FUN_145e2b032(void)

undefined1 FUN_145e2b032(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_145e2b096(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145e2b096 FUN_145e2b096 body=93 status=ok
// SIG undefined FUN_145e2b096(void)

undefined8 * FUN_145e2b096(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141285bfd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b7a342(param_1,iVar1);
      FUN_148b7a3a4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145e2b0f4 FUN_145e2b0f4 body=118 status=ok
// SIG undefined FUN_145e2b0f4(void)

void FUN_145e2b0f4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      cVar2 = FUN_14480f766(lVar3 + 0x40,lVar1);
      if (cVar2 == '\0') {
        FUN_14480f766(lVar3 + 0x58,lVar1);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  FUN_145e2b16a(param_1);
  FUN_1406337e2(param_1,param_2);
  return;
}



// FUNCTION 145e2b16a FUN_145e2b16a body=122 status=ok
// SIG undefined FUN_145e2b16a(void)

void FUN_145e2b16a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x19] != 0) {
    *(undefined1 *)((longlong)param_1 + 0xc3) = 0;
    lVar1 = (**(code **)(*param_1 + 0x2b8))();
    if (lVar1 != 0) {
      lVar2 = FUN_14070560c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        if (param_1[0x19] != 0) {
          FUN_14480f766(lVar1 + 0x2ac8);
        }
        param_1[0x19] = 0;
      }
    }
  }
  return;
}



// FUNCTION 145e2b1f0 FUN_145e2b1f0 body=757 status=ok
// SIG undefined FUN_145e2b1f0(void)

undefined8 * FUN_145e2b1f0(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Sprite",1);
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14ab14670;
  param_1[0x72] = &PTR_FUN_14ab14cb0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x89] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  FUN_145e2b4e6(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x122) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_14081ae08(param_1,4);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x80;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2b4e6 FUN_145e2b4e6 body=288 status=ok
// SIG undefined FUN_145e2b4e6(void)

void FUN_145e2b4e6(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0x7fffffff00000000;
  *(undefined4 *)(param_1 + 0x29) = 0x7fffffff;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return;
}



// FUNCTION 145e2b606 FUN_145e2b606 body=40 status=ok
// SIG undefined FUN_145e2b606(void)

undefined8 FUN_145e2b606(undefined8 param_1,int param_2)

{
  FUN_145e2b62e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2b62e FUN_145e2b62e body=102 status=ok
// SIG undefined FUN_145e2b62e(void)

void FUN_145e2b62e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bcbb170;
  param_1[7] = &PTR_FUN_14bcbb460;
  param_1[8] = &PTR_FUN_14bcbb480;
  param_1[9] = &PTR_FUN_14bcbb4c0;
  param_1[10] = &PTR_FUN_14bcbb4e0;
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    FUN_145e2b694(lVar1);
    FUN_1400020a8(lVar1);
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e2b694 FUN_145e2b694 body=184 status=ok
// SIG undefined FUN_145e2b694(void)

void FUN_145e2b694(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_145e2b74c(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_145e2b782(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145e2b7b8(param_1 + 8);
  FUN_145d37a3e(param_1);
  return;
}



// FUNCTION 145e2b74c FUN_145e2b74c body=53 status=ok
// SIG undefined FUN_145e2b74c(void)

void FUN_145e2b74c(longlong *param_1)

{
  FUN_145e2b7ee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


