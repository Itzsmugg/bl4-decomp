// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147089332 FUN_147089332 body=90 status=ok
// SIG undefined FUN_147089332(void)

undefined8 FUN_147089332(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447325ac(param_1 + 0x2f8,local_20,1);
  FUN_1446dcdd4(param_2,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708938e FUN_14708938e body=42 status=ok
// SIG undefined FUN_14708938e(void)

undefined8 FUN_14708938e(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x20,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::CreateDef");
  return 0;
}



// FUNCTION 1470893b8 FUN_1470893b8 body=41 status=ok
// SIG undefined FUN_1470893b8(void)

void FUN_1470893b8(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x21,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::DestroyDef");
  return;
}



// FUNCTION 1470893e2 FUN_1470893e2 body=41 status=ok
// SIG undefined FUN_1470893e2(void)

void FUN_1470893e2(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x22,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::ReInitializeDef");
  return;
}



// FUNCTION 14708940c FUN_14708940c body=41 status=ok
// SIG undefined FUN_14708940c(void)

void FUN_14708940c(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x23,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::ConfigureDef");
  return;
}



// FUNCTION 147089436 FUN_147089436 body=42 status=ok
// SIG undefined FUN_147089436(void)

undefined8 FUN_147089436(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x24,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::GetDefEditorClass");
  return 0;
}



// FUNCTION 147089460 FUN_147089460 body=42 status=ok
// SIG undefined FUN_147089460(void)

undefined8 FUN_147089460(void)

{
  FUN_140033559("Runtime\\Gearbox\\GbxNexus\\Public\\Tests/Serialize/NexusSerializeTest_BaseStore.h"
                ,0x25,L"Pure virtual not implemented (%s)",
                L"UNexusConfigStoreBasicDefFlat::GetDefScriptStruct");
  return 0;
}



// FUNCTION 1470894ee FUN_1470894ee body=59 status=ok
// SIG undefined FUN_1470894ee(void)

undefined8 FUN_1470894ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470895e2 FUN_1470895e2 body=62 status=ok
// SIG undefined FUN_1470895e2(void)

undefined1 FUN_1470895e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147089648 FUN_147089648 body=59 status=ok
// SIG undefined FUN_147089648(void)

undefined8 FUN_147089648(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708968e FUN_14708968e body=43 status=ok
// SIG undefined FUN_14708968e(void)

void FUN_14708968e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147089708 FUN_147089708 body=52 status=ok
// SIG undefined FUN_147089708(void)

undefined8 * FUN_147089708(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708973c FUN_14708973c body=55 status=ok
// SIG undefined FUN_14708973c(void)

void FUN_14708973c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0370 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0370 = FUN_140002ddd(FUN_14173798b,uVar1,L"GbxDef");
  }
  return;
}



// FUNCTION 147089774 FUN_147089774 body=65 status=ok
// SIG undefined FUN_147089774(void)

void FUN_147089774(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14a16d610;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  return;
}



// FUNCTION 1470897b6 FUN_1470897b6 body=50 status=ok
// SIG undefined FUN_1470897b6(void)

void FUN_1470897b6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14a16d610;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  return;
}



// FUNCTION 14708980c FUN_14708980c body=85 status=ok
// SIG undefined FUN_14708980c(void)

undefined8 FUN_14708980c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708988a FUN_14708988a body=59 status=ok
// SIG undefined FUN_14708988a(void)

undefined8 FUN_14708988a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470898d0 FUN_1470898d0 body=43 status=ok
// SIG undefined FUN_1470898d0(void)

void FUN_1470898d0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14708994a FUN_14708994a body=52 status=ok
// SIG undefined FUN_14708994a(void)

undefined8 * FUN_14708994a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708997e FUN_14708997e body=55 status=ok
// SIG undefined FUN_14708997e(void)

void FUN_14708997e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0388 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0388 = FUN_140002ddd(FUN_1417379bc,uVar1,L"GbxGlobalDef");
  }
  return;
}



// FUNCTION 1470899f4 FUN_1470899f4 body=54 status=ok
// SIG undefined FUN_1470899f4(void)

undefined1 FUN_1470899f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147089a52 FUN_147089a52 body=59 status=ok
// SIG undefined FUN_147089a52(void)

undefined8 FUN_147089a52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147089a98 FUN_147089a98 body=53 status=ok
// SIG undefined FUN_147089a98(void)

void FUN_147089a98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147089b7e FUN_147089b7e body=59 status=ok
// SIG undefined FUN_147089b7e(void)

undefined8 FUN_147089b7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147089c1e FUN_147089c1e body=29 status=ok
// SIG undefined FUN_147089c1e(void)

undefined8 FUN_147089c1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147089c3c FUN_147089c3c body=55 status=ok
// SIG undefined FUN_147089c3c(void)

void FUN_147089c3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a03d0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a03d0 = FUN_140002ddd(FUN_1462a0091,uVar1,L"GbxMetaDataRule");
  }
  return;
}



// FUNCTION 147089ce0 FUN_147089ce0 body=59 status=ok
// SIG undefined FUN_147089ce0(void)

undefined8 FUN_147089ce0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147089d80 FUN_147089d80 body=29 status=ok
// SIG undefined FUN_147089d80(void)

undefined8 FUN_147089d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147089d9e FUN_147089d9e body=55 status=ok
// SIG undefined FUN_147089d9e(void)

void FUN_147089d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a03e8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a03e8 = FUN_140002ddd(FUN_1462a0127,uVar1,L"GbxMetaDataStructRule");
  }
  return;
}



// FUNCTION 147089e3e FUN_147089e3e body=59 status=ok
// SIG undefined FUN_147089e3e(void)

undefined8 FUN_147089e3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147089ede FUN_147089ede body=29 status=ok
// SIG undefined FUN_147089ede(void)

undefined8 FUN_147089ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147089efc FUN_147089efc body=55 status=ok
// SIG undefined FUN_147089efc(void)

void FUN_147089efc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0400 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0400 = FUN_140002ddd(FUN_1462a01bf,uVar1,L"GbxMetaDataPropertyRule");
  }
  return;
}



// FUNCTION 147089f6e FUN_147089f6e body=81 status=ok
// SIG undefined FUN_147089f6e(void)

undefined1 FUN_147089f6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      FUN_14708a09e(param_2 + -0x10,param_3 + -0x10);
      FUN_14708a0fe(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147089fe8 FUN_147089fe8 body=59 status=ok
// SIG undefined FUN_147089fe8(void)

undefined8 FUN_147089fe8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708a02e FUN_14708a02e body=34 status=ok
// SIG undefined FUN_14708a02e(void)

void FUN_14708a02e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145812b28(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14708a09e FUN_14708a09e body=95 status=ok
// SIG undefined FUN_14708a09e(void)

undefined8 * FUN_14708a09e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145812bbc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14708a15e(param_1,iVar1);
      FUN_14708a1d1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14708a0fe FUN_14708a0fe body=95 status=ok
// SIG undefined FUN_14708a0fe(void)

undefined8 * FUN_14708a0fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145812b71(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14708a206(param_1,iVar1);
      FUN_14708a279(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14708a15e FUN_14708a15e body=115 status=ok
// SIG undefined FUN_14708a15e(void)

void FUN_14708a15e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14708a1d1 FUN_14708a1d1 body=52 status=ok
// SIG undefined FUN_14708a1d1(void)

void FUN_14708a1d1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14708a206 FUN_14708a206 body=115 status=ok
// SIG undefined FUN_14708a206(void)

void FUN_14708a206(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14708a279 FUN_14708a279 body=52 status=ok
// SIG undefined FUN_14708a279(void)

void FUN_14708a279(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14708a2ae FUN_14708a2ae body=37 status=ok
// SIG undefined FUN_14708a2ae(void)

void FUN_14708a2ae(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_14708a47a(param_2);
  return;
}



// FUNCTION 14708a300 FUN_14708a300 body=134 status=ok
// SIG undefined FUN_14708a300(void)

undefined8 FUN_14708a300(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined8 *)(param_2 + lVar1 + 0x18) = *(undefined8 *)(param_3 + lVar1 + 0x18);
      FUN_14708a538(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_14708a706(param_2 + lVar1 + 0x70,param_3 + lVar1 + 0x70);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708a3ae FUN_14708a3ae body=59 status=ok
// SIG undefined FUN_14708a3ae(void)

undefined8 FUN_14708a3ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708a3fa FUN_14708a3fa body=40 status=ok
// SIG undefined FUN_14708a3fa(void)

void FUN_14708a3fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14588632c(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14708a47a FUN_14708a47a body=133 status=ok
// SIG undefined FUN_14708a47a(void)

undefined8 * FUN_14708a47a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a1704d0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 14708a500 FUN_14708a500 body=55 status=ok
// SIG undefined FUN_14708a500(void)

void FUN_14708a500(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0430 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0430 = FUN_140002ddd(FUN_1462a02b4,uVar1,L"GbxMetaDataDef");
  }
  return;
}



// FUNCTION 14708a538 FUN_14708a538 body=122 status=ok
// SIG undefined FUN_14708a538(void)

longlong FUN_14708a538(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14708a5b2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14708a5b2 FUN_14708a5b2 body=339 status=ok
// SIG undefined FUN_14708a5b2(void)

longlong * FUN_14708a5b2(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_14129aca4(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_140bb2e20(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14708a706 FUN_14708a706 body=122 status=ok
// SIG undefined FUN_14708a706(void)

longlong FUN_14708a706(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14708a780(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14708a780 FUN_14708a780 body=255 status=ok
// SIG undefined FUN_14708a780(void)

longlong * FUN_14708a780(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145886414(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_14708a880(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x30 + lVar6) = *(undefined8 *)(lVar2 + 0x30 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x38;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14708a880 FUN_14708a880 body=160 status=ok
// SIG undefined FUN_14708a880(void)

undefined1 * FUN_14708a880(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_14708a15e(param_1 + 8,iVar1,0);
    FUN_14708a1d1(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_14708a206(param_1 + 0x18,iVar1,0);
    FUN_14708a279(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14708a964 FUN_14708a964 body=75 status=ok
// SIG undefined FUN_14708a964(void)

undefined1 FUN_14708a964(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14708aac6(param_2 + -0x10,param_3 + -0x10);
      FUN_14708aac6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708a9d8 FUN_14708a9d8 body=59 status=ok
// SIG undefined FUN_14708a9d8(void)

undefined8 FUN_14708a9d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708aa1e FUN_14708aa1e body=34 status=ok
// SIG undefined FUN_14708aa1e(void)

void FUN_14708aa1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1459dc386(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14708aa8e FUN_14708aa8e body=55 status=ok
// SIG undefined FUN_14708aa8e(void)

void FUN_14708aa8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0448 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0448 = FUN_140002ddd(FUN_1462a034b,uVar1,L"GbxMetaDataFilterStructRule");
  }
  return;
}



// FUNCTION 14708aac6 FUN_14708aac6 body=93 status=ok
// SIG undefined FUN_14708aac6(void)

undefined8 * FUN_14708aac6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a87f81(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1408cdb42(param_1,iVar1);
      FUN_1408cdabe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14708ab66 FUN_14708ab66 body=75 status=ok
// SIG undefined FUN_14708ab66(void)

undefined1 FUN_14708ab66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1406fa324(param_2 + -0x10,param_3 + -0x10);
      FUN_1406fa324(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708abda FUN_14708abda body=59 status=ok
// SIG undefined FUN_14708abda(void)

undefined8 FUN_14708abda(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708ac20 FUN_14708ac20 body=34 status=ok
// SIG undefined FUN_14708ac20(void)

void FUN_14708ac20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1459816c0(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14708ac90 FUN_14708ac90 body=55 status=ok
// SIG undefined FUN_14708ac90(void)

void FUN_14708ac90(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0460 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0460 = FUN_140002ddd(FUN_1462a03e1,uVar1,L"GbxMetaDataFilterPropertyRule");
  }
  return;
}



// FUNCTION 14708acf4 FUN_14708acf4 body=31 status=ok
// SIG undefined FUN_14708acf4(void)

undefined1
FUN_14708acf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14708ad14 FUN_14708ad14 body=294 status=ok
// SIG undefined FUN_14708ad14(void)

undefined4
FUN_14708ad14(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    local_78 = &DAT_14a171d50;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 4) != 0) {
    (**(code **)(local_78 + 0x2c))(&local_78,0);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14708ae3c FUN_14708ae3c body=41 status=ok
// SIG undefined FUN_14708ae3c(void)

void FUN_14708ae3c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14708ae7a FUN_14708ae7a body=59 status=ok
// SIG undefined FUN_14708ae7a(void)

undefined8 FUN_14708ae7a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708af16 FUN_14708af16 body=82 status=ok
// SIG undefined FUN_14708af16(void)

void FUN_14708af16(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14708b010 FUN_14708b010 body=54 status=ok
// SIG undefined FUN_14708b010(void)

undefined1 FUN_14708b010(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14709170c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14708b046 FUN_14708b046 body=31 status=ok
// SIG undefined FUN_14708b046(void)

undefined1
FUN_14708b046(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14708b066 FUN_14708b066 body=401 status=ok
// SIG undefined FUN_14708b066(void)

undefined4
FUN_14708b066(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 != 0) {
    local_e0 = param_7;
    local_e8 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_108);
  }
  local_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined **)0x0;
  uStack_c0 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_d8);
  if ((local_cc & 2) == 0) {
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = &PTR_FUN_14a1701c0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_7c = 0x80;
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    local_68 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
  }
  local_e0 = param_7;
  local_e8 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,&local_c8,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_d8);
  if ((local_cc & 4) != 0) {
    (*(code *)local_c8[0xb])(&local_c8,0);
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14708b1f8 FUN_14708b1f8 body=41 status=ok
// SIG undefined FUN_14708b1f8(void)

void FUN_14708b1f8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14708b236 FUN_14708b236 body=59 status=ok
// SIG undefined FUN_14708b236(void)

undefined8 FUN_14708b236(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708b27c FUN_14708b27c body=32 status=ok
// SIG undefined FUN_14708b27c(void)

void FUN_14708b27c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14122c31a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14708b2e8 FUN_14708b2e8 body=38 status=ok
// SIG undefined FUN_14708b2e8(void)

undefined8 FUN_14708b2e8(undefined8 param_1,int param_2)

{
  FUN_14122c31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14708b352 FUN_14708b352 body=54 status=ok
// SIG undefined FUN_14708b352(void)

undefined1 FUN_14708b352(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_142b16128(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14708b388 FUN_14708b388 body=31 status=ok
// SIG undefined FUN_14708b388(void)

undefined1
FUN_14708b388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142b16154(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14708b3a8 FUN_14708b3a8 body=259 status=ok
// SIG undefined FUN_14708b3a8(void)

undefined4
FUN_14708b3a8(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
    local_70 = param_7;
    local_78 = param_6;
    FUN_1457e2052(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 8))(0,local_68);
  if ((local_5c & 2) == 0) {
    local_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  }
  local_70 = param_7;
  local_78 = param_6;
  uVar1 = FUN_1457e2052(param_3,param_2,&local_58,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_68);
  if ((local_5c & 4) != 0) {
    FUN_141022d94(&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14708b4ac FUN_14708b4ac body=39 status=ok
// SIG undefined FUN_14708b4ac(void)

void FUN_14708b4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_147091d32(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14708b4e8 FUN_14708b4e8 body=59 status=ok
// SIG undefined FUN_14708b4e8(void)

undefined8 FUN_14708b4e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708b52e FUN_14708b52e body=32 status=ok
// SIG undefined FUN_14708b52e(void)

void FUN_14708b52e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_141022d94(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14708b5bc FUN_14708b5bc body=56 status=ok
// SIG undefined FUN_14708b5bc(void)

void FUN_14708b5bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014708b5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14708b60a FUN_14708b60a body=54 status=ok
// SIG undefined FUN_14708b60a(void)

undefined1 FUN_14708b60a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1446dcc2e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14708b668 FUN_14708b668 body=59 status=ok
// SIG undefined FUN_14708b668(void)

undefined8 FUN_14708b668(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708b6ae FUN_14708b6ae body=64 status=ok
// SIG undefined FUN_14708b6ae(void)

void FUN_14708b6ae(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14708b782 FUN_14708b782 body=98 status=ok
// SIG undefined FUN_14708b782(void)

undefined1 FUN_14708b782(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      uVar6 = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      lVar7 = lVar7 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708b80c FUN_14708b80c body=59 status=ok
// SIG undefined FUN_14708b80c(void)

undefined8 FUN_14708b80c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708b852 FUN_14708b852 body=38 status=ok
// SIG undefined FUN_14708b852(void)

void FUN_14708b852(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14708b8ee FUN_14708b8ee body=47 status=ok
// SIG undefined FUN_14708b8ee(void)

void FUN_14708b8ee(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14708b934 FUN_14708b934 body=73 status=ok
// SIG undefined FUN_14708b934(void)

undefined8 FUN_14708b934(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14708b9a6 FUN_14708b9a6 body=59 status=ok
// SIG undefined FUN_14708b9a6(void)

undefined8 FUN_14708b9a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708ba44 FUN_14708ba44 body=51 status=ok
// SIG undefined FUN_14708ba44(void)

void FUN_14708ba44(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14708ba78 FUN_14708ba78 body=41 status=ok
// SIG undefined FUN_14708ba78(void)

void FUN_14708ba78(undefined8 param_1,longlong param_2)

{
  FUN_144a63cba(param_2);
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_144a63cba(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 14708baa2 FUN_14708baa2 body=49 status=ok
// SIG undefined FUN_14708baa2(void)

void FUN_14708baa2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14708bb12 FUN_14708bb12 body=59 status=ok
// SIG undefined FUN_14708bb12(void)

undefined8 FUN_14708bb12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708bb58 FUN_14708bb58 body=56 status=ok
// SIG undefined FUN_14708bb58(void)

void FUN_14708bb58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14708bbe0 FUN_14708bbe0 body=252 status=ok
// SIG undefined FUN_14708bbe0(void)

void FUN_14708bbe0(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x90) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_140115c12(param_1 + 0xa0,0);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x70) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x80,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x50) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_140115c12(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14708bd5e FUN_14708bd5e body=54 status=ok
// SIG undefined FUN_14708bd5e(void)

undefined1 FUN_14708bd5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141293510(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14708bdbc FUN_14708bdbc body=59 status=ok
// SIG undefined FUN_14708bdbc(void)

undefined8 FUN_14708bdbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708be02 FUN_14708be02 body=32 status=ok
// SIG undefined FUN_14708be02(void)

void FUN_14708be02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_142b145b4(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14708bef4 FUN_14708bef4 body=59 status=ok
// SIG undefined FUN_14708bef4(void)

undefined8 FUN_14708bef4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708bf3a FUN_14708bf3a body=32 status=ok
// SIG undefined FUN_14708bf3a(void)

void FUN_14708bf3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145851bd8(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14708bfa8 FUN_14708bfa8 body=121 status=ok
// SIG undefined FUN_14708bfa8(void)

void FUN_14708bfa8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14708c06c FUN_14708c06c body=98 status=ok
// SIG undefined FUN_14708c06c(void)

undefined1 FUN_14708c06c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      uVar6 = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      lVar7 = lVar7 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708c0f6 FUN_14708c0f6 body=59 status=ok
// SIG undefined FUN_14708c0f6(void)

undefined8 FUN_14708c0f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c13c FUN_14708c13c body=38 status=ok
// SIG undefined FUN_14708c13c(void)

void FUN_14708c13c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14708c22e FUN_14708c22e body=59 status=ok
// SIG undefined FUN_14708c22e(void)

undefined8 FUN_14708c22e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c300 FUN_14708c300 body=47 status=ok
// SIG undefined FUN_14708c300(void)

void FUN_14708c300(undefined8 param_1,longlong *param_2)

{
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14708c346 FUN_14708c346 body=54 status=ok
// SIG undefined FUN_14708c346(void)

undefined1 FUN_14708c346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14708c440(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14708c3a4 FUN_14708c3a4 body=59 status=ok
// SIG undefined FUN_14708c3a4(void)

undefined8 FUN_14708c3a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c440 FUN_14708c440 body=124 status=ok
// SIG undefined FUN_14708c440(void)

longlong FUN_14708c440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_1 + 0x18) != lVar1) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14708c4be FUN_14708c4be body=51 status=ok
// SIG undefined FUN_14708c4be(void)

void FUN_14708c4be(longlong *param_1)

{
  if ((char)param_1[10] == '\x01') {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



// FUNCTION 14708c510 FUN_14708c510 body=54 status=ok
// SIG undefined FUN_14708c510(void)

undefined1 FUN_14708c510(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bee9ec(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14708c56e FUN_14708c56e body=70 status=ok
// SIG undefined FUN_14708c56e(void)

void FUN_14708c56e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1410b2d83(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c618 FUN_14708c618 body=48 status=ok
// SIG undefined FUN_14708c618(void)

void FUN_14708c618(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1447a1747(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14708c666 FUN_14708c666 body=88 status=ok
// SIG undefined FUN_14708c666(void)

undefined1 FUN_14708c666(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      FUN_140bee9ec(param_2 + -0x10,param_3 + -0x10);
      FUN_14708c7a0(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14708c6e6 FUN_14708c6e6 body=59 status=ok
// SIG undefined FUN_14708c6e6(void)

undefined8 FUN_14708c6e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c72c FUN_14708c72c body=34 status=ok
// SIG undefined FUN_14708c72c(void)

void FUN_14708c72c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14583374c(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14708c7a0 FUN_14708c7a0 body=95 status=ok
// SIG undefined FUN_14708c7a0(void)

undefined8 * FUN_14708c7a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458337ad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14708c800(param_1,iVar1);
      FUN_14708c862(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14708c800 FUN_14708c800 body=98 status=ok
// SIG undefined FUN_14708c800(void)

void FUN_14708c800(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14708c862 FUN_14708c862 body=52 status=ok
// SIG undefined FUN_14708c862(void)

void FUN_14708c862(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14584a72c(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 14708c898 FUN_14708c898 body=57 status=ok
// SIG undefined FUN_14708c898(void)

void FUN_14708c898(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0898 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0898 = FUN_140002ddd(FUN_1462a15bf,uVar1,L"NexusSerializeTest_ArrayDef");
  }
  return;
}



// FUNCTION 14708c8d2 FUN_14708c8d2 body=104 status=ok
// SIG undefined FUN_14708c8d2(void)

undefined8 FUN_14708c8d2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1470a258e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708c93c FUN_14708c93c body=28 status=ok
// SIG undefined FUN_14708c93c(void)

undefined8 FUN_14708c93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14708c9c0 FUN_14708c9c0 body=38 status=ok
// SIG undefined FUN_14708c9c0(void)

void FUN_14708c9c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_141054840(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 14708ca32 FUN_14708ca32 body=55 status=ok
// SIG undefined FUN_14708ca32(void)

void FUN_14708ca32(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a08e0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a08e0 = FUN_140002ddd(FUN_1462a1689,uVar1,L"NexusSerializeTest_BasicTypes");
  }
  return;
}



// FUNCTION 14708ca88 FUN_14708ca88 body=63 status=ok
// SIG undefined FUN_14708ca88(void)

undefined1 FUN_14708ca88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14708cbaa(param_2,param_3);
    param_3 = param_3 + 0x2b8;
    param_2 = param_2 + 0x2b8;
  }
  return 1;
}



// FUNCTION 14708caf0 FUN_14708caf0 body=59 status=ok
// SIG undefined FUN_14708caf0(void)

undefined8 FUN_14708caf0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708cb3c FUN_14708cb3c body=40 status=ok
// SIG undefined FUN_14708cb3c(void)

void FUN_14708cb3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b8) == '\x01') {
    FUN_145907ec2(param_2);
    *(undefined1 *)(param_2 + 0x2b8) = 0;
  }
  return;
}



// FUNCTION 14708cbaa FUN_14708cbaa body=119 status=ok
// SIG undefined FUN_14708cbaa(void)

longlong FUN_14708cbaa(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_145da9454(param_1 + 0x18,param_2 + 0x18);
  FUN_1401f3db8(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14708cc22(param_1 + 0x208,param_2 + 0x208);
  FUN_14708cdaa(param_1 + 0x218,param_2 + 0x218);
  FUN_14708cc82(param_1 + 0x268,param_2 + 0x268);
  return param_1;
}



// FUNCTION 14708cc22 FUN_14708cc22 body=95 status=ok
// SIG undefined FUN_14708cc22(void)

undefined8 * FUN_14708cc22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145907fac(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14708ccfc(param_1,iVar1);
      FUN_14708cd6e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14708cc82 FUN_14708cc82 body=122 status=ok
// SIG undefined FUN_14708cc82(void)

longlong FUN_14708cc82(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14708cf74(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14708ccfc FUN_14708ccfc body=114 status=ok
// SIG undefined FUN_14708ccfc(void)

void FUN_14708ccfc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1d8,8);
    iVar2 = (int)(uVar1 / 0x1d8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1d8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14708cd6e FUN_14708cd6e body=60 status=ok
// SIG undefined FUN_14708cd6e(void)

void FUN_14708cd6e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1410b1c98(param_1,param_2);
    param_1 = param_1 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return;
}



// FUNCTION 14708cdaa FUN_14708cdaa body=122 status=ok
// SIG undefined FUN_14708cdaa(void)

longlong FUN_14708cdaa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14708ce24(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14708ce24 FUN_14708ce24 body=230 status=ok
// SIG undefined FUN_14708ce24(void)

undefined8 * FUN_14708ce24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145908212(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1457f50c2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14708cf0a(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x7a) = *(undefined8 *)(puVar4 + 0x7a);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x7c;
        puVar6 = puVar6 + 0x7c;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14708cf0a FUN_14708cf0a body=105 status=ok
// SIG undefined FUN_14708cf0a(void)

undefined8 * FUN_14708cf0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1410b1c98(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14708cf74 FUN_14708cf74 body=230 status=ok
// SIG undefined FUN_14708cf74(void)

undefined8 * FUN_14708cf74(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145908046(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1457f4d56(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1410b1c98(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x76) = *(undefined8 *)(puVar4 + 0x76);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x78;
        puVar6 = puVar6 + 0x78;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14708d05c FUN_14708d05c body=57 status=ok
// SIG undefined FUN_14708d05c(void)

void FUN_14708d05c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a08f8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a08f8 = FUN_140002ddd(FUN_1462a16ba,uVar1,L"NexusSerializeTest_BasicDef");
  }
  return;
}



// FUNCTION 14708d096 FUN_14708d096 body=104 status=ok
// SIG undefined FUN_14708d096(void)

undefined8 FUN_14708d096(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1470a4fce(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708d100 FUN_14708d100 body=28 status=ok
// SIG undefined FUN_14708d100(void)

undefined8 FUN_14708d100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14708d127 FUN_14708d127 body=65 status=ok
// SIG undefined FUN_14708d127(void)

void FUN_14708d127(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14708d168 FUN_14708d168 body=64 status=ok
// SIG undefined FUN_14708d168(void)

void FUN_14708d168(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x240);
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
  FUN_1411d1b7a(param_1);
  return;
}



// FUNCTION 14708d1a8 FUN_14708d1a8 body=73 status=ok
// SIG undefined FUN_14708d1a8(void)

void FUN_14708d1a8(longlong param_1,int param_2)

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



// FUNCTION 14708d202 FUN_14708d202 body=66 status=ok
// SIG undefined FUN_14708d202(void)

undefined8 FUN_14708d202(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x30;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar3) != 0) &&
         ((*(byte *)(*(longlong *)(lVar2 + lVar3) + 0xa0) & 1) == 0)) {
        return 0;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 14708d244 FUN_14708d244 body=89 status=ok
// SIG undefined FUN_14708d244(void)

void FUN_14708d244(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x58) << 3;
    do {
      if ((*plVar1 != 0) && ((*(byte *)(*plVar1 + 0xa0) & 1) == 0)) {
        FUN_14009fd82(DAT_14c82b500,plVar1,0xff);
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14708d29e FUN_14708d29e body=70 status=ok
// SIG undefined FUN_14708d29e(void)

bool FUN_14708d29e(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14c9a0a90;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(int *)(lVar1 + uVar3 * 4) == 2;
}



// FUNCTION 14708d2e4 FUN_14708d2e4 body=173 status=ok
// SIG undefined FUN_14708d2e4(void)

void FUN_14708d2e4(undefined8 *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_1 + 1);
  lVar1 = (longlong)local_28;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar1 * 2);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    FUN_144a61b4f();
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708d392 FUN_14708d392 body=94 status=ok
// SIG undefined FUN_14708d392(void)

void FUN_14708d392(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147099d5c(param_1,iVar2);
  }
  FUN_147099cf2((longlong)iVar2 * 0x250 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14708d3f0 FUN_14708d3f0 body=3851 status=ok
// SIG undefined FUN_14708d3f0(void)

void FUN_14708d3f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  size_t sVar16;
  ushort uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  wchar_t *pwVar27;
  ushort uVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  longlong *plVar35;
  uint uVar36;
  undefined1 auStack_118 [44];
  uint local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  longlong lStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uStack_90 = CONCAT44(uStack_90._4_4_,DAT_14c9a0bf0);
  local_98 = DAT_14c9a0be8;
  FUN_1448075d0(&local_78);
  if (*param_2 == 0) {
    puVar13 = &DAT_14c9a1308;
  }
  else {
    puVar13 = (undefined8 *)FUN_142b20a62(*param_2,&local_78);
  }
  pbVar3 = (byte *)*puVar13;
  plVar35 = (longlong *)puVar13[1];
  if (plVar35 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
    UNLOCK();
  }
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 2)) {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    bVar8 = *pbVar3 & 2;
    if (bVar8 == 0) {
      puVar13 = &DAT_14c9a1270;
    }
    else {
      puVar13 = *(undefined8 **)(pbVar3 + 8);
    }
    iVar31 = *(int *)(puVar13 + 2);
    local_c8 = plVar35;
    if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar31);
    }
    if (iVar31 != 0) {
      FUN_142b1d6e4(&local_98);
      bVar8 = *pbVar3 & 2;
    }
    if (bVar8 == 0) {
      plVar35 = &DAT_14c9a1270;
    }
    else {
      plVar35 = *(longlong **)(pbVar3 + 8);
    }
    local_d8 = param_1;
    local_c0 = param_3;
    local_b8 = param_4;
    if ((longlong)(int)plVar35[2] != 0) {
      plVar25 = (longlong *)*plVar35;
      plVar35 = plVar25 + (longlong)(int)plVar35[2] * 2;
      do {
        lVar34 = *plVar25;
        local_a0 = (longlong *)plVar25[1];
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        local_80 = DAT_14c9a0c08;
        local_88 = DAT_14c9a0c00;
        local_a8 = lVar34;
        FUN_1448075d0(&local_78);
        puVar13 = &DAT_14c9a1308;
        if (lVar34 != 0) {
          puVar13 = (undefined8 *)FUN_142b20a62(lVar34);
        }
        pbVar3 = (byte *)*puVar13;
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar34 = *(longlong *)(pbVar3 + 8);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar19 = uStack_90;
          if (lVar34 != 0) {
            lVar34 = (longlong)(int)uStack_90;
            uVar10 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
            if (uStack_90._4_4_ < uVar10) {
              FUN_142b1d7c0(&local_98,uVar19 & 0xffffffff);
            }
            plVar15 = local_98;
            plVar20 = local_98 + lVar34 * 4;
            FUN_142b1d7b4(plVar20);
            FUN_1446dcc2e(plVar20,&local_a8);
            FUN_1400b22c2(&local_78);
            if (plVar15 + lVar34 * 4 + 2 != &local_78) {
              if (plVar20[2] != 0) {
                FUN_1400020a8();
              }
              plVar20[2] = (longlong)local_78;
              local_78 = (wchar_t *)0x0;
              *(undefined4 *)(plVar20 + 3) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar20 + 0x1c) = uStack_70._4_4_;
              uStack_70 = 0;
            }
            if (local_78 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        plVar20 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_a0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        plVar25 = plVar25 + 2;
      } while (plVar25 != plVar35);
    }
    plVar35 = (longlong *)(longlong)(int)uStack_90;
    local_e8 = local_98;
    if (0 < (longlong)plVar35) {
      plVar20 = (longlong *)0x0;
      plVar25 = local_98;
      do {
        if ((longlong *)((longlong)plVar20 + 1U) < plVar35) {
          iVar31 = (int)plVar25[7] + -1;
          if ((int)plVar25[7] == 0) {
            iVar31 = 0;
          }
          iVar29 = (int)plVar25[3] + -1;
          if ((int)plVar25[3] == 0) {
            iVar29 = 0;
          }
          if (iVar29 < iVar31) {
            pwVar27 = (wchar_t *)*plVar25;
            lVar34 = plVar25[1];
            local_68 = (wchar_t *)plVar25[2];
            lStack_60 = plVar25[3];
            plVar25[2] = plVar25[6];
            plVar25[3] = plVar25[7];
            *plVar25 = plVar25[4];
            plVar25[1] = plVar25[5];
            local_78._0_4_ = SUB84(pwVar27,0);
            local_78._4_4_ = (undefined4)((ulonglong)pwVar27 >> 0x20);
            uStack_70._0_4_ = (undefined4)lVar34;
            uStack_70._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
            plVar25[6] = (longlong)local_68;
            plVar25[7] = lStack_60;
            *(undefined4 *)(plVar25 + 4) = (undefined4)local_78;
            *(undefined4 *)((longlong)plVar25 + 0x24) = local_78._4_4_;
            *(undefined4 *)(plVar25 + 5) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)plVar25 + 0x2c) = uStack_70._4_4_;
            local_78 = pwVar27;
            uStack_70 = lVar34;
          }
        }
        plVar20 = (longlong *)((longlong)plVar20 + 2);
        plVar25 = plVar25 + 8;
      } while (plVar20 < plVar35);
      if (2 < (int)uStack_90) {
        uVar19 = 2;
        do {
          local_d0 = uVar19;
          iVar31 = (int)local_d0;
          local_ec = iVar31 * 2;
          local_b0 = (longlong)(int)local_ec;
          lVar34 = 0;
          do {
            uVar10 = (int)uStack_90 - (int)lVar34;
            if ((int)local_ec <= (int)uVar10) {
              uVar10 = local_ec;
            }
            if (iVar31 < (int)uVar10 && 0 < iVar31) {
              iVar29 = 0;
              uVar19 = local_d0;
              while( true ) {
                iVar32 = (int)uVar19;
                iVar33 = 0;
                uVar36 = iVar32 - iVar29;
                if (uVar36 != 0 && iVar29 <= iVar32) {
                  iVar33 = 0;
                  iVar24 = (int)local_98[lVar34 * 4 + (longlong)iVar32 * 4 + 3] + -1;
                  if ((int)local_98[lVar34 * 4 + (longlong)iVar32 * 4 + 3] == 0) {
                    iVar24 = 0;
                  }
                  do {
                    iVar11 = (uVar36 >> 1) + iVar33;
                    iVar18 = 0;
                    if ((int)local_98[lVar34 * 4 + (longlong)iVar29 * 4 + (longlong)iVar11 * 4 + 3]
                        != 0) {
                      iVar18 = (int)local_98[lVar34 * 4 +
                                             (longlong)iVar29 * 4 + (longlong)iVar11 * 4 + 3] + -1;
                    }
                    if (iVar24 <= iVar18) {
                      iVar33 = iVar11 + (uVar36 & 1);
                    }
                    bVar4 = 1 < uVar36;
                    uVar36 = uVar36 >> 1;
                  } while (bVar4);
                }
                iVar33 = iVar33 + iVar29;
                if (iVar32 - iVar33 == 0 || iVar32 < iVar33) break;
                uVar36 = uVar10 - iVar32;
                if (uVar36 == 0 || (int)uVar10 < iVar32) {
                  iVar29 = 0;
                }
                else {
                  plVar25 = local_98 + lVar34 * 4 + (longlong)iVar33 * 4;
                  iVar29 = 0;
                  iVar24 = (int)plVar25[3] + -1;
                  if ((int)plVar25[3] == 0) {
                    iVar24 = 0;
                  }
                  uVar19 = (ulonglong)uVar36;
                  do {
                    uVar19 = uVar19 >> 1;
                    uVar23 = iVar29 + (uint)uVar19;
                    iVar11 = 0;
                    if ((int)local_98[lVar34 * 4 + (longlong)iVar32 * 4 + (ulonglong)uVar23 * 4 + 3]
                        != 0) {
                      iVar11 = (int)local_98[lVar34 * 4 +
                                             (longlong)iVar32 * 4 + (ulonglong)uVar23 * 4 + 3] + -1;
                    }
                    if (iVar24 < iVar11) {
                      iVar29 = uVar23 + (uVar36 & 1);
                    }
                    bVar4 = 1 < uVar36;
                    uVar36 = (uint)uVar19;
                  } while (bVar4);
                  uVar19 = (ulonglong)(uint)(iVar32 + iVar29);
                  if (0 < iVar29) {
                    plVar26 = plVar25 + (longlong)((iVar32 + iVar29) - iVar33) * 4;
                    plVar20 = plVar25 + (longlong)(iVar32 - iVar33) * 4;
                    plVar15 = plVar25 + (longlong)(iVar32 - iVar33) * 4;
                    do {
                      while( true ) {
                        plVar2 = plVar20 + 4;
                        pwVar27 = (wchar_t *)*plVar25;
                        lVar21 = plVar25[1];
                        local_68 = (wchar_t *)plVar25[2];
                        lStack_60 = plVar25[3];
                        lVar5 = *plVar20;
                        lVar6 = plVar20[1];
                        lVar7 = plVar20[3];
                        plVar25[2] = plVar20[2];
                        plVar25[3] = lVar7;
                        *plVar25 = lVar5;
                        plVar25[1] = lVar6;
                        plVar25 = plVar25 + 4;
                        local_78._0_4_ = SUB84(pwVar27,0);
                        local_78._4_4_ = (undefined4)((ulonglong)pwVar27 >> 0x20);
                        uStack_70._0_4_ = (undefined4)lVar21;
                        uStack_70._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
                        plVar20[2] = (longlong)local_68;
                        plVar20[3] = lStack_60;
                        *(undefined4 *)plVar20 = (undefined4)local_78;
                        *(undefined4 *)((longlong)plVar20 + 4) = local_78._4_4_;
                        *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_70;
                        *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_70._4_4_;
                        if (plVar2 == plVar26) break;
                        plVar20 = plVar2;
                        if (plVar25 == plVar15) {
                          plVar15 = plVar2;
                        }
                      }
                      plVar20 = plVar15;
                      local_78 = pwVar27;
                      uStack_70 = lVar21;
                    } while (plVar25 != plVar15);
                  }
                }
                if (((int)uVar10 <= (int)uVar19) ||
                   (iVar29 = iVar33 + iVar29 + 1, (int)uVar19 <= iVar29)) break;
              }
            }
            lVar34 = lVar34 + local_b0;
          } while (lVar34 < (longlong)plVar35);
          uVar19 = (ulonglong)local_ec;
          local_e0 = plVar35;
        } while ((int)local_ec < (int)uStack_90);
      }
    }
    if ((int)uStack_90 == 0) {
      uVar19 = 0;
    }
    else {
      plVar25 = local_98 + (longlong)plVar35 * 4;
      plVar35 = (longlong *)(local_d8 + 0x60);
      lVar34 = local_d8;
      plVar20 = local_98;
      local_e0 = plVar25;
      do {
        if (*(char *)(lVar34 + 0x42) == '\x01') {
          puVar14 = &DAT_149dfb77a;
          if ((int)plVar20[3] != 0) {
            puVar14 = (undefined2 *)plVar20[2];
          }
          lVar21 = 0;
          while( true ) {
            uVar17 = *(ushort *)((longlong)puVar14 + lVar21);
            uVar19 = (ulonglong)uVar17;
            uVar28 = *(ushort *)((longlong)L"Developers" + lVar21);
            if (uVar17 != uVar28) break;
            if (uVar17 == 0) goto LAB_14708e1b6;
LAB_14708d9d6:
            lVar21 = lVar21 + 2;
          }
          if ((uVar28 | uVar17) < 0x80) {
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            uVar30 = (ulonglong)uVar28;
            uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
            if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar30]) goto LAB_14708d9d6;
          }
          if (uVar17 != uVar28) goto LAB_14708da05;
        }
        else {
LAB_14708da05:
          plVar15 = (longlong *)FUN_14001cc68(0x248);
          plVar15[1] = (longlong)&DAT_100000001;
          *plVar15 = (longlong)&PTR_FUN_14a176210;
          plVar25 = plVar15 + 2;
          memset(plVar25,0,0x238);
          FUN_14612e9e2(plVar25);
          iVar31 = *(int *)(lVar34 + 0x68);
          *(uint *)(lVar34 + 0x68) = iVar31 + 1U;
          if (*(uint *)(lVar34 + 0x6c) < iVar31 + 1U) {
            FUN_14612e95c(plVar35,iVar31);
          }
          lVar34 = *plVar35;
          lVar21 = (longlong)iVar31 * 0x10;
          *(longlong **)(lVar34 + lVar21) = plVar25;
          *(longlong **)(lVar34 + 8 + lVar21) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            plVar25 = plVar15 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar25 = (longlong *)(lVar34 + lVar21);
          FUN_144a787a6(*plVar25,local_c0);
          FUN_144a787a6(*plVar25 + 0x10,local_b8);
          FUN_144a787a6(*plVar25 + 0x20,plVar20 + 2);
          lVar34 = local_d8;
          lVar21 = *plVar25;
          pwVar27 = L"";
          if (*(int *)(lVar21 + 0x28) != 0) {
            pwVar27 = *(wchar_t **)(lVar21 + 0x20);
          }
          if (*(int *)(lVar21 + 0x18) == 0) {
            local_78 = L"";
LAB_14708db13:
            sVar16 = wcslen(local_78);
            uVar12 = (int)sVar16;
          }
          else {
            local_78 = *(wchar_t **)(lVar21 + 0x10);
            uVar12 = 0;
            if (local_78 != (wchar_t *)0x0) goto LAB_14708db13;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
          uVar12 = 0;
          local_68 = pwVar27;
          if (pwVar27 != (wchar_t *)0x0) {
            sVar16 = wcslen(pwVar27);
            uVar12 = (int)sVar16;
          }
          lStack_60 = CONCAT44(lStack_60._4_4_,uVar12);
          FUN_140bee87a(&local_a8,&local_78,2);
          lVar21 = *plVar25;
          if ((longlong *)(lVar21 + 0x30) == &local_a8) {
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar21 + 0x30) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar21 + 0x30) = local_a8;
            *(undefined4 *)(lVar21 + 0x38) = (undefined4)local_a0;
            *(undefined4 *)(lVar21 + 0x3c) = local_a0._4_4_;
          }
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0c38);
          local_a8 = DAT_14c9a0c30;
          FUN_1448075d0(&local_78,&local_a8);
          plVar15 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            plVar15 = (longlong *)FUN_142b20a62(*plVar20,&local_78);
          }
          uVar9 = 1;
          if (*plVar15 != 0) {
            uVar9 = FUN_14000584e(*plVar15,1);
          }
          *(undefined1 *)(*plVar25 + 0x40) = uVar9;
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0c20);
          local_a8 = DAT_14c9a0c18;
          FUN_1448075d0(&local_78,&local_a8);
          plVar15 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            plVar15 = (longlong *)FUN_142b20a62(*plVar20,&local_78);
          }
          uVar9 = 1;
          if (*plVar15 != 0) {
            uVar9 = FUN_14000584e(*plVar15,1);
          }
          *(undefined1 *)(*plVar25 + 0x43) = uVar9;
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar22 = *(undefined8 *)(*(longlong *)(lVar34 + 0x30) + 0x50);
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0ab8);
          local_a8 = DAT_14c9a0ab0;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_140558f28(puVar13,lVar21 + 0x48,uVar22,0);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar22 = *(undefined8 *)(*(longlong *)(lVar34 + 0x30) + 0x50);
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0ad0);
          local_a8 = DAT_14c9a0ac8;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_140558f28(puVar13,lVar21 + 0x68,uVar22,0);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar22 = *(undefined8 *)(*(longlong *)(lVar34 + 0x30) + 0x58);
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0ae8);
          local_a8 = DAT_14c9a0ae0;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_140558f28(puVar13,lVar21 + 0x88,uVar22,0);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar22 = *(undefined8 *)(*(longlong *)(lVar34 + 0x30) + 0x50);
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0b00);
          local_a8 = DAT_14c9a0af8;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_140558f28(puVar13,lVar21 + 0xa8,uVar22,0);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          uVar22 = *(undefined8 *)(*(longlong *)(lVar34 + 0x30) + 0x60);
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0b18);
          local_a8 = DAT_14c9a0b10;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_140558f28(puVar13,lVar21 + 200,uVar22,0);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0b60);
          local_a8 = DAT_14c9a0b58;
          FUN_1448075d0(&local_78,&local_a8);
          plVar15 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            plVar15 = (longlong *)FUN_142b20a62(*plVar20,&local_78);
          }
          uVar9 = 1;
          if (*plVar15 != 0) {
            uVar9 = FUN_14000584e(*plVar15,1);
          }
          *(undefined1 *)(*plVar25 + 0xe8) = uVar9;
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0b78);
          local_a8 = DAT_14c9a0b70;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          pbVar3 = (byte *)*puVar13;
          if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(undefined8 *)(pbVar3 + 8);
          }
          FUN_1446ddc76(&local_a8,uVar22,1);
          *(longlong *)(*plVar25 + 0xec) = local_a8;
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0b90);
          local_a8 = DAT_14c9a0b88;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_14708f434(puVar13,lVar21 + 0xf8);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0ba8);
          local_a8 = DAT_14c9a0ba0;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_14708f434(puVar13,lVar21 + 0x148);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          lVar21 = *plVar25;
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0bc0);
          local_a8 = DAT_14c9a0bb8;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_14708f434(puVar13,lVar21 + 0x198);
          if (lStack_60 != 0) {
            FUN_1400020a8();
          }
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14c9a0bd8);
          local_a8 = DAT_14c9a0bd0;
          FUN_1448075d0(&local_78,&local_a8);
          puVar13 = &DAT_14c9a1308;
          if (*plVar20 != 0) {
            puVar13 = (undefined8 *)FUN_142b20a62(*plVar20,&local_78);
          }
          FUN_14708f434(puVar13);
          plVar25 = local_e0;
          if (lStack_60 != 0) {
            FUN_1400020a8();
            plVar25 = local_e0;
          }
        }
LAB_14708e1b6:
        plVar20 = plVar20 + 4;
      } while (plVar20 != plVar25);
      uVar19 = uStack_90 & 0xffffffff;
    }
    FUN_142b1d68c(local_98,uVar19);
    plVar35 = local_c8;
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
      plVar35 = local_c8;
    }
  }
  if (plVar35 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar35 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*plVar35)(plVar35);
      LOCK();
      piVar1 = (int *)((longlong)plVar35 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14708e2fe FUN_14708e2fe body=2127 status=ok
// SIG undefined FUN_14708e2fe(void)

void FUN_14708e2fe(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined2 *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined2 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [64];
  longlong local_170;
  undefined4 local_168;
  undefined1 local_160 [64];
  longlong local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0b78);
  local_e8 = DAT_14c9a0b70;
  FUN_1448075d0(&local_98);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_98);
  }
  pbVar5 = (byte *)*puVar9;
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(pbVar5 + 8);
  }
  FUN_1446ddc76(&local_1c8,uVar14,1);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  local_1e8 = &DAT_14a171d50;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x50);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0ab8);
  local_e8 = DAT_14c9a0ab0;
  FUN_1448075d0(&local_98);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_98);
  }
  FUN_140558f28(puVar9,&local_1e8,uVar14,0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  local_208 = &DAT_14a171d50;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x58);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0ae8);
  local_e8 = DAT_14c9a0ae0;
  FUN_1448075d0(&local_98);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_98);
  }
  FUN_140558f28(puVar9,&local_208,uVar14,0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  local_228 = &DAT_14a171d50;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0b18);
  local_e8 = DAT_14c9a0b10;
  FUN_1448075d0(&local_98);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_98);
  }
  FUN_140558f28(puVar9,&local_228,uVar14,0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_108 = DAT_14c9a0b90;
  local_110 = DAT_14c9a0b88;
  FUN_1448075d0(&local_e8);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_e8);
  }
  FUN_14708f434(puVar9,&local_98);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_1b8 = DAT_14c9a0bc0;
  local_1c0 = DAT_14c9a0bb8;
  FUN_1448075d0(&local_110);
  if (*param_2 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_110);
  }
  FUN_14708f434(puVar9,&local_e8);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x68);
  local_248 = lVar10;
  if (param_3 < *(int *)(param_1 + 0x68)) {
    local_240 = lVar10 + -1;
    local_238 = (longlong)param_3;
    lVar19 = lVar10 << 4;
    do {
      lVar1 = lVar10 + -1;
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar1 * 0x10);
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar1 * 0x10);
      if ((*(char *)(lVar16 + 0x43) != '\0') || (*(char *)(lVar16 + 0xe8) == '\x01')) {
        lVar16 = lVar19;
        lVar20 = local_248;
        local_230 = lVar1;
        if (lVar10 <= local_240) {
          do {
            iVar4 = *(int *)(*plVar2 + 0x28);
            iVar13 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar13 = 0;
            }
            lVar1 = *(longlong *)(param_1 + 0x60);
            iVar4 = *(int *)(*(longlong *)(lVar1 + lVar16) + 0x28);
            iVar17 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar17 = 0;
            }
            if (iVar17 < iVar13) {
              puVar15 = &DAT_149dfb77a;
              if (iVar4 != 0) {
                puVar15 = *(undefined2 **)(*(longlong *)(lVar1 + lVar16) + 0x20);
              }
              cVar7 = FUN_144a791f8(*plVar2 + 0x20,puVar15,iVar17,1);
              if (cVar7 != '\0') {
                lVar12 = *plVar2;
                iVar4 = *(int *)(*(longlong *)(lVar1 + lVar16) + 0x28);
                iVar13 = iVar4 + -1;
                if (iVar4 == 0) {
                  iVar13 = 0;
                }
                sVar3 = *(short *)(*(longlong *)(lVar12 + 0x20) + (longlong)iVar13 * 2);
                if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) {
                  if (*(char *)(lVar12 + 0x43) == '\x01') {
                    FUN_1405dc634(lVar12 + 0x48,*(longlong *)(lVar1 + lVar16) + 0x48);
                    FUN_1405dc634(*plVar2 + 0x88,*(longlong *)(lVar1 + lVar16) + 0x88);
                    FUN_1405dc634(*plVar2 + 200,*(longlong *)(lVar1 + lVar16) + 200);
                    lVar12 = *plVar2;
                  }
                  if (*(char *)(lVar12 + 0xe8) == '\x01') {
                    lVar10 = *(longlong *)(lVar1 + lVar16);
                    if (*(longlong *)(lVar12 + 0xec) == 0) {
                      *(undefined8 *)(lVar12 + 0xec) = *(undefined8 *)(lVar10 + 0xec);
                      lVar12 = *plVar2;
                      lVar10 = *(longlong *)(lVar1 + lVar16);
                    }
                    FUN_144731a98(lVar12 + 0xf8,lVar10 + 0xf8);
                    FUN_144731a98(*plVar2 + 0x198,*(longlong *)(lVar1 + lVar16) + 0x198);
                  }
                  break;
                }
              }
            }
            lVar20 = lVar20 + -1;
            lVar16 = lVar16 + 0x10;
          } while (lVar10 != lVar20);
        }
        lVar16 = *plVar2;
        if (*(char *)(lVar16 + 0x43) == '\x01') {
          FUN_1405dc634(lVar16 + 0x48,&local_1e8);
          FUN_1405dc634(*plVar2 + 0x88,&local_208);
          FUN_1405dc634(*plVar2 + 200,&local_228);
          lVar16 = *plVar2;
        }
        lVar1 = local_230;
        if (*(char *)(lVar16 + 0xe8) == '\x01') {
          if (*(longlong *)(lVar16 + 0xec) == 0) {
            *(undefined8 *)(lVar16 + 0xec) = local_1c8;
            lVar16 = *plVar2;
          }
          FUN_144731a98(lVar16 + 0xf8,&local_98);
          FUN_144731a98(*plVar2 + 0x198,&local_e8);
          lVar16 = *plVar2;
        }
      }
      lVar10 = lVar1;
      if (*(longlong *)(lVar16 + 0x50) == *(longlong *)(lVar16 + 0x70)) {
        uVar8 = *(uint *)(lVar16 + 0x80);
        if ((int)*(uint *)(lVar16 + 0x60) < (int)*(uint *)(lVar16 + 0x80)) {
          uVar8 = *(uint *)(lVar16 + 0x60);
        }
        if (0 < (int)uVar8) {
          uVar11 = 0;
          do {
            uVar6 = *(ulonglong *)(*(longlong *)(lVar16 + 0x58) + uVar11 * 8);
            uVar18 = ~*(ulonglong *)(*(longlong *)(lVar16 + 0x78) + uVar11 * 8) & uVar6;
            if (uVar18 != uVar6) {
              *(ulonglong *)(*(longlong *)(lVar16 + 0x58) + uVar11 * 8) = uVar18;
            }
            uVar11 = uVar11 + 1;
          } while (uVar8 != uVar11);
          lVar16 = *plVar2;
        }
      }
      if (*(longlong *)(lVar16 + 0x90) == *(longlong *)(lVar16 + 0xb0)) {
        uVar8 = *(uint *)(lVar16 + 0xc0);
        if ((int)*(uint *)(lVar16 + 0xa0) < (int)*(uint *)(lVar16 + 0xc0)) {
          uVar8 = *(uint *)(lVar16 + 0xa0);
        }
        if (0 < (int)uVar8) {
          uVar11 = 0;
          do {
            uVar6 = *(ulonglong *)(*(longlong *)(lVar16 + 0x98) + uVar11 * 8);
            uVar18 = ~*(ulonglong *)(*(longlong *)(lVar16 + 0xb8) + uVar11 * 8) & uVar6;
            if (uVar18 != uVar6) {
              *(ulonglong *)(*(longlong *)(lVar16 + 0x98) + uVar11 * 8) = uVar18;
            }
            uVar11 = uVar11 + 1;
          } while (uVar8 != uVar11);
          lVar16 = *plVar2;
        }
      }
      FUN_1408d9f48(lVar16 + 0xf8,local_160,lVar16 + 0x148);
      local_118 = 0;
      if (local_120 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(local_160);
      FUN_1408d9f48(*plVar2 + 0x198,local_1b0,*plVar2 + 0x1e8);
      local_168 = 0;
      if (local_170 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(local_1b0);
      lVar19 = lVar19 + -0x10;
    } while (local_238 < lVar10);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  FUN_140a6c8c0(&local_228);
  FUN_140a6c8c0(&local_208);
  FUN_140a6c8c0(&local_1e8);
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14708eb4e FUN_14708eb4e body=63 status=ok
// SIG undefined FUN_14708eb4e(void)

longlong FUN_14708eb4e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147099ef4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_147099ee5(lVar2);
  return lVar2;
}



// FUNCTION 14708eb8e FUN_14708eb8e body=1825 status=ok
// SIG undefined FUN_14708eb8e(void)

void FUN_14708eb8e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  size_t sVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  byte *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  lVar5 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  if (DAT_14c9a1ab0 != 0) {
    local_90 = DAT_14c9a0c50;
    local_98 = DAT_14c9a0c48;
    FUN_1448075d0(&local_88);
    if (*param_2 == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_142b20a62(*param_2,&local_88);
    }
    pbVar2 = (byte *)*puVar9;
    plVar15 = (longlong *)puVar9[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    plVar10 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar10 = *(longlong **)(pbVar2 + 8);
    }
    local_c0 = pbVar2;
    local_a0 = plVar15;
    if ((longlong)(int)plVar10[2] != 0) {
      plVar15 = (longlong *)*plVar10;
      plVar10 = plVar15 + (longlong)(int)plVar10[2] * 2;
      local_b0 = local_c8 + 0x70;
      local_b8 = param_2 + 2;
      local_a8 = param_2 + 4;
      do {
        local_90 = DAT_14c9a0c68;
        local_98 = DAT_14c9a0c60;
        FUN_1448075d0(&local_88,&local_98);
        puVar9 = &DAT_14c9a1308;
        if (*plVar15 != 0) {
          puVar9 = (undefined8 *)FUN_142b20a62(*plVar15,&local_88);
        }
        pbVar2 = (byte *)*puVar9;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(pbVar2 + 8);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        local_90 = DAT_14c9a0c80;
        local_98 = DAT_14c9a0c78;
        FUN_1448075d0(&local_88,&local_98);
        puVar9 = &DAT_14c9a1308;
        if (*plVar15 != 0) {
          puVar9 = (undefined8 *)FUN_142b20a62(*plVar15,&local_88);
        }
        pbVar2 = (byte *)*puVar9;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)(pbVar2 + 8);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if ((lVar11 != 0) && (lVar16 != 0)) {
          local_88 = (wchar_t *)0x0;
          uStack_80 = 0;
          local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
          local_70 = 0;
          uStack_68 = 0;
          FUN_1446ddda2(&local_88,lVar16,0);
          uVar6 = FUN_140ca8338(lVar5,&local_88);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (((-1 < (short)uVar6) && ((int)(uint)uVar6 < *(int *)(lVar5 + 0xd0))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 200) + (ulonglong)uVar6 * 8) != 0)) {
            lVar11 = FUN_14708f658(local_b0);
            FUN_144a787a6(lVar11,local_b8);
            FUN_144a787a6(lVar11 + 0x10,local_a8);
            FUN_1400b22c2(&local_88);
            if ((wchar_t **)(lVar11 + 0x20) == &local_88) {
              if (local_88 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar11 + 0x20) != 0) {
                FUN_1400020a8();
              }
              *(wchar_t **)(lVar11 + 0x20) = local_88;
              *(undefined4 *)(lVar11 + 0x28) = (undefined4)uStack_80;
              *(undefined4 *)(lVar11 + 0x2c) = uStack_80._4_4_;
            }
            _Str = L"";
            if (*(int *)(lVar11 + 0x28) != 0) {
              _Str = *(wchar_t **)(lVar11 + 0x20);
            }
            local_88 = L"";
            if (*(int *)(lVar11 + 0x18) != 0) {
              local_88 = *(wchar_t **)(lVar11 + 0x10);
            }
            uVar7 = 0;
            if (local_88 != (wchar_t *)0x0) {
              sVar12 = wcslen(local_88);
              uVar7 = (int)sVar12;
            }
            uVar14 = 0;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
            local_78 = _Str;
            if (_Str != (wchar_t *)0x0) {
              sVar12 = wcslen(_Str);
              uVar14 = (undefined4)sVar12;
            }
            local_70 = CONCAT44(local_70._4_4_,uVar14);
            FUN_140bee87a(&local_98,&local_88,2);
            if ((longlong *)(lVar11 + 0x30) == &local_98) {
              if (local_98 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar11 + 0x30) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar11 + 0x30) = local_98;
              local_98 = 0;
              *(undefined4 *)(lVar11 + 0x38) = local_90;
              *(undefined4 *)(lVar11 + 0x3c) = local_8c;
            }
            FUN_1446dcc2e(lVar11 + 0x238,plVar15);
            *(ushort *)(lVar11 + 0x248) = uVar6;
            uVar3 = *(undefined8 *)(*(longlong *)(local_c8 + 0x30) + 0x50);
            local_90 = DAT_14c9a0ab8;
            local_98 = DAT_14c9a0ab0;
            FUN_1448075d0(&local_88,&local_98);
            puVar9 = &DAT_14c9a1308;
            if (local_c0 != (byte *)0x0) {
              puVar9 = (undefined8 *)FUN_142b20a62(local_c0,&local_88);
            }
            FUN_140558f28(puVar9,lVar11 + 0x48,uVar3,0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            uVar3 = *(undefined8 *)(*(longlong *)(local_c8 + 0x30) + 0x58);
            local_90 = DAT_14c9a0ae8;
            local_98 = DAT_14c9a0ae0;
            FUN_1448075d0(&local_88,&local_98);
            puVar9 = &DAT_14c9a1308;
            if (local_c0 != (byte *)0x0) {
              puVar9 = (undefined8 *)FUN_142b20a62(local_c0,&local_88);
            }
            FUN_140558f28(puVar9,lVar11 + 0x88,uVar3,0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            uVar3 = *(undefined8 *)(*(longlong *)(local_c8 + 0x30) + 0x60);
            local_90 = DAT_14c9a0b18;
            local_98 = DAT_14c9a0b10;
            FUN_1448075d0(&local_88,&local_98);
            puVar9 = &DAT_14c9a1308;
            if (local_c0 != (byte *)0x0) {
              puVar9 = (undefined8 *)FUN_142b20a62(local_c0,&local_88);
            }
            FUN_140558f28(puVar9,lVar11 + 200,uVar3,0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            uVar3 = *(undefined8 *)(*(longlong *)(local_c8 + 0x30) + 0x50);
            local_90 = DAT_14c9a0ad0;
            local_98 = DAT_14c9a0ac8;
            FUN_1448075d0(&local_88,&local_98);
            puVar9 = &DAT_14c9a1308;
            if (local_c0 != (byte *)0x0) {
              puVar9 = (undefined8 *)FUN_142b20a62(local_c0,&local_88);
            }
            FUN_140558f28(puVar9,lVar11 + 0x68,uVar3,0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            uVar3 = *(undefined8 *)(*(longlong *)(local_c8 + 0x30) + 0x58);
            local_90 = DAT_14c9a0b00;
            local_98 = DAT_14c9a0af8;
            FUN_1448075d0(&local_88,&local_98);
            puVar9 = &DAT_14c9a1308;
            if (local_c0 != (byte *)0x0) {
              puVar9 = (undefined8 *)FUN_142b20a62(local_c0,&local_88);
            }
            FUN_140558f28(puVar9,lVar11 + 0xa8,uVar3,0);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)(lVar11 + 0x50) == *(longlong *)(lVar11 + 0x70)) {
              uVar8 = *(uint *)(lVar11 + 0x80);
              if ((int)*(uint *)(lVar11 + 0x60) < (int)*(uint *)(lVar11 + 0x80)) {
                uVar8 = *(uint *)(lVar11 + 0x60);
              }
              if (0 < (int)uVar8) {
                uVar13 = 0;
                do {
                  uVar4 = *(ulonglong *)(*(longlong *)(lVar11 + 0x58) + uVar13 * 8);
                  uVar17 = ~*(ulonglong *)(*(longlong *)(lVar11 + 0x78) + uVar13 * 8) & uVar4;
                  if (uVar17 != uVar4) {
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x58) + uVar13 * 8) = uVar17;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar8 != uVar13);
              }
            }
            if (*(longlong *)(lVar11 + 0x90) == *(longlong *)(lVar11 + 0xb0)) {
              uVar8 = *(uint *)(lVar11 + 0xc0);
              if ((int)*(uint *)(lVar11 + 0xa0) < (int)*(uint *)(lVar11 + 0xc0)) {
                uVar8 = *(uint *)(lVar11 + 0xa0);
              }
              if (0 < (int)uVar8) {
                uVar13 = 0;
                do {
                  uVar4 = *(ulonglong *)(*(longlong *)(lVar11 + 0x98) + uVar13 * 8);
                  uVar17 = ~*(ulonglong *)(*(longlong *)(lVar11 + 0xb8) + uVar13 * 8) & uVar4;
                  if (uVar17 != uVar4) {
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x98) + uVar13 * 8) = uVar17;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar8 != uVar13);
              }
            }
          }
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar10);
    }
    plVar15 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_a0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14708f2b0 FUN_14708f2b0 body=387 status=ok
// SIG undefined FUN_14708f2b0(void)

longlong FUN_14708f2b0(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x20))(param_1 + 0x48,0);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_1406022fe(param_1 + 0x58,param_2 + 0x58);
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x20))(param_1 + 0x68,0);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1406022fe(param_1 + 0x78,param_2 + 0x78);
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x20))(param_1 + 0x88,0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_1406022fe(param_1 + 0x98,param_2 + 0x98);
  (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x20))(param_1 + 0xa8,0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  FUN_1406022fe(param_1 + 0xb8,param_2 + 0xb8);
  (**(code **)(*(longlong *)(param_1 + 200) + 0x20))(param_1 + 200,0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_1406022fe(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_144881636(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144881636(param_1 + 0x148,param_2 + 0x148);
  FUN_144881636(param_1 + 0x198,param_2 + 0x198);
  FUN_144881636(param_1 + 0x1e8,param_2 + 0x1e8);
  return param_1;
}



// FUNCTION 14708f434 FUN_14708f434 body=547 status=ok
// SIG undefined FUN_14708f434(void)

void FUN_14708f434(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [4];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x40) == 0)) {
    iVar7 = DAT_14c9a1298;
    iVar5 = DAT_14c9a12c4;
    if ((*pbVar2 & 2) != 0) {
      iVar7 = *(int *)(*(longlong *)(pbVar2 + 8) + 0x28);
      iVar5 = *(int *)(*(longlong *)(pbVar2 + 8) + 0x54);
    }
    if (iVar5 < iVar7) {
      uVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
      uVar8 = (iVar7 - iVar5) + uVar6;
      if (uVar6 < uVar8) {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar8);
        }
        FUN_144732142(param_2,uVar8);
        iVar7 = 1;
        if (3 < uVar8) {
          uVar6 = (uVar8 | 1) + 0xe;
          iVar7 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          iVar7 = 1 << ((byte)iVar7 & 0x1f);
        }
        if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar7)) {
          *(int *)(param_2 + 0x48) = iVar7;
          FUN_144869b4a(param_2);
        }
      }
      if ((*pbVar2 & 2) == 0) {
        plVar10 = &DAT_14c9a1288;
      }
      else {
        plVar10 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      plVar1 = plVar10 + 3;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      uStack_68 = 0;
      uStack_78 = plVar1;
      if ((int)plVar10[6] == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_80);
        iVar7 = (int)plVar10[6];
      }
      uStack_88 = CONCAT44(uStack_64,uStack_68);
      local_90 = local_70;
      uVar4 = local_90;
      local_a0 = (undefined4)local_80;
      uStack_9c = local_80._4_4_;
      uStack_98 = (undefined4)uStack_78;
      uStack_94 = uStack_78._4_4_;
      local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar5 = local_90._4_4_;
      local_a8 = plVar10;
      if ((local_90._4_4_ != iVar7) || (local_90 = uVar4, uStack_78 != plVar1)) {
        do {
          local_90 = uVar4;
          lVar3 = *local_a8;
          lVar9 = (longlong)iVar5 * 0x40;
          FUN_1447a97f4(&local_80,lVar3 + lVar9);
          local_58 = *(undefined8 *)(lVar3 + 0x28 + lVar9);
          local_50 = *(longlong *)(lVar3 + 0x30 + lVar9);
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          FUN_1447325ac(&local_80,local_b0,1);
          FUN_144869592(param_2,local_b4,local_b0,0);
          FUN_1447b3f56(&local_80);
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
          FUN_1449c0562(&local_a0);
          iVar5 = local_90._4_4_;
          uVar4 = local_90;
        } while (local_a8 != plVar10 ||
                 ((longlong *)CONCAT44(uStack_94,uStack_98) != plVar1 || local_90._4_4_ != iVar7));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14708f658 FUN_14708f658 body=62 status=ok
// SIG undefined FUN_14708f658(void)

longlong FUN_14708f658(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147099d5c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x250 + *param_1;
  FUN_147099f88(lVar2);
  return lVar2;
}



// FUNCTION 14708f696 FUN_14708f696 body=188 status=ok
// SIG undefined FUN_14708f696(void)

ulonglong FUN_14708f696(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  undefined7 uVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = DAT_14c9a0d80;
  local_60 = DAT_14c9a0d88;
  FUN_1448075d0(local_58);
  iVar2 = local_58[0];
  iVar1 = *param_1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (iVar1 != iVar2) {
    local_68 = DAT_14c9a0d98;
    local_60 = DAT_14c9a0da0;
    FUN_1448075d0(local_58);
    uVar3 = CONCAT71(uVar4,*param_1 == local_58[0]);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708f753 FUN_14708f753 body=269 status=ok
// SIG undefined FUN_14708f753(void)

void FUN_14708f753(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 1;
  FUN_144a38a52(param_3,&local_58,&PTR_DAT_149e00c20,4);
  lVar1 = local_58;
  lVar4 = (longlong)(int)uStack_50;
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      local_60 = 0;
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar2 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_1446f470e(local_68,puVar2,1);
      FUN_1405593a8(param_2,&local_60,local_68);
      (**(code **)(*param_1 + 8))(param_1,&local_60);
      lVar5 = lVar5 + 0x10;
    } while (lVar4 * 0x10 != lVar5);
    uVar3 = uStack_50 & 0xffffffff;
  }
  FUN_1447a1747(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708f861 FUN_14708f861 body=533 status=ok
// SIG undefined FUN_14708f861(void)

void FUN_14708f861(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  (**(code **)(*(longlong *)(param_4 + 8) + 0x20))(param_4 + 8,0);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_3 + 0x50);
  FUN_1406022fe((longlong *)(param_4 + 0x18),param_3 + 0x58);
  (**(code **)(*(longlong *)(param_4 + 0x28) + 0x20))(param_4 + 0x28,0);
  *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_3 + 0x70);
  FUN_1406022fe((longlong *)(param_4 + 0x38),param_3 + 0x78);
  (**(code **)(*(longlong *)(param_4 + 0x48) + 0x20))(param_4 + 0x48,0);
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_3 + 0x90);
  FUN_1406022fe((longlong *)(param_4 + 0x58),param_3 + 0x98);
  (**(code **)(*(longlong *)(param_4 + 0x68) + 0x20))(param_4 + 0x68,0);
  *(undefined8 *)(param_4 + 0x70) = *(undefined8 *)(param_3 + 0xb0);
  FUN_1406022fe((longlong *)(param_4 + 0x78),param_3 + 0xb8);
  (**(code **)(*(longlong *)(param_4 + 0x88) + 0x20))(param_4 + 0x88,0);
  *(undefined8 *)(param_4 + 0x90) = *(undefined8 *)(param_3 + 0xd0);
  FUN_1406022fe(param_4 + 0x98,param_3 + 0xd8);
  FUN_14708f753(param_4 + 8,*(undefined8 *)(param_1 + 0x50),param_2);
  FUN_14708f753(param_4 + 0x28,*(undefined8 *)(param_1 + 0x50),param_2 + 0x10);
  FUN_14708f753(param_4 + 0x48,*(undefined8 *)(param_1 + 0x58),param_2 + 0x20);
  FUN_14708f753(param_4 + 0x68,*(undefined8 *)(param_1 + 0x58),param_2 + 0x30);
  FUN_14708f753(param_4 + 0x88,*(undefined8 *)(param_1 + 0x60),param_2 + 0x40);
  if (*(longlong *)(param_4 + 0x10) == *(longlong *)(param_4 + 0x30)) {
    uVar3 = *(uint *)(param_4 + 0x40);
    if ((int)*(uint *)(param_4 + 0x20) < (int)*(uint *)(param_4 + 0x40)) {
      uVar3 = *(uint *)(param_4 + 0x20);
    }
    if (0 < (int)uVar3) {
      uVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_4 + 0x18);
        uVar2 = *(ulonglong *)(lVar1 + uVar4 * 8);
        uVar5 = ~*(ulonglong *)(*(longlong *)(param_4 + 0x38) + uVar4 * 8) & uVar2;
        if (uVar5 != uVar2) {
          *(ulonglong *)(lVar1 + uVar4 * 8) = uVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (*(longlong *)(param_4 + 0x50) == *(longlong *)(param_4 + 0x70)) {
    uVar3 = *(uint *)(param_4 + 0x80);
    if ((int)*(uint *)(param_4 + 0x60) < (int)*(uint *)(param_4 + 0x80)) {
      uVar3 = *(uint *)(param_4 + 0x60);
    }
    if (0 < (int)uVar3) {
      uVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_4 + 0x58);
        uVar2 = *(ulonglong *)(lVar1 + uVar4 * 8);
        uVar5 = ~*(ulonglong *)(*(longlong *)(param_4 + 0x78) + uVar4 * 8) & uVar2;
        if (uVar5 != uVar2) {
          *(ulonglong *)(lVar1 + uVar4 * 8) = uVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return;
}



// FUNCTION 14708fa76 FUN_14708fa76 body=334 status=ok
// SIG undefined FUN_14708fa76(void)

undefined8 *
FUN_14708fa76(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  longlong local_70;
  int local_60 [6];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447715ec(param_5,param_4);
  if (*param_3 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_142b20a62(*param_3,param_4);
  }
  pbVar3 = (byte *)*puVar2;
  *param_1 = pbVar3;
  lVar4 = puVar2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    pbVar3 = (byte *)*param_1;
  }
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) {
    plVar1 = *(longlong **)(param_2 + 0x78);
    FUN_1447a97f4(local_88,param_4);
    FUN_1447a97f4(local_60,local_88);
    lVar4 = (longlong)(int)plVar1[1];
    if (lVar4 != 0) {
      lVar5 = *plVar1;
      lVar4 = lVar4 * 0x60;
      do {
        if (*(int *)(lVar5 + 0x30) == local_60[0]) goto LAB_14708fb3b;
        lVar5 = lVar5 + 0x60;
        lVar4 = lVar4 + -0x60;
      } while (lVar4 != 0);
    }
    lVar5 = 0;
LAB_14708fb3b:
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (lVar5 != 0) {
      FUN_1447715ec(param_5,lVar5);
      if (*param_3 == 0) {
        puVar2 = &DAT_14c9a1308;
      }
      else {
        puVar2 = (undefined8 *)FUN_142b20a62(*param_3,param_5);
      }
      FUN_1446dcc2e(param_1,puVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708fbc6 FUN_14708fbc6 body=215 status=ok
// SIG undefined FUN_14708fbc6(void)

void FUN_14708fbc6(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_4 < 0) ||
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) + 8) <= param_4)) {
    FUN_140002266(local_30,L"Unable to parse prefs. Invalid Store Index",param_4);
    FUN_14708d2e4(local_30);
  }
  else {
    if ((byte *)*param_3 == (byte *)0x0) {
      pwVar2 = L"Unknown";
    }
    else {
      if ((*(byte *)*param_3 & 0x6b) == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      uVar1 = FUN_14582489c();
      pwVar2 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar1];
    }
    FUN_140002266(local_30,L"Unable to parse prefs \'%ls\'. Expected \'Map\'.",pwVar2);
    FUN_14708d2e4(local_30);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14708fcb2 FUN_14708fcb2 body=1754 status=ok
// SIG undefined FUN_14708fcb2(void)

void FUN_14708fcb2(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined4 local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  byte *local_138;
  longlong *plStack_130;
  byte *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_b8 [2];
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_88 [2];
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  uVar11 = (ulonglong)param_4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((int)param_4 < 0) ||
     (plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x70),
     (int)plVar16[1] <= (int)param_4)) {
    FUN_140002266(local_88,L"Unable to parse defs. Invalid Store Index",uVar11);
    FUN_14708d2e4(local_88);
  }
  else {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 == (byte *)0x0) {
      pwVar14 = L"Unknown";
    }
    else {
      if ((*pbVar4 & 0x6b) == 2) {
        lVar12 = (longlong)*(int *)(*(undefined8 **)(pbVar4 + 8) + 2);
        if (lVar12 != 0) {
          lVar15 = uVar11 * 0x98 + *plVar16;
          plVar16 = (longlong *)**(undefined8 **)(pbVar4 + 8);
          plVar13 = plVar16 + lVar12 * 2;
          do {
            if ((byte *)*plVar16 == (byte *)0x0) {
              pwVar14 = L"Unknown";
LAB_14708fd60:
              FUN_140002266(local_88,L"Unable to parse def \'%ls\'. Expected \'Map\'.",pwVar14);
              FUN_14708d2e4(local_88);
              if (local_88[0] != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if ((~*(byte *)*plVar16 & 3) != 0) {
                uVar8 = FUN_14582489c();
                pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar8];
                goto LAB_14708fd60;
              }
              local_88[0] = 0;
              local_88[1] = 0;
              local_78 = 0;
              local_70 = 0;
              uStack_68 = 0;
              local_168 = local_88;
              FUN_14708fa76(&local_128,*(undefined8 *)(param_1 + 0x20),plVar16,lVar15);
              pbVar4 = local_128;
              local_150 = param_2;
              if ((local_128 == (byte *)0x0) || (cVar6 = FUN_140d79696(local_128), cVar6 == '\0')) {
                uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0db8);
                local_e8 = DAT_14c9a0db0;
                FUN_1448075d0(local_b8,&local_e8);
                puVar9 = &DAT_14c9a1308;
                if (*plVar16 != 0) {
                  puVar9 = (undefined8 *)FUN_142b20a62(*plVar16,local_b8);
                }
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
                pbVar4 = (byte *)*puVar9;
                local_140 = puVar9;
                if (((pbVar4 == (byte *)0x0) || (cVar6 = FUN_140d79696(pbVar4), cVar6 == '\0')) ||
                   (*(int *)(lVar15 + 0x30) < 1)) {
                  FUN_147090e7e(local_88,plVar16);
                }
                else {
                  if ((*pbVar4 & 3) == 1) {
                    uVar10 = *(undefined8 *)(pbVar4 + 8);
                  }
                  else {
                    uVar10 = 0;
                  }
                  local_b8[0] = 0;
                  local_b8[1] = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  FUN_1446ddda2(local_b8,uVar10,0);
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0dd0);
                  local_e8 = DAT_14c9a0dc8;
                  FUN_1448075d0(local_b8,&local_e8);
                  puVar9 = &DAT_14c9a1308;
                  if (*plVar16 != 0) {
                    puVar9 = (undefined8 *)FUN_142b20a62(*plVar16,local_b8);
                  }
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                  pbVar4 = (byte *)*puVar9;
                  if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 2)) {
                    lVar12 = (longlong)*(int *)(*(undefined8 **)(pbVar4 + 8) + 2);
                    if (lVar12 != 0) {
                      puVar9 = (undefined8 *)**(undefined8 **)(pbVar4 + 8);
                      lVar12 = lVar12 << 4;
                      do {
                        if ((byte *)*puVar9 == (byte *)0x0) {
                          pwVar14 = L"Unknown";
LAB_14708fec6:
                          FUN_140002266(local_b8,
                                        L"Unable to parse def sub \'%ls\'. Expected \'Map\'.",
                                        pwVar14);
                          FUN_14708d2e4(local_b8);
                          if (local_b8[0] != 0) {
                            FUN_1400020a8();
                          }
                        }
                        else {
                          if ((~*(byte *)*puVar9 & 3) != 0) {
                            uVar8 = FUN_14582489c();
                            pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar8];
                            goto LAB_14708fec6;
                          }
                          local_138 = (byte *)0x0;
                          plStack_130 = (longlong *)0x0;
                          iVar7 = FUN_147090d70(lVar15,puVar9,&local_138);
                          if ((iVar7 < 0) || (*(int *)(lVar15 + 0x30) <= iVar7)) {
                            FUN_140002266(local_b8,L"Invalid def sub root");
                            FUN_14708d2e4(local_b8);
                            if (local_b8[0] != 0) {
                              FUN_1400020a8();
                            }
                          }
                          else {
                            local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar7);
                            if ((local_138 == (byte *)0x0) || ((*local_138 & 3) != 1)) {
                              uVar10 = 0;
                            }
                            else {
                              uVar10 = *(undefined8 *)(local_138 + 8);
                            }
                            local_148 = *local_150;
                            local_a8 = 0;
                            local_b8[0] = 0;
                            local_b8[1] = 0;
                            local_a0 = 0;
                            uStack_98 = 0;
                            FUN_1446ddda2(local_b8,uVar10,0);
                            local_d8 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_d0 = 0;
                            uStack_c8 = 0;
                            FUN_1446ddda2(&local_e8,
                                          *(undefined8 *)
                                           (*(longlong *)(lVar15 + 0x28) +
                                           ((ulonglong)local_158 & 0xffffffff) * 8),0);
                            pbVar4 = (byte *)*local_140;
                            if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
                              uVar10 = 0;
                            }
                            else {
                              uVar10 = *(undefined8 *)(pbVar4 + 8);
                            }
                            local_118 = 0;
                            uStack_110 = 0;
                            local_108 = 0;
                            local_100 = 0;
                            uStack_f8 = 0;
                            FUN_1446ddda2(&local_118,uVar10,0);
                            local_160 = local_158._0_4_;
                            local_168 = local_b8;
                            FUN_140093c70(local_148,uVar11,puVar9,&local_118);
                            if (local_100 != 0) {
                              FUN_1400020a8();
                            }
                            if (local_d0 != 0) {
                              FUN_1400020a8();
                            }
                            if (local_a0 != 0) {
                              FUN_1400020a8();
                            }
                          }
                          if (plStack_130 != (longlong *)0x0) {
                            LOCK();
                            plVar1 = plStack_130 + 1;
                            *(int *)plVar1 = (int)*plVar1 + -1;
                            UNLOCK();
                            if ((int)*plVar1 == 0) {
                              local_158 = plStack_130;
                              (**(code **)*plStack_130)(plStack_130);
                              LOCK();
                              piVar3 = (int *)((longlong)local_158 + 0xc);
                              *piVar3 = *piVar3 + -1;
                              UNLOCK();
                              if (*piVar3 == 0) {
                                (**(code **)(*local_158 + 0x10))();
                              }
                            }
                          }
                        }
                        puVar9 = puVar9 + 2;
                        lVar12 = lVar12 + -0x10;
                      } while (lVar12 != 0);
                    }
                  }
                }
              }
              else {
                if ((*pbVar4 & 3) == 1) {
                  uVar10 = *(undefined8 *)(pbVar4 + 8);
                }
                else {
                  uVar10 = 0;
                }
                uVar5 = *param_2;
                local_b8[0] = 0;
                local_b8[1] = 0;
                local_a8 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                FUN_1446ddda2(local_b8,uVar10,0);
                FUN_140a29d88(uVar5,uVar11,plVar16,local_b8);
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
              }
              plVar1 = local_120;
              if (local_120 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_120 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_120)(local_120);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
              param_2 = local_150;
              if (local_70 != 0) {
                FUN_1400020a8();
                param_2 = local_150;
              }
            }
            plVar16 = plVar16 + 2;
          } while (plVar16 != plVar13);
        }
        goto LAB_147090229;
      }
      uVar8 = FUN_14582489c();
      pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar8];
    }
    FUN_140002266(local_88,L"Unable to parse defs \'%ls\'. Expected \'Sequence\'.",pwVar14);
    FUN_14708d2e4(local_88);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_147090229:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709038e FUN_14709038e body=2529 status=ok
// SIG undefined FUN_14709038e(void)

void FUN_14709038e(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  uint local_19c;
  longlong local_198;
  longlong *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 *local_170;
  byte *local_168;
  longlong *plStack_160;
  byte *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  uVar13 = (ulonglong)param_4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((int)param_4 < 0) ||
     (plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x70),
     (int)plVar17[1] <= (int)param_4)) {
    FUN_140002266(&local_88,L"Unable to parse redirects. Invalid Store Index",uVar13);
    FUN_14708d2e4(&local_88);
  }
  else {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 == (byte *)0x0) {
      pwVar14 = L"Unknown";
    }
    else {
      if ((*pbVar4 & 0x6b) == 2) {
        lVar15 = (longlong)*(int *)(*(undefined8 **)(pbVar4 + 8) + 2);
        local_188 = param_2;
        if (lVar15 != 0) {
          local_198 = uVar13 * 0x98 + *plVar17;
          plVar17 = (longlong *)**(undefined8 **)(pbVar4 + 8);
          plVar16 = plVar17 + lVar15 * 2;
          do {
            if ((byte *)*plVar17 == (byte *)0x0) {
              pwVar14 = L"Unknown";
LAB_147090454:
              FUN_140002266(&local_88,L"Unable to parse redirect \'%ls\'. Expected \'Map\'.",pwVar14
                           );
              FUN_14708d2e4(&local_88);
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if ((~*(byte *)*plVar17 & 3) != 0) {
                uVar9 = FUN_14582489c();
                pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar9];
                goto LAB_147090454;
              }
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 0;
              uStack_68 = 0;
              local_1b8 = &local_88;
              FUN_14708fa76(&local_158,*(undefined8 *)(param_1 + 0x20),plVar17,local_198);
              if ((local_158 == (byte *)0x0) || (cVar8 = FUN_140d79696(), cVar8 == '\0')) {
                uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0db8);
                local_e8 = DAT_14c9a0db0;
                FUN_1448075d0(&local_b8,&local_e8);
                puVar10 = &DAT_14c9a1308;
                if (*plVar17 != 0) {
                  puVar10 = (undefined8 *)FUN_142b20a62(*plVar17,&local_b8);
                }
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
                pbVar4 = (byte *)*puVar10;
                local_170 = puVar10;
                if (((pbVar4 != (byte *)0x0) && (cVar8 = FUN_140d79696(pbVar4), cVar8 != '\0')) &&
                   (0 < *(int *)(local_198 + 0x30))) {
                  if ((*pbVar4 & 3) == 1) {
                    uVar11 = *(undefined8 *)(pbVar4 + 8);
                  }
                  else {
                    uVar11 = 0;
                  }
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  FUN_1446ddda2(&local_b8,uVar11,0);
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0dd0);
                  local_e8 = DAT_14c9a0dc8;
                  FUN_1448075d0(&local_b8,&local_e8);
                  puVar10 = &DAT_14c9a1308;
                  if (*plVar17 != 0) {
                    puVar10 = (undefined8 *)FUN_142b20a62(*plVar17,&local_b8);
                  }
                  pbVar4 = (byte *)*puVar10;
                  plVar5 = (longlong *)puVar10[1];
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                    UNLOCK();
                  }
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                  if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 2)) {
                    lVar15 = (longlong)*(int *)(*(undefined8 **)(pbVar4 + 8) + 2);
                    if (lVar15 != 0) {
                      plVar12 = (longlong *)**(undefined8 **)(pbVar4 + 8);
                      lVar15 = lVar15 << 4;
                      do {
                        lVar7 = local_198;
                        if ((byte *)*plVar12 == (byte *)0x0) {
                          pwVar14 = L"Unknown";
LAB_147090649:
                          FUN_140002266(&local_b8,
                                        L"Unable to parse redirect sub \'%ls\'. Expected \'Map\'.",
                                        pwVar14);
                          FUN_14708d2e4(&local_b8);
                          if (local_b8 != 0) {
                            FUN_1400020a8();
                          }
                        }
                        else {
                          if ((~*(byte *)*plVar12 & 3) != 0) {
                            uVar9 = FUN_14582489c();
                            pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar9];
                            goto LAB_147090649;
                          }
                          local_168 = (byte *)0x0;
                          plStack_160 = (longlong *)0x0;
                          uVar9 = FUN_147090d70(local_198,plVar12,&local_168);
                          local_178 = lVar15;
                          if (((int)uVar9 < 0) || (*(int *)(lVar7 + 0x30) <= (int)uVar9)) {
                            FUN_140002266(&local_b8,L"Invalid redirect sub root");
                            FUN_14708d2e4(&local_b8);
                            if (local_b8 != 0) {
                              FUN_1400020a8();
                            }
                          }
                          else {
                            uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0de8);
                            local_e8 = DAT_14c9a0de0;
                            local_19c = uVar9;
                            FUN_1448075d0(&local_b8,&local_e8);
                            puVar10 = &DAT_14c9a1308;
                            if (*plVar12 != 0) {
                              puVar10 = (undefined8 *)FUN_142b20a62(*plVar12,&local_b8);
                            }
                            pbVar4 = (byte *)*puVar10;
                            local_190 = (longlong *)puVar10[1];
                            if (local_190 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(local_190 + 1) = (int)local_190[1] + 1;
                              UNLOCK();
                            }
                            if (local_a0 != 0) {
                              FUN_1400020a8();
                            }
                            if ((pbVar4 == (byte *)0x0) ||
                               (cVar8 = FUN_140d79696(pbVar4), cVar8 == '\0')) {
                              FUN_140002266(&local_b8,L"Invalid redirect sub RedirectTo");
                              FUN_14708d2e4(&local_b8);
                              lVar15 = local_b8;
                            }
                            else {
                              if ((*pbVar4 & 3) == 1) {
                                uVar11 = *(undefined8 *)(pbVar4 + 8);
                              }
                              else {
                                uVar11 = 0;
                              }
                              uVar6 = *local_188;
                              local_b8 = 0;
                              uStack_b0 = 0;
                              local_a8 = 0;
                              local_a0 = 0;
                              uStack_98 = 0;
                              FUN_1446ddda2(&local_b8,uVar11,0);
                              if ((local_168 == (byte *)0x0) || ((*local_168 & 3) != 1)) {
                                uVar11 = 0;
                              }
                              else {
                                uVar11 = *(undefined8 *)(local_168 + 8);
                              }
                              local_d8 = 0;
                              local_e8 = 0;
                              uStack_e0 = 0;
                              local_d0 = 0;
                              uStack_c8 = 0;
                              local_180 = uVar6;
                              FUN_1446ddda2(&local_e8,uVar11,0);
                              local_108 = 0;
                              local_118 = 0;
                              uStack_110 = 0;
                              local_100 = 0;
                              uStack_f8 = 0;
                              FUN_1446ddda2(&local_118,
                                            *(undefined8 *)
                                             (*(longlong *)(local_198 + 0x28) +
                                             (ulonglong)local_19c * 8),0);
                              pbVar4 = (byte *)*local_170;
                              if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
                                uVar11 = 0;
                              }
                              else {
                                uVar11 = *(undefined8 *)(pbVar4 + 8);
                              }
                              local_148 = 0;
                              uStack_140 = 0;
                              local_138 = 0;
                              local_130 = 0;
                              uStack_128 = 0;
                              FUN_1446ddda2(&local_148,uVar11,0);
                              local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,local_19c);
                              local_1b0 = &local_b8;
                              FUN_141737c56(local_180,uVar13,&local_148,&local_e8);
                              if (local_130 != 0) {
                                FUN_1400020a8();
                              }
                              if (local_100 != 0) {
                                FUN_1400020a8();
                              }
                              lVar15 = local_a0;
                              if (local_d0 != 0) {
                                FUN_1400020a8();
                                lVar15 = local_a0;
                              }
                            }
                            if (lVar15 != 0) {
                              FUN_1400020a8();
                            }
                            if (local_190 != (longlong *)0x0) {
                              LOCK();
                              plVar1 = local_190 + 1;
                              *(int *)plVar1 = (int)*plVar1 + -1;
                              UNLOCK();
                              if ((int)*plVar1 == 0) {
                                (**(code **)*local_190)(local_190);
                                LOCK();
                                piVar2 = (int *)((longlong)local_190 + 0xc);
                                *piVar2 = *piVar2 + -1;
                                UNLOCK();
                                if (*piVar2 == 0) {
                                  (**(code **)(*local_190 + 0x10))();
                                }
                              }
                            }
                          }
                          plVar1 = plStack_160;
                          lVar15 = local_178;
                          if (plStack_160 != (longlong *)0x0) {
                            LOCK();
                            plVar3 = plStack_160 + 1;
                            *(int *)plVar3 = (int)*plVar3 + -1;
                            UNLOCK();
                            if ((int)*plVar3 == 0) {
                              (**(code **)*plStack_160)(plStack_160);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar1 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              UNLOCK();
                              lVar15 = local_178;
                              if (*piVar2 == 0) {
                                (**(code **)(*plVar1 + 0x10))(plVar1);
                                lVar15 = local_178;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 2;
                        lVar15 = lVar15 + -0x10;
                      } while (lVar15 != 0);
                    }
                  }
                  goto joined_r0x0001470909f2;
                }
                FUN_147090e7e(&local_88,plVar17);
              }
              else {
                uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14c9a0de8);
                local_e8 = DAT_14c9a0de0;
                FUN_1448075d0(&local_b8,&local_e8);
                puVar10 = &DAT_14c9a1308;
                if (*plVar17 != 0) {
                  puVar10 = (undefined8 *)FUN_142b20a62(*plVar17,&local_b8);
                }
                pbVar4 = (byte *)*puVar10;
                plVar5 = (longlong *)puVar10[1];
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                  UNLOCK();
                }
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
                if ((pbVar4 == (byte *)0x0) || (cVar8 = FUN_140d79696(pbVar4), cVar8 == '\0')) {
                  FUN_140002266(&local_b8,L"Invalid redirect RedirectTo");
                  FUN_14708d2e4(&local_b8);
                  if (local_b8 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if ((*pbVar4 & 3) == 1) {
                    uVar11 = *(undefined8 *)(pbVar4 + 8);
                  }
                  else {
                    uVar11 = 0;
                  }
                  uVar6 = *local_188;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  FUN_1446ddda2(&local_b8,uVar11,0);
                  if ((local_158 == (byte *)0x0) || ((*local_158 & 3) != 1)) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = *(undefined8 *)(local_158 + 8);
                  }
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_d8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  FUN_1446ddda2(&local_e8,uVar11,0);
                  FUN_1410bfaec(uVar6,uVar13,&local_e8,&local_b8);
                  if (local_d0 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_a0 != 0) {
                    FUN_1400020a8();
                  }
                }
joined_r0x0001470909f2:
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plVar5 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
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
              }
              plVar5 = local_150;
              if (local_150 != (longlong *)0x0) {
                LOCK();
                plVar12 = local_150 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*local_150)(local_150);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              if (local_70 != 0) {
                FUN_1400020a8();
              }
            }
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar16);
        }
        goto LAB_147090b3d;
      }
      uVar9 = FUN_14582489c();
      pwVar14 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar9];
    }
    FUN_140002266(&local_88,L"Unable to parse redirects \'%ls\'. Expected \'Sequence\'.",pwVar14);
    FUN_14708d2e4(&local_88);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_147090b3d:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147090d70 FUN_147090d70 body=128 status=ok
// SIG undefined FUN_147090d70(void)

ulonglong FUN_147090d70(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar3 = 0;
    do {
      puVar2 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar2 = (undefined8 *)
                 FUN_1408db3b0(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8));
      }
      FUN_1446dcc2e(param_3,puVar2);
      if ((*param_3 != 0) && (cVar1 = FUN_140d79696(), cVar1 != '\0')) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x30));
  }
  return 0xffffffff;
}



// FUNCTION 147090e7e FUN_147090e7e body=421 status=ok
// SIG undefined FUN_147090e7e(void)

void FUN_147090e7e(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  size_t sVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  char *_Str;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  undefined8 uStack_150;
  undefined2 *local_148;
  undefined8 uStack_140;
  longlong local_138 [32];
  undefined2 *local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pbVar1 = (byte *)*param_2;
  if (pbVar1 == (byte *)0x0) {
    pwVar5 = L"Unknown";
  }
  else {
    if ((*pbVar1 & 0x6b) == 1) {
      _Str = "None";
      if (*(char **)(pbVar1 + 8) != (char *)0x0) {
        _Str = *(char **)(pbVar1 + 8);
      }
      local_38 = (undefined2 *)0x0;
      sVar3 = strlen(_Str);
      FUN_1446e6fe8(local_138,_Str,sVar3 & 0xffffffff,1);
      local_158 = (undefined2 *)0x0;
      uStack_150 = 0;
      FUN_1400b2348(param_1,&local_158,1);
      puVar4 = local_158;
      if ((int)uStack_150 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_148,L"Invalid Identifier: %ls == \'%ls\'",puVar4,local_30);
      FUN_14708d2e4(&local_148);
      if (local_148 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = local_38;
      if (local_158 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar4 = local_38;
      }
      goto LAB_147090f8f;
    }
    uVar2 = FUN_14582489c();
    pwVar5 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar2];
  }
  local_148 = (undefined2 *)0x0;
  uStack_140 = 0;
  FUN_1400b2348(param_1,&local_148,1);
  puVar4 = local_148;
  if ((int)uStack_140 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(local_138,L"Invalid Type: %ls == \'%ls\': Expected \'Scalar\'.",puVar4,pwVar5);
  FUN_14708d2e4(local_138);
  puVar4 = local_148;
  if (local_138[0] != 0) {
    FUN_1400020a8();
    puVar4 = local_148;
  }
LAB_147090f8f:
  if (puVar4 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709104e FUN_14709104e body=1 status=ok
// SIG undefined FUN_14709104e(void)

void FUN_14709104e(void)

{
  return;
}



// FUNCTION 147091054 FUN_147091054 body=210 status=ok
// SIG undefined FUN_147091054(void)

undefined8 * FUN_147091054(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  *param_2 = &DAT_14a171d50;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      local_50 = *(undefined8 *)(lVar1 + lVar3);
      local_58 = 0;
      FUN_1405593a8(param_1,&local_58,&local_50);
      FUN_140559328(param_2,&local_58);
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091128 FUN_147091128 body=300 status=ok
// SIG undefined FUN_147091128(void)

void FUN_147091128(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      uVar2 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091256 FUN_147091256 body=79 status=ok
// SIG undefined FUN_147091256(void)

undefined8 FUN_147091256(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(longlong *)(param_1 + 8) == *(longlong *)(lVar2 + 0x10))) {
    uVar1 = *(ushort *)(lVar2 + 8);
    uVar4 = (uint)(uVar1 >> 6);
    if ((int)uVar4 < *(int *)(param_1 + 0x18)) {
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 8);
      if ((uVar3 >> ((ulonglong)uVar1 & 0x3f) & 1) != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 8) =
             uVar3 & ~(1L << ((byte)uVar1 & 0x3f));
        return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1470912a6 FUN_1470912a6 body=104 status=ok
// SIG undefined FUN_1470912a6(void)

undefined8 FUN_1470912a6(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  if (param_1[1] != 0) {
    cVar1 = FUN_1407a7474(param_1[1],&local_18,param_2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_18);
      goto LAB_1470912f2;
    }
  }
  uVar2 = 0;
LAB_1470912f2:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091310 FUN_147091310 body=167 status=ok
// SIG undefined FUN_147091310(void)

undefined1 FUN_147091310(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = 1;
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar6 = uVar2;
    if ((int)uVar1 < (int)uVar2) {
      uVar6 = uVar1;
    }
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar7 * 8) !=
            *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar7 * 8)) {
          return 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    if ((int)uVar2 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (*(longlong *)((longlong)(int)uVar2 * 8 + *(longlong *)(param_1 + 0x10) + lVar5 * 8) != 0
           ) {
          return 1;
        }
        iVar4 = (int)lVar5;
        uVar3 = 0;
        lVar5 = lVar5 + 1;
      } while (~uVar2 + uVar1 != iVar4);
    }
    else if ((int)uVar1 < (int)uVar2) {
      lVar5 = 0;
      do {
        if (*(longlong *)((longlong)(int)uVar1 * 8 + *(longlong *)(param_2 + 0x10) + lVar5 * 8) != 0
           ) {
          return 1;
        }
        iVar4 = (int)lVar5;
        uVar3 = 0;
        lVar5 = lVar5 + 1;
      } while (~uVar1 + uVar2 != iVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1470913b8 FUN_1470913b8 body=153 status=ok
// SIG undefined FUN_1470913b8(void)

int FUN_1470913b8(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar5 = 0;
    do {
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x18) * 8 != lVar5);
  }
  FUN_140d04a4c(param_2);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar2 = *(ulonglong **)(param_1 + 0x10);
    puVar1 = puVar2 + *(int *)(param_1 + 0x18);
    sVar3 = 0;
    iVar4 = 0;
    do {
      uVar6 = 0;
      do {
        if ((*puVar2 >> (uVar6 & 0x3f) & 1) != 0) {
          lVar5 = (longlong)iVar4;
          iVar4 = iVar4 + 1;
          *(short *)(*param_2 + lVar5 * 2) = sVar3 + (short)uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x40);
      puVar2 = puVar2 + 1;
      sVar3 = sVar3 + 0x40;
    } while (puVar2 != puVar1);
  }
  return iVar4;
}



// FUNCTION 147091452 FUN_147091452 body=474 status=ok
// SIG undefined FUN_147091452(void)

ulonglong FUN_147091452(longlong *param_1,undefined8 *param_2)

{
  short *psVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ushort *puVar6;
  undefined8 unaff_RBX;
  undefined1 auStack_2a8 [40];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x20))();
    puVar6 = (ushort *)*param_2;
    uVar2 = *puVar6;
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (uVar2 < 0x29) {
      if (uVar2 == 0) goto LAB_1470915de;
      if (uVar2 == 0x28) {
        do {
          puVar6 = puVar6 + 1;
          if (puVar6 == (ushort *)0x0) break;
          iVar4 = iswspace(*puVar6);
        } while (iVar4 != 0);
        if (*puVar6 != 0x29) {
joined_r0x0001470914f3:
          do {
            if (puVar6 == (ushort *)0x0) {
              puVar6 = (ushort *)0x0;
            }
            else {
              iVar4 = iswspace(*puVar6);
              if (iVar4 != 0) {
                puVar6 = puVar6 + 1;
                goto joined_r0x0001470914f3;
              }
            }
            uVar5 = 2;
            if (*puVar6 != 0x2c) {
              local_250 = '\0';
              local_258 = &local_48;
              local_268 = local_248;
              local_260 = local_248;
              puVar6 = (ushort *)FUN_1409a0110(puVar6,&local_268,1);
              if (puVar6 == (ushort *)0x0) {
                if (local_250 == '\x01') {
                  FUN_1400020a8(local_268);
                }
                goto LAB_1470915dc;
              }
              local_278 = 0;
              lVar3 = param_1[1];
              FUN_1446f82e2(&local_270,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1,
                            local_268,1);
              local_280 = local_270;
              FUN_1405593a8(lVar3,&local_278,&local_280);
              (**(code **)(*param_1 + 8))(param_1,&local_278);
              do {
                iVar4 = iswspace(*puVar6);
                if (iVar4 == 0) goto LAB_1470915ad;
                puVar6 = puVar6 + 1;
              } while (puVar6 != (ushort *)0x0);
              puVar6 = (ushort *)0x0;
LAB_1470915ad:
              if (local_250 == '\x01') {
                FUN_1400020a8(local_268);
              }
              uVar5 = (ulonglong)((uint)(*puVar6 == 0x2c) * 2);
            }
            psVar1 = (short *)((longlong)puVar6 + uVar5);
            puVar6 = (ushort *)((longlong)puVar6 + uVar5);
          } while (*psVar1 != 0x29);
          uVar5 = CONCAT71((int7)((ulonglong)&local_268 >> 8),1);
        }
        goto LAB_1470915de;
      }
    }
    else if ((uVar2 == 0x29) || (uVar2 == 0x2c)) goto LAB_1470915de;
  }
LAB_1470915dc:
  uVar5 = 0;
LAB_1470915de:
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091632 FUN_147091632 body=77 status=ok
// SIG undefined FUN_147091632(void)

void FUN_147091632(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091680 FUN_147091680 body=139 status=ok
// SIG undefined FUN_147091680(void)

undefined8 * FUN_147091680(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14a1701c0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_140d13562(param_1,0);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  FUN_140d188f2(param_1 + 4,param_2 + 0x20);
  return param_1;
}



// FUNCTION 14709170c FUN_14709170c body=67 status=ok
// SIG undefined FUN_14709170c(void)

longlong * FUN_14709170c(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,0);
  param_1[1] = *(longlong *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  FUN_140d188f2(param_1 + 4,param_2 + 0x20);
  return param_1;
}



// FUNCTION 147091754 FUN_147091754 body=738 status=ok
// SIG undefined FUN_147091754(void)

ulonglong FUN_147091754(longlong *param_1,undefined8 *param_2)

{
  short *psVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  wchar_t *_Str;
  undefined8 unaff_R12;
  ulonglong uVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_2f8 [32];
  ulonglong local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  ulonglong *local_280;
  char local_278;
  undefined1 local_270 [512];
  ulonglong local_70 [6];
  
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x20))();
    puVar7 = (ushort *)*param_2;
    uVar2 = *puVar7;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    if (uVar2 < 0x29) {
      if (uVar2 == 0) goto LAB_1470919de;
      if (uVar2 == 0x28) {
        do {
          puVar7 = puVar7 + 1;
          if (puVar7 == (ushort *)0x0) break;
          iVar5 = iswspace(*puVar7);
        } while (iVar5 != 0);
        if (*puVar7 != 0x29) {
          do {
            for (; puVar7 != (ushort *)0x0; puVar7 = puVar7 + 1) {
              iVar5 = iswspace(*puVar7);
              if (iVar5 == 0) goto LAB_147091827;
            }
            puVar7 = (ushort *)0x0;
LAB_147091827:
            uVar6 = 2;
            if (*puVar7 != 0x2c) {
              local_278 = '\0';
              local_290 = local_270;
              local_288 = local_270;
              local_280 = local_70;
              puVar7 = (ushort *)FUN_1409a0110(puVar7,&local_290,1);
              if (puVar7 == (ushort *)0x0) {
                if (local_278 == '\x01') {
                  FUN_1400020a8(local_290);
                }
                goto LAB_1470919db;
              }
              local_2b8 = (undefined8 *)0x0;
              uStack_2b0 = 0;
              FUN_14006620a(&local_2a0,local_290,
                            (ulonglong)((longlong)local_288 - (longlong)local_290) >> 1);
              uVar8 = local_2a0;
              local_2c8 = local_2a0;
              local_2c0 = local_298;
              FUN_1403de9f2(&local_2c8,&local_2b8,&DAT_149e06184,1);
              local_2d0 = 0;
              lVar3 = param_1[1];
              iVar5 = *(int *)(local_2b8 + 1) + -1;
              if (*(int *)(local_2b8 + 1) == 0) {
                iVar5 = 0;
              }
              FUN_1446f82e2(&local_2a0,iVar5,*local_2b8,1);
              local_2d8 = local_2a0;
              FUN_1405593a8(lVar3,&local_2d0,&local_2d8);
              fVar10 = 1.0;
              if ((int)uStack_2b0 == 2) {
                cVar4 = FUN_1405b43cc(local_2b8 + 2);
                fVar10 = 1.0;
                if (cVar4 != '\0') {
                  _Str = L"";
                  if (*(int *)(local_2b8 + 3) != 0) {
                    _Str = (wchar_t *)local_2b8[2];
                  }
                  dVar9 = _wtof(_Str);
                  fVar10 = (float)dVar9;
                }
              }
              FUN_147091a38(param_1,&local_2d0,fVar10);
              do {
                iVar5 = iswspace(*puVar7);
                if (iVar5 == 0) goto LAB_147091981;
                puVar7 = puVar7 + 1;
              } while (puVar7 != (ushort *)0x0);
              puVar7 = (ushort *)0x0;
LAB_147091981:
              if (uVar8 != 0) {
                FUN_1400020a8(uVar8);
              }
              FUN_1447a1747(local_2b8,uStack_2b0 & 0xffffffff);
              if (local_2b8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_278 == '\x01') {
                FUN_1400020a8(local_290);
              }
              uVar6 = (ulonglong)((uint)(*puVar7 == 0x2c) * 2);
            }
            psVar1 = (short *)((longlong)puVar7 + uVar6);
            puVar7 = (ushort *)((longlong)puVar7 + uVar6);
            uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          } while (*psVar1 != 0x29);
        }
        goto LAB_1470919de;
      }
    }
    else if ((uVar2 == 0x29) || (uVar2 == 0x2c)) goto LAB_1470919de;
  }
LAB_1470919db:
  uVar8 = 0;
LAB_1470919de:
  if ((local_70[0] ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091a38 FUN_147091a38 body=168 status=ok
// SIG undefined FUN_147091a38(void)

void FUN_147091a38(longlong param_1,longlong *param_2,float param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  float local_34;
  undefined8 *local_30;
  float *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = param_3;
  if (0.0 <= param_3) {
    if (1e-08 < ABS(param_3)) {
      cVar1 = FUN_140559328();
      if (cVar1 != '\0') {
        if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = *(undefined8 *)*param_2;
        }
        local_30 = &local_40;
        local_28 = &local_34;
        FUN_1408cb452(param_1 + 0x20,local_1c,&local_30,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091ae2 FUN_147091ae2 body=309 status=ok
// SIG undefined FUN_147091ae2(void)

undefined8 FUN_147091ae2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      uVar4 = 0;
      goto LAB_147091b08;
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_1[1]);
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_34) {
      iVar5 = 0;
      do {
        local_3c = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_3c);
        puVar3 = (ulonglong *)param_2[1];
        puVar2 = (undefined4 *)*puVar3 + 1;
        if ((undefined4 *)puVar3[1] < puVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_40,4);
          }
          else {
            thunk_FUN_14572512c(param_2,&local_40);
          }
        }
        else {
          local_40 = *(undefined4 *)*puVar3;
          *puVar3 = (ulonglong)puVar2;
        }
        FUN_140e3654a(param_1,&local_3c,local_40);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
  }
  uVar4 = 1;
LAB_147091b08:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147091c18 FUN_147091c18 body=77 status=ok
// SIG undefined FUN_147091c18(void)

void FUN_147091c18(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091c70 FUN_147091c70 body=61 status=ok
// SIG undefined FUN_147091c70(void)

undefined4 FUN_147091c70(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_147091256();
  if ((char)uVar1 != '\0') {
    if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)*param_2;
    }
    FUN_14064ce80(param_1 + 0x20,uVar2);
  }
  return uVar1;
}



// FUNCTION 147091cae FUN_147091cae body=130 status=ok
// SIG undefined FUN_147091cae(void)

undefined8 FUN_147091cae(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  if (param_1[1] != 0) {
    cVar1 = FUN_1407a7474(param_1[1],&local_20,param_2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_20);
      if (cVar1 != '\0') {
        FUN_14064ce80(param_1 + 4,*param_2);
        uVar2 = 1;
        goto LAB_147091d13;
      }
    }
  }
  uVar2 = 0;
LAB_147091d13:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091d32 FUN_147091d32 body=482 status=ok
// SIG undefined FUN_147091d32(void)

ulonglong FUN_147091d32(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined1 auStack_2a8 [40];
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*param_1 != 0) {
    if ((int)param_1[1] != -1) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    puVar4 = (ushort *)*param_2;
    uVar1 = *puVar4;
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (uVar1 < 0x29) {
      if (uVar1 == 0) goto LAB_147091ecd;
      if (uVar1 == 0x28) {
        do {
          puVar4 = puVar4 + 1;
          if (puVar4 == (ushort *)0x0) break;
          iVar3 = iswspace(*puVar4);
        } while (iVar3 != 0);
        if (*puVar4 != 0x29) {
joined_r0x000147091dd4:
          do {
            if (puVar4 == (ushort *)0x0) {
              puVar4 = (ushort *)0x0;
            }
            else {
              iVar3 = iswspace(*puVar4);
              if (iVar3 != 0) {
                puVar4 = puVar4 + 1;
                goto joined_r0x000147091dd4;
              }
            }
            local_250 = '\0';
            local_258 = &local_48;
            local_268 = local_248;
            local_260 = local_248;
            puVar4 = (ushort *)FUN_1409a0110(puVar4,&local_268,1);
            if (puVar4 == (ushort *)0x0) {
              if (local_250 == '\x01') {
                FUN_1400020a8(local_268);
              }
              goto LAB_147091ecb;
            }
            local_278 = 0;
            lVar2 = *param_1;
            FUN_1446f82e2(&local_270,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1,
                          local_268,1);
            local_280 = local_270;
            FUN_1405593a8(lVar2,&local_278,&local_280);
            if ((local_278 != 0) && (lVar2 = *(longlong *)(local_278 + 0x10), lVar2 != 0)) {
              if (*param_1 == 0) {
                *param_1 = lVar2;
              }
              else if (lVar2 != *param_1) goto LAB_147091e92;
              if (*(uint *)(param_1 + 1) != (uint)*(ushort *)(local_278 + 8)) {
                *(uint *)(param_1 + 1) = (uint)*(ushort *)(local_278 + 8);
              }
            }
LAB_147091e92:
            do {
              iVar3 = iswspace(*puVar4);
              if (iVar3 == 0) goto LAB_147091ea3;
              puVar4 = puVar4 + 1;
            } while (puVar4 != (ushort *)0x0);
            puVar4 = (ushort *)0x0;
LAB_147091ea3:
            if (local_250 == '\x01') {
              FUN_1400020a8(local_268);
            }
          } while (*puVar4 != 0x29);
          uVar5 = CONCAT71((int7)((ulonglong)&local_268 >> 8),1);
        }
        goto LAB_147091ecd;
      }
    }
    else if ((uVar1 == 0x29) || (uVar1 == 0x2c)) goto LAB_147091ecd;
  }
LAB_147091ecb:
  uVar5 = 0;
LAB_147091ecd:
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147091f16 FUN_147091f16 body=233 status=ok
// SIG undefined FUN_147091f16(void)

undefined8 FUN_147091f16(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      uVar3 = 0;
      goto LAB_147091fe0;
    }
  }
  else {
    if ((*param_1 != 0) && ((int)param_1[1] != -1)) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    if (0 < local_2c) {
      iVar4 = 0;
      do {
        local_34 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_34);
        FUN_140af8630(param_1,&local_34);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_2c);
    }
  }
  uVar3 = 1;
LAB_147091fe0:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147092004 FUN_147092004 body=62 status=ok
// SIG undefined FUN_147092004(void)

void FUN_147092004(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1407df772(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147092044 FUN_147092044 body=75 status=ok
// SIG undefined FUN_147092044(void)

undefined8 FUN_147092044(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + lVar4 * 8);
        bVar5 = (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar4 * 8) & uVar1) != 0;
        uVar3 = CONCAT71((int7)(uVar1 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        bVar5 = (ulonglong)uVar2 - 1 != lVar4;
        lVar4 = lVar4 + 1;
      } while (bVar5);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147092090 thunk_FUN_144a8028a body=5 status=ok
// SIG undefined thunk_FUN_144a8028a(void)

undefined8 thunk_FUN_144a8028a(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == *(longlong *)(param_2 + 8)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar6 = uVar2;
    if ((int)uVar1 < (int)uVar2) {
      uVar6 = uVar1;
    }
    if (0 < (int)uVar6) {
      lVar4 = *(longlong *)(param_2 + 0x10);
      uVar7 = 0;
      do {
        if ((*(ulonglong *)(lVar4 + uVar7 * 8) &
            ~*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar7 * 8)) != 0) goto LAB_144a802ff;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((int)uVar1 < (int)uVar2) {
      lVar4 = 0;
      do {
        bVar8 = *(longlong *)((longlong)(int)uVar1 * 8 + *(longlong *)(param_2 + 0x10) + lVar4 * 8)
                == 0;
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar8);
        if (!bVar8) {
          return uVar3;
        }
        iVar5 = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (~uVar1 + uVar2 != iVar5);
    }
  }
  else {
LAB_144a802ff:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 147092096 FUN_147092096 body=38 status=ok
// SIG undefined FUN_147092096(void)

undefined4 FUN_147092096(undefined8 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  double dVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001470920b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar2 = atof(*(char **)(pbVar1 + 8));
    return SUB84(dVar2,0);
  }
  return param_2;
}



// FUNCTION 1470920bc FUN_1470920bc body=111 status=ok
// SIG undefined FUN_1470920bc(void)

undefined8 FUN_1470920bc(ulonglong *param_1,ulonglong *param_2,undefined2 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = CONCAT71((int7)((uVar1 | uVar2) >> 8),(uVar1 | uVar2) == 0);
  if (uVar2 != 0 && uVar1 != 0) {
    local_a = *(undefined1 *)(param_3 + 1);
    local_c = *param_3;
    uVar3 = FUN_14709c642(uVar1,uVar2,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709212c FUN_14709212c body=15 status=ok
// SIG undefined FUN_14709212c(void)

undefined8 FUN_14709212c(undefined8 *param_1,ushort param_2,undefined8 param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = DAT_14c9a1ab0;
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  if ((((pbVar1[1] & 2) == 0) && ((*pbVar1 & 3) == 1)) && (DAT_14c9a1ab0 != 0)) {
    *(ushort *)(pbVar1 + 0x20) = param_2;
    if (param_2 == 0x7fff) {
      pcVar5 = "Asset";
    }
    else if ((((short)param_2 < 0) || (*(int *)(lVar2 + 0xd0) <= (int)(short)param_2)) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 200) + (ulonglong)param_2 * 8), lVar2 == 0)
            ) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = *(char **)(lVar2 + 0xb8);
    }
    *(char **)(pbVar1 + 0x28) = pcVar5;
    uVar3 = FUN_14009aea0(&DAT_14c9a1320,param_3);
    *(undefined4 *)(pbVar1 + 0x24) = uVar3;
    *pbVar1 = *pbVar1 & 0x7f;
    FUN_1402afb64(pbVar1,param_3);
    pbVar1[1] = pbVar1[1] & 0xfe | param_4 == 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14709213c FUN_14709213c body=15 status=ok
// SIG undefined FUN_14709213c(void)

undefined8 FUN_14709213c(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar3 = DAT_14c9a1ab0;
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  if ((((param_2 == 0) || ((pbVar2[1] & 2) != 0)) || ((*pbVar2 & 3) != 1)) || (DAT_14c9a1ab0 == 0))
  {
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0xb6);
    *(ushort *)(pbVar2 + 0x20) = uVar1;
    if ((short)uVar1 == 0x7fff) {
      pcVar6 = "Asset";
    }
    else if ((((short)uVar1 < 0) || (*(int *)(lVar3 + 0xd0) <= (int)(short)uVar1)) ||
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 200) + (ulonglong)uVar1 * 8), lVar3 == 0))
    {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = *(char **)(lVar3 + 0xb8);
    }
    *(char **)(pbVar2 + 0x28) = pcVar6;
    uVar4 = FUN_14009aea0(&DAT_14c9a1320,param_3);
    *(undefined4 *)(pbVar2 + 0x24) = uVar4;
    *pbVar2 = *pbVar2 & 0x7f;
    FUN_1402afb64(pbVar2,param_3);
    pbVar2[1] = pbVar2[1] & 0xfe | param_4 == 1;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14709214c FUN_14709214c body=29 status=ok
// SIG undefined FUN_14709214c(void)

undefined8 FUN_14709214c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_14709cc40(*param_1,0x7fff,param_2,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14709216a FUN_14709216a body=15 status=ok
// SIG undefined FUN_14709216a(void)

undefined4 FUN_14709216a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined1 auStack_b8 [128];
  longlong lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    FUN_1406112c4(&pwStack_c8,param_2,1);
    _Str = pwStack_c8;
    if (iStack_c0 == 0) {
      _Str = L"";
    }
    lStack_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(auStack_b8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar2 = FUN_140126aca(lVar1,uStack_30);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147092179 FUN_147092179 body=63 status=ok
// SIG undefined FUN_147092179(void)

ulonglong FUN_147092179(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18) % param_2;
  if ((0 < (int)uVar3) && (iVar4 = param_2 - uVar3, iVar4 != 0 && (int)uVar3 <= (int)param_2)) {
    uVar1 = FUN_144a54ea4(param_1,iVar4);
    uVar2 = FUN_1447c6044(param_1,uVar1,iVar4,0);
    return uVar2;
  }
  return (ulonglong)*(uint *)(param_1 + 0x18) / (ulonglong)param_2;
}



// FUNCTION 1470921b8 FUN_1470921b8 body=2219 status=ok
// SIG undefined FUN_1470921b8(void)

void FUN_1470921b8(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_3c8 [40];
  longlong *local_3a0;
  ulonglong local_398;
  undefined8 *local_390;
  undefined2 *local_388;
  undefined8 uStack_380;
  undefined2 *local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  iVar5 = (int)param_1[1];
  if (1 < (longlong)iVar5) {
    lVar19 = *param_1;
    memset(local_358,0,0x2f0);
    local_360 = lVar19 + (longlong)iVar5 * 8 + -8;
    local_368 = lVar19;
    fVar24 = logf((float)iVar5);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar7 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      iVar5 = (int)plVar7[2];
      iVar8 = (int)((ulonglong)((longlong)puVar4 - (longlong)puVar10) >> 3);
      uVar16 = (ulonglong)(iVar8 + 1);
      local_3a0 = plVar7;
      if (iVar5 != 0) {
LAB_147092271:
        if (8 < (int)(uint)uVar16) {
          local_398 = CONCAT44(local_398._4_4_,iVar5);
          uVar15 = (uint)uVar16 >> 1;
          uVar3 = puVar10[uVar15];
          puVar10[uVar15] = *puVar10;
          *puVar10 = uVar3;
          puVar14 = puVar4 + 1;
          puVar9 = puVar10;
          local_390 = puVar4;
LAB_1470922a0:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar4) goto code_r0x0001470922ad;
          goto LAB_147092364;
        }
        for (; plVar7 = local_3a0, puVar9 = puVar10, puVar14 = puVar10, puVar10 < puVar4;
            puVar4 = puVar4 + -1) {
          while (puVar14 = puVar14 + 1, puVar14 <= puVar4) {
            uVar3 = *puVar9;
            local_378 = (undefined2 *)0x0;
            uStack_370 = 0;
            FUN_1400b2348(*puVar14,&local_378,1);
            local_388 = (undefined2 *)0x0;
            uStack_380 = 0;
            FUN_1400b2348(uVar3,&local_388,1);
            puVar6 = local_378;
            if ((int)uStack_370 == 0) {
              puVar6 = &DAT_149dfb77a;
            }
            puVar17 = local_388;
            if ((int)uStack_380 == 0) {
              puVar17 = &DAT_149dfb77a;
            }
            lVar19 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
              uVar15 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
              uVar13 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470929a1;
                }
                iVar5 = uVar15 - uVar13;
                goto LAB_1470929cc;
              }
              if (uVar1 == 0) break;
LAB_1470929a1:
              lVar19 = lVar19 + 2;
            }
            iVar5 = 0;
LAB_1470929cc:
            if (local_388 != (undefined2 *)0x0) {
              FUN_1400020a8(local_388);
            }
            if (local_378 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (iVar5 < 0) {
              puVar9 = puVar14;
            }
          }
          uVar3 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar3;
        }
        goto LAB_147092a1c;
      }
LAB_1470924ed:
      plVar7 = local_3a0;
      if ((int)uVar16 != 0) {
        uVar15 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        local_398 = uVar16;
        do {
          puVar4 = (undefined8 *)(ulonglong)uVar15;
          uVar13 = uVar15 * 2 + 1;
          local_390 = puVar4;
          if ((int)uVar13 < (int)uVar16) {
            do {
              uVar21 = uVar15 * 2 + 2;
              uVar15 = uVar13;
              if ((int)uVar21 < (int)uVar16) {
                uVar3 = puVar10[(int)uVar21];
                local_378 = (undefined2 *)0x0;
                uStack_370 = 0;
                FUN_1400b2348(puVar10[(int)uVar13],&local_378,1);
                local_388 = (undefined2 *)0x0;
                uStack_380 = 0;
                FUN_1400b2348(uVar3,&local_388,1);
                puVar6 = local_378;
                if ((int)uStack_370 == 0) {
                  puVar6 = &DAT_149dfb77a;
                }
                puVar17 = local_388;
                if ((int)uStack_380 == 0) {
                  puVar17 = &DAT_149dfb77a;
                }
                lVar19 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
                  uVar15 = (uint)uVar1;
                  uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
                  uVar20 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470925a6;
                    }
                    iVar5 = uVar15 - uVar20;
                    goto LAB_1470925d5;
                  }
                  if (uVar1 == 0) break;
LAB_1470925a6:
                  lVar19 = lVar19 + 2;
                }
                iVar5 = 0;
LAB_1470925d5:
                if (local_388 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_388);
                }
                if (local_378 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar15 = uVar21;
                if (iVar5 < 0) {
                  uVar15 = uVar13;
                }
              }
              iVar5 = (int)puVar4;
              uVar3 = puVar10[iVar5];
              local_378 = (undefined2 *)0x0;
              uStack_370 = 0;
              FUN_1400b2348(puVar10[(int)uVar15],&local_378,1);
              local_388 = (undefined2 *)0x0;
              uStack_380 = 0;
              FUN_1400b2348(uVar3,&local_388,1);
              puVar6 = local_378;
              if ((int)uStack_370 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              puVar17 = local_388;
              if ((int)uStack_380 == 0) {
                puVar17 = &DAT_149dfb77a;
              }
              lVar19 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
                uVar13 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
                uVar21 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14709266a;
                  }
                  iVar8 = uVar13 - uVar21;
                  goto LAB_147092695;
                }
                if (uVar1 == 0) break;
LAB_14709266a:
                lVar19 = lVar19 + 2;
              }
              iVar8 = 0;
LAB_147092695:
              if (local_388 != (undefined2 *)0x0) {
                FUN_1400020a8(local_388);
              }
              if (local_378 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar16 = local_398;
              if (-1 < iVar8) break;
              uVar3 = puVar10[iVar5];
              puVar10[iVar5] = puVar10[(int)uVar15];
              puVar10[(int)uVar15] = uVar3;
              uVar13 = uVar15 * 2 + 1;
              puVar4 = (undefined8 *)(ulonglong)uVar15;
            } while ((int)uVar13 < (int)local_398);
          }
          uVar15 = (int)local_390 - 1;
        } while ((int)local_390 != 0);
        plVar7 = local_3a0;
        if (1 < (int)uVar16) {
          uVar18 = uVar16 & 0xffffffff;
          uVar3 = *puVar10;
          *puVar10 = puVar10[uVar18 - 1];
          puVar10[uVar18 - 1] = uVar3;
          if ((int)uVar16 != 2) {
            do {
              local_398 = uVar18 - 1;
              iVar5 = 0;
              iVar22 = 1;
              iVar8 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar12 = iVar22;
                if ((longlong)iVar5 < (longlong)local_398) {
                  uVar3 = puVar10[iVar5];
                  local_378 = (undefined2 *)0x0;
                  uStack_370 = 0;
                  FUN_1400b2348(puVar10[iVar22],&local_378,1);
                  local_388 = (undefined2 *)0x0;
                  uStack_380 = 0;
                  FUN_1400b2348(uVar3,&local_388,1);
                  puVar6 = local_378;
                  if ((int)uStack_370 == 0) {
                    puVar6 = &DAT_149dfb77a;
                  }
                  puVar17 = local_388;
                  if ((int)uStack_380 == 0) {
                    puVar17 = &DAT_149dfb77a;
                  }
                  lVar19 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
                    uVar15 = (uint)uVar1;
                    uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
                    uVar13 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470927ae;
                      }
                      iVar11 = uVar15 - uVar13;
                      goto LAB_1470927de;
                    }
                    if (uVar1 == 0) break;
LAB_1470927ae:
                    lVar19 = lVar19 + 2;
                  }
                  iVar11 = 0;
LAB_1470927de:
                  if (local_388 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_388);
                  }
                  if (local_378 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar12 = iVar5;
                  if (iVar11 < 0) {
                    iVar12 = iVar22;
                  }
                }
                uVar3 = puVar10[iVar8];
                local_378 = (undefined2 *)0x0;
                uStack_370 = 0;
                FUN_1400b2348(puVar10[iVar12],&local_378,1);
                local_388 = (undefined2 *)0x0;
                uStack_380 = 0;
                FUN_1400b2348(uVar3,&local_388,1);
                puVar6 = local_378;
                if ((int)uStack_370 == 0) {
                  puVar6 = &DAT_149dfb77a;
                }
                puVar17 = local_388;
                if ((int)uStack_380 == 0) {
                  puVar17 = &DAT_149dfb77a;
                }
                lVar19 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
                  uVar15 = (uint)uVar1;
                  uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
                  uVar13 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147092872;
                    }
                    iVar5 = uVar15 - uVar13;
                    goto LAB_14709289d;
                  }
                  if (uVar1 == 0) break;
LAB_147092872:
                  lVar19 = lVar19 + 2;
                }
                iVar5 = 0;
LAB_14709289d:
                if (local_388 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_388);
                }
                if (local_378 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (-1 < iVar5) break;
                uVar3 = puVar10[iVar8];
                puVar10[iVar8] = puVar10[iVar12];
                puVar10[iVar12] = uVar3;
                iVar5 = iVar12 * 2;
                iVar22 = iVar12 * 2 + 1;
                iVar8 = iVar12;
              } while ((longlong)iVar22 < (longlong)local_398);
              uVar3 = *puVar10;
              *puVar10 = puVar10[local_398 - 1];
              puVar10[local_398 - 1] = uVar3;
              plVar7 = local_3a0;
              uVar18 = local_398;
            } while (2 < local_398);
          }
        }
      }
LAB_147092a1c:
      plVar7 = plVar7 + -3;
    } while (&local_368 <= plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001470922ad:
  uVar3 = *puVar10;
  local_378 = (undefined2 *)0x0;
  uStack_370 = 0;
  FUN_1400b2348(*puVar9,&local_378,1);
  local_388 = (undefined2 *)0x0;
  uStack_380 = 0;
  FUN_1400b2348(uVar3,&local_388,1);
  puVar6 = local_378;
  if ((int)uStack_370 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  puVar17 = local_388;
  if ((int)uStack_380 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  lVar19 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
    uVar15 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
    uVar13 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147092315;
      }
      iVar5 = uVar15 - uVar13;
      goto LAB_147092340;
    }
    if (uVar1 == 0) break;
LAB_147092315:
    lVar19 = lVar19 + 2;
  }
  iVar5 = 0;
LAB_147092340:
  if (local_388 != (undefined2 *)0x0) {
    FUN_1400020a8(local_388);
  }
  if (local_378 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar5) goto LAB_1470922a0;
LAB_147092364:
  do {
    puVar23 = puVar14;
    puVar14 = puVar23 + -1;
    if (puVar14 <= puVar10) break;
    uVar3 = *puVar14;
    local_378 = (undefined2 *)0x0;
    uStack_370 = 0;
    FUN_1400b2348(*puVar10,&local_378,1);
    local_388 = (undefined2 *)0x0;
    uStack_380 = 0;
    FUN_1400b2348(uVar3,&local_388,1);
    puVar6 = local_378;
    if ((int)uStack_370 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    puVar17 = local_388;
    if ((int)uStack_380 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    lVar19 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar17 + lVar19);
      uVar15 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar6 + lVar19);
      uVar13 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1470923db;
        }
        iVar5 = uVar15 - uVar13;
        goto LAB_147092406;
      }
      if (uVar1 == 0) break;
LAB_1470923db:
      lVar19 = lVar19 + 2;
    }
    iVar5 = 0;
LAB_147092406:
    if (local_388 != (undefined2 *)0x0) {
      FUN_1400020a8(local_388);
    }
    if (local_378 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar5);
  if (puVar9 <= puVar14) {
    uVar3 = *puVar9;
    *puVar9 = *puVar14;
    *puVar14 = uVar3;
    goto LAB_1470922a0;
  }
  uVar3 = *puVar10;
  *puVar10 = *puVar14;
  puVar23[-1] = uVar3;
  iVar5 = (int)local_398 + -1;
  puVar23 = puVar23 + -2;
  if ((longlong)puVar23 - (longlong)puVar10 < (longlong)local_390 - (longlong)puVar9) {
    if (puVar9 < puVar4) {
      *local_3a0 = (longlong)puVar9;
      local_3a0[1] = (longlong)puVar4;
      *(int *)(local_3a0 + 2) = iVar5;
      local_3a0 = local_3a0 + 3;
    }
    plVar7 = local_3a0;
    if (puVar14 <= puVar10 + 1) goto LAB_147092a1c;
  }
  else {
    plVar7 = local_3a0;
    if (puVar10 + 1 < puVar14) {
      *local_3a0 = (longlong)puVar10;
      local_3a0[1] = (longlong)puVar23;
      *(int *)(local_3a0 + 2) = iVar5;
      plVar7 = local_3a0 + 3;
    }
    puVar10 = puVar9;
    puVar23 = puVar4;
    if (puVar4 <= puVar9) goto LAB_147092a1c;
  }
  local_3a0 = plVar7;
  iVar8 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar10) >> 3);
  uVar16 = (ulonglong)(iVar8 + 1);
  puVar4 = puVar23;
  if (iVar5 == 0) goto LAB_1470924ed;
  goto LAB_147092271;
}



// FUNCTION 147092a64 FUN_147092a64 body=622 status=ok
// SIG undefined FUN_147092a64(void)

void FUN_147092a64(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined2 local_dc;
  byte local_d9;
  uint local_d8 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar6 = 1;
  if (2 < uVar2) {
    uVar8 = (ulonglong)(uVar2 - 1) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar6 = (undefined1)lVar9;
  }
  *(undefined1 *)(param_1 + 0x90) = uVar6;
  local_d9 = 0;
  local_dc = (undefined2)uVar2;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_d8[0x1c] = 0;
  local_d8[0x1d] = 0;
  local_d8[0x1e] = 0;
  local_d8[0x1f] = 0;
  local_d8[0x18] = 0;
  local_d8[0x19] = 0;
  local_d8[0x1a] = 0;
  local_d8[0x1b] = 0;
  local_d8[0x14] = 0;
  local_d8[0x15] = 0;
  local_d8[0x16] = 0;
  local_d8[0x17] = 0;
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  local_d8[0x12] = 0;
  local_d8[0x13] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  uVar3 = *(uint *)(param_1 + 4);
  uVar8 = (ulonglong)uVar3 * 2 + 1;
  uVar13 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> uVar13 == 0; uVar13 = uVar13 - 1) {
    }
  }
  uVar5 = 0;
  if ((uVar13 ^ 0x3f) != 0x3f) {
    puVar11 = DAT_14c75f628;
    if (DAT_14c75f640 < 0x10) {
      puVar11 = &DAT_14c75f628;
    }
    uVar8 = 0;
    bVar12 = 0;
    do {
      if ((uVar3 >> ((uint)uVar8 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_58 + (ulonglong)bVar12) =
             *(undefined1 *)((longlong)puVar11 + uVar8);
        local_d8[bVar12] = 1 << ((byte)uVar8 & 0x1f);
        bVar12 = bVar12 + 1;
        local_d9 = bVar12;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 ^ uVar13 ^ 0x3f) != 0x3f);
    uVar5 = (uint)bVar12;
  }
  FUN_1456bd906(param_2,*(int *)(param_2 + 0x18) + ((uVar2 & 0xffff) + 8) * uVar5 + 0x37);
  uVar4 = FUN_144a54ea4(param_2,8);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  local_e8 = 8;
  FUN_14493566c(lVar9,uVar4,&local_d9,0);
  uVar4 = FUN_144a54ea4(param_2,0x10);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  local_e8 = 0x10;
  FUN_14493566c(lVar9,uVar4,&local_dc,0);
  uVar2 = (uint)local_d9;
  uVar4 = FUN_144a54ea4(param_2,uVar2 << 3);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  local_e8 = uVar2 << 3;
  FUN_14493566c(lVar9,uVar4,&local_58,0);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar10 = *(uint **)(param_1 + 0x30);
    puVar1 = puVar10 + *(int *)(param_1 + 0x38);
    uVar8 = (ulonglong)local_d9;
    do {
      if ((char)uVar8 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar13 = 0;
        do {
          uVar2 = local_d8[uVar13];
          uVar3 = *puVar10;
          uVar5 = FUN_144a54ea4(param_2,1);
          lVar9 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar9 = param_2;
          }
          uVar7 = uVar5 + 0x1f;
          if (-1 < (int)uVar5) {
            uVar7 = uVar5;
          }
          *(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) =
               (uint)((uVar3 & uVar2) != 0) << ((byte)uVar5 & 0x1f) |
               *(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) & ~(1 << (uVar5 & 0x1f));
          uVar13 = uVar13 + 1;
          uVar8 = (ulonglong)local_d9;
        } while (uVar13 < uVar8);
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  FUN_147092179(param_2,8);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147092cd4 FUN_147092cd4 body=217 status=ok
// SIG undefined FUN_147092cd4(void)

void FUN_147092cd4(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 uVar9;
  longlong lVar10;
  
  FUN_147092179(param_2,8);
  iVar3 = *(int *)(param_2 + 0x18);
  iVar8 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  iVar3 = *(int *)(param_1 + 8) * 8 + 0x80;
  if (0 < iVar3) {
    uVar6 = FUN_144a54ea4(param_2,iVar3);
    FUN_1447c6044(param_2,uVar6,iVar3,0);
  }
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar7 = param_2;
  }
  puVar1 = (uint *)(lVar7 + (iVar8 >> 3));
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar9 = 1;
  if (2 < uVar4) {
    uVar2 = (ulonglong)(uVar4 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar9 = (undefined1)lVar5;
  }
  *(undefined1 *)(param_1 + 0x70) = uVar9;
  *puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar10 = 0;
    do {
      memcpy((void *)(*(longlong *)(lVar5 + 8 + lVar10) + lVar7 + (iVar8 >> 3) + 0x10),
             *(void **)(lVar5 + lVar10),(ulonglong)(*(int *)(lVar5 + 0x10 + lVar10) + 1));
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar10);
  }
  return;
}



// FUNCTION 147092dae FUN_147092dae body=499 status=ok
// SIG undefined FUN_147092dae(void)

void FUN_147092dae(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  size_t sVar10;
  int iVar11;
  char *_Str;
  int iVar12;
  void *_Dst;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar6 = 1;
  if (2 < uVar3) {
    uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar6 = (undefined1)lVar15;
  }
  *(undefined1 *)(param_1 + 0x78) = uVar6;
  lVar15 = DAT_14c9a1ab0;
  if (DAT_14c9a1ab0 == 0) goto LAB_147092dfc;
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 == 0) {
LAB_147092e50:
    lVar14 = 0;
  }
  else {
    FUN_14709b626(&local_58);
    iVar12 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar12 == 0) goto LAB_147092e50;
    lVar4 = *(longlong *)(param_1 + 8);
    lVar13 = 0;
    lVar14 = 0;
    do {
      puVar8 = (undefined8 *)FUN_147092fa2(&local_58);
      uVar2 = *(ushort *)(lVar4 + lVar13);
      pcVar9 = "Asset";
      if ((short)uVar2 != 0x7fff) {
        if ((((short)uVar2 < 0) || (*(int *)(lVar15 + 0xd0) <= (int)(short)uVar2)) ||
           (lVar5 = *(longlong *)(*(longlong *)(lVar15 + 200) + (ulonglong)uVar2 * 8), lVar5 == 0))
        {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = *(char **)(lVar5 + 0xb8);
        }
      }
      _Str = "";
      if (pcVar9 != (char *)0x0) {
        _Str = pcVar9;
      }
      *puVar8 = _Str;
      sVar10 = strlen(_Str);
      puVar8[1] = (longlong)(int)sVar10;
      lVar14 = lVar14 + (int)sVar10 + 1;
      lVar13 = lVar13 + 2;
    } while ((longlong)iVar12 * 2 != lVar13);
  }
  FUN_147092179(param_2,8);
  iVar12 = *(int *)(param_2 + 0x18);
  iVar11 = iVar12 + 7;
  if (-1 < iVar12) {
    iVar11 = iVar12;
  }
  lVar15 = (longlong)(iVar11 >> 3);
  iVar12 = (int)lVar14 * 8 + 0x80;
  if (0 < iVar12) {
    uVar7 = FUN_144a54ea4(param_2,iVar12);
    FUN_1447c6044(param_2,uVar7,iVar12,0);
  }
  lVar4 = local_58;
  lVar13 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar13 = param_2;
  }
  *(undefined4 *)(lVar13 + lVar15) = *(undefined4 *)(param_1 + 0x10);
  *(longlong *)(lVar13 + 8 + lVar15) = lVar14;
  lVar14 = (longlong)(int)uStack_50;
  if (lVar14 != 0) {
    _Dst = (void *)(lVar13 + lVar15 + 0x10);
    lVar15 = 0;
    do {
      memcpy(_Dst,*(void **)(lVar4 + lVar15),*(longlong *)(lVar4 + 8 + lVar15) + 1);
      _Dst = (void *)((longlong)_Dst + *(longlong *)(lVar4 + 8 + lVar15) + 1);
      lVar15 = lVar15 + 0x10;
    } while (lVar14 * 0x10 != lVar15);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
LAB_147092dfc:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147092fa2 FUN_147092fa2 body=59 status=ok
// SIG undefined FUN_147092fa2(void)

longlong FUN_147092fa2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14709b684(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14709b67c(lVar2);
  return lVar2;
}



// FUNCTION 147092fde FUN_147092fde body=807 status=ok
// SIG undefined FUN_147092fde(void)

void FUN_147092fde(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *_Src;
  int iVar7;
  void *_Dst;
  wchar_t *_Str;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  wchar_t *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [128];
  longlong local_78;
  char *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar3 = *(uint *)(param_1 + 0x10);
  local_148 = param_2;
  local_140 = param_1;
  if (uVar3 < 3) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    if (uVar3 != 0) goto LAB_14709304a;
  }
  else {
    uVar6 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    *(char *)(param_1 + 0x68) = (char)lVar11;
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
LAB_14709304a:
    uStack_120 = 0;
    local_128 = (undefined8 *)0x0;
    FUN_14709b7cc(&local_128);
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar11 = *(longlong *)(param_1 + 8);
      lVar12 = (longlong)*(int *)(param_1 + 0x10) * 0x28;
      lVar10 = 0;
      do {
        local_138 = (wchar_t *)0x0;
        uStack_130 = 0;
        FUN_1400b2348(lVar11,&local_138,1);
        FUN_1414c0540(&local_138);
        _Str = L"";
        if ((int)uStack_130 != 0) {
          _Str = local_138;
        }
        local_78 = 0;
        if (_Str == (wchar_t *)0x0) {
          local_70 = (char *)0x0;
          local_68 = 0;
        }
        else {
          sVar4 = wcslen(_Str);
          FUN_1449b853c(local_f8,_Str,sVar4 & 0xffffffff,1);
        }
        pcVar1 = local_70;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        sVar4 = strlen(local_70);
        FUN_140cd1a74(&local_118,pcVar1,sVar4);
        uVar6 = uStack_120;
        lVar8 = (longlong)(int)uStack_120;
        uVar3 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar3);
        if (uStack_120._4_4_ < uVar3) {
          FUN_14709b82c(&local_128,uVar6 & 0xffffffff);
        }
        local_128[lVar8 * 4 + 2] = 0;
        (local_128 + lVar8 * 4 + 2)[1] = 0;
        local_128[lVar8 * 4] = 0;
        (local_128 + lVar8 * 4)[1] = 0;
        puVar9 = local_128 + lVar8 * 4 + 2;
        *(undefined4 *)puVar9 = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar9 + 4) = local_108._4_4_;
        *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_100._4_4_;
        puVar9 = local_128 + lVar8 * 4;
        *(undefined4 *)puVar9 = (undefined4)local_118;
        *(undefined4 *)((longlong)puVar9 + 4) = local_118._4_4_;
        *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_110._4_4_;
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = local_118 & 0xffffffffffffff00;
        FUN_1401d9a90(&local_118);
        lVar8 = (longlong)local_68;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_138 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + lVar8 + 1;
        lVar11 = lVar11 + 0x28;
        lVar12 = lVar12 + -0x28;
      } while (lVar12 != 0);
      goto LAB_147093063;
    }
  }
  lVar10 = 0;
LAB_147093063:
  lVar11 = local_148;
  FUN_147092179(local_148,8);
  iVar7 = *(int *)(lVar11 + 0x18);
  iVar5 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar5 = iVar7;
  }
  lVar12 = (longlong)(iVar5 >> 3);
  iVar7 = (int)lVar10 * 8 + 0x80;
  if (0 < iVar7) {
    uVar2 = FUN_144a54ea4(lVar11,iVar7);
    FUN_1447c6044(lVar11,uVar2,iVar7,0);
  }
  lVar8 = *(longlong *)(lVar11 + 0x10);
  if (*(longlong *)(lVar11 + 0x10) == 0) {
    lVar8 = lVar11;
  }
  *(undefined4 *)(lVar8 + lVar12) = *(undefined4 *)(local_140 + 0x10);
  *(longlong *)(lVar8 + 8 + lVar12) = lVar10;
  uVar6 = 0;
  if ((longlong)(int)uStack_120 != 0) {
    _Dst = (void *)(lVar8 + lVar12 + 0x10);
    lVar11 = (longlong)(int)uStack_120 << 5;
    puVar9 = local_128;
    do {
      _Src = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Src = (undefined8 *)*puVar9;
      }
      memcpy(_Dst,_Src,puVar9[2]);
      *(undefined1 *)((longlong)_Dst + puVar9[2]) = 0;
      _Dst = (void *)((longlong)_Dst + puVar9[2] + 1);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
    uVar6 = uStack_120 & 0xffffffff;
  }
  FUN_14709b7a5(local_128,uVar6);
  if (local_128 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147093308 FUN_147093308 body=339 status=ok
// SIG undefined FUN_147093308(void)

void FUN_147093308(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x68) == '\0')) {
    local_34 = 0;
    uVar2 = FUN_144a54ea4(param_2,0x20);
    lVar4 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar4 = param_2;
    }
    local_48 = 0x20;
    FUN_14493566c(lVar4,uVar2,&local_34,0);
  }
  else {
    FUN_1456bd906(param_2,*(int *)(param_2 + 0x18) +
                          (uint)*(byte *)(param_1 + 0x69) * *(int *)(param_1 + 0x10) + 0x20);
    local_34 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_144a54ea4(param_2,0x18);
    lVar4 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar4 = param_2;
    }
    local_48 = 0x18;
    FUN_14493566c(lVar4,uVar2,&local_34,0);
    uVar2 = FUN_144a54ea4(param_2,8);
    lVar4 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar4 = param_2;
    }
    local_48 = 8;
    FUN_14493566c(lVar4,uVar2,(byte *)(param_1 + 0x69),0);
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar5 = (longlong)*(int *)(param_1 + 0x10) << 2;
      do {
        bVar1 = *(byte *)(param_1 + 0x69);
        uVar2 = FUN_144a54ea4(param_2,bVar1);
        lVar3 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar3 = param_2;
        }
        local_48 = (uint)bVar1;
        FUN_14493566c(lVar3,uVar2,lVar4,0);
        lVar4 = lVar4 + 4;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709345c FUN_14709345c body=939 status=ok
// SIG undefined FUN_14709345c(void)

undefined4 * FUN_14709345c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  byte bVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar6 = (byte *)*param_2;
  if (((pbVar6 == (byte *)0x0) || ((*pbVar6 & 0x40) != 0 || (*pbVar6 & 3) == 0)) ||
     (((char)param_3 == '\0' && ((pbVar6[1] & 4) != 0)))) {
    puVar4 = (undefined4 *)0x0;
    uVar5 = local_78;
    goto switchD_147093560_caseD_0;
  }
  puVar4 = (undefined4 *)FUN_147093808(*param_1);
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 **)(puVar4 + 6) = puVar1;
  uVar2 = FUN_147093874(param_1[1],*puVar1);
  *puVar4 = uVar2;
  if (**(char **)(puVar4 + 6) < '\0') {
LAB_147093520:
    uVar5 = FUN_142b207ce(*(char **)(puVar4 + 6) + 0x24);
    uVar2 = 0xffffffff;
    if (param_1[5] != 0) {
      uVar2 = FUN_1470941b4(param_1[5],uVar5);
      if (param_1[6] != 0) {
        FUN_14709757e(param_1[6],uVar2);
      }
    }
    puVar4[3] = uVar2;
    pbVar6 = (byte *)*param_2;
    uVar5 = local_78;
    if (pbVar6 == (byte *)0x0) goto switchD_147093560_caseD_0;
    bVar10 = *pbVar6;
  }
  else {
    pbVar6 = (byte *)*param_2;
    uVar5 = local_78;
    if (pbVar6 == (byte *)0x0) goto switchD_147093560_caseD_0;
    bVar10 = *pbVar6;
    if ((~bVar10 & 3) == 0) goto LAB_147093520;
  }
  uVar5 = local_78;
  switch(bVar10 & 3) {
  case 1:
    puVar9 = &DAT_149e02088;
    if (*(undefined1 **)(pbVar6 + 8) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(pbVar6 + 8);
    }
    if ((*(byte *)(*(longlong *)(puVar4 + 6) + 1) & 1) != 0) {
      puVar9 = (undefined1 *)FUN_147093982(param_1,*(longlong *)(puVar4 + 6),puVar9);
    }
    uVar2 = 0;
    if (param_1[2] != 0) {
      uVar2 = FUN_14709432e(param_1[2],puVar9);
      if (param_1[3] != 0) {
        FUN_14709757e(param_1[3],uVar2);
      }
    }
    puVar4[1] = uVar2;
    uVar2 = FUN_147093c7a(param_1[4],*(undefined2 *)(*(longlong *)(puVar4 + 6) + 0x20));
    puVar4[2] = uVar2;
    uVar5 = local_78;
    break;
  case 2:
    if ((**(byte **)(puVar4 + 6) & 2) == 0) {
      plVar14 = &DAT_14c9a1270;
    }
    else {
      plVar14 = *(longlong **)(*(byte **)(puVar4 + 6) + 8);
    }
    if ((longlong)(int)plVar14[2] != 0) {
      lVar13 = *plVar14;
      lVar8 = (longlong)(int)plVar14[2] << 4;
      do {
        lVar7 = FUN_14709345c(param_1,lVar13,param_3);
        if (lVar7 != 0) {
          iVar12 = puVar4[10];
          puVar4[10] = iVar12 + 1U;
          if ((uint)puVar4[0xb] < iVar12 + 1U) {
            FUN_14709b5a0(puVar4 + 8,iVar12);
          }
          *(longlong *)(*(longlong *)(puVar4 + 8) + (longlong)iVar12 * 8) = lVar7;
        }
        lVar13 = lVar13 + 0x10;
        lVar8 = lVar8 + -0x10;
        uVar5 = local_78;
      } while (lVar8 != 0);
    }
    break;
  case 3:
    if ((**(byte **)(puVar4 + 6) & 2) == 0) {
      plVar14 = &DAT_14c9a1288;
    }
    else {
      plVar14 = (longlong *)(*(longlong *)(*(byte **)(puVar4 + 6) + 8) + 0x18);
    }
    plVar11 = plVar14 + 3;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar11;
    if ((int)plVar14[6] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)plVar14[6];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar14;
    if ((local_78._4_4_ != iVar12) || (uStack_60 != plVar11)) {
      local_a0 = (longlong *)(puVar4 + 8);
      iVar3 = local_78._4_4_;
      local_a4 = iVar12;
      local_98 = plVar11;
      local_78 = uVar5;
      do {
        lVar13 = *local_90;
        lVar8 = FUN_14709345c(param_1,(longlong)iVar3 * 0x40 + lVar13 + 0x28,param_3);
        if (lVar8 != 0) {
          uVar2 = 0xffffffff;
          if (param_1[5] != 0) {
            uVar2 = FUN_1470941b4(param_1[5],lVar13 + (longlong)iVar3 * 0x40);
            if (param_1[6] != 0) {
              FUN_14709757e(param_1[6],uVar2);
            }
          }
          *(undefined4 *)(lVar8 + 0x10) = uVar2;
          iVar12 = puVar4[10];
          puVar4[10] = iVar12 + 1U;
          if ((uint)puVar4[0xb] < iVar12 + 1U) {
            FUN_14709b5a0(local_a0,iVar12);
          }
          *(longlong *)(*local_a0 + (longlong)iVar12 * 8) = lVar8;
          plVar11 = local_98;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar14 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar11 || local_78._4_4_ != local_a4))
      ;
    }
  }
switchD_147093560_caseD_0:
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 147093808 FUN_147093808 body=107 status=ok
// SIG undefined FUN_147093808(void)

undefined4 * FUN_147093808(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_14001cc68(0x30,0x10);
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0xffffffff;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14709b5a0(param_1,iVar1);
  }
  *(undefined4 **)(*param_1 + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 147093874 FUN_147093874 body=268 status=ok
// SIG undefined FUN_147093874(void)

uint FUN_147093874(uint *param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  uint *local_40;
  uint *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = param_2 & *param_1;
  param_1[1] = param_1[1] | param_2;
  param_1[10] = param_1[10] + 1;
  local_44 = param_2;
  if (param_1[0x12] != param_1[0x1d]) {
    puVar2 = param_1 + 0x1e;
    if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
      puVar2 = *(uint **)(param_1 + 0x20);
    }
    uVar3 = puVar2[param_1[0x22] - 1 & param_2];
    if (uVar3 != 0xffffffff) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      do {
        lVar1 = lVar4 + (longlong)(int)uVar3 * 0x10;
        if (*(uint *)(lVar4 + (longlong)(int)uVar3 * 0x10) == param_2) {
          if ((uint *)(lVar1 + 4) != (uint *)0x0 && lVar1 != 0) {
            uVar3 = *(uint *)(lVar1 + 4);
            goto LAB_1470938f9;
          }
          break;
        }
        uVar3 = *(uint *)(lVar1 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  local_48 = param_1[0xe];
  lVar4 = (longlong)(int)local_48;
  param_1[0xe] = local_48 + 1;
  if (param_1[0xf] < local_48 + 1) {
    FUN_1447808da(param_1 + 0xc,local_48);
  }
  *(uint *)(*(longlong *)(param_1 + 0xc) + lVar4 * 4) = param_2;
  local_40 = &local_44;
  local_38 = &local_48;
  FUN_14012212c(param_1 + 0x10,local_2c,&local_40,0);
  uVar3 = local_48;
LAB_1470938f9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147093982 FUN_147093982 body=758 status=ok
// SIG undefined FUN_147093982(void)

undefined8 * FUN_147093982(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  wchar_t *_Str;
  undefined1 auStack_1b8 [40];
  wchar_t *local_190;
  int local_188;
  undefined1 local_180 [16];
  longlong local_170;
  longlong local_160 [2];
  longlong local_150;
  undefined2 *local_140;
  int local_138;
  void **local_130;
  undefined4 *local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [128];
  longlong local_40;
  char *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1400b22c2(&local_140,param_3);
  plVar7 = (longlong *)(param_1 + 0x38);
  puVar6 = local_140;
  if (local_138 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  iVar3 = local_138 + -1;
  if (local_138 == 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar6);
  iVar3 = FUN_147097676(plVar7,uVar2,&local_140);
  if (iVar3 != -1) {
    lVar4 = *plVar7 + (longlong)iVar3 * 0x38;
    if (lVar4 != 0) {
      param_3 = (undefined8 *)(*plVar7 + (longlong)iVar3 * 0x38 + 0x10);
      if (0xf < *(ulonglong *)(lVar4 + 0x28)) {
        param_3 = (undefined8 *)*param_3;
      }
      goto LAB_147093a42;
    }
  }
  FUN_14006788a(local_160,param_2,1,1);
  if (local_160[0] != 0) {
    (**(code **)(*DAT_14c9485b8 + 0x158))(DAT_14c9485b8,local_180,local_160);
    FUN_14475cc44(local_180,&local_190);
    _Str = local_190;
    if (local_188 == 0) {
      _Str = L"";
    }
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = (char *)0x0;
      local_30 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1449b853c(local_c0,_Str,sVar5 & 0xffffffff,1);
    }
    pcVar1 = local_38;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    sVar5 = strlen(local_38);
    FUN_140cd1a74(&local_118,pcVar1,sVar5);
    puVar6 = local_140;
    local_f0 = (void *)0x0;
    local_e8 = local_138;
    if ((longlong)local_138 == 0) {
      local_e4 = 0;
    }
    else {
      FUN_1446dd670(&local_f0,local_138,0);
      memcpy(local_f0,puVar6,(longlong)local_138 * 2);
    }
    local_d0 = (undefined4)local_108;
    uStack_cc = local_108._4_4_;
    uStack_c8 = (undefined4)uStack_100;
    uStack_c4 = uStack_100._4_4_;
    local_e0 = (undefined4)local_118;
    uStack_dc = local_118._4_4_;
    uStack_d8 = (undefined4)uStack_110;
    uStack_d4 = uStack_110._4_4_;
    local_108 = 0;
    uStack_100 = 0xf;
    local_118 = local_118 & 0xffffffffffffff00;
    local_130 = &local_f0;
    local_128 = &local_e0;
    FUN_147097742(plVar7,&local_11c);
    lVar4 = *plVar7 + (longlong)local_11c * 0x38;
    param_3 = (undefined8 *)(lVar4 + 0x10);
    if (0xf < *(ulonglong *)(lVar4 + 0x28)) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1401d9a90(&local_e0);
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401d9a90(&local_118);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_190 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_170 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_150 != 0) {
    FUN_1400020a8();
  }
LAB_147093a42:
  if (local_140 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 147093c7a FUN_147093c7a body=239 status=ok
// SIG undefined FUN_147093c7a(void)

int FUN_147093c7a(int *param_1,short param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  int local_48;
  short local_42;
  short *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_1 + 1;
  local_42 = param_2;
  if (param_1[0xc] != param_1[0x17]) {
    piVar3 = param_1 + 0x18;
    if (*(int **)(param_1 + 0x1a) != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 0x1a);
    }
    iVar2 = piVar3[param_1[0x1c] - 1U & (int)param_2];
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 10);
      do {
        lVar1 = lVar4 + (longlong)iVar2 * 0x10;
        if (*(short *)(lVar4 + (longlong)iVar2 * 0x10) == param_2) {
          if ((lVar1 != 0) && ((int *)(lVar1 + 4) != (int *)0x0)) {
            iVar2 = *(int *)(lVar1 + 4);
            goto LAB_147093d49;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_48 = param_1[4];
  lVar4 = (longlong)local_48;
  param_1[4] = local_48 + 1U;
  if ((uint)param_1[5] < local_48 + 1U) {
    FUN_1405b572a(param_1 + 2,local_48);
  }
  *(short *)(*(longlong *)(param_1 + 2) + lVar4 * 2) = param_2;
  local_40 = &local_42;
  local_38 = &local_48;
  FUN_147097c84(param_1 + 10,local_2c);
  iVar2 = local_48;
LAB_147093d49:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147093d6a FUN_147093d6a body=526 status=ok
// SIG undefined FUN_147093d6a(void)

void FUN_147093d6a(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x90);
  uVar5 = FUN_144a54ea4(param_3,uVar2);
  lVar8 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar8 = param_3;
  }
  FUN_14493566c(lVar8,uVar5,param_2,0,uVar2);
  bVar4 = **(byte **)(param_2 + 0x18);
  if (((char)bVar4 < '\0') || ((bVar4 & 3) == 3)) {
    FUN_147093f78(param_1,*(undefined4 *)(param_2 + 0xc),param_3);
    bVar4 = **(byte **)(param_2 + 0x18);
  }
  switch(bVar4 & 3) {
  case 0:
    goto switchD_147093dec_caseD_0;
  case 1:
    FUN_147094096(param_1,*(undefined4 *)(param_2 + 4),param_3);
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x78);
    uVar5 = FUN_144a54ea4(param_3,uVar2);
    lVar8 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar8 = param_3;
    }
    FUN_14493566c(lVar8,uVar5,param_2 + 8,0,uVar2);
    return;
  case 2:
    iVar7 = *(int *)(param_2 + 0x28);
    if ((longlong)iVar7 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x20);
      lVar12 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar8 + lVar12);
        iVar6 = FUN_144a54ea4(param_3,1);
        lVar9 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar9 = param_3;
        }
        iVar11 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        puVar1 = (uint *)(lVar9 + (longlong)(iVar11 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        FUN_147093d6a(param_1,uVar3,param_3);
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar7 * 8 != lVar12);
    }
    break;
  case 3:
    iVar7 = *(int *)(param_2 + 0x28);
    if ((longlong)iVar7 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x20);
      lVar12 = 0;
      do {
        lVar9 = *(longlong *)(lVar8 + lVar12);
        if (lVar9 != 0) {
          iVar6 = FUN_144a54ea4(param_3,1);
          lVar10 = *(longlong *)(param_3 + 0x10);
          if (*(longlong *)(param_3 + 0x10) == 0) {
            lVar10 = param_3;
          }
          iVar11 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar11 = iVar6;
          }
          puVar1 = (uint *)(lVar10 + (longlong)(iVar11 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          FUN_147093f78(param_1,*(undefined4 *)(lVar9 + 0x10),param_3);
          FUN_147093d6a(param_1,lVar9,param_3);
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar7 * 8 != lVar12);
    }
  }
  iVar7 = FUN_144a54ea4(param_3,1);
  lVar8 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar8 = param_3;
  }
  iVar6 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  bVar4 = (byte)iVar7 & 0x1f;
  puVar1 = (uint *)(lVar8 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
switchD_147093dec_caseD_0:
  return;
}



// FUNCTION 147093f78 FUN_147093f78 body=280 status=ok
// SIG undefined FUN_147093f78(void)

void FUN_147093f78(longlong param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = param_2;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c))) {
      lVar4 = lVar3 + 0x50;
      if (*(longlong *)(lVar3 + 0x58) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x58);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x60) - 1U & param_2) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar5 * 0x10;
          if (*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar5 * 0x10) == param_2) {
            if (lVar4 + 4 != 0 && lVar4 != 0) {
              bVar1 = *(byte *)(lVar3 + 0x68);
              uVar2 = FUN_144a54ea4(param_3,bVar1);
              lVar3 = *(longlong *)(param_3 + 0x10);
              if (*(longlong *)(param_3 + 0x10) == 0) {
                lVar3 = param_3;
              }
              local_38 = (uint)bVar1;
              FUN_14493566c(lVar3,uVar2,lVar4 + 4,0);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
            }
            break;
          }
          iVar5 = *(int *)(lVar4 + 8);
        } while (iVar5 != -1);
      }
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x68);
    uVar2 = FUN_144a54ea4(param_3,bVar1);
    lVar3 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar3 = param_3;
    }
    local_38 = (uint)bVar1;
    FUN_14493566c(lVar3,uVar2,&local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147094096 FUN_147094096 body=280 status=ok
// SIG undefined FUN_147094096(void)

void FUN_147094096(longlong param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = param_2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c))) {
      lVar4 = lVar3 + 0x50;
      if (*(longlong *)(lVar3 + 0x58) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x58);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x60) - 1U & param_2) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar5 * 0x10;
          if (*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar5 * 0x10) == param_2) {
            if (lVar4 + 4 != 0 && lVar4 != 0) {
              bVar1 = *(byte *)(lVar3 + 0x68);
              uVar2 = FUN_144a54ea4(param_3,bVar1);
              lVar3 = *(longlong *)(param_3 + 0x10);
              if (*(longlong *)(param_3 + 0x10) == 0) {
                lVar3 = param_3;
              }
              local_38 = (uint)bVar1;
              FUN_14493566c(lVar3,uVar2,lVar4 + 4,0);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
            }
            break;
          }
          iVar5 = *(int *)(lVar4 + 8);
        } while (iVar5 != -1);
      }
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x70);
    uVar2 = FUN_144a54ea4(param_3,bVar1);
    lVar3 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar3 = param_3;
    }
    local_38 = (uint)bVar1;
    FUN_14493566c(lVar3,uVar2,&local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470941b4 FUN_1470941b4 body=243 status=ok
// SIG undefined FUN_1470941b4(void)

int FUN_1470941b4(int *param_1,uint *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  int local_44;
  uint *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_1 + 1;
  if (param_1[8] != param_1[0x13]) {
    piVar2 = param_1 + 0x14;
    if (*(int **)(param_1 + 0x16) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x16);
    }
    iVar3 = piVar2[param_1[0x18] - 1U & *param_2];
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 6);
      do {
        lVar1 = lVar4 + (longlong)iVar3 * 0x38;
        if (*(uint *)(lVar4 + (longlong)iVar3 * 0x38) == *param_2) {
          if ((lVar1 != 0) && ((int *)(lVar1 + 0x28) != (int *)0x0)) {
            iVar3 = *(int *)(lVar1 + 0x28);
            goto LAB_147094287;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x30);
      } while (iVar3 != -1);
    }
  }
  local_44 = param_1[4];
  lVar4 = (longlong)local_44;
  param_1[4] = local_44 + 1U;
  if ((uint)param_1[5] < local_44 + 1U) {
    FUN_14014a81a(param_1 + 2,local_44);
  }
  FUN_1447a97f4(lVar4 * 0x28 + *(longlong *)(param_1 + 2),param_2);
  local_38 = &local_44;
  local_40 = param_2;
  FUN_147098126(param_1 + 6,local_2c);
  iVar3 = local_44;
LAB_147094287:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470942a8 FUN_1470942a8 body=133 status=ok
// SIG undefined FUN_1470942a8(void)

void FUN_1470942a8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14709862e(param_1);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14709432e FUN_14709432e body=435 status=ok
// SIG undefined FUN_14709432e(void)

int FUN_14709432e(int *param_1,char *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar5 = strlen(param_2);
  local_64 = FUN_1447053be(param_2,sVar5 & 0xffffffff);
  *param_1 = *param_1 + 1;
  plVar9 = (longlong *)(param_1 + 8);
  bVar3 = true;
  lVar10 = -1;
  if (param_1[10] != param_1[0x15]) {
    piVar6 = param_1 + 0x16;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      piVar6 = *(int **)(param_1 + 0x18);
    }
    iVar7 = piVar6[param_1[0x1a] - 1U & local_64];
    if (iVar7 != -1) {
      do {
        lVar8 = *plVar9 + (longlong)iVar7 * 0x10;
        if (*(uint *)(*plVar9 + (longlong)iVar7 * 0x10) == local_64) {
          if ((int *)(lVar8 + 4) != (int *)0x0 && lVar8 != 0) {
            iVar7 = *(int *)(lVar8 + 4);
            lVar8 = *(longlong *)(param_1 + 4);
            local_70 = plVar9;
            goto LAB_14709449a;
          }
          break;
        }
        iVar7 = *(int *)(lVar8 + 8);
      } while (iVar7 != -1);
    }
  }
  goto LAB_147094385;
  while (iVar7 = *(int *)(lVar8 + lVar10 * 0x18 + 0x14), iVar7 != 0) {
LAB_14709449a:
    lVar10 = (longlong)iVar7;
    iVar4 = strcmp(param_2,*(char **)(lVar8 + lVar10 * 0x18));
    if (iVar4 == 0) goto LAB_147094450;
  }
  bVar3 = false;
  plVar9 = local_70;
LAB_147094385:
  iVar7 = param_1[6];
  lVar8 = (longlong)iVar7;
  param_1[6] = iVar7 + 1U;
  local_68 = iVar7;
  if ((uint)param_1[7] < iVar7 + 1U) {
    local_70 = plVar9;
    FUN_14709865e(param_1 + 4,iVar7);
    plVar9 = local_70;
  }
  lVar2 = *(longlong *)(param_1 + 4);
  puVar1 = (undefined8 *)(lVar2 + 8 + lVar8 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(char **)(lVar2 + lVar8 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = *(undefined8 *)(param_1 + 2);
  *(int *)(lVar2 + 0x10 + lVar8 * 0x18) = (int)sVar5;
  *(undefined4 *)(lVar2 + 0x14 + lVar8 * 0x18) = 0;
  *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + (ulonglong)((int)sVar5 + 1);
  if (bVar3) {
    local_60 = &local_64;
    local_58 = &local_68;
    FUN_14499e2d8(plVar9,local_4c,&local_60,0);
    iVar7 = local_68;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 4) + 0x14 + lVar10 * 0x18) = iVar7;
  }
LAB_147094450:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1470944e2 FUN_1470944e2 body=289 status=ok
// SIG undefined FUN_1470944e2(void)

void FUN_1470944e2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  lVar3 = DAT_14c9a1ab0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c9a1ab0 != 0) && (*(char *)(param_1 + 2) == '\x01')) {
    plVar1 = (longlong *)(DAT_14c9a1ab0 + 0x70);
    lVar2 = DAT_14c9a1ab0 + 0x80;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    uStack_30 = 0;
    uStack_40 = lVar2;
    if (*(int *)(DAT_14c9a1ab0 + 0x98) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      iVar6 = *(int *)(lVar3 + 0x98);
    }
    uStack_50 = CONCAT44(uStack_2c,uStack_30);
    local_58 = local_38;
    uVar4 = local_58;
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = (undefined4)uStack_40;
    uStack_5c = uStack_40._4_4_;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    iVar5 = local_58._4_4_;
    local_70 = plVar1;
    if ((local_58._4_4_ != iVar6) || (local_58 = uVar4, uStack_40 != lVar2)) {
      do {
        local_58 = uVar4;
        lVar3 = *(longlong *)(*local_70 + 8 + (longlong)iVar5 * 0x18);
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0xa3) = 0;
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_70 != plVar1 ||
               (CONCAT44(uStack_5c,uStack_60) != lVar2 || local_58._4_4_ != iVar6));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147094604 FUN_147094604 body=532 status=ok
// SIG undefined FUN_147094604(void)

void FUN_147094604(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong **local_a8;
  int local_9c;
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_144893a1c(param_2,0);
  }
  lVar6 = DAT_14c9a1ab0;
  if ((DAT_14c9a1ab0 != 0) && ((longlong)(int)param_1[1] != 0)) {
    local_b8 = 0;
    uStack_b0 = 0;
    lVar9 = *param_1;
    lVar8 = (longlong)(int)param_1[1] * 0x28;
    do {
      uVar4 = FUN_140ca8338(lVar6,lVar9);
      uVar2 = uStack_b0;
      if (((-1 < (short)uVar4) && ((int)(uint)uVar4 < *(int *)(lVar6 + 0xd0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar6 + 200) + (ulonglong)uVar4 * 8), lVar1 != 0)) {
        lVar7 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_14709bac4(&local_b8,uVar2 & 0xffffffff);
        }
        *(longlong *)(local_b8 + lVar7 * 8) = lVar1;
      }
      lVar1 = local_b8;
      lVar9 = lVar9 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
    lVar6 = (longlong)(int)uStack_b0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        local_c0 = *(longlong **)(lVar1 + lVar9);
        cVar3 = (**(code **)(*local_c0 + 0x2c8))(local_c0,*(undefined1 *)(param_3 + 4));
        if (cVar3 != '\0') {
          local_a8 = &local_c0;
          FUN_14709bb4a(local_98,&local_9c,&local_a8);
          lVar8 = local_98[0] + (longlong)local_9c * 0x20 + 8;
          cVar3 = (**(code **)(*local_c0 + 0x350))(local_c0,lVar8);
          if (cVar3 != '\0') {
            FUN_1470921b8(lVar8);
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar6 * 8 != lVar9);
    }
    FUN_142b16622(local_98,param_2,param_3);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14709951e(local_98);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709481a FUN_14709481a body=305 status=ok
// SIG undefined FUN_14709481a(void)

void FUN_14709481a(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1456d172d(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140179e18(param_1,0);
  }
  if ((DAT_14c9a1ab0 != 0) && (iVar2 = *(int *)(DAT_14c9a1ab0 + 0xd0), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(DAT_14c9a1ab0 + 200);
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar6);
      if (lVar5 != 0) {
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(&local_78,*(undefined8 *)(lVar5 + 0xb8),0);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_14014a81a(param_1,iVar3);
        }
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        FUN_1404e49fa(puVar1,&local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709494c FUN_14709494c body=81 status=ok
// SIG undefined FUN_14709494c(void)

void FUN_14709494c(longlong param_1)

{
  FUN_140a6c8c0(param_1 + 0x38);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14709499e FUN_14709499e body=425 status=ok
// SIG undefined FUN_14709499e(void)

undefined8 * FUN_14709499e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_105;
  undefined1 local_101;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_e5;
  undefined1 local_e1;
  undefined1 local_e0 [8];
  longlong *local_d8;
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (char *)0x0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    FUN_1446fe5a4(local_e0,_Str,sVar4 & 0xffffffff,1);
  }
  pcVar3 = local_58;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  sVar4 = strlen(local_58);
  FUN_140cd1a74(&local_48,pcVar3,sVar4);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_f8 = L"UnspecifiedFile";
  local_f0 = 0xf;
  local_108 = 0x100;
  local_106 = 0;
  local_105 = local_e5;
  local_101 = local_e1;
  local_100 = 0;
  local_118 = &local_48;
  if (0xf < uStack_30) {
    local_118 = local_48;
  }
  local_110 = local_38;
  FUN_141183efe(local_e0,&local_118,&local_108,&local_f8);
  FUN_1446dcc2e(param_1,local_e0);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  FUN_1401d9a90(&local_48);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147094b48 FUN_147094b48 body=116 status=ok
// SIG undefined FUN_147094b48(void)

undefined8 * FUN_147094b48(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  undefined2 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_14709c526(*param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147094bbe FUN_147094bbe body=26 status=ok
// SIG undefined FUN_147094bbe(void)

undefined8 FUN_147094bbe(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    return CONCAT71((int7)((ulonglong)pbVar1 >> 8),(*pbVar1 & 0x68) == 0 && (*pbVar1 & 3) != 0);
  }
  return 0;
}



// FUNCTION 147094bd8 FUN_147094bd8 body=21 status=ok
// SIG undefined FUN_147094bd8(void)

undefined8 FUN_147094bd8(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x03');
  }
  return 0;
}



// FUNCTION 147094bee FUN_147094bee body=21 status=ok
// SIG undefined FUN_147094bee(void)

undefined8 FUN_147094bee(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x02');
  }
  return 0;
}



// FUNCTION 147094c04 FUN_147094c04 body=21 status=ok
// SIG undefined FUN_147094c04(void)

undefined8 FUN_147094c04(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x01');
  }
  return 0;
}



// FUNCTION 147094c1a FUN_147094c1a body=306 status=ok
// SIG undefined FUN_147094c1a(void)

longlong * FUN_147094c1a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  int local_90;
  longlong local_80;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  local_b0 = param_2;
  FUN_14000bbd8(local_70,param_3,0);
  FUN_14128c002(local_70,&local_98);
  if ((longlong)local_90 != 0) {
    lVar4 = 0;
    bVar3 = false;
    do {
      local_a8 = *(undefined8 *)(local_98 + lVar4);
      local_a0 = *(undefined4 *)(local_98 + 8 + lVar4);
      FUN_1448075d0(&local_98,&local_a8);
      if (bVar3) {
        lVar1 = *param_1;
      }
      else {
        lVar1 = *local_b0;
      }
      puVar2 = &DAT_14c9a1308;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)FUN_142b20a62(lVar1,&local_98);
      }
      FUN_1446dcc2e(param_1,puVar2);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0xc;
      bVar3 = true;
    } while ((longlong)local_90 * 0xc != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147094d4e FUN_147094d4e body=59 status=ok
// SIG undefined FUN_147094d4e(void)

undefined8 * FUN_147094d4e(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_14071eafe(*param_2,param_3);
  }
  FUN_1446dcc2e(param_1,puVar1);
  return param_1;
}



// FUNCTION 147094d8a FUN_147094d8a body=250 status=ok
// SIG undefined FUN_147094d8a(void)

undefined8 * FUN_147094d8a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  char *_Str;
  void *_Src;
  size_t sVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pbVar2 = (byte *)*param_2;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
     (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
    *param_1 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_158);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    local_38 = 0;
    sVar3 = strlen(_Str);
    FUN_1446e6fe8(local_138,_Str,sVar3 & 0xffffffff,1);
    FUN_140056680(param_1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147094e86 FUN_147094e86 body=42 status=ok
// SIG undefined FUN_147094e86(void)

long FUN_147094e86(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147094ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = strtol(*(char **)(pbVar1 + 8),(char **)0x0,0);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 147094eb0 FUN_147094eb0 body=49 status=ok
// SIG undefined FUN_147094eb0(void)

float FUN_147094eb0(undefined8 *param_1,float param_2)

{
  byte *pbVar1;
  double dVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
    dVar2 = atof(*(char **)(pbVar1 + 8));
    param_2 = (float)dVar2;
  }
  return param_2;
}



// FUNCTION 147094ee2 FUN_147094ee2 body=286 status=ok
// SIG undefined FUN_147094ee2(void)

ulonglong FUN_147094ee2(char *param_1,longlong param_2)

{
  char *pcVar1;
  size_t sVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_a8 [40];
  char *local_80;
  char *local_78;
  ulonglong *local_70;
  char local_68;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  sVar2 = strlen(param_1);
  uVar3 = 0;
  do {
    uVar4 = (uint)sVar2;
    if (uVar4 == 0) goto LAB_147094fcd;
    uVar4 = (int)uVar4 >> 0x1f & uVar4;
    while ((uVar6 = (uint)sVar2, uVar7 = uVar4, uVar5 = uVar4, 0 < (int)uVar6 &&
           (uVar7 = uVar6, uVar5 = uVar6, *param_1 == ' '))) {
      param_1 = param_1 + 1;
      sVar2 = (size_t)(uVar6 - 1);
      if (uVar6 - 1 == 0) goto LAB_147094fcd;
    }
    do {
      sVar2 = (size_t)uVar7;
      if ((0 < (int)uVar7) && (*param_1 == ' ')) goto LAB_147094f69;
      param_1 = param_1 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    sVar2 = 0;
LAB_147094f69:
    if ((uVar5 == (uint)sVar2) || (0x17 < (int)(uVar5 - (uint)sVar2))) goto LAB_147094fcd;
    local_68 = '\0';
    local_70 = &local_48;
    local_80 = local_60;
    local_78 = local_60;
    FUN_1414db1c4(&local_80);
    *local_78 = '\0';
    pcVar1 = local_80;
    dVar8 = atof(local_80);
    *(float *)(param_2 + uVar3 * 4) = (float)dVar8;
    if (local_68 == '\x01') {
      FUN_1400020a8(pcVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  uVar3 = 4;
LAB_147094fcd:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147095002 FUN_147095002 body=133 status=ok
// SIG undefined FUN_147095002(void)

undefined4 * FUN_147095002(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar4 = FUN_14000c2be(param_2,3,&local_38);
    if (iVar4 == 3) {
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *(undefined8 *)(param_1 + 4) = local_28;
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147095088 FUN_147095088 body=133 status=ok
// SIG undefined FUN_147095088(void)

undefined4 * FUN_147095088(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar4 = FUN_14000c2be(param_2,3,&local_38);
    if (iVar4 == 3) {
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *(undefined8 *)(param_1 + 4) = local_28;
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14709510e FUN_14709510e body=131 status=ok
// SIG undefined FUN_14709510e(void)

undefined4 * FUN_14709510e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = FUN_14000c2be(param_2,4,&local_38);
    if (iVar8 == 4) {
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      param_1[4] = local_28;
      param_1[5] = uStack_24;
      param_1[6] = uStack_20;
      param_1[7] = uStack_1c;
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147095192 FUN_147095192 body=142 status=ok
// SIG undefined FUN_147095192(void)

undefined8 * FUN_147095192(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar4 = FUN_147094ee2(param_2,&local_38);
    if (2 < iVar4) {
      puVar5 = &local_38;
      if (iVar4 == 3) {
        puVar5 = param_3;
      }
      uVar1 = *(undefined4 *)((longlong)puVar5 + 0xc);
      *param_1 = local_38;
      *(undefined4 *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
      if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147095222 FUN_147095222 body=221 status=ok
// SIG undefined FUN_147095222(void)

undefined4 * FUN_147095222(undefined4 *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    *param_1 = 0xff000000;
  }
  else {
    iVar2 = FUN_147094ee2(param_2,&local_28);
    if (iVar2 < 3) {
      *(undefined1 *)((longlong)param_1 + 2) = 0;
      *(undefined2 *)param_1 = 0;
      uVar1 = 0xff;
    }
    else {
      if (iVar2 == 3) {
        local_1c = 255.0;
      }
      uVar1 = (undefined1)((uint)(int)ROUND(local_1c + local_1c + -0.5) >> 1);
      *(char *)param_1 = (char)((uint)(int)ROUND(local_20 + local_20 + -0.5) >> 1);
      *(char *)((longlong)param_1 + 1) = (char)((uint)(int)ROUND(local_24 + local_24 + -0.5) >> 1);
      *(char *)((longlong)param_1 + 2) = (char)((uint)(int)ROUND(local_28 + local_28 + -0.5) >> 1);
    }
    *(undefined1 *)((longlong)param_1 + 3) = uVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147095300 FUN_147095300 body=933 status=ok
// SIG undefined FUN_147095300(void)

undefined8 FUN_147095300(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14093cdbe(param_2);
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x68) == 0 && (*pbVar1 & 3) != 0)) {
    puVar5 = (undefined8 *)FUN_1446e60f4(pbVar1,&DAT_14c9a11c0);
    pbVar1 = (byte *)*puVar5;
    if ((pbVar1 != (byte *)0x0) &&
       (((*pbVar1 & 0x6b) == 2 && (*(int *)(*(longlong *)(pbVar1 + 8) + 0x10) != 0)))) {
      local_58 = 0;
      uStack_50 = 0;
      pbVar1 = (byte *)*puVar5;
      puVar6 = &DAT_14c9a1270;
      if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
        puVar6 = *(undefined8 **)(pbVar1 + 8);
      }
      FUN_1470956a6(&local_58,*(undefined4 *)(puVar6 + 2),1);
      if (0 < (int)uStack_50) {
        lVar9 = 0;
        lVar11 = 0;
        lVar10 = 0;
        do {
          lVar3 = local_58;
          pbVar1 = (byte *)*puVar5;
          plVar8 = &DAT_14c9a1270;
          if ((pbVar1 != (byte *)0x0) && (plVar8 = &DAT_14c9a1270, (*pbVar1 & 2) != 0)) {
            plVar8 = *(longlong **)(pbVar1 + 8);
          }
          lVar2 = *plVar8;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11c8);
          }
          pbVar1 = (byte *)*puVar6;
          if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(pbVar1 + 8);
          }
          uVar4 = FUN_14709c1cc(uVar7);
          *(undefined1 *)(lVar3 + lVar11) = uVar4;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11d0);
          }
          pbVar1 = (byte *)*puVar6;
          if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(pbVar1 + 8);
          }
          uVar4 = FUN_14709c252(uVar7);
          *(undefined1 *)(lVar3 + 1 + lVar11) = uVar4;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11d8);
          }
          pbVar1 = (byte *)*puVar6;
          if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(pbVar1 + 8);
          }
          uVar4 = FUN_14709c2d8(uVar7);
          *(undefined1 *)(lVar3 + 2 + lVar11) = uVar4;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11e0);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 4 + lVar11) = fVar12;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11e8);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 8 + lVar11) = fVar12;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11f0);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 0xc + lVar11) = fVar12;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a11f8);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 0x10 + lVar11) = fVar12;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a1200);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 0x14 + lVar11) = fVar12;
          puVar6 = &DAT_14c9a1308;
          if (*(longlong *)(lVar2 + lVar9) != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar2 + lVar9),&DAT_14c9a1208);
          }
          pbVar1 = (byte *)*puVar6;
          fVar12 = 0.0;
          if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
             (*(char **)(pbVar1 + 8) != (char *)0x0)) {
            dVar13 = atof(*(char **)(pbVar1 + 8));
            fVar12 = (float)dVar13;
          }
          *(float *)(lVar3 + 0x18 + lVar11) = fVar12;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x1c;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < (int)uStack_50);
      }
      FUN_147a411ce(param_2,&local_58);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar7 = 1;
      goto LAB_147095372;
    }
  }
  uVar7 = 0;
LAB_147095372:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470956a6 FUN_1470956a6 body=119 status=ok
// SIG undefined FUN_1470956a6(void)

void FUN_1470956a6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14065126e(param_1,iVar1);
    }
    FUN_14709c0e8((longlong)iVar1 * 0x1c + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14709c10e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14709571e FUN_14709571e body=83 status=ok
// SIG undefined FUN_14709571e(void)

undefined8 * FUN_14709571e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a174458;
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



// FUNCTION 147095772 FUN_147095772 body=38 status=ok
// SIG undefined FUN_147095772(void)

undefined8 FUN_147095772(undefined8 param_1,int param_2)

{
  FUN_147099bba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147095798 FUN_147095798 body=29 status=ok
// SIG undefined FUN_147095798(void)

undefined8 FUN_147095798(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470957b6 FUN_1470957b6 body=38 status=ok
// SIG undefined FUN_1470957b6(void)

undefined8 FUN_1470957b6(undefined8 param_1,int param_2)

{
  FUN_14600905c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470957dc FUN_1470957dc body=38 status=ok
// SIG undefined FUN_1470957dc(void)

undefined8 FUN_1470957dc(undefined8 param_1,int param_2)

{
  FUN_140f6e78c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147095802 FUN_147095802 body=38 status=ok
// SIG undefined FUN_147095802(void)

undefined8 FUN_147095802(undefined8 param_1,int param_2)

{
  FUN_1462a2fa6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147095830 FUN_147095830 body=49 status=ok
// SIG undefined FUN_147095830(void)

void FUN_147095830(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147095878 FUN_147095878 body=75 status=ok
// SIG undefined FUN_147095878(void)

undefined8 FUN_147095878(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1403de7ba();
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470958ec FUN_1470958ec body=70 status=ok
// SIG undefined FUN_1470958ec(void)

void FUN_1470958ec(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1470a50b8(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147095996 FUN_147095996 body=52 status=ok
// SIG undefined FUN_147095996(void)

void FUN_147095996(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1470959e8 FUN_1470959e8 body=54 status=ok
// SIG undefined FUN_1470959e8(void)

undefined1 FUN_1470959e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147095b00(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147095a46 FUN_147095a46 body=59 status=ok
// SIG undefined FUN_147095a46(void)

undefined8 FUN_147095a46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147095a8c FUN_147095a8c body=34 status=ok
// SIG undefined FUN_147095a8c(void)

void FUN_147095a8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1459c715c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147095b00 FUN_147095b00 body=77 status=ok
// SIG undefined FUN_147095b00(void)

longlong FUN_147095b00(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1403de7ba(param_1 + 0x20,param_2 + 0x20);
  FUN_147095b4e(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 147095b4e FUN_147095b4e body=95 status=ok
// SIG undefined FUN_147095b4e(void)

undefined8 * FUN_147095b4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459c71c4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147095bae(param_1,iVar1);
      FUN_147095c21(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147095bae FUN_147095bae body=115 status=ok
// SIG undefined FUN_147095bae(void)

void FUN_147095bae(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147095c21 FUN_147095c21 body=90 status=ok
// SIG undefined FUN_147095c21(void)

void FUN_147095c21(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 8 + lVar2);
      puVar1[-1] = *(undefined8 *)(param_2 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1403de7ba();
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


