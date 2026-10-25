// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c63755 FUN_145c63755 body=150 status=ok
// SIG undefined FUN_145c63755(void)

undefined8 FUN_145c63755(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53534();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c637ec FUN_145c637ec body=150 status=ok
// SIG undefined FUN_145c637ec(void)

undefined8 FUN_145c637ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a536fc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63883 FUN_145c63883 body=150 status=ok
// SIG undefined FUN_145c63883(void)

undefined8 FUN_145c63883(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53618();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6391a FUN_145c6391a body=150 status=ok
// SIG undefined FUN_145c6391a(void)

undefined8 FUN_145c6391a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a537e0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c639b2 FUN_145c639b2 body=170 status=ok
// SIG undefined FUN_145c639b2(void)

undefined8 * FUN_145c639b2(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a8cac40;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145c63a5c(param_1 + 6);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c63a5c FUN_145c63a5c body=121 status=ok
// SIG undefined FUN_145c63a5c(void)

void FUN_145c63a5c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    plVar3 = (longlong *)*param_1;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        lVar2 = 0x3fd8;
        do {
          *(undefined ***)(lVar1 + lVar2) = &PTR_FUN_14a8cace0;
          *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0x18);
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145c63ad5 FUN_145c63ad5 body=602 status=ok
// SIG undefined FUN_145c63ad5(void)

void FUN_145c63ad5(void)

{
  undefined8 uVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145c635e4();
  uVar2 = DAT_14cad7d20;
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_145c64024(_Dst);
  local_30 = _Dst;
  FUN_145c63660(uVar1,uVar2,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_145c63d30(uVar2);
  uVar2 = DAT_14cad7d20;
  local_30 = (undefined8 *)FUN_1458d3d9a();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar2,uVar3,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_145c63dc7(uVar2);
  uVar2 = DAT_14cad7d20;
  local_30 = (undefined8 *)FUN_1458d4b68();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar2,uVar3,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_145c63e5e(uVar2);
  uVar2 = DAT_14cad7d20;
  local_30 = (undefined8 *)FUN_1458987e8();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar2,uVar3,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_145c63ef5(uVar2);
  uVar2 = DAT_14cad7d20;
  local_30 = (undefined8 *)FUN_1458d3cae();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar2,uVar3,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_145c63f8c(uVar2);
  uVar2 = DAT_14cad7d20;
  local_30 = (undefined8 *)FUN_14598eb0a();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar2,uVar3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63d30 FUN_145c63d30 body=150 status=ok
// SIG undefined FUN_145c63d30(void)

undefined8 FUN_145c63d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a539a8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63dc7 FUN_145c63dc7 body=150 status=ok
// SIG undefined FUN_145c63dc7(void)

undefined8 FUN_145c63dc7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53c54();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63e5e FUN_145c63e5e body=150 status=ok
// SIG undefined FUN_145c63e5e(void)

undefined8 FUN_145c63e5e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53b70();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63ef5 FUN_145c63ef5 body=150 status=ok
// SIG undefined FUN_145c63ef5(void)

undefined8 FUN_145c63ef5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a538c4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c63f8c FUN_145c63f8c body=150 status=ok
// SIG undefined FUN_145c63f8c(void)

undefined8 FUN_145c63f8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53a8c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64024 FUN_145c64024 body=170 status=ok
// SIG undefined FUN_145c64024(void)

undefined8 * FUN_145c64024(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a8cae40;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145c640ce(param_1 + 6);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c640ce FUN_145c640ce body=121 status=ok
// SIG undefined FUN_145c640ce(void)

void FUN_145c640ce(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    plVar3 = (longlong *)*param_1;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        lVar2 = 0x3fe0;
        do {
          *(undefined ***)(lVar1 + lVar2) = &PTR_FUN_14a8cace0;
          *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != -0x20);
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145c64147 FUN_145c64147 body=671 status=ok
// SIG undefined FUN_145c64147(void)

void FUN_145c64147(void)

{
  undefined8 uVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145c635e4();
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_145c646da(_Dst);
  local_30 = _Dst;
  FUN_145c63660(uVar1,uVar3,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c643e7(uVar2);
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3d9a();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c6447e(uVar2);
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3e86();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64515(uVar2);
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458f058c();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c645ac(uVar2);
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d4b68();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64643(uVar2);
  FUN_1401a700c(&local_30,0xd2);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458987e8();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c643e7 FUN_145c643e7 body=150 status=ok
// SIG undefined FUN_145c643e7(void)

undefined8 FUN_145c643e7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a530c0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6447e FUN_145c6447e body=150 status=ok
// SIG undefined FUN_145c6447e(void)

undefined8 FUN_145c6447e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a531a4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64515 FUN_145c64515 body=150 status=ok
// SIG undefined FUN_145c64515(void)

undefined8 FUN_145c64515(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52fdc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c645ac FUN_145c645ac body=150 status=ok
// SIG undefined FUN_145c645ac(void)

undefined8 FUN_145c645ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a5336c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64643 FUN_145c64643 body=150 status=ok
// SIG undefined FUN_145c64643(void)

undefined8 FUN_145c64643(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a53288();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c646da FUN_145c646da body=170 status=ok
// SIG undefined FUN_145c646da(void)

undefined8 * FUN_145c646da(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a8cadd0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145c64784(param_1 + 6);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c64784 FUN_145c64784 body=121 status=ok
// SIG undefined FUN_145c64784(void)

void FUN_145c64784(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    plVar3 = (longlong *)*param_1;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        lVar2 = 0x3fd8;
        do {
          *(undefined ***)(lVar1 + lVar2) = &PTR_FUN_14a8cace0;
          *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0x18);
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145c647fd FUN_145c647fd body=775 status=ok
// SIG undefined FUN_145c647fd(void)

void FUN_145c647fd(void)

{
  undefined8 uVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145c635e4();
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_145c64e90(_Dst);
  local_30 = _Dst;
  FUN_145c63660(uVar1,uVar3,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64b05(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3cae();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64b9c(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3d9a();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64c33(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3e86();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64cca(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458f058c();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64d61(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d4b68();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c64df8(uVar2);
  FUN_1401a700c(&local_30,0x66);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458987e8();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64b05 FUN_145c64b05 body=150 status=ok
// SIG undefined FUN_145c64b05(void)

undefined8 FUN_145c64b05(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52a84();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64b9c FUN_145c64b9c body=150 status=ok
// SIG undefined FUN_145c64b9c(void)

undefined8 FUN_145c64b9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52c4c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64c33 FUN_145c64c33 body=150 status=ok
// SIG undefined FUN_145c64c33(void)

undefined8 FUN_145c64c33(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52d30();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64cca FUN_145c64cca body=150 status=ok
// SIG undefined FUN_145c64cca(void)

undefined8 FUN_145c64cca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52b68();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64d61 FUN_145c64d61 body=150 status=ok
// SIG undefined FUN_145c64d61(void)

undefined8 FUN_145c64d61(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52ef8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64df8 FUN_145c64df8 body=150 status=ok
// SIG undefined FUN_145c64df8(void)

undefined8 FUN_145c64df8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a52e14();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c64e90 FUN_145c64e90 body=170 status=ok
// SIG undefined FUN_145c64e90(void)

undefined8 * FUN_145c64e90(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a8cad60;
  InitializeSRWLock((PSRWLOCK)(param_1 + 5));
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145c64f3a(param_1 + 6);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c64f3a FUN_145c64f3a body=121 status=ok
// SIG undefined FUN_145c64f3a(void)

void FUN_145c64f3a(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    plVar3 = (longlong *)*param_1;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        lVar2 = 0x3fd8;
        do {
          *(undefined ***)(lVar1 + lVar2) = &PTR_FUN_14a8cace0;
          *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != -0x18);
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145c64fbe FUN_145c64fbe body=253 status=ok
// SIG undefined FUN_145c64fbe(void)

undefined8 * FUN_145c64fbe(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9efc50;
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
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 145c650bc FUN_145c650bc body=895 status=ok
// SIG undefined FUN_145c650bc(void)

undefined4
FUN_145c650bc(ulonglong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 *local_f0;
  int local_e8;
  ulonglong local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_2 + 1);
  lVar9 = (longlong)local_d0;
  pvVar2 = (void *)*param_2;
  local_e0 = param_1;
  if (lVar9 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar2,lVar9 * 2);
  }
  local_c8 = 0;
  local_c0 = 0;
  FUN_141509b10(&local_c8,param_4);
  if (local_e8 != 4) {
    FUN_1446efa72(&local_f0,0,4,0x10);
    local_e8 = 4;
  }
  pvVar2 = local_d8;
  puVar6 = local_f0;
  *local_f0 = &PTR_LAB_14b526cc0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_f0[2] = lVar7;
  *local_f0 = &PTR_FUN_14b526d30;
  local_f0[3] = local_e0;
  local_f0[4] = 0;
  lVar9 = (longlong)local_d0;
  *(int *)(local_f0 + 5) = local_d0;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)local_f0 + 0x2c) = 0;
  }
  else {
    puVar1 = local_f0 + 4;
    FUN_1446dd670(puVar1,local_d0,0);
    memcpy((void *)*puVar1,pvVar2,lVar9 * 2);
  }
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  FUN_141509b10(puVar6 + 6,&local_c8);
  FUN_1449db362(&local_c8);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x16d) == '\0') {
    vx_req_aux_set_capture_device_create(&local_f8);
  }
  else {
    vx_req_aux_set_render_device_create(&local_f8);
  }
  if (*(int *)(param_2 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*param_2;
  }
  local_60 = 0;
  if (pwVar8 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar8);
    FUN_1446fe5a4(&local_e0,pwVar8,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_f8 + 0x38) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*param_3;
  }
  local_60 = 0;
  if (pwVar8 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar8);
    FUN_1446fe5a4(&local_e0,pwVar8,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_f8 + 0x30) = uVar5;
  lVar9 = local_f8;
  if (local_60 != 0) {
    FUN_1400020a8();
    lVar9 = local_f8;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  FUN_1412f566c(puVar6,&local_f0);
  *(undefined8 **)(lVar9 + 0x28) = puVar6;
  local_e0 = local_e0 & 0xffffffff00000000;
  uVar3 = vx_issue_request3(lVar9);
  FUN_1449db362(&local_f0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6543c FUN_145c6543c body=118 status=ok
// SIG undefined FUN_145c6543c(void)

void FUN_145c6543c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145c654be FUN_145c654be body=121 status=ok
// SIG undefined FUN_145c654be(void)

undefined8 * FUN_145c654be(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b7b6ed0;
  *(undefined4 *)(param_1 + 0x79) = 1;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cbd3cb0,1);
  plVar1 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) | 8;
    (**(code **)(*plVar1 + 0x958))();
  }
  *param_1 = &PTR_FUN_14b6b6110;
  *(undefined2 *)(param_1 + 0x79) = 1;
  return param_1;
}



// FUNCTION 145c65538 FUN_145c65538 body=483 status=ok
// SIG undefined FUN_145c65538(void)

void FUN_145c65538(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_145c6571c();
  if (cVar1 != '\0') {
    FUN_145c65b22(param_1);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb97920,&local_38);
  if ((int)uStack_30 < 2) goto LAB_145c655bc;
  if (*(int *)(*param_2 + 0x14) != 0) {
    FUN_145c65818(param_1,param_2);
  }
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 8));
  if ((cVar1 == '\0') || (cVar1 = FUN_145c66520(param_1,param_2), cVar1 == '\0'))
  goto LAB_145c655bc;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,&local_48);
  if (1 < (int)uStack_40) {
    puVar3 = DAT_14cb97940;
    if (DAT_14cb97948 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(local_58,L"%s.%s",puVar3,local_48);
    local_68 = 0;
    uStack_60 = 0;
    cVar1 = FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80);
    if (cVar1 == '\0') {
LAB_145c656e2:
      FUN_141511334(*(undefined8 *)(param_1 + 8),local_58,&local_38);
    }
    else if ((int)uStack_60 == (int)uStack_30) {
      if (1 < (int)uStack_60) {
        lVar2 = 0;
        while( true ) {
          uVar4 = *(ushort *)(local_68 + lVar2);
          uVar5 = (ulonglong)uVar4;
          uVar6 = *(ushort *)(local_38 + lVar2);
          if (uVar4 != uVar6) break;
          if (uVar4 == 0) goto LAB_145c656f5;
LAB_145c656ad:
          lVar2 = lVar2 + 2;
        }
        if ((uVar6 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145c656ad;
        }
        if (uVar4 != uVar6) goto LAB_145c656e2;
      }
    }
    else if ((int)uStack_30 + (int)uStack_60 != 1) goto LAB_145c656e2;
LAB_145c656f5:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_145c655bc:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6571c FUN_145c6571c body=250 status=ok
// SIG undefined FUN_145c6571c(void)

ulonglong FUN_145c6571c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x160);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x168);
    local_40 = lVar3;
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_140b7090e(*(undefined8 *)(param_1 + 8),&local_30,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_140b7090e(*(undefined8 *)(param_1 + 8),&local_30);
      unaff_RSI = plVar4;
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
    }
    if (local_30 != 0) {
      unaff_RSI = (longlong *)
                  CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(int *)(local_30 + 0x14) == 0);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    if (local_30 != 0) goto LAB_145c657a5;
  }
  unaff_RSI = (longlong *)0x0;
LAB_145c657a5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RSI & 0xffffff01;
}



// FUNCTION 145c65818 FUN_145c65818 body=610 status=ok
// SIG undefined FUN_145c65818(void)

void FUN_145c65818(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb97920);
    FUN_14119d664(*(undefined8 *)(param_1 + 0x180),&local_48);
    if ((int)uStack_30 == local_40) {
      if ((int)uStack_30 < 2) {
        bVar12 = true;
      }
      else {
        lVar10 = 0;
        while( true ) {
          uVar3 = *(ushort *)(local_38 + lVar10);
          uVar7 = (uint)uVar3;
          uVar4 = *(ushort *)(local_48 + lVar10);
          uVar11 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_145c658b9;
            }
            iVar8 = uVar7 - uVar11;
            goto LAB_145c658e4;
          }
          if (uVar3 == 0) break;
LAB_145c658b9:
          lVar10 = lVar10 + 2;
        }
        iVar8 = 0;
LAB_145c658e4:
        bVar12 = iVar8 == 0;
      }
    }
    else {
      bVar12 = local_40 + (int)uStack_30 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar12) {
      uVar5 = *(undefined8 *)*param_2;
      plVar6 = (longlong *)((undefined8 *)*param_2)[1];
      if (plVar6 == (longlong *)0x0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
        if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x360);
        }
        FUN_140b6e166(&local_48,uVar9,uVar5);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
        if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x360);
        }
        FUN_140b6e166(&local_48,uVar9,uVar5);
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_48 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        local_58 = local_48;
        local_50 = (longlong *)CONCAT44(uStack_3c,local_40);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_145c65a7c(uVar5,&local_58);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c65a7c FUN_145c65a7c body=165 status=ok
// SIG undefined FUN_145c65a7c(void)

void FUN_145c65a7c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x390))(local_38,param_1[2],*param_2,0);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c65b22 FUN_145c65b22 body=840 status=ok
// SIG undefined FUN_145c65b22(void)

void FUN_145c65b22(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(int *)(param_1 + 0x10) == 3) || (*(int *)(param_1 + 0x10) == 0)) &&
      ((*(uint *)(param_1 + 0x14) & 0xfffffffb) == 0 &&
       (*(uint *)(param_1 + 0x150) & 0xfffffffd) == 0)) && (*(longlong *)(param_1 + 0x180) != 0)) {
    FUN_14119d664(*(longlong *)(param_1 + 0x180),&local_70);
    if (local_68 == *(int *)(param_1 + 0x178)) {
      if (local_68 < 2) {
        bVar14 = true;
      }
      else {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_70 + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar9);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145c65bcd;
            }
            iVar8 = uVar5 - uVar11;
            goto LAB_145c65bf8;
          }
          if (uVar1 == 0) break;
LAB_145c65bcd:
          lVar9 = lVar9 + 2;
        }
        iVar8 = 0;
LAB_145c65bf8:
        bVar14 = iVar8 == 0;
      }
    }
    else {
      bVar14 = *(int *)(param_1 + 0x178) + local_68 == 1;
    }
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar14) {
      iVar8 = *(int *)(*(longlong *)(param_1 + 8) + 0x58);
      uVar5 = FUN_145c6571c(param_1);
      if ((char)uVar5 != '\0') {
        *(undefined1 *)(param_1 + 400) = 0;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          FUN_14101cf30(*(undefined8 *)(param_1 + 8),&local_70);
          if ((longlong)local_68 != 0) {
            plVar12 = local_70 + (longlong)local_68 * 2;
            plVar13 = local_70;
            do {
              cVar4 = FUN_145c65e6c(plVar13);
              if (cVar4 != '\0') {
                local_88 = 0;
                uStack_80 = 0;
                FUN_14101cdd4(*plVar13 + 0x20,&DAT_14cb97920);
                if ((int)uStack_80 == *(int *)(param_1 + 0x178)) {
                  if ((int)uStack_80 < 2) {
                    bVar14 = true;
                  }
                  else {
                    lVar9 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(local_88 + lVar9);
                      uVar11 = (uint)uVar1;
                      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar9);
                      uVar10 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_145c65cd5;
                        }
                        iVar6 = uVar11 - uVar10;
                        goto LAB_145c65d0b;
                      }
                      if (uVar1 == 0) break;
LAB_145c65cd5:
                      lVar9 = lVar9 + 2;
                    }
                    iVar6 = 0;
LAB_145c65d0b:
                    bVar14 = iVar6 == 0;
                  }
                }
                else {
                  bVar14 = *(int *)(param_1 + 0x178) + (int)uStack_80 == 1;
                }
                if (local_88 != 0) {
                  FUN_1400020a8();
                }
                if (!bVar14) {
                  *(undefined1 *)(param_1 + 400) = 1;
                  iVar8 = 0;
                  break;
                }
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          FUN_14101cee4(local_70,local_68);
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x180);
      if (iVar8 != *(int *)(lVar9 + 0x78)) {
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,2,0x10);
        local_90 = 2;
        *local_98 = &PTR_LAB_149e06450;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_98[2] = lVar7;
        *local_98 = &PTR_FUN_14b4f75c0;
        *(char *)(local_98 + 3) = (char)uVar5;
        FUN_145c65f86(lVar9,iVar8,uVar5 ^ 1,&local_98);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c65e6c FUN_145c65e6c body=280 status=ok
// SIG undefined FUN_145c65e6c(void)

ulonglong FUN_145c65e6c(longlong *param_1)

{
  void *_Src;
  wchar_t *pwVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)(*param_1 + 0x14) != 0) {
    puVar3 = (undefined8 *)FUN_14101d2ea();
    local_38 = (wchar_t *)0x0;
    local_30 = *(int *)(puVar3 + 1);
    lVar6 = (longlong)local_30;
    _Src = (void *)*puVar3;
    if (lVar6 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar6 * 2);
    }
    local_48 = (wchar_t *)0x0;
    uStack_40 = 0;
    FUN_14101cdd4(*param_1 + 0x20,&DAT_14cb977e0,&local_48);
    pwVar1 = local_48;
    uVar5 = (undefined7)((ulonglong)_Src >> 8);
    if (local_30 == (int)uStack_40) {
      if (local_30 < 2) {
        uVar4 = CONCAT71(uVar5,1);
      }
      else {
        iVar2 = wcscmp(local_38,local_48);
        uVar4 = CONCAT71(uVar5,iVar2 == 0);
      }
    }
    else {
      uVar4 = CONCAT71(uVar5,(int)uStack_40 + local_30 == 1);
    }
    if (pwVar1 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar1);
    }
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145c65f86 FUN_145c65f86 body=207 status=ok
// SIG undefined FUN_145c65f86(void)

void FUN_145c65f86(longlong param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x78) == param_2) {
    if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,1);
    }
  }
  else {
    *(int *)(param_1 + 0x78) = param_2;
    *(int *)(param_1 + 0x7c) = param_2;
    *(undefined1 *)(param_1 + 0x80) = 1;
    local_88 = 0;
    local_80 = 0;
    FUN_14114e6dc(&local_88,param_4);
    local_68 = 0;
    local_58 = &PTR_LAB_14b4f1d10;
    local_78[0] = &LAB_143f42130;
    local_50 = param_1;
    FUN_145c66056(param_1,local_78,param_3,&local_88);
  }
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c66056 FUN_145c66056 body=323 status=ok
// SIG undefined FUN_145c66056(void)

void FUN_145c66056(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_41 = param_3;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar2 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b4c34a0;
  local_58[1] = 0;
  *(undefined4 *)(local_58 + 2) = 0;
  FUN_14114e6dc(local_58 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[3] = lVar4;
  *puVar2 = &PTR_FUN_14b4f2d60;
  puVar2[4] = param_1;
  puVar2[5] = FUN_145a9d6c2;
  local_68 = &local_58;
  local_60 = param_1;
  FUN_145c6619a(uVar1,&local_60,param_2,&local_41);
  FUN_1449db362(&local_58);
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_1449db362(param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6619a FUN_145c6619a body=281 status=ok
// SIG undefined FUN_145c6619a(void)

void FUN_145c6619a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0xb0,0x10);
  local_68 = param_5;
  FUN_145c6636e(plVar3,param_2,param_3,param_4);
  plVar1 = plVar3 + 2;
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_145c662cc(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c662cc FUN_145c662cc body=162 status=ok
// SIG undefined FUN_145c662cc(void)

void FUN_145c662cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c6630b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c6630b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c6630b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c6636a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c6636e FUN_145c6636e body=211 status=ok
// SIG undefined FUN_145c6636e(void)

undefined8 *
FUN_145c6636e(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 *param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b4f2dd0;
  local_78 = *param_5;
  *param_5 = 0;
  local_70 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  uVar1 = *param_4;
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_58);
  }
  local_88 = &local_78;
  FUN_145c66442(param_1 + 2,*param_2,local_68,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c66442 FUN_145c66442 body=222 status=ok
// SIG undefined FUN_145c66442(void)

undefined8 *
FUN_145c66442(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2df0;
  param_1[4] = &PTR_FUN_14b4f2e18;
  lVar1 = *param_3;
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(0,param_1 + 10);
  }
  *(undefined1 *)(param_1 + 0x10) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_14114e6dc(param_1 + 0x11,param_5);
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145c66520 FUN_145c66520 body=476 status=ok
// SIG undefined FUN_145c66520(void)

ulonglong FUN_145c66520(ulonglong param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined7 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,&local_38);
  if (1 < (int)uStack_30) {
    puVar10 = DAT_14cb97930;
    if (DAT_14cb97938 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140002266(local_48,L"%s.%s",puVar10,local_38);
    local_58 = 0;
    uStack_50 = 0;
    cVar6 = FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80,local_48);
    if (cVar6 != '\0') {
      plVar4 = *(longlong **)*param_2;
      plVar5 = (longlong *)((undefined8 *)*param_2)[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
      uVar9 = (undefined7)((ulonglong)&local_68 >> 8);
      if (local_60 == (int)uStack_50) {
        if (local_60 < 2) {
          param_1 = CONCAT71(uVar9,1);
        }
        else {
          lVar11 = 0;
          while( true ) {
            uVar2 = *(ushort *)(local_68 + lVar11);
            uVar7 = (uint)uVar2;
            uVar3 = *(ushort *)(local_58 + lVar11);
            uVar12 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_145c66620;
              }
              iVar8 = uVar7 - uVar12;
              goto LAB_145c6664b;
            }
            if (uVar2 == 0) break;
LAB_145c66620:
            lVar11 = lVar11 + 2;
          }
          iVar8 = 0;
LAB_145c6664b:
          param_1 = CONCAT71(uVar9,iVar8 == 0);
        }
      }
      else {
        param_1 = CONCAT71(uVar9,(int)uStack_50 + local_60 == 1);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
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
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar6 != '\0') goto LAB_145c66688;
  }
  param_1 = 0;
LAB_145c66688:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffff01;
}



// FUNCTION 145c6670c FUN_145c6670c body=45 status=ok
// SIG undefined FUN_145c6670c(void)

undefined8 FUN_145c6670c(undefined8 param_1,int param_2)

{
  FUN_141509c42();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,4000);
  }
  return param_1;
}



// FUNCTION 145c6673a FUN_145c6673a body=55 status=ok
// SIG undefined FUN_145c6673a(void)

void FUN_145c6673a(longlong *param_1)

{
  FUN_145c66772(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c66772 FUN_145c66772 body=121 status=ok
// SIG undefined FUN_145c66772(void)

void FUN_145c66772(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c667ec FUN_145c667ec body=124 status=ok
// SIG undefined FUN_145c667ec(void)

void FUN_145c667ec(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  pcVar2 = *(code **)(param_1 + 0x70);
  local_68[0] = *(longlong *)(param_1 + 0x20);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  (*pcVar2)(uVar1,*(undefined4 *)(param_1 + 0x10),local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6686a FUN_145c6686a body=234 status=ok
// SIG undefined FUN_145c6686a(void)

void FUN_145c6686a(longlong param_1,int param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_30);
  local_30 = (LARGE_INTEGER)((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0);
  FUN_145c669b2(param_1 + 8,&local_30);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)*(int *)(param_1 + 0x10) * 200;
    do {
      if (*(int *)(lVar6 + 0x78) == param_2) {
        cVar2 = FUN_145c6695c(lVar6);
        if (cVar2 != '\0') {
          pcVar1 = (code *)*param_3;
          plVar5 = param_3 + 4;
          if ((longlong *)param_3[2] != (longlong *)0x0) {
            plVar5 = (longlong *)param_3[2];
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar1)(uVar4,lVar6);
        }
        break;
      }
      lVar6 = lVar6 + 200;
      lVar3 = lVar3 + -200;
    } while (lVar3 != 0);
  }
  if (*param_3 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6695c FUN_145c6695c body=70 status=ok
// SIG undefined FUN_145c6695c(void)

bool FUN_145c6695c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x10) != 0) ||
      *(int *)(param_1 + 0x18) != 0) || *(int *)(param_1 + 0x1c) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 8);
      lVar3 = FUN_1410cd8c0(uVar2);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 145c669b2 FUN_145c669b2 body=190 status=ok
// SIG undefined FUN_145c669b2(void)

void FUN_145c669b2(longlong *param_1,double *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 1);
  if ((int)*(uint *)(param_1 + 1) < 1) {
    return;
  }
  uVar4 = 0;
  bVar5 = false;
LAB_145c669dd:
  lVar6 = uVar4 * 200;
  do {
    lVar1 = *param_1;
    if (((*(int *)(lVar1 + 0x14 + lVar6) != 0 || *(int *)(lVar1 + 0x10 + lVar6) != 0) ||
        *(int *)(lVar1 + 0x18 + lVar6) != 0) || *(int *)(lVar1 + 0x1c + lVar6) != 0) {
      if (*param_2 - *(double *)(lVar1 + lVar6 + 0x80) <= 1800.0) goto LAB_145c66a12;
      cVar2 = FUN_144729dda();
      if (cVar2 != '\0') break;
    }
    FUN_1487d1258(param_1,uVar4 & 0xffffffff);
    uVar3 = (ulonglong)(int)param_1[1];
    bVar5 = true;
    if ((longlong)uVar3 <= (longlong)uVar4) goto LAB_145c66a53;
  } while( true );
  uVar3 = (ulonglong)*(uint *)(param_1 + 1);
LAB_145c66a12:
  uVar4 = uVar4 + 1;
  if ((longlong)(int)uVar3 <= (longlong)uVar4) {
    if (!bVar5) {
      return;
    }
LAB_145c66a53:
    FUN_1487d121a(param_1);
    return;
  }
  goto LAB_145c669dd;
}



// FUNCTION 145c66a70 FUN_145c66a70 body=472 status=ok
// SIG undefined FUN_145c66a70(void)

void FUN_145c66a70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  byte local_2a0 [32];
  undefined1 local_280;
  byte local_278 [32];
  byte local_258 [32];
  byte abStack_238 [120];
  undefined1 local_1c0 [32];
  undefined1 local_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  undefined1 local_178 [32];
  byte local_158;
  undefined1 local_150 [144];
  char local_c0 [8];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  local_1a0 = 0;
  FUN_14101bd16(local_1c0,&DAT_149dfb77a);
  local_2a8 = local_1c0;
  FUN_140d767d6(local_198,&DAT_14cb71db0,2,L"PlayerAdded");
  cVar1 = FUN_140e27f2c(local_198);
  if (cVar1 == '\0') {
    local_280 = 0;
    FUN_14101bd16(local_2a0,&DAT_149dfb77a);
    pbVar3 = local_278;
    local_2a8 = local_2a0;
  }
  else {
    abStack_238[0x28] = 0;
    FUN_14101bd16(abStack_238 + 8,&DAT_149dfb77a);
    pbVar3 = abStack_238 + 0x30;
    local_2a8 = abStack_238 + 8;
  }
  FUN_140d767d6(pbVar3,&DAT_14cb71db0,2,L"PlayerAdded");
  FUN_140d76846(local_150,pbVar3);
  FUN_14027c224(local_c0,local_150);
  uVar2 = FUN_14479d2ce(param_1);
  if (local_c0[0] == '\x01') {
    FUN_140f3f840(local_b8,uVar2);
  }
  FUN_14027c198(local_c0);
  FUN_1404eeb8e(local_150);
  if (cVar1 == '\0') {
    pbVar3 = local_258;
  }
  else {
    pbVar3 = abStack_238 + 0x50;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[pbVar3[0x20]])(pbVar3);
  if (*(longlong *)(pbVar3 + -0x10) != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c66c4a FUN_145c66c4a body=83 status=ok
// SIG undefined FUN_145c66c4a(void)

undefined8 * FUN_145c66c4a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a176320;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66c9e FUN_145c66c9e body=23 status=ok
// SIG undefined FUN_145c66c9e(void)

void FUN_145c66c9e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000145c66cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c66cc0 FUN_145c66cc0 body=201 status=ok
// SIG undefined FUN_145c66cc0(void)

undefined8 * FUN_145c66cc0(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a1f83d0;
  param_1[5] = &PTR_FUN_14a1f8dd0;
  param_1[6] = &PTR_LAB_14a1f8e10;
  param_1[0x55] = &PTR_FUN_14a1f8e60;
  param_1[0x56] = &PTR_FUN_14a1f8ee0;
  param_1[0x57] = &PTR_FUN_14a1f8ef0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0x41c0000000000000;
  *(uint *)(param_1 + 0xc6) = *(uint *)(param_1 + 0xc6) & 0xffffffc0 | 0x10;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0x3f800000;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0x3ccccccd00000000;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  return param_1;
}



// FUNCTION 145c66d96 FUN_145c66d96 body=95 status=ok
// SIG undefined FUN_145c66d96(void)

undefined8 * FUN_145c66d96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(200);
  memset(puVar1 + 1,0,0xc0);
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_14a491550;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  return puVar1;
}



// FUNCTION 145c66df6 FUN_145c66df6 body=40 status=ok
// SIG undefined FUN_145c66df6(void)

undefined8 FUN_145c66df6(undefined8 param_1,int param_2)

{
  FUN_145c66e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66e1e FUN_145c66e1e body=66 status=ok
// SIG undefined FUN_145c66e1e(void)

void FUN_145c66e1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4a5fe0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1404db954(param_1);
  return;
}



// FUNCTION 145c66e60 FUN_145c66e60 body=40 status=ok
// SIG undefined FUN_145c66e60(void)

undefined8 FUN_145c66e60(undefined8 param_1,int param_2)

{
  FUN_145c66e88();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66e88 FUN_145c66e88 body=66 status=ok
// SIG undefined FUN_145c66e88(void)

void FUN_145c66e88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6620d0;
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145c66eca FUN_145c66eca body=40 status=ok
// SIG undefined FUN_145c66eca(void)

undefined8 FUN_145c66eca(undefined8 param_1,int param_2)

{
  FUN_145c66ef2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66ef2 FUN_145c66ef2 body=66 status=ok
// SIG undefined FUN_145c66ef2(void)

void FUN_145c66ef2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ca700;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c66f34 FUN_145c66f34 body=40 status=ok
// SIG undefined FUN_145c66f34(void)

undefined8 FUN_145c66f34(undefined8 param_1,int param_2)

{
  FUN_145c66f5c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66f5c FUN_145c66f5c body=66 status=ok
// SIG undefined FUN_145c66f5c(void)

void FUN_145c66f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d1840;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c66f9e FUN_145c66f9e body=40 status=ok
// SIG undefined FUN_145c66f9e(void)

undefined8 FUN_145c66f9e(undefined8 param_1,int param_2)

{
  FUN_145c66fc6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c66fc6 FUN_145c66fc6 body=66 status=ok
// SIG undefined FUN_145c66fc6(void)

void FUN_145c66fc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d1dc0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67008 FUN_145c67008 body=40 status=ok
// SIG undefined FUN_145c67008(void)

undefined8 FUN_145c67008(undefined8 param_1,int param_2)

{
  FUN_145c67030();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67030 FUN_145c67030 body=66 status=ok
// SIG undefined FUN_145c67030(void)

void FUN_145c67030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d4ee0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67072 FUN_145c67072 body=40 status=ok
// SIG undefined FUN_145c67072(void)

undefined8 FUN_145c67072(undefined8 param_1,int param_2)

{
  FUN_145c6709a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6709a FUN_145c6709a body=66 status=ok
// SIG undefined FUN_145c6709a(void)

void FUN_145c6709a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6dd0e0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c670dc FUN_145c670dc body=40 status=ok
// SIG undefined FUN_145c670dc(void)

undefined8 FUN_145c670dc(undefined8 param_1,int param_2)

{
  FUN_145c67104();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67104 FUN_145c67104 body=66 status=ok
// SIG undefined FUN_145c67104(void)

void FUN_145c67104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa0110;
  FUN_1458219bc(param_1 + 10);
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67152 FUN_145c67152 body=95 status=ok
// SIG undefined FUN_145c67152(void)

undefined8 * FUN_145c67152(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  *param_1 = &PTR_FUN_14abe1d20;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 5) = 8;
  lVar1 = FUN_1446f8646();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[6] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 145c671b6 FUN_145c671b6 body=101 status=ok
// SIG undefined FUN_145c671b6(void)

void FUN_145c671b6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad73fd0;
  *(undefined4 *)(puVar1 + 6) = 4;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0x42c8000042c80000;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x42c80000;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0x42c8000042c80000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x42c8000042c80000;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0x42c800003f000000;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x42c8000000000000;
  return;
}



// FUNCTION 145c6723e FUN_145c6723e body=153 status=ok
// SIG undefined FUN_145c6723e(void)

void FUN_145c6723e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145c672d8();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb37b88;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 145c672d8 FUN_145c672d8 body=261 status=ok
// SIG undefined FUN_145c672d8(void)

void FUN_145c672d8(void)

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
              0x110) < DAT_14cb37c08) {
    FUN_144b3d300(&DAT_14cb37c08);
    if (DAT_14cb37c08 == -1) {
      FUN_145c673de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb37b88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14390a71b);
      _Init_thread_footer(&DAT_14cb37c08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c673de FUN_145c673de body=226 status=ok
// SIG undefined FUN_145c673de(void)

longlong * FUN_145c673de(longlong *param_1)

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
  pcVar13 = FUN_146469fde;
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



// FUNCTION 145c674c6 FUN_145c674c6 body=138 status=ok
// SIG undefined FUN_145c674c6(void)

code * FUN_145c674c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IntersectionResultsOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14808726e;
}



// FUNCTION 145c67550 FUN_145c67550 body=138 status=ok
// SIG undefined FUN_145c67550(void)

code * FUN_145c67550(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRayTraceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c674c6;
}



// FUNCTION 145c675da FUN_145c675da body=40 status=ok
// SIG undefined FUN_145c675da(void)

undefined8 FUN_145c675da(undefined8 param_1,int param_2)

{
  FUN_145c67602();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67602 FUN_145c67602 body=66 status=ok
// SIG undefined FUN_145c67602(void)

void FUN_145c67602(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad85c40;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c67644 FUN_145c67644 body=40 status=ok
// SIG undefined FUN_145c67644(void)

undefined8 FUN_145c67644(undefined8 param_1,int param_2)

{
  FUN_145c6766c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6766c FUN_145c6766c body=66 status=ok
// SIG undefined FUN_145c6766c(void)

void FUN_145c6766c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae972e0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c676ae FUN_145c676ae body=46 status=ok
// SIG undefined FUN_145c676ae(void)

void FUN_145c676ae(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c676dc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b57fce0;
  puVar1[5] = &PTR_FUN_14b57ffe0;
  return;
}



// FUNCTION 145c676dc FUN_145c676dc body=60 status=ok
// SIG undefined FUN_145c676dc(void)

undefined8 * FUN_145c676dc(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a51e670;
  param_1[5] = &PTR_FUN_14a51e970;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  return param_1;
}



// FUNCTION 145c67718 FUN_145c67718 body=38 status=ok
// SIG undefined FUN_145c67718(void)

undefined8 FUN_145c67718(undefined8 param_1,int param_2)

{
  FUN_145c6773e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6773e FUN_145c6773e body=68 status=ok
// SIG undefined FUN_145c6773e(void)

void FUN_145c6773e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a0ca0;
  FUN_1447a1747(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c67782 FUN_145c67782 body=38 status=ok
// SIG undefined FUN_145c67782(void)

undefined8 FUN_145c67782(undefined8 param_1,int param_2)

{
  FUN_145c677a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c677a8 FUN_145c677a8 body=68 status=ok
// SIG undefined FUN_145c677a8(void)

void FUN_145c677a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8d6c00;
  FUN_145ac827a(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_1457deb6c(param_1);
  return;
}



// FUNCTION 145c677ec FUN_145c677ec body=38 status=ok
// SIG undefined FUN_145c677ec(void)

undefined8 FUN_145c677ec(undefined8 param_1,int param_2)

{
  FUN_145c67812();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67812 FUN_145c67812 body=68 status=ok
// SIG undefined FUN_145c67812(void)

void FUN_145c67812(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a90dea0;
  FUN_14126849c(&DAT_14cb10aa8,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  FUN_140457ffc(&DAT_14cb10a78,param_1);
  return;
}



// FUNCTION 145c67856 FUN_145c67856 body=38 status=ok
// SIG undefined FUN_145c67856(void)

undefined8 FUN_145c67856(undefined8 param_1,int param_2)

{
  FUN_145c6787c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6787c FUN_145c6787c body=68 status=ok
// SIG undefined FUN_145c6787c(void)

void FUN_145c6787c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba42240;
  FUN_1448a8284(param_1 + 1);
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145c678cc FUN_145c678cc body=95 status=ok
// SIG undefined FUN_145c678cc(void)

undefined8 * FUN_145c678cc(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ba83490;
  param_1[5] = &PTR_FUN_14ba83730;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  FUN_144a78564(param_1 + 0x10);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 145c6792c FUN_145c6792c body=40 status=ok
// SIG undefined FUN_145c6792c(void)

undefined8 FUN_145c6792c(undefined8 param_1,int param_2)

{
  FUN_145c67954();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67954 FUN_145c67954 body=66 status=ok
// SIG undefined FUN_145c67954(void)

void FUN_145c67954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baba9f0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67996 FUN_145c67996 body=40 status=ok
// SIG undefined FUN_145c67996(void)

undefined8 FUN_145c67996(undefined8 param_1,int param_2)

{
  FUN_145c679be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c679be FUN_145c679be body=66 status=ok
// SIG undefined FUN_145c679be(void)

void FUN_145c679be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcdd360;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67a00 FUN_145c67a00 body=40 status=ok
// SIG undefined FUN_145c67a00(void)

undefined8 FUN_145c67a00(undefined8 param_1,int param_2)

{
  FUN_141509e3c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67a28 FUN_145c67a28 body=40 status=ok
// SIG undefined FUN_145c67a28(void)

undefined8 FUN_145c67a28(undefined8 param_1,int param_2)

{
  FUN_145c67a50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67a50 FUN_145c67a50 body=66 status=ok
// SIG undefined FUN_145c67a50(void)

void FUN_145c67a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bec91b0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67a92 FUN_145c67a92 body=40 status=ok
// SIG undefined FUN_145c67a92(void)

undefined8 FUN_145c67a92(undefined8 param_1,int param_2)

{
  FUN_145c67aba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67aba FUN_145c67aba body=66 status=ok
// SIG undefined FUN_145c67aba(void)

void FUN_145c67aba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bee8810;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c67b08 FUN_145c67b08 body=462 status=ok
// SIG undefined FUN_145c67b08(void)

undefined8 * FUN_145c67b08(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b3c3e90;
  *(undefined4 *)(param_1 + 0x16) = 0x66666666;
  param_1[0x17] = "refresh_manager_def";
  FUN_140056680(local_58,L"RefreshManagerDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145c67cd8();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c67c0b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145c67c0b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c67cd8 FUN_145c67cd8 body=57 status=ok
// SIG undefined FUN_145c67cd8(void)

void FUN_145c67cd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef20 = FUN_140002ddd(FUN_14653ebbc,uVar1,L"RefreshManagerDef");
  }
  return;
}



// FUNCTION 145c67d34 FUN_145c67d34 body=153 status=ok
// SIG undefined FUN_145c67d34(void)

void FUN_145c67d34(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_140718e76();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3be50;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 145c67dce FUN_145c67dce body=40 status=ok
// SIG undefined FUN_145c67dce(void)

undefined8 FUN_145c67dce(undefined8 param_1,int param_2)

{
  FUN_145c67df6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c67df6 FUN_145c67df6 body=101 status=ok
// SIG undefined FUN_145c67df6(void)

void FUN_145c67df6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bee4b70;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c67e5c(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c67e5c FUN_145c67e5c body=55 status=ok
// SIG undefined FUN_145c67e5c(void)

void FUN_145c67e5c(longlong *param_1)

{
  FUN_145c67e94(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c67e94 FUN_145c67e94 body=123 status=ok
// SIG undefined FUN_145c67e94(void)

void FUN_145c67e94(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c67f1a FUN_145c67f1a body=1076 status=ok
// SIG undefined FUN_145c67f1a(void)

longlong * FUN_145c67f1a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e0;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_145c683c2();
  *param_1 = (longlong)&PTR_FUN_14aeeb870;
  param_1[5] = (longlong)&PTR_FUN_14aeec520;
  param_1[6] = (longlong)&PTR_LAB_14aeec560;
  param_1[0x55] = (longlong)&PTR_FUN_14aeec5b0;
  param_1[0x56] = (longlong)&PTR_FUN_14aeec630;
  param_1[0x57] = (longlong)&PTR_FUN_14aeec640;
  param_1[0xca] = (longlong)&PTR_FUN_14aeec670;
  param_1[0xcb] = (longlong)&PTR_FUN_14aeec680;
  param_1[0xcc] = (longlong)&PTR_FUN_14aeec6a0;
  param_1[0xcd] = (longlong)&PTR_FUN_14aeec6c0;
  param_1[0xd7] = (longlong)&PTR_FUN_14aeec6e0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  param_1[0xde] = 2;
  *(undefined1 *)(param_1 + 0xdf) = 1;
  param_1[0xe0] = 0;
  *(undefined2 *)(param_1 + 0xe1) = 0x101;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xea] = 0;
  param_1[0xec] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xff] = 2;
  *(undefined2 *)(param_1 + 0x100) = 0xff;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x108),4000);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x884) = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x113));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x113),4000);
  param_1[0x118] = 0;
  param_1[0x11a] = 0;
  *(undefined4 *)(param_1 + 0x120) = 2;
  param_1[0x121] = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  param_1[0x123] = 0x7fefffffffffffff;
  param_1[0x124] = 0x7fefffffffffffff;
  param_1[0x125] = 0x7fefffffffffffff;
  param_1[0x126] = -0x10000000000001;
  param_1[0x127] = -0x10000000000001;
  param_1[0x128] = -0x10000000000001;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b9) = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  *(undefined2 *)(param_1 + 0x13b) = 0x100;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad0f30,1);
  FUN_1446f470e(&local_e0,L"DynamicMesh",1);
  uVar4 = FUN_140a1ade6();
  local_f0 = 0;
  local_f8 = 1;
  lVar5 = FUN_14048696c(param_1,local_e0,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0xd8] = lVar5;
  local_98 = FUN_1484b1c12;
  uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
  FUN_145c6854e(lVar5 + 0x58,&local_d8,param_1,&local_98);
  param_1[0xe0] = (longlong)local_d8;
  local_d8 = (code *)param_1[0x118];
  uStack_90 = param_1[0x119];
  local_c8 = (longlong *)param_1[0x11a];
  uStack_80 = param_1[0x11b];
  local_78 = param_1[0x11c];
  lStack_70 = param_1[0x11d];
  local_68 = param_1[0x11e];
  uStack_60 = param_1[0x11f];
  lVar2 = local_68;
  lVar3 = uStack_60;
  local_88 = local_c8;
  lVar1 = uStack_80;
  local_98 = local_d8;
  lVar5 = uStack_90;
  param_1[0x11e] = CONCAT44(uStack_a4,local_a8);
  param_1[0x11f] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x11c] = (longlong)&PTR_LAB_14aef0400;
  param_1[0x11d] = (longlong)param_1;
  param_1[0x11a] = 0;
  param_1[0x11b] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0x118] = (longlong)FUN_143b74456;
  param_1[0x119] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (uint)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  lStack_b0 = lStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = lVar5;
  uStack_80 = lVar1;
  local_68 = lVar2;
  uStack_60 = lVar3;
  if (local_d8 != (code *)0x0) {
    plVar6 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar6 = &local_b8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_145c68350(param_1);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c68350 FUN_145c68350 body=82 status=ok
// SIG undefined FUN_145c68350(void)

void FUN_145c68350(longlong *param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x13b) = 0;
  (**(code **)(*param_1 + 0xc48))();
  FUN_1448215fa(param_1);
  FUN_145c68728(param_1);
  (**(code **)(*param_1 + 0x540))(param_1);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145c6839b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a8))(plVar1);
  return;
}



// FUNCTION 145c683c2 FUN_145c683c2 body=233 status=ok
// SIG undefined FUN_145c683c2(void)

undefined8 * FUN_145c683c2(undefined8 *param_1)

{
  FUN_1400ea892();
  *param_1 = &PTR_FUN_14aee9270;
  param_1[5] = &PTR_FUN_14aee9e40;
  param_1[6] = &PTR_LAB_14aee9e80;
  param_1[0x55] = &PTR_FUN_14aee9ed0;
  param_1[0x56] = &PTR_FUN_14aee9f50;
  param_1[0x57] = &PTR_FUN_14aee9f60;
  param_1[0xca] = &PTR_FUN_14aee9f90;
  param_1[0xcb] = &PTR_FUN_14aee9fa0;
  param_1[0xcc] = &PTR_FUN_14aee9fc0;
  param_1[0xcd] = &PTR_FUN_14aee9fe0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0x3f00000000000000;
  *(undefined1 **)((longlong)param_1 + 0x67c) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68e) = 1;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x101;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  return param_1;
}



// FUNCTION 145c684ac FUN_145c684ac body=162 status=ok
// SIG undefined FUN_145c684ac(void)

void FUN_145c684ac(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145c68539;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c68539:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c6854e FUN_145c6854e body=218 status=ok
// SIG undefined FUN_145c6854e(void)

undefined8
FUN_145c6854e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aef0390;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14aef0320;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c6862a(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6862a FUN_145c6862a body=216 status=ok
// SIG undefined FUN_145c6862a(void)

undefined8 * FUN_145c6862a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c68710 FUN_145c68710 body=24 status=ok
// SIG undefined FUN_145c68710(void)

bool FUN_145c68710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c68728 FUN_145c68728 body=395 status=ok
// SIG undefined FUN_145c68728(void)

void FUN_145c68728(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(*param_1 + 0xa88))();
  FUN_145c688c4(uVar1,&local_60,1);
  param_1[0x127] = local_40;
  param_1[0x128] = lStack_38;
  param_1[0x125] = local_50;
  param_1[0x126] = lStack_48;
  param_1[0x123] = local_60;
  param_1[0x124] = lStack_58;
  dVar3 = (double)(-(ulonglong)(0.0 <= (double)param_1[0x128] - (double)param_1[0x125]) &
                  (ulonglong)((double)param_1[0x128] - (double)param_1[0x125]));
  dVar5 = (double)(-(ulonglong)(0.0 <= (double)param_1[0x127] - (double)param_1[0x124]) &
                  (ulonglong)((double)param_1[0x127] - (double)param_1[0x124]));
  uVar2 = -(ulonglong)(dVar3 <= dVar5);
  dVar3 = (double)(~uVar2 & (ulonglong)dVar3 | uVar2 & (ulonglong)dVar5);
  dVar5 = (double)(-(ulonglong)(0.0 <= (double)param_1[0x126] - (double)param_1[0x123]) &
                  (ulonglong)((double)param_1[0x126] - (double)param_1[0x123]));
  uVar2 = -(ulonglong)(dVar3 <= dVar5);
  if ((double)(uVar2 & (ulonglong)dVar5 | ~uVar2 & (ulonglong)dVar3) <= 0.0) {
    dVar6 = DAT_14c8464f0 + -0.0001000099946395494;
    dVar7 = DAT_14c8464e8 + -0.0001000099946395494;
    dVar4 = DAT_14c8464f0 + 0.0001000099946395494;
    dVar5 = DAT_14c8464e8 + 0.0001000099946395494;
    dVar3 = DAT_14c8464e0 + 0.0001000099946395494;
    param_1[0x123] = (longlong)(DAT_14c8464e0 + -0.0001000099946395494);
    param_1[0x124] = (longlong)dVar7;
    param_1[0x125] = (longlong)dVar6;
    param_1[0x126] = (longlong)dVar3;
    param_1[0x127] = (longlong)dVar5;
    param_1[0x128] = (longlong)dVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c688c4 FUN_145c688c4 body=1137 status=ok
// SIG undefined FUN_145c688c4(void)

double * FUN_145c688c4(longlong param_1,double *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined8 *local_118;
  longlong local_110;
  LPCRITICAL_SECTION local_108;
  double *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  code *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x50) == 0) {
    *param_2 = 1.79769313486232e+308;
    param_2[1] = 1.79769313486232e+308;
    param_2[2] = 1.79769313486232e+308;
    param_2[3] = -1.79769313486232e+308;
    param_2[4] = -1.79769313486232e+308;
    param_2[5] = -1.79769313486232e+308;
  }
  else {
    local_f8 = 1.79769313486232e+308;
    dStack_f0 = 1.79769313486232e+308;
    local_e8 = 1.79769313486232e+308;
    dStack_e0 = -1.79769313486232e+308;
    local_d8 = -1.79769313486232e+308;
    dStack_d0 = -1.79769313486232e+308;
    uVar8 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    if ((49999 < (int)uVar8 & param_3) == 0) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U)) {
          uVar9 = 1;
          uVar11 = 1;
          if (1 < (int)uVar8) {
            uVar9 = uVar8;
          }
          do {
            uVar12 = uVar9;
            if (uVar9 == uVar11) break;
            uVar10 = uVar11 >> 9;
            uVar14 = uVar11 & 0x1ff;
            uVar12 = uVar11;
            uVar11 = uVar11 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar10] +
                                               (ulonglong)uVar14 * 2) - 1U));
        }
      }
      uVar13 = (ulonglong)(uVar12 & 0x1ff);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      uVar12 = 0;
      if ((uVar8 != 0) &&
         (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
        uVar9 = 1;
        uVar11 = 1;
        if (1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        do {
          uVar12 = uVar9;
          if (uVar9 == uVar11) break;
          uVar10 = uVar11 >> 9;
          uVar14 = uVar11 & 0x1ff;
          uVar12 = uVar11;
          uVar11 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar10] +
                                             (ulonglong)uVar14 * 2) - 1U));
      }
      dVar1 = *(double *)(lVar7 + uVar13 * 0x18);
      dVar2 = *(double *)(lVar7 + 8 + uVar13 * 0x18);
      dVar3 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
      dVar17 = dVar1;
      dVar16 = dVar2;
      dVar15 = dVar3;
joined_r0x000145c68b19:
      uVar9 = uVar12;
      if (uVar9 != uVar8) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar9 >> 9) * 8);
        uVar13 = (ulonglong)(uVar9 & 0x1ff);
        dVar4 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
        dVar15 = (double)(-(ulonglong)(dVar15 <= dVar4) & (ulonglong)dVar15 |
                         ~-(ulonglong)(dVar15 <= dVar4) & (ulonglong)dVar4);
        dVar5 = *(double *)(lVar7 + uVar13 * 0x18);
        dVar6 = *(double *)(lVar7 + 8 + uVar13 * 0x18);
        dVar16 = (double)(-(ulonglong)(dVar16 <= dVar6) & (ulonglong)dVar16 |
                         ~-(ulonglong)(dVar16 <= dVar6) & (ulonglong)dVar6);
        dVar17 = (double)(-(ulonglong)(dVar17 <= dVar5) & (ulonglong)dVar17 |
                         ~-(ulonglong)(dVar17 <= dVar5) & (ulonglong)dVar5);
        dVar3 = (double)(-(ulonglong)(dVar4 <= dVar3) & (ulonglong)dVar3 |
                        ~-(ulonglong)(dVar4 <= dVar3) & (ulonglong)dVar4);
        dVar2 = (double)(-(ulonglong)(dVar6 <= dVar2) & (ulonglong)dVar2 |
                        ~-(ulonglong)(dVar6 <= dVar2) & (ulonglong)dVar6);
        dVar1 = (double)(-(ulonglong)(dVar5 <= dVar1) & (ulonglong)dVar1 |
                        ~-(ulonglong)(dVar5 <= dVar1) & (ulonglong)dVar5);
        uVar11 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar8) {
          uVar11 = uVar8;
        }
        do {
          uVar12 = uVar11;
          if (uVar11 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar12 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        goto joined_r0x000145c68b19;
      }
      *param_2 = dVar17;
      param_2[1] = dVar16;
      param_2[2] = dVar15;
      param_2[3] = dVar1;
      param_2[4] = dVar2;
      param_2[5] = dVar3;
    }
    else {
      InitializeCriticalSection(&local_a8);
      SetCriticalSectionSpinCount(&local_a8,4000);
      local_c0 = &local_110;
      local_100 = &local_f8;
      local_118 = &local_b8;
      local_b8 = 0;
      local_b0 = 0;
      local_c8 = FUN_142973442;
      local_120 = 0;
      local_110 = param_1;
      local_108 = &local_a8;
      FUN_1401f8d10(L"ParallelFor Task",uVar8 / 10000 + 1,1);
      DeleteCriticalSection(&local_a8);
      param_2[4] = local_d8;
      param_2[5] = dStack_d0;
      param_2[2] = local_e8;
      param_2[3] = dStack_e0;
      *param_2 = local_f8;
      param_2[1] = dStack_f0;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c68d36 FUN_145c68d36 body=40 status=ok
// SIG undefined FUN_145c68d36(void)

undefined8 FUN_145c68d36(undefined8 param_1,int param_2)

{
  FUN_14150a64a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c68d6a FUN_145c68d6a body=782 status=ok
// SIG undefined FUN_145c68d6a(void)

undefined8 * FUN_145c68d6a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b19a060;
  *(undefined4 *)(param_1 + 0x16) = 0xdeadbeed;
  param_1[0x17] = "itemfilter";
  FUN_1400b22c2(local_58,"GbxItem.ItemFilter");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145c6907a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
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
        param_1[0x5a] = 0;
        goto LAB_145c68e62;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c68e62:
  lVar4 = FUN_145c6907a();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
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
        param_1[0x5f] = 0;
        goto LAB_145c68ef7;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145c68ef7:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6907a FUN_145c6907a body=57 status=ok
// SIG undefined FUN_145c6907a(void)

void FUN_145c6907a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fdd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fdd0 = FUN_140002ddd(FUN_1464ea008,uVar1,L"GbxItemFilterDef");
  }
  return;
}



// FUNCTION 145c690b4 FUN_145c690b4 body=94 status=ok
// SIG undefined FUN_145c690b4(void)

void FUN_145c690b4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145c69140(DAT_14c844ff8,DAT_14c845000);
  if (DAT_14c844ff8 != 0) {
    FUN_1400020a8();
  }
  plVar3 = DAT_14c844ff0;
  if (DAT_14c844ff0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c844ff0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c69107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c69112 FUN_145c69112 body=46 status=ok
// SIG undefined FUN_145c69112(void)

void FUN_145c69112(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c69140 FUN_145c69140 body=73 status=ok
// SIG undefined FUN_145c69140(void)

void FUN_145c69140(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c6918a FUN_145c6918a body=40 status=ok
// SIG undefined FUN_145c6918a(void)

undefined8 FUN_145c6918a(undefined8 param_1,int param_2)

{
  FUN_145c691b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c691b2 FUN_145c691b2 body=173 status=ok
// SIG undefined FUN_145c691b2(void)

void FUN_145c691b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a50ff60;
  param_1[5] = &PTR_FUN_14a510260;
  plVar3 = (longlong *)param_1[0x90];
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
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a2df2(param_1 + 0x36);
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c69260 FUN_145c69260 body=40 status=ok
// SIG undefined FUN_145c69260(void)

undefined8 FUN_145c69260(undefined8 param_1,int param_2)

{
  FUN_145c69288();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c69288 FUN_145c69288 body=173 status=ok
// SIG undefined FUN_145c69288(void)

void FUN_145c69288(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a511410;
  param_1[5] = &PTR_FUN_14a511720;
  plVar3 = (longlong *)param_1[0x1ce];
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
  if (param_1[0x1cb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1c2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c2] + 0x10))();
  }
  FUN_140ffd7a4(param_1 + 0x32);
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x10))();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c69336 FUN_145c69336 body=40 status=ok
// SIG undefined FUN_145c69336(void)

undefined8 FUN_145c69336(undefined8 param_1,int param_2)

{
  FUN_145c6935e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6935e FUN_145c6935e body=173 status=ok
// SIG undefined FUN_145c6935e(void)

void FUN_145c6935e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51cba0;
  param_1[5] = &PTR_FUN_14a51cef0;
  plVar3 = (longlong *)param_1[0x9a];
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
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9e952(param_1 + 0x38);
  if ((longlong *)param_1[0x33] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x33] + 0x10))();
  }
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c6940c FUN_145c6940c body=40 status=ok
// SIG undefined FUN_145c6940c(void)

undefined8 FUN_145c6940c(undefined8 param_1,int param_2)

{
  FUN_145c69434();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c69434 FUN_145c69434 body=173 status=ok
// SIG undefined FUN_145c69434(void)

void FUN_145c69434(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51da70;
  param_1[5] = &PTR_FUN_14a51ddc0;
  plVar3 = (longlong *)param_1[0x1ce];
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
  if (param_1[0x1cb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c9] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd7a4(param_1 + 0x38);
  if ((longlong *)param_1[0x33] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x33] + 0x10))();
  }
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c694e2 FUN_145c694e2 body=213 status=ok
// SIG undefined FUN_145c694e2(void)

void FUN_145c694e2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x128);
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *param_2 = &PTR_FUN_14b92d9e0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 10;
  param_2[8] = 0;
  param_2[9] = 0x3dcccccd3c23d70a;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 145c695d0 FUN_145c695d0 body=40 status=ok
// SIG undefined FUN_145c695d0(void)

undefined8 FUN_145c695d0(undefined8 param_1,int param_2)

{
  FUN_145c695f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c695f8 FUN_145c695f8 body=253 status=ok
// SIG undefined FUN_145c695f8(void)

void FUN_145c695f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afdef10;
  param_1[0x72] = &PTR_FUN_14afdf550;
  param_1[0x73] = &PTR_FUN_14afdf580;
  param_1[0x74] = &PTR_FUN_14afdf5b0;
  plVar3 = (longlong *)param_1[0xa6];
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
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x94);
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c696f6 FUN_145c696f6 body=272 status=ok
// SIG undefined FUN_145c696f6(void)

undefined1 * FUN_145c696f6(undefined1 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 2;
  FUN_14150a960();
  if ((DAT_14c867348 != (longlong *)0x0 && DAT_14c867350 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c867348 + 0x30))(), cVar1 != '\0')) {
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    FUN_14150a960();
    lVar3 = 0;
    plVar2 = (longlong *)0x0;
    if (DAT_14c867350 != 0) {
      plVar2 = DAT_14c867348;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,local_38);
    do {
      if (local_38[lVar3] != 0) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_14680fd1c(param_1,&local_48,local_38);
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
  }
  FUN_145c69808();
  FUN_145c6987a(local_38,param_1);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c69808 FUN_145c69808 body=113 status=ok
// SIG undefined FUN_145c69808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c69808(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867340) {
    FUN_144b3d300(&DAT_14c867340);
    if (DAT_14c867340 == -1) {
      DAT_14c867328 = 0;
      _DAT_14c867330 = 0;
      _DAT_14c867338 = 2;
      atexit(FUN_14277ef7e);
      _Init_thread_footer(&DAT_14c867340);
      return;
    }
  }
  return;
}



// FUNCTION 145c6987a FUN_145c6987a body=223 status=ok
// SIG undefined FUN_145c6987a(void)

undefined8 FUN_145c6987a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e312b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e30a40;
  local_30[3] = param_2;
  local_30[4] = FUN_14680fd1c;
  FUN_145c6995a(&DAT_14c867328,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6995a FUN_145c6995a body=216 status=ok
// SIG undefined FUN_145c6995a(void)

undefined8 * FUN_145c6995a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c69a44 FUN_145c69a44 body=100 status=ok
// SIG undefined FUN_145c69a44(void)

ulonglong FUN_145c69a44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c69a8b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c69a8b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4,*(undefined4 *)(param_1 + 8));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c69aa8 FUN_145c69aa8 body=59 status=ok
// SIG undefined FUN_145c69aa8(void)

void FUN_145c69aa8(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1411d5a26(param_1,local_10,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c69ae4 FUN_145c69ae4 body=388 status=ok
// SIG undefined FUN_145c69ae4(void)

longlong * FUN_145c69ae4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14109b734();
  FUN_14109b76e(param_1,&local_38,uVar6);
  if (local_38 != (longlong *)0x0) goto LAB_145c69b8a;
  plVar7 = (longlong *)FUN_145c69c69();
  local_38 = plVar7 + 2;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145c69ce2(param_1,iVar4);
  }
  plVar1 = local_30;
  lVar5 = *param_1;
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = local_38;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (local_30 == (longlong *)0x0) goto LAB_145c69b8a;
    local_30 = (longlong *)0x0;
LAB_145c69bf4:
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_145c69b8a;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 == local_30) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      bVar8 = local_30 != (longlong *)0x0;
      local_30 = plVar7;
      if (bVar8) goto LAB_145c69bf4;
    }
  }
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_145c69b8a:
  plVar1 = local_30;
  plVar7 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 145c69c69 FUN_145c69c69 body=120 status=ok
// SIG undefined FUN_145c69c69(void)

void FUN_145c69c69(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b42b0a0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b222bb0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 2;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[3] = &PTR_FUN_14b222bd0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 2;
  return;
}



// FUNCTION 145c69ce2 FUN_145c69ce2 body=132 status=ok
// SIG undefined FUN_145c69ce2(void)

void FUN_145c69ce2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c69d66 FUN_145c69d66 body=132 status=ok
// SIG undefined FUN_145c69d66(void)

void FUN_145c69d66(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c69dec FUN_145c69dec body=409 status=ok
// SIG undefined FUN_145c69dec(void)

void FUN_145c69dec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c69f86(local_1c,local_20,local_24,local_28 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c69f86 FUN_145c69f86 body=84 status=ok
// SIG undefined FUN_145c69f86(void)

ulonglong FUN_145c69f86(uint param_1,uint param_2,uint param_3,char param_4)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (param_4 != '\0') {
    uVar1 = FUN_145c69fda(param_1,param_2);
    return uVar1;
  }
  if (param_3 - 1 < 0x1f) {
    uVar2 = 0;
    do {
      if ((int)(1 << ((byte)uVar2 & 0x1f) & param_1) < 1) {
        uVar1 = 0;
        if (param_2 < param_3) {
          uVar1 = (ulonglong)param_2;
        }
        while ((param_1 >> ((uint)uVar1 & 0x1f) & 1) != 0) {
          uVar1 = (longlong)(int)((uint)uVar1 + 1) % (longlong)(int)param_3 & 0xffffffff;
        }
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 145c69fda FUN_145c69fda body=201 status=ok
// SIG undefined FUN_145c69fda(void)

uint FUN_145c69fda(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 - 1;
  if (uVar1 < 0x1f) {
    uVar2 = 0;
    do {
      if ((int)(1 << ((byte)uVar2 & 0x1f) & param_1) < 1) {
        if (param_3 <= param_2) {
          uVar2 = rand();
          param_2 = (uint)((float)(int)param_3 * ((float)(uVar2 & 0x7fff) / 32767.0));
          if ((int)uVar1 <= (int)param_2) {
            param_2 = uVar1;
          }
        }
        if ((param_1 >> (param_2 & 0x1f) & 1) == 0) {
          return param_2;
        }
        do {
          if ((int)param_3 < 1) {
            uVar2 = 0;
          }
          else {
            uVar2 = rand();
            uVar2 = (uint)(((float)(uVar2 & 0x7fff) / 32767.0) * (float)(int)param_3);
            if ((int)uVar1 <= (int)uVar2) {
              uVar2 = uVar1;
            }
          }
        } while ((param_1 >> (uVar2 & 0x1f) & 1) != 0);
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 145c6a0a4 FUN_145c6a0a4 body=104 status=ok
// SIG undefined FUN_145c6a0a4(void)

undefined4 FUN_145c6a0a4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30);
  FUN_140e4328c(local_30);
  uVar1 = FUN_14150ab81(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6a10e FUN_145c6a10e body=102 status=ok
// SIG undefined FUN_145c6a10e(void)

undefined8 FUN_145c6a10e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c6a176(local_28);
  FUN_144a882a8(param_1,local_28,L"Plugins/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6a176 FUN_145c6a176 body=110 status=ok
// SIG undefined FUN_145c6a176(void)

undefined8 FUN_145c6a176(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1401af3ae();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Enterprise/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6a1e6 FUN_145c6a1e6 body=59 status=ok
// SIG undefined FUN_145c6a1e6(void)

void FUN_145c6a1e6(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_145c6a222(param_1 + 0x120);
    return;
  }
  return;
}



// FUNCTION 145c6a222 FUN_145c6a222 body=48 status=ok
// SIG undefined FUN_145c6a222(void)

void FUN_145c6a222(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145c6a25a FUN_145c6a25a body=98 status=ok
// SIG undefined FUN_145c6a25a(void)

void FUN_145c6a25a(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140f17e42();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410d48d6(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6a2be FUN_145c6a2be body=102 status=ok
// SIG undefined FUN_145c6a2be(void)

ulonglong FUN_145c6a2be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c6a307:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c6a307;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c6a32a FUN_145c6a32a body=102 status=ok
// SIG undefined FUN_145c6a32a(void)

ulonglong FUN_145c6a32a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c6a373:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c6a373;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c6a396 FUN_145c6a396 body=102 status=ok
// SIG undefined FUN_145c6a396(void)

ulonglong FUN_145c6a396(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c6a3df:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c6a3df;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c6a40e FUN_145c6a40e body=96 status=ok
// SIG undefined FUN_145c6a40e(void)

undefined8 * FUN_145c6a40e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = IModuleInterface::vftable;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b4ff440;
  puVar1[1] = &PTR_FUN_14b4ff480;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return puVar1;
}



// FUNCTION 145c6a47a FUN_145c6a47a body=96 status=ok
// SIG undefined FUN_145c6a47a(void)

undefined8 * FUN_145c6a47a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  FUN_1409e1656(puVar1);
  FUN_14118b488(puVar1 + 1);
  puVar2 = puVar1 + 2;
  *puVar1 = &PTR_FUN_14b525fe0;
  puVar1[1] = &PTR_LAB_14b526030;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[2] = &PTR_LAB_14b526060;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar2;
}



// FUNCTION 145c6a4da FUN_145c6a4da body=40 status=ok
// SIG undefined FUN_145c6a4da(void)

undefined8 FUN_145c6a4da(undefined8 param_1,int param_2)

{
  FUN_145c6a502();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6a502 FUN_145c6a502 body=67 status=ok
// SIG undefined FUN_145c6a502(void)

void FUN_145c6a502(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5e11d0;
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10f] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c6a54a FUN_145c6a54a body=102 status=ok
// SIG undefined FUN_145c6a54a(void)

void FUN_145c6a54a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beeced0;
  puVar1[0x1f] = &PTR_LAB_14beed220;
  puVar1[0x20] = &PTR_LAB_14beed250;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x24) = 1;
  FUN_140ff5708(puVar1 + 0xd,1);
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 5;
  return;
}



// FUNCTION 145c6a5b0 FUN_145c6a5b0 body=63 status=ok
// SIG undefined FUN_145c6a5b0(void)

undefined1 FUN_145c6a5b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c6a5f0(param_2,param_3);
    param_3 = param_3 + 0x4d0;
    param_2 = param_2 + 0x4d0;
  }
  return 1;
}



// FUNCTION 145c6a5f0 FUN_145c6a5f0 body=763 status=ok
// SIG undefined FUN_145c6a5f0(void)

longlong FUN_145c6a5f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_14150acc4(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_14150acc4(param_1 + 0x68,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_1459a0a08(param_1 + 0x88,param_2 + 0x88);
  FUN_1459a0a08(param_1 + 0x98,param_2 + 0x98);
  FUN_1401f3db8(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1401f3db8(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  FUN_14150acc4(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  FUN_14150acc4(param_1 + 0x110,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  FUN_140d02432(param_1 + 0x130,param_2 + 0x130);
  FUN_140d02432(param_1 + 0x180,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  FUN_140d02432(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_140d02432(param_1 + 0x230,param_2 + 0x230);
  *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_2 + 0x280);
  FUN_145c6a8ec(param_1 + 0x288,param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_144a7bb84(param_1 + 0x308,param_2 + 0x308);
  FUN_144a82394(param_1 + 800,param_2 + 800);
  *(undefined1 *)(param_1 + 0x328) = *(undefined1 *)(param_2 + 0x328);
  FUN_145c6a8ec(param_1 + 0x330,param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  FUN_144a7bb84(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_144a82394(param_1 + 0x3c8,param_2 + 0x3c8);
  *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined2 *)(param_1 + 0x3d8) = *(undefined2 *)(param_2 + 0x3d8);
  *(undefined1 *)(param_1 + 0x3da) = *(undefined1 *)(param_2 + 0x3da);
  FUN_145c6a9b8(param_1 + 0x3e0,param_2 + 0x3e0);
  FUN_140d02432(param_1 + 0x3f8,param_2 + 0x3f8);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x448);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  uVar1 = *(undefined4 *)(param_2 + 0x45c);
  uVar2 = *(undefined4 *)(param_2 + 0x460);
  uVar3 = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = uVar1;
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  FUN_144a787a6(param_1 + 0x468,param_2 + 0x468);
  FUN_14065c7a4(param_1 + 0x478,param_2 + 0x478);
  uVar1 = *(undefined4 *)(param_2 + 0x48c);
  uVar2 = *(undefined4 *)(param_2 + 0x490);
  uVar3 = *(undefined4 *)(param_2 + 0x494);
  uVar4 = *(undefined4 *)(param_2 + 0x498);
  uVar5 = *(undefined4 *)(param_2 + 0x49c);
  uVar6 = *(undefined4 *)(param_2 + 0x4a0);
  uVar7 = *(undefined4 *)(param_2 + 0x4a4);
  uVar8 = *(undefined4 *)(param_2 + 0x4a6);
  uVar9 = *(undefined4 *)(param_2 + 0x4aa);
  uVar10 = *(undefined4 *)(param_2 + 0x4ae);
  uVar11 = *(undefined4 *)(param_2 + 0x4b2);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = uVar1;
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  *(undefined4 *)(param_1 + 0x494) = uVar3;
  *(undefined4 *)(param_1 + 0x498) = uVar4;
  *(undefined4 *)(param_1 + 0x49c) = uVar5;
  *(undefined4 *)(param_1 + 0x4a0) = uVar6;
  *(undefined4 *)(param_1 + 0x4a4) = uVar7;
  *(undefined4 *)(param_1 + 0x4a6) = uVar8;
  *(undefined4 *)(param_1 + 0x4aa) = uVar9;
  *(undefined4 *)(param_1 + 0x4ae) = uVar10;
  *(undefined4 *)(param_1 + 0x4b2) = uVar11;
  FUN_145c6a960(param_1 + 0x4b8,param_2 + 0x4b8);
  return param_1;
}



// FUNCTION 145c6a8ec FUN_145c6a8ec body=115 status=ok
// SIG undefined FUN_145c6a8ec(void)

undefined8 * FUN_145c6a8ec(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a7bb84(param_1 + 2,param_2 + 2);
  FUN_144a82394(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[8] = param_2[8];
  FUN_144a7bb84(param_1 + 10,param_2 + 10);
  FUN_144a82394(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 145c6a960 FUN_145c6a960 body=88 status=ok
// SIG undefined FUN_145c6a960(void)

longlong * FUN_145c6a960(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145c6a9b8 FUN_145c6a9b8 body=88 status=ok
// SIG undefined FUN_145c6a9b8(void)

longlong * FUN_145c6a9b8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145c6aa10 FUN_145c6aa10 body=184 status=ok
// SIG undefined FUN_145c6aa10(void)

void FUN_145c6aa10(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    (**(code **)(*plVar1 + 0x128))(plVar1,*param_3);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar2 = FUN_14150ad1c();
    FUN_1401e1be1(plVar1,param_4,uVar2);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_4);
    if (*(int *)(param_5 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_5;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x000145c6aab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145c6aac8 FUN_145c6aac8 body=172 status=ok
// SIG undefined FUN_145c6aac8(void)

void FUN_145c6aac8(undefined4 *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)param_3[0x28];
  *param_1 = uVar1;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x144);
  param_1[1] = uVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = 0;
  if (param_3 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x3c0))(param_3);
    uVar2 = (**(code **)(*param_3 + 0x3b8))(param_3);
    uVar2 = FUN_14150ad55(uVar2,uVar1);
    uVar1 = *param_1;
  }
  param_1[10] = uVar2;
  param_1[9] = 0;
  param_1[6] = 0;
  *(longlong **)(param_1 + 0xc) = param_3;
  *param_2 = uVar1;
  param_2[1] = param_1[1];
  param_2[6] = param_1[10];
  param_2[0xc] = param_1[9];
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[2] = *(undefined4 *)((longlong)param_3 + 0x164);
  param_2[3] = 1;
  return;
}



// FUNCTION 145c6ab74 FUN_145c6ab74 body=331 status=ok
// SIG undefined FUN_145c6ab74(void)

void FUN_145c6ab74(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x178,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b412b60;
  plVar1 = plVar3 + 2;
  FUN_145c6ae7c(plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  FUN_145c6adda(&local_30,plVar1);
  plVar1 = local_28;
  DAT_14cb83570 = local_30;
  if (DAT_14cb83578 != local_28) {
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
    }
    plVar3 = DAT_14cb83578;
    if (DAT_14cb83578 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)DAT_14cb83578 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    DAT_14cb83578 = plVar1;
  }
  uVar4 = FUN_1458fd8e2();
  local_40 = local_30;
  local_38 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_145c6acc0(uVar4,&local_40);
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6acc0 FUN_145c6acc0 body=16 status=ok
// SIG undefined FUN_145c6acc0(void)

void FUN_145c6acc0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_145c6acd0(param_1 + 3);
    return;
  }
  return;
}



// FUNCTION 145c6acd0 FUN_145c6acd0 body=134 status=ok
// SIG undefined FUN_145c6acd0(void)

ulonglong FUN_145c6acd0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == *param_2) {
        if (iVar3 != 1) {
          uVar4 = (ulonglong)(uint)-iVar3;
          goto LAB_145c6ad41;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145c6ad56(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_145c6ad41:
  return uVar4 & 0xffffffff;
}



// FUNCTION 145c6ad56 FUN_145c6ad56 body=132 status=ok
// SIG undefined FUN_145c6ad56(void)

void FUN_145c6ad56(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c6adda FUN_145c6adda body=162 status=ok
// SIG undefined FUN_145c6adda(void)

void FUN_145c6adda(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c6ae19;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c6ae19;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c6ae19:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c6ae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c6ae7c FUN_145c6ae7c body=358 status=ok
// SIG undefined FUN_145c6ae7c(void)

undefined8 * FUN_145c6ae7c(undefined8 *param_1)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14b412b80;
  FUN_1446ddc76(&local_60,"game_session",1);
  FUN_145c6afe4(param_1 + 8,local_60);
  FUN_145c6affe(&local_70,&DAT_14cb83388);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  FUN_145c6aff4(param_1 + 0x20);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 2;
  param_1[10] = &PTR_FUN_14b412d50;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6afe4 FUN_145c6afe4 body=15 status=ok
// SIG undefined FUN_145c6afe4(void)

undefined8 * FUN_145c6afe4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 145c6aff4 FUN_145c6aff4 body=10 status=ok
// SIG undefined FUN_145c6aff4(void)

undefined8 * FUN_145c6aff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 145c6affe FUN_145c6affe body=19 status=ok
// SIG undefined FUN_145c6affe(void)

void FUN_145c6affe(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x3c);
  param_1[1] = 0;
  return;
}



// FUNCTION 145c6b01c FUN_145c6b01c body=125 status=ok
// SIG undefined FUN_145c6b01c(void)

void FUN_145c6b01c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99d5f0;
  param_1[4] = &PTR_FUN_14b99d630;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99d640;
  param_1[4] = &PTR_LAB_14b99d680;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145c6b0a4 FUN_145c6b0a4 body=125 status=ok
// SIG undefined FUN_145c6b0a4(void)

void FUN_145c6b0a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99daa0;
  param_1[4] = &PTR_FUN_14b99dae0;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99daf0;
  param_1[4] = &PTR_LAB_14b99db30;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145c6b122 FUN_145c6b122 body=69 status=ok
// SIG undefined FUN_145c6b122(void)

void FUN_145c6b122(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  switchD_143c3d4dc::caseD_1d();
  local_18 = param_1;
  FUN_145c6b168();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6b168 FUN_145c6b168 body=194 status=ok
// SIG undefined FUN_145c6b168(void)

void FUN_145c6b168(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (DAT_14c967c28 < 1) {
    return;
  }
  lVar5 = 0;
  bVar3 = false;
  lVar4 = DAT_14c967c20;
  do {
    uVar6 = (uint)lVar5;
    lVar5 = (longlong)(int)uVar6;
    lVar1 = lVar4 + lVar5 * 8;
    lVar10 = 0;
    while (*(longlong *)(lVar1 + lVar10 * 8) != *param_1) {
      lVar2 = lVar5 + lVar10;
      lVar10 = lVar10 + 1;
      if ((longlong)DAT_14c967c28 <= lVar2 + 1) {
        if (!bVar3) {
          return;
        }
        goto LAB_145c6b1d5;
      }
    }
    iVar9 = (int)lVar10;
    if (~uVar6 + DAT_14c967c28 != iVar9) {
      iVar8 = (~uVar6 + DAT_14c967c28) - iVar9;
      iVar7 = 1;
      if (iVar8 < 1) {
        iVar7 = iVar8;
      }
      memmove((void *)(lVar1 + lVar10 * 8),(void *)(lVar4 + (longlong)(DAT_14c967c28 - iVar7) * 8),
              (longlong)iVar7 << 3);
      lVar4 = DAT_14c967c20;
    }
    lVar5 = lVar5 + lVar10;
    DAT_14c967c28 = DAT_14c967c28 + -1;
    bVar3 = true;
  } while ((int)(uVar6 + iVar9) < DAT_14c967c28);
LAB_145c6b1d5:
  FUN_145c6b22a();
  return;
}



// FUNCTION 145c6b22a FUN_145c6b22a body=76 status=ok
// SIG undefined FUN_145c6b22a(void)

void FUN_145c6b22a(void)

{
  int iVar1;
  
  iVar1 = FUN_145c6b276(DAT_14c967c28,DAT_14c967c2c);
  if (iVar1 != DAT_14c967c2c) {
    DAT_14c967c2c = iVar1;
    FUN_1446f8d3c(&DAT_14c967c20,DAT_14c967c28,iVar1,8,8);
  }
  return;
}



// FUNCTION 145c6b276 FUN_145c6b276 body=89 status=ok
// SIG undefined FUN_145c6b276(void)

ulonglong FUN_145c6b276(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145c6b2d0 FUN_145c6b2d0 body=141 status=ok
// SIG undefined FUN_145c6b2d0(void)

longlong FUN_145c6b2d0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1410b645c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_145c6b321;
  }
  local_30 = param_3;
  FUN_145c6b44e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_145c6b321:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x28;
}



// FUNCTION 145c6b35e FUN_145c6b35e body=238 status=ok
// SIG undefined FUN_145c6b35e(void)

void FUN_145c6b35e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14573f2d4(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = param_2;
  local_38 = 0;
  iVar2 = (int)param_1[3];
  lVar1 = param_1[2];
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
    iVar2 = 0;
  }
  else {
    FUN_148840d60(&local_38,iVar2);
    FUN_148840db8(local_38,lVar1,iVar2);
    lVar1 = local_38;
    lVar3 = (longlong)local_30;
    iVar2 = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x20))(*(longlong **)(lVar1 + lVar4),param_2);
        lVar4 = lVar4 + 0x10;
        iVar2 = local_30;
      } while (lVar3 * 0x10 != lVar4);
    }
  }
  FUN_145c6b69c(local_38,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6b44e FUN_145c6b44e body=269 status=ok
// SIG undefined FUN_145c6b44e(void)

undefined4 * FUN_145c6b44e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c6b6ea(param_1,local_48);
  FUN_145c6b5d2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_145c6b55c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145c6b7e6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6b55c FUN_145c6b55c body=118 status=ok
// SIG undefined FUN_145c6b55c(void)

undefined8 FUN_145c6b55c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1410b645c(), iVar2 != -1)) {
    lVar1 = *param_1;
    FUN_145c6b660((longlong)iVar2 * 0x50 + lVar1 + 0x28);
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x50),param_3,0x48);
    FUN_14612a2e4(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 145c6b5d2 FUN_145c6b5d2 body=140 status=ok
// SIG undefined FUN_145c6b5d2(void)

undefined8 * FUN_145c6b5d2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
  param_2[3] = puVar1[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  param_2[5] = 0;
  local_30 = 0;
  param_2[6] = 0;
  local_28 = 0;
  param_2[7] = 0;
  local_20 = 0;
  param_2[8] = 0;
  local_18 = 0;
  FUN_145c6b660();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6b660 FUN_145c6b660 body=60 status=ok
// SIG undefined FUN_145c6b660(void)

void FUN_145c6b660(longlong *param_1)

{
  FUN_145c6b69c(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6b69c FUN_145c6b69c body=77 status=ok
// SIG undefined FUN_145c6b69c(void)

void FUN_145c6b69c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c6b6ea FUN_145c6b6ea body=251 status=ok
// SIG undefined FUN_145c6b6ea(void)

int * FUN_145c6b6ea(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 145c6b7e6 FUN_145c6b7e6 body=555 status=ok
// SIG undefined FUN_145c6b7e6(void)

void FUN_145c6b7e6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar11 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        lVar10 = (longlong)iVar11 * 0x50;
        uVar3 = *(uint *)(lVar9 + lVar10);
        if (*(int *)(lVar9 + 8 + lVar10) != 0) {
          uVar3 = FUN_144a78877(uVar3);
        }
        lVar9 = lVar9 + lVar10;
        uVar8 = *(uint *)(lVar9 + 0xc);
        if (*(int *)(lVar9 + 0x14) != 0) {
          uVar8 = FUN_144a78877(uVar8);
        }
        uVar4 = *(uint *)(lVar9 + 0x18);
        if (*(int *)(lVar9 + 0x20) != 0) {
          uVar4 = FUN_144a78877(uVar4);
        }
        uVar7 = (longlong)(int)(uVar8 ^ uVar3 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar9 + 0x4c) = iVar6;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x48) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6ba12 FUN_145c6ba12 body=428 status=ok
// SIG undefined FUN_145c6ba12(void)

void FUN_145c6ba12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 600);
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
  plVar3 = *(longlong **)(param_1 + 0x248);
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
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  while (*(undefined8 **)(param_1 + 0x228) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x228) = **(undefined8 **)(param_1 + 0x228);
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x210) == 0) goto LAB_145c6bacf;
  while( true ) {
    FUN_1400020a8();
LAB_145c6bacf:
    if (*(undefined8 **)(param_1 + 0x208) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 0x208) = **(undefined8 **)(param_1 + 0x208);
  }
  while (*(undefined8 **)(param_1 + 0x1f8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1f8) = **(undefined8 **)(param_1 + 0x1f8);
    FUN_1400020a8();
  }
  while (*(undefined8 **)(param_1 + 0x1e8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = **(undefined8 **)(param_1 + 0x1e8);
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1c0);
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
  FUN_145c6bbbe(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a8b802(param_1 + 0xf8);
  FUN_144a8b786(param_1 + 0x40);
  FUN_1449db362(param_1 + 0x30);
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x10);
  return;
}



// FUNCTION 145c6bbbe FUN_145c6bbbe body=75 status=ok
// SIG undefined FUN_145c6bbbe(void)

void FUN_145c6bbbe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c6bc0a FUN_145c6bc0a body=40 status=ok
// SIG undefined FUN_145c6bc0a(void)

undefined8 FUN_145c6bc0a(undefined8 param_1,int param_2)

{
  FUN_145c6bc32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6bc32 FUN_145c6bc32 body=57 status=ok
// SIG undefined FUN_145c6bc32(void)

void FUN_145c6bc32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b241000;
  FUN_145c6bc6b(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f7294(param_1);
  return;
}



// FUNCTION 145c6bc6b FUN_145c6bc6b body=64 status=ok
// SIG undefined FUN_145c6bc6b(void)

void FUN_145c6bc6b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b240e90;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1457f72cc(param_1);
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 145c6bcac FUN_145c6bcac body=40 status=ok
// SIG undefined FUN_145c6bcac(void)

undefined8 FUN_145c6bcac(undefined8 param_1,int param_2)

{
  FUN_145c6bcd4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6bcd4 FUN_145c6bcd4 body=264 status=ok
// SIG undefined FUN_145c6bcd4(void)

void FUN_145c6bcd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bab5010;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6be14(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5756(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6bddc(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6bddc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c6bddc FUN_145c6bddc body=55 status=ok
// SIG undefined FUN_145c6bddc(void)

void FUN_145c6bddc(longlong *param_1)

{
  FUN_145c6be4c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6be14 FUN_145c6be14 body=55 status=ok
// SIG undefined FUN_145c6be14(void)

void FUN_145c6be14(longlong *param_1)

{
  FUN_145c6bfcc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6be4c FUN_145c6be4c body=383 status=ok
// SIG undefined FUN_145c6be4c(void)

void FUN_145c6be4c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6bfcc FUN_145c6bfcc body=383 status=ok
// SIG undefined FUN_145c6bfcc(void)

void FUN_145c6bfcc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6c14c FUN_145c6c14c body=59 status=ok
// SIG undefined FUN_145c6c14c(void)

void FUN_145c6c14c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x40,0x10);
  uVar2 = FUN_145c6c1e2(**(undefined8 **)(param_1 + 0x1b0));
  FUN_145c6c188(uVar1,uVar2);
  return;
}



// FUNCTION 145c6c188 FUN_145c6c188 body=59 status=ok
// SIG undefined FUN_145c6c188(void)

undefined8 * FUN_145c6c188(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_145c6c1c4();
  lVar1 = *(longlong *)(param_2 + 0xc0);
  param_1[6] = lVar1;
  *param_1 = &PTR_FUN_14a3510b0;
  param_1[7] = *(undefined8 *)(lVar1 + 2000);
  return param_1;
}



// FUNCTION 145c6c1c4 FUN_145c6c1c4 body=29 status=ok
// SIG undefined FUN_145c6c1c4(void)

void FUN_145c6c1c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14a1e5c30;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 145c6c1e2 FUN_145c6c1e2 body=155 status=ok
// SIG undefined FUN_145c6c1e2(void)

longlong FUN_145c6c1e2(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x7c8);
  if (lVar2 == 0) {
    FUN_145c6c27e(&local_20,param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x7c8);
    *(longlong *)(param_1 + 0x7c8) = local_20;
    local_20 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar2 = local_20;
      if (local_20 != 0) {
        FUN_145c7e5a2(local_20);
        FUN_1400020a8(lVar2);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x7c8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6c27e FUN_145c6c27e body=138 status=ok
// SIG undefined FUN_145c6c27e(void)

undefined8 * FUN_145c6c27e(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c6c30a(local_50);
  local_30 = *(int *)(param_2 + 0x218) == 2;
  puVar1 = (undefined8 *)FUN_14001cc68(200,0x10);
  FUN_145c6c34c(puVar1,local_50);
  puVar1[0x18] = param_2;
  *puVar1 = &PTR_FUN_14a351090;
  *param_1 = puVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6c30a FUN_145c6c30a body=66 status=ok
// SIG undefined FUN_145c6c30a(void)

void FUN_145c6c30a(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[1] = (longlong)DAT_14c760104 << 0x14;
  *(undefined4 *)(param_1 + 2) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_14c760108;
  *(undefined4 *)(param_1 + 3) = DAT_14c76010c;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14c760110;
  return;
}



// FUNCTION 145c6c34c FUN_145c6c34c body=137 status=ok
// SIG undefined FUN_145c6c34c(void)

undefined8 * FUN_145c6c34c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = &PTR_LAB_14a1e7f80;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  param_1[5] = *(undefined8 *)(param_2 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145c6c3d6 FUN_145c6c3d6 body=124 status=ok
// SIG undefined FUN_145c6c3d6(void)

longlong * FUN_145c6c3d6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b10fed0;
  FUN_145c6c452(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 145c6c452 FUN_145c6c452 body=91 status=ok
// SIG undefined FUN_145c6c452(void)

undefined8 * FUN_145c6c452(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1410c9586();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_145c6c48e;
  }
  param_2 = FUN_1410c9586();
LAB_145c6c48e:
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b3f7d60;
  return param_1;
}



// FUNCTION 145c6c4ae FUN_145c6c4ae body=40 status=ok
// SIG undefined FUN_145c6c4ae(void)

undefined8 FUN_145c6c4ae(undefined8 param_1,int param_2)

{
  FUN_145c6c4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6c4d6 FUN_145c6c4d6 body=175 status=ok
// SIG undefined FUN_145c6c4d6(void)

void FUN_145c6c4d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b690a90;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c6c586 FUN_145c6c586 body=124 status=ok
// SIG undefined FUN_145c6c586(void)

longlong * FUN_145c6c586(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b7f0790;
  FUN_145c6c602(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 145c6c602 FUN_145c6c602 body=91 status=ok
// SIG undefined FUN_145c6c602(void)

undefined8 * FUN_145c6c602(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145999480();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_145c6c63e;
  }
  param_2 = FUN_145999480();
LAB_145c6c63e:
  FUN_140d65166(param_1,param_2);
  *param_1 = &PTR_FUN_14b999270;
  return param_1;
}



// FUNCTION 145c6c65e FUN_145c6c65e body=74 status=ok
// SIG undefined FUN_145c6c65e(void)

void FUN_145c6c65e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba87dc0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6c6a8(param_1 + 3);
  return;
}



// FUNCTION 145c6c6a8 FUN_145c6c6a8 body=53 status=ok
// SIG undefined FUN_145c6c6a8(void)

void FUN_145c6c6a8(longlong *param_1)

{
  FUN_145c6c6de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6c6de FUN_145c6c6de body=88 status=ok
// SIG undefined FUN_145c6c6de(void)

void FUN_145c6c6de(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c6c736 FUN_145c6c736 body=99 status=ok
// SIG undefined FUN_145c6c736(void)

void FUN_145c6c736(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c6c79a(puVar1);
  *puVar1 = &PTR_FUN_14bd6db00;
  puVar1[5] = &PTR_LAB_14bd6dec0;
  puVar1[0x13] = &PTR_LAB_14bd6dee0;
  puVar1[0x14] = &PTR_LAB_14bd6def8;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return;
}



// FUNCTION 145c6c79a FUN_145c6c79a body=116 status=ok
// SIG undefined FUN_145c6c79a(void)

undefined8 * FUN_145c6c79a(undefined8 *param_1)

{
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14bdc8690;
  param_1[5] = &PTR_FUN_14bdc8a50;
  param_1[0x13] = &PTR_FUN_14bdc8a70;
  param_1[0x14] = &PTR_FUN_14bdc8a88;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 145c6c80e FUN_145c6c80e body=839 status=ok
// SIG undefined FUN_145c6c80e(void)

void FUN_145c6c80e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined4 local_1a8 [2];
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined2 local_120;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_145c6cb84();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1410cfc16(param_1);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = plVar3[1];
      cVar1 = FUN_144729dda(lVar5 + 0x58);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)FUN_14479d2ce(lVar5 + 0x58);
        lVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
        if (lVar5 != 0) {
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_1b0 = lVar5;
          if (*(int *)(lVar2 + 0x1c) != 0) {
            local_198 = *(undefined8 *)(lVar2 + 0x1c);
            local_190 = *(undefined4 *)(lVar2 + 0x24);
            (**(code **)(*plVar3 + 0x10))(plVar3,&local_188);
            if ((char)local_188 == '\x01') {
              uStack_90 = (undefined4)lStack_180;
              local_98 = (undefined2)local_188;
              uStack_96 = (undefined2)((ulonglong)local_188 >> 0x10);
              uStack_94 = (undefined4)((ulonglong)local_188 >> 0x20);
              FUN_1447715ec(&local_88);
            }
            if (CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160)) != 0) {
              FUN_1400020a8();
            }
          }
          local_b0 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_d0 = *(undefined8 *)(lVar2 + 0x48);
          local_c8 = *(undefined4 *)(lVar2 + 0x50);
          FUN_1447715ec(&local_c0,lVar2 + 0x58);
          uVar6 = FUN_141068cca(param_1);
          FUN_145c6cc9a(param_1,&local_188);
          FUN_141068c44(param_1,local_1a8);
          FUN_140d84843(&local_d0,local_1a8,&local_188,uVar6);
          local_178 = 0;
          local_188 = 0;
          lStack_180 = 0;
          local_160 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          local_150 = 0;
          uStack_148 = 0;
          local_140 = 0;
          local_120 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          local_e0 = 0;
          local_174 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          FUN_145c6cb56(plVar3);
          uStack_168 = (undefined4)plVar3[0x13];
          uStack_170 = (undefined4)plVar3[0x12];
          uStack_16c = (undefined4)((ulonglong)plVar3[0x12] >> 0x20);
          FUN_145c6cc0c(lVar2 + 0x30,local_1a8);
          if (local_1a0 != 0) {
            lStack_180 = local_1a0;
          }
          uStack_158 = local_c8;
          local_160 = (undefined2)local_d0;
          uStack_15e = (undefined2)((ulonglong)local_d0 >> 0x10);
          uStack_15c = (undefined4)((ulonglong)local_d0 >> 0x20);
          FUN_1447715ec(&local_150,&local_c0);
          local_120 = local_98;
          uStack_11e = uStack_96;
          uStack_11c = uStack_94;
          uStack_118 = uStack_90;
          FUN_1447715ec(&local_110,&local_88);
          local_128 = *(undefined1 *)(lVar2 + 0x18);
          local_e8 = CONCAT11(*(undefined1 *)(lVar2 + 0x80),*(undefined1 *)(lVar2 + 0x28));
          if ((undefined4 *)(lVar2 + 0x84) != &local_e4) {
            local_e4 = *(undefined4 *)(lVar2 + 0x84);
            local_e0 = 1;
          }
          FUN_145c6cdb8(local_1b0,local_1a8,&local_188);
          *(undefined4 *)(param_1 + 0x60) = local_1a8[0];
          FUN_1458c3994(&local_188);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6cb56 FUN_145c6cb56 body=45 status=ok
// SIG undefined FUN_145c6cb56(void)

undefined8 * FUN_145c6cb56(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x100);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 145c6cb84 FUN_145c6cb84 body=78 status=ok
// SIG undefined FUN_145c6cb84(void)

longlong * FUN_145c6cb84(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_145c6cbd2();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 145c6cbd2 FUN_145c6cbd2 body=57 status=ok
// SIG undefined FUN_145c6cbd2(void)

void FUN_145c6cbd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb554a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb554a8 = FUN_140002ddd(FUN_1464b22c4,uVar1,L"BinderBehaviorMod_RegisterFactEvaluator");
  }
  return;
}



// FUNCTION 145c6cc0c FUN_145c6cc0c body=83 status=ok
// SIG undefined FUN_145c6cc0c(void)

longlong * FUN_145c6cc0c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_145c6cc60();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145c6cc60 FUN_145c6cc60 body=57 status=ok
// SIG undefined FUN_145c6cc60(void)

void FUN_145c6cc60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57650 = FUN_140002ddd(FUN_1464bcf71,uVar1,L"FactEvaluator");
  }
  return;
}



// FUNCTION 145c6cc9a FUN_145c6cc9a body=134 status=ok
// SIG undefined FUN_145c6cc9a(void)

undefined8 * FUN_145c6cc9a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145c6cd20(0,param_2);
        return param_2;
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
    FUN_145c6cd20(*(undefined8 *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 145c6cd20 FUN_145c6cd20 body=151 status=ok
// SIG undefined FUN_145c6cd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145c6cd20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar7 = DAT_14c948618;
LAB_145c6cd85:
    *param_2 = uVar7;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      lVar4 = _DAT_00000018;
      if (iVar6 == 0) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(_DAT_00000018 + 0x2c);
        uVar7 = *(undefined8 *)(lVar4 + 0x24);
        goto LAB_145c6cd85;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x2c);
    *param_2 = *(undefined8 *)(lVar4 + 0x24);
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
  return param_2;
}



// FUNCTION 145c6cdb8 FUN_145c6cdb8 body=345 status=ok
// SIG undefined FUN_145c6cdb8(void)

undefined4 * FUN_145c6cdb8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 != 0) {
    cVar5 = FUN_140114204(param_3 + 5);
    if (cVar5 != '\0') {
      (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_50,param_1);
      local_40 = local_50 + 4;
      local_38 = &local_50;
      FUN_145c6d01e(param_1 + 0x30,local_2c);
      (**(code **)(*local_50 + 8))(local_50,param_3);
      cVar5 = (**(code **)(*local_50 + 0x18))();
      if (cVar5 == '\0') {
        (**(code **)(*local_50 + 0x20))();
      }
      else {
        FUN_148834018(param_1);
        iVar3 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
          FUN_148839d42((longlong *)(param_1 + 0x88),iVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0x88);
        *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_50;
        *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
      }
      *param_2 = (int)local_50[4];
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
      goto LAB_145c6ce67;
    }
  }
  *param_2 = 0;
LAB_145c6ce67:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6cf12 FUN_145c6cf12 body=30 status=ok
// SIG undefined FUN_145c6cf12(void)

void FUN_145c6cf12(longlong param_1)

{
  FUN_145c6cf30(param_1 + 0x28);
  FUN_145c6d2fa(param_1);
  return;
}



// FUNCTION 145c6cf30 FUN_145c6cf30 body=237 status=ok
// SIG undefined FUN_145c6cf30(void)

undefined8 * FUN_145c6cf30(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 3);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_1447715ec(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xd] = param_2[0xd];
  FUN_1447715ec(param_1 + 0xf,param_2 + 0xf);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x15) == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x15) != '\x01') {
        return param_1;
      }
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0x15) = uVar9;
  }
  return param_1;
}



// FUNCTION 145c6d01e FUN_145c6d01e body=302 status=ok
// SIG undefined FUN_145c6d01e(void)

undefined4 * FUN_145c6d01e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c6d20a(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_145c6d14e(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c6dba4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6d14e FUN_145c6d14e body=187 status=ok
// SIG undefined FUN_145c6d14e(void)

undefined8 FUN_145c6d14e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_145aa8d80(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 145c6d20a FUN_145c6d20a body=239 status=ok
// SIG undefined FUN_145c6d20a(void)

int * FUN_145c6d20a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145c6d2fa FUN_145c6d2fa body=654 status=ok
// SIG undefined FUN_145c6d2fa(void)

void FUN_145c6d2fa(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  code *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(param_1 + 0x88);
  if (bVar1 - 2 < 2) {
    local_98 = FUN_14584c87c;
    local_90 = 0;
    FUN_145c6d5a4(&local_88,param_1);
    FUN_1414cf8c0(&DAT_14cadbeb0,&local_98,&local_88);
    FUN_1449db362(&local_88);
    local_98 = FUN_1458801ae;
    local_90 = 0;
    FUN_145c6d750(&local_88,param_1,&local_98);
    FUN_141211dc4(&DAT_14cadbec8,&local_98,&local_88);
    FUN_1449db362(&local_88);
    lVar2 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
      iVar7 = 0;
      lVar8 = 0;
      do {
        lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar8);
        if (lVar3 != 0) {
          lVar4 = FUN_1449f3324();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_14584c8ea(param_1,lVar3);
          }
        }
        lVar8 = lVar8 + 8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar2 + 0x238));
    }
  }
  else {
    if (bVar1 == 1) {
      FUN_141230368(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
    }
    if ((bVar1 == 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
      uVar5 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
      lVar2 = FUN_140149a73(uVar5,0);
      if (lVar2 != 0) {
        plVar6 = (longlong *)FUN_1401499e8(lVar2);
        if (plVar6 != (longlong *)0x0) {
          local_98 = FUN_148834548;
          local_90 = 0;
          FUN_14883426e(&local_88,param_1);
          (**(code **)(*plVar6 + 0x70))(plVar6,&local_98,param_1 + 0x90,&local_88);
          *(code **)(param_1 + 0x100) = local_98;
          FUN_1449db362(&local_88);
          lVar2 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1 + 0x90);
          if (lVar2 != 0) {
            local_a8 = *(longlong *)(lVar2 + 0x10);
            if (*(longlong *)(lVar2 + 0x10) == 0) {
              local_a8 = lVar2;
            }
            local_a0 = *(undefined4 *)(lVar2 + 0x18);
            uStack_48 = 0;
            uStack_44 = 0;
            local_58 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            local_68 = 0;
            lStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            FUN_140c25b54(&local_88);
            uStack_50 = uStack_50 & 0xffffff00;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            FUN_1488343f0(param_1,&local_a8);
            if (lStack_60 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6d5a4 FUN_145c6d5a4 body=428 status=ok
// SIG undefined FUN_145c6d5a4(void)

longlong * FUN_145c6d5a4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c6d684:
    *puVar5 = &PTR_LAB_14a8bcc20;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbf60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c6d684;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a8bcc20;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbf60;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 145c6d750 FUN_145c6d750 body=428 status=ok
// SIG undefined FUN_145c6d750(void)

longlong * FUN_145c6d750(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c6d830:
    *puVar5 = &PTR_LAB_14a8bcd00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbfd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c6d830;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a8bcd00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbfd0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 145c6d8fc FUN_145c6d8fc body=161 status=ok
// SIG undefined FUN_145c6d8fc(void)

longlong * FUN_145c6d8fc(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_145c6da42(param_3);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145c6d9a0(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6d9a0 FUN_145c6d9a0 body=162 status=ok
// SIG undefined FUN_145c6d9a0(void)

void FUN_145c6d9a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c6d9df;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c6d9df;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c6d9df:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c6da3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c6da42 FUN_145c6da42 body=172 status=ok
// SIG undefined FUN_145c6da42(void)

undefined8 * FUN_145c6da42(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x118,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3fbe20;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &PTR_FUN_14b3fa760;
  DAT_14cb7940c = DAT_14cb7940c + 1 + (uint)(DAT_14cb7940c == -1);
  puVar1[5] = param_1;
  *(int *)(puVar1 + 6) = DAT_14cb7940c;
  FUN_145af8492(puVar1 + 7);
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[2] = &PTR_FUN_14b3fbe40;
  return puVar1;
}



// FUNCTION 145c6daee FUN_145c6daee body=181 status=ok
// SIG undefined FUN_145c6daee(void)

void FUN_145c6daee(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c6cf30(param_1 + 5);
  FUN_145c6d2fa(param_1);
  uVar1 = FUN_141230368(param_1[3]);
  plVar2 = (longlong *)FUN_140ec3c65(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
    local_40 = &LAB_14883a00a;
    local_38 = 0;
    FUN_145c6dd54(local_30,param_1);
    FUN_1448b6402(uVar1,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6dba4 FUN_145c6dba4 body=431 status=ok
// SIG undefined FUN_145c6dba4(void)

void FUN_145c6dba4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6dd54 FUN_145c6dd54 body=428 status=ok
// SIG undefined FUN_145c6dd54(void)

longlong * FUN_145c6dd54(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c6de34:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbe80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c6de34;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3fbe80;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}


